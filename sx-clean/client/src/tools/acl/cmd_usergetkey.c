/*
  File autogenerated by gengetopt version 2.22.4
  generated with the following command:
  gengetopt --unamed-opts --no-handle-version --no-handle-error --file-name=cmd_usergetkey --func-name=usergetkey_cmdline_parser --arg-struct-name=usergetkey_args_info

  The developers of gengetopt consider the fixed text that goes in all
  gengetopt output files to be in the public domain:
  we make no copyright claims on it.
*/

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef FIX_UNUSED
#define FIX_UNUSED(X) (void) (X) /* avoid warnings for unused params */
#endif

#include <getopt.h>

#include "cmd_usergetkey.h"

const char *usergetkey_args_info_purpose = "";

const char *usergetkey_args_info_usage = "Usage: sxacl usergetkey [OPTIONS] <username> sx://[profile@]cluster";

const char *usergetkey_args_info_description = "";

const char *usergetkey_args_info_full_help[] = {
  "  -h, --help              Print help and exit",
  "      --full-help         Print help, including hidden options, and exit",
  "  -V, --version           Print version and exit",
  "\nUser key retrieval options:",
  "  -a, --auth-file=STRING  Store authentication key in given file (instead of \n                            stdout)",
  "\nCommon options:",
  "  -C, --config-link       Return configuration link instead of authentication \n                            key  (default=off)",
  "  -c, --config-dir=PATH   Path to SX configuration directory",
  "  -D, --debug             Enable debug messages  (default=off)",
    0
};

static void
init_help_array(void)
{
  usergetkey_args_info_help[0] = usergetkey_args_info_full_help[0];
  usergetkey_args_info_help[1] = usergetkey_args_info_full_help[1];
  usergetkey_args_info_help[2] = usergetkey_args_info_full_help[2];
  usergetkey_args_info_help[3] = usergetkey_args_info_full_help[3];
  usergetkey_args_info_help[4] = usergetkey_args_info_full_help[4];
  usergetkey_args_info_help[5] = usergetkey_args_info_full_help[5];
  usergetkey_args_info_help[6] = usergetkey_args_info_full_help[6];
  usergetkey_args_info_help[7] = usergetkey_args_info_full_help[8];
  usergetkey_args_info_help[8] = 0; 
  
}

const char *usergetkey_args_info_help[9];

typedef enum {ARG_NO
  , ARG_FLAG
  , ARG_STRING
} usergetkey_cmdline_parser_arg_type;

static
void clear_given (struct usergetkey_args_info *args_info);
static
void clear_args (struct usergetkey_args_info *args_info);

static int
usergetkey_cmdline_parser_internal (int argc, char **argv, struct usergetkey_args_info *args_info,
                        struct usergetkey_cmdline_parser_params *params, const char *additional_error);


static char *
gengetopt_strdup (const char *s);

static
void clear_given (struct usergetkey_args_info *args_info)
{
  args_info->help_given = 0 ;
  args_info->full_help_given = 0 ;
  args_info->version_given = 0 ;
  args_info->auth_file_given = 0 ;
  args_info->config_link_given = 0 ;
  args_info->config_dir_given = 0 ;
  args_info->debug_given = 0 ;
}

static
void clear_args (struct usergetkey_args_info *args_info)
{
  FIX_UNUSED (args_info);
  args_info->auth_file_arg = NULL;
  args_info->auth_file_orig = NULL;
  args_info->config_link_flag = 0;
  args_info->config_dir_arg = NULL;
  args_info->config_dir_orig = NULL;
  args_info->debug_flag = 0;
  
}

static
void init_args_info(struct usergetkey_args_info *args_info)
{

  init_help_array(); 
  args_info->help_help = usergetkey_args_info_full_help[0] ;
  args_info->full_help_help = usergetkey_args_info_full_help[1] ;
  args_info->version_help = usergetkey_args_info_full_help[2] ;
  args_info->auth_file_help = usergetkey_args_info_full_help[4] ;
  args_info->config_link_help = usergetkey_args_info_full_help[6] ;
  args_info->config_dir_help = usergetkey_args_info_full_help[7] ;
  args_info->debug_help = usergetkey_args_info_full_help[8] ;
  
}

void
usergetkey_cmdline_parser_print_version (void)
{
  printf ("%s %s\n",
     (strlen(USERGETKEY_CMDLINE_PARSER_PACKAGE_NAME) ? USERGETKEY_CMDLINE_PARSER_PACKAGE_NAME : USERGETKEY_CMDLINE_PARSER_PACKAGE),
     USERGETKEY_CMDLINE_PARSER_VERSION);
}

