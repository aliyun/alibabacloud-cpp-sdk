#include <darabonba/Core.hpp>
#include <alibabacloud/Cms20190101.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Cms20190101::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Cms20190101
{

AlibabaCloud::Cms20190101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "metrics.us-west-1.aliyuncs.com"},
    {"us-southeast-1" , "metrics.us-southeast-1.aliyuncs.com"},
    {"us-east-1" , "metrics.us-east-1.aliyuncs.com"},
    {"na-south-1" , "metrics.na-south-1.aliyuncs.com"},
    {"me-east-1" , "metrics.me-east-1.aliyuncs.com"},
    {"me-central-1" , "metrics.me-central-1.aliyuncs.com"},
    {"eu-west-2" , "metrics.eu-west-2.aliyuncs.com"},
    {"eu-west-1" , "metrics.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "metrics.eu-central-1.aliyuncs.com"},
    {"cn-zhongwei" , "metrics.cn-zhongwei.aliyuncs.com"},
    {"cn-zhengzhou-jva" , "metrics.cn-zhengzhou-jva.aliyuncs.com"},
    {"cn-zhangjiakou" , "metrics.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu-gic-1" , "metrics.cn-wulanchabu-gic-1.aliyuncs.com"},
    {"cn-wulanchabu" , "metrics.cn-wulanchabu.aliyuncs.com"},
    {"cn-wuhan-lr" , "metrics.cn-wuhan-lr.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "metrics.cn-shenzhen-finance-1.aliyuncs.com"},
    {"cn-shenzhen" , "metrics.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "metrics.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai" , "metrics.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "metrics.cn-qingdao.aliyuncs.com"},
    {"cn-north-2-gov-1" , "metrics.cn-north-2-gov-1.aliyuncs.com"},
    {"cn-nanjing" , "metrics.cn-nanjing.aliyuncs.com"},
    {"cn-huhehaote" , "metrics.cn-huhehaote.aliyuncs.com"},
    {"cn-hongkong" , "metrics.cn-hongkong.aliyuncs.com"},
    {"cn-heyuan-acdr-1" , "metrics.cn-heyuan-acdr-1.aliyuncs.com"},
    {"cn-heyuan" , "metrics.cn-heyuan.aliyuncs.com"},
    {"cn-hangzhou-finance" , "metrics.cn-hangzhou-finance.aliyuncs.com"},
    {"cn-hangzhou" , "metrics.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "metrics.cn-guangzhou.aliyuncs.com"},
    {"cn-fuzhou" , "metrics.cn-fuzhou.aliyuncs.com"},
    {"cn-chengdu" , "metrics.cn-chengdu.aliyuncs.com"},
    {"cn-beijing-finance-1" , "metrics.cn-beijing-finance-1.aliyuncs.com"},
    {"cn-beijing" , "metrics.cn-beijing.aliyuncs.com"},
    {"ap-southeast-8" , "metrics.ap-southeast-8.aliyuncs.com"},
    {"ap-southeast-7" , "metrics.ap-southeast-7.aliyuncs.com"},
    {"ap-southeast-6" , "metrics.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-5" , "metrics.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "metrics.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-2" , "metrics.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-1" , "metrics.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "metrics.ap-south-1.aliyuncs.com"},
    {"ap-northeast-2" , "metrics.ap-northeast-2.aliyuncs.com"},
    {"ap-northeast-1" , "metrics.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("cms", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary The AddTags operation attaches tags to specified application groups.
 *
 * @description This topic provides an example of how to attach a tag to the application group `7301****`. In this example, the tag key is `key1` and the tag value is `value1`.
 *
 * @param request AddTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTagsResponse
 */
AddTagsResponse Client::addTagsWithOptions(const AddTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.getGroupIds();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddTags"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTagsResponse>();
}

/**
 * @summary The AddTags operation attaches tags to specified application groups.
 *
 * @description This topic provides an example of how to attach a tag to the application group `7301****`. In this example, the tag key is `key1` and the tag value is `value1`.
 *
 * @param request AddTagsRequest
 * @return AddTagsResponse
 */
AddTagsResponse Client::addTags(const AddTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTagsWithOptions(request, runtime);
}

/**
 * @summary Applies an alert template to an application group to generate an alert rule.
 *
 * @description In this example, the `700****` alert template is applied to the `123456` application group. For the generated alert rule, the ID is `applyTemplate8ab74c6b-9f27-47ab-8841-de01dc08****`, and the name is `test123`.
 *
 * @param request ApplyMetricRuleTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyMetricRuleTemplateResponse
 */
ApplyMetricRuleTemplateResponse Client::applyMetricRuleTemplateWithOptions(const ApplyMetricRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppendMode()) {
    query["AppendMode"] = request.getAppendMode();
  }

  if (!!request.hasApplyMode()) {
    query["ApplyMode"] = request.getApplyMode();
  }

  if (!!request.hasEnableEndTime()) {
    query["EnableEndTime"] = request.getEnableEndTime();
  }

  if (!!request.hasEnableStartTime()) {
    query["EnableStartTime"] = request.getEnableStartTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasNotifyLevel()) {
    query["NotifyLevel"] = request.getNotifyLevel();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.getSilenceTime();
  }

  if (!!request.hasTemplateIds()) {
    query["TemplateIds"] = request.getTemplateIds();
  }

  if (!!request.hasWebhook()) {
    query["Webhook"] = request.getWebhook();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyMetricRuleTemplate"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyMetricRuleTemplateResponse>();
}

/**
 * @summary Applies an alert template to an application group to generate an alert rule.
 *
 * @description In this example, the `700****` alert template is applied to the `123456` application group. For the generated alert rule, the ID is `applyTemplate8ab74c6b-9f27-47ab-8841-de01dc08****`, and the name is `test123`.
 *
 * @param request ApplyMetricRuleTemplateRequest
 * @return ApplyMetricRuleTemplateResponse
 */
ApplyMetricRuleTemplateResponse Client::applyMetricRuleTemplate(const ApplyMetricRuleTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyMetricRuleTemplateWithOptions(request, runtime);
}

/**
 * @summary You can call the BatchCreateInstantSiteMonitor operation to create a batch of site monitoring tasks.
 *
 * @description This topic provides an example of how to create a site monitoring task named `HangZhou_ECS1`. The task uses the `HTTP` protocol to monitor `https://www.aliyun.com`. The response shows that the task is successfully created with the name `HangZhou_ECS1` and the ID `679fbe4f-b80b-4706-91b2-5427b43e****`.
 *
 * @param request BatchCreateInstantSiteMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateInstantSiteMonitorResponse
 */
BatchCreateInstantSiteMonitorResponse Client::batchCreateInstantSiteMonitorWithOptions(const BatchCreateInstantSiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskList()) {
    query["TaskList"] = request.getTaskList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchCreateInstantSiteMonitor"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateInstantSiteMonitorResponse>();
}

/**
 * @summary You can call the BatchCreateInstantSiteMonitor operation to create a batch of site monitoring tasks.
 *
 * @description This topic provides an example of how to create a site monitoring task named `HangZhou_ECS1`. The task uses the `HTTP` protocol to monitor `https://www.aliyun.com`. The response shows that the task is successfully created with the name `HangZhou_ECS1` and the ID `679fbe4f-b80b-4706-91b2-5427b43e****`.
 *
 * @param request BatchCreateInstantSiteMonitorRequest
 * @return BatchCreateInstantSiteMonitorResponse
 */
BatchCreateInstantSiteMonitorResponse Client::batchCreateInstantSiteMonitor(const BatchCreateInstantSiteMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateInstantSiteMonitorWithOptions(request, runtime);
}

/**
 * @summary Calls the BatchExport operation to export monitoring data defined in the Cursor operation.
 *
 * @description ### Prerequisites
 * Make sure that you have called the [Cursor](https://help.aliyun.com/document_detail/2330730.html) operation to obtain the initial `Cursor`.
 * ### Usage notes
 * This topic provides an example to show how to export the monitoring data of an initial `Cursor` of the metric `cpu_idle` of the cloud service `acs_ecs_dashboard`. A maximum of 1,000 data entries are returned per call.
 *
 * @param tmpReq BatchExportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchExportResponse
 */
BatchExportResponse Client::batchExportWithOptions(const BatchExportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchExportShrinkRequest request = BatchExportShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMeasurements()) {
    request.setMeasurementsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMeasurements(), "Measurements", "json"));
  }

  json body = {};
  if (!!request.hasCursor()) {
    body["Cursor"] = request.getCursor();
  }

  if (!!request.hasLength()) {
    body["Length"] = request.getLength();
  }

  if (!!request.hasMeasurementsShrink()) {
    body["Measurements"] = request.getMeasurementsShrink();
  }

  if (!!request.hasMetric()) {
    body["Metric"] = request.getMetric();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BatchExport"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchExportResponse>();
}

/**
 * @summary Calls the BatchExport operation to export monitoring data defined in the Cursor operation.
 *
 * @description ### Prerequisites
 * Make sure that you have called the [Cursor](https://help.aliyun.com/document_detail/2330730.html) operation to obtain the initial `Cursor`.
 * ### Usage notes
 * This topic provides an example to show how to export the monitoring data of an initial `Cursor` of the metric `cpu_idle` of the cloud service `acs_ecs_dashboard`. A maximum of 1,000 data entries are returned per call.
 *
 * @param request BatchExportRequest
 * @return BatchExportResponse
 */
BatchExportResponse Client::batchExport(const BatchExportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchExportWithOptions(request, runtime);
}

/**
 * @summary You can call the CreateDynamicTagGroup operation to automatically create application groups using tags.
 *
 * @description This operation supports the following Alibaba Cloud services: Elastic Compute Service (ECS), ApsaraDB RDS, and Server Load Balancer (SLB).
 * This topic provides an example of how to automatically create an application group for resources that have the `ecs_instance` tag key. The alert contact group for the application group is `ECS_Group`.
 *
 * @param request CreateDynamicTagGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDynamicTagGroupResponse
 */
CreateDynamicTagGroupResponse Client::createDynamicTagGroupWithOptions(const CreateDynamicTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupList()) {
    query["ContactGroupList"] = request.getContactGroupList();
  }

  if (!!request.hasEnableInstallAgent()) {
    query["EnableInstallAgent"] = request.getEnableInstallAgent();
  }

  if (!!request.hasEnableSubscribeEvent()) {
    query["EnableSubscribeEvent"] = request.getEnableSubscribeEvent();
  }

  if (!!request.hasMatchExpress()) {
    query["MatchExpress"] = request.getMatchExpress();
  }

  if (!!request.hasMatchExpressFilterRelation()) {
    query["MatchExpressFilterRelation"] = request.getMatchExpressFilterRelation();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  if (!!request.hasTagRegionId()) {
    query["TagRegionId"] = request.getTagRegionId();
  }

  if (!!request.hasTemplateIdList()) {
    query["TemplateIdList"] = request.getTemplateIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDynamicTagGroup"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDynamicTagGroupResponse>();
}

/**
 * @summary You can call the CreateDynamicTagGroup operation to automatically create application groups using tags.
 *
 * @description This operation supports the following Alibaba Cloud services: Elastic Compute Service (ECS), ApsaraDB RDS, and Server Load Balancer (SLB).
 * This topic provides an example of how to automatically create an application group for resources that have the `ecs_instance` tag key. The alert contact group for the application group is `ECS_Group`.
 *
 * @param request CreateDynamicTagGroupRequest
 * @return CreateDynamicTagGroupResponse
 */
CreateDynamicTagGroupResponse Client::createDynamicTagGroup(const CreateDynamicTagGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDynamicTagGroupWithOptions(request, runtime);
}

/**
 * @summary Creates alert rules in batches for a specified application group by calling the CreateGroupMetricRules operation.
 *
 * @description This topic provides an example on how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the application group `123456`. The alert rule ID is `456789`, the alert rule name is `ECS_Rule1`, the alert severity is `Critical`, the statistical method is `Average`, the comparison operator is `GreaterThanOrEqualToThreshold`, the threshold is `90`, and the retry count is `3`. The response shows that the alert rule `ECS_Rule1` is created.
 *
 * @param request CreateGroupMetricRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupMetricRulesResponse
 */
CreateGroupMetricRulesResponse Client::createGroupMetricRulesWithOptions(const CreateGroupMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupMetricRules()) {
    query["GroupMetricRules"] = request.getGroupMetricRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGroupMetricRules"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupMetricRulesResponse>();
}

/**
 * @summary Creates alert rules in batches for a specified application group by calling the CreateGroupMetricRules operation.
 *
 * @description This topic provides an example on how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the application group `123456`. The alert rule ID is `456789`, the alert rule name is `ECS_Rule1`, the alert severity is `Critical`, the statistical method is `Average`, the comparison operator is `GreaterThanOrEqualToThreshold`, the threshold is `90`, and the retry count is `3`. The response shows that the alert rule `ECS_Rule1` is created.
 *
 * @param request CreateGroupMetricRulesRequest
 * @return CreateGroupMetricRulesResponse
 */
CreateGroupMetricRulesResponse Client::createGroupMetricRules(const CreateGroupMetricRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGroupMetricRulesWithOptions(request, runtime);
}

/**
 * @summary Creates a process monitoring task for an application group.
 *
 * @param request CreateGroupMonitoringAgentProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupMonitoringAgentProcessResponse
 */
CreateGroupMonitoringAgentProcessResponse Client::createGroupMonitoringAgentProcessWithOptions(const CreateGroupMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertConfig()) {
    query["AlertConfig"] = request.getAlertConfig();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMatchExpress()) {
    query["MatchExpress"] = request.getMatchExpress();
  }

  if (!!request.hasMatchExpressFilterRelation()) {
    query["MatchExpressFilterRelation"] = request.getMatchExpressFilterRelation();
  }

  if (!!request.hasProcessName()) {
    query["ProcessName"] = request.getProcessName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGroupMonitoringAgentProcess"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupMonitoringAgentProcessResponse>();
}

/**
 * @summary Creates a process monitoring task for an application group.
 *
 * @param request CreateGroupMonitoringAgentProcessRequest
 * @return CreateGroupMonitoringAgentProcessResponse
 */
CreateGroupMonitoringAgentProcessResponse Client::createGroupMonitoringAgentProcess(const CreateGroupMonitoringAgentProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGroupMonitoringAgentProcessWithOptions(request, runtime);
}

/**
 * @summary Creates an availability monitoring task by calling the CreateHostAvailability operation.
 *
 * @description This topic provides an example of how to create an availability monitoring task named `task1` with the detection type set to `HTTP` in application group `123456`. Alert notifications are sent by email and DingTalk chatbot.
 *
 * @param request CreateHostAvailabilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHostAvailabilityResponse
 */
CreateHostAvailabilityResponse Client::createHostAvailabilityWithOptions(const CreateHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertConfigEscalationList()) {
    query["AlertConfigEscalationList"] = request.getAlertConfigEscalationList();
  }

  if (!!request.hasAlertConfigTargetList()) {
    query["AlertConfigTargetList"] = request.getAlertConfigTargetList();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceList()) {
    query["InstanceList"] = request.getInstanceList();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskScope()) {
    query["TaskScope"] = request.getTaskScope();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  if (!!request.hasAlertConfig()) {
    query["AlertConfig"] = request.getAlertConfig();
  }

  if (!!request.hasTaskOption()) {
    query["TaskOption"] = request.getTaskOption();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHostAvailability"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHostAvailabilityResponse>();
}

/**
 * @summary Creates an availability monitoring task by calling the CreateHostAvailability operation.
 *
 * @description This topic provides an example of how to create an availability monitoring task named `task1` with the detection type set to `HTTP` in application group `123456`. Alert notifications are sent by email and DingTalk chatbot.
 *
 * @param request CreateHostAvailabilityRequest
 * @return CreateHostAvailabilityResponse
 */
CreateHostAvailabilityResponse Client::createHostAvailability(const CreateHostAvailabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHostAvailabilityWithOptions(request, runtime);
}

/**
 * @summary Calls the CreateHybridMonitorNamespace operation to create a metric repository.
 *
 * @description ## Before you begin
 * Make sure that you have activated Hybrid Cloud Monitoring. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
 * ## Operation description
 * This topic provides an example on how to create a metric repository named `aliyun` with a data storage duration of `cms.s1.3xlarge`. The response indicates that the metric repository is created.
 *
 * @param request CreateHybridMonitorNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHybridMonitorNamespaceResponse
 */
CreateHybridMonitorNamespaceResponse Client::createHybridMonitorNamespaceWithOptions(const CreateHybridMonitorNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasNamespaceRegion()) {
    query["NamespaceRegion"] = request.getNamespaceRegion();
  }

  if (!!request.hasNamespaceType()) {
    query["NamespaceType"] = request.getNamespaceType();
  }

  if (!!request.hasSpec()) {
    query["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHybridMonitorNamespace"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHybridMonitorNamespaceResponse>();
}

/**
 * @summary Calls the CreateHybridMonitorNamespace operation to create a metric repository.
 *
 * @description ## Before you begin
 * Make sure that you have activated Hybrid Cloud Monitoring. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
 * ## Operation description
 * This topic provides an example on how to create a metric repository named `aliyun` with a data storage duration of `cms.s1.3xlarge`. The response indicates that the metric repository is created.
 *
 * @param request CreateHybridMonitorNamespaceRequest
 * @return CreateHybridMonitorNamespaceResponse
 */
CreateHybridMonitorNamespaceResponse Client::createHybridMonitorNamespace(const CreateHybridMonitorNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHybridMonitorNamespaceWithOptions(request, runtime);
}

/**
 * @summary Creates a Logstore group for Hybrid Cloud Monitoring.
 *
 * @description ### Before you begin
 * Make sure that you have activated Simple Log Service (SLS) and created a project and a Logstore. For more information, see [Quick Start](https://help.aliyun.com/document_detail/54604.html).
 * ### Operation description
 * This topic provides an example on how to create a Logstore group named `Logstore_test`. The region is `ap-southeast-1`, the project is `aliyun-project`, and the Logstore is `Logstore-ECS`. The response shows that the Logstore group is created.
 *
 * @param request CreateHybridMonitorSLSGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHybridMonitorSLSGroupResponse
 */
CreateHybridMonitorSLSGroupResponse Client::createHybridMonitorSLSGroupWithOptions(const CreateHybridMonitorSLSGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSLSGroupConfig()) {
    query["SLSGroupConfig"] = request.getSLSGroupConfig();
  }

  if (!!request.hasSLSGroupDescription()) {
    query["SLSGroupDescription"] = request.getSLSGroupDescription();
  }

  if (!!request.hasSLSGroupName()) {
    query["SLSGroupName"] = request.getSLSGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHybridMonitorSLSGroup"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHybridMonitorSLSGroupResponse>();
}

/**
 * @summary Creates a Logstore group for Hybrid Cloud Monitoring.
 *
 * @description ### Before you begin
 * Make sure that you have activated Simple Log Service (SLS) and created a project and a Logstore. For more information, see [Quick Start](https://help.aliyun.com/document_detail/54604.html).
 * ### Operation description
 * This topic provides an example on how to create a Logstore group named `Logstore_test`. The region is `ap-southeast-1`, the project is `aliyun-project`, and the Logstore is `Logstore-ECS`. The response shows that the Logstore group is created.
 *
 * @param request CreateHybridMonitorSLSGroupRequest
 * @return CreateHybridMonitorSLSGroupResponse
 */
CreateHybridMonitorSLSGroupResponse Client::createHybridMonitorSLSGroup(const CreateHybridMonitorSLSGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHybridMonitorSLSGroupWithOptions(request, runtime);
}

/**
 * @summary Calls the CreateHybridMonitorTask operation to create a data import task for an Alibaba Cloud service or a metric for Simple Log Service (SLS) logs.
 *
 * @description ## Before you begin
 * - Make sure that you have activated Hybrid Cloud Monitoring. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
 * - If you want to create a metric for SLS logs, make sure that you have activated SLS and created a project and a Logstore. For more information, see [Quick Start](https://help.aliyun.com/document_detail/54604.html).
 * ## Operation description
 * This topic provides an example of how to create a data import task named `aliyun_task` for an Alibaba Cloud service to import the `cpu_total` metric of Elastic Compute Service (ECS) into the `aliyun` metric repository. The response shows that the data import task is created.
 *
 * @param request CreateHybridMonitorTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHybridMonitorTaskResponse
 */
CreateHybridMonitorTaskResponse Client::createHybridMonitorTaskWithOptions(const CreateHybridMonitorTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttachLabels()) {
    query["AttachLabels"] = request.getAttachLabels();
  }

  if (!!request.hasCloudAccessId()) {
    query["CloudAccessId"] = request.getCloudAccessId();
  }

  if (!!request.hasCollectInterval()) {
    query["CollectInterval"] = request.getCollectInterval();
  }

  if (!!request.hasCollectTargetType()) {
    query["CollectTargetType"] = request.getCollectTargetType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasSLSProcessConfig()) {
    query["SLSProcessConfig"] = request.getSLSProcessConfig();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.getTargetUserId();
  }

  if (!!request.hasTargetUserIdList()) {
    query["TargetUserIdList"] = request.getTargetUserIdList();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  if (!!request.hasYARMConfig()) {
    query["YARMConfig"] = request.getYARMConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHybridMonitorTask"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHybridMonitorTaskResponse>();
}

/**
 * @summary Calls the CreateHybridMonitorTask operation to create a data import task for an Alibaba Cloud service or a metric for Simple Log Service (SLS) logs.
 *
 * @description ## Before you begin
 * - Make sure that you have activated Hybrid Cloud Monitoring. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
 * - If you want to create a metric for SLS logs, make sure that you have activated SLS and created a project and a Logstore. For more information, see [Quick Start](https://help.aliyun.com/document_detail/54604.html).
 * ## Operation description
 * This topic provides an example of how to create a data import task named `aliyun_task` for an Alibaba Cloud service to import the `cpu_total` metric of Elastic Compute Service (ECS) into the `aliyun` metric repository. The response shows that the data import task is created.
 *
 * @param request CreateHybridMonitorTaskRequest
 * @return CreateHybridMonitorTaskResponse
 */
CreateHybridMonitorTaskResponse Client::createHybridMonitorTask(const CreateHybridMonitorTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHybridMonitorTaskWithOptions(request, runtime);
}

/**
 * @summary Call the CreateInstantSiteMonitor operation to create a one-time detection task.
 *
 * @description Only Alibaba Cloud accounts that have Network Analysis and Monitoring activated can create one-time detection tasks.
 * This topic provides an example of how to create a one-time detection task. The example creates a task named `task1` that detects the address `http://www.aliyun.com`. The detection type is `HTTP`, and the number of detection points is `1`.
 *
 * @param request CreateInstantSiteMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstantSiteMonitorResponse
 */
CreateInstantSiteMonitorResponse Client::createInstantSiteMonitorWithOptions(const CreateInstantSiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasAgentGroup()) {
    query["AgentGroup"] = request.getAgentGroup();
  }

  if (!!request.hasIspCities()) {
    query["IspCities"] = request.getIspCities();
  }

  if (!!request.hasOptionsJson()) {
    query["OptionsJson"] = request.getOptionsJson();
  }

  if (!!request.hasRandomIspCity()) {
    query["RandomIspCity"] = request.getRandomIspCity();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstantSiteMonitor"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstantSiteMonitorResponse>();
}

/**
 * @summary Call the CreateInstantSiteMonitor operation to create a one-time detection task.
 *
 * @description Only Alibaba Cloud accounts that have Network Analysis and Monitoring activated can create one-time detection tasks.
 * This topic provides an example of how to create a one-time detection task. The example creates a task named `task1` that detects the address `http://www.aliyun.com`. The detection type is `HTTP`, and the number of detection points is `1`.
 *
 * @param request CreateInstantSiteMonitorRequest
 * @return CreateInstantSiteMonitorResponse
 */
CreateInstantSiteMonitorResponse Client::createInstantSiteMonitor(const CreateInstantSiteMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstantSiteMonitorWithOptions(request, runtime);
}

/**
 * @summary Creates a blacklist policy.
 *
 * @description ### Background information
 * - CloudMonitor blocks alert notifications based on the blacklist policies that take effect. To block alert notifications when the value of a metric that belongs to a cloud service reaches the threshold that you specified, add the metric to a blacklist policy.
 * - CloudMonitor allows you to create blacklist policies only based on threshold metrics. You cannot create blacklist policies based on system events. For more information about the cloud services and the thresholds of the metrics that are supported by CloudMonitor, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
 *
 * @param request CreateMetricRuleBlackListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMetricRuleBlackListResponse
 */
CreateMetricRuleBlackListResponse Client::createMetricRuleBlackListWithOptions(const CreateMetricRuleBlackListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasEnableEndTime()) {
    query["EnableEndTime"] = request.getEnableEndTime();
  }

  if (!!request.hasEnableStartTime()) {
    query["EnableStartTime"] = request.getEnableStartTime();
  }

  if (!!request.hasInstances()) {
    query["Instances"] = request.getInstances();
  }

  if (!!request.hasMetrics()) {
    query["Metrics"] = request.getMetrics();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.getScopeType();
  }

  if (!!request.hasScopeValue()) {
    query["ScopeValue"] = request.getScopeValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMetricRuleBlackList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMetricRuleBlackListResponse>();
}

/**
 * @summary Creates a blacklist policy.
 *
 * @description ### Background information
 * - CloudMonitor blocks alert notifications based on the blacklist policies that take effect. To block alert notifications when the value of a metric that belongs to a cloud service reaches the threshold that you specified, add the metric to a blacklist policy.
 * - CloudMonitor allows you to create blacklist policies only based on threshold metrics. You cannot create blacklist policies based on system events. For more information about the cloud services and the thresholds of the metrics that are supported by CloudMonitor, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
 *
 * @param request CreateMetricRuleBlackListRequest
 * @return CreateMetricRuleBlackListResponse
 */
CreateMetricRuleBlackListResponse Client::createMetricRuleBlackList(const CreateMetricRuleBlackListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMetricRuleBlackListWithOptions(request, runtime);
}

/**
 * @summary Calls the CreateMetricRuleResources operation to create a resource associated with an alert rule.
 *
 * @param request CreateMetricRuleResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMetricRuleResourcesResponse
 */
CreateMetricRuleResourcesResponse Client::createMetricRuleResourcesWithOptions(const CreateMetricRuleResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOverwrite()) {
    query["Overwrite"] = request.getOverwrite();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.getResources();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMetricRuleResources"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMetricRuleResourcesResponse>();
}

/**
 * @summary Calls the CreateMetricRuleResources operation to create a resource associated with an alert rule.
 *
 * @param request CreateMetricRuleResourcesRequest
 * @return CreateMetricRuleResourcesResponse
 */
CreateMetricRuleResourcesResponse Client::createMetricRuleResources(const CreateMetricRuleResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMetricRuleResourcesWithOptions(request, runtime);
}

/**
 * @summary Creates an alert template.
 *
 * @param request CreateMetricRuleTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMetricRuleTemplateResponse
 */
CreateMetricRuleTemplateResponse Client::createMetricRuleTemplateWithOptions(const CreateMetricRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertTemplates()) {
    query["AlertTemplates"] = request.getAlertTemplates();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMetricRuleTemplate"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMetricRuleTemplateResponse>();
}

/**
 * @summary Creates an alert template.
 *
 * @param request CreateMetricRuleTemplateRequest
 * @return CreateMetricRuleTemplateResponse
 */
CreateMetricRuleTemplateResponse Client::createMetricRuleTemplate(const CreateMetricRuleTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMetricRuleTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a task to monitor a process.
 *
 * @param request CreateMonitorAgentProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorAgentProcessResponse
 */
CreateMonitorAgentProcessResponse Client::createMonitorAgentProcessWithOptions(const CreateMonitorAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProcessName()) {
    query["ProcessName"] = request.getProcessName();
  }

  if (!!request.hasProcessUser()) {
    query["ProcessUser"] = request.getProcessUser();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMonitorAgentProcess"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorAgentProcessResponse>();
}

/**
 * @summary Creates a task to monitor a process.
 *
 * @param request CreateMonitorAgentProcessRequest
 * @return CreateMonitorAgentProcessResponse
 */
CreateMonitorAgentProcessResponse Client::createMonitorAgentProcess(const CreateMonitorAgentProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMonitorAgentProcessWithOptions(request, runtime);
}

/**
 * @summary Creates an application group.
 *
 * @description In this example, an application group named `ECS_Group` is created.
 *
 * @param request CreateMonitorGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorGroupResponse
 */
CreateMonitorGroupResponse Client::createMonitorGroupWithOptions(const CreateMonitorGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroups()) {
    query["ContactGroups"] = request.getContactGroups();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMonitorGroup"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorGroupResponse>();
}

/**
 * @summary Creates an application group.
 *
 * @description In this example, an application group named `ECS_Group` is created.
 *
 * @param request CreateMonitorGroupRequest
 * @return CreateMonitorGroupResponse
 */
CreateMonitorGroupResponse Client::createMonitorGroup(const CreateMonitorGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMonitorGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an application group by using a resource group.
 *
 * @description This topic provides an example on how to create an application group by using the resource group `CloudMonitor` and the alert contact group `ECS_Group`. The region ID of the resource group is `cn-hangzhou`.
 *
 * @param request CreateMonitorGroupByResourceGroupIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorGroupByResourceGroupIdResponse
 */
CreateMonitorGroupByResourceGroupIdResponse Client::createMonitorGroupByResourceGroupIdWithOptions(const CreateMonitorGroupByResourceGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupList()) {
    query["ContactGroupList"] = request.getContactGroupList();
  }

  if (!!request.hasEnableInstallAgent()) {
    query["EnableInstallAgent"] = request.getEnableInstallAgent();
  }

  if (!!request.hasEnableSubscribeEvent()) {
    query["EnableSubscribeEvent"] = request.getEnableSubscribeEvent();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.getResourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMonitorGroupByResourceGroupId"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorGroupByResourceGroupIdResponse>();
}

/**
 * @summary Creates an application group by using a resource group.
 *
 * @description This topic provides an example on how to create an application group by using the resource group `CloudMonitor` and the alert contact group `ECS_Group`. The region ID of the resource group is `cn-hangzhou`.
 *
 * @param request CreateMonitorGroupByResourceGroupIdRequest
 * @return CreateMonitorGroupByResourceGroupIdResponse
 */
CreateMonitorGroupByResourceGroupIdResponse Client::createMonitorGroupByResourceGroupId(const CreateMonitorGroupByResourceGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMonitorGroupByResourceGroupIdWithOptions(request, runtime);
}

/**
 * @summary Adds resources to an application group.
 *
 * @description You can add a maximum of 1,000 instances to an application group at a time. You can add a maximum of 3,000 instances of an Alibaba Cloud service to an application group. The total number of instances that you can add to an application group is unlimited.
 * In this example, an Elastic Compute Service (ECS) instance in the `China (Hangzhou)` region is added to the `3607****` application group. The instance ID is `i-2ze26xj5wwy12****` and the instance name is `test-instance-ecs`.
 *
 * @param request CreateMonitorGroupInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorGroupInstancesResponse
 */
CreateMonitorGroupInstancesResponse Client::createMonitorGroupInstancesWithOptions(const CreateMonitorGroupInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstances()) {
    query["Instances"] = request.getInstances();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMonitorGroupInstances"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorGroupInstancesResponse>();
}

/**
 * @summary Adds resources to an application group.
 *
 * @description You can add a maximum of 1,000 instances to an application group at a time. You can add a maximum of 3,000 instances of an Alibaba Cloud service to an application group. The total number of instances that you can add to an application group is unlimited.
 * In this example, an Elastic Compute Service (ECS) instance in the `China (Hangzhou)` region is added to the `3607****` application group. The instance ID is `i-2ze26xj5wwy12****` and the instance name is `test-instance-ecs`.
 *
 * @param request CreateMonitorGroupInstancesRequest
 * @return CreateMonitorGroupInstancesResponse
 */
CreateMonitorGroupInstancesResponse Client::createMonitorGroupInstances(const CreateMonitorGroupInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMonitorGroupInstancesWithOptions(request, runtime);
}

/**
 * @summary Calls the CreateMonitorGroupNotifyPolicy operation to create a pause alert notification policy for an application group.
 *
 * @description During the effective period of the policy, no alert notifications are sent for any alerts triggered within the application group.
 *  
 * This topic provides an example on how to create a pause alert notification policy named `PauseNotify` for the application group `7301****`. The application group pauses alert notifications during the period from `1622949300000` to `1623208500000` (UTC+8 `2021-06-06 11:15:00` to `2021-06-09 11:15:00`).
 *
 * @param request CreateMonitorGroupNotifyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorGroupNotifyPolicyResponse
 */
CreateMonitorGroupNotifyPolicyResponse Client::createMonitorGroupNotifyPolicyWithOptions(const CreateMonitorGroupNotifyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMonitorGroupNotifyPolicy"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorGroupNotifyPolicyResponse>();
}

/**
 * @summary Calls the CreateMonitorGroupNotifyPolicy operation to create a pause alert notification policy for an application group.
 *
 * @description During the effective period of the policy, no alert notifications are sent for any alerts triggered within the application group.
 *  
 * This topic provides an example on how to create a pause alert notification policy named `PauseNotify` for the application group `7301****`. The application group pauses alert notifications during the period from `1622949300000` to `1623208500000` (UTC+8 `2021-06-06 11:15:00` to `2021-06-09 11:15:00`).
 *
 * @param request CreateMonitorGroupNotifyPolicyRequest
 * @return CreateMonitorGroupNotifyPolicyResponse
 */
CreateMonitorGroupNotifyPolicyResponse Client::createMonitorGroupNotifyPolicy(const CreateMonitorGroupNotifyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMonitorGroupNotifyPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a task to monitor a process.
 *
 * @param request CreateMonitoringAgentProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitoringAgentProcessResponse
 */
CreateMonitoringAgentProcessResponse Client::createMonitoringAgentProcessWithOptions(const CreateMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProcessName()) {
    query["ProcessName"] = request.getProcessName();
  }

  if (!!request.hasProcessUser()) {
    query["ProcessUser"] = request.getProcessUser();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMonitoringAgentProcess"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitoringAgentProcessResponse>();
}

/**
 * @summary Creates a task to monitor a process.
 *
 * @param request CreateMonitoringAgentProcessRequest
 * @return CreateMonitoringAgentProcessResponse
 */
CreateMonitoringAgentProcessResponse Client::createMonitoringAgentProcess(const CreateMonitoringAgentProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMonitoringAgentProcessWithOptions(request, runtime);
}

/**
 * @summary Creates a site monitoring task.
 *
 * @description This topic describes how to create a site monitoring task. The example creates a task named `HanZhou_ECS1` to monitor the URL `https://www.aliyun.com` over `HTTPS`.
 *
 * @param request CreateSiteMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSiteMonitorResponse
 */
CreateSiteMonitorResponse Client::createSiteMonitorWithOptions(const CreateSiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasAgentGroup()) {
    query["AgentGroup"] = request.getAgentGroup();
  }

  if (!!request.hasAlertIds()) {
    query["AlertIds"] = request.getAlertIds();
  }

  if (!!request.hasCustomSchedule()) {
    query["CustomSchedule"] = request.getCustomSchedule();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspCities()) {
    query["IspCities"] = request.getIspCities();
  }

  if (!!request.hasOptionsJson()) {
    query["OptionsJson"] = request.getOptionsJson();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  if (!!request.hasVpcConfig()) {
    query["VpcConfig"] = request.getVpcConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSiteMonitor"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSiteMonitorResponse>();
}

/**
 * @summary Creates a site monitoring task.
 *
 * @description This topic describes how to create a site monitoring task. The example creates a task named `HanZhou_ECS1` to monitor the URL `https://www.aliyun.com` over `HTTPS`.
 *
 * @param request CreateSiteMonitorRequest
 * @return CreateSiteMonitorResponse
 */
CreateSiteMonitorResponse Client::createSiteMonitor(const CreateSiteMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSiteMonitorWithOptions(request, runtime);
}

/**
 * @summary Calls the Cursor operation to define the scope of monitoring data to be exported, and returns the Cursor value used for the initial call to the BatchExport operation.
 *
 * @description ### Prerequisites
 * Make sure that Enterprise CloudMonitor is activated. For more information, see [Activate Enterprise CloudMonitor](https://help.aliyun.com/document_detail/250773.html).
 * ### Background information
 * First, call this operation to obtain the initial Cursor. Then, call the [BatchExport](https://help.aliyun.com/document_detail/2329847.html) operation to export monitoring data.
 * ### Usage notes
 * This topic provides an example to describe how to define the scope to export data of the `cpu_idle` metric of the `acs_ecs_dashboard` cloud service every 60 seconds in the time range from `1641627000000` (2022-01-08 15:30:00) to `1641645000000` (2022-01-08 20:30:00). The returned result shows the `Cursor` information.
 *
 * @param tmpReq CursorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CursorResponse
 */
CursorResponse Client::cursorWithOptions(const CursorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CursorShrinkRequest request = CursorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMatchers()) {
    request.setMatchersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMatchers(), "Matchers", "json"));
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMatchersShrink()) {
    body["Matchers"] = request.getMatchersShrink();
  }

  if (!!request.hasMetric()) {
    body["Metric"] = request.getMetric();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.getPeriod();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Cursor"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CursorResponse>();
}

/**
 * @summary Calls the Cursor operation to define the scope of monitoring data to be exported, and returns the Cursor value used for the initial call to the BatchExport operation.
 *
 * @description ### Prerequisites
 * Make sure that Enterprise CloudMonitor is activated. For more information, see [Activate Enterprise CloudMonitor](https://help.aliyun.com/document_detail/250773.html).
 * ### Background information
 * First, call this operation to obtain the initial Cursor. Then, call the [BatchExport](https://help.aliyun.com/document_detail/2329847.html) operation to export monitoring data.
 * ### Usage notes
 * This topic provides an example to describe how to define the scope to export data of the `cpu_idle` metric of the `acs_ecs_dashboard` cloud service every 60 seconds in the time range from `1641627000000` (2022-01-08 15:30:00) to `1641645000000` (2022-01-08 20:30:00). The returned result shows the `Cursor` information.
 *
 * @param request CursorRequest
 * @return CursorResponse
 */
CursorResponse Client::cursor(const CursorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cursorWithOptions(request, runtime);
}

/**
 * @summary Deletes an alert contact.
 *
 * @param request DeleteContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactResponse
 */
DeleteContactResponse Client::deleteContactWithOptions(const DeleteContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContact"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContactResponse>();
}

/**
 * @summary Deletes an alert contact.
 *
 * @param request DeleteContactRequest
 * @return DeleteContactResponse
 */
DeleteContactResponse Client::deleteContact(const DeleteContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactWithOptions(request, runtime);
}

/**
 * @summary Calls the DeleteContactGroup operation to delete an alert contact group.
 *
 * @param request DeleteContactGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactGroupResponse
 */
DeleteContactGroupResponse Client::deleteContactGroupWithOptions(const DeleteContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupName()) {
    query["ContactGroupName"] = request.getContactGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContactGroup"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContactGroupResponse>();
}

/**
 * @summary Calls the DeleteContactGroup operation to delete an alert contact group.
 *
 * @param request DeleteContactGroupRequest
 * @return DeleteContactGroupResponse
 */
DeleteContactGroupResponse Client::deleteContactGroup(const DeleteContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes the reported monitoring data of a metric.
 *
 * @param request DeleteCustomMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomMetricResponse
 */
DeleteCustomMetricResponse Client::deleteCustomMetricWithOptions(const DeleteCustomMetricRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMd5()) {
    query["Md5"] = request.getMd5();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasUUID()) {
    query["UUID"] = request.getUUID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomMetric"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomMetricResponse>();
}

/**
 * @summary Deletes the reported monitoring data of a metric.
 *
 * @param request DeleteCustomMetricRequest
 * @return DeleteCustomMetricResponse
 */
DeleteCustomMetricResponse Client::deleteCustomMetric(const DeleteCustomMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomMetricWithOptions(request, runtime);
}

/**
 * @summary Deletes a tag rule.
 *
 * @param request DeleteDynamicTagGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDynamicTagGroupResponse
 */
DeleteDynamicTagGroupResponse Client::deleteDynamicTagGroupWithOptions(const DeleteDynamicTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDynamicTagRuleId()) {
    query["DynamicTagRuleId"] = request.getDynamicTagRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDynamicTagGroup"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDynamicTagGroupResponse>();
}

/**
 * @summary Deletes a tag rule.
 *
 * @param request DeleteDynamicTagGroupRequest
 * @return DeleteDynamicTagGroupResponse
 */
DeleteDynamicTagGroupResponse Client::deleteDynamicTagGroup(const DeleteDynamicTagGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDynamicTagGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes the push channels of an event-triggered alert rule.
 *
 * @param request DeleteEventRuleTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventRuleTargetsResponse
 */
DeleteEventRuleTargetsResponse Client::deleteEventRuleTargetsWithOptions(const DeleteEventRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEventRuleTargets"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEventRuleTargetsResponse>();
}

/**
 * @summary Deletes the push channels of an event-triggered alert rule.
 *
 * @param request DeleteEventRuleTargetsRequest
 * @return DeleteEventRuleTargetsResponse
 */
DeleteEventRuleTargetsResponse Client::deleteEventRuleTargets(const DeleteEventRuleTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventRuleTargetsWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more event-triggered alert rules.
 *
 * @param request DeleteEventRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventRulesResponse
 */
DeleteEventRulesResponse Client::deleteEventRulesWithOptions(const DeleteEventRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleNames()) {
    query["RuleNames"] = request.getRuleNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEventRules"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEventRulesResponse>();
}

/**
 * @summary Deletes one or more event-triggered alert rules.
 *
 * @param request DeleteEventRulesRequest
 * @return DeleteEventRulesResponse
 */
DeleteEventRulesResponse Client::deleteEventRules(const DeleteEventRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventRulesWithOptions(request, runtime);
}

/**
 * @summary Calls the DeleteExporterOutput operation to delete a monitoring data export configuration.
 *
 * @param request DeleteExporterOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExporterOutputResponse
 */
DeleteExporterOutputResponse Client::deleteExporterOutputWithOptions(const DeleteExporterOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestName()) {
    query["DestName"] = request.getDestName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExporterOutput"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExporterOutputResponse>();
}

/**
 * @summary Calls the DeleteExporterOutput operation to delete a monitoring data export configuration.
 *
 * @param request DeleteExporterOutputRequest
 * @return DeleteExporterOutputResponse
 */
DeleteExporterOutputResponse Client::deleteExporterOutput(const DeleteExporterOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExporterOutputWithOptions(request, runtime);
}

/**
 * @summary Invokes the DeleteExporterRule operation to delete export rules.
 *
 * @param request DeleteExporterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExporterRuleResponse
 */
DeleteExporterRuleResponse Client::deleteExporterRuleWithOptions(const DeleteExporterRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExporterRule"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExporterRuleResponse>();
}

/**
 * @summary Invokes the DeleteExporterRule operation to delete export rules.
 *
 * @param request DeleteExporterRuleRequest
 * @return DeleteExporterRuleResponse
 */
DeleteExporterRuleResponse Client::deleteExporterRule(const DeleteExporterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExporterRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a group process monitoring task by calling the DeleteGroupMonitoringAgentProcess operation.
 *
 * @param request DeleteGroupMonitoringAgentProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupMonitoringAgentProcessResponse
 */
DeleteGroupMonitoringAgentProcessResponse Client::deleteGroupMonitoringAgentProcessWithOptions(const DeleteGroupMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGroupMonitoringAgentProcess"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGroupMonitoringAgentProcessResponse>();
}

/**
 * @summary Deletes a group process monitoring task by calling the DeleteGroupMonitoringAgentProcess operation.
 *
 * @param request DeleteGroupMonitoringAgentProcessRequest
 * @return DeleteGroupMonitoringAgentProcessResponse
 */
DeleteGroupMonitoringAgentProcessResponse Client::deleteGroupMonitoringAgentProcess(const DeleteGroupMonitoringAgentProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGroupMonitoringAgentProcessWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more availability monitoring jobs.
 *
 * @param request DeleteHostAvailabilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHostAvailabilityResponse
 */
DeleteHostAvailabilityResponse Client::deleteHostAvailabilityWithOptions(const DeleteHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHostAvailability"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHostAvailabilityResponse>();
}

/**
 * @summary Deletes one or more availability monitoring jobs.
 *
 * @param request DeleteHostAvailabilityRequest
 * @return DeleteHostAvailabilityResponse
 */
DeleteHostAvailabilityResponse Client::deleteHostAvailability(const DeleteHostAvailabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHostAvailabilityWithOptions(request, runtime);
}

/**
 * @summary Deletes a namespace.
 *
 * @description > If a metric import task is created for metrics in a namespace, you cannot delete the namespace unless you delete the task first.
 * This topic provides an example on how to delete a namespace named `aliyun`. The response shows that the namespace is deleted.
 *
 * @param request DeleteHybridMonitorNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHybridMonitorNamespaceResponse
 */
DeleteHybridMonitorNamespaceResponse Client::deleteHybridMonitorNamespaceWithOptions(const DeleteHybridMonitorNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHybridMonitorNamespace"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHybridMonitorNamespaceResponse>();
}

/**
 * @summary Deletes a namespace.
 *
 * @description > If a metric import task is created for metrics in a namespace, you cannot delete the namespace unless you delete the task first.
 * This topic provides an example on how to delete a namespace named `aliyun`. The response shows that the namespace is deleted.
 *
 * @param request DeleteHybridMonitorNamespaceRequest
 * @return DeleteHybridMonitorNamespaceResponse
 */
DeleteHybridMonitorNamespaceResponse Client::deleteHybridMonitorNamespace(const DeleteHybridMonitorNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHybridMonitorNamespaceWithOptions(request, runtime);
}

/**
 * @summary Deletes a Logstore group.
 *
 * @description This topic provides an example on how to delete a Logstore group named `Logstore_test`. The response shows that the Logstore group is deleted.
 *
 * @param request DeleteHybridMonitorSLSGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHybridMonitorSLSGroupResponse
 */
DeleteHybridMonitorSLSGroupResponse Client::deleteHybridMonitorSLSGroupWithOptions(const DeleteHybridMonitorSLSGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSLSGroupName()) {
    query["SLSGroupName"] = request.getSLSGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHybridMonitorSLSGroup"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHybridMonitorSLSGroupResponse>();
}

/**
 * @summary Deletes a Logstore group.
 *
 * @description This topic provides an example on how to delete a Logstore group named `Logstore_test`. The response shows that the Logstore group is deleted.
 *
 * @param request DeleteHybridMonitorSLSGroupRequest
 * @return DeleteHybridMonitorSLSGroupResponse
 */
DeleteHybridMonitorSLSGroupResponse Client::deleteHybridMonitorSLSGroup(const DeleteHybridMonitorSLSGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHybridMonitorSLSGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a metric import task for Alibaba Cloud services or a metric for the logs that are imported from Log Service.
 *
 * @description This topic provides an example on how to delete a metric import task whose ID is `36****`. The returned result indicates that the metric import task is deleted.
 *
 * @param request DeleteHybridMonitorTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHybridMonitorTaskResponse
 */
DeleteHybridMonitorTaskResponse Client::deleteHybridMonitorTaskWithOptions(const DeleteHybridMonitorTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.getTargetUserId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHybridMonitorTask"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHybridMonitorTaskResponse>();
}

/**
 * @summary Deletes a metric import task for Alibaba Cloud services or a metric for the logs that are imported from Log Service.
 *
 * @description This topic provides an example on how to delete a metric import task whose ID is `36****`. The returned result indicates that the metric import task is deleted.
 *
 * @param request DeleteHybridMonitorTaskRequest
 * @return DeleteHybridMonitorTaskResponse
 */
DeleteHybridMonitorTaskResponse Client::deleteHybridMonitorTask(const DeleteHybridMonitorTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHybridMonitorTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a log monitoring metric.
 *
 * @param request DeleteLogMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLogMonitorResponse
 */
DeleteLogMonitorResponse Client::deleteLogMonitorWithOptions(const DeleteLogMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogId()) {
    query["LogId"] = request.getLogId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLogMonitor"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLogMonitorResponse>();
}

/**
 * @summary Deletes a log monitoring metric.
 *
 * @param request DeleteLogMonitorRequest
 * @return DeleteLogMonitorResponse
 */
DeleteLogMonitorResponse Client::deleteLogMonitor(const DeleteLogMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLogMonitorWithOptions(request, runtime);
}

/**
 * @summary Calls the DeleteMetricRuleBlackList operation to delete alert blacklist policies.
 *
 * @param request DeleteMetricRuleBlackListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMetricRuleBlackListResponse
 */
DeleteMetricRuleBlackListResponse Client::deleteMetricRuleBlackListWithOptions(const DeleteMetricRuleBlackListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMetricRuleBlackList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMetricRuleBlackListResponse>();
}

/**
 * @summary Calls the DeleteMetricRuleBlackList operation to delete alert blacklist policies.
 *
 * @param request DeleteMetricRuleBlackListRequest
 * @return DeleteMetricRuleBlackListResponse
 */
DeleteMetricRuleBlackListResponse Client::deleteMetricRuleBlackList(const DeleteMetricRuleBlackListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMetricRuleBlackListWithOptions(request, runtime);
}

/**
 * @summary Disassociates resources from an alert rule.
 *
 * @param request DeleteMetricRuleResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMetricRuleResourcesResponse
 */
DeleteMetricRuleResourcesResponse Client::deleteMetricRuleResourcesWithOptions(const DeleteMetricRuleResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResources()) {
    query["Resources"] = request.getResources();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMetricRuleResources"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMetricRuleResourcesResponse>();
}

/**
 * @summary Disassociates resources from an alert rule.
 *
 * @param request DeleteMetricRuleResourcesRequest
 * @return DeleteMetricRuleResourcesResponse
 */
DeleteMetricRuleResourcesResponse Client::deleteMetricRuleResources(const DeleteMetricRuleResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMetricRuleResourcesWithOptions(request, runtime);
}

/**
 * @summary Delete the push channels of an alert rule.
 *
 * @param request DeleteMetricRuleTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMetricRuleTargetsResponse
 */
DeleteMetricRuleTargetsResponse Client::deleteMetricRuleTargetsWithOptions(const DeleteMetricRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasTargetIds()) {
    query["TargetIds"] = request.getTargetIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMetricRuleTargets"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMetricRuleTargetsResponse>();
}

/**
 * @summary Delete the push channels of an alert rule.
 *
 * @param request DeleteMetricRuleTargetsRequest
 * @return DeleteMetricRuleTargetsResponse
 */
DeleteMetricRuleTargetsResponse Client::deleteMetricRuleTargets(const DeleteMetricRuleTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMetricRuleTargetsWithOptions(request, runtime);
}

/**
 * @summary Deletes an alert rule template.
 *
 * @param request DeleteMetricRuleTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMetricRuleTemplateResponse
 */
DeleteMetricRuleTemplateResponse Client::deleteMetricRuleTemplateWithOptions(const DeleteMetricRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMetricRuleTemplate"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMetricRuleTemplateResponse>();
}

/**
 * @summary Deletes an alert rule template.
 *
 * @param request DeleteMetricRuleTemplateRequest
 * @return DeleteMetricRuleTemplateResponse
 */
DeleteMetricRuleTemplateResponse Client::deleteMetricRuleTemplate(const DeleteMetricRuleTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMetricRuleTemplateWithOptions(request, runtime);
}

/**
 * @summary The DeleteMetricRules operation deletes one or more alert rules.
 *
 * @param request DeleteMetricRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMetricRulesResponse
 */
DeleteMetricRulesResponse Client::deleteMetricRulesWithOptions(const DeleteMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMetricRules"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMetricRulesResponse>();
}

/**
 * @summary The DeleteMetricRules operation deletes one or more alert rules.
 *
 * @param request DeleteMetricRulesRequest
 * @return DeleteMetricRulesResponse
 */
DeleteMetricRulesResponse Client::deleteMetricRules(const DeleteMetricRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMetricRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes an application group.
 *
 * @param request DeleteMonitorGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMonitorGroupResponse
 */
DeleteMonitorGroupResponse Client::deleteMonitorGroupWithOptions(const DeleteMonitorGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMonitorGroup"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMonitorGroupResponse>();
}

/**
 * @summary Deletes an application group.
 *
 * @param request DeleteMonitorGroupRequest
 * @return DeleteMonitorGroupResponse
 */
DeleteMonitorGroupResponse Client::deleteMonitorGroup(const DeleteMonitorGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMonitorGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a rule that is used to dynamically add the instances of a service to an application group.
 *
 * @param request DeleteMonitorGroupDynamicRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMonitorGroupDynamicRuleResponse
 */
DeleteMonitorGroupDynamicRuleResponse Client::deleteMonitorGroupDynamicRuleWithOptions(const DeleteMonitorGroupDynamicRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMonitorGroupDynamicRule"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMonitorGroupDynamicRuleResponse>();
}

/**
 * @summary Deletes a rule that is used to dynamically add the instances of a service to an application group.
 *
 * @param request DeleteMonitorGroupDynamicRuleRequest
 * @return DeleteMonitorGroupDynamicRuleResponse
 */
DeleteMonitorGroupDynamicRuleResponse Client::deleteMonitorGroupDynamicRule(const DeleteMonitorGroupDynamicRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMonitorGroupDynamicRuleWithOptions(request, runtime);
}

/**
 * @summary Removes instances from an application group.
 *
 * @param request DeleteMonitorGroupInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMonitorGroupInstancesResponse
 */
DeleteMonitorGroupInstancesResponse Client::deleteMonitorGroupInstancesWithOptions(const DeleteMonitorGroupInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceIdList()) {
    query["InstanceIdList"] = request.getInstanceIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMonitorGroupInstances"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMonitorGroupInstancesResponse>();
}

/**
 * @summary Removes instances from an application group.
 *
 * @param request DeleteMonitorGroupInstancesRequest
 * @return DeleteMonitorGroupInstancesResponse
 */
DeleteMonitorGroupInstancesResponse Client::deleteMonitorGroupInstances(const DeleteMonitorGroupInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMonitorGroupInstancesWithOptions(request, runtime);
}

/**
 * @summary Deletes a policy that is used to pause alert notifications for an application group.
 *
 * @param request DeleteMonitorGroupNotifyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMonitorGroupNotifyPolicyResponse
 */
DeleteMonitorGroupNotifyPolicyResponse Client::deleteMonitorGroupNotifyPolicyWithOptions(const DeleteMonitorGroupNotifyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMonitorGroupNotifyPolicy"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMonitorGroupNotifyPolicyResponse>();
}

/**
 * @summary Deletes a policy that is used to pause alert notifications for an application group.
 *
 * @param request DeleteMonitorGroupNotifyPolicyRequest
 * @return DeleteMonitorGroupNotifyPolicyResponse
 */
DeleteMonitorGroupNotifyPolicyResponse Client::deleteMonitorGroupNotifyPolicy(const DeleteMonitorGroupNotifyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMonitorGroupNotifyPolicyWithOptions(request, runtime);
}

/**
 * @summary Calls the DeleteMonitoringAgentProcess operation to delete the specified process monitoring from a specified host.
 *
 * @param request DeleteMonitoringAgentProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMonitoringAgentProcessResponse
 */
DeleteMonitoringAgentProcessResponse Client::deleteMonitoringAgentProcessWithOptions(const DeleteMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProcessId()) {
    query["ProcessId"] = request.getProcessId();
  }

  if (!!request.hasProcessName()) {
    query["ProcessName"] = request.getProcessName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMonitoringAgentProcess"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMonitoringAgentProcessResponse>();
}

/**
 * @summary Calls the DeleteMonitoringAgentProcess operation to delete the specified process monitoring from a specified host.
 *
 * @param request DeleteMonitoringAgentProcessRequest
 * @return DeleteMonitoringAgentProcessResponse
 */
DeleteMonitoringAgentProcessResponse Client::deleteMonitoringAgentProcess(const DeleteMonitoringAgentProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMonitoringAgentProcessWithOptions(request, runtime);
}

/**
 * @summary Deletes site monitoring tasks by calling the DeleteSiteMonitors operation.
 *
 * @param request DeleteSiteMonitorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSiteMonitorsResponse
 */
DeleteSiteMonitorsResponse Client::deleteSiteMonitorsWithOptions(const DeleteSiteMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsDeleteAlarms()) {
    query["IsDeleteAlarms"] = request.getIsDeleteAlarms();
  }

  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.getTaskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSiteMonitors"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSiteMonitorsResponse>();
}

/**
 * @summary Deletes site monitoring tasks by calling the DeleteSiteMonitors operation.
 *
 * @param request DeleteSiteMonitorsRequest
 * @return DeleteSiteMonitorsResponse
 */
DeleteSiteMonitorsResponse Client::deleteSiteMonitors(const DeleteSiteMonitorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSiteMonitorsWithOptions(request, runtime);
}

/**
 * @summary Queries initiative alert rules.
 *
 * @param request DescribeActiveMetricRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveMetricRuleListResponse
 */
DescribeActiveMetricRuleListResponse Client::describeActiveMetricRuleListWithOptions(const DescribeActiveMetricRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeActiveMetricRuleList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeActiveMetricRuleListResponse>();
}

/**
 * @summary Queries initiative alert rules.
 *
 * @param request DescribeActiveMetricRuleListRequest
 * @return DescribeActiveMetricRuleListResponse
 */
DescribeActiveMetricRuleListResponse Client::describeActiveMetricRuleList(const DescribeActiveMetricRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeActiveMetricRuleListWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeAlertHistoryList is deprecated, please use Cms::2019-01-01::DescribeAlertLogList instead.
 *
 * @summary Queries historical alerts.
 *
 * @description This API operation is no longer maintained. We recommend that you call the [DescribeAlertLogList](https://help.aliyun.com/document_detail/201087.html) operation.
 *
 * @param request DescribeAlertHistoryListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertHistoryListResponse
 */
DescribeAlertHistoryListResponse Client::describeAlertHistoryListWithOptions(const DescribeAlertHistoryListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAscending()) {
    query["Ascending"] = request.getAscending();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAlertHistoryList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlertHistoryListResponse>();
}

/**
 * @deprecated OpenAPI DescribeAlertHistoryList is deprecated, please use Cms::2019-01-01::DescribeAlertLogList instead.
 *
 * @summary Queries historical alerts.
 *
 * @description This API operation is no longer maintained. We recommend that you call the [DescribeAlertLogList](https://help.aliyun.com/document_detail/201087.html) operation.
 *
 * @param request DescribeAlertHistoryListRequest
 * @return DescribeAlertHistoryListResponse
 */
DescribeAlertHistoryListResponse Client::describeAlertHistoryList(const DescribeAlertHistoryListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlertHistoryListWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics of alert logs.
 *
 * @description Queries the statistics of alert logs.
 * This topic provides an example on how to query the statistics of alert logs for Elastic Compute Service (ECS) based on the `product` dimension.
 *
 * @param request DescribeAlertLogCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertLogCountResponse
 */
DescribeAlertLogCountResponse Client::describeAlertLogCountWithOptions(const DescribeAlertLogCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroup()) {
    query["ContactGroup"] = request.getContactGroup();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.getGroupBy();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLastMin()) {
    query["LastMin"] = request.getLastMin();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasSendStatus()) {
    query["SendStatus"] = request.getSendStatus();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAlertLogCount"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlertLogCountResponse>();
}

/**
 * @summary Queries the statistics of alert logs.
 *
 * @description Queries the statistics of alert logs.
 * This topic provides an example on how to query the statistics of alert logs for Elastic Compute Service (ECS) based on the `product` dimension.
 *
 * @param request DescribeAlertLogCountRequest
 * @return DescribeAlertLogCountResponse
 */
DescribeAlertLogCountResponse Client::describeAlertLogCount(const DescribeAlertLogCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlertLogCountWithOptions(request, runtime);
}

/**
 * @summary Queries the number of alert logs that are generated during each interval within a period of time.
 *
 * @description This topic provides an example on how to query the number of alert logs for Elastic Compute Service (ECS) based on the `product` dimension.
 *
 * @param request DescribeAlertLogHistogramRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertLogHistogramResponse
 */
DescribeAlertLogHistogramResponse Client::describeAlertLogHistogramWithOptions(const DescribeAlertLogHistogramRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroup()) {
    query["ContactGroup"] = request.getContactGroup();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.getGroupBy();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLastMin()) {
    query["LastMin"] = request.getLastMin();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasSendStatus()) {
    query["SendStatus"] = request.getSendStatus();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAlertLogHistogram"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlertLogHistogramResponse>();
}

/**
 * @summary Queries the number of alert logs that are generated during each interval within a period of time.
 *
 * @description This topic provides an example on how to query the number of alert logs for Elastic Compute Service (ECS) based on the `product` dimension.
 *
 * @param request DescribeAlertLogHistogramRequest
 * @return DescribeAlertLogHistogramResponse
 */
DescribeAlertLogHistogramResponse Client::describeAlertLogHistogram(const DescribeAlertLogHistogramRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlertLogHistogramWithOptions(request, runtime);
}

/**
 * @summary Queries the alert history by calling the DescribeAlertLogList operation.
 *
 * @description This operation can query the alert history only within the last year.
 * This topic provides an example to show how to query the alert history of Elastic Compute Service (ECS) from the cloud service `product` dimension.
 *
 * @param request DescribeAlertLogListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertLogListResponse
 */
DescribeAlertLogListResponse Client::describeAlertLogListWithOptions(const DescribeAlertLogListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroup()) {
    query["ContactGroup"] = request.getContactGroup();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.getGroupBy();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLastMin()) {
    query["LastMin"] = request.getLastMin();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasSendStatus()) {
    query["SendStatus"] = request.getSendStatus();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAlertLogList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlertLogListResponse>();
}

/**
 * @summary Queries the alert history by calling the DescribeAlertLogList operation.
 *
 * @description This operation can query the alert history only within the last year.
 * This topic provides an example to show how to query the alert history of Elastic Compute Service (ECS) from the cloud service `product` dimension.
 *
 * @param request DescribeAlertLogListRequest
 * @return DescribeAlertLogListResponse
 */
DescribeAlertLogListResponse Client::describeAlertLogList(const DescribeAlertLogListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlertLogListWithOptions(request, runtime);
}

/**
 * @summary Queries the resources for which active alerts are triggered based on an alert rule.
 *
 * @param request DescribeAlertingMetricRuleResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertingMetricRuleResourcesResponse
 */
DescribeAlertingMetricRuleResourcesResponse Client::describeAlertingMetricRuleResourcesWithOptions(const DescribeAlertingMetricRuleResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAlertingMetricRuleResources"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAlertingMetricRuleResourcesResponse>();
}

/**
 * @summary Queries the resources for which active alerts are triggered based on an alert rule.
 *
 * @param request DescribeAlertingMetricRuleResourcesRequest
 * @return DescribeAlertingMetricRuleResourcesResponse
 */
DescribeAlertingMetricRuleResourcesResponse Client::describeAlertingMetricRuleResources(const DescribeAlertingMetricRuleResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAlertingMetricRuleResourcesWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeContactGroupList interface to query the list of alarm contact groups.
 *
 * @param request DescribeContactGroupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeContactGroupListResponse
 */
DescribeContactGroupListResponse Client::describeContactGroupListWithOptions(const DescribeContactGroupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeContactGroupList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeContactGroupListResponse>();
}

/**
 * @summary Call the DescribeContactGroupList interface to query the list of alarm contact groups.
 *
 * @param request DescribeContactGroupListRequest
 * @return DescribeContactGroupListResponse
 */
DescribeContactGroupListResponse Client::describeContactGroupList(const DescribeContactGroupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeContactGroupListWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeContactList operation to query a list of alert contacts.
 *
 * @param request DescribeContactListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeContactListResponse
 */
DescribeContactListResponse Client::describeContactListWithOptions(const DescribeContactListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChanelType()) {
    query["ChanelType"] = request.getChanelType();
  }

  if (!!request.hasChanelValue()) {
    query["ChanelValue"] = request.getChanelValue();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeContactList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeContactListResponse>();
}

/**
 * @summary Calls the DescribeContactList operation to query a list of alert contacts.
 *
 * @param request DescribeContactListRequest
 * @return DescribeContactListResponse
 */
DescribeContactListResponse Client::describeContactList(const DescribeContactListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeContactListWithOptions(request, runtime);
}

/**
 * @summary Queries the alert contacts in an alert contact group.
 *
 * @param request DescribeContactListByContactGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeContactListByContactGroupResponse
 */
DescribeContactListByContactGroupResponse Client::describeContactListByContactGroupWithOptions(const DescribeContactListByContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupName()) {
    query["ContactGroupName"] = request.getContactGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeContactListByContactGroup"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeContactListByContactGroupResponse>();
}

/**
 * @summary Queries the alert contacts in an alert contact group.
 *
 * @param request DescribeContactListByContactGroupRequest
 * @return DescribeContactListByContactGroupResponse
 */
DescribeContactListByContactGroupResponse Client::describeContactListByContactGroup(const DescribeContactListByContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeContactListByContactGroupWithOptions(request, runtime);
}

/**
 * @summary Queries a custom event.
 *
 * @param request DescribeCustomEventAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomEventAttributeResponse
 */
DescribeCustomEventAttributeResponse Client::describeCustomEventAttributeWithOptions(const DescribeCustomEventAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKeywords()) {
    query["SearchKeywords"] = request.getSearchKeywords();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomEventAttribute"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomEventAttributeResponse>();
}

/**
 * @summary Queries a custom event.
 *
 * @param request DescribeCustomEventAttributeRequest
 * @return DescribeCustomEventAttributeResponse
 */
DescribeCustomEventAttributeResponse Client::describeCustomEventAttribute(const DescribeCustomEventAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomEventAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the number of times that a custom event occurred within a period of time.
 *
 * @description > This operation queries the number of times that a custom event occurred for each service.
 *
 * @param request DescribeCustomEventCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomEventCountResponse
 */
DescribeCustomEventCountResponse Client::describeCustomEventCountWithOptions(const DescribeCustomEventCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasSearchKeywords()) {
    query["SearchKeywords"] = request.getSearchKeywords();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomEventCount"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomEventCountResponse>();
}

/**
 * @summary Queries the number of times that a custom event occurred within a period of time.
 *
 * @description > This operation queries the number of times that a custom event occurred for each service.
 *
 * @param request DescribeCustomEventCountRequest
 * @return DescribeCustomEventCountResponse
 */
DescribeCustomEventCountResponse Client::describeCustomEventCount(const DescribeCustomEventCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomEventCountWithOptions(request, runtime);
}

/**
 * @summary Queries the number of times that a custom event occurred during each interval within a period of time.
 *
 * @param request DescribeCustomEventHistogramRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomEventHistogramResponse
 */
DescribeCustomEventHistogramResponse Client::describeCustomEventHistogramWithOptions(const DescribeCustomEventHistogramRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasSearchKeywords()) {
    query["SearchKeywords"] = request.getSearchKeywords();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomEventHistogram"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomEventHistogramResponse>();
}

/**
 * @summary Queries the number of times that a custom event occurred during each interval within a period of time.
 *
 * @param request DescribeCustomEventHistogramRequest
 * @return DescribeCustomEventHistogramResponse
 */
DescribeCustomEventHistogramResponse Client::describeCustomEventHistogram(const DescribeCustomEventHistogramRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomEventHistogramWithOptions(request, runtime);
}

/**
 * @summary Queries the reported monitoring data.
 *
 * @description > You can call the DescribeMetricList operation to query the metrics of cloud services. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html).
 *
 * @param request DescribeCustomMetricListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomMetricListResponse
 */
DescribeCustomMetricListResponse Client::describeCustomMetricListWithOptions(const DescribeCustomMetricListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDimension()) {
    query["Dimension"] = request.getDimension();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMd5()) {
    query["Md5"] = request.getMd5();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomMetricList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomMetricListResponse>();
}

/**
 * @summary Queries the reported monitoring data.
 *
 * @description > You can call the DescribeMetricList operation to query the metrics of cloud services. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html).
 *
 * @param request DescribeCustomMetricListRequest
 * @return DescribeCustomMetricListResponse
 */
DescribeCustomMetricListResponse Client::describeCustomMetricList(const DescribeCustomMetricListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomMetricListWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeDynamicTagRuleList operation to query the rules for dynamic tags.
 *
 * @description This topic provides an example of how to query the rules for the tag key `tagkey1`. The response shows that two rules are returned. The rule IDs are `1536df65-a719-429d-8813-73cc40d7****` and `56e8cebb-b3d7-4a91-9880-78a8c84f****`.
 *
 * @param request DescribeDynamicTagRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDynamicTagRuleListResponse
 */
DescribeDynamicTagRuleListResponse Client::describeDynamicTagRuleListWithOptions(const DescribeDynamicTagRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDynamicTagRuleId()) {
    query["DynamicTagRuleId"] = request.getDynamicTagRuleId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  if (!!request.hasTagRegionId()) {
    query["TagRegionId"] = request.getTagRegionId();
  }

  if (!!request.hasTagValue()) {
    query["TagValue"] = request.getTagValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDynamicTagRuleList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDynamicTagRuleListResponse>();
}

/**
 * @summary Call the DescribeDynamicTagRuleList operation to query the rules for dynamic tags.
 *
 * @description This topic provides an example of how to query the rules for the tag key `tagkey1`. The response shows that two rules are returned. The rule IDs are `1536df65-a719-429d-8813-73cc40d7****` and `56e8cebb-b3d7-4a91-9880-78a8c84f****`.
 *
 * @param request DescribeDynamicTagRuleListRequest
 * @return DescribeDynamicTagRuleListResponse
 */
DescribeDynamicTagRuleListResponse Client::describeDynamicTagRuleList(const DescribeDynamicTagRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDynamicTagRuleListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified event-triggered alert rule by calling the DescribeEventRuleAttribute operation.
 *
 * @description This topic provides an example on how to query the details of the event-triggered alert rule `testRule`.
 *
 * @param request DescribeEventRuleAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventRuleAttributeResponse
 */
DescribeEventRuleAttributeResponse Client::describeEventRuleAttributeWithOptions(const DescribeEventRuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.getSilenceTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventRuleAttribute"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventRuleAttributeResponse>();
}

/**
 * @summary Queries the details of a specified event-triggered alert rule by calling the DescribeEventRuleAttribute operation.
 *
 * @description This topic provides an example on how to query the details of the event-triggered alert rule `testRule`.
 *
 * @param request DescribeEventRuleAttributeRequest
 * @return DescribeEventRuleAttributeResponse
 */
DescribeEventRuleAttributeResponse Client::describeEventRuleAttribute(const DescribeEventRuleAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventRuleAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries event-triggered alert rules.
 *
 * @param request DescribeEventRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventRuleListResponse
 */
DescribeEventRuleListResponse Client::describeEventRuleListWithOptions(const DescribeEventRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasIsEnable()) {
    query["IsEnable"] = request.getIsEnable();
  }

  if (!!request.hasNamePrefix()) {
    query["NamePrefix"] = request.getNamePrefix();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventRuleList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventRuleListResponse>();
}

/**
 * @summary Queries event-triggered alert rules.
 *
 * @param request DescribeEventRuleListRequest
 * @return DescribeEventRuleListResponse
 */
DescribeEventRuleListResponse Client::describeEventRuleList(const DescribeEventRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventRuleListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of event-triggered alert rules.
 *
 * @description This topic provides an example to query the details of the event-triggered alert rule `testRule`.
 *
 * @param request DescribeEventRuleTargetListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventRuleTargetListResponse
 */
DescribeEventRuleTargetListResponse Client::describeEventRuleTargetListWithOptions(const DescribeEventRuleTargetListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventRuleTargetList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventRuleTargetListResponse>();
}

/**
 * @summary Queries the list of event-triggered alert rules.
 *
 * @description This topic provides an example to query the details of the event-triggered alert rule `testRule`.
 *
 * @param request DescribeEventRuleTargetListRequest
 * @return DescribeEventRuleTargetListResponse
 */
DescribeEventRuleTargetListResponse Client::describeEventRuleTargetList(const DescribeEventRuleTargetListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventRuleTargetListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of monitoring data exports by calling the DescribeExporterOutputList operation.
 *
 * @param request DescribeExporterOutputListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExporterOutputListResponse
 */
DescribeExporterOutputListResponse Client::describeExporterOutputListWithOptions(const DescribeExporterOutputListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExporterOutputList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExporterOutputListResponse>();
}

/**
 * @summary Queries the list of monitoring data exports by calling the DescribeExporterOutputList operation.
 *
 * @param request DescribeExporterOutputListRequest
 * @return DescribeExporterOutputListResponse
 */
DescribeExporterOutputListResponse Client::describeExporterOutputList(const DescribeExporterOutputListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExporterOutputListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of data export rules by calling the DescribeExporterRuleList operation.
 *
 * @param request DescribeExporterRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExporterRuleListResponse
 */
DescribeExporterRuleListResponse Client::describeExporterRuleListWithOptions(const DescribeExporterRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExporterRuleList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExporterRuleListResponse>();
}

/**
 * @summary Queries the list of data export rules by calling the DescribeExporterRuleList operation.
 *
 * @param request DescribeExporterRuleListRequest
 * @return DescribeExporterRuleListResponse
 */
DescribeExporterRuleListResponse Client::describeExporterRuleList(const DescribeExporterRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExporterRuleListWithOptions(request, runtime);
}

/**
 * @summary Queries the process monitoring tasks for an application group.
 *
 * @description You can create a process monitoring task to monitor all or the specified Elastic Compute Service (ECS) instances in an application group and configure alert rules for the process monitoring task.
 *
 * @param request DescribeGroupMonitoringAgentProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupMonitoringAgentProcessResponse
 */
DescribeGroupMonitoringAgentProcessResponse Client::describeGroupMonitoringAgentProcessWithOptions(const DescribeGroupMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProcessName()) {
    query["ProcessName"] = request.getProcessName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupMonitoringAgentProcess"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupMonitoringAgentProcessResponse>();
}

/**
 * @summary Queries the process monitoring tasks for an application group.
 *
 * @description You can create a process monitoring task to monitor all or the specified Elastic Compute Service (ECS) instances in an application group and configure alert rules for the process monitoring task.
 *
 * @param request DescribeGroupMonitoringAgentProcessRequest
 * @return DescribeGroupMonitoringAgentProcessResponse
 */
DescribeGroupMonitoringAgentProcessResponse Client::describeGroupMonitoringAgentProcess(const DescribeGroupMonitoringAgentProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupMonitoringAgentProcessWithOptions(request, runtime);
}

/**
 * @summary Queries availability monitoring tasks.
 *
 * @description This topic provides an example to show how to query all the availability monitoring tasks of your Alibaba Cloud account. The sample responses indicate that the account has one availability monitoring task named `ecs_instance`.
 *
 * @param request DescribeHostAvailabilityListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHostAvailabilityListResponse
 */
DescribeHostAvailabilityListResponse Client::describeHostAvailabilityListWithOptions(const DescribeHostAvailabilityListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHostAvailabilityList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHostAvailabilityListResponse>();
}

/**
 * @summary Queries availability monitoring tasks.
 *
 * @description This topic provides an example to show how to query all the availability monitoring tasks of your Alibaba Cloud account. The sample responses indicate that the account has one availability monitoring task named `ecs_instance`.
 *
 * @param request DescribeHostAvailabilityListRequest
 * @return DescribeHostAvailabilityListResponse
 */
DescribeHostAvailabilityListResponse Client::describeHostAvailabilityList(const DescribeHostAvailabilityListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHostAvailabilityListWithOptions(request, runtime);
}

/**
 * @summary Queries the monitoring data in a namespace.
 *
 * @description ## [](#)Prerequisites
 * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
 * ## [](#)Limits
 * The size of monitoring data that is returned in each call cannot exceed 1.5 MB. If the returned data reaches the upper limit, the query fails. You must reset the query conditions.
 * ## [](#)Operation description
 * This topic provides an example to show how to query the monitoring data of the `AliyunEcs_cpu_total` metric in the `default-aliyun` namespace from `1653804865` (14:14:25 on May 29, 2022) to `1653805225` (14:20:25 on May 29, 2022).
 *
 * @param request DescribeHybridMonitorDataListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridMonitorDataListResponse
 */
DescribeHybridMonitorDataListResponse Client::describeHybridMonitorDataListWithOptions(const DescribeHybridMonitorDataListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnd()) {
    query["End"] = request.getEnd();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPromSQL()) {
    query["PromSQL"] = request.getPromSQL();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridMonitorDataList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridMonitorDataListResponse>();
}

/**
 * @summary Queries the monitoring data in a namespace.
 *
 * @description ## [](#)Prerequisites
 * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
 * ## [](#)Limits
 * The size of monitoring data that is returned in each call cannot exceed 1.5 MB. If the returned data reaches the upper limit, the query fails. You must reset the query conditions.
 * ## [](#)Operation description
 * This topic provides an example to show how to query the monitoring data of the `AliyunEcs_cpu_total` metric in the `default-aliyun` namespace from `1653804865` (14:14:25 on May 29, 2022) to `1653805225` (14:20:25 on May 29, 2022).
 *
 * @param request DescribeHybridMonitorDataListRequest
 * @return DescribeHybridMonitorDataListResponse
 */
DescribeHybridMonitorDataListResponse Client::describeHybridMonitorDataList(const DescribeHybridMonitorDataListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridMonitorDataListWithOptions(request, runtime);
}

/**
 * @summary Queries a list of namespaces and the details of their data sources.
 *
 * @description This example shows how to query all namespaces that belong to the current account. The response indicates that only one namespace, `aliyun-test`, exists.
 *
 * @param request DescribeHybridMonitorNamespaceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridMonitorNamespaceListResponse
 */
DescribeHybridMonitorNamespaceListResponse Client::describeHybridMonitorNamespaceListWithOptions(const DescribeHybridMonitorNamespaceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasShowTaskStatistic()) {
    query["ShowTaskStatistic"] = request.getShowTaskStatistic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridMonitorNamespaceList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridMonitorNamespaceListResponse>();
}

/**
 * @summary Queries a list of namespaces and the details of their data sources.
 *
 * @description This example shows how to query all namespaces that belong to the current account. The response indicates that only one namespace, `aliyun-test`, exists.
 *
 * @param request DescribeHybridMonitorNamespaceListRequest
 * @return DescribeHybridMonitorNamespaceListResponse
 */
DescribeHybridMonitorNamespaceListResponse Client::describeHybridMonitorNamespaceList(const DescribeHybridMonitorNamespaceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridMonitorNamespaceListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of Logstore groups by calling the DescribeHybridMonitorSLSGroup operation.
 *
 * @description This topic provides an example of how to query all Logstore groups in the current account. The response shows that the current account has two Logstore groups: `Logstore_test` and `Logstore_aliyun`.
 *
 * @param request DescribeHybridMonitorSLSGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridMonitorSLSGroupResponse
 */
DescribeHybridMonitorSLSGroupResponse Client::describeHybridMonitorSLSGroupWithOptions(const DescribeHybridMonitorSLSGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSLSGroupName()) {
    query["SLSGroupName"] = request.getSLSGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridMonitorSLSGroup"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridMonitorSLSGroupResponse>();
}

/**
 * @summary Queries the list of Logstore groups by calling the DescribeHybridMonitorSLSGroup operation.
 *
 * @description This topic provides an example of how to query all Logstore groups in the current account. The response shows that the current account has two Logstore groups: `Logstore_test` and `Logstore_aliyun`.
 *
 * @param request DescribeHybridMonitorSLSGroupRequest
 * @return DescribeHybridMonitorSLSGroupResponse
 */
DescribeHybridMonitorSLSGroupResponse Client::describeHybridMonitorSLSGroup(const DescribeHybridMonitorSLSGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridMonitorSLSGroupWithOptions(request, runtime);
}

/**
 * @summary Queries metric import tasks.
 *
 * @description This topic provides an example on how to query all metric import tasks that belong to the current Alibaba Cloud account. The returned result indicates that the current account has only one metric import task. The metric import task is named `aliyun_task`.
 *
 * @param request DescribeHybridMonitorTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridMonitorTaskListResponse
 */
DescribeHybridMonitorTaskListResponse Client::describeHybridMonitorTaskListWithOptions(const DescribeHybridMonitorTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasIncludeAliyunTask()) {
    query["IncludeAliyunTask"] = request.getIncludeAliyunTask();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.getTargetUserId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHybridMonitorTaskList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHybridMonitorTaskListResponse>();
}

/**
 * @summary Queries metric import tasks.
 *
 * @description This topic provides an example on how to query all metric import tasks that belong to the current Alibaba Cloud account. The returned result indicates that the current account has only one metric import task. The metric import task is named `aliyun_task`.
 *
 * @param request DescribeHybridMonitorTaskListRequest
 * @return DescribeHybridMonitorTaskListResponse
 */
DescribeHybridMonitorTaskListResponse Client::describeHybridMonitorTaskList(const DescribeHybridMonitorTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridMonitorTaskListWithOptions(request, runtime);
}

/**
 * @summary Queries a Log Monitoring task.
 *
 * @param request DescribeLogMonitorAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogMonitorAttributeResponse
 */
DescribeLogMonitorAttributeResponse Client::describeLogMonitorAttributeWithOptions(const DescribeLogMonitorAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLogMonitorAttribute"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogMonitorAttributeResponse>();
}

/**
 * @summary Queries a Log Monitoring task.
 *
 * @param request DescribeLogMonitorAttributeRequest
 * @return DescribeLogMonitorAttributeResponse
 */
DescribeLogMonitorAttributeResponse Client::describeLogMonitorAttribute(const DescribeLogMonitorAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogMonitorAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries log monitoring metrics.
 *
 * @param request DescribeLogMonitorListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogMonitorListResponse
 */
DescribeLogMonitorListResponse Client::describeLogMonitorListWithOptions(const DescribeLogMonitorListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchValue()) {
    query["SearchValue"] = request.getSearchValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLogMonitorList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogMonitorListResponse>();
}

/**
 * @summary Queries log monitoring metrics.
 *
 * @param request DescribeLogMonitorListRequest
 * @return DescribeLogMonitorListResponse
 */
DescribeLogMonitorListResponse Client::describeLogMonitorList(const DescribeLogMonitorListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogMonitorListWithOptions(request, runtime);
}

/**
 * @summary Queries the monitoring data of a metric for a cloud service.
 *
 * @description ### [](#)Limits
 * - The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. If the free quota is used up, you are automatically charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
 * - Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
 * ### [](#)Description
 * > Different from [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html), the DescribeMetricData operation provides statistical features. You can set the Dimension parameter to `{"instanceId": "i-abcdefgh12****"}` to aggregate all data of your Alibaba Cloud account.
 * This topic provides an example on how to query the monitoring data of the `cpu_idle` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`.
 *
 * @param request DescribeMetricDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricDataResponse
 */
DescribeMetricDataResponse Client::describeMetricDataWithOptions(const DescribeMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExpress()) {
    query["Express"] = request.getExpress();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.getLength();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetricData"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricDataResponse>();
}

/**
 * @summary Queries the monitoring data of a metric for a cloud service.
 *
 * @description ### [](#)Limits
 * - The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. If the free quota is used up, you are automatically charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
 * - Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
 * ### [](#)Description
 * > Different from [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html), the DescribeMetricData operation provides statistical features. You can set the Dimension parameter to `{"instanceId": "i-abcdefgh12****"}` to aggregate all data of your Alibaba Cloud account.
 * This topic provides an example on how to query the monitoring data of the `cpu_idle` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`.
 *
 * @param request DescribeMetricDataRequest
 * @return DescribeMetricDataResponse
 */
DescribeMetricDataResponse Client::describeMetricData(const DescribeMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricDataWithOptions(request, runtime);
}

/**
 * @summary Queries the latest monitoring data of a metric.
 *
 * @description ### [](#)Limits
 * - The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
 * - Each API operation can be called up to 50 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
 * > If `Throttling.User` or `Request was denied due to user flow control` is returned when you call an API operation, the API operation is throttled. For more information about how to handle the issue, see [How do I handle the throttling of a query API?](https://help.aliyun.com/document_detail/2615031.html)
 * ### [](#)Precautions
 * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
 * - The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
 * - The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
 * - The storage duration is 91 days if the value of the `Period` parameter is greater than or equal to 300 seconds.
 * ### [](#)Operation description
 * This topic provides an example on how to query the latest monitoring data of the `CPUUtilization` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The returned result indicates that the monitoring data for the instance `i-abcdefgh12****` of the account `123456789876****` is queried at an interval of 60 seconds. The maximum, minimum, and average values of the metric are 100, 93.1, and 99.52.
 *
 * @param request DescribeMetricLastRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricLastResponse
 */
DescribeMetricLastResponse Client::describeMetricLastWithOptions(const DescribeMetricLastRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExpress()) {
    query["Express"] = request.getExpress();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.getLength();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetricLast"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricLastResponse>();
}

/**
 * @summary Queries the latest monitoring data of a metric.
 *
 * @description ### [](#)Limits
 * - The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
 * - Each API operation can be called up to 50 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
 * > If `Throttling.User` or `Request was denied due to user flow control` is returned when you call an API operation, the API operation is throttled. For more information about how to handle the issue, see [How do I handle the throttling of a query API?](https://help.aliyun.com/document_detail/2615031.html)
 * ### [](#)Precautions
 * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
 * - The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
 * - The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
 * - The storage duration is 91 days if the value of the `Period` parameter is greater than or equal to 300 seconds.
 * ### [](#)Operation description
 * This topic provides an example on how to query the latest monitoring data of the `CPUUtilization` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The returned result indicates that the monitoring data for the instance `i-abcdefgh12****` of the account `123456789876****` is queried at an interval of 60 seconds. The maximum, minimum, and average values of the metric are 100, 93.1, and 99.52.
 *
 * @param request DescribeMetricLastRequest
 * @return DescribeMetricLastResponse
 */
DescribeMetricLastResponse Client::describeMetricLast(const DescribeMetricLastRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricLastWithOptions(request, runtime);
}

/**
 * @summary The DescribeMetricList operation queries the monitoring data of a specific metric for a cloud service.
 *
 * @description ### Limits
 * - You have a free quota of 1 million total API calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If you use up the free quota and have not enabled the pay-as-you-go billing method for CloudMonitor Basic, you can no longer use these API operations. If you have enabled the pay-as-you-go billing method, you can continue to use the API operations after the free quota is used up. API calls that exceed the free quota are automatically charged on a pay-as-you-go basis. For more information, see [Enable pay-as-you-go](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
 * - You can call each API operation up to 50 times per second. This limit is shared between an Alibaba Cloud account and its RAM users.
 * > If you receive the `Throttling.User` or `Request was denied due to user flow control` error message when you call an API operation, the API call is throttled. For more information, see [How do I resolve an API call throttling issue?](https://help.aliyun.com/document_detail/2615031.html).
 * ### Notes
 * The storage duration of monitoring data for a cloud service depends on the `Period` (statistical period). A larger `Period` value indicates that the monitoring data is less granular and is stored for a longer period. The relationship is as follows:
 * - If the value of `Period` is less than 60 seconds, the storage duration is 7 days.
 * - If the value of `Period` is 60 seconds, the storage duration is 31 days.
 * - If the value of `Period` is 300 seconds or greater, the storage duration is 91 days.
 * ### Usage notes
 * This topic provides an example of how to query the monitoring data of the `cpu_idle` metric for the `acs_ecs_dashboard` cloud service. The response shows the data for the instance `i-abcdefgh12****`, which belongs to the Alibaba Cloud account `120886317861****`. At a 60 second interval, the maximum, minimum, and average values of the metric are 100, 93.1, and 99.52, respectively.
 *
 * @param request DescribeMetricListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricListResponse
 */
DescribeMetricListResponse Client::describeMetricListWithOptions(const DescribeMetricListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExpress()) {
    query["Express"] = request.getExpress();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.getLength();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetricList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricListResponse>();
}

/**
 * @summary The DescribeMetricList operation queries the monitoring data of a specific metric for a cloud service.
 *
 * @description ### Limits
 * - You have a free quota of 1 million total API calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If you use up the free quota and have not enabled the pay-as-you-go billing method for CloudMonitor Basic, you can no longer use these API operations. If you have enabled the pay-as-you-go billing method, you can continue to use the API operations after the free quota is used up. API calls that exceed the free quota are automatically charged on a pay-as-you-go basis. For more information, see [Enable pay-as-you-go](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
 * - You can call each API operation up to 50 times per second. This limit is shared between an Alibaba Cloud account and its RAM users.
 * > If you receive the `Throttling.User` or `Request was denied due to user flow control` error message when you call an API operation, the API call is throttled. For more information, see [How do I resolve an API call throttling issue?](https://help.aliyun.com/document_detail/2615031.html).
 * ### Notes
 * The storage duration of monitoring data for a cloud service depends on the `Period` (statistical period). A larger `Period` value indicates that the monitoring data is less granular and is stored for a longer period. The relationship is as follows:
 * - If the value of `Period` is less than 60 seconds, the storage duration is 7 days.
 * - If the value of `Period` is 60 seconds, the storage duration is 31 days.
 * - If the value of `Period` is 300 seconds or greater, the storage duration is 91 days.
 * ### Usage notes
 * This topic provides an example of how to query the monitoring data of the `cpu_idle` metric for the `acs_ecs_dashboard` cloud service. The response shows the data for the instance `i-abcdefgh12****`, which belongs to the Alibaba Cloud account `120886317861****`. At a 60 second interval, the maximum, minimum, and average values of the metric are 100, 93.1, and 99.52, respectively.
 *
 * @param request DescribeMetricListRequest
 * @return DescribeMetricListResponse
 */
DescribeMetricListResponse Client::describeMetricList(const DescribeMetricListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricListWithOptions(request, runtime);
}

/**
 * @summary Queries metrics that are supported in CloudMonitor.
 *
 * @description Use this operation together with DescribeMetricList and DescribeMetricLast. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html) and [DescribeMetricLast](https://help.aliyun.com/document_detail/51939.html).
 *
 * @param request DescribeMetricMetaListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricMetaListResponse
 */
DescribeMetricMetaListResponse Client::describeMetricMetaListWithOptions(const DescribeMetricMetaListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetricMetaList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricMetaListResponse>();
}

/**
 * @summary Queries metrics that are supported in CloudMonitor.
 *
 * @description Use this operation together with DescribeMetricList and DescribeMetricLast. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html) and [DescribeMetricLast](https://help.aliyun.com/document_detail/51939.html).
 *
 * @param request DescribeMetricMetaListRequest
 * @return DescribeMetricMetaListResponse
 */
DescribeMetricMetaListResponse Client::describeMetricMetaList(const DescribeMetricMetaListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricMetaListWithOptions(request, runtime);
}

/**
 * @summary You can call the DescribeMetricRuleBlackList operation to query blacklist policies.
 *
 * @param request DescribeMetricRuleBlackListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricRuleBlackListResponse
 */
DescribeMetricRuleBlackListResponse Client::describeMetricRuleBlackListWithOptions(const DescribeMetricRuleBlackListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasIsEnable()) {
    query["IsEnable"] = request.getIsEnable();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.getScopeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetricRuleBlackList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricRuleBlackListResponse>();
}

/**
 * @summary You can call the DescribeMetricRuleBlackList operation to query blacklist policies.
 *
 * @param request DescribeMetricRuleBlackListRequest
 * @return DescribeMetricRuleBlackListResponse
 */
DescribeMetricRuleBlackListResponse Client::describeMetricRuleBlackList(const DescribeMetricRuleBlackListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricRuleBlackListWithOptions(request, runtime);
}

/**
 * @summary Queries the number of alert rules in each state.
 *
 * @param request DescribeMetricRuleCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricRuleCountResponse
 */
DescribeMetricRuleCountResponse Client::describeMetricRuleCountWithOptions(const DescribeMetricRuleCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetricRuleCount"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricRuleCountResponse>();
}

/**
 * @summary Queries the number of alert rules in each state.
 *
 * @param request DescribeMetricRuleCountRequest
 * @return DescribeMetricRuleCountResponse
 */
DescribeMetricRuleCountResponse Client::describeMetricRuleCount(const DescribeMetricRuleCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricRuleCountWithOptions(request, runtime);
}

/**
 * @summary Queries all alert rules in the alert rule list.
 *
 * @description This topic provides an example of how to query all alert rules in the alert rule list of the current Alibaba Cloud account. The response shows that the alert rule list contains only one alert rule. The alert rule is named `Rule_01` and has an ID of `applyTemplate344cfd42-0f32-4fd6-805a-88d7908a****`.
 *
 * @param request DescribeMetricRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricRuleListResponse
 */
DescribeMetricRuleListResponse Client::describeMetricRuleListWithOptions(const DescribeMetricRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertState()) {
    query["AlertState"] = request.getAlertState();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEnableState()) {
    query["EnableState"] = request.getEnableState();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRuleIds()) {
    query["RuleIds"] = request.getRuleIds();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetricRuleList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricRuleListResponse>();
}

/**
 * @summary Queries all alert rules in the alert rule list.
 *
 * @description This topic provides an example of how to query all alert rules in the alert rule list of the current Alibaba Cloud account. The response shows that the alert rule list contains only one alert rule. The alert rule is named `Rule_01` and has an ID of `applyTemplate344cfd42-0f32-4fd6-805a-88d7908a****`.
 *
 * @param request DescribeMetricRuleListRequest
 * @return DescribeMetricRuleListResponse
 */
DescribeMetricRuleListResponse Client::describeMetricRuleList(const DescribeMetricRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricRuleListWithOptions(request, runtime);
}

/**
 * @summary Queries the notification channels of a specified alert rule by calling the DescribeMetricRuleTargets operation.
 *
 * @description ## Usage notes
 * This topic provides an example to query the target resources associated with the alert rule `ae06917_75a8c43178ab66****`.
 *
 * @param request DescribeMetricRuleTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricRuleTargetsResponse
 */
DescribeMetricRuleTargetsResponse Client::describeMetricRuleTargetsWithOptions(const DescribeMetricRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetricRuleTargets"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricRuleTargetsResponse>();
}

/**
 * @summary Queries the notification channels of a specified alert rule by calling the DescribeMetricRuleTargets operation.
 *
 * @description ## Usage notes
 * This topic provides an example to query the target resources associated with the alert rule `ae06917_75a8c43178ab66****`.
 *
 * @param request DescribeMetricRuleTargetsRequest
 * @return DescribeMetricRuleTargetsResponse
 */
DescribeMetricRuleTargetsResponse Client::describeMetricRuleTargets(const DescribeMetricRuleTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricRuleTargetsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an alert template by calling the DescribeMetricRuleTemplateAttribute operation.
 *
 * @description This topic provides an example on how to query the details of the alert template `70****`.
 *
 * @param request DescribeMetricRuleTemplateAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricRuleTemplateAttributeResponse
 */
DescribeMetricRuleTemplateAttributeResponse Client::describeMetricRuleTemplateAttributeWithOptions(const DescribeMetricRuleTemplateAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetricRuleTemplateAttribute"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricRuleTemplateAttributeResponse>();
}

/**
 * @summary Queries the details of an alert template by calling the DescribeMetricRuleTemplateAttribute operation.
 *
 * @description This topic provides an example on how to query the details of the alert template `70****`.
 *
 * @param request DescribeMetricRuleTemplateAttributeRequest
 * @return DescribeMetricRuleTemplateAttributeResponse
 */
DescribeMetricRuleTemplateAttributeResponse Client::describeMetricRuleTemplateAttribute(const DescribeMetricRuleTemplateAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricRuleTemplateAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries alert templates.
 *
 * @description This topic provides an example on how to query alert templates. In this example, the following alert templates are returned in the response: `ECS_Template1` and `ECS_Template2`.
 *
 * @param request DescribeMetricRuleTemplateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricRuleTemplateListResponse
 */
DescribeMetricRuleTemplateListResponse Client::describeMetricRuleTemplateListWithOptions(const DescribeMetricRuleTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHistory()) {
    query["History"] = request.getHistory();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetricRuleTemplateList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricRuleTemplateListResponse>();
}

/**
 * @summary Queries alert templates.
 *
 * @description This topic provides an example on how to query alert templates. In this example, the following alert templates are returned in the response: `ECS_Template1` and `ECS_Template2`.
 *
 * @param request DescribeMetricRuleTemplateListRequest
 * @return DescribeMetricRuleTemplateListResponse
 */
DescribeMetricRuleTemplateListResponse Client::describeMetricRuleTemplateList(const DescribeMetricRuleTemplateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricRuleTemplateListWithOptions(request, runtime);
}

/**
 * @summary Queries the latest monitoring data of a metric for a cloud service. The data can be sorted by a specified order.
 *
 * @description ### [](#)Limits
 * - The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
 * - Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
 * ### [](#)Precautions
 * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
 * - The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
 * - The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
 * - The storage duration is 91 days if the value of the `Period` is greater than or equal to 300 seconds.
 * ### [](#)Operation description
 * This topic provides an example on how to query the monitoring data of the `cpu_idle` metric in the last 60 seconds for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The monitoring data is sorted in descending order based on the `Average` field.
 *
 * @param request DescribeMetricTopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricTopResponse
 */
DescribeMetricTopResponse Client::describeMetricTopWithOptions(const DescribeMetricTopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExpress()) {
    query["Express"] = request.getExpress();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.getLength();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasOrderDesc()) {
    query["OrderDesc"] = request.getOrderDesc();
  }

  if (!!request.hasOrderby()) {
    query["Orderby"] = request.getOrderby();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMetricTop"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricTopResponse>();
}

/**
 * @summary Queries the latest monitoring data of a metric for a cloud service. The data can be sorted by a specified order.
 *
 * @description ### [](#)Limits
 * - The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
 * - Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
 * ### [](#)Precautions
 * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
 * - The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
 * - The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
 * - The storage duration is 91 days if the value of the `Period` is greater than or equal to 300 seconds.
 * ### [](#)Operation description
 * This topic provides an example on how to query the monitoring data of the `cpu_idle` metric in the last 60 seconds for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The monitoring data is sorted in descending order based on the `Average` field.
 *
 * @param request DescribeMetricTopRequest
 * @return DescribeMetricTopResponse
 */
DescribeMetricTopResponse Client::describeMetricTop(const DescribeMetricTopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricTopWithOptions(request, runtime);
}

/**
 * @summary Queries the cloud services to which the resources in an application group belong and the number of resources that belong to each cloud service in the application group.
 *
 * @param request DescribeMonitorGroupCategoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitorGroupCategoriesResponse
 */
DescribeMonitorGroupCategoriesResponse Client::describeMonitorGroupCategoriesWithOptions(const DescribeMonitorGroupCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMonitorGroupCategories"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitorGroupCategoriesResponse>();
}

/**
 * @summary Queries the cloud services to which the resources in an application group belong and the number of resources that belong to each cloud service in the application group.
 *
 * @param request DescribeMonitorGroupCategoriesRequest
 * @return DescribeMonitorGroupCategoriesResponse
 */
DescribeMonitorGroupCategoriesResponse Client::describeMonitorGroupCategories(const DescribeMonitorGroupCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitorGroupCategoriesWithOptions(request, runtime);
}

/**
 * @summary Queries the dynamic rules of an application group.
 *
 * @param request DescribeMonitorGroupDynamicRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitorGroupDynamicRulesResponse
 */
DescribeMonitorGroupDynamicRulesResponse Client::describeMonitorGroupDynamicRulesWithOptions(const DescribeMonitorGroupDynamicRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMonitorGroupDynamicRules"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitorGroupDynamicRulesResponse>();
}

/**
 * @summary Queries the dynamic rules of an application group.
 *
 * @param request DescribeMonitorGroupDynamicRulesRequest
 * @return DescribeMonitorGroupDynamicRulesResponse
 */
DescribeMonitorGroupDynamicRulesResponse Client::describeMonitorGroupDynamicRules(const DescribeMonitorGroupDynamicRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitorGroupDynamicRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the resources in an application group.
 *
 * @param request DescribeMonitorGroupInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitorGroupInstanceAttributeResponse
 */
DescribeMonitorGroupInstanceAttributeResponse Client::describeMonitorGroupInstanceAttributeWithOptions(const DescribeMonitorGroupInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTotal()) {
    query["Total"] = request.getTotal();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMonitorGroupInstanceAttribute"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitorGroupInstanceAttributeResponse>();
}

/**
 * @summary Queries the resources in an application group.
 *
 * @param request DescribeMonitorGroupInstanceAttributeRequest
 * @return DescribeMonitorGroupInstanceAttributeResponse
 */
DescribeMonitorGroupInstanceAttributeResponse Client::describeMonitorGroupInstanceAttribute(const DescribeMonitorGroupInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitorGroupInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the resources in an application group.
 *
 * @param request DescribeMonitorGroupInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitorGroupInstancesResponse
 */
DescribeMonitorGroupInstancesResponse Client::describeMonitorGroupInstancesWithOptions(const DescribeMonitorGroupInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMonitorGroupInstances"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitorGroupInstancesResponse>();
}

/**
 * @summary Queries the resources in an application group.
 *
 * @param request DescribeMonitorGroupInstancesRequest
 * @return DescribeMonitorGroupInstancesResponse
 */
DescribeMonitorGroupInstancesResponse Client::describeMonitorGroupInstances(const DescribeMonitorGroupInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitorGroupInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of alert notification pause policies for an application group by calling the DescribeMonitorGroupNotifyPolicyList operation.
 *
 * @param request DescribeMonitorGroupNotifyPolicyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitorGroupNotifyPolicyListResponse
 */
DescribeMonitorGroupNotifyPolicyListResponse Client::describeMonitorGroupNotifyPolicyListWithOptions(const DescribeMonitorGroupNotifyPolicyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMonitorGroupNotifyPolicyList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitorGroupNotifyPolicyListResponse>();
}

/**
 * @summary Queries the list of alert notification pause policies for an application group by calling the DescribeMonitorGroupNotifyPolicyList operation.
 *
 * @param request DescribeMonitorGroupNotifyPolicyListRequest
 * @return DescribeMonitorGroupNotifyPolicyListResponse
 */
DescribeMonitorGroupNotifyPolicyListResponse Client::describeMonitorGroupNotifyPolicyList(const DescribeMonitorGroupNotifyPolicyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitorGroupNotifyPolicyListWithOptions(request, runtime);
}

/**
 * @summary You can call the DescribeMonitorGroups operation to query a list of application groups.
 *
 * @description This topic provides an example of how to query a list of application groups. The response shows that two application groups are returned: `testGroup124` and `test123`.
 *
 * @param request DescribeMonitorGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitorGroupsResponse
 */
DescribeMonitorGroupsResponse Client::describeMonitorGroupsWithOptions(const DescribeMonitorGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDynamicTagRuleId()) {
    query["DynamicTagRuleId"] = request.getDynamicTagRuleId();
  }

  if (!!request.hasGroupFounderTagKey()) {
    query["GroupFounderTagKey"] = request.getGroupFounderTagKey();
  }

  if (!!request.hasGroupFounderTagValue()) {
    query["GroupFounderTagValue"] = request.getGroupFounderTagValue();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasIncludeTemplateHistory()) {
    query["IncludeTemplateHistory"] = request.getIncludeTemplateHistory();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSelectContactGroups()) {
    query["SelectContactGroups"] = request.getSelectContactGroups();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasTypes()) {
    query["Types"] = request.getTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMonitorGroups"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitorGroupsResponse>();
}

/**
 * @summary You can call the DescribeMonitorGroups operation to query a list of application groups.
 *
 * @description This topic provides an example of how to query a list of application groups. The response shows that two application groups are returned: `testGroup124` and `test123`.
 *
 * @param request DescribeMonitorGroupsRequest
 * @return DescribeMonitorGroupsResponse
 */
DescribeMonitorGroupsResponse Client::describeMonitorGroups(const DescribeMonitorGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitorGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the resource quotas of CloudMonitor.
 *
 * @param request DescribeMonitorResourceQuotaAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitorResourceQuotaAttributeResponse
 */
DescribeMonitorResourceQuotaAttributeResponse Client::describeMonitorResourceQuotaAttributeWithOptions(const DescribeMonitorResourceQuotaAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasShowUsed()) {
    query["ShowUsed"] = request.getShowUsed();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMonitorResourceQuotaAttribute"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitorResourceQuotaAttributeResponse>();
}

/**
 * @summary Queries the resource quotas of CloudMonitor.
 *
 * @param request DescribeMonitorResourceQuotaAttributeRequest
 * @return DescribeMonitorResourceQuotaAttributeResponse
 */
DescribeMonitorResourceQuotaAttributeResponse Client::describeMonitorResourceQuotaAttribute(const DescribeMonitorResourceQuotaAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitorResourceQuotaAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the AccessKey ID and AccessKey secret that are required to install the CloudMonitor agent on a third-party host.
 *
 * @param request DescribeMonitoringAgentAccessKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitoringAgentAccessKeyResponse
 */
DescribeMonitoringAgentAccessKeyResponse Client::describeMonitoringAgentAccessKeyWithOptions(const DescribeMonitoringAgentAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeMonitoringAgentAccessKey"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitoringAgentAccessKeyResponse>();
}

/**
 * @summary Queries the AccessKey ID and AccessKey secret that are required to install the CloudMonitor agent on a third-party host.
 *
 * @param request DescribeMonitoringAgentAccessKeyRequest
 * @return DescribeMonitoringAgentAccessKeyResponse
 */
DescribeMonitoringAgentAccessKeyResponse Client::describeMonitoringAgentAccessKey(const DescribeMonitoringAgentAccessKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitoringAgentAccessKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of the CloudMonitor agent.
 *
 * @param request DescribeMonitoringAgentConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitoringAgentConfigResponse
 */
DescribeMonitoringAgentConfigResponse Client::describeMonitoringAgentConfigWithOptions(const DescribeMonitoringAgentConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeMonitoringAgentConfig"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitoringAgentConfigResponse>();
}

/**
 * @summary Queries the configurations of the CloudMonitor agent.
 *
 * @param request DescribeMonitoringAgentConfigRequest
 * @return DescribeMonitoringAgentConfigResponse
 */
DescribeMonitoringAgentConfigResponse Client::describeMonitoringAgentConfig(const DescribeMonitoringAgentConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitoringAgentConfigWithOptions(request, runtime);
}

/**
 * @summary You can call the DescribeMonitoringAgentHosts operation to query a list of all hosts, regardless of whether the CloudMonitor agent is installed.
 *
 * @param request DescribeMonitoringAgentHostsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitoringAgentHostsResponse
 */
DescribeMonitoringAgentHostsResponse Client::describeMonitoringAgentHostsWithOptions(const DescribeMonitoringAgentHostsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunHost()) {
    query["AliyunHost"] = request.getAliyunHost();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasInstanceRegionId()) {
    query["InstanceRegionId"] = request.getInstanceRegionId();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.getKeyWord();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSerialNumbers()) {
    query["SerialNumbers"] = request.getSerialNumbers();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasSysomStatus()) {
    query["SysomStatus"] = request.getSysomStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMonitoringAgentHosts"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitoringAgentHostsResponse>();
}

/**
 * @summary You can call the DescribeMonitoringAgentHosts operation to query a list of all hosts, regardless of whether the CloudMonitor agent is installed.
 *
 * @param request DescribeMonitoringAgentHostsRequest
 * @return DescribeMonitoringAgentHostsResponse
 */
DescribeMonitoringAgentHostsResponse Client::describeMonitoringAgentHosts(const DescribeMonitoringAgentHostsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitoringAgentHostsWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeMonitoringAgentProcesses operation to query the list of processes for a specified resource.
 *
 * @description > Before you call this operation, you must call the CreateMonitoringAgentProcess operation to create a process monitoring task. For more information, see [CreateMonitoringAgentProcess](https://help.aliyun.com/document_detail/2513212.html).
 * This topic provides an example of how to query the list of processes for the resource i-hp3hl3cx1pbahzy8\\*\\*\\*\\*. The response shows the details of the Nginx and HTTP processes.
 *
 * @param request DescribeMonitoringAgentProcessesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitoringAgentProcessesResponse
 */
DescribeMonitoringAgentProcessesResponse Client::describeMonitoringAgentProcessesWithOptions(const DescribeMonitoringAgentProcessesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMonitoringAgentProcesses"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitoringAgentProcessesResponse>();
}

/**
 * @summary Call the DescribeMonitoringAgentProcesses operation to query the list of processes for a specified resource.
 *
 * @description > Before you call this operation, you must call the CreateMonitoringAgentProcess operation to create a process monitoring task. For more information, see [CreateMonitoringAgentProcess](https://help.aliyun.com/document_detail/2513212.html).
 * This topic provides an example of how to query the list of processes for the resource i-hp3hl3cx1pbahzy8\\*\\*\\*\\*. The response shows the details of the Nginx and HTTP processes.
 *
 * @param request DescribeMonitoringAgentProcessesRequest
 * @return DescribeMonitoringAgentProcessesResponse
 */
DescribeMonitoringAgentProcessesResponse Client::describeMonitoringAgentProcesses(const DescribeMonitoringAgentProcessesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitoringAgentProcessesWithOptions(request, runtime);
}

/**
 * @summary Queries the running status of the CloudMonitor agent by calling the DescribeMonitoringAgentStatuses operation.
 *
 * @description This topic describes how to query the status of the CloudMonitor agent that is installed on the `i-hp3dunahluwajv6f****` instance. The result indicates that the CloudMonitor agent is in the `running` state.
 *
 * @param request DescribeMonitoringAgentStatusesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitoringAgentStatusesResponse
 */
DescribeMonitoringAgentStatusesResponse Client::describeMonitoringAgentStatusesWithOptions(const DescribeMonitoringAgentStatusesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostAvailabilityTaskId()) {
    query["HostAvailabilityTaskId"] = request.getHostAvailabilityTaskId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMonitoringAgentStatuses"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitoringAgentStatusesResponse>();
}

/**
 * @summary Queries the running status of the CloudMonitor agent by calling the DescribeMonitoringAgentStatuses operation.
 *
 * @description This topic describes how to query the status of the CloudMonitor agent that is installed on the `i-hp3dunahluwajv6f****` instance. The result indicates that the CloudMonitor agent is in the `running` state.
 *
 * @param request DescribeMonitoringAgentStatusesRequest
 * @return DescribeMonitoringAgentStatusesResponse
 */
DescribeMonitoringAgentStatusesResponse Client::describeMonitoringAgentStatuses(const DescribeMonitoringAgentStatusesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitoringAgentStatusesWithOptions(request, runtime);
}

/**
 * @summary Queries the global configurations of the CloudMonitor agent.
 *
 * @param request DescribeMonitoringConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitoringConfigResponse
 */
DescribeMonitoringConfigResponse Client::describeMonitoringConfigWithOptions(const DescribeMonitoringConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeMonitoringConfig"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitoringConfigResponse>();
}

/**
 * @summary Queries the global configurations of the CloudMonitor agent.
 *
 * @param request DescribeMonitoringConfigRequest
 * @return DescribeMonitoringConfigResponse
 */
DescribeMonitoringConfigResponse Client::describeMonitoringConfig(const DescribeMonitoringConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitoringConfigWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeProductResourceTagKeyList operation to query all tag keys of cloud resources in a specified region.
 *
 * @param request DescribeProductResourceTagKeyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductResourceTagKeyListResponse
 */
DescribeProductResourceTagKeyListResponse Client::describeProductResourceTagKeyListWithOptions(const DescribeProductResourceTagKeyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProductResourceTagKeyList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProductResourceTagKeyListResponse>();
}

/**
 * @summary Call the DescribeProductResourceTagKeyList operation to query all tag keys of cloud resources in a specified region.
 *
 * @param request DescribeProductResourceTagKeyListRequest
 * @return DescribeProductResourceTagKeyListResponse
 */
DescribeProductResourceTagKeyListResponse Client::describeProductResourceTagKeyList(const DescribeProductResourceTagKeyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProductResourceTagKeyListWithOptions(request, runtime);
}

/**
 * @summary Queries the cloud services for which the initiative alert feature is enabled.
 *
 * @param request DescribeProductsOfActiveMetricRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductsOfActiveMetricRuleResponse
 */
DescribeProductsOfActiveMetricRuleResponse Client::describeProductsOfActiveMetricRuleWithOptions(const DescribeProductsOfActiveMetricRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeProductsOfActiveMetricRule"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProductsOfActiveMetricRuleResponse>();
}

/**
 * @summary Queries the cloud services for which the initiative alert feature is enabled.
 *
 * @param request DescribeProductsOfActiveMetricRuleRequest
 * @return DescribeProductsOfActiveMetricRuleResponse
 */
DescribeProductsOfActiveMetricRuleResponse Client::describeProductsOfActiveMetricRule(const DescribeProductsOfActiveMetricRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProductsOfActiveMetricRuleWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeProjectMeta operation to query the list of cloud services that support time series monitoring metrics in CloudMonitor.
 *
 * @description Obtains the information about the connected cloud services, including the description, namespace, and tags of each service.
 *
 * @param request DescribeProjectMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProjectMetaResponse
 */
DescribeProjectMetaResponse Client::describeProjectMetaWithOptions(const DescribeProjectMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProjectMeta"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProjectMetaResponse>();
}

/**
 * @summary Calls the DescribeProjectMeta operation to query the list of cloud services that support time series monitoring metrics in CloudMonitor.
 *
 * @description Obtains the information about the connected cloud services, including the description, namespace, and tags of each service.
 *
 * @param request DescribeProjectMetaRequest
 * @return DescribeProjectMetaResponse
 */
DescribeProjectMetaResponse Client::describeProjectMeta(const DescribeProjectMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProjectMetaWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a site monitoring task by calling the DescribeSiteMonitorAttribute operation.
 *
 * @description This topic provides an example on how to query the details of the site monitoring task `cc641dff-c19d-45f3-ad0a-818a0c4f****`. The response shows that the task name is `test123`, the monitored address is `https://aliyun.com`, and the carrier is `Alibaba`.
 *
 * @param request DescribeSiteMonitorAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteMonitorAttributeResponse
 */
DescribeSiteMonitorAttributeResponse Client::describeSiteMonitorAttributeWithOptions(const DescribeSiteMonitorAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncludeAlert()) {
    query["IncludeAlert"] = request.getIncludeAlert();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSiteMonitorAttribute"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSiteMonitorAttributeResponse>();
}

/**
 * @summary Queries the details of a site monitoring task by calling the DescribeSiteMonitorAttribute operation.
 *
 * @description This topic provides an example on how to query the details of the site monitoring task `cc641dff-c19d-45f3-ad0a-818a0c4f****`. The response shows that the task name is `test123`, the monitored address is `https://aliyun.com`, and the carrier is `Alibaba`.
 *
 * @param request DescribeSiteMonitorAttributeRequest
 * @return DescribeSiteMonitorAttributeResponse
 */
DescribeSiteMonitorAttributeResponse Client::describeSiteMonitorAttribute(const DescribeSiteMonitorAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteMonitorAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the fine-grained monitoring data of a site monitoring task.
 *
 * @param request DescribeSiteMonitorDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteMonitorDataResponse
 */
DescribeSiteMonitorDataResponse Client::describeSiteMonitorDataWithOptions(const DescribeSiteMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.getLength();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSiteMonitorData"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSiteMonitorDataResponse>();
}

/**
 * @summary Queries the fine-grained monitoring data of a site monitoring task.
 *
 * @param request DescribeSiteMonitorDataRequest
 * @return DescribeSiteMonitorDataResponse
 */
DescribeSiteMonitorDataResponse Client::describeSiteMonitorData(const DescribeSiteMonitorDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteMonitorDataWithOptions(request, runtime);
}

/**
 * @summary Queries the details of all carrier detection points by calling the DescribeSiteMonitorISPCityList operation.
 *
 * @description 本文将提供一个示例，查询运营商“联通”在“贵阳市”的探测点详情。
 *
 * @param request DescribeSiteMonitorISPCityListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteMonitorISPCityListResponse
 */
DescribeSiteMonitorISPCityListResponse Client::describeSiteMonitorISPCityListWithOptions(const DescribeSiteMonitorISPCityListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasIPV4()) {
    query["IPV4"] = request.getIPV4();
  }

  if (!!request.hasIPV6()) {
    query["IPV6"] = request.getIPV6();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasViewAll()) {
    query["ViewAll"] = request.getViewAll();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSiteMonitorISPCityList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSiteMonitorISPCityListResponse>();
}

/**
 * @summary Queries the details of all carrier detection points by calling the DescribeSiteMonitorISPCityList operation.
 *
 * @description 本文将提供一个示例，查询运营商“联通”在“贵阳市”的探测点详情。
 *
 * @param request DescribeSiteMonitorISPCityListRequest
 * @return DescribeSiteMonitorISPCityListResponse
 */
DescribeSiteMonitorISPCityListResponse Client::describeSiteMonitorISPCityList(const DescribeSiteMonitorISPCityListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteMonitorISPCityListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of site monitoring tasks by calling the DescribeSiteMonitorList operation.
 *
 * @description This topic provides an example of how to query the list of site monitoring tasks for the current account. The response shows that the current account has one site monitoring task named `HanZhou_ECS2`.
 *
 * @param request DescribeSiteMonitorListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteMonitorListResponse
 */
DescribeSiteMonitorListResponse Client::describeSiteMonitorListWithOptions(const DescribeSiteMonitorListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentGroup()) {
    query["AgentGroup"] = request.getAgentGroup();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskState()) {
    query["TaskState"] = request.getTaskState();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSiteMonitorList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSiteMonitorListResponse>();
}

/**
 * @summary Queries the list of site monitoring tasks by calling the DescribeSiteMonitorList operation.
 *
 * @description This topic provides an example of how to query the list of site monitoring tasks for the current account. The response shows that the current account has one site monitoring task named `HanZhou_ECS2`.
 *
 * @param request DescribeSiteMonitorListRequest
 * @return DescribeSiteMonitorListResponse
 */
DescribeSiteMonitorListResponse Client::describeSiteMonitorList(const DescribeSiteMonitorListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteMonitorListWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeSiteMonitorLog operation to query the detection logs for a one-time detection task.
 *
 * @description Only Alibaba Cloud accounts with Network Analysis and Monitoring activated can create one-time detection tasks.
 * This topic provides an example of how to query the detection logs for the one-time detection task `afa5c3ce-f944-4363-9edb-ce919a29****`.
 *
 * @param request DescribeSiteMonitorLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteMonitorLogResponse
 */
DescribeSiteMonitorLogResponse Client::describeSiteMonitorLogWithOptions(const DescribeSiteMonitorLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrowser()) {
    query["Browser"] = request.getBrowser();
  }

  if (!!request.hasBrowserInfo()) {
    query["BrowserInfo"] = request.getBrowserInfo();
  }

  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasDevice()) {
    query["Device"] = request.getDevice();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.getLength();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.getTaskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSiteMonitorLog"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSiteMonitorLogResponse>();
}

/**
 * @summary Call the DescribeSiteMonitorLog operation to query the detection logs for a one-time detection task.
 *
 * @description Only Alibaba Cloud accounts with Network Analysis and Monitoring activated can create one-time detection tasks.
 * This topic provides an example of how to query the detection logs for the one-time detection task `afa5c3ce-f944-4363-9edb-ce919a29****`.
 *
 * @param request DescribeSiteMonitorLogRequest
 * @return DescribeSiteMonitorLogResponse
 */
DescribeSiteMonitorLogResponse Client::describeSiteMonitorLog(const DescribeSiteMonitorLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteMonitorLogWithOptions(request, runtime);
}

/**
 * @summary Calls the DescribeSiteMonitorQuota operation to query the quota and version of site monitoring.
 *
 * @param request DescribeSiteMonitorQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteMonitorQuotaResponse
 */
DescribeSiteMonitorQuotaResponse Client::describeSiteMonitorQuotaWithOptions(const DescribeSiteMonitorQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeSiteMonitorQuota"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSiteMonitorQuotaResponse>();
}

/**
 * @summary Calls the DescribeSiteMonitorQuota operation to query the quota and version of site monitoring.
 *
 * @param request DescribeSiteMonitorQuotaRequest
 * @return DescribeSiteMonitorQuotaResponse
 */
DescribeSiteMonitorQuotaResponse Client::describeSiteMonitorQuota(const DescribeSiteMonitorQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteMonitorQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the average statistics of a specified metric in a specified site monitoring task by calling the DescribeSiteMonitorStatistics operation.
 *
 * @description This topic provides an example on how to query the average statistics of the `Availability` metric in the site monitoring task whose ID is `ef4cdc8b-9dc7-43e7-810e-f950e56c****`. The returned result shows that the availability is `100`.
 *
 * @param request DescribeSiteMonitorStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteMonitorStatisticsResponse
 */
DescribeSiteMonitorStatisticsResponse Client::describeSiteMonitorStatisticsWithOptions(const DescribeSiteMonitorStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTimeRange()) {
    query["TimeRange"] = request.getTimeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSiteMonitorStatistics"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSiteMonitorStatisticsResponse>();
}

/**
 * @summary Queries the average statistics of a specified metric in a specified site monitoring task by calling the DescribeSiteMonitorStatistics operation.
 *
 * @description This topic provides an example on how to query the average statistics of the `Availability` metric in the site monitoring task whose ID is `ef4cdc8b-9dc7-43e7-810e-f950e56c****`. The returned result shows that the availability is `100`.
 *
 * @param request DescribeSiteMonitorStatisticsRequest
 * @return DescribeSiteMonitorStatisticsResponse
 */
DescribeSiteMonitorStatisticsResponse Client::describeSiteMonitorStatistics(const DescribeSiteMonitorStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteMonitorStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of detection points.
 *
 * @description This topic provides an example of how to call the DescribeSyntheticProbeList operation to query detection point details for the China Unicom carrier in Beijing.
 *
 * @param request DescribeSyntheticProbeListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSyntheticProbeListResponse
 */
DescribeSyntheticProbeListResponse Client::describeSyntheticProbeListWithOptions(const DescribeSyntheticProbeListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasIdcProbe()) {
    query["IdcProbe"] = request.getIdcProbe();
  }

  if (!!request.hasIpv4()) {
    query["Ipv4"] = request.getIpv4();
  }

  if (!!request.hasIpv6()) {
    query["Ipv6"] = request.getIpv6();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasLmProbe()) {
    query["LmProbe"] = request.getLmProbe();
  }

  if (!!request.hasMbProbe()) {
    query["MbProbe"] = request.getMbProbe();
  }

  if (!!request.hasViewAll()) {
    query["ViewAll"] = request.getViewAll();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSyntheticProbeList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSyntheticProbeListResponse>();
}

/**
 * @summary Queries a list of detection points.
 *
 * @description This topic provides an example of how to call the DescribeSyntheticProbeList operation to query detection point details for the China Unicom carrier in Beijing.
 *
 * @param request DescribeSyntheticProbeListRequest
 * @return DescribeSyntheticProbeListResponse
 */
DescribeSyntheticProbeListResponse Client::describeSyntheticProbeList(const DescribeSyntheticProbeListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSyntheticProbeListWithOptions(request, runtime);
}

/**
 * @summary Queries a system event.
 *
 * @param request DescribeSystemEventAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSystemEventAttributeResponse
 */
DescribeSystemEventAttributeResponse Client::describeSystemEventAttributeWithOptions(const DescribeSystemEventAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasSearchKeywords()) {
    query["SearchKeywords"] = request.getSearchKeywords();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSystemEventAttribute"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSystemEventAttributeResponse>();
}

/**
 * @summary Queries a system event.
 *
 * @param request DescribeSystemEventAttributeRequest
 * @return DescribeSystemEventAttributeResponse
 */
DescribeSystemEventAttributeResponse Client::describeSystemEventAttribute(const DescribeSystemEventAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSystemEventAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the number of events that occurred for each Alibaba Cloud service under the current account.
 *
 * @description ### Background information
 * You can call [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html) to obtain the Alibaba Cloud services and their system events supported by CloudMonitor.
 * ### Operation description
 * This topic provides an example of how to query the number of events that occurred for Elastic Compute Service (`ECS`) under the current account. The response shows that a total of 3 events occurred.
 *
 * @param request DescribeSystemEventCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSystemEventCountResponse
 */
DescribeSystemEventCountResponse Client::describeSystemEventCountWithOptions(const DescribeSystemEventCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasSearchKeywords()) {
    query["SearchKeywords"] = request.getSearchKeywords();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSystemEventCount"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSystemEventCountResponse>();
}

/**
 * @summary Queries the number of events that occurred for each Alibaba Cloud service under the current account.
 *
 * @description ### Background information
 * You can call [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html) to obtain the Alibaba Cloud services and their system events supported by CloudMonitor.
 * ### Operation description
 * This topic provides an example of how to query the number of events that occurred for Elastic Compute Service (`ECS`) under the current account. The response shows that a total of 3 events occurred.
 *
 * @param request DescribeSystemEventCountRequest
 * @return DescribeSystemEventCountResponse
 */
DescribeSystemEventCountResponse Client::describeSystemEventCount(const DescribeSystemEventCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSystemEventCountWithOptions(request, runtime);
}

/**
 * @summary Queries the number of times a system event occurred during each interval within a period of time.
 *
 * @param request DescribeSystemEventHistogramRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSystemEventHistogramResponse
 */
DescribeSystemEventHistogramResponse Client::describeSystemEventHistogramWithOptions(const DescribeSystemEventHistogramRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasSearchKeywords()) {
    query["SearchKeywords"] = request.getSearchKeywords();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSystemEventHistogram"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSystemEventHistogramResponse>();
}

/**
 * @summary Queries the number of times a system event occurred during each interval within a period of time.
 *
 * @param request DescribeSystemEventHistogramRequest
 * @return DescribeSystemEventHistogramResponse
 */
DescribeSystemEventHistogramResponse Client::describeSystemEventHistogram(const DescribeSystemEventHistogramRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSystemEventHistogramWithOptions(request, runtime);
}

/**
 * @summary Queries the meta information of system events by calling the DescribeSystemEventMetaList operation.
 *
 * @param request DescribeSystemEventMetaListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSystemEventMetaListResponse
 */
DescribeSystemEventMetaListResponse Client::describeSystemEventMetaListWithOptions(const DescribeSystemEventMetaListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeSystemEventMetaList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSystemEventMetaListResponse>();
}

/**
 * @summary Queries the meta information of system events by calling the DescribeSystemEventMetaList operation.
 *
 * @param request DescribeSystemEventMetaListRequest
 * @return DescribeSystemEventMetaListResponse
 */
DescribeSystemEventMetaListResponse Client::describeSystemEventMetaList(const DescribeSystemEventMetaListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSystemEventMetaListWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tag keys by calling the DescribeTagKeyList operation.
 *
 * @param request DescribeTagKeyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagKeyListResponse
 */
DescribeTagKeyListResponse Client::describeTagKeyListWithOptions(const DescribeTagKeyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagKeyList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagKeyListResponse>();
}

/**
 * @summary Queries a list of tag keys by calling the DescribeTagKeyList operation.
 *
 * @param request DescribeTagKeyListRequest
 * @return DescribeTagKeyListResponse
 */
DescribeTagKeyListResponse Client::describeTagKeyList(const DescribeTagKeyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagKeyListWithOptions(request, runtime);
}

/**
 * @summary Queries the tag values for a specified tag key.
 *
 * @param request DescribeTagValueListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagValueListResponse
 */
DescribeTagValueListResponse Client::describeTagValueListWithOptions(const DescribeTagValueListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagValueList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagValueListResponse>();
}

/**
 * @summary Queries the tag values for a specified tag key.
 *
 * @param request DescribeTagValueListRequest
 * @return DescribeTagValueListResponse
 */
DescribeTagValueListResponse Client::describeTagValueList(const DescribeTagValueListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagValueListWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeUnhealthyHostAvailability operation to query a list of unhealthy servers.
 *
 * @param request DescribeUnhealthyHostAvailabilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUnhealthyHostAvailabilityResponse
 */
DescribeUnhealthyHostAvailabilityResponse Client::describeUnhealthyHostAvailabilityWithOptions(const DescribeUnhealthyHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUnhealthyHostAvailability"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUnhealthyHostAvailabilityResponse>();
}

/**
 * @summary Call the DescribeUnhealthyHostAvailability operation to query a list of unhealthy servers.
 *
 * @param request DescribeUnhealthyHostAvailabilityRequest
 * @return DescribeUnhealthyHostAvailabilityResponse
 */
DescribeUnhealthyHostAvailabilityResponse Client::describeUnhealthyHostAvailability(const DescribeUnhealthyHostAvailabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUnhealthyHostAvailabilityWithOptions(request, runtime);
}

/**
 * @summary Disables the initiative alert feature for a cloud service.
 *
 * @param request DisableActiveMetricRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableActiveMetricRuleResponse
 */
DisableActiveMetricRuleResponse Client::disableActiveMetricRuleWithOptions(const DisableActiveMetricRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableActiveMetricRule"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableActiveMetricRuleResponse>();
}

/**
 * @summary Disables the initiative alert feature for a cloud service.
 *
 * @param request DisableActiveMetricRuleRequest
 * @return DisableActiveMetricRuleResponse
 */
DisableActiveMetricRuleResponse Client::disableActiveMetricRule(const DisableActiveMetricRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableActiveMetricRuleWithOptions(request, runtime);
}

/**
 * @summary Disables one or more event-triggered alert rules.
 *
 * @param request DisableEventRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableEventRulesResponse
 */
DisableEventRulesResponse Client::disableEventRulesWithOptions(const DisableEventRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleNames()) {
    query["RuleNames"] = request.getRuleNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableEventRules"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableEventRulesResponse>();
}

/**
 * @summary Disables one or more event-triggered alert rules.
 *
 * @param request DisableEventRulesRequest
 * @return DisableEventRulesResponse
 */
DisableEventRulesResponse Client::disableEventRules(const DisableEventRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableEventRulesWithOptions(request, runtime);
}

/**
 * @summary Disables one or more specified availability monitoring jobs.
 *
 * @param request DisableHostAvailabilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableHostAvailabilityResponse
 */
DisableHostAvailabilityResponse Client::disableHostAvailabilityWithOptions(const DisableHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableHostAvailability"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableHostAvailabilityResponse>();
}

/**
 * @summary Disables one or more specified availability monitoring jobs.
 *
 * @param request DisableHostAvailabilityRequest
 * @return DisableHostAvailabilityResponse
 */
DisableHostAvailabilityResponse Client::disableHostAvailability(const DisableHostAvailabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableHostAvailabilityWithOptions(request, runtime);
}

/**
 * @summary You can call the DisableMetricRules operation to disable alert rules.
 *
 * @param request DisableMetricRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableMetricRulesResponse
 */
DisableMetricRulesResponse Client::disableMetricRulesWithOptions(const DisableMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableMetricRules"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableMetricRulesResponse>();
}

/**
 * @summary You can call the DisableMetricRules operation to disable alert rules.
 *
 * @param request DisableMetricRulesRequest
 * @return DisableMetricRulesResponse
 */
DisableMetricRulesResponse Client::disableMetricRules(const DisableMetricRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableMetricRulesWithOptions(request, runtime);
}

/**
 * @summary Disables one or more site monitoring tasks by calling the DisableSiteMonitors operation.
 *
 * @param request DisableSiteMonitorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSiteMonitorsResponse
 */
DisableSiteMonitorsResponse Client::disableSiteMonitorsWithOptions(const DisableSiteMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.getTaskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableSiteMonitors"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableSiteMonitorsResponse>();
}

/**
 * @summary Disables one or more site monitoring tasks by calling the DisableSiteMonitors operation.
 *
 * @param request DisableSiteMonitorsRequest
 * @return DisableSiteMonitorsResponse
 */
DisableSiteMonitorsResponse Client::disableSiteMonitors(const DisableSiteMonitorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSiteMonitorsWithOptions(request, runtime);
}

/**
 * @summary Enables the initiative alert feature for a cloud service.
 *
 * @param request EnableActiveMetricRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableActiveMetricRuleResponse
 */
EnableActiveMetricRuleResponse Client::enableActiveMetricRuleWithOptions(const EnableActiveMetricRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableActiveMetricRule"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableActiveMetricRuleResponse>();
}

/**
 * @summary Enables the initiative alert feature for a cloud service.
 *
 * @param request EnableActiveMetricRuleRequest
 * @return EnableActiveMetricRuleResponse
 */
EnableActiveMetricRuleResponse Client::enableActiveMetricRule(const EnableActiveMetricRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableActiveMetricRuleWithOptions(request, runtime);
}

/**
 * @summary The EnableEventRules operation enables one or more event rules.
 *
 * @param request EnableEventRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableEventRulesResponse
 */
EnableEventRulesResponse Client::enableEventRulesWithOptions(const EnableEventRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleNames()) {
    query["RuleNames"] = request.getRuleNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableEventRules"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableEventRulesResponse>();
}

/**
 * @summary The EnableEventRules operation enables one or more event rules.
 *
 * @param request EnableEventRulesRequest
 * @return EnableEventRulesResponse
 */
EnableEventRulesResponse Client::enableEventRules(const EnableEventRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableEventRulesWithOptions(request, runtime);
}

/**
 * @summary Enables a specified availability monitoring task.
 *
 * @param request EnableHostAvailabilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableHostAvailabilityResponse
 */
EnableHostAvailabilityResponse Client::enableHostAvailabilityWithOptions(const EnableHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableHostAvailability"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableHostAvailabilityResponse>();
}

/**
 * @summary Enables a specified availability monitoring task.
 *
 * @param request EnableHostAvailabilityRequest
 * @return EnableHostAvailabilityResponse
 */
EnableHostAvailabilityResponse Client::enableHostAvailability(const EnableHostAvailabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableHostAvailabilityWithOptions(request, runtime);
}

/**
 * @summary Enables or disables multiple blacklist policies at a time.
 *
 * @param request EnableMetricRuleBlackListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableMetricRuleBlackListResponse
 */
EnableMetricRuleBlackListResponse Client::enableMetricRuleBlackListWithOptions(const EnableMetricRuleBlackListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasIsEnable()) {
    query["IsEnable"] = request.getIsEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableMetricRuleBlackList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableMetricRuleBlackListResponse>();
}

/**
 * @summary Enables or disables multiple blacklist policies at a time.
 *
 * @param request EnableMetricRuleBlackListRequest
 * @return EnableMetricRuleBlackListResponse
 */
EnableMetricRuleBlackListResponse Client::enableMetricRuleBlackList(const EnableMetricRuleBlackListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableMetricRuleBlackListWithOptions(request, runtime);
}

/**
 * @summary Enables alert rules.
 *
 * @param request EnableMetricRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableMetricRulesResponse
 */
EnableMetricRulesResponse Client::enableMetricRulesWithOptions(const EnableMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableMetricRules"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableMetricRulesResponse>();
}

/**
 * @summary Enables alert rules.
 *
 * @param request EnableMetricRulesRequest
 * @return EnableMetricRulesResponse
 */
EnableMetricRulesResponse Client::enableMetricRules(const EnableMetricRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableMetricRulesWithOptions(request, runtime);
}

/**
 * @summary Enables site monitoring tasks.
 *
 * @param request EnableSiteMonitorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSiteMonitorsResponse
 */
EnableSiteMonitorsResponse Client::enableSiteMonitorsWithOptions(const EnableSiteMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.getTaskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableSiteMonitors"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableSiteMonitorsResponse>();
}

/**
 * @summary Enables site monitoring tasks.
 *
 * @param request EnableSiteMonitorsRequest
 * @return EnableSiteMonitorsResponse
 */
EnableSiteMonitorsResponse Client::enableSiteMonitors(const EnableSiteMonitorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSiteMonitorsWithOptions(request, runtime);
}

/**
 * @summary Call the InstallMonitoringAgent operation to install the CloudMonitor agent on specified Alibaba Cloud hosts.
 *
 * @description ## Prerequisites
 * Ensure that Cloud Assistant is installed on the Alibaba Cloud host. For more information, see [Cloud Assistant overview](https://help.aliyun.com/document_detail/64601.html).
 * ## Background information
 * This API applies only to Alibaba Cloud hosts, which are Elastic Compute Service (ECS) instances. The success rate for installing the CloudMonitor agent using this API is approximately 95%. If the installation fails, you must manually install the agent. For more information about how to install the CloudMonitor agent, see [Install and uninstall the C++ agent](https://help.aliyun.com/document_detail/183482.html).
 * ## Example
 * This example shows how to forcibly install the latest version of the CloudMonitor agent on the ECS instance `i-m5e0k0bexac8tykr****`.
 *
 * @param request InstallMonitoringAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallMonitoringAgentResponse
 */
InstallMonitoringAgentResponse Client::installMonitoringAgentWithOptions(const InstallMonitoringAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasInstallCommand()) {
    query["InstallCommand"] = request.getInstallCommand();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallMonitoringAgent"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallMonitoringAgentResponse>();
}

/**
 * @summary Call the InstallMonitoringAgent operation to install the CloudMonitor agent on specified Alibaba Cloud hosts.
 *
 * @description ## Prerequisites
 * Ensure that Cloud Assistant is installed on the Alibaba Cloud host. For more information, see [Cloud Assistant overview](https://help.aliyun.com/document_detail/64601.html).
 * ## Background information
 * This API applies only to Alibaba Cloud hosts, which are Elastic Compute Service (ECS) instances. The success rate for installing the CloudMonitor agent using this API is approximately 95%. If the installation fails, you must manually install the agent. For more information about how to install the CloudMonitor agent, see [Install and uninstall the C++ agent](https://help.aliyun.com/document_detail/183482.html).
 * ## Example
 * This example shows how to forcibly install the latest version of the CloudMonitor agent on the ECS instance `i-m5e0k0bexac8tykr****`.
 *
 * @param request InstallMonitoringAgentRequest
 * @return InstallMonitoringAgentResponse
 */
InstallMonitoringAgentResponse Client::installMonitoringAgent(const InstallMonitoringAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installMonitoringAgentWithOptions(request, runtime);
}

/**
 * @summary You can call the ModifyGroupMonitoringAgentProcess operation to modify the process monitoring settings for an application group.
 *
 * @param request ModifyGroupMonitoringAgentProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGroupMonitoringAgentProcessResponse
 */
ModifyGroupMonitoringAgentProcessResponse Client::modifyGroupMonitoringAgentProcessWithOptions(const ModifyGroupMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertConfig()) {
    query["AlertConfig"] = request.getAlertConfig();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMatchExpressFilterRelation()) {
    query["MatchExpressFilterRelation"] = request.getMatchExpressFilterRelation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyGroupMonitoringAgentProcess"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyGroupMonitoringAgentProcessResponse>();
}

/**
 * @summary You can call the ModifyGroupMonitoringAgentProcess operation to modify the process monitoring settings for an application group.
 *
 * @param request ModifyGroupMonitoringAgentProcessRequest
 * @return ModifyGroupMonitoringAgentProcessResponse
 */
ModifyGroupMonitoringAgentProcessResponse Client::modifyGroupMonitoringAgentProcess(const ModifyGroupMonitoringAgentProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGroupMonitoringAgentProcessWithOptions(request, runtime);
}

/**
 * @summary Modifies an availability monitoring task.
 *
 * @description This topic provides an example on how to change the name of an availability monitoring task named `12345` in an application group named `123456` to `task2`.
 *
 * @param request ModifyHostAvailabilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostAvailabilityResponse
 */
ModifyHostAvailabilityResponse Client::modifyHostAvailabilityWithOptions(const ModifyHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertConfigEscalationList()) {
    query["AlertConfigEscalationList"] = request.getAlertConfigEscalationList();
  }

  if (!!request.hasAlertConfigTargetList()) {
    query["AlertConfigTargetList"] = request.getAlertConfigTargetList();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceList()) {
    query["InstanceList"] = request.getInstanceList();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskScope()) {
    query["TaskScope"] = request.getTaskScope();
  }

  if (!!request.hasAlertConfig()) {
    query["AlertConfig"] = request.getAlertConfig();
  }

  if (!!request.hasTaskOption()) {
    query["TaskOption"] = request.getTaskOption();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHostAvailability"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostAvailabilityResponse>();
}

/**
 * @summary Modifies an availability monitoring task.
 *
 * @description This topic provides an example on how to change the name of an availability monitoring task named `12345` in an application group named `123456` to `task2`.
 *
 * @param request ModifyHostAvailabilityRequest
 * @return ModifyHostAvailabilityResponse
 */
ModifyHostAvailabilityResponse Client::modifyHostAvailability(const ModifyHostAvailabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHostAvailabilityWithOptions(request, runtime);
}

/**
 * @summary Calls the ModifyHostInfo operation to modify the display information of a non-Alibaba Cloud host.
 *
 * @description ****
 *
 * @param request ModifyHostInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHostInfoResponse
 */
ModifyHostInfoResponse Client::modifyHostInfoWithOptions(const ModifyHostInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostName()) {
    query["HostName"] = request.getHostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHostInfo"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHostInfoResponse>();
}

/**
 * @summary Calls the ModifyHostInfo operation to modify the display information of a non-Alibaba Cloud host.
 *
 * @description ****
 *
 * @param request ModifyHostInfoRequest
 * @return ModifyHostInfoResponse
 */
ModifyHostInfoResponse Client::modifyHostInfo(const ModifyHostInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHostInfoWithOptions(request, runtime);
}

/**
 * @summary Calls the ModifyHybridMonitorNamespace operation to modify a metric store.
 *
 * @description This topic provides an example on how to change the data storage duration of the metric store `aliyun` to `cms.s1.2xlarge`. The response shows that the metric store is modified.
 *
 * @param request ModifyHybridMonitorNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridMonitorNamespaceResponse
 */
ModifyHybridMonitorNamespaceResponse Client::modifyHybridMonitorNamespaceWithOptions(const ModifyHybridMonitorNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasSpec()) {
    query["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHybridMonitorNamespace"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHybridMonitorNamespaceResponse>();
}

/**
 * @summary Calls the ModifyHybridMonitorNamespace operation to modify a metric store.
 *
 * @description This topic provides an example on how to change the data storage duration of the metric store `aliyun` to `cms.s1.2xlarge`. The response shows that the metric store is modified.
 *
 * @param request ModifyHybridMonitorNamespaceRequest
 * @return ModifyHybridMonitorNamespaceResponse
 */
ModifyHybridMonitorNamespaceResponse Client::modifyHybridMonitorNamespace(const ModifyHybridMonitorNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridMonitorNamespaceWithOptions(request, runtime);
}

/**
 * @summary Modifies a Logstore group by calling the ModifyHybridMonitorSLSGroup operation.
 *
 * @description This topic provides an example on how to change the Logstore in the `aliyun-project` log project in the `ap-southeast-1` region of the Logstore group `Logstore_test` to `Logstore-aliyun-all`. The response shows that the Logstore group is modified.
 *
 * @param request ModifyHybridMonitorSLSGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridMonitorSLSGroupResponse
 */
ModifyHybridMonitorSLSGroupResponse Client::modifyHybridMonitorSLSGroupWithOptions(const ModifyHybridMonitorSLSGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSLSGroupConfig()) {
    query["SLSGroupConfig"] = request.getSLSGroupConfig();
  }

  if (!!request.hasSLSGroupDescription()) {
    query["SLSGroupDescription"] = request.getSLSGroupDescription();
  }

  if (!!request.hasSLSGroupName()) {
    query["SLSGroupName"] = request.getSLSGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHybridMonitorSLSGroup"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHybridMonitorSLSGroupResponse>();
}

/**
 * @summary Modifies a Logstore group by calling the ModifyHybridMonitorSLSGroup operation.
 *
 * @description This topic provides an example on how to change the Logstore in the `aliyun-project` log project in the `ap-southeast-1` region of the Logstore group `Logstore_test` to `Logstore-aliyun-all`. The response shows that the Logstore group is modified.
 *
 * @param request ModifyHybridMonitorSLSGroupRequest
 * @return ModifyHybridMonitorSLSGroupResponse
 */
ModifyHybridMonitorSLSGroupResponse Client::modifyHybridMonitorSLSGroup(const ModifyHybridMonitorSLSGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridMonitorSLSGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the metrics of a Simple Log Service (SLS) log monitoring task by calling the ModifyHybridMonitorTask operation.
 *
 * @description This topic provides an example on how to change the collection interval of the SLS log monitoring task `36****` to `15` seconds. The response shows that the metric is modified.
 *
 * @param request ModifyHybridMonitorTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridMonitorTaskResponse
 */
ModifyHybridMonitorTaskResponse Client::modifyHybridMonitorTaskWithOptions(const ModifyHybridMonitorTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttachLabels()) {
    query["AttachLabels"] = request.getAttachLabels();
  }

  if (!!request.hasCollectInterval()) {
    query["CollectInterval"] = request.getCollectInterval();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasSLSProcessConfig()) {
    query["SLSProcessConfig"] = request.getSLSProcessConfig();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHybridMonitorTask"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHybridMonitorTaskResponse>();
}

/**
 * @summary Modifies the metrics of a Simple Log Service (SLS) log monitoring task by calling the ModifyHybridMonitorTask operation.
 *
 * @description This topic provides an example on how to change the collection interval of the SLS log monitoring task `36****` to `15` seconds. The response shows that the metric is modified.
 *
 * @param request ModifyHybridMonitorTaskRequest
 * @return ModifyHybridMonitorTaskResponse
 */
ModifyHybridMonitorTaskResponse Client::modifyHybridMonitorTask(const ModifyHybridMonitorTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridMonitorTaskWithOptions(request, runtime);
}

/**
 * @summary Modifies a blacklist policy.
 *
 * @param request ModifyMetricRuleBlackListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMetricRuleBlackListResponse
 */
ModifyMetricRuleBlackListResponse Client::modifyMetricRuleBlackListWithOptions(const ModifyMetricRuleBlackListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasEnableEndTime()) {
    query["EnableEndTime"] = request.getEnableEndTime();
  }

  if (!!request.hasEnableStartTime()) {
    query["EnableStartTime"] = request.getEnableStartTime();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstances()) {
    query["Instances"] = request.getInstances();
  }

  if (!!request.hasMetrics()) {
    query["Metrics"] = request.getMetrics();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.getScopeType();
  }

  if (!!request.hasScopeValue()) {
    query["ScopeValue"] = request.getScopeValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMetricRuleBlackList"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMetricRuleBlackListResponse>();
}

/**
 * @summary Modifies a blacklist policy.
 *
 * @param request ModifyMetricRuleBlackListRequest
 * @return ModifyMetricRuleBlackListResponse
 */
ModifyMetricRuleBlackListResponse Client::modifyMetricRuleBlackList(const ModifyMetricRuleBlackListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMetricRuleBlackListWithOptions(request, runtime);
}

/**
 * @summary Modifies an alert template.
 *
 * @description This topic provides an example on how to modify an alert template whose version is `1` and ID is `123456`. The alert level is changed to `Critical`. The statistical method is changed to `Average`. The alert threshold comparator is changed to `GreaterThanOrEqualToThreshold`. The alert threshold is changed to `90`. The number of alert retries is changed to `3`. The response shows that the alert template is modified.
 *
 * @param request ModifyMetricRuleTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMetricRuleTemplateResponse
 */
ModifyMetricRuleTemplateResponse Client::modifyMetricRuleTemplateWithOptions(const ModifyMetricRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertTemplates()) {
    query["AlertTemplates"] = request.getAlertTemplates();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRestVersion()) {
    query["RestVersion"] = request.getRestVersion();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMetricRuleTemplate"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMetricRuleTemplateResponse>();
}

/**
 * @summary Modifies an alert template.
 *
 * @description This topic provides an example on how to modify an alert template whose version is `1` and ID is `123456`. The alert level is changed to `Critical`. The statistical method is changed to `Average`. The alert threshold comparator is changed to `GreaterThanOrEqualToThreshold`. The alert threshold is changed to `90`. The number of alert retries is changed to `3`. The response shows that the alert template is modified.
 *
 * @param request ModifyMetricRuleTemplateRequest
 * @return ModifyMetricRuleTemplateResponse
 */
ModifyMetricRuleTemplateResponse Client::modifyMetricRuleTemplate(const ModifyMetricRuleTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMetricRuleTemplateWithOptions(request, runtime);
}

/**
 * @summary You can call the ModifyMonitorGroup operation to modify an application group.
 *
 * @param request ModifyMonitorGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMonitorGroupResponse
 */
ModifyMonitorGroupResponse Client::modifyMonitorGroupWithOptions(const ModifyMonitorGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroups()) {
    query["ContactGroups"] = request.getContactGroups();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMonitorGroup"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMonitorGroupResponse>();
}

/**
 * @summary You can call the ModifyMonitorGroup operation to modify an application group.
 *
 * @param request ModifyMonitorGroupRequest
 * @return ModifyMonitorGroupResponse
 */
ModifyMonitorGroupResponse Client::modifyMonitorGroup(const ModifyMonitorGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMonitorGroupWithOptions(request, runtime);
}

/**
 * @summary The ModifyMonitorGroupInstances operation modifies the resources in an application group.
 *
 * @param request ModifyMonitorGroupInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMonitorGroupInstancesResponse
 */
ModifyMonitorGroupInstancesResponse Client::modifyMonitorGroupInstancesWithOptions(const ModifyMonitorGroupInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstances()) {
    query["Instances"] = request.getInstances();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMonitorGroupInstances"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMonitorGroupInstancesResponse>();
}

/**
 * @summary The ModifyMonitorGroupInstances operation modifies the resources in an application group.
 *
 * @param request ModifyMonitorGroupInstancesRequest
 * @return ModifyMonitorGroupInstancesResponse
 */
ModifyMonitorGroupInstancesResponse Client::modifyMonitorGroupInstances(const ModifyMonitorGroupInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMonitorGroupInstancesWithOptions(request, runtime);
}

/**
 * @summary Modifies a site monitoring task by calling the ModifySiteMonitor operation.
 *
 * @param request ModifySiteMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySiteMonitorResponse
 */
ModifySiteMonitorResponse Client::modifySiteMonitorWithOptions(const ModifySiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasAlertIds()) {
    query["AlertIds"] = request.getAlertIds();
  }

  if (!!request.hasCustomSchedule()) {
    query["CustomSchedule"] = request.getCustomSchedule();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIntervalUnit()) {
    query["IntervalUnit"] = request.getIntervalUnit();
  }

  if (!!request.hasIspCities()) {
    query["IspCities"] = request.getIspCities();
  }

  if (!!request.hasOptionsJson()) {
    query["OptionsJson"] = request.getOptionsJson();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySiteMonitor"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySiteMonitorResponse>();
}

/**
 * @summary Modifies a site monitoring task by calling the ModifySiteMonitor operation.
 *
 * @param request ModifySiteMonitorRequest
 * @return ModifySiteMonitorResponse
 */
ModifySiteMonitorResponse Client::modifySiteMonitor(const ModifySiteMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySiteMonitorWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies an alert contact by calling the PutContact operation.
 *
 * @param request PutContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutContactResponse
 */
PutContactResponse Client::putContactWithOptions(const PutContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasDescribe()) {
    query["Describe"] = request.getDescribe();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasChannels()) {
    query["Channels"] = request.getChannels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutContact"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutContactResponse>();
}

/**
 * @summary Creates or modifies an alert contact by calling the PutContact operation.
 *
 * @param request PutContactRequest
 * @return PutContactResponse
 */
PutContactResponse Client::putContact(const PutContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putContactWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies an alert contact group by calling the PutContactGroup operation.
 *
 * @param request PutContactGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutContactGroupResponse
 */
PutContactGroupResponse Client::putContactGroupWithOptions(const PutContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupName()) {
    query["ContactGroupName"] = request.getContactGroupName();
  }

  if (!!request.hasContactNames()) {
    query["ContactNames"] = request.getContactNames();
  }

  if (!!request.hasDescribe()) {
    query["Describe"] = request.getDescribe();
  }

  if (!!request.hasEnableSubscribed()) {
    query["EnableSubscribed"] = request.getEnableSubscribed();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutContactGroup"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutContactGroupResponse>();
}

/**
 * @summary Creates or modifies an alert contact group by calling the PutContactGroup operation.
 *
 * @param request PutContactGroupRequest
 * @return PutContactGroupResponse
 */
PutContactGroupResponse Client::putContactGroup(const PutContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putContactGroupWithOptions(request, runtime);
}

/**
 * @summary Reports custom events.
 *
 * @param request PutCustomEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutCustomEventResponse
 */
PutCustomEventResponse Client::putCustomEventWithOptions(const PutCustomEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventInfo()) {
    query["EventInfo"] = request.getEventInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutCustomEvent"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutCustomEventResponse>();
}

/**
 * @summary Reports custom events.
 *
 * @param request PutCustomEventRequest
 * @return PutCustomEventResponse
 */
PutCustomEventResponse Client::putCustomEvent(const PutCustomEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putCustomEventWithOptions(request, runtime);
}

/**
 * @summary Calls the PutCustomEventRule operation to create an alert rule for a custom event.
 *
 * @description Before you call this operation, you must call the PutCustomEvent operation to report the monitoring data of the custom event. For more information, see [PutCustomEvent](https://help.aliyun.com/document_detail/115012.html).
 *
 * @param request PutCustomEventRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutCustomEventRuleResponse
 */
PutCustomEventRuleResponse Client::putCustomEventRuleWithOptions(const PutCustomEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroups()) {
    query["ContactGroups"] = request.getContactGroups();
  }

  if (!!request.hasEffectiveInterval()) {
    query["EffectiveInterval"] = request.getEffectiveInterval();
  }

  if (!!request.hasEmailSubject()) {
    query["EmailSubject"] = request.getEmailSubject();
  }

  if (!!request.hasEventName()) {
    query["EventName"] = request.getEventName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  if (!!request.hasWebhook()) {
    query["Webhook"] = request.getWebhook();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutCustomEventRule"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutCustomEventRuleResponse>();
}

/**
 * @summary Calls the PutCustomEventRule operation to create an alert rule for a custom event.
 *
 * @description Before you call this operation, you must call the PutCustomEvent operation to report the monitoring data of the custom event. For more information, see [PutCustomEvent](https://help.aliyun.com/document_detail/115012.html).
 *
 * @param request PutCustomEventRuleRequest
 * @return PutCustomEventRuleResponse
 */
PutCustomEventRuleResponse Client::putCustomEventRule(const PutCustomEventRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putCustomEventRuleWithOptions(request, runtime);
}

/**
 * @summary Calls the PutCustomMetric operation to report custom monitoring data.
 *
 * @description > We recommend that you use the [PutHybridMonitorMetricData](https://help.aliyun.com/document_detail/383455.html) operation in Enterprise CloudMonitor.
 *
 * @param request PutCustomMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutCustomMetricResponse
 */
PutCustomMetricResponse Client::putCustomMetricWithOptions(const PutCustomMetricRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMetricList()) {
    query["MetricList"] = request.getMetricList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutCustomMetric"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutCustomMetricResponse>();
}

/**
 * @summary Calls the PutCustomMetric operation to report custom monitoring data.
 *
 * @description > We recommend that you use the [PutHybridMonitorMetricData](https://help.aliyun.com/document_detail/383455.html) operation in Enterprise CloudMonitor.
 *
 * @param request PutCustomMetricRequest
 * @return PutCustomMetricResponse
 */
PutCustomMetricResponse Client::putCustomMetric(const PutCustomMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putCustomMetricWithOptions(request, runtime);
}

/**
 * @summary Creates a custom monitoring alert rule by calling the PutCustomMetricRule operation.
 *
 * @description 调用本接口前，请先调用PutCustomMetric接口上报自定义监控数据，详情请参见 [PutCustomMetric](https://help.aliyun.com/document_detail/115004.html)。
 *
 * @param request PutCustomMetricRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutCustomMetricRuleResponse
 */
PutCustomMetricRuleResponse Client::putCustomMetricRuleWithOptions(const PutCustomMetricRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComparisonOperator()) {
    query["ComparisonOperator"] = request.getComparisonOperator();
  }

  if (!!request.hasContactGroups()) {
    query["ContactGroups"] = request.getContactGroups();
  }

  if (!!request.hasEffectiveInterval()) {
    query["EffectiveInterval"] = request.getEffectiveInterval();
  }

  if (!!request.hasEmailSubject()) {
    query["EmailSubject"] = request.getEmailSubject();
  }

  if (!!request.hasEvaluationCount()) {
    query["EvaluationCount"] = request.getEvaluationCount();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.getResources();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.getSilenceTime();
  }

  if (!!request.hasStatistics()) {
    query["Statistics"] = request.getStatistics();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  if (!!request.hasWebhook()) {
    query["Webhook"] = request.getWebhook();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutCustomMetricRule"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutCustomMetricRuleResponse>();
}

/**
 * @summary Creates a custom monitoring alert rule by calling the PutCustomMetricRule operation.
 *
 * @description 调用本接口前，请先调用PutCustomMetric接口上报自定义监控数据，详情请参见 [PutCustomMetric](https://help.aliyun.com/document_detail/115004.html)。
 *
 * @param request PutCustomMetricRuleRequest
 * @return PutCustomMetricRuleResponse
 */
PutCustomMetricRuleResponse Client::putCustomMetricRule(const PutCustomMetricRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putCustomMetricRuleWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies an event-based alert rule by calling the PutEventRule operation.
 *
 * @description If the Event-triggered Alert Rule name does not exist, a new alert rule is created. If the Event-triggered Alert Rule name already exists, the existing alert rule is modified.
 * This topic provides an example of how to create an event-based alert rule named `myRuleName` for the Alibaba Cloud service `ecs`.
 *
 * @param request PutEventRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutEventRuleResponse
 */
PutEventRuleResponse Client::putEventRuleWithOptions(const PutEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEventPattern()) {
    query["EventPattern"] = request.getEventPattern();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.getSilenceTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutEventRule"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutEventRuleResponse>();
}

/**
 * @summary Creates or modifies an event-based alert rule by calling the PutEventRule operation.
 *
 * @description If the Event-triggered Alert Rule name does not exist, a new alert rule is created. If the Event-triggered Alert Rule name already exists, the existing alert rule is modified.
 * This topic provides an example of how to create an event-based alert rule named `myRuleName` for the Alibaba Cloud service `ecs`.
 *
 * @param request PutEventRuleRequest
 * @return PutEventRuleResponse
 */
PutEventRuleResponse Client::putEventRule(const PutEventRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putEventRuleWithOptions(request, runtime);
}

/**
 * @summary Adds or modifies the notification channels of an event-triggered alert rule by calling the PutEventRuleTargets operation.
 *
 * @param request PutEventRuleTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutEventRuleTargetsResponse
 */
PutEventRuleTargetsResponse Client::putEventRuleTargetsWithOptions(const PutEventRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactParameters()) {
    query["ContactParameters"] = request.getContactParameters();
  }

  if (!!request.hasFcParameters()) {
    query["FcParameters"] = request.getFcParameters();
  }

  if (!!request.hasMnsParameters()) {
    query["MnsParameters"] = request.getMnsParameters();
  }

  if (!!request.hasOpenApiParameters()) {
    query["OpenApiParameters"] = request.getOpenApiParameters();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSlsParameters()) {
    query["SlsParameters"] = request.getSlsParameters();
  }

  if (!!request.hasWebhookParameters()) {
    query["WebhookParameters"] = request.getWebhookParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutEventRuleTargets"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutEventRuleTargetsResponse>();
}

/**
 * @summary Adds or modifies the notification channels of an event-triggered alert rule by calling the PutEventRuleTargets operation.
 *
 * @param request PutEventRuleTargetsRequest
 * @return PutEventRuleTargetsResponse
 */
PutEventRuleTargetsResponse Client::putEventRuleTargets(const PutEventRuleTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putEventRuleTargetsWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies a monitoring data export configuration by calling the PutExporterOutput operation.
 *
 * @description > Only Log Service (SLS) is supported. More products will be supported in the future.
 *
 * @param request PutExporterOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutExporterOutputResponse
 */
PutExporterOutputResponse Client::putExporterOutputWithOptions(const PutExporterOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigJson()) {
    query["ConfigJson"] = request.getConfigJson();
  }

  if (!!request.hasDesc()) {
    query["Desc"] = request.getDesc();
  }

  if (!!request.hasDestName()) {
    query["DestName"] = request.getDestName();
  }

  if (!!request.hasDestType()) {
    query["DestType"] = request.getDestType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutExporterOutput"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutExporterOutputResponse>();
}

/**
 * @summary Creates or modifies a monitoring data export configuration by calling the PutExporterOutput operation.
 *
 * @description > Only Log Service (SLS) is supported. More products will be supported in the future.
 *
 * @param request PutExporterOutputRequest
 * @return PutExporterOutputResponse
 */
PutExporterOutputResponse Client::putExporterOutput(const PutExporterOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putExporterOutputWithOptions(request, runtime);
}

/**
 * @summary Invokes the PutExporterRule operation to create or modify export rules.
 *
 * @param request PutExporterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutExporterRuleResponse
 */
PutExporterRuleResponse Client::putExporterRuleWithOptions(const PutExporterRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescribe()) {
    query["Describe"] = request.getDescribe();
  }

  if (!!request.hasDstNames()) {
    query["DstNames"] = request.getDstNames();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasTargetWindows()) {
    query["TargetWindows"] = request.getTargetWindows();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutExporterRule"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutExporterRuleResponse>();
}

/**
 * @summary Invokes the PutExporterRule operation to create or modify export rules.
 *
 * @param request PutExporterRuleRequest
 * @return PutExporterRuleResponse
 */
PutExporterRuleResponse Client::putExporterRule(const PutExporterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putExporterRuleWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies an alert rule in a specified application group.
 *
 * @description This topic provides an example on how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the application group `17285****`. The alert rule ID is `123456`, the alert rule name is `Rule_test`, the alert severity is `Critical`, the statistical method is `Average`, the comparison operator is `GreaterThanOrEqualToThreshold`, the threshold is `90`, and the retry count is `3`. The response shows that the alert rule is created. The alert rule ID is `123456`.
 *
 * @param request PutGroupMetricRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutGroupMetricRuleResponse
 */
PutGroupMetricRuleResponse Client::putGroupMetricRuleWithOptions(const PutGroupMetricRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasContactGroups()) {
    query["ContactGroups"] = request.getContactGroups();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEffectiveInterval()) {
    query["EffectiveInterval"] = request.getEffectiveInterval();
  }

  if (!!request.hasEmailSubject()) {
    query["EmailSubject"] = request.getEmailSubject();
  }

  if (!!request.hasExtraDimensionJson()) {
    query["ExtraDimensionJson"] = request.getExtraDimensionJson();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasNoDataPolicy()) {
    query["NoDataPolicy"] = request.getNoDataPolicy();
  }

  if (!!request.hasNoEffectiveInterval()) {
    query["NoEffectiveInterval"] = request.getNoEffectiveInterval();
  }

  if (!!request.hasOptions()) {
    query["Options"] = request.getOptions();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.getSilenceTime();
  }

  if (!!request.hasWebhook()) {
    query["Webhook"] = request.getWebhook();
  }

  if (!!request.hasEscalations()) {
    query["Escalations"] = request.getEscalations();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutGroupMetricRule"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutGroupMetricRuleResponse>();
}

/**
 * @summary Creates or modifies an alert rule in a specified application group.
 *
 * @description This topic provides an example on how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the application group `17285****`. The alert rule ID is `123456`, the alert rule name is `Rule_test`, the alert severity is `Critical`, the statistical method is `Average`, the comparison operator is `GreaterThanOrEqualToThreshold`, the threshold is `90`, and the retry count is `3`. The response shows that the alert rule is created. The alert rule ID is `123456`.
 *
 * @param request PutGroupMetricRuleRequest
 * @return PutGroupMetricRuleResponse
 */
PutGroupMetricRuleResponse Client::putGroupMetricRule(const PutGroupMetricRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putGroupMetricRuleWithOptions(request, runtime);
}

/**
 * @summary Reports the specified monitoring data to a specified metric namespace of Enterprise CloudMonitor by calling the PutHybridMonitorMetricData operation.
 *
 * @description ## Prerequisites
 * Make sure that you have activated Enterprise CloudMonitor. For more information, see [Activate Enterprise CloudMonitor](https://help.aliyun.com/document_detail/250773.html).
 * ## Limits
 * The size of the monitoring data that you can report at a time cannot exceed 1 MB.
 * ## Usage notes
 * This topic provides an example to show how to report the monitoring data of the `CPU_Usage` metric to the `default-aliyun` metric namespace of Enterprise CloudMonitor.
 *
 * @param request PutHybridMonitorMetricDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutHybridMonitorMetricDataResponse
 */
PutHybridMonitorMetricDataResponse Client::putHybridMonitorMetricDataWithOptions(const PutHybridMonitorMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMetricList()) {
    query["MetricList"] = request.getMetricList();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutHybridMonitorMetricData"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutHybridMonitorMetricDataResponse>();
}

/**
 * @summary Reports the specified monitoring data to a specified metric namespace of Enterprise CloudMonitor by calling the PutHybridMonitorMetricData operation.
 *
 * @description ## Prerequisites
 * Make sure that you have activated Enterprise CloudMonitor. For more information, see [Activate Enterprise CloudMonitor](https://help.aliyun.com/document_detail/250773.html).
 * ## Limits
 * The size of the monitoring data that you can report at a time cannot exceed 1 MB.
 * ## Usage notes
 * This topic provides an example to show how to report the monitoring data of the `CPU_Usage` metric to the `default-aliyun` metric namespace of Enterprise CloudMonitor.
 *
 * @param request PutHybridMonitorMetricDataRequest
 * @return PutHybridMonitorMetricDataResponse
 */
PutHybridMonitorMetricDataResponse Client::putHybridMonitorMetricData(const PutHybridMonitorMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putHybridMonitorMetricDataWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies a log monitoring metric by calling the PutLogMonitor operation.
 *
 * @description This topic provides an example of how to create a log monitoring metric named `cpu_total`. The response shows that the log monitoring metric is created. The log monitoring metric ID is `16****`.
 *
 * @param request PutLogMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutLogMonitorResponse
 */
PutLogMonitorResponse Client::putLogMonitorWithOptions(const PutLogMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregates()) {
    query["Aggregates"] = request.getAggregates();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupbys()) {
    query["Groupbys"] = request.getGroupbys();
  }

  if (!!request.hasLogId()) {
    query["LogId"] = request.getLogId();
  }

  if (!!request.hasMetricExpress()) {
    query["MetricExpress"] = request.getMetricExpress();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasSlsLogstore()) {
    query["SlsLogstore"] = request.getSlsLogstore();
  }

  if (!!request.hasSlsProject()) {
    query["SlsProject"] = request.getSlsProject();
  }

  if (!!request.hasSlsRegionId()) {
    query["SlsRegionId"] = request.getSlsRegionId();
  }

  if (!!request.hasTumblingwindows()) {
    query["Tumblingwindows"] = request.getTumblingwindows();
  }

  if (!!request.hasUnit()) {
    query["Unit"] = request.getUnit();
  }

  if (!!request.hasValueFilter()) {
    query["ValueFilter"] = request.getValueFilter();
  }

  if (!!request.hasValueFilterRelation()) {
    query["ValueFilterRelation"] = request.getValueFilterRelation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutLogMonitor"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutLogMonitorResponse>();
}

/**
 * @summary Creates or modifies a log monitoring metric by calling the PutLogMonitor operation.
 *
 * @description This topic provides an example of how to create a log monitoring metric named `cpu_total`. The response shows that the log monitoring metric is created. The log monitoring metric ID is `16****`.
 *
 * @param request PutLogMonitorRequest
 * @return PutLogMonitorResponse
 */
PutLogMonitorResponse Client::putLogMonitor(const PutLogMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putLogMonitorWithOptions(request, runtime);
}

/**
 * @summary Adds or modifies push channels for a specified alert rule by calling the PutMetricRuleTargets operation.
 *
 * @description ## Usage notes
 * This topic provides an example on how to associate the resource `acs:mns:ap-southeast-1:120886317861****:/queues/test/message` with the alert rule `ae06917_75a8c43178ab66****`. The alert trigger target ID is `1`. The response shows that the resource is associated.
 *
 * @param request PutMetricRuleTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutMetricRuleTargetsResponse
 */
PutMetricRuleTargetsResponse Client::putMetricRuleTargetsWithOptions(const PutMetricRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasTargets()) {
    query["Targets"] = request.getTargets();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutMetricRuleTargets"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutMetricRuleTargetsResponse>();
}

/**
 * @summary Adds or modifies push channels for a specified alert rule by calling the PutMetricRuleTargets operation.
 *
 * @description ## Usage notes
 * This topic provides an example on how to associate the resource `acs:mns:ap-southeast-1:120886317861****:/queues/test/message` with the alert rule `ae06917_75a8c43178ab66****`. The alert trigger target ID is `1`. The response shows that the resource is associated.
 *
 * @param request PutMetricRuleTargetsRequest
 * @return PutMetricRuleTargetsResponse
 */
PutMetricRuleTargetsResponse Client::putMetricRuleTargets(const PutMetricRuleTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putMetricRuleTargetsWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies an alert rule to dynamically add instances that meet the rule to an application group.
 *
 * @param request PutMonitorGroupDynamicRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutMonitorGroupDynamicRuleResponse
 */
PutMonitorGroupDynamicRuleResponse Client::putMonitorGroupDynamicRuleWithOptions(const PutMonitorGroupDynamicRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupRules()) {
    query["GroupRules"] = request.getGroupRules();
  }

  if (!!request.hasIsAsync()) {
    query["IsAsync"] = request.getIsAsync();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutMonitorGroupDynamicRule"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutMonitorGroupDynamicRuleResponse>();
}

/**
 * @summary Creates or modifies an alert rule to dynamically add instances that meet the rule to an application group.
 *
 * @param request PutMonitorGroupDynamicRuleRequest
 * @return PutMonitorGroupDynamicRuleResponse
 */
PutMonitorGroupDynamicRuleResponse Client::putMonitorGroupDynamicRule(const PutMonitorGroupDynamicRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putMonitorGroupDynamicRuleWithOptions(request, runtime);
}

/**
 * @summary Configures global settings for the CloudMonitor agent.
 *
 * @param request PutMonitoringConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutMonitoringConfigResponse
 */
PutMonitoringConfigResponse Client::putMonitoringConfigWithOptions(const PutMonitoringConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoInstall()) {
    query["AutoInstall"] = request.getAutoInstall();
  }

  if (!!request.hasEnableInstallAgentNewECS()) {
    query["EnableInstallAgentNewECS"] = request.getEnableInstallAgentNewECS();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutMonitoringConfig"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutMonitoringConfigResponse>();
}

/**
 * @summary Configures global settings for the CloudMonitor agent.
 *
 * @param request PutMonitoringConfigRequest
 * @return PutMonitoringConfigResponse
 */
PutMonitoringConfigResponse Client::putMonitoringConfig(const PutMonitoringConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putMonitoringConfigWithOptions(request, runtime);
}

/**
 * @summary Configures a threshold alert rule.
 *
 * @description This topic provides an example on how to configure a threshold alert rule for the `cpu_total` metric of the Elastic Computing Service (ECS) instance `i-uf6j91r34rnwawoo****` in the `acs_ecs_dashboard` namespace. The alert contact group is `ECS_Group`, the alert rule name is `test123`, the alert rule ID is `a151cd6023eacee2f0978e03863cc1697c89508****`, the statistical method for the Critical level is `Average`, the comparison operator for the Critical level is `GreaterThanOrEqualToThreshold`, the threshold for the Critical level is `90`, and the retry count for the Critical level is `3`.
 * > As of August 15, 2024, Statistics validation is increased. The statistical value must match the Statistics of the corresponding metric. For information about how to obtain the value of this parameter, see [Alibaba Cloud service monitoring metrics](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics).
 *
 * @param tmpReq PutResourceMetricRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutResourceMetricRuleResponse
 */
PutResourceMetricRuleResponse Client::putResourceMetricRuleWithOptions(const PutResourceMetricRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PutResourceMetricRuleShrinkRequest request = PutResourceMetricRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCompositeExpression()) {
    request.setCompositeExpressionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCompositeExpression(), "CompositeExpression", "json"));
  }

  if (!!tmpReq.hasPrometheus()) {
    request.setPrometheusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPrometheus(), "Prometheus", "json"));
  }

  json query = {};
  if (!!request.hasCompositeExpressionShrink()) {
    query["CompositeExpression"] = request.getCompositeExpressionShrink();
  }

  if (!!request.hasContactGroups()) {
    query["ContactGroups"] = request.getContactGroups();
  }

  if (!!request.hasEffectiveInterval()) {
    query["EffectiveInterval"] = request.getEffectiveInterval();
  }

  if (!!request.hasEmailSubject()) {
    query["EmailSubject"] = request.getEmailSubject();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasNoDataPolicy()) {
    query["NoDataPolicy"] = request.getNoDataPolicy();
  }

  if (!!request.hasNoEffectiveInterval()) {
    query["NoEffectiveInterval"] = request.getNoEffectiveInterval();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPrometheusShrink()) {
    query["Prometheus"] = request.getPrometheusShrink();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.getResources();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSendOK()) {
    query["SendOK"] = request.getSendOK();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.getSilenceTime();
  }

  if (!!request.hasWebhook()) {
    query["Webhook"] = request.getWebhook();
  }

  if (!!request.hasEscalations()) {
    query["Escalations"] = request.getEscalations();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutResourceMetricRule"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutResourceMetricRuleResponse>();
}

/**
 * @summary Configures a threshold alert rule.
 *
 * @description This topic provides an example on how to configure a threshold alert rule for the `cpu_total` metric of the Elastic Computing Service (ECS) instance `i-uf6j91r34rnwawoo****` in the `acs_ecs_dashboard` namespace. The alert contact group is `ECS_Group`, the alert rule name is `test123`, the alert rule ID is `a151cd6023eacee2f0978e03863cc1697c89508****`, the statistical method for the Critical level is `Average`, the comparison operator for the Critical level is `GreaterThanOrEqualToThreshold`, the threshold for the Critical level is `90`, and the retry count for the Critical level is `3`.
 * > As of August 15, 2024, Statistics validation is increased. The statistical value must match the Statistics of the corresponding metric. For information about how to obtain the value of this parameter, see [Alibaba Cloud service monitoring metrics](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics).
 *
 * @param request PutResourceMetricRuleRequest
 * @return PutResourceMetricRuleResponse
 */
PutResourceMetricRuleResponse Client::putResourceMetricRule(const PutResourceMetricRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putResourceMetricRuleWithOptions(request, runtime);
}

/**
 * @summary Creates multiple threshold alert rules for a specified metric of a specified resource by calling the PutResourceMetricRules operation.
 *
 * @description 本文将提供一个示例，为云服务器ECS `acs_ecs_dashboard`的实例`i-uf6j91r34rnwawoo****`中的监控项`cpu_total`设置阈值报警规则。该报警规则的报警联系组为`ECS_Group`、报警规则名称为`test123`、报警规则ID为`a151cd6023eacee2f0978e03863cc1697c89508****`、Critical级别的统计方法为`Average`、Critical级别的比较符为`GreaterThanOrEqualToThreshold`、Critical级别的阈值为`90`和Critical级别的报警重试次数为`3`。
 * > 2024-08-15 增加Statistics校验，统计值只能填对应指标的Statistics。关于如何获取该参数的取值，请参见[云产品监控项](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics)。
 *
 * @param request PutResourceMetricRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutResourceMetricRulesResponse
 */
PutResourceMetricRulesResponse Client::putResourceMetricRulesWithOptions(const PutResourceMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRules()) {
    query["Rules"] = request.getRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutResourceMetricRules"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutResourceMetricRulesResponse>();
}

/**
 * @summary Creates multiple threshold alert rules for a specified metric of a specified resource by calling the PutResourceMetricRules operation.
 *
 * @description 本文将提供一个示例，为云服务器ECS `acs_ecs_dashboard`的实例`i-uf6j91r34rnwawoo****`中的监控项`cpu_total`设置阈值报警规则。该报警规则的报警联系组为`ECS_Group`、报警规则名称为`test123`、报警规则ID为`a151cd6023eacee2f0978e03863cc1697c89508****`、Critical级别的统计方法为`Average`、Critical级别的比较符为`GreaterThanOrEqualToThreshold`、Critical级别的阈值为`90`和Critical级别的报警重试次数为`3`。
 * > 2024-08-15 增加Statistics校验，统计值只能填对应指标的Statistics。关于如何获取该参数的取值，请参见[云产品监控项](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics)。
 *
 * @param request PutResourceMetricRulesRequest
 * @return PutResourceMetricRulesResponse
 */
PutResourceMetricRulesResponse Client::putResourceMetricRules(const PutResourceMetricRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putResourceMetricRulesWithOptions(request, runtime);
}

/**
 * @summary The RemoveTags operation removes one or more tags.
 *
 * @param request RemoveTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveTagsResponse
 */
RemoveTagsResponse Client::removeTagsWithOptions(const RemoveTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.getGroupIds();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveTags"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveTagsResponse>();
}

/**
 * @summary The RemoveTags operation removes one or more tags.
 *
 * @param request RemoveTagsRequest
 * @return RemoveTagsResponse
 */
RemoveTagsResponse Client::removeTags(const RemoveTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeTagsWithOptions(request, runtime);
}

/**
 * @summary Debugs a system event of an Alibaba Cloud service.
 *
 * @description Tests whether a system event can be triggered as expected. Simulates a system event and verifies the response when the event triggers an alert.
 *
 * @param request SendDryRunSystemEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendDryRunSystemEventResponse
 */
SendDryRunSystemEventResponse Client::sendDryRunSystemEventWithOptions(const SendDryRunSystemEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventContent()) {
    query["EventContent"] = request.getEventContent();
  }

  if (!!request.hasEventName()) {
    query["EventName"] = request.getEventName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendDryRunSystemEvent"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendDryRunSystemEventResponse>();
}

/**
 * @summary Debugs a system event of an Alibaba Cloud service.
 *
 * @description Tests whether a system event can be triggered as expected. Simulates a system event and verifies the response when the event triggers an alert.
 *
 * @param request SendDryRunSystemEventRequest
 * @return SendDryRunSystemEventResponse
 */
SendDryRunSystemEventResponse Client::sendDryRunSystemEvent(const SendDryRunSystemEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendDryRunSystemEventWithOptions(request, runtime);
}

/**
 * @summary Uninstalls the CloudMonitor agent from a third-party host.
 *
 * @description > This API operation is not applicable to Elastic Compute Service (ECS) instances. To uninstall the agent from an ECS instance, see [Install and uninstall the CloudMonitor agent](https://help.aliyun.com/document_detail/183482.html).
 *
 * @param request UninstallMonitoringAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallMonitoringAgentResponse
 */
UninstallMonitoringAgentResponse Client::uninstallMonitoringAgentWithOptions(const UninstallMonitoringAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UninstallMonitoringAgent"},
    {"version" , "2019-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallMonitoringAgentResponse>();
}

/**
 * @summary Uninstalls the CloudMonitor agent from a third-party host.
 *
 * @description > This API operation is not applicable to Elastic Compute Service (ECS) instances. To uninstall the agent from an ECS instance, see [Install and uninstall the CloudMonitor agent](https://help.aliyun.com/document_detail/183482.html).
 *
 * @param request UninstallMonitoringAgentRequest
 * @return UninstallMonitoringAgentResponse
 */
UninstallMonitoringAgentResponse Client::uninstallMonitoringAgent(const UninstallMonitoringAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uninstallMonitoringAgentWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Cms20190101