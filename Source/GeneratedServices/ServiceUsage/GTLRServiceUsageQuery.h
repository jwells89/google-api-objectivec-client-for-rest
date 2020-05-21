// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Service Usage API (serviceusage/v1)
// Description:
//   Enables services that service consumers want to use on Google Cloud
//   Platform, lists the available or enabled services, or disables services
//   that service consumers no longer use.
// Documentation:
//   https://cloud.google.com/service-usage/

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

@class GTLRServiceUsage_BatchEnableServicesRequest;
@class GTLRServiceUsage_CancelOperationRequest;
@class GTLRServiceUsage_DisableServiceRequest;
@class GTLRServiceUsage_EnableServiceRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Service Usage query classes.
 */
@interface GTLRServiceUsageQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not
 *  guaranteed. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use
 *  Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation,
 *  the operation is not deleted; instead, it becomes an operation with
 *  an Operation.error value with a google.rpc.Status.code of 1,
 *  corresponding to `Code.CANCELLED`.
 *
 *  Method: serviceusage.operations.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceUsageCloudPlatform
 *    @c kGTLRAuthScopeServiceUsageServiceManagement
 */
@interface GTLRServiceUsageQuery_OperationsCancel : GTLRServiceUsageQuery
// Previous library name was
//   +[GTLQueryServiceUsage queryForOperationsCancelWithObject:name:]

/** The name of the operation resource to be cancelled. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRServiceUsage_Empty.
 *
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not
 *  guaranteed. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use
 *  Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation,
 *  the operation is not deleted; instead, it becomes an operation with
 *  an Operation.error value with a google.rpc.Status.code of 1,
 *  corresponding to `Code.CANCELLED`.
 *
 *  @param object The @c GTLRServiceUsage_CancelOperationRequest to include in
 *    the query.
 *  @param name The name of the operation resource to be cancelled.
 *
 *  @return GTLRServiceUsageQuery_OperationsCancel
 */
