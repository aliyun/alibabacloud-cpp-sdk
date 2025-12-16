#include <darabonba/Core.hpp>
#include <alibabacloud/Schedulerx220190430.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Schedulerx220190430::Models;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{

AlibabaCloud::Schedulerx220190430::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-beijing" , "schedulerx.cn-beijing.aliyuncs.com"},
    {"cn-hangzhou" , "schedulerx.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai" , "schedulerx.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen" , "schedulerx.cn-shenzhen.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("schedulerx2", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Deletes multiple jobs at a time.
 *
 * @description Before you call this operation, you must add the following dependency to the pom.xml file:
 * ```xml
 * <dependency>
 *     <groupId>com.aliyun</groupId>
 *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
 *     <version>1.0.4</version>
 * </dependency>
 * ```
 *
 * @param request BatchDeleteJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteJobsResponse
 */
BatchDeleteJobsResponse Client::batchDeleteJobsWithOptions(const BatchDeleteJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    query["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasJobIdList()) {
    body["JobIdList"] = request.jobIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchDeleteJobs"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteJobsResponse>();
}

/**
 * @summary Deletes multiple jobs at a time.
 *
 * @description Before you call this operation, you must add the following dependency to the pom.xml file:
 * ```xml
 * <dependency>
 *     <groupId>com.aliyun</groupId>
 *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
 *     <version>1.0.4</version>
 * </dependency>
 * ```
 *
 * @param request BatchDeleteJobsRequest
 * @return BatchDeleteJobsResponse
 */
BatchDeleteJobsResponse Client::batchDeleteJobs(const BatchDeleteJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteJobsWithOptions(request, runtime);
}

/**
 * @summary The additional information that is returned.
 *
 * @param request BatchDeleteRouteStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteRouteStrategyResponse
 */
BatchDeleteRouteStrategyResponse Client::batchDeleteRouteStrategyWithOptions(const BatchDeleteRouteStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasJobIdList()) {
    body["JobIdList"] = request.jobIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchDeleteRouteStrategy"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteRouteStrategyResponse>();
}

/**
 * @summary The additional information that is returned.
 *
 * @param request BatchDeleteRouteStrategyRequest
 * @return BatchDeleteRouteStrategyResponse
 */
BatchDeleteRouteStrategyResponse Client::batchDeleteRouteStrategy(const BatchDeleteRouteStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteRouteStrategyWithOptions(request, runtime);
}

/**
 * @summary Disables multiple jobs at a time.
 *
 * @description Before you call this operation, you must add the following dependency to the pom.xml file:
 * ```xml
 * <dependency>
 *     <groupId>com.aliyun</groupId>
 *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
 *     <version>1.0.4</version>
 * </dependency>
 * ```
 *
 * @param request BatchDisableJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDisableJobsResponse
 */
BatchDisableJobsResponse Client::batchDisableJobsWithOptions(const BatchDisableJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    query["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasJobIdList()) {
    body["JobIdList"] = request.jobIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchDisableJobs"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDisableJobsResponse>();
}

/**
 * @summary Disables multiple jobs at a time.
 *
 * @description Before you call this operation, you must add the following dependency to the pom.xml file:
 * ```xml
 * <dependency>
 *     <groupId>com.aliyun</groupId>
 *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
 *     <version>1.0.4</version>
 * </dependency>
 * ```
 *
 * @param request BatchDisableJobsRequest
 * @return BatchDisableJobsResponse
 */
BatchDisableJobsResponse Client::batchDisableJobs(const BatchDisableJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDisableJobsWithOptions(request, runtime);
}

/**
 * @summary Enables multiple jobs at a time.
 *
 * @description Before you call this operation, you must add the following dependency to the pom.xml file:
 * ```xml
 * <dependency>
 *     <groupId>com.aliyun</groupId>
 *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
 *     <version>1.0.4</version>
 * </dependency>
 * ```
 *
 * @param request BatchEnableJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchEnableJobsResponse
 */
BatchEnableJobsResponse Client::batchEnableJobsWithOptions(const BatchEnableJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    query["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasJobIdList()) {
    body["JobIdList"] = request.jobIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchEnableJobs"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchEnableJobsResponse>();
}

/**
 * @summary Enables multiple jobs at a time.
 *
 * @description Before you call this operation, you must add the following dependency to the pom.xml file:
 * ```xml
 * <dependency>
 *     <groupId>com.aliyun</groupId>
 *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
 *     <version>1.0.4</version>
 * </dependency>
 * ```
 *
 * @param request BatchEnableJobsRequest
 * @return BatchEnableJobsResponse
 */
BatchEnableJobsResponse Client::batchEnableJobs(const BatchEnableJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchEnableJobsWithOptions(request, runtime);
}

/**
 * @summary Creates an application group. The AppKey is returned.
 *
 * @param request CreateAppGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppGroupResponse
 */
CreateAppGroupResponse Client::createAppGroupWithOptions(const CreateAppGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppGroup"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppGroupResponse>();
}

/**
 * @summary Creates an application group. The AppKey is returned.
 *
 * @param request CreateAppGroupRequest
 * @return CreateAppGroupResponse
 */
CreateAppGroupResponse Client::createAppGroup(const CreateAppGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a job and obtains the job ID.
 *
 * @param request CreateJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJobWithOptions(const CreateJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasAttemptInterval()) {
    body["AttemptInterval"] = request.attemptInterval();
  }

  if (!!request.hasCalendar()) {
    body["Calendar"] = request.calendar();
  }

  if (!!request.hasClassName()) {
    body["ClassName"] = request.className();
  }

  if (!!request.hasConsumerSize()) {
    body["ConsumerSize"] = request.consumerSize();
  }

  if (!!request.hasContactInfo()) {
    body["ContactInfo"] = request.contactInfo();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasDataOffset()) {
    body["DataOffset"] = request.dataOffset();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDispatcherSize()) {
    body["DispatcherSize"] = request.dispatcherSize();
  }

  if (!!request.hasExecuteMode()) {
    body["ExecuteMode"] = request.executeMode();
  }

  if (!!request.hasFailEnable()) {
    body["FailEnable"] = request.failEnable();
  }

  if (!!request.hasFailTimes()) {
    body["FailTimes"] = request.failTimes();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasJobType()) {
    body["JobType"] = request.jobType();
  }

  if (!!request.hasMaxAttempt()) {
    body["MaxAttempt"] = request.maxAttempt();
  }

  if (!!request.hasMaxConcurrency()) {
    body["MaxConcurrency"] = request.maxConcurrency();
  }

  if (!!request.hasMissWorkerEnable()) {
    body["MissWorkerEnable"] = request.missWorkerEnable();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    body["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasParameters()) {
    body["Parameters"] = request.parameters();
  }

  if (!!request.hasQueueSize()) {
    body["QueueSize"] = request.queueSize();
  }

  if (!!request.hasSendChannel()) {
    body["SendChannel"] = request.sendChannel();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasSuccessNoticeEnable()) {
    body["SuccessNoticeEnable"] = request.successNoticeEnable();
  }

  if (!!request.hasTaskAttemptInterval()) {
    body["TaskAttemptInterval"] = request.taskAttemptInterval();
  }

  if (!!request.hasTaskMaxAttempt()) {
    body["TaskMaxAttempt"] = request.taskMaxAttempt();
  }

  if (!!request.hasTimeExpression()) {
    body["TimeExpression"] = request.timeExpression();
  }

  if (!!request.hasTimeType()) {
    body["TimeType"] = request.timeType();
  }

  if (!!request.hasTimeout()) {
    body["Timeout"] = request.timeout();
  }

  if (!!request.hasTimeoutEnable()) {
    body["TimeoutEnable"] = request.timeoutEnable();
  }

  if (!!request.hasTimeoutKillEnable()) {
    body["TimeoutKillEnable"] = request.timeoutKillEnable();
  }

  if (!!request.hasTimezone()) {
    body["Timezone"] = request.timezone();
  }

  if (!!request.hasXAttrs()) {
    body["XAttrs"] = request.XAttrs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateJob"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateJobResponse>();
}

/**
 * @summary Creates a job and obtains the job ID.
 *
 * @param request CreateJobRequest
 * @return CreateJobResponse
 */
CreateJobResponse Client::createJob(const CreateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createJobWithOptions(request, runtime);
}

/**
 * @summary Creates a namespace.
 *
 * @param request CreateNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespaceWithOptions(const CreateNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNamespace"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNamespaceResponse>();
}

/**
 * @summary Creates a namespace.
 *
 * @param request CreateNamespaceRequest
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespace(const CreateNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNamespaceWithOptions(request, runtime);
}

/**
 * @summary Creates a routing policy.
 *
 * @param request CreateRouteStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRouteStrategyResponse
 */
CreateRouteStrategyResponse Client::createRouteStrategyWithOptions(const CreateRouteStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasStrategyContent()) {
    query["StrategyContent"] = request.strategyContent();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRouteStrategy"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRouteStrategyResponse>();
}

/**
 * @summary Creates a routing policy.
 *
 * @param request CreateRouteStrategyRequest
 * @return CreateRouteStrategyResponse
 */
CreateRouteStrategyResponse Client::createRouteStrategy(const CreateRouteStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRouteStrategyWithOptions(request, runtime);
}

/**
 * @summary Creates a calendar.
 *
 * @param request CreateSchedulerxCalendarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSchedulerxCalendarResponse
 */
CreateSchedulerxCalendarResponse Client::createSchedulerxCalendarWithOptions(const CreateSchedulerxCalendarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCalendarName()) {
    body["CalendarName"] = request.calendarName();
  }

  if (!!request.hasMonthDaysContent()) {
    body["MonthDaysContent"] = request.monthDaysContent();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasYear()) {
    body["Year"] = request.year();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSchedulerxCalendar"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSchedulerxCalendarResponse>();
}

/**
 * @summary Creates a calendar.
 *
 * @param request CreateSchedulerxCalendarRequest
 * @return CreateSchedulerxCalendarResponse
 */
CreateSchedulerxCalendarResponse Client::createSchedulerxCalendar(const CreateSchedulerxCalendarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSchedulerxCalendarWithOptions(request, runtime);
}

/**
 * @summary Creates a notification policy.
 *
 * @param request CreateSchedulerxNotificationPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSchedulerxNotificationPolicyResponse
 */
CreateSchedulerxNotificationPolicyResponse Client::createSchedulerxNotificationPolicyWithOptions(const CreateSchedulerxNotificationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannelTimeRange()) {
    body["ChannelTimeRange"] = request.channelTimeRange();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasPolicyName()) {
    body["PolicyName"] = request.policyName();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSchedulerxNotificationPolicy"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSchedulerxNotificationPolicyResponse>();
}

/**
 * @summary Creates a notification policy.
 *
 * @param request CreateSchedulerxNotificationPolicyRequest
 * @return CreateSchedulerxNotificationPolicyResponse
 */
CreateSchedulerxNotificationPolicyResponse Client::createSchedulerxNotificationPolicy(const CreateSchedulerxNotificationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSchedulerxNotificationPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a workflow. By default, the created workflow is disabled. After you update the directed acyclic graph (DAG) of the workflow, you must manually or call the corresponding operation to enable the workflow. You can call this operation only in the professional edition.
 *
 * @param request CreateWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkflowResponse
 */
CreateWorkflowResponse Client::createWorkflowWithOptions(const CreateWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasMaxConcurrency()) {
    body["MaxConcurrency"] = request.maxConcurrency();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    body["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasTimeExpression()) {
    body["TimeExpression"] = request.timeExpression();
  }

  if (!!request.hasTimeType()) {
    body["TimeType"] = request.timeType();
  }

  if (!!request.hasTimezone()) {
    body["Timezone"] = request.timezone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateWorkflow"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkflowResponse>();
}

/**
 * @summary Creates a workflow. By default, the created workflow is disabled. After you update the directed acyclic graph (DAG) of the workflow, you must manually or call the corresponding operation to enable the workflow. You can call this operation only in the professional edition.
 *
 * @param request CreateWorkflowRequest
 * @return CreateWorkflowResponse
 */
CreateWorkflowResponse Client::createWorkflow(const CreateWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkflowWithOptions(request, runtime);
}

/**
 * @summary The additional information that is returned.
 *
 * @param request DeleteAppGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppGroupResponse
 */
DeleteAppGroupResponse Client::deleteAppGroupWithOptions(const DeleteAppGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteJobs()) {
    query["DeleteJobs"] = request.deleteJobs();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppGroup"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppGroupResponse>();
}

/**
 * @summary The additional information that is returned.
 *
 * @param request DeleteAppGroupRequest
 * @return DeleteAppGroupResponse
 */
DeleteAppGroupResponse Client::deleteAppGroup(const DeleteAppGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified job.
 *
 * @param request DeleteJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteJobResponse
 */
DeleteJobResponse Client::deleteJobWithOptions(const DeleteJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteJob"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteJobResponse>();
}

/**
 * @summary Deletes a specified job.
 *
 * @param request DeleteJobRequest
 * @return DeleteJobResponse
 */
DeleteJobResponse Client::deleteJob(const DeleteJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a namespace.
 *
 * @param request DeleteNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespaceWithOptions(const DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNamespace"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNamespaceResponse>();
}

/**
 * @summary Deletes a namespace.
 *
 * @param request DeleteNamespaceRequest
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespace(const DeleteNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNamespaceWithOptions(request, runtime);
}

/**
 * @summary Deletes a routing policy.
 *
 * @param request DeleteRouteStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRouteStrategyResponse
 */
DeleteRouteStrategyResponse Client::deleteRouteStrategyWithOptions(const DeleteRouteStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRouteStrategy"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRouteStrategyResponse>();
}

/**
 * @summary Deletes a routing policy.
 *
 * @param request DeleteRouteStrategyRequest
 * @return DeleteRouteStrategyResponse
 */
DeleteRouteStrategyResponse Client::deleteRouteStrategy(const DeleteRouteStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRouteStrategyWithOptions(request, runtime);
}

/**
 * @summary Deletes a calendar.
 *
 * @param request DeleteSchedulerxCalendarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSchedulerxCalendarResponse
 */
DeleteSchedulerxCalendarResponse Client::deleteSchedulerxCalendarWithOptions(const DeleteSchedulerxCalendarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCalendarName()) {
    body["CalendarName"] = request.calendarName();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasYear()) {
    body["Year"] = request.year();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSchedulerxCalendar"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSchedulerxCalendarResponse>();
}

/**
 * @summary Deletes a calendar.
 *
 * @param request DeleteSchedulerxCalendarRequest
 * @return DeleteSchedulerxCalendarResponse
 */
DeleteSchedulerxCalendarResponse Client::deleteSchedulerxCalendar(const DeleteSchedulerxCalendarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSchedulerxCalendarWithOptions(request, runtime);
}

/**
 * @summary Deletes a notification policy.
 *
 * @param request DeleteSchedulerxNotificationPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSchedulerxNotificationPolicyResponse
 */
DeleteSchedulerxNotificationPolicyResponse Client::deleteSchedulerxNotificationPolicyWithOptions(const DeleteSchedulerxNotificationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicyName()) {
    body["PolicyName"] = request.policyName();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSchedulerxNotificationPolicy"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSchedulerxNotificationPolicyResponse>();
}

/**
 * @summary Deletes a notification policy.
 *
 * @param request DeleteSchedulerxNotificationPolicyRequest
 * @return DeleteSchedulerxNotificationPolicyResponse
 */
DeleteSchedulerxNotificationPolicyResponse Client::deleteSchedulerxNotificationPolicy(const DeleteSchedulerxNotificationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSchedulerxNotificationPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a workflow.
 *
 * @param request DeleteWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkflowResponse
 */
DeleteWorkflowResponse Client::deleteWorkflowWithOptions(const DeleteWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkflow"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkflowResponse>();
}

/**
 * @summary Deletes a workflow.
 *
 * @param request DeleteWorkflowRequest
 * @return DeleteWorkflowResponse
 */
DeleteWorkflowResponse Client::deleteWorkflow(const DeleteWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWorkflowWithOptions(request, runtime);
}

/**
 * @summary Returns available regions.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Returns available regions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Designates machines.
 *
 * @param request DesignateWorkersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DesignateWorkersResponse
 */
DesignateWorkersResponse Client::designateWorkersWithOptions(const DesignateWorkersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DesignateWorkers"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DesignateWorkersResponse>();
}

/**
 * @summary Designates machines.
 *
 * @param request DesignateWorkersRequest
 * @return DesignateWorkersResponse
 */
DesignateWorkersResponse Client::designateWorkers(const DesignateWorkersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return designateWorkersWithOptions(request, runtime);
}

/**
 * @summary Disables a job.
 *
 * @param request DisableJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableJobResponse
 */
DisableJobResponse Client::disableJobWithOptions(const DisableJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableJob"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableJobResponse>();
}

/**
 * @summary Disables a job.
 *
 * @param request DisableJobRequest
 * @return DisableJobResponse
 */
DisableJobResponse Client::disableJob(const DisableJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableJobWithOptions(request, runtime);
}

/**
 * @summary Disables a specified workflow.
 *
 * @param request DisableWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableWorkflowResponse
 */
DisableWorkflowResponse Client::disableWorkflowWithOptions(const DisableWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableWorkflow"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableWorkflowResponse>();
}

/**
 * @summary Disables a specified workflow.
 *
 * @param request DisableWorkflowRequest
 * @return DisableWorkflowResponse
 */
DisableWorkflowResponse Client::disableWorkflow(const DisableWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableWorkflowWithOptions(request, runtime);
}

/**
 * @summary Enables a job.
 *
 * @param request EnableJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableJobResponse
 */
EnableJobResponse Client::enableJobWithOptions(const EnableJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableJob"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableJobResponse>();
}

/**
 * @summary Enables a job.
 *
 * @param request EnableJobRequest
 * @return EnableJobResponse
 */
EnableJobResponse Client::enableJob(const EnableJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableJobWithOptions(request, runtime);
}

/**
 * @summary Enables a specified workflow.
 *
 * @param request EnableWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableWorkflowResponse
 */
EnableWorkflowResponse Client::enableWorkflowWithOptions(const EnableWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableWorkflow"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableWorkflowResponse>();
}

/**
 * @summary Enables a specified workflow.
 *
 * @param request EnableWorkflowRequest
 * @return EnableWorkflowResponse
 */
EnableWorkflowResponse Client::enableWorkflow(const EnableWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableWorkflowWithOptions(request, runtime);
}

/**
 * @summary Triggers a job to immediately run once.
 *
 * @description > The combination of the `JobID` and `ScheduleTime` parameters serves as a unique index. Therefore, after the ExecuteJob operation is called to run a job once, a sleep for one second is required before the ExecuteJob operation is called to run the job again. Otherwise, the job may fail.
 *
 * @param request ExecuteJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteJobResponse
 */
ExecuteJobResponse Client::executeJobWithOptions(const ExecuteJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteJob"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteJobResponse>();
}

/**
 * @summary Triggers a job to immediately run once.
 *
 * @description > The combination of the `JobID` and `ScheduleTime` parameters serves as a unique index. Therefore, after the ExecuteJob operation is called to run a job once, a sleep for one second is required before the ExecuteJob operation is called to run the job again. Otherwise, the job may fail.
 *
 * @param request ExecuteJobRequest
 * @return ExecuteJobResponse
 */
ExecuteJobResponse Client::executeJob(const ExecuteJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeJobWithOptions(request, runtime);
}

/**
 * @summary Immediately triggers a workflow.
 *
 * @param request ExecuteWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteWorkflowResponse
 */
ExecuteWorkflowResponse Client::executeWorkflowWithOptions(const ExecuteWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteWorkflow"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteWorkflowResponse>();
}

/**
 * @summary Immediately triggers a workflow.
 *
 * @param request ExecuteWorkflowRequest
 * @return ExecuteWorkflowResponse
 */
ExecuteWorkflowResponse Client::executeWorkflow(const ExecuteWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeWorkflowWithOptions(request, runtime);
}

/**
 * @summary The configuration of the alert. The value is a JSON string. For more information, see \\\\*\\\\*the additional information about response parameters below this table\\\\*\\\\*.
 *
 * @param request GetAppGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppGroupResponse
 */
GetAppGroupResponse Client::getAppGroupWithOptions(const GetAppGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppGroup"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppGroupResponse>();
}

/**
 * @summary The configuration of the alert. The value is a JSON string. For more information, see \\\\*\\\\*the additional information about response parameters below this table\\\\*\\\\*.
 *
 * @param request GetAppGroupRequest
 * @return GetAppGroupResponse
 */
GetAppGroupResponse Client::getAppGroup(const GetAppGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a job based on the job ID. In most cases, the obtained information is used to update jobs.
 *
 * @param request GetJobInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobInfoResponse
 */
GetJobInfoResponse Client::getJobInfoWithOptions(const GetJobInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobInfo"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobInfoResponse>();
}

/**
 * @summary Queries the details of a job based on the job ID. In most cases, the obtained information is used to update jobs.
 *
 * @param request GetJobInfoRequest
 * @return GetJobInfoResponse
 */
GetJobInfoResponse Client::getJobInfo(const GetJobInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a job instance. You can view the status and progress of the job instance.
 *
 * @param request GetJobInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobInstanceResponse
 */
GetJobInstanceResponse Client::getJobInstanceWithOptions(const GetJobInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobInstance"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobInstanceResponse>();
}

/**
 * @summary Queries the information about a job instance. You can view the status and progress of the job instance.
 *
 * @param request GetJobInstanceRequest
 * @return GetJobInstanceResponse
 */
GetJobInstanceResponse Client::getJobInstance(const GetJobInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the most recent 10 execution instances of a job.
 *
 * @param request GetJobInstanceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobInstanceListResponse
 */
GetJobInstanceListResponse Client::getJobInstanceListWithOptions(const GetJobInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobInstanceList"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobInstanceListResponse>();
}

/**
 * @summary Queries the most recent 10 execution instances of a job.
 *
 * @param request GetJobInstanceListRequest
 * @return GetJobInstanceListResponse
 */
GetJobInstanceListResponse Client::getJobInstanceList(const GetJobInstanceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobInstanceListWithOptions(request, runtime);
}

/**
 * @summary Queries the operational logs of a job. You can call this operation only in the professional edition.
 *
 * @param request GetLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLogResponse
 */
GetLogResponse Client::getLogWithOptions(const GetLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLog"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLogResponse>();
}

/**
 * @summary Queries the operational logs of a job. You can call this operation only in the professional edition.
 *
 * @param request GetLogRequest
 * @return GetLogResponse
 */
GetLogResponse Client::getLog(const GetLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLogWithOptions(request, runtime);
}

/**
 * @summary Retrieves job scheduling data for Professional Edition applications.
 *
 * @param request GetOverviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOverviewResponse
 */
GetOverviewResponse Client::getOverviewWithOptions(const GetOverviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.metricType();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    query["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasOperate()) {
    query["Operate"] = request.operate();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOverview"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOverviewResponse>();
}

/**
 * @summary Retrieves job scheduling data for Professional Edition applications.
 *
 * @param request GetOverviewRequest
 * @return GetOverviewResponse
 */
GetOverviewResponse Client::getOverview(const GetOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOverviewWithOptions(request, runtime);
}

/**
 * @summary Obtains the information about a workflow.
 *
 * @param request GetWorkFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkFlowResponse
 */
GetWorkFlowResponse Client::getWorkFlowWithOptions(const GetWorkFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkFlow"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkFlowResponse>();
}

/**
 * @summary Obtains the information about a workflow.
 *
 * @param request GetWorkFlowRequest
 * @return GetWorkFlowResponse
 */
GetWorkFlowResponse Client::getWorkFlow(const GetWorkFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkFlowWithOptions(request, runtime);
}

/**
 * @summary Obtains the list of workers that are connected to an application.
 *
 * @param request GetWorkerListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkerListResponse
 */
GetWorkerListResponse Client::getWorkerListWithOptions(const GetWorkerListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkerList"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkerListResponse>();
}

/**
 * @summary Obtains the list of workers that are connected to an application.
 *
 * @param request GetWorkerListRequest
 * @return GetWorkerListResponse
 */
GetWorkerListResponse Client::getWorkerList(const GetWorkerListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkerListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified workflow instance, including the state of the workflow instance, the state of each job instance, and the dependencies between job instances. You can call this operation only in the professional edition.
 *
 * @param request GetWorkflowInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkflowInstanceResponse
 */
GetWorkflowInstanceResponse Client::getWorkflowInstanceWithOptions(const GetWorkflowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkflowInstance"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkflowInstanceResponse>();
}

/**
 * @summary Queries the details of a specified workflow instance, including the state of the workflow instance, the state of each job instance, and the dependencies between job instances. You can call this operation only in the professional edition.
 *
 * @param request GetWorkflowInstanceRequest
 * @return GetWorkflowInstanceResponse
 */
GetWorkflowInstanceResponse Client::getWorkflowInstance(const GetWorkflowInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkflowInstanceWithOptions(request, runtime);
}

/**
 * @summary Grants permissions to an application group.
 *
 * @param request GrantPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantPermissionResponse
 */
GrantPermissionResponse Client::grantPermissionWithOptions(const GrantPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGrantOption()) {
    query["GrantOption"] = request.grantOption();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    query["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GrantPermission"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantPermissionResponse>();
}

/**
 * @summary Grants permissions to an application group.
 *
 * @param request GrantPermissionRequest
 * @return GrantPermissionResponse
 */
GrantPermissionResponse Client::grantPermission(const GrantPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantPermissionWithOptions(request, runtime);
}

/**
 * @summary Queries a list of applications.
 *
 * @description Before you call this operation, you must add the following dependency to the pom.xml file:
 * ```xml
 * <dependency>
 *     <groupId>com.aliyun</groupId>
 *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
 *     <version>1.0.5</version>
 * </dependency>
 * ```
 *
 * @param request ListGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroupsWithOptions(const ListGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppGroupName()) {
    query["AppGroupName"] = request.appGroupName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    query["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroups"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupsResponse>();
}

/**
 * @summary Queries a list of applications.
 *
 * @description Before you call this operation, you must add the following dependency to the pom.xml file:
 * ```xml
 * <dependency>
 *     <groupId>com.aliyun</groupId>
 *     <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
 *     <version>1.0.5</version>
 * </dependency>
 * ```
 *
 * @param request ListGroupsRequest
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroups(const ListGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries historical scripts of a job.
 *
 * @param request ListJobScriptHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobScriptHistoryResponse
 */
ListJobScriptHistoryResponse Client::listJobScriptHistoryWithOptions(const ListJobScriptHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    query["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobScriptHistory"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobScriptHistoryResponse>();
}

/**
 * @summary Queries historical scripts of a job.
 *
 * @param request ListJobScriptHistoryRequest
 * @return ListJobScriptHistoryResponse
 */
ListJobScriptHistoryResponse Client::listJobScriptHistory(const ListJobScriptHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobScriptHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries jobs.
 *
 * @description Before you call this operation, you must add the following dependency to the pom.xml file:
 *     <dependency>
 *           <groupId>com.aliyun</groupId>
 *           <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
 *           <version>1.0.5</version>
 *     </dependency>
 *
 * @param request ListJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobsWithOptions(const ListJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobs"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobsResponse>();
}

/**
 * @summary Queries jobs.
 *
 * @description Before you call this operation, you must add the following dependency to the pom.xml file:
 *     <dependency>
 *           <groupId>com.aliyun</groupId>
 *           <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
 *           <version>1.0.5</version>
 *     </dependency>
 *
 * @param request ListJobsRequest
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobs(const ListJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobsWithOptions(request, runtime);
}

/**
 * @summary Queries namespaces.
 *
 * @description Before you call this operation, you must add the following dependency to the pom.xml file:
 *     <dependency>
 *         <groupId>com.aliyun</groupId>
 *         <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
 *         <version>1.0.5</version>
 *     </dependency>
 *
 * @param request ListNamespacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNamespacesResponse
 */
ListNamespacesResponse Client::listNamespacesWithOptions(const ListNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNamespaces"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNamespacesResponse>();
}

/**
 * @summary Queries namespaces.
 *
 * @description Before you call this operation, you must add the following dependency to the pom.xml file:
 *     <dependency>
 *         <groupId>com.aliyun</groupId>
 *         <artifactId>aliyun-java-sdk-schedulerx2</artifactId>
 *         <version>1.0.5</version>
 *     </dependency>
 *
 * @param request ListNamespacesRequest
 * @return ListNamespacesResponse
 */
ListNamespacesResponse Client::listNamespaces(const ListNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNamespacesWithOptions(request, runtime);
}

/**
 * @summary Queries the information of a workflow.
 *
 * @param request ListWorkFlowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkFlowsResponse
 */
ListWorkFlowsResponse Client::listWorkFlowsWithOptions(const ListWorkFlowsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    query["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasWorkflowName()) {
    query["WorkflowName"] = request.workflowName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkFlows"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkFlowsResponse>();
}

/**
 * @summary Queries the information of a workflow.
 *
 * @param request ListWorkFlowsRequest
 * @return ListWorkFlowsResponse
 */
ListWorkFlowsResponse Client::listWorkFlows(const ListWorkFlowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkFlowsWithOptions(request, runtime);
}

/**
 * @summary Queries the execution history of a workflow. You can call this operation only in the professional edition.
 *
 * @param request ListWorkflowInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkflowInstanceResponse
 */
ListWorkflowInstanceResponse Client::listWorkflowInstanceWithOptions(const ListWorkflowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkflowInstance"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkflowInstanceResponse>();
}

/**
 * @summary Queries the execution history of a workflow. You can call this operation only in the professional edition.
 *
 * @param request ListWorkflowInstanceRequest
 * @return ListWorkflowInstanceResponse
 */
ListWorkflowInstanceResponse Client::listWorkflowInstance(const ListWorkflowInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkflowInstanceWithOptions(request, runtime);
}

/**
 * @summary Updates a calendar.
 *
 * @param request ManageSchedulerxCalendarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManageSchedulerxCalendarResponse
 */
ManageSchedulerxCalendarResponse Client::manageSchedulerxCalendarWithOptions(const ManageSchedulerxCalendarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCalendarName()) {
    body["CalendarName"] = request.calendarName();
  }

  if (!!request.hasIncremental()) {
    body["Incremental"] = request.incremental();
  }

  if (!!request.hasMonthDaysContent()) {
    body["MonthDaysContent"] = request.monthDaysContent();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasYear()) {
    body["Year"] = request.year();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ManageSchedulerxCalendar"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ManageSchedulerxCalendarResponse>();
}

/**
 * @summary Updates a calendar.
 *
 * @param request ManageSchedulerxCalendarRequest
 * @return ManageSchedulerxCalendarResponse
 */
ManageSchedulerxCalendarResponse Client::manageSchedulerxCalendar(const ManageSchedulerxCalendarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manageSchedulerxCalendarWithOptions(request, runtime);
}

/**
 * @summary Synchronizes tasks across namespaces.
 *
 * @param tmpReq ManageSchedulerxJobSyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManageSchedulerxJobSyncResponse
 */
ManageSchedulerxJobSyncResponse Client::manageSchedulerxJobSyncWithOptions(const ManageSchedulerxJobSyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ManageSchedulerxJobSyncShrinkRequest request = ManageSchedulerxJobSyncShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJobIdList()) {
    request.setJobIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.jobIdList(), "JobIdList", "json"));
  }

  json body = {};
  if (!!request.hasJobIdListShrink()) {
    body["JobIdList"] = request.jobIdListShrink();
  }

  if (!!request.hasNamespaceSource()) {
    body["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasOriginalGroupId()) {
    body["OriginalGroupId"] = request.originalGroupId();
  }

  if (!!request.hasOriginalNamespace()) {
    body["OriginalNamespace"] = request.originalNamespace();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasTargetGroupId()) {
    body["TargetGroupId"] = request.targetGroupId();
  }

  if (!!request.hasTargetNamespace()) {
    body["TargetNamespace"] = request.targetNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ManageSchedulerxJobSync"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ManageSchedulerxJobSyncResponse>();
}

/**
 * @summary Synchronizes tasks across namespaces.
 *
 * @param request ManageSchedulerxJobSyncRequest
 * @return ManageSchedulerxJobSyncResponse
 */
ManageSchedulerxJobSyncResponse Client::manageSchedulerxJobSync(const ManageSchedulerxJobSyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manageSchedulerxJobSyncWithOptions(request, runtime);
}

/**
 * @summary Updates a notification policy.
 *
 * @param request ManageSchedulerxNotificationPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManageSchedulerxNotificationPolicyResponse
 */
ManageSchedulerxNotificationPolicyResponse Client::manageSchedulerxNotificationPolicyWithOptions(const ManageSchedulerxNotificationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannelTimeRange()) {
    body["ChannelTimeRange"] = request.channelTimeRange();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasPolicyName()) {
    body["PolicyName"] = request.policyName();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ManageSchedulerxNotificationPolicy"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ManageSchedulerxNotificationPolicyResponse>();
}

/**
 * @summary Updates a notification policy.
 *
 * @param request ManageSchedulerxNotificationPolicyRequest
 * @return ManageSchedulerxNotificationPolicyResponse
 */
ManageSchedulerxNotificationPolicyResponse Client::manageSchedulerxNotificationPolicy(const ManageSchedulerxNotificationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return manageSchedulerxNotificationPolicyWithOptions(request, runtime);
}

/**
 * @summary Retrieves the information of a calendar.
 *
 * @param request ReadSchedulerxCalendarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadSchedulerxCalendarResponse
 */
ReadSchedulerxCalendarResponse Client::readSchedulerxCalendarWithOptions(const ReadSchedulerxCalendarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalendarName()) {
    query["CalendarName"] = request.calendarName();
  }

  if (!!request.hasFetchCalendarDetail()) {
    query["FetchCalendarDetail"] = request.fetchCalendarDetail();
  }

  if (!!request.hasFetchSystemCalendar()) {
    query["FetchSystemCalendar"] = request.fetchSystemCalendar();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasYear()) {
    query["Year"] = request.year();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReadSchedulerxCalendar"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadSchedulerxCalendarResponse>();
}

/**
 * @summary Retrieves the information of a calendar.
 *
 * @param request ReadSchedulerxCalendarRequest
 * @return ReadSchedulerxCalendarResponse
 */
ReadSchedulerxCalendarResponse Client::readSchedulerxCalendar(const ReadSchedulerxCalendarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readSchedulerxCalendarWithOptions(request, runtime);
}

/**
 * @summary Queries detailed information of the workers specified by a job.
 *
 * @param request ReadSchedulerxDesignateDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadSchedulerxDesignateDetailResponse
 */
ReadSchedulerxDesignateDetailResponse Client::readSchedulerxDesignateDetailWithOptions(const ReadSchedulerxDesignateDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDesignateType()) {
    query["DesignateType"] = request.designateType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    query["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReadSchedulerxDesignateDetail"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadSchedulerxDesignateDetailResponse>();
}

/**
 * @summary Queries detailed information of the workers specified by a job.
 *
 * @param request ReadSchedulerxDesignateDetailRequest
 * @return ReadSchedulerxDesignateDetailResponse
 */
ReadSchedulerxDesignateDetailResponse Client::readSchedulerxDesignateDetail(const ReadSchedulerxDesignateDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readSchedulerxDesignateDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information of specified workers.
 *
 * @param request ReadSchedulerxDesignateInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadSchedulerxDesignateInfoResponse
 */
ReadSchedulerxDesignateInfoResponse Client::readSchedulerxDesignateInfoWithOptions(const ReadSchedulerxDesignateInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    query["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReadSchedulerxDesignateInfo"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadSchedulerxDesignateInfoResponse>();
}

/**
 * @summary Queries the basic information of specified workers.
 *
 * @param request ReadSchedulerxDesignateInfoRequest
 * @return ReadSchedulerxDesignateInfoResponse
 */
ReadSchedulerxDesignateInfoResponse Client::readSchedulerxDesignateInfo(const ReadSchedulerxDesignateInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readSchedulerxDesignateInfoWithOptions(request, runtime);
}

/**
 * @summary Queries notification policies.
 *
 * @param request ReadSchedulerxNotificationPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadSchedulerxNotificationPolicyResponse
 */
ReadSchedulerxNotificationPolicyResponse Client::readSchedulerxNotificationPolicyWithOptions(const ReadSchedulerxNotificationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReadSchedulerxNotificationPolicy"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadSchedulerxNotificationPolicyResponse>();
}

/**
 * @summary Queries notification policies.
 *
 * @param request ReadSchedulerxNotificationPolicyRequest
 * @return ReadSchedulerxNotificationPolicyResponse
 */
ReadSchedulerxNotificationPolicyResponse Client::readSchedulerxNotificationPolicy(const ReadSchedulerxNotificationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readSchedulerxNotificationPolicyWithOptions(request, runtime);
}

/**
 * @summary Reruns a job to obtain the historical data of the job. You can call this operation only in the professional edition.
 *
 * @param request RerunJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RerunJobResponse
 */
RerunJobResponse Client::rerunJobWithOptions(const RerunJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataTime()) {
    body["DataTime"] = request.dataTime();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    body["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RerunJob"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RerunJobResponse>();
}

/**
 * @summary Reruns a job to obtain the historical data of the job. You can call this operation only in the professional edition.
 *
 * @param request RerunJobRequest
 * @return RerunJobResponse
 */
RerunJobResponse Client::rerunJob(const RerunJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rerunJobWithOptions(request, runtime);
}

/**
 * @summary Reruns a successful or failed job instance. You can call this operation only in the professional edition.
 *
 * @param request RetryJobInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryJobInstanceResponse
 */
RetryJobInstanceResponse Client::retryJobInstanceWithOptions(const RetryJobInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasJobInstanceId()) {
    query["JobInstanceId"] = request.jobInstanceId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    query["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryJobInstance"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryJobInstanceResponse>();
}

/**
 * @summary Reruns a successful or failed job instance. You can call this operation only in the professional edition.
 *
 * @param request RetryJobInstanceRequest
 * @return RetryJobInstanceResponse
 */
RetryJobInstanceResponse Client::retryJobInstance(const RetryJobInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryJobInstanceWithOptions(request, runtime);
}

/**
 * @summary Revokes the permissions that are granted to an Alibaba Cloud Resource Access Management (RAM) user.
 *
 * @param request RevokePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokePermissionResponse
 */
RevokePermissionResponse Client::revokePermissionWithOptions(const RevokePermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    query["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokePermission"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokePermissionResponse>();
}

/**
 * @summary Revokes the permissions that are granted to an Alibaba Cloud Resource Access Management (RAM) user.
 *
 * @param request RevokePermissionRequest
 * @return RevokePermissionResponse
 */
RevokePermissionResponse Client::revokePermission(const RevokePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokePermissionWithOptions(request, runtime);
}

/**
 * @summary Forcibly sets the state of a job instance to successful. You can call this operation only in the professional edition.
 *
 * @param request SetJobInstanceSuccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetJobInstanceSuccessResponse
 */
SetJobInstanceSuccessResponse Client::setJobInstanceSuccessWithOptions(const SetJobInstanceSuccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasJobInstanceId()) {
    query["JobInstanceId"] = request.jobInstanceId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    query["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetJobInstanceSuccess"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetJobInstanceSuccessResponse>();
}

/**
 * @summary Forcibly sets the state of a job instance to successful. You can call this operation only in the professional edition.
 *
 * @param request SetJobInstanceSuccessRequest
 * @return SetJobInstanceSuccessResponse
 */
SetJobInstanceSuccessResponse Client::setJobInstanceSuccess(const SetJobInstanceSuccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setJobInstanceSuccessWithOptions(request, runtime);
}

/**
 * @summary Forcibly sets the state of a workflow instance to successful. You can call this operation only in the professional edition.
 *
 * @param request SetWfInstanceSuccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetWfInstanceSuccessResponse
 */
SetWfInstanceSuccessResponse Client::setWfInstanceSuccessWithOptions(const SetWfInstanceSuccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    query["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWfInstanceId()) {
    query["WfInstanceId"] = request.wfInstanceId();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.workflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetWfInstanceSuccess"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetWfInstanceSuccessResponse>();
}

/**
 * @summary Forcibly sets the state of a workflow instance to successful. You can call this operation only in the professional edition.
 *
 * @param request SetWfInstanceSuccessRequest
 * @return SetWfInstanceSuccessResponse
 */
SetWfInstanceSuccessResponse Client::setWfInstanceSuccess(const SetWfInstanceSuccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setWfInstanceSuccessWithOptions(request, runtime);
}

/**
 * @summary Stops a job instance in the running state.
 *
 * @param request StopInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstanceWithOptions(const StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopInstance"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInstanceResponse>();
}

/**
 * @summary Stops a job instance in the running state.
 *
 * @param request StopInstanceRequest
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstance(const StopInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInstanceWithOptions(request, runtime);
}

/**
 * @summary Updates the application group.
 *
 * @param request UpdateAppGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppGroupResponse
 */
UpdateAppGroupResponse Client::updateAppGroupWithOptions(const UpdateAppGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppVersion()) {
    query["AppVersion"] = request.appVersion();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEnableLog()) {
    query["EnableLog"] = request.enableLog();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasMaxConcurrency()) {
    query["MaxConcurrency"] = request.maxConcurrency();
  }

  if (!!request.hasMonitorConfigJson()) {
    query["MonitorConfigJson"] = request.monitorConfigJson();
  }

  if (!!request.hasMonitorContactsJson()) {
    query["MonitorContactsJson"] = request.monitorContactsJson();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNotificationPolicyName()) {
    query["NotificationPolicyName"] = request.notificationPolicyName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAppGroup"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppGroupResponse>();
}

/**
 * @summary Updates the application group.
 *
 * @param request UpdateAppGroupRequest
 * @return UpdateAppGroupResponse
 */
UpdateAppGroupResponse Client::updateAppGroup(const UpdateAppGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAppGroupWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration information about a job. By default, you need to call the GetJobInfo operation to obtain the original configuration of the job before you call this operation to modify the configuration as required.
 *
 * @param request UpdateJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateJobResponse
 */
UpdateJobResponse Client::updateJobWithOptions(const UpdateJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasAttemptInterval()) {
    body["AttemptInterval"] = request.attemptInterval();
  }

  if (!!request.hasCalendar()) {
    body["Calendar"] = request.calendar();
  }

  if (!!request.hasClassName()) {
    body["ClassName"] = request.className();
  }

  if (!!request.hasConsumerSize()) {
    body["ConsumerSize"] = request.consumerSize();
  }

  if (!!request.hasContactInfo()) {
    body["ContactInfo"] = request.contactInfo();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasDataOffset()) {
    body["DataOffset"] = request.dataOffset();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDispatcherSize()) {
    body["DispatcherSize"] = request.dispatcherSize();
  }

  if (!!request.hasExecuteMode()) {
    body["ExecuteMode"] = request.executeMode();
  }

  if (!!request.hasFailEnable()) {
    body["FailEnable"] = request.failEnable();
  }

  if (!!request.hasFailTimes()) {
    body["FailTimes"] = request.failTimes();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  if (!!request.hasMaxAttempt()) {
    body["MaxAttempt"] = request.maxAttempt();
  }

  if (!!request.hasMaxConcurrency()) {
    body["MaxConcurrency"] = request.maxConcurrency();
  }

  if (!!request.hasMissWorkerEnable()) {
    body["MissWorkerEnable"] = request.missWorkerEnable();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    body["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasParameters()) {
    body["Parameters"] = request.parameters();
  }

  if (!!request.hasQueueSize()) {
    body["QueueSize"] = request.queueSize();
  }

  if (!!request.hasSendChannel()) {
    body["SendChannel"] = request.sendChannel();
  }

  if (!!request.hasSuccessNoticeEnable()) {
    body["SuccessNoticeEnable"] = request.successNoticeEnable();
  }

  if (!!request.hasTaskAttemptInterval()) {
    body["TaskAttemptInterval"] = request.taskAttemptInterval();
  }

  if (!!request.hasTaskDispatchMode()) {
    body["TaskDispatchMode"] = request.taskDispatchMode();
  }

  if (!!request.hasTaskMaxAttempt()) {
    body["TaskMaxAttempt"] = request.taskMaxAttempt();
  }

  if (!!request.hasTemplate()) {
    body["Template"] = request._template();
  }

  if (!!request.hasTimeExpression()) {
    body["TimeExpression"] = request.timeExpression();
  }

  if (!!request.hasTimeType()) {
    body["TimeType"] = request.timeType();
  }

  if (!!request.hasTimeout()) {
    body["Timeout"] = request.timeout();
  }

  if (!!request.hasTimeoutEnable()) {
    body["TimeoutEnable"] = request.timeoutEnable();
  }

  if (!!request.hasTimeoutKillEnable()) {
    body["TimeoutKillEnable"] = request.timeoutKillEnable();
  }

  if (!!request.hasTimezone()) {
    body["Timezone"] = request.timezone();
  }

  if (!!request.hasXAttrs()) {
    body["XAttrs"] = request.XAttrs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateJob"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateJobResponse>();
}

/**
 * @summary Updates the configuration information about a job. By default, you need to call the GetJobInfo operation to obtain the original configuration of the job before you call this operation to modify the configuration as required.
 *
 * @param request UpdateJobRequest
 * @return UpdateJobResponse
 */
UpdateJobResponse Client::updateJob(const UpdateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateJobWithOptions(request, runtime);
}

/**
 * @summary Updates the execution script of a job.
 *
 * @param request UpdateJobScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateJobScriptResponse
 */
UpdateJobScriptResponse Client::updateJobScriptWithOptions(const UpdateJobScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    body["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasScriptContent()) {
    body["ScriptContent"] = request.scriptContent();
  }

  if (!!request.hasVersionDescription()) {
    body["VersionDescription"] = request.versionDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateJobScript"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateJobScriptResponse>();
}

/**
 * @summary Updates the execution script of a job.
 *
 * @param request UpdateJobScriptRequest
 * @return UpdateJobScriptResponse
 */
UpdateJobScriptResponse Client::updateJobScript(const UpdateJobScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateJobScriptWithOptions(request, runtime);
}

/**
 * @summary Updates a namespace.
 *
 * @param request UpdateNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNamespaceResponse
 */
UpdateNamespaceResponse Client::updateNamespaceWithOptions(const UpdateNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNamespace"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNamespaceResponse>();
}

/**
 * @summary Updates a namespace.
 *
 * @param request UpdateNamespaceRequest
 * @return UpdateNamespaceResponse
 */
UpdateNamespaceResponse Client::updateNamespace(const UpdateNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNamespaceWithOptions(request, runtime);
}

/**
 * @summary Updates the basic information about a workflow. You can call this operation only in the professional edition.
 *
 * @param request UpdateWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkflowResponse
 */
UpdateWorkflowResponse Client::updateWorkflowWithOptions(const UpdateWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    body["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasTimeExpression()) {
    body["TimeExpression"] = request.timeExpression();
  }

  if (!!request.hasTimeType()) {
    body["TimeType"] = request.timeType();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.workflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkflow"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkflowResponse>();
}

/**
 * @summary Updates the basic information about a workflow. You can call this operation only in the professional edition.
 *
 * @param request UpdateWorkflowRequest
 * @return UpdateWorkflowResponse
 */
UpdateWorkflowResponse Client::updateWorkflow(const UpdateWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWorkflowWithOptions(request, runtime);
}

/**
 * @summary Modifies the nodes and dependencies of a workflow. You can call this operation only in the professional edition.
 *
 * @param request UpdateWorkflowDagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkflowDagResponse
 */
UpdateWorkflowDagResponse Client::updateWorkflowDagWithOptions(const UpdateWorkflowDagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasDagJson()) {
    body["DagJson"] = request.dagJson();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceSource()) {
    body["NamespaceSource"] = request.namespaceSource();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.workflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkflowDag"},
    {"version" , "2019-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkflowDagResponse>();
}

/**
 * @summary Modifies the nodes and dependencies of a workflow. You can call this operation only in the professional edition.
 *
 * @param request UpdateWorkflowDagRequest
 * @return UpdateWorkflowDagResponse
 */
UpdateWorkflowDagResponse Client::updateWorkflowDag(const UpdateWorkflowDagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWorkflowDagWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Schedulerx220190430