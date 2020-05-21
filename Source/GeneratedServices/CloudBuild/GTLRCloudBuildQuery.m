// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Build API (cloudbuild/v1)
// Description:
//   Creates and manages builds on Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/cloud-build/docs/

#import "GTLRCloudBuildQuery.h"

#import "GTLRCloudBuildObjects.h"

@implementation GTLRCloudBuildQuery

@dynamic fields;

@end

@implementation GTLRCloudBuildQuery_OperationsCancel

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudBuild_CancelOperationRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:cancel";
  GTLRCloudBuildQuery_OperationsCancel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudBuild_Empty class];
  query.loggingName = @"cloudbuild.operations.cancel";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_OperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudBuildQuery_OperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudBuild_Operation class];
  query.loggingName = @"cloudbuild.operations.get";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_OperationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudBuildQuery_OperationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudBuild_ListOperationsResponse class];
  query.loggingName = @"cloudbuild.operations.list";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_ProjectsBuildsCancel

@dynamic identifier, projectId;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"identifier" : @"id" };
}

+ (instancetype)queryWithObject:(GTLRCloudBuild_CancelBuildRequest *)object
                      projectId:(NSString *)projectId
                     identifier:(NSString *)identifier {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[
    @"id", @"projectId"
  ];
  NSString *pathURITemplate = @"v1/projects/{projectId}/builds/{id}:cancel";
  GTLRCloudBuildQuery_ProjectsBuildsCancel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.identifier = identifier;
  query.expectedObjectClass = [GTLRCloudBuild_Build class];
  query.loggingName = @"cloudbuild.projects.builds.cancel";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_ProjectsBuildsCreate

@dynamic projectId;

+ (instancetype)queryWithObject:(GTLRCloudBuild_Build *)object
                      projectId:(NSString *)projectId {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"v1/projects/{projectId}/builds";
  GTLRCloudBuildQuery_ProjectsBuildsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRCloudBuild_Operation class];
  query.loggingName = @"cloudbuild.projects.builds.create";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_ProjectsBuildsGet

@dynamic identifier, projectId;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"identifier" : @"id" };
}

+ (instancetype)queryWithProjectId:(NSString *)projectId
                        identifier:(NSString *)identifier {
  NSArray *pathParams = @[
    @"id", @"projectId"
  ];
  NSString *pathURITemplate = @"v1/projects/{projectId}/builds/{id}";
  GTLRCloudBuildQuery_ProjectsBuildsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.identifier = identifier;
  query.expectedObjectClass = [GTLRCloudBuild_Build class];
  query.loggingName = @"cloudbuild.projects.builds.get";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_ProjectsBuildsList

@dynamic filter, pageSize, pageToken, projectId;

+ (instancetype)queryWithProjectId:(NSString *)projectId {
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"v1/projects/{projectId}/builds";
  GTLRCloudBuildQuery_ProjectsBuildsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRCloudBuild_ListBuildsResponse class];
  query.loggingName = @"cloudbuild.projects.builds.list";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_ProjectsBuildsRetry

@dynamic identifier, projectId;

+ (NSDictionary<NSString *, NSString *> *)parameterNameMap {
  return @{ @"identifier" : @"id" };
}

+ (instancetype)queryWithObject:(GTLRCloudBuild_RetryBuildRequest *)object
                      projectId:(NSString *)projectId
                     identifier:(NSString *)identifier {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[
    @"id", @"projectId"
  ];
  NSString *pathURITemplate = @"v1/projects/{projectId}/builds/{id}:retry";
  GTLRCloudBuildQuery_ProjectsBuildsRetry *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.identifier = identifier;
  query.expectedObjectClass = [GTLRCloudBuild_Operation class];
  query.loggingName = @"cloudbuild.projects.builds.retry";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_ProjectsLocationsOperationsCancel

@dynamic name;

+ (instancetype)queryWithObject:(GTLRCloudBuild_CancelOperationRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:cancel";
  GTLRCloudBuildQuery_ProjectsLocationsOperationsCancel *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRCloudBuild_Empty class];
  query.loggingName = @"cloudbuild.projects.locations.operations.cancel";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_ProjectsLocationsOperationsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRCloudBuildQuery_ProjectsLocationsOperationsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudBuild_Operation class];
  query.loggingName = @"cloudbuild.projects.locations.operations.get";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_ProjectsLocationsOperationsList

@dynamic filter, name, pageSize, pageToken;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}/operations";
  GTLRCloudBuildQuery_ProjectsLocationsOperationsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRCloudBuild_ListOperationsResponse class];
  query.loggingName = @"cloudbuild.projects.locations.operations.list";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_ProjectsTriggersCreate