+ (instancetype)queryWithObject:(GTLRServiceUsage_CancelOperationRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  Method: serviceusage.operations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceUsageCloudPlatform
 *    @c kGTLRAuthScopeServiceUsageServiceManagement
 */
@interface GTLRServiceUsageQuery_OperationsDelete : GTLRServiceUsageQuery
// Previous library name was
//   +[GTLQueryServiceUsage queryForOperationsDeleteWithname:]

/** The name of the operation resource to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRServiceUsage_Empty.
 *
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  @param name The name of the operation resource to be deleted.
 *
 *  @return GTLRServiceUsageQuery_OperationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: serviceusage.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceUsageCloudPlatform
 *    @c kGTLRAuthScopeServiceUsageServiceManagement
 */
@interface GTLRServiceUsageQuery_OperationsGet : GTLRServiceUsageQuery
// Previous library name was
//   +[GTLQueryServiceUsage queryForOperationsGetWithname:]

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRServiceUsage_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRServiceUsageQuery_OperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`. To
 *  override the binding, API services can add a binding such as
 *  `"/v1/{name=users/ *}/operations"` to their service configuration.
 *  For backwards compatibility, the default name includes the operations
 *  collection id, however overriding users must ensure the name binding
 *  is the parent resource, without the operations collection id.
 *
 *  Method: serviceusage.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceUsageCloudPlatform
 *    @c kGTLRAuthScopeServiceUsageServiceManagement
 */
@interface GTLRServiceUsageQuery_OperationsList : GTLRServiceUsageQuery
// Previous library name was
//   +[GTLQueryServiceUsage queryForOperationsList]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRServiceUsage_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`.
 *  NOTE: the `name` binding allows API services to override the binding
 *  to use different resource name schemes, such as `users/ * /operations`. To
 *  override the binding, API services can add a binding such as
 *  `"/v1/{name=users/ *}/operations"` to their service configuration.
 *  For backwards compatibility, the default name includes the operations
 *  collection id, however overriding users must ensure the name binding
 *  is the parent resource, without the operations collection id.
 *
 *  @return GTLRServiceUsageQuery_OperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  Enable multiple services on a project. The operation is atomic: if enabling
 *  any service fails, then the entire batch fails, and no state changes occur.
 *  To enable a single service, use the `EnableService` method instead.
 *
 *  Method: serviceusage.services.batchEnable
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceUsageCloudPlatform
 *    @c kGTLRAuthScopeServiceUsageServiceManagement
 */
@interface GTLRServiceUsageQuery_ServicesBatchEnable : GTLRServiceUsageQuery
// Previous library name was
//   +[GTLQueryServiceUsage queryForServicesBatchEnableWithObject:parent:]

/**
 *  Parent to enable services on.
 *  An example name would be:
 *  `projects/123` where `123` is the project number.
 *  The `BatchEnableServices` method currently only supports projects.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRServiceUsage_Operation.
 *
 *  Enable multiple services on a project. The operation is atomic: if enabling
 *  any service fails, then the entire batch fails, and no state changes occur.
 *  To enable a single service, use the `EnableService` method instead.
 *
 *  @param object The @c GTLRServiceUsage_BatchEnableServicesRequest to include
 *    in the query.
 *  @param parent Parent to enable services on.
 *    An example name would be:
 *    `projects/123` where `123` is the project number.
 *    The `BatchEnableServices` method currently only supports projects.
 *
 *  @return GTLRServiceUsageQuery_ServicesBatchEnable
 */
+ (instancetype)queryWithObject:(GTLRServiceUsage_BatchEnableServicesRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Returns the service configurations and enabled states for a given list of
 *  services.
 *
 *  Method: serviceusage.services.batchGet
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceUsageCloudPlatform
 *    @c kGTLRAuthScopeServiceUsageCloudPlatformReadOnly
 */
@interface GTLRServiceUsageQuery_ServicesBatchGet : GTLRServiceUsageQuery
// Previous library name was
//   +[GTLQueryServiceUsage queryForServicesBatchGetWithparent:]

/**
 *  Names of the services to retrieve.
 *  An example name would be:
 *  `projects/123/services/serviceusage.googleapis.com` where `123` is the
 *  project number.
 *  A single request can get a maximum of 30 services at a time.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *names;

/**
 *  Parent to retrieve services from.
 *  If this is set, the parent of all of the services specified in `names` must
 *  match this field. An example name would be: `projects/123` where `123` is
 *  the project number. The `BatchGetServices` method currently only supports
 *  projects.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRServiceUsage_BatchGetServicesResponse.
 *
 *  Returns the service configurations and enabled states for a given list of
 *  services.
 *
 *  @param parent Parent to retrieve services from.
 *    If this is set, the parent of all of the services specified in `names`
 *    must
 *    match this field. An example name would be: `projects/123` where `123` is
 *    the project number. The `BatchGetServices` method currently only supports
 *    projects.
 *
 *  @return GTLRServiceUsageQuery_ServicesBatchGet
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Disable a service so that it can no longer be used with a project.
 *  This prevents unintended usage that may cause unexpected billing
 *  charges or security leaks.
 *  It is not valid to call the disable method on a service that is not
 *  currently enabled. Callers will receive a `FAILED_PRECONDITION` status if
 *  the target service is not currently enabled.
 *
 *  Method: serviceusage.services.disable
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceUsageCloudPlatform
 *    @c kGTLRAuthScopeServiceUsageServiceManagement
 */
@interface GTLRServiceUsageQuery_ServicesDisable : GTLRServiceUsageQuery
// Previous library name was
//   +[GTLQueryServiceUsage queryForServicesDisableWithObject:name:]

/**
 *  Name of the consumer and service to disable the service on.
 *  The enable and disable methods currently only support projects.
 *  An example name would be:
 *  `projects/123/services/serviceusage.googleapis.com` where `123` is the
 *  project number.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRServiceUsage_Operation.
 *
 *  Disable a service so that it can no longer be used with a project.
 *  This prevents unintended usage that may cause unexpected billing
 *  charges or security leaks.
 *  It is not valid to call the disable method on a service that is not
 *  currently enabled. Callers will receive a `FAILED_PRECONDITION` status if
 *  the target service is not currently enabled.
 *
 *  @param object The @c GTLRServiceUsage_DisableServiceRequest to include in
 *    the query.
 *  @param name Name of the consumer and service to disable the service on.
 *    The enable and disable methods currently only support projects.
 *    An example name would be:
 *    `projects/123/services/serviceusage.googleapis.com` where `123` is the
 *    project number.
 *
 *  @return GTLRServiceUsageQuery_ServicesDisable
 */
+ (instancetype)queryWithObject:(GTLRServiceUsage_DisableServiceRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Enable a service so that it can be used with a project.
 *
 *  Method: serviceusage.services.enable
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceUsageCloudPlatform
 *    @c kGTLRAuthScopeServiceUsageServiceManagement
 */
@interface GTLRServiceUsageQuery_ServicesEnable : GTLRServiceUsageQuery
// Previous library name was
//   +[GTLQueryServiceUsage queryForServicesEnableWithObject:name:]

/**
 *  Name of the consumer and service to enable the service on.
 *  The `EnableService` and `DisableService` methods currently only support
 *  projects.
 *  Enabling a service requires that the service is public or is shared with
 *  the user enabling the service.
 *  An example name would be:
 *  `projects/123/services/serviceusage.googleapis.com` where `123` is the
 *  project number.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRServiceUsage_Operation.
 *
 *  Enable a service so that it can be used with a project.
 *
 *  @param object The @c GTLRServiceUsage_EnableServiceRequest to include in the
 *    query.
 *  @param name Name of the consumer and service to enable the service on.
 *    The `EnableService` and `DisableService` methods currently only support
 *    projects.
 *    Enabling a service requires that the service is public or is shared with
 *    the user enabling the service.
 *    An example name would be:
 *    `projects/123/services/serviceusage.googleapis.com` where `123` is the
 *    project number.
 *
 *  @return GTLRServiceUsageQuery_ServicesEnable
 */
+ (instancetype)queryWithObject:(GTLRServiceUsage_EnableServiceRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Returns the service configuration and enabled state for a given service.
 *
 *  Method: serviceusage.services.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceUsageCloudPlatform
 *    @c kGTLRAuthScopeServiceUsageCloudPlatformReadOnly
 */
@interface GTLRServiceUsageQuery_ServicesGet : GTLRServiceUsageQuery
// Previous library name was
//   +[GTLQueryServiceUsage queryForServicesGetWithname:]

/**
 *  Name of the consumer and service to get the `ConsumerState` for.
 *  An example name would be:
 *  `projects/123/services/serviceusage.googleapis.com` where `123` is the
 *  project number.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRServiceUsage_GoogleApiServiceusageV1Service.
 *
 *  Returns the service configuration and enabled state for a given service.
 *
 *  @param name Name of the consumer and service to get the `ConsumerState` for.
 *    An example name would be:
 *    `projects/123/services/serviceusage.googleapis.com` where `123` is the
 *    project number.
 *
 *  @return GTLRServiceUsageQuery_ServicesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List all services available to the specified project, and the current
 *  state of those services with respect to the project. The list includes
 *  all public services, all services for which the calling user has the
 *  `servicemanagement.services.bind` permission, and all services that have
 *  already been enabled on the project. The list can be filtered to
 *  only include services in a specific state, for example to only include
 *  services enabled on the project.
 *
 *  Method: serviceusage.services.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeServiceUsageCloudPlatform
 *    @c kGTLRAuthScopeServiceUsageCloudPlatformReadOnly
 */
@interface GTLRServiceUsageQuery_ServicesList : GTLRServiceUsageQuery
// Previous library name was
//   +[GTLQueryServiceUsage queryForServicesListWithparent:]

/**
 *  Only list services that conform to the given filter.
 *  The allowed filter strings are `state:ENABLED` and `state:DISABLED`.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  Requested size of the next page of data.
 *  Requested page size cannot exceed 200.
 *  If not set, the default page size is 50.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Token identifying which result to start with, which is returned by a
 *  previous list call.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Parent to search for services on.
 *  An example name would be:
 *  `projects/123` where `123` is the project number.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRServiceUsage_ListServicesResponse.
 *
 *  List all services available to the specified project, and the current
 *  state of those services with respect to the project. The list includes
 *  all public services, all services for which the calling user has the
 *  `servicemanagement.services.bind` permission, and all services that have
 *  already been enabled on the project. The list can be filtered to
 *  only include services in a specific state, for example to only include
 *  services enabled on the project.
 *
 *  @param parent Parent to search for services on.
 *    An example name would be:
 *    `projects/123` where `123` is the project number.
 *
 *  @return GTLRServiceUsageQuery_ServicesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
