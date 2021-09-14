/* Make a file that contains some interesting tidbits about compile time */
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <pwd.h>


int main(int argc, char **argv)
{
  time_t theTime;
  struct passwd *p = getpwuid(getuid());
  char *theTimeString;

  theTime = time(NULL);
  theTimeString = ctime(&theTime);
  theTimeString[strlen(theTimeString)-1] = '\0'; /* Remove trailing nl */
  printf("#include <stdint.h>\n"
	 "#include <stdio.h>\n"
	 "#include <time.h>\n"
	 "#include \"common.h\"\n"
	 "const time_t VersionBuildDate = %ld;\n"
	 "const char VersionBuildDateString[] = \"%s\";\n",
	 theTime,theTimeString);
  
  printf("const char VersionBuildUser[] = \"%s\";\n",
	 p ? p->pw_name : "null");

  printf("\n"
	 "void VersionPrint(void)\n"
	 "{\n"
	 "   printf(\"Built:%%s\\nBy:%%s\\n\",VersionBuildDateString,VersionBuildUser);\n"
	 "}\n"
	 "\n"
	 "ParserReturnVal_t CmdVersion(int mode)\n"
	 "{\n"
	 "   if(mode != CMD_INTERACTIVE) return CmdReturnOk;\n"
	 "\n"
	 "   VersionPrint();\n"
	 "   return CmdReturnOk;\n"
	 "}\n"
	 "ADD_CMD(\"version\",CmdVersion,\"                Print version info\")\n");
  return 0;
}