@dynamic projectId;

+ (instancetype)queryWithObject:(GTLRCloudBuild_BuildTrigger *)object
                      projectId:(NSString *)projectId {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"v1/projects/{projectId}/triggers";
  GTLRCloudBuildQuery_ProjectsTriggersCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRCloudBuild_BuildTrigger class];
  query.loggingName = @"cloudbuild.projects.triggers.create";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_ProjectsTriggersDelete

@dynamic projectId, triggerId;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         triggerId:(NSString *)triggerId {
  NSArray *pathParams = @[
    @"projectId", @"triggerId"
  ];
  NSString *pathURITemplate = @"v1/projects/{projectId}/triggers/{triggerId}";
  GTLRCloudBuildQuery_ProjectsTriggersDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.triggerId = triggerId;
  query.expectedObjectClass = [GTLRCloudBuild_Empty class];
  query.loggingName = @"cloudbuild.projects.triggers.delete";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_ProjectsTriggersGet

@dynamic projectId, triggerId;

+ (instancetype)queryWithProjectId:(NSString *)projectId
                         triggerId:(NSString *)triggerId {
  NSArray *pathParams = @[
    @"projectId", @"triggerId"
  ];
  NSString *pathURITemplate = @"v1/projects/{projectId}/triggers/{triggerId}";
  GTLRCloudBuildQuery_ProjectsTriggersGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.triggerId = triggerId;
  query.expectedObjectClass = [GTLRCloudBuild_BuildTrigger class];
  query.loggingName = @"cloudbuild.projects.triggers.get";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_ProjectsTriggersList

@dynamic pageSize, pageToken, projectId;

+ (instancetype)queryWithProjectId:(NSString *)projectId {
  NSArray *pathParams = @[ @"projectId" ];
  NSString *pathURITemplate = @"v1/projects/{projectId}/triggers";
  GTLRCloudBuildQuery_ProjectsTriggersList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.projectId = projectId;
  query.expectedObjectClass = [GTLRCloudBuild_ListBuildTriggersResponse class];
  query.loggingName = @"cloudbuild.projects.triggers.list";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_ProjectsTriggersPatch

@dynamic projectId, triggerId;

+ (instancetype)queryWithObject:(GTLRCloudBuild_BuildTrigger *)object
                      projectId:(NSString *)projectId
                      triggerId:(NSString *)triggerId {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[
    @"projectId", @"triggerId"
  ];
  NSString *pathURITemplate = @"v1/projects/{projectId}/triggers/{triggerId}";
  GTLRCloudBuildQuery_ProjectsTriggersPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.triggerId = triggerId;
  query.expectedObjectClass = [GTLRCloudBuild_BuildTrigger class];
  query.loggingName = @"cloudbuild.projects.triggers.patch";
  return query;
}

@end

@implementation GTLRCloudBuildQuery_ProjectsTriggersRun

@dynamic projectId, triggerId;

+ (instancetype)queryWithObject:(GTLRCloudBuild_RepoSource *)object
                      projectId:(NSString *)projectId
                      triggerId:(NSString *)triggerId {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[
    @"projectId", @"triggerId"
  ];
  NSString *pathURITemplate = @"v1/projects/{projectId}/triggers/{triggerId}:run";
  GTLRCloudBuildQuery_ProjectsTriggersRun *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.projectId = projectId;
  query.triggerId = triggerId;
  query.expectedObjectClass = [GTLRCloudBuild_Operation class];
  query.loggingName = @"cloudbuild.projects.triggers.run";
  return query;
}

@end