static void print_help_common(void) {
  usergetkey_cmdline_parser_print_version ();

  if (strlen(usergetkey_args_info_purpose) > 0)
    printf("\n%s\n", usergetkey_args_info_purpose);

  if (strlen(usergetkey_args_info_usage) > 0)
    printf("\n%s\n", usergetkey_args_info_usage);

  printf("\n");

  if (strlen(usergetkey_args_info_description) > 0)
    printf("%s\n\n", usergetkey_args_info_description);
}

void
usergetkey_cmdline_parser_print_help (void)
{
  int i = 0;
  print_help_common();
  while (usergetkey_args_info_help[i])
    printf("%s\n", usergetkey_args_info_help[i++]);
}

void
usergetkey_cmdline_parser_print_full_help (void)
{
  int i = 0;
  print_help_common();
  while (usergetkey_args_info_full_help[i])
    printf("%s\n", usergetkey_args_info_full_help[i++]);
}

void
usergetkey_cmdline_parser_init (struct usergetkey_args_info *args_info)
{
  clear_given (args_info);
  clear_args (args_info);
  init_args_info (args_info);

  args_info->inputs = 0;
  args_info->inputs_num = 0;
}

void
usergetkey_cmdline_parser_params_init(struct usergetkey_cmdline_parser_params *params)
{
  if (params)
    { 
      params->override = 0;
      params->initialize = 1;
      params->check_required = 1;
      params->check_ambiguity = 0;
      params->print_errors = 1;
    }
}

struct usergetkey_cmdline_parser_params *
usergetkey_cmdline_parser_params_create(void)
{
  struct usergetkey_cmdline_parser_params *params = 
    (struct usergetkey_cmdline_parser_params *)malloc(sizeof(struct usergetkey_cmdline_parser_params));
  usergetkey_cmdline_parser_params_init(params);  
  return params;
}

static void
free_string_field (char **s)
{
  if (*s)
    {
      free (*s);
      *s = 0;
    }
}


static void
usergetkey_cmdline_parser_release (struct usergetkey_args_info *args_info)
{
  unsigned int i;
  free_string_field (&(args_info->auth_file_arg));
  free_string_field (&(args_info->auth_file_orig));
  free_string_field (&(args_info->config_dir_arg));
  free_string_field (&(args_info->config_dir_orig));
  
  
  for (i = 0; i < args_info->inputs_num; ++i)
    free (args_info->inputs [i]);

  if (args_info->inputs_num)
    free (args_info->inputs);

  clear_given (args_info);
}


static void
write_into_file(FILE *outfile, const char *opt, const char *arg, const char *values[])
{
  FIX_UNUSED (values);
  if (arg) {
    fprintf(outfile, "%s=\"%s\"\n", opt, arg);
  } else {
    fprintf(outfile, "%s\n", opt);
  }
}


int
usergetkey_cmdline_parser_dump(FILE *outfile, struct usergetkey_args_info *args_info)
{
  int i = 0;

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot dump options to stream\n", USERGETKEY_CMDLINE_PARSER_PACKAGE);
      return EXIT_FAILURE;
    }

  if (args_info->help_given)
    write_into_file(outfile, "help", 0, 0 );
  if (args_info->full_help_given)
    write_into_file(outfile, "full-help", 0, 0 );
  if (args_info->version_given)
    write_into_file(outfile, "version", 0, 0 );
  if (args_info->auth_file_given)
    write_into_file(outfile, "auth-file", args_info->auth_file_orig, 0);
  if (args_info->config_link_given)
    write_into_file(outfile, "config-link", 0, 0 );
  if (args_info->config_dir_given)
    write_into_file(outfile, "config-dir", args_info->config_dir_orig, 0);
  if (args_info->debug_given)
    write_into_file(outfile, "debug", 0, 0 );
  

  i = EXIT_SUCCESS;
  return i;
}

int
usergetkey_cmdline_parser_file_save(const char *filename, struct usergetkey_args_info *args_info)
{
  FILE *outfile;
  int i = 0;

  outfile = fopen(filename, "w");

  if (!outfile)
    {
      fprintf (stderr, "%s: cannot open file for writing: %s\n", USERGETKEY_CMDLINE_PARSER_PACKAGE, filename);
      return EXIT_FAILURE;
    }

  i = usergetkey_cmdline_parser_dump(outfile, args_info);
  fclose (outfile);

  return i;
}

void
usergetkey_cmdline_parser_free (struct usergetkey_args_info *args_info)
{
  usergetkey_cmdline_parser_release (args_info);
}

/** @brief replacement of strdup, which is not standard */
char *
gengetopt_strdup (const char *s)
{
  char *result = 0;
  if (!s)
    return result;

  result = (char*)malloc(strlen(s) + 1);
  if (result == (char*)0)
    return (char*)0;
  strcpy(result, s);
  return result;
}

