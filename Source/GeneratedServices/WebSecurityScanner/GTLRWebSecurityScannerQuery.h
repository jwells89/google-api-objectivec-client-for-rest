// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Web Security Scanner API (websecurityscanner/v1)
// Description:
//   Scans your Compute and App Engine apps for common web vulnerabilities.
// Documentation:
//   https://cloud.google.com/security-command-center/docs/concepts-web-security-scanner-overview/

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRWebSecurityScanner_ScanConfig;
@class GTLRWebSecurityScanner_StartScanRunRequest;
@class GTLRWebSecurityScanner_StopScanRunRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other WebSecurityScanner query classes.
 */
@interface GTLRWebSecurityScannerQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates a new ScanConfig.
 *
 *  Method: websecurityscanner.projects.scanConfigs.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebSecurityScannerCloudPlatform
 */
@interface GTLRWebSecurityScannerQuery_ProjectsScanConfigsCreate : GTLRWebSecurityScannerQuery
// Previous library name was
//   +[GTLQueryWebSecurityScanner queryForProjectsScanConfigsCreateWithObject:parent:]

/**
 *  Required. The parent resource name where the scan is created, which should
 *  be a
 *  project resource name in the format 'projects/{projectId}'.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRWebSecurityScanner_ScanConfig.
 *
 *  Creates a new ScanConfig.
 *
 *  @param object The @c GTLRWebSecurityScanner_ScanConfig to include in the
 *    query.
 *  @param parent Required. The parent resource name where the scan is created,
 *    which should be a
 *    project resource name in the format 'projects/{projectId}'.
 *
 *  @return GTLRWebSecurityScannerQuery_ProjectsScanConfigsCreate
 */
