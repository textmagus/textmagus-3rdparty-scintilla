// Scintilla source code edit control
/** @file SciLexer.h
 ** Interface to the added lexer functions in the SciLexer version of the edit control.
 **/
// Copyright 1998-2002 by Neil Hodgson <neilh@scintilla.org>
// The License.txt file describes the conditions under which this software may be distributed.

// Most of this file is automatically generated from the Scintilla.iface interface definition
// file which contains any comments about the definitions. HFacer.py does the generation.

#ifndef SCILEXER_H
#define SCILEXER_H

// SciLexer features - not in standard Scintilla

//++Autogenerated -- start of section automatically generated from Scintilla.iface
#define SCLEX_CONTAINER 0
#define SCLEX_NULL 1
#define SCLEX_PYTHON 2
#define SCLEX_CPP 3
#define SCLEX_HTML 4
#define SCLEX_XML 5
#define SCLEX_PERL 6
#define SCLEX_SQL 7
#define SCLEX_VB 8
#define SCLEX_PROPERTIES 9
#define SCLEX_ERRORLIST 10
#define SCLEX_MAKEFILE 11
#define SCLEX_BATCH 12
#define SCLEX_XCODE 13
#define SCLEX_LATEX 14
#define SCLEX_LUA 15
#define SCLEX_DIFF 16
#define SCLEX_CONF 17
#define SCLEX_PASCAL 18
#define SCLEX_AVE 19
#define SCLEX_ADA 20
#define SCLEX_LISP 21
#define SCLEX_RUBY 22
#define SCLEX_EIFFEL 23
#define SCLEX_EIFFELKW 24
#define SCLEX_TCL 25
#define SCLEX_NNCRONTAB 26
#define SCLEX_BULLANT 27
#define SCLEX_VBSCRIPT 28
#define SCLEX_ASP 29
#define SCLEX_PHP 30
#define SCLEX_BAAN 31
#define SCLEX_MATLAB 32
#define SCLEX_SCRIPTOL 33
#define SCLEX_ASM 34
#define SCLEX_CPPNOCASE 35
#define SCLEX_AUTOMATIC 1000
#define SCE_P_DEFAULT 0
#define SCE_P_COMMENTLINE 1
#define SCE_P_NUMBER 2
#define SCE_P_STRING 3
#define SCE_P_CHARACTER 4
#define SCE_P_WORD 5
#define SCE_P_TRIPLE 6
#define SCE_P_TRIPLEDOUBLE 7
#define SCE_P_CLASSNAME 8
#define SCE_P_DEFNAME 9
#define SCE_P_OPERATOR 10
#define SCE_P_IDENTIFIER 11
#define SCE_P_COMMENTBLOCK 12
#define SCE_P_STRINGEOL 13
#define SCE_C_DEFAULT 0
#define SCE_C_COMMENT 1
#define SCE_C_COMMENTLINE 2
#define SCE_C_COMMENTDOC 3
#define SCE_C_NUMBER 4
#define SCE_C_WORD 5
#define SCE_C_STRING 6
#define SCE_C_CHARACTER 7
#define SCE_C_UUID 8
#define SCE_C_PREPROCESSOR 9
#define SCE_C_OPERATOR 10
#define SCE_C_IDENTIFIER 11
#define SCE_C_STRINGEOL 12
#define SCE_C_VERBATIM 13
#define SCE_C_REGEX 14
#define SCE_C_COMMENTLINEDOC 15
#define SCE_C_WORD2 16
#define SCE_C_COMMENTDOCKEYWORD 17
#define SCE_C_COMMENTDOCKEYWORDERROR 18
#define SCE_H_DEFAULT 0
#define SCE_H_TAG 1
#define SCE_H_TAGUNKNOWN 2
#define SCE_H_ATTRIBUTE 3
#define SCE_H_ATTRIBUTEUNKNOWN 4
#define SCE_H_NUMBER 5
#define SCE_H_DOUBLESTRING 6
#define SCE_H_SINGLESTRING 7
#define SCE_H_OTHER 8
#define SCE_H_COMMENT 9
#define SCE_H_ENTITY 10
#define SCE_H_TAGEND 11
#define SCE_H_XMLSTART 12
#define SCE_H_XMLEND 13
#define SCE_H_SCRIPT 14
#define SCE_H_ASP 15
#define SCE_H_ASPAT 16
#define SCE_H_CDATA 17
#define SCE_H_QUESTION 18
#define SCE_H_VALUE 19
#define SCE_H_XCCOMMENT 20
#define SCE_H_SGML_DEFAULT 21
#define SCE_H_SGML_COMMAND 22
#define SCE_H_SGML_1ST_PARAM 23
#define SCE_H_SGML_DOUBLESTRING 24
#define SCE_H_SGML_SIMPLESTRING 25
#define SCE_H_SGML_ERROR 26
#define SCE_H_SGML_SPECIAL 27
#define SCE_H_SGML_ENTITY 28
#define SCE_H_SGML_COMMENT 29
#define SCE_H_SGML_1ST_PARAM_COMMENT 30
#define SCE_H_SGML_BLOCK_DEFAULT 31
#define SCE_HJ_START 40
#define SCE_HJ_DEFAULT 41
#define SCE_HJ_COMMENT 42
#define SCE_HJ_COMMENTLINE 43
#define SCE_HJ_COMMENTDOC 44
#define SCE_HJ_NUMBER 45
#define SCE_HJ_WORD 46
#define SCE_HJ_KEYWORD 47
#define SCE_HJ_DOUBLESTRING 48
#define SCE_HJ_SINGLESTRING 49
#define SCE_HJ_SYMBOLS 50
#define SCE_HJ_STRINGEOL 51
#define SCE_HJ_REGEX 52
#define SCE_HJA_START 55
#define SCE_HJA_DEFAULT 56
#define SCE_HJA_COMMENT 57
#define SCE_HJA_COMMENTLINE 58
#define SCE_HJA_COMMENTDOC 59
#define SCE_HJA_NUMBER 60
#define SCE_HJA_WORD 61
#define SCE_HJA_KEYWORD 62
#define SCE_HJA_DOUBLESTRING 63
#define SCE_HJA_SINGLESTRING 64
#define SCE_HJA_SYMBOLS 65
#define SCE_HJA_STRINGEOL 66
#define SCE_HJA_REGEX 67
#define SCE_HB_START 70
#define SCE_HB_DEFAULT 71
#define SCE_HB_COMMENTLINE 72
#define SCE_HB_NUMBER 73
#define SCE_HB_WORD 74
#define SCE_HB_STRING 75
#define SCE_HB_IDENTIFIER 76
#define SCE_HB_STRINGEOL 77
#define SCE_HBA_START 80
#define SCE_HBA_DEFAULT 81
#define SCE_HBA_COMMENTLINE 82
#define SCE_HBA_NUMBER 83
#define SCE_HBA_WORD 84
#define SCE_HBA_STRING 85
#define SCE_HBA_IDENTIFIER 86
#define SCE_HBA_STRINGEOL 87
#define SCE_HP_START 90
#define SCE_HP_DEFAULT 91
#define SCE_HP_COMMENTLINE 92
#define SCE_HP_NUMBER 93
#define SCE_HP_STRING 94
#define SCE_HP_CHARACTER 95
#define SCE_HP_WORD 96
#define SCE_HP_TRIPLE 97
#define SCE_HP_TRIPLEDOUBLE 98
#define SCE_HP_CLASSNAME 99
#define SCE_HP_DEFNAME 100
#define SCE_HP_OPERATOR 101
#define SCE_HP_IDENTIFIER 102
#define SCE_HPA_START 105
#define SCE_HPA_DEFAULT 106
#define SCE_HPA_COMMENTLINE 107
#define SCE_HPA_NUMBER 108
#define SCE_HPA_STRING 109
#define SCE_HPA_CHARACTER 110
#define SCE_HPA_WORD 111
#define SCE_HPA_TRIPLE 112
#define SCE_HPA_TRIPLEDOUBLE 113
#define SCE_HPA_CLASSNAME 114
#define SCE_HPA_DEFNAME 115
#define SCE_HPA_OPERATOR 116
#define SCE_HPA_IDENTIFIER 117
#define SCE_HPHP_DEFAULT 118
#define SCE_HPHP_HSTRING 119
#define SCE_HPHP_SIMPLESTRING 120
#define SCE_HPHP_WORD 121
#define SCE_HPHP_NUMBER 122
#define SCE_HPHP_VARIABLE 123
#define SCE_HPHP_COMMENT 124
#define SCE_HPHP_COMMENTLINE 125
#define SCE_HPHP_HSTRING_VARIABLE 126
#define SCE_HPHP_OPERATOR 127
#define SCE_PL_DEFAULT 0
#define SCE_PL_ERROR 1
#define SCE_PL_COMMENTLINE 2
#define SCE_PL_POD 3
#define SCE_PL_NUMBER 4
#define SCE_PL_WORD 5
#define SCE_PL_STRING 6
#define SCE_PL_CHARACTER 7
#define SCE_PL_PUNCTUATION 8
#define SCE_PL_PREPROCESSOR 9
#define SCE_PL_OPERATOR 10
#define SCE_PL_IDENTIFIER 11
#define SCE_PL_SCALAR 12
#define SCE_PL_ARRAY 13
#define SCE_PL_HASH 14
#define SCE_PL_SYMBOLTABLE 15
#define SCE_PL_REGEX 17
#define SCE_PL_REGSUBST 18
#define SCE_PL_LONGQUOTE 19
#define SCE_PL_BACKTICKS 20
#define SCE_PL_DATASECTION 21
#define SCE_PL_HERE_DELIM 22
#define SCE_PL_HERE_Q 23
#define SCE_PL_HERE_QQ 24
#define SCE_PL_HERE_QX 25
#define SCE_PL_STRING_Q 26
#define SCE_PL_STRING_QQ 27
#define SCE_PL_STRING_QX 28
#define SCE_PL_STRING_QR 29
#define SCE_PL_STRING_QW 30
#define SCE_B_DEFAULT 0
#define SCE_B_COMMENT 1
#define SCE_B_NUMBER 2
#define SCE_B_KEYWORD 3
#define SCE_B_STRING 4
#define SCE_B_PREPROCESSOR 5
#define SCE_B_OPERATOR 6
#define SCE_B_IDENTIFIER 7
#define SCE_B_DATE 8
#define SCE_PROPS_DEFAULT 0
#define SCE_PROPS_COMMENT 1
#define SCE_PROPS_SECTION 2
#define SCE_PROPS_ASSIGNMENT 3
#define SCE_PROPS_DEFVAL 4
#define SCE_L_DEFAULT 0
#define SCE_L_COMMAND 1
#define SCE_L_TAG 2
#define SCE_L_MATH 3
#define SCE_L_COMMENT 4
#define SCE_LUA_DEFAULT 0
#define SCE_LUA_COMMENT 1
#define SCE_LUA_COMMENTLINE 2
#define SCE_LUA_COMMENTDOC 3
#define SCE_LUA_NUMBER 4
#define SCE_LUA_WORD 5
#define SCE_LUA_STRING 6
#define SCE_LUA_CHARACTER 7
#define SCE_LUA_LITERALSTRING 8
#define SCE_LUA_PREPROCESSOR 9
#define SCE_LUA_OPERATOR 10
#define SCE_LUA_IDENTIFIER 11
#define SCE_LUA_STRINGEOL 12
#define SCE_LUA_WORD2 13
#define SCE_LUA_WORD3 14
#define SCE_LUA_WORD4 15
#define SCE_LUA_WORD5 16
#define SCE_LUA_WORD6 17
#define SCE_ERR_DEFAULT 0
#define SCE_ERR_PYTHON 1
#define SCE_ERR_GCC 2
#define SCE_ERR_MS 3
#define SCE_ERR_CMD 4
#define SCE_ERR_BORLAND 5
#define SCE_ERR_PERL 6
#define SCE_ERR_NET 7
#define SCE_ERR_LUA 8
#define SCE_ERR_CTAG 9
#define SCE_ERR_DIFF_CHANGED 10
#define SCE_ERR_DIFF_ADDITION 11
#define SCE_ERR_DIFF_DELETION 12
#define SCE_ERR_DIFF_MESSAGE 13
#define SCE_BAT_DEFAULT 0
#define SCE_BAT_COMMENT 1
#define SCE_BAT_WORD 2
#define SCE_BAT_LABEL 3
#define SCE_BAT_HIDE 4
#define SCE_BAT_COMMAND 5
#define SCE_BAT_IDENTIFIER 6
#define SCE_BAT_OPERATOR 7
#define SCE_MAKE_DEFAULT 0
#define SCE_MAKE_COMMENT 1
#define SCE_MAKE_PREPROCESSOR 2
#define SCE_MAKE_IDENTIFIER 3
#define SCE_MAKE_OPERATOR 4
#define SCE_MAKE_TARGET 5
#define SCE_MAKE_IDEOL 9
#define SCE_DIFF_DEFAULT 0
#define SCE_DIFF_COMMENT 1
#define SCE_DIFF_COMMAND 2
#define SCE_DIFF_HEADER 3
#define SCE_DIFF_POSITION 4
#define SCE_DIFF_DELETED 5
#define SCE_DIFF_ADDED 6
#define SCE_CONF_DEFAULT 0
#define SCE_CONF_COMMENT 1
#define SCE_CONF_NUMBER 2
#define SCE_CONF_IDENTIFIER 3
#define SCE_CONF_EXTENSION 4
#define SCE_CONF_PARAMETER 5
#define SCE_CONF_STRING 6
#define SCE_CONF_OPERATOR 7
#define SCE_CONF_IP 8
#define SCE_CONF_DIRECTIVE 9
#define SCE_AVE_DEFAULT 0
#define SCE_AVE_COMMENT 1
#define SCE_AVE_NUMBER 2
#define SCE_AVE_WORD 3
#define SCE_AVE_KEYWORD 4
#define SCE_AVE_STATEMENT 5
#define SCE_AVE_STRING 6
#define SCE_AVE_ENUM 7
#define SCE_AVE_STRINGEOL 8
#define SCE_AVE_IDENTIFIER 9
#define SCE_AVE_OPERATOR 10
#define SCE_ADA_DEFAULT 0
#define SCE_ADA_WORD 1
#define SCE_ADA_IDENTIFIER 2
#define SCE_ADA_NUMBER 3
#define SCE_ADA_DELIMITER 4
#define SCE_ADA_CHARACTER 5
#define SCE_ADA_CHARACTEREOL 6
#define SCE_ADA_STRING 7
#define SCE_ADA_STRINGEOL 8
#define SCE_ADA_LABEL 9
#define SCE_ADA_COMMENTLINE 10
#define SCE_ADA_ILLEGAL 11
#define SCE_BAAN_DEFAULT 0
#define SCE_BAAN_COMMENT 1
#define SCE_BAAN_COMMENTDOC 2
#define SCE_BAAN_NUMBER 3
#define SCE_BAAN_WORD 4
#define SCE_BAAN_STRING 5
#define SCE_BAAN_PREPROCESSOR 6
#define SCE_BAAN_OPERATOR 7
#define SCE_BAAN_IDENTIFIER 8
#define SCE_BAAN_STRINGEOL 9
#define SCE_BAAN_WORD2 10
#define SCE_LISP_DEFAULT 0
#define SCE_LISP_COMMENT 1
#define SCE_LISP_NUMBER 2
#define SCE_LISP_KEYWORD 3
#define SCE_LISP_STRING 6
#define SCE_LISP_STRINGEOL 8
#define SCE_LISP_IDENTIFIER 9
#define SCE_LISP_OPERATOR 10
#define SCE_EIFFEL_DEFAULT 0
#define SCE_EIFFEL_COMMENTLINE 1
#define SCE_EIFFEL_NUMBER 2
#define SCE_EIFFEL_WORD 3
#define SCE_EIFFEL_STRING 4
#define SCE_EIFFEL_CHARACTER 5
#define SCE_EIFFEL_OPERATOR 6
#define SCE_EIFFEL_IDENTIFIER 7
#define SCE_EIFFEL_STRINGEOL 8
#define SCE_NNCRONTAB_DEFAULT 0
#define SCE_NNCRONTAB_COMMENT 1
#define SCE_NNCRONTAB_TASK 2
#define SCE_NNCRONTAB_SECTION 3
#define SCE_NNCRONTAB_KEYWORD 4
#define SCE_NNCRONTAB_MODIFIER 5
#define SCE_NNCRONTAB_ASTERISK 6
#define SCE_NNCRONTAB_NUMBER 7
#define SCE_NNCRONTAB_STRING 8
#define SCE_NNCRONTAB_ENVIRONMENT 9
#define SCE_NNCRONTAB_IDENTIFIER 10
#define SCE_MATLAB_DEFAULT 0
#define SCE_MATLAB_COMMENT 1
#define SCE_MATLAB_COMMAND 2
#define SCE_MATLAB_NUMBER 3
#define SCE_MATLAB_KEYWORD 4
#define SCE_MATLAB_STRING 5
#define SCE_MATLAB_OPERATOR 6
#define SCE_MATLAB_IDENTIFIER 7
#define SCE_SCRIPTOL_DEFAULT 0
#define SCE_SCRIPTOL_COMMENT 1
#define SCE_SCRIPTOL_COMMENTLINE 2
#define SCE_SCRIPTOL_COMMENTDOC 3
#define SCE_SCRIPTOL_NUMBER 4
#define SCE_SCRIPTOL_WORD 5
#define SCE_SCRIPTOL_STRING 6
#define SCE_SCRIPTOL_CHARACTER 7
#define SCE_SCRIPTOL_UUID 8
#define SCE_SCRIPTOL_PREPROCESSOR 9
#define SCE_SCRIPTOL_OPERATOR 10
#define SCE_SCRIPTOL_IDENTIFIER 11
#define SCE_SCRIPTOL_STRINGEOL 12
#define SCE_SCRIPTOL_VERBATIM 13
#define SCE_SCRIPTOL_REGEX 14
#define SCE_SCRIPTOL_COMMENTLINEDOC 15
#define SCE_SCRIPTOL_WORD2 16
#define SCE_SCRIPTOL_COMMENTDOCKEYWORD 17
#define SCE_SCRIPTOL_COMMENTDOCKEYWORDERROR 18
#define SCE_SCRIPTOL_COMMENTBASIC 19
#define SCE_ASM_DEFAULT 0
#define SCE_ASM_COMMENT 1
#define SCE_ASM_NUMBER 2
#define SCE_ASM_STRING 3
#define SCE_ASM_OPERATOR 4
#define SCE_ASM_IDENTIFIER 5
#define SCE_ASM_CPUINSTRUCTION 6
#define SCE_ASM_MATHINSTRUCTION 7
#define SCE_ASM_REGISTER 8
#define SCE_ASM_DIRECTIVE 9
#define SCE_ASM_DIRECTIVEOPERAND 10
//--Autogenerated -- end of section automatically generated from Scintilla.iface

#endif