int
usergetkey_cmdline_parser (int argc, char **argv, struct usergetkey_args_info *args_info)
{
  return usergetkey_cmdline_parser2 (argc, argv, args_info, 0, 1, 1);
}

int
usergetkey_cmdline_parser_ext (int argc, char **argv, struct usergetkey_args_info *args_info,
                   struct usergetkey_cmdline_parser_params *params)
{
  int result;
  result = usergetkey_cmdline_parser_internal (argc, argv, args_info, params, 0);

  return result;
}

int
usergetkey_cmdline_parser2 (int argc, char **argv, struct usergetkey_args_info *args_info, int override, int initialize, int check_required)
{
  int result;
  struct usergetkey_cmdline_parser_params params;
  
  params.override = override;
  params.initialize = initialize;
  params.check_required = check_required;
  params.check_ambiguity = 0;
  params.print_errors = 1;

  result = usergetkey_cmdline_parser_internal (argc, argv, args_info, &params, 0);

  return result;
}

int
usergetkey_cmdline_parser_required (struct usergetkey_args_info *args_info, const char *prog_name)
{
  FIX_UNUSED (args_info);
  FIX_UNUSED (prog_name);
  return EXIT_SUCCESS;
}


static char *package_name = 0;

/**
 * @brief updates an option
 * @param field the generic pointer to the field to update
 * @param orig_field the pointer to the orig field
 * @param field_given the pointer to the number of occurrence of this option
 * @param prev_given the pointer to the number of occurrence already seen
 * @param value the argument for this option (if null no arg was specified)
 * @param possible_values the possible values for this option (if specified)
 * @param default_value the default value (in case the option only accepts fixed values)
 * @param arg_type the type of this option
 * @param check_ambiguity @see usergetkey_cmdline_parser_params.check_ambiguity
 * @param override @see usergetkey_cmdline_parser_params.override
 * @param no_free whether to free a possible previous value
 * @param multiple_option whether this is a multiple option
 * @param long_opt the corresponding long option
 * @param short_opt the corresponding short option (or '-' if none)
 * @param additional_error possible further error specification
 */
static
int update_arg(void *field, char **orig_field,
               unsigned int *field_given, unsigned int *prev_given, 
               char *value, const char *possible_values[],
               const char *default_value,
               usergetkey_cmdline_parser_arg_type arg_type,
               int check_ambiguity, int override,
               int no_free, int multiple_option,
               const char *long_opt, char short_opt,
               const char *additional_error)
{
  char *stop_char = 0;
  const char *val = value;
  int found;
  char **string_field;
  FIX_UNUSED (field);

  stop_char = 0;
  found = 0;

  if (!multiple_option && prev_given && (*prev_given || (check_ambiguity && *field_given)))
    {
      if (short_opt != '-')
        fprintf (stderr, "%s: `--%s' (`-%c') option given more than once%s\n", 
               package_name, long_opt, short_opt,
               (additional_error ? additional_error : ""));
      else
        fprintf (stderr, "%s: `--%s' option given more than once%s\n", 
               package_name, long_opt,
               (additional_error ? additional_error : ""));
      return 1; /* failure */
    }

  FIX_UNUSED (default_value);
    
  if (field_given && *field_given && ! override)
    return 0;
  if (prev_given)
    (*prev_given)++;
  if (field_given)
    (*field_given)++;
  if (possible_values)
    val = possible_values[found];

  switch(arg_type) {
  case ARG_FLAG:
    *((int *)field) = !*((int *)field);
    break;
  case ARG_STRING:
    if (val) {
      string_field = (char **)field;
      if (!no_free && *string_field)
        free (*string_field); /* free previous string */
      *string_field = gengetopt_strdup (val);
    }
    break;
  default:
    break;
  };


  /* store the original value */
  switch(arg_type) {
  case ARG_NO:
  case ARG_FLAG:
    break;
  default:
    if (value && orig_field) {
      if (no_free) {
        *orig_field = value;
      } else {
        if (*orig_field)
          free (*orig_field); /* free previous string */
        *orig_field = gengetopt_strdup (value);
      }
    }
  };

  return 0; /* OK */
}


int
usergetkey_cmdline_parser_internal (
  int argc, char **argv, struct usergetkey_args_info *args_info,
                        struct usergetkey_cmdline_parser_params *params, const char *additional_error)
{
  int c;	/* Character of the parsed option.  */

  int error = 0;
  struct usergetkey_args_info local_args_info;
  
  int override;
  int initialize;
  int check_required;
  int check_ambiguity;
  
  package_name = argv[0];
  