+ (instancetype)queryWithObject:(GTLRWebSecurityScanner_ScanConfig *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes an existing ScanConfig and its child resources.
 *
 *  Method: websecurityscanner.projects.scanConfigs.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebSecurityScannerCloudPlatform
 */
@interface GTLRWebSecurityScannerQuery_ProjectsScanConfigsDelete : GTLRWebSecurityScannerQuery
// Previous library name was
//   +[GTLQueryWebSecurityScanner queryForProjectsScanConfigsDeleteWithname:]

/**
 *  Required. The resource name of the ScanConfig to be deleted. The name
 *  follows the
 *  format of 'projects/{projectId}/scanConfigs/{scanConfigId}'.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRWebSecurityScanner_Empty.
 *
 *  Deletes an existing ScanConfig and its child resources.
 *
 *  @param name Required. The resource name of the ScanConfig to be deleted. The
 *    name follows the
 *    format of 'projects/{projectId}/scanConfigs/{scanConfigId}'.
 *
 *  @return GTLRWebSecurityScannerQuery_ProjectsScanConfigsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a ScanConfig.
 *
 *  Method: websecurityscanner.projects.scanConfigs.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebSecurityScannerCloudPlatform
 */
@interface GTLRWebSecurityScannerQuery_ProjectsScanConfigsGet : GTLRWebSecurityScannerQuery
// Previous library name was
//   +[GTLQueryWebSecurityScanner queryForProjectsScanConfigsGetWithname:]

/**
 *  Required. The resource name of the ScanConfig to be returned. The name
 *  follows the
 *  format of 'projects/{projectId}/scanConfigs/{scanConfigId}'.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRWebSecurityScanner_ScanConfig.
 *
 *  Gets a ScanConfig.
 *
 *  @param name Required. The resource name of the ScanConfig to be returned.
 *    The name follows the
 *    format of 'projects/{projectId}/scanConfigs/{scanConfigId}'.
 *
 *  @return GTLRWebSecurityScannerQuery_ProjectsScanConfigsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists ScanConfigs under a given project.
 *
 *  Method: websecurityscanner.projects.scanConfigs.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebSecurityScannerCloudPlatform
 */
@interface GTLRWebSecurityScannerQuery_ProjectsScanConfigsList : GTLRWebSecurityScannerQuery
// Previous library name was
//   +[GTLQueryWebSecurityScanner queryForProjectsScanConfigsListWithparent:]

/**
 *  The maximum number of ScanConfigs to return, can be limited by server.
 *  If not specified or not positive, the implementation will select a
 *  reasonable value.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A token identifying a page of results to be returned. This should be a
 *  `next_page_token` value returned from a previous List request.
 *  If unspecified, the first page of results is returned.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The parent resource name, which should be a project resource name
 *  in the
 *  format 'projects/{projectId}'.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRWebSecurityScanner_ListScanConfigsResponse.
 *
 *  Lists ScanConfigs under a given project.
 *
 *  @param parent Required. The parent resource name, which should be a project
 *    resource name in the
 *    format 'projects/{projectId}'.
 *
 *  @return GTLRWebSecurityScannerQuery_ProjectsScanConfigsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates a ScanConfig. This method support partial update of a ScanConfig.
 *
 *  Method: websecurityscanner.projects.scanConfigs.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebSecurityScannerCloudPlatform
 */
@interface GTLRWebSecurityScannerQuery_ProjectsScanConfigsPatch : GTLRWebSecurityScannerQuery
// Previous library name was
//   +[GTLQueryWebSecurityScanner queryForProjectsScanConfigsPatchWithObject:name:]

/**
 *  The resource name of the ScanConfig. The name follows the format of
 *  'projects/{projectId}/scanConfigs/{scanConfigId}'. The ScanConfig IDs are
 *  generated by the system.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Required. The update mask applies to the resource. For the `FieldMask`
 *  definition,
 *  see
 *  https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#fieldmask
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRWebSecurityScanner_ScanConfig.
 *
 *  Updates a ScanConfig. This method support partial update of a ScanConfig.
 *
 *  @param object The @c GTLRWebSecurityScanner_ScanConfig to include in the
 *    query.
 *  @param name The resource name of the ScanConfig. The name follows the format
 *    of
 *    'projects/{projectId}/scanConfigs/{scanConfigId}'. The ScanConfig IDs are
 *    generated by the system.
 *
 *  @return GTLRWebSecurityScannerQuery_ProjectsScanConfigsPatch
 */
+ (instancetype)queryWithObject:(GTLRWebSecurityScanner_ScanConfig *)object
                           name:(NSString *)name;

@end

/**
 *  List CrawledUrls under a given ScanRun.
 *
 *  Method: websecurityscanner.projects.scanConfigs.scanRuns.crawledUrls.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebSecurityScannerCloudPlatform
 */
@interface GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsCrawledUrlsList : GTLRWebSecurityScannerQuery
// Previous library name was
//   +[GTLQueryWebSecurityScanner queryForProjectsScanConfigsScanRunsCrawledUrlsListWithparent:]

/**
 *  The maximum number of CrawledUrls to return, can be limited by server.
 *  If not specified or not positive, the implementation will select a
 *  reasonable value.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A token identifying a page of results to be returned. This should be a
 *  `next_page_token` value returned from a previous List request.
 *  If unspecified, the first page of results is returned.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The parent resource name, which should be a scan run resource name
 *  in the
 *  format
 *  'projects/{projectId}/scanConfigs/{scanConfigId}/scanRuns/{scanRunId}'.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRWebSecurityScanner_ListCrawledUrlsResponse.
 *
 *  List CrawledUrls under a given ScanRun.
 *
 *  @param parent Required. The parent resource name, which should be a scan run
 *    resource name in the
 *    format
 *    'projects/{projectId}/scanConfigs/{scanConfigId}/scanRuns/{scanRunId}'.
 *
 *  @return GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsCrawledUrlsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Gets a Finding.
 *
 *  Method: websecurityscanner.projects.scanConfigs.scanRuns.findings.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebSecurityScannerCloudPlatform
 */
@interface GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsFindingsGet : GTLRWebSecurityScannerQuery
// Previous library name was
//   +[GTLQueryWebSecurityScanner queryForProjectsScanConfigsScanRunsFindingsGetWithname:]

/**
 *  Required. The resource name of the Finding to be returned. The name follows
 *  the
 *  format of
 *  'projects/{projectId}/scanConfigs/{scanConfigId}/scanRuns/{scanRunId}/findings/{findingId}'.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRWebSecurityScanner_Finding.
 *
 *  Gets a Finding.
 *
 *  @param name Required. The resource name of the Finding to be returned. The
 *    name follows the
 *    format of
 *    'projects/{projectId}/scanConfigs/{scanConfigId}/scanRuns/{scanRunId}/findings/{findingId}'.
 *
 *  @return GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsFindingsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List Findings under a given ScanRun.
 *
 *  Method: websecurityscanner.projects.scanConfigs.scanRuns.findings.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebSecurityScannerCloudPlatform
 */
@interface GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsFindingsList : GTLRWebSecurityScannerQuery
// Previous library name was
//   +[GTLQueryWebSecurityScanner queryForProjectsScanConfigsScanRunsFindingsListWithparent:]

/**
 *  The filter expression. The expression must be in the format: <field>
 *  <operator> <value>.
 *  Supported field: 'finding_type'.
 *  Supported operator: '='.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  The maximum number of Findings to return, can be limited by server.
 *  If not specified or not positive, the implementation will select a
 *  reasonable value.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A token identifying a page of results to be returned. This should be a
 *  `next_page_token` value returned from a previous List request.
 *  If unspecified, the first page of results is returned.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The parent resource name, which should be a scan run resource name
 *  in the
 *  format
 *  'projects/{projectId}/scanConfigs/{scanConfigId}/scanRuns/{scanRunId}'.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRWebSecurityScanner_ListFindingsResponse.
 *
 *  List Findings under a given ScanRun.
 *
 *  @param parent Required. The parent resource name, which should be a scan run
 *    resource name in the
 *    format
 *    'projects/{projectId}/scanConfigs/{scanConfigId}/scanRuns/{scanRunId}'.
 *
 *  @return GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsFindingsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  List all FindingTypeStats under a given ScanRun.
 *
 *  Method: websecurityscanner.projects.scanConfigs.scanRuns.findingTypeStats.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebSecurityScannerCloudPlatform
 */
@interface GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsFindingTypeStatsList : GTLRWebSecurityScannerQuery
// Previous library name was
//   +[GTLQueryWebSecurityScanner queryForProjectsScanConfigsScanRunsFindingTypeStatsListWithparent:]

/**
 *  Required. The parent resource name, which should be a scan run resource name
 *  in the
 *  format
 *  'projects/{projectId}/scanConfigs/{scanConfigId}/scanRuns/{scanRunId}'.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRWebSecurityScanner_ListFindingTypeStatsResponse.
 *
 *  List all FindingTypeStats under a given ScanRun.
 *
 *  @param parent Required. The parent resource name, which should be a scan run
 *    resource name in the
 *    format
 *    'projects/{projectId}/scanConfigs/{scanConfigId}/scanRuns/{scanRunId}'.
 *
 *  @return GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsFindingTypeStatsList
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Gets a ScanRun.
 *
 *  Method: websecurityscanner.projects.scanConfigs.scanRuns.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebSecurityScannerCloudPlatform
 */
@interface GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsGet : GTLRWebSecurityScannerQuery
// Previous library name was
//   +[GTLQueryWebSecurityScanner queryForProjectsScanConfigsScanRunsGetWithname:]

/**
 *  Required. The resource name of the ScanRun to be returned. The name follows
 *  the
 *  format of
 *  'projects/{projectId}/scanConfigs/{scanConfigId}/scanRuns/{scanRunId}'.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRWebSecurityScanner_ScanRun.
 *
 *  Gets a ScanRun.
 *
 *  @param name Required. The resource name of the ScanRun to be returned. The
 *    name follows the
 *    format of
 *    'projects/{projectId}/scanConfigs/{scanConfigId}/scanRuns/{scanRunId}'.
 *
 *  @return GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists ScanRuns under a given ScanConfig, in descending order of ScanRun
 *  stop time.
 *
 *  Method: websecurityscanner.projects.scanConfigs.scanRuns.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebSecurityScannerCloudPlatform
 */
@interface GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsList : GTLRWebSecurityScannerQuery
// Previous library name was
//   +[GTLQueryWebSecurityScanner queryForProjectsScanConfigsScanRunsListWithparent:]

/**
 *  The maximum number of ScanRuns to return, can be limited by server.
 *  If not specified or not positive, the implementation will select a
 *  reasonable value.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A token identifying a page of results to be returned. This should be a
 *  `next_page_token` value returned from a previous List request.
 *  If unspecified, the first page of results is returned.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The parent resource name, which should be a scan resource name in
 *  the
 *  format 'projects/{projectId}/scanConfigs/{scanConfigId}'.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRWebSecurityScanner_ListScanRunsResponse.
 *
 *  Lists ScanRuns under a given ScanConfig, in descending order of ScanRun
 *  stop time.
 *
 *  @param parent Required. The parent resource name, which should be a scan
 *    resource name in the
 *    format 'projects/{projectId}/scanConfigs/{scanConfigId}'.
 *
 *  @return GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Stops a ScanRun. The stopped ScanRun is returned.
 *
 *  Method: websecurityscanner.projects.scanConfigs.scanRuns.stop
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebSecurityScannerCloudPlatform
 */
@interface GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsStop : GTLRWebSecurityScannerQuery
// Previous library name was
//   +[GTLQueryWebSecurityScanner queryForProjectsScanConfigsScanRunsStopWithObject:name:]

/**
 *  Required. The resource name of the ScanRun to be stopped. The name follows
 *  the
 *  format of
 *  'projects/{projectId}/scanConfigs/{scanConfigId}/scanRuns/{scanRunId}'.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRWebSecurityScanner_ScanRun.
 *
 *  Stops a ScanRun. The stopped ScanRun is returned.
 *
 *  @param object The @c GTLRWebSecurityScanner_StopScanRunRequest to include in
 *    the query.
 *  @param name Required. The resource name of the ScanRun to be stopped. The
 *    name follows the
 *    format of
 *    'projects/{projectId}/scanConfigs/{scanConfigId}/scanRuns/{scanRunId}'.
 *
 *  @return GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsStop
 */
+ (instancetype)queryWithObject:(GTLRWebSecurityScanner_StopScanRunRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Start a ScanRun according to the given ScanConfig.
 *
 *  Method: websecurityscanner.projects.scanConfigs.start
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeWebSecurityScannerCloudPlatform
 */
@interface GTLRWebSecurityScannerQuery_ProjectsScanConfigsStart : GTLRWebSecurityScannerQuery
// Previous library name was
//   +[GTLQueryWebSecurityScanner queryForProjectsScanConfigsStartWithObject:name:]

/**
 *  Required. The resource name of the ScanConfig to be used. The name follows
 *  the
 *  format of 'projects/{projectId}/scanConfigs/{scanConfigId}'.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRWebSecurityScanner_ScanRun.
 *
 *  Start a ScanRun according to the given ScanConfig.
 *
 *  @param object The @c GTLRWebSecurityScanner_StartScanRunRequest to include
 *    in the query.
 *  @param name Required. The resource name of the ScanConfig to be used. The
 *    name follows the
 *    format of 'projects/{projectId}/scanConfigs/{scanConfigId}'.
 *
 *  @return GTLRWebSecurityScannerQuery_ProjectsScanConfigsStart
 */
+ (instancetype)queryWithObject:(GTLRWebSecurityScanner_StartScanRunRequest *)object
                           name:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
