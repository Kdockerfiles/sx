/** @file cmd_modify.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.6
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMD_MODIFY_H
#define CMD_MODIFY_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef MODIFY_CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define MODIFY_CMDLINE_PARSER_PACKAGE "sxvol"
#endif

#ifndef MODIFY_CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define MODIFY_CMDLINE_PARSER_PACKAGE_NAME "sxvol"
#endif

#ifndef MODIFY_CMDLINE_PARSER_VERSION
/** @brief the program version */
#define MODIFY_CMDLINE_PARSER_VERSION VERSION
#endif

/** @brief Where the command line options are stored */
struct modify_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *full_help_help; /**< @brief Print help, including hidden options, and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  int replica_arg;	/**< @brief Change the volume replica.  */
  char * replica_orig;	/**< @brief Change the volume replica original value given at command line.  */
  const char *replica_help; /**< @brief Change the volume replica help description.  */
  char * owner_arg;	/**< @brief Change the volume owner.  */
  char * owner_orig;	/**< @brief Change the volume owner original value given at command line.  */
  const char *owner_help; /**< @brief Change the volume owner help description.  */
  char * size_arg;	/**< @brief Set a new size of the volume (allows K,M,G,T suffixes).  */
  char * size_orig;	/**< @brief Set a new size of the volume (allows K,M,G,T suffixes) original value given at command line.  */
  const char *size_help; /**< @brief Set a new size of the volume (allows K,M,G,T suffixes) help description.  */
  int max_revisions_arg;	/**< @brief Set a new revisions limit for files in the volume.  */
  char * max_revisions_orig;	/**< @brief Set a new revisions limit for files in the volume original value given at command line.  */
  const char *max_revisions_help; /**< @brief Set a new revisions limit for files in the volume help description.  */
  int reset_custom_meta_flag;	/**< @brief Reset custom metadata assigned to the volume (default=off).  */
  const char *reset_custom_meta_help; /**< @brief Reset custom metadata assigned to the volume help description.  */
  int reset_local_config_flag;	/**< @brief Reset local configuration of the volume (default=off).  */
  const char *reset_local_config_help; /**< @brief Reset local configuration of the volume help description.  */
  int debug_flag;	/**< @brief Enable debug messages (default=off).  */
  const char *debug_help; /**< @brief Enable debug messages help description.  */
  char * config_dir_arg;	/**< @brief Path to SX configuration directory.  */
  char * config_dir_orig;	/**< @brief Path to SX configuration directory original value given at command line.  */
  const char *config_dir_help; /**< @brief Path to SX configuration directory help description.  */
  char * filter_dir_arg;	/**< @brief Path to SX filter directory.  */
  char * filter_dir_orig;	/**< @brief Path to SX filter directory original value given at command line.  */
  const char *filter_dir_help; /**< @brief Path to SX filter directory help description.  */
  int batch_mode_flag;	/**< @brief Turn off interactive confirmations and assume yes for all questions (default=off).  */
  const char *batch_mode_help; /**< @brief Turn off interactive confirmations and assume yes for all questions help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int full_help_given ;	/**< @brief Whether full-help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int replica_given ;	/**< @brief Whether replica was given.  */
  unsigned int owner_given ;	/**< @brief Whether owner was given.  */
  unsigned int size_given ;	/**< @brief Whether size was given.  */
  unsigned int max_revisions_given ;	/**< @brief Whether max-revisions was given.  */
  unsigned int reset_custom_meta_given ;	/**< @brief Whether reset-custom-meta was given.  */
  unsigned int reset_local_config_given ;	/**< @brief Whether reset-local-config was given.  */
  unsigned int debug_given ;	/**< @brief Whether debug was given.  */
  unsigned int config_dir_given ;	/**< @brief Whether config-dir was given.  */
  unsigned int filter_dir_given ;	/**< @brief Whether filter-dir was given.  */
  unsigned int batch_mode_given ;	/**< @brief Whether batch-mode was given.  */

  char **inputs ; /**< @brief unamed options (options without names) */
  unsigned inputs_num ; /**< @brief unamed options number */
} ;

/** @brief The additional parameters to pass to parser functions */
struct modify_cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure modify_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure modify_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *modify_args_info_purpose;
/** @brief the usage string of the program */
extern const char *modify_args_info_usage;
/** @brief the description string of the program */
extern const char *modify_args_info_description;
/** @brief all the lines making the help output */
extern const char *modify_args_info_help[];
/** @brief all the lines making the full help output (including hidden options) */
extern const char *modify_args_info_full_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int modify_cmdline_parser (int argc, char **argv,
  struct modify_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use modify_cmdline_parser_ext() instead
 */
int modify_cmdline_parser2 (int argc, char **argv,
  struct modify_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int modify_cmdline_parser_ext (int argc, char **argv,
  struct modify_args_info *args_info,
  struct modify_cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int modify_cmdline_parser_dump(FILE *outfile,
  struct modify_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int modify_cmdline_parser_file_save(const char *filename,
  struct modify_args_info *args_info);

/**
 * Print the help
 */
void modify_cmdline_parser_print_help(void);
/**
 * Print the full help (including hidden options)
 */
void modify_cmdline_parser_print_full_help(void);
/**
 * Print the version
 */
void modify_cmdline_parser_print_version(void);

/**
 * Initializes all the fields a modify_cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void modify_cmdline_parser_params_init(struct modify_cmdline_parser_params *params);

/**
 * Allocates dynamically a modify_cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized modify_cmdline_parser_params structure
 */
struct modify_cmdline_parser_params *modify_cmdline_parser_params_create(void);

/**
 * Initializes the passed modify_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void modify_cmdline_parser_init (struct modify_args_info *args_info);
/**
 * Deallocates the string fields of the modify_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void modify_cmdline_parser_free (struct modify_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int modify_cmdline_parser_required (struct modify_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMD_MODIFY_H */