  override = params->override;
  initialize = params->initialize;
  check_required = params->check_required;
  check_ambiguity = params->check_ambiguity;

  if (initialize)
    usergetkey_cmdline_parser_init (args_info);

  usergetkey_cmdline_parser_init (&local_args_info);

  optarg = 0;
  optind = 0;
  opterr = params->print_errors;
  optopt = '?';

  while (1)
    {
      int option_index = 0;

      static struct option long_options[] = {
        { "help",	0, NULL, 'h' },
        { "full-help",	0, NULL, 0 },
        { "version",	0, NULL, 'V' },
        { "auth-file",	1, NULL, 'a' },
        { "config-link",	0, NULL, 'C' },
        { "config-dir",	1, NULL, 'c' },
        { "debug",	0, NULL, 'D' },
        { 0,  0, 0, 0 }
      };

      c = getopt_long (argc, argv, "hVa:Cc:D", long_options, &option_index);

      if (c == -1) break;	/* Exit from `while (1)' loop.  */

      switch (c)
        {
        case 'h':	/* Print help and exit.  */
          usergetkey_cmdline_parser_print_help ();
          usergetkey_cmdline_parser_free (&local_args_info);
          exit (EXIT_SUCCESS);

        case 'V':	/* Print version and exit.  */
        
        
          if (update_arg( 0 , 
               0 , &(args_info->version_given),
              &(local_args_info.version_given), optarg, 0, 0, ARG_NO,
              check_ambiguity, override, 0, 0,
              "version", 'V',
              additional_error))
            goto failure;
          usergetkey_cmdline_parser_free (&local_args_info);
          return 0;
        
          break;
        case 'a':	/* Store authentication key in given file (instead of stdout).  */
        
        
          if (update_arg( (void *)&(args_info->auth_file_arg), 
               &(args_info->auth_file_orig), &(args_info->auth_file_given),
              &(local_args_info.auth_file_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "auth-file", 'a',
              additional_error))
            goto failure;
        
          break;
        case 'C':	/* Return configuration link instead of authentication key.  */
        
        
          if (update_arg((void *)&(args_info->config_link_flag), 0, &(args_info->config_link_given),
              &(local_args_info.config_link_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "config-link", 'C',
              additional_error))
            goto failure;
        
          break;
        case 'c':	/* Path to SX configuration directory.  */
        
        
          if (update_arg( (void *)&(args_info->config_dir_arg), 
               &(args_info->config_dir_orig), &(args_info->config_dir_given),
              &(local_args_info.config_dir_given), optarg, 0, 0, ARG_STRING,
              check_ambiguity, override, 0, 0,
              "config-dir", 'c',
              additional_error))
            goto failure;
        
          break;
        case 'D':	/* Enable debug messages.  */
        
        
          if (update_arg((void *)&(args_info->debug_flag), 0, &(args_info->debug_given),
              &(local_args_info.debug_given), optarg, 0, 0, ARG_FLAG,
              check_ambiguity, override, 1, 0, "debug", 'D',
              additional_error))
            goto failure;
        
          break;

        case 0:	/* Long option with no short option */
          if (strcmp (long_options[option_index].name, "full-help") == 0) {
            usergetkey_cmdline_parser_print_full_help ();
            usergetkey_cmdline_parser_free (&local_args_info);
            exit (EXIT_SUCCESS);
          }

        case '?':	/* Invalid option.  */
          /* `getopt_long' already printed an error message.  */
          goto failure;

        default:	/* bug: option not considered.  */
          fprintf (stderr, "%s: option unknown: %c%s\n", USERGETKEY_CMDLINE_PARSER_PACKAGE, c, (additional_error ? additional_error : ""));
          abort ();
        } /* switch */
    } /* while */




  usergetkey_cmdline_parser_release (&local_args_info);

  if ( error )
    return (EXIT_FAILURE);

  if (optind < argc)
    {
      int i = 0 ;
      int found_prog_name = 0;
      /* whether program name, i.e., argv[0], is in the remaining args
         (this may happen with some implementations of getopt,
          but surely not with the one included by gengetopt) */

      i = optind;
      while (i < argc)
        if (argv[i++] == argv[0]) {
          found_prog_name = 1;
          break;
        }
      i = 0;

      args_info->inputs_num = argc - optind - found_prog_name;
      args_info->inputs =
        (char **)(malloc ((args_info->inputs_num)*sizeof(char *))) ;
      while (optind < argc)
        if (argv[optind++] != argv[0])
          args_info->inputs[ i++ ] = gengetopt_strdup (argv[optind-1]) ;
    }

  return 0;

failure:
  
  usergetkey_cmdline_parser_release (&local_args_info);
  return (EXIT_FAILURE);
}