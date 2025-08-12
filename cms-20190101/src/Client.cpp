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
  this->_endpointRule = "";
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
 * @summary Adds tags to an application group.
 *
 * @description This topic provides an example on how to add a tag to an application group whose ID is `7301****`. In this example, the key of the tag is `key1` and the value of the tag is `value1`.
 *
 * @param request AddTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTagsResponse
 */
AddTagsResponse Client::addTagsWithOptions(const AddTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.groupIds();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<AddTagsResponse>();
}

/**
 * @summary Adds tags to an application group.
 *
 * @description This topic provides an example on how to add a tag to an application group whose ID is `7301****`. In this example, the key of the tag is `key1` and the value of the tag is `value1`.
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
    query["AppendMode"] = request.appendMode();
  }

  if (!!request.hasApplyMode()) {
    query["ApplyMode"] = request.applyMode();
  }

  if (!!request.hasEnableEndTime()) {
    query["EnableEndTime"] = request.enableEndTime();
  }

  if (!!request.hasEnableStartTime()) {
    query["EnableStartTime"] = request.enableStartTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNotifyLevel()) {
    query["NotifyLevel"] = request.notifyLevel();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.silenceTime();
  }

  if (!!request.hasTemplateIds()) {
    query["TemplateIds"] = request.templateIds();
  }

  if (!!request.hasWebhook()) {
    query["Webhook"] = request.webhook();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Creates site monitoring tasks.
 *
 * @description This topic provides an example on how to create a site monitoring task named `HangZhou_ECS1`. The URL that is monitored by the task is `https://www.aliyun.com` and the type of the task is `HTTP`. The returned result shows that the site monitoring task is created. The name of the site monitoring task is `HangZhou_ECS1` and the task ID is `679fbe4f-b80b-4706-91b2-5427b43e****`.
 *
 * @param request BatchCreateInstantSiteMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateInstantSiteMonitorResponse
 */
BatchCreateInstantSiteMonitorResponse Client::batchCreateInstantSiteMonitorWithOptions(const BatchCreateInstantSiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskList()) {
    query["TaskList"] = request.taskList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<BatchCreateInstantSiteMonitorResponse>();
}

/**
 * @summary Creates site monitoring tasks.
 *
 * @description This topic provides an example on how to create a site monitoring task named `HangZhou_ECS1`. The URL that is monitored by the task is `https://www.aliyun.com` and the type of the task is `HTTP`. The returned result shows that the site monitoring task is created. The name of the site monitoring task is `HangZhou_ECS1` and the task ID is `679fbe4f-b80b-4706-91b2-5427b43e****`.
 *
 * @param request BatchCreateInstantSiteMonitorRequest
 * @return BatchCreateInstantSiteMonitorResponse
 */
BatchCreateInstantSiteMonitorResponse Client::batchCreateInstantSiteMonitor(const BatchCreateInstantSiteMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateInstantSiteMonitorWithOptions(request, runtime);
}

/**
 * @summary Exports the monitoring data that is defined in the Cursor operation.
 *
 * @description ### [](#)Prerequisites
 * The `Cursor` information is returned by calling the [Cursor](https://help.aliyun.com/document_detail/2330730.html) operation.
 * ### [](#)Description
 * This topic provides an example on how to export the monitoring data of the `cpu_idle` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The `Cursor` information is specified. A maximum of 1,000 data entries can be returned in each response.
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
    request.setMeasurementsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.measurements(), "Measurements", "json"));
  }

  json body = {};
  if (!!request.hasCursor()) {
    body["Cursor"] = request.cursor();
  }

  if (!!request.hasLength()) {
    body["Length"] = request.length();
  }

  if (!!request.hasMeasurementsShrink()) {
    body["Measurements"] = request.measurementsShrink();
  }

  if (!!request.hasMetric()) {
    body["Metric"] = request.metric();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<BatchExportResponse>();
}

/**
 * @summary Exports the monitoring data that is defined in the Cursor operation.
 *
 * @description ### [](#)Prerequisites
 * The `Cursor` information is returned by calling the [Cursor](https://help.aliyun.com/document_detail/2330730.html) operation.
 * ### [](#)Description
 * This topic provides an example on how to export the monitoring data of the `cpu_idle` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The `Cursor` information is specified. A maximum of 1,000 data entries can be returned in each response.
 *
 * @param request BatchExportRequest
 * @return BatchExportResponse
 */
BatchExportResponse Client::batchExport(const BatchExportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchExportWithOptions(request, runtime);
}

/**
 * @summary Creates an application group based on the tags of cloud resources.
 *
 * @description This operation is available for Elastic Compute Service (ECS), ApsaraDB RDS, and Server Load Balancer (SLB).
 * This topic provides an example to show how to create an application group for resources whose tag key is `ecs_instance`. In this example, the alert contact group of the application group is `ECS_Group`.
 *
 * @param request CreateDynamicTagGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDynamicTagGroupResponse
 */
CreateDynamicTagGroupResponse Client::createDynamicTagGroupWithOptions(const CreateDynamicTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupList()) {
    query["ContactGroupList"] = request.contactGroupList();
  }

  if (!!request.hasEnableInstallAgent()) {
    query["EnableInstallAgent"] = request.enableInstallAgent();
  }

  if (!!request.hasEnableSubscribeEvent()) {
    query["EnableSubscribeEvent"] = request.enableSubscribeEvent();
  }

  if (!!request.hasMatchExpress()) {
    query["MatchExpress"] = request.matchExpress();
  }

  if (!!request.hasMatchExpressFilterRelation()) {
    query["MatchExpressFilterRelation"] = request.matchExpressFilterRelation();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  if (!!request.hasTagRegionId()) {
    query["TagRegionId"] = request.tagRegionId();
  }

  if (!!request.hasTemplateIdList()) {
    query["TemplateIdList"] = request.templateIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<CreateDynamicTagGroupResponse>();
}

/**
 * @summary Creates an application group based on the tags of cloud resources.
 *
 * @description This operation is available for Elastic Compute Service (ECS), ApsaraDB RDS, and Server Load Balancer (SLB).
 * This topic provides an example to show how to create an application group for resources whose tag key is `ecs_instance`. In this example, the alert contact group of the application group is `ECS_Group`.
 *
 * @param request CreateDynamicTagGroupRequest
 * @return CreateDynamicTagGroupResponse
 */
CreateDynamicTagGroupResponse Client::createDynamicTagGroup(const CreateDynamicTagGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDynamicTagGroupWithOptions(request, runtime);
}

/**
 * @summary Creates one or more alert rules for a specified application group.
 *
 * @description This topic provides an example to show how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the `123456` application group. The ID of the alert rule is `456789`. The name of the alert rule is `ECS_Rule1`. The alert level is `Critical`. The statistical method is `Average`. The comparison operator is `GreaterThanOrEqualToThreshold`. The alert threshold is `90`. The number of alert retries is `3`. The response shows that the alert rule named `ECS_Rule1` is created.
 *
 * @param request CreateGroupMetricRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupMetricRulesResponse
 */
CreateGroupMetricRulesResponse Client::createGroupMetricRulesWithOptions(const CreateGroupMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasGroupMetricRules()) {
    query["GroupMetricRules"] = request.groupMetricRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<CreateGroupMetricRulesResponse>();
}

/**
 * @summary Creates one or more alert rules for a specified application group.
 *
 * @description This topic provides an example to show how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the `123456` application group. The ID of the alert rule is `456789`. The name of the alert rule is `ECS_Rule1`. The alert level is `Critical`. The statistical method is `Average`. The comparison operator is `GreaterThanOrEqualToThreshold`. The alert threshold is `90`. The number of alert retries is `3`. The response shows that the alert rule named `ECS_Rule1` is created.
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
    query["AlertConfig"] = request.alertConfig();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasMatchExpress()) {
    query["MatchExpress"] = request.matchExpress();
  }

  if (!!request.hasMatchExpressFilterRelation()) {
    query["MatchExpressFilterRelation"] = request.matchExpressFilterRelation();
  }

  if (!!request.hasProcessName()) {
    query["ProcessName"] = request.processName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Creates an availability monitoring task.
 *
 * @description This topic provides an example on how to create an availability monitoring task named `task1` in an application group named `123456`. The TaskType parameter of the task is set to `HTTP`. After you start the task, the system sends alerts by using the specified email address and DingTalk chatbot.
 *
 * @param request CreateHostAvailabilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHostAvailabilityResponse
 */
CreateHostAvailabilityResponse Client::createHostAvailabilityWithOptions(const CreateHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertConfigEscalationList()) {
    query["AlertConfigEscalationList"] = request.alertConfigEscalationList();
  }

  if (!!request.hasAlertConfigTargetList()) {
    query["AlertConfigTargetList"] = request.alertConfigTargetList();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceList()) {
    query["InstanceList"] = request.instanceList();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskScope()) {
    query["TaskScope"] = request.taskScope();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  if (!!request.hasAlertConfig()) {
    query["AlertConfig"] = request.alertConfig();
  }

  if (!!request.hasTaskOption()) {
    query["TaskOption"] = request.taskOption();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<CreateHostAvailabilityResponse>();
}

/**
 * @summary Creates an availability monitoring task.
 *
 * @description This topic provides an example on how to create an availability monitoring task named `task1` in an application group named `123456`. The TaskType parameter of the task is set to `HTTP`. After you start the task, the system sends alerts by using the specified email address and DingTalk chatbot.
 *
 * @param request CreateHostAvailabilityRequest
 * @return CreateHostAvailabilityResponse
 */
CreateHostAvailabilityResponse Client::createHostAvailability(const CreateHostAvailabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHostAvailabilityWithOptions(request, runtime);
}

/**
 * @summary Creates a namespace.
 *
 * @description ## [](#)Prerequisites
 * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
 * ## [](#)Operation description
 * This topic provides an example on how to create a namespace named `aliyun`. In this example, the data retention period of the namespace is set to `cms.s1.3xlarge`. The returned result indicates that the namespace is created.
 *
 * @param request CreateHybridMonitorNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHybridMonitorNamespaceResponse
 */
CreateHybridMonitorNamespaceResponse Client::createHybridMonitorNamespaceWithOptions(const CreateHybridMonitorNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNamespaceRegion()) {
    query["NamespaceRegion"] = request.namespaceRegion();
  }

  if (!!request.hasNamespaceType()) {
    query["NamespaceType"] = request.namespaceType();
  }

  if (!!request.hasSpec()) {
    query["Spec"] = request.spec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<CreateHybridMonitorNamespaceResponse>();
}

/**
 * @summary Creates a namespace.
 *
 * @description ## [](#)Prerequisites
 * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
 * ## [](#)Operation description
 * This topic provides an example on how to create a namespace named `aliyun`. In this example, the data retention period of the namespace is set to `cms.s1.3xlarge`. The returned result indicates that the namespace is created.
 *
 * @param request CreateHybridMonitorNamespaceRequest
 * @return CreateHybridMonitorNamespaceResponse
 */
CreateHybridMonitorNamespaceResponse Client::createHybridMonitorNamespace(const CreateHybridMonitorNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHybridMonitorNamespaceWithOptions(request, runtime);
}

/**
 * @summary Creates a Logstore group of Hybrid Cloud Monitoring.
 *
 * @description ### [](#)Prerequisites
 * Simple Log Service is activated. A project and a Logstore are created in Simple Log Service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/54604.html).
 * ### [](#)Operation description
 * This topic provides an example on how to create a Logstore group named `Logstore_test`. The region ID is `cn-hangzhou`. The project is `aliyun-project`. The Logstore is `Logstore-ECS`. The response shows that the Logstore group is created.
 *
 * @param request CreateHybridMonitorSLSGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHybridMonitorSLSGroupResponse
 */
CreateHybridMonitorSLSGroupResponse Client::createHybridMonitorSLSGroupWithOptions(const CreateHybridMonitorSLSGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSLSGroupConfig()) {
    query["SLSGroupConfig"] = request.SLSGroupConfig();
  }

  if (!!request.hasSLSGroupDescription()) {
    query["SLSGroupDescription"] = request.SLSGroupDescription();
  }

  if (!!request.hasSLSGroupName()) {
    query["SLSGroupName"] = request.SLSGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<CreateHybridMonitorSLSGroupResponse>();
}

/**
 * @summary Creates a Logstore group of Hybrid Cloud Monitoring.
 *
 * @description ### [](#)Prerequisites
 * Simple Log Service is activated. A project and a Logstore are created in Simple Log Service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/54604.html).
 * ### [](#)Operation description
 * This topic provides an example on how to create a Logstore group named `Logstore_test`. The region ID is `cn-hangzhou`. The project is `aliyun-project`. The Logstore is `Logstore-ECS`. The response shows that the Logstore group is created.
 *
 * @param request CreateHybridMonitorSLSGroupRequest
 * @return CreateHybridMonitorSLSGroupResponse
 */
CreateHybridMonitorSLSGroupResponse Client::createHybridMonitorSLSGroup(const CreateHybridMonitorSLSGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHybridMonitorSLSGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a metric import task for an Alibaba Cloud service or creates a metric for logs imported from Simple Log Service.
 *
 * @description # [](#)Prerequisites
 * *   Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
 * *   If you want to create a metric for logs imported from Simple Log Service, make sure that you have activated Simple Log Service and created a project and a Logstore. For more information, see [Getting Started](https://help.aliyun.com/document_detail/54604.html).
 * # [](#)Description
 * This topic provides an example on how to create a metric import task named `aliyun_task` for Elastic Compute Service (ECS). The task imports the `cpu_total` metric to the `aliyun` namespace. The response shows that the metric import task is created.
 *
 * @param request CreateHybridMonitorTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHybridMonitorTaskResponse
 */
CreateHybridMonitorTaskResponse Client::createHybridMonitorTaskWithOptions(const CreateHybridMonitorTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttachLabels()) {
    query["AttachLabels"] = request.attachLabels();
  }

  if (!!request.hasCloudAccessId()) {
    query["CloudAccessId"] = request.cloudAccessId();
  }

  if (!!request.hasCollectInterval()) {
    query["CollectInterval"] = request.collectInterval();
  }

  if (!!request.hasCollectTargetType()) {
    query["CollectTargetType"] = request.collectTargetType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasSLSProcessConfig()) {
    query["SLSProcessConfig"] = request.SLSProcessConfig();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.targetUserId();
  }

  if (!!request.hasTargetUserIdList()) {
    query["TargetUserIdList"] = request.targetUserIdList();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  if (!!request.hasYARMConfig()) {
    query["YARMConfig"] = request.YARMConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<CreateHybridMonitorTaskResponse>();
}

/**
 * @summary Creates a metric import task for an Alibaba Cloud service or creates a metric for logs imported from Simple Log Service.
 *
 * @description # [](#)Prerequisites
 * *   Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
 * *   If you want to create a metric for logs imported from Simple Log Service, make sure that you have activated Simple Log Service and created a project and a Logstore. For more information, see [Getting Started](https://help.aliyun.com/document_detail/54604.html).
 * # [](#)Description
 * This topic provides an example on how to create a metric import task named `aliyun_task` for Elastic Compute Service (ECS). The task imports the `cpu_total` metric to the `aliyun` namespace. The response shows that the metric import task is created.
 *
 * @param request CreateHybridMonitorTaskRequest
 * @return CreateHybridMonitorTaskResponse
 */
CreateHybridMonitorTaskResponse Client::createHybridMonitorTask(const CreateHybridMonitorTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHybridMonitorTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an instant test task.
 *
 * @description You can create an instant test task only by using the Alibaba Cloud account that you used to enable Network Analysis and Monitoring. 
 * This topic provides an example to show how to create an instant test task. The name of the task is `task1`. The tested address is `http://www.aliyun.com`. The test type is `HTTP`. The number of detection points is `1`.
 *
 * @param request CreateInstantSiteMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstantSiteMonitorResponse
 */
CreateInstantSiteMonitorResponse Client::createInstantSiteMonitorWithOptions(const CreateInstantSiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.address();
  }

  if (!!request.hasIspCities()) {
    query["IspCities"] = request.ispCities();
  }

  if (!!request.hasOptionsJson()) {
    query["OptionsJson"] = request.optionsJson();
  }

  if (!!request.hasRandomIspCity()) {
    query["RandomIspCity"] = request.randomIspCity();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<CreateInstantSiteMonitorResponse>();
}

/**
 * @summary Creates an instant test task.
 *
 * @description You can create an instant test task only by using the Alibaba Cloud account that you used to enable Network Analysis and Monitoring. 
 * This topic provides an example to show how to create an instant test task. The name of the task is `task1`. The tested address is `http://www.aliyun.com`. The test type is `HTTP`. The number of detection points is `1`.
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
 * *   CloudMonitor blocks alert notifications based on the blacklist policies that take effect. To block alert notifications when the value of a metric that belongs to a cloud service reaches the threshold that you specified, add the metric to a blacklist policy.
 * *   CloudMonitor allows you to create blacklist policies only based on threshold metrics. You cannot create blacklist policies based on system events. For more information about the cloud services and the thresholds of the metrics that are supported by CloudMonitor, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
 *
 * @param request CreateMetricRuleBlackListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMetricRuleBlackListResponse
 */
CreateMetricRuleBlackListResponse Client::createMetricRuleBlackListWithOptions(const CreateMetricRuleBlackListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.effectiveTime();
  }

  if (!!request.hasEnableEndTime()) {
    query["EnableEndTime"] = request.enableEndTime();
  }

  if (!!request.hasEnableStartTime()) {
    query["EnableStartTime"] = request.enableStartTime();
  }

  if (!!request.hasInstances()) {
    query["Instances"] = request.instances();
  }

  if (!!request.hasMetrics()) {
    query["Metrics"] = request.metrics();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.scopeType();
  }

  if (!!request.hasScopeValue()) {
    query["ScopeValue"] = request.scopeValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<CreateMetricRuleBlackListResponse>();
}

/**
 * @summary Creates a blacklist policy.
 *
 * @description ### Background information
 * *   CloudMonitor blocks alert notifications based on the blacklist policies that take effect. To block alert notifications when the value of a metric that belongs to a cloud service reaches the threshold that you specified, add the metric to a blacklist policy.
 * *   CloudMonitor allows you to create blacklist policies only based on threshold metrics. You cannot create blacklist policies based on system events. For more information about the cloud services and the thresholds of the metrics that are supported by CloudMonitor, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
 *
 * @param request CreateMetricRuleBlackListRequest
 * @return CreateMetricRuleBlackListResponse
 */
CreateMetricRuleBlackListResponse Client::createMetricRuleBlackList(const CreateMetricRuleBlackListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMetricRuleBlackListWithOptions(request, runtime);
}

/**
 * @summary Associates resources with an alert rule.
 *
 * @param request CreateMetricRuleResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMetricRuleResourcesResponse
 */
CreateMetricRuleResourcesResponse Client::createMetricRuleResourcesWithOptions(const CreateMetricRuleResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOverwrite()) {
    query["Overwrite"] = request.overwrite();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.resources();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<CreateMetricRuleResourcesResponse>();
}

/**
 * @summary Associates resources with an alert rule.
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
    query["AlertTemplates"] = request.alertTemplates();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProcessName()) {
    query["ProcessName"] = request.processName();
  }

  if (!!request.hasProcessUser()) {
    query["ProcessUser"] = request.processUser();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["ContactGroups"] = request.contactGroups();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["ContactGroupList"] = request.contactGroupList();
  }

  if (!!request.hasEnableInstallAgent()) {
    query["EnableInstallAgent"] = request.enableInstallAgent();
  }

  if (!!request.hasEnableSubscribeEvent()) {
    query["EnableSubscribeEvent"] = request.enableSubscribeEvent();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.resourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstances()) {
    query["Instances"] = request.instances();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Creates a policy to pause alert notifications for an application group.
 *
 * @description If the policy is valid, no alert notifications are sent for the application group.
 * This topic describes how to create a `PauseNotify` policy to pause alert notifications for the `7301****` application group. The StartTime parameter is set to `1622949300000` and the EndTime parameter is set to `1623208500000`. This indicates that the policy is valid from `2021-06-06 11:15:00 UTC+8` to `2021-06-09 11:15:00 UTC+8`.
 *
 * @param request CreateMonitorGroupNotifyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorGroupNotifyPolicyResponse
 */
CreateMonitorGroupNotifyPolicyResponse Client::createMonitorGroupNotifyPolicyWithOptions(const CreateMonitorGroupNotifyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.policyType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<CreateMonitorGroupNotifyPolicyResponse>();
}

/**
 * @summary Creates a policy to pause alert notifications for an application group.
 *
 * @description If the policy is valid, no alert notifications are sent for the application group.
 * This topic describes how to create a `PauseNotify` policy to pause alert notifications for the `7301****` application group. The StartTime parameter is set to `1622949300000` and the EndTime parameter is set to `1623208500000`. This indicates that the policy is valid from `2021-06-06 11:15:00 UTC+8` to `2021-06-09 11:15:00 UTC+8`.
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProcessName()) {
    query["ProcessName"] = request.processName();
  }

  if (!!request.hasProcessUser()) {
    query["ProcessUser"] = request.processUser();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @description This topic provides an example on how to create a site monitoring task named `HanZhou_ECS1`. The URL that is monitored by the task is `https://www.aliyun.com` and the type of the task is `HTTPS`.
 *
 * @param request CreateSiteMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSiteMonitorResponse
 */
CreateSiteMonitorResponse Client::createSiteMonitorWithOptions(const CreateSiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.address();
  }

  if (!!request.hasAlertIds()) {
    query["AlertIds"] = request.alertIds();
  }

  if (!!request.hasCustomSchedule()) {
    query["CustomSchedule"] = request.customSchedule();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspCities()) {
    query["IspCities"] = request.ispCities();
  }

  if (!!request.hasOptionsJson()) {
    query["OptionsJson"] = request.optionsJson();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  if (!!request.hasVpcConfig()) {
    query["VpcConfig"] = request.vpcConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<CreateSiteMonitorResponse>();
}

/**
 * @summary Creates a site monitoring task.
 *
 * @description This topic provides an example on how to create a site monitoring task named `HanZhou_ECS1`. The URL that is monitored by the task is `https://www.aliyun.com` and the type of the task is `HTTPS`.
 *
 * @param request CreateSiteMonitorRequest
 * @return CreateSiteMonitorResponse
 */
CreateSiteMonitorResponse Client::createSiteMonitor(const CreateSiteMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSiteMonitorWithOptions(request, runtime);
}

/**
 * @summary Defines the range of monitoring data that you want to export. The Cursor information is returned. When you call the BatchExport operation for the first time, you must specify the Cursor information.
 *
 * @description ### [](#)Prerequisites
 * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
 * ### [](#)Background information
 * You can call this operation to obtain the Cursor information and then call the [BatchExport](https://help.aliyun.com/document_detail/2329847.html) operation to export the monitoring data.
 * ### [](#)Description
 * This topic provides an example on how to define the monitoring data of a specified metric for a specified cloud service. In this example, the namespace of the cloud service is set to `acs_ecs_dashboard`, the metric is set to `cpu_idle`, the start time is set to `1641627000000`, and the end time is set to `1641645000000`. The number of idle CPU cores on your Elastic Compute Service (ECS) instances is measured every 60 seconds from 15:30:00, January 8, 2022 to 20:30:00, January 8, 2022. The `Cursor` information is returned.
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
    request.setMatchersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.matchers(), "Matchers", "json"));
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasMatchersShrink()) {
    body["Matchers"] = request.matchersShrink();
  }

  if (!!request.hasMetric()) {
    body["Metric"] = request.metric();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.period();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<CursorResponse>();
}

/**
 * @summary Defines the range of monitoring data that you want to export. The Cursor information is returned. When you call the BatchExport operation for the first time, you must specify the Cursor information.
 *
 * @description ### [](#)Prerequisites
 * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
 * ### [](#)Background information
 * You can call this operation to obtain the Cursor information and then call the [BatchExport](https://help.aliyun.com/document_detail/2329847.html) operation to export the monitoring data.
 * ### [](#)Description
 * This topic provides an example on how to define the monitoring data of a specified metric for a specified cloud service. In this example, the namespace of the cloud service is set to `acs_ecs_dashboard`, the metric is set to `cpu_idle`, the start time is set to `1641627000000`, and the end time is set to `1641645000000`. The number of idle CPU cores on your Elastic Compute Service (ECS) instances is measured every 60 seconds from 15:30:00, January 8, 2022 to 20:30:00, January 8, 2022. The `Cursor` information is returned.
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
    query["ContactName"] = request.contactName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Deletes an alert contact group.
 *
 * @param request DeleteContactGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactGroupResponse
 */
DeleteContactGroupResponse Client::deleteContactGroupWithOptions(const DeleteContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupName()) {
    query["ContactGroupName"] = request.contactGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DeleteContactGroupResponse>();
}

/**
 * @summary Deletes an alert contact group.
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
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasMd5()) {
    query["Md5"] = request.md5();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasUUID()) {
    query["UUID"] = request.UUID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["DynamicTagRuleId"] = request.dynamicTagRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["Ids"] = request.ids();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Deletes event-triggered alert rules.
 *
 * @param request DeleteEventRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventRulesResponse
 */
DeleteEventRulesResponse Client::deleteEventRulesWithOptions(const DeleteEventRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleNames()) {
    query["RuleNames"] = request.ruleNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DeleteEventRulesResponse>();
}

/**
 * @summary Deletes event-triggered alert rules.
 *
 * @param request DeleteEventRulesRequest
 * @return DeleteEventRulesResponse
 */
DeleteEventRulesResponse Client::deleteEventRules(const DeleteEventRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes a configuration set that is used to export monitoring data.
 *
 * @param request DeleteExporterOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExporterOutputResponse
 */
DeleteExporterOutputResponse Client::deleteExporterOutputWithOptions(const DeleteExporterOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestName()) {
    query["DestName"] = request.destName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DeleteExporterOutputResponse>();
}

/**
 * @summary Deletes a configuration set that is used to export monitoring data.
 *
 * @param request DeleteExporterOutputRequest
 * @return DeleteExporterOutputResponse
 */
DeleteExporterOutputResponse Client::deleteExporterOutput(const DeleteExporterOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExporterOutputWithOptions(request, runtime);
}

/**
 * @summary Deletes a data export rule.
 *
 * @param request DeleteExporterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExporterRuleResponse
 */
DeleteExporterRuleResponse Client::deleteExporterRuleWithOptions(const DeleteExporterRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DeleteExporterRuleResponse>();
}

/**
 * @summary Deletes a data export rule.
 *
 * @param request DeleteExporterRuleRequest
 * @return DeleteExporterRuleResponse
 */
DeleteExporterRuleResponse Client::deleteExporterRule(const DeleteExporterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExporterRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a process monitoring task for an application group.
 *
 * @param request DeleteGroupMonitoringAgentProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupMonitoringAgentProcessResponse
 */
DeleteGroupMonitoringAgentProcessResponse Client::deleteGroupMonitoringAgentProcessWithOptions(const DeleteGroupMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DeleteGroupMonitoringAgentProcessResponse>();
}

/**
 * @summary Deletes a process monitoring task for an application group.
 *
 * @param request DeleteGroupMonitoringAgentProcessRequest
 * @return DeleteGroupMonitoringAgentProcessResponse
 */
DeleteGroupMonitoringAgentProcessResponse Client::deleteGroupMonitoringAgentProcess(const DeleteGroupMonitoringAgentProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGroupMonitoringAgentProcessWithOptions(request, runtime);
}

/**
 * @summary Deletes availability monitoring tasks.
 *
 * @param request DeleteHostAvailabilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHostAvailabilityResponse
 */
DeleteHostAvailabilityResponse Client::deleteHostAvailabilityWithOptions(const DeleteHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DeleteHostAvailabilityResponse>();
}

/**
 * @summary Deletes availability monitoring tasks.
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
    query["Namespace"] = request._namespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["SLSGroupName"] = request.SLSGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.targetUserId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["LogId"] = request.logId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Deletes multiple blacklist policies at a time.
 *
 * @param request DeleteMetricRuleBlackListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMetricRuleBlackListResponse
 */
DeleteMetricRuleBlackListResponse Client::deleteMetricRuleBlackListWithOptions(const DeleteMetricRuleBlackListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DeleteMetricRuleBlackListResponse>();
}

/**
 * @summary Deletes multiple blacklist policies at a time.
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
    query["Resources"] = request.resources();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasTargetIds()) {
    query["TargetIds"] = request.targetIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Deletes an alert template.
 *
 * @param request DeleteMetricRuleTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMetricRuleTemplateResponse
 */
DeleteMetricRuleTemplateResponse Client::deleteMetricRuleTemplateWithOptions(const DeleteMetricRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DeleteMetricRuleTemplateResponse>();
}

/**
 * @summary Deletes an alert template.
 *
 * @param request DeleteMetricRuleTemplateRequest
 * @return DeleteMetricRuleTemplateResponse
 */
DeleteMetricRuleTemplateResponse Client::deleteMetricRuleTemplate(const DeleteMetricRuleTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMetricRuleTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more alert rules.
 *
 * @param request DeleteMetricRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMetricRulesResponse
 */
DeleteMetricRulesResponse Client::deleteMetricRulesWithOptions(const DeleteMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DeleteMetricRulesResponse>();
}

/**
 * @summary Deletes one or more alert rules.
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
    query["GroupId"] = request.groupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["Category"] = request.category();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["Category"] = request.category();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceIdList()) {
    query["InstanceIdList"] = request.instanceIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.policyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Disables monitoring on a process.
 *
 * @param request DeleteMonitoringAgentProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMonitoringAgentProcessResponse
 */
DeleteMonitoringAgentProcessResponse Client::deleteMonitoringAgentProcessWithOptions(const DeleteMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProcessId()) {
    query["ProcessId"] = request.processId();
  }

  if (!!request.hasProcessName()) {
    query["ProcessName"] = request.processName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DeleteMonitoringAgentProcessResponse>();
}

/**
 * @summary Disables monitoring on a process.
 *
 * @param request DeleteMonitoringAgentProcessRequest
 * @return DeleteMonitoringAgentProcessResponse
 */
DeleteMonitoringAgentProcessResponse Client::deleteMonitoringAgentProcess(const DeleteMonitoringAgentProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMonitoringAgentProcessWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more site monitoring tasks.
 *
 * @param request DeleteSiteMonitorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSiteMonitorsResponse
 */
DeleteSiteMonitorsResponse Client::deleteSiteMonitorsWithOptions(const DeleteSiteMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsDeleteAlarms()) {
    query["IsDeleteAlarms"] = request.isDeleteAlarms();
  }

  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.taskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DeleteSiteMonitorsResponse>();
}

/**
 * @summary Deletes one or more site monitoring tasks.
 *
 * @param request DeleteSiteMonitorsRequest
 * @return DeleteSiteMonitorsResponse
 */
DeleteSiteMonitorsResponse Client::deleteSiteMonitors(const DeleteSiteMonitorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSiteMonitorsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of initiative alert rules.
 *
 * @param request DescribeActiveMetricRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeActiveMetricRuleListResponse
 */
DescribeActiveMetricRuleListResponse Client::describeActiveMetricRuleListWithOptions(const DescribeActiveMetricRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeActiveMetricRuleListResponse>();
}

/**
 * @summary Queries the details of initiative alert rules.
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
    query["Ascending"] = request.ascending();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["ContactGroup"] = request.contactGroup();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.groupBy();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasLastMin()) {
    query["LastMin"] = request.lastMin();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.searchKey();
  }

  if (!!request.hasSendStatus()) {
    query["SendStatus"] = request.sendStatus();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["ContactGroup"] = request.contactGroup();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.groupBy();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasLastMin()) {
    query["LastMin"] = request.lastMin();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.searchKey();
  }

  if (!!request.hasSendStatus()) {
    query["SendStatus"] = request.sendStatus();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Queries alert logs.
 *
 * @description You can call the operation to query only the alert logs within the last year.
 * This topic provides an example to show how to query the alert logs of Elastic Compute Service (ECS) based on the `product` dimension.
 *
 * @param request DescribeAlertLogListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAlertLogListResponse
 */
DescribeAlertLogListResponse Client::describeAlertLogListWithOptions(const DescribeAlertLogListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroup()) {
    query["ContactGroup"] = request.contactGroup();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.groupBy();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasLastMin()) {
    query["LastMin"] = request.lastMin();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.searchKey();
  }

  if (!!request.hasSendStatus()) {
    query["SendStatus"] = request.sendStatus();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeAlertLogListResponse>();
}

/**
 * @summary Queries alert logs.
 *
 * @description You can call the operation to query only the alert logs within the last year.
 * This topic provides an example to show how to query the alert logs of Elastic Compute Service (ECS) based on the `product` dimension.
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
  }));
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
  }));
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
 * @summary Queries alert groups.
 *
 * @param request DescribeContactGroupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeContactGroupListResponse
 */
DescribeContactGroupListResponse Client::describeContactGroupListWithOptions(const DescribeContactGroupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeContactGroupListResponse>();
}

/**
 * @summary Queries alert groups.
 *
 * @param request DescribeContactGroupListRequest
 * @return DescribeContactGroupListResponse
 */
DescribeContactGroupListResponse Client::describeContactGroupList(const DescribeContactGroupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeContactGroupListWithOptions(request, runtime);
}

/**
 * @summary Queries alert contacts.
 *
 * @param request DescribeContactListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeContactListResponse
 */
DescribeContactListResponse Client::describeContactListWithOptions(const DescribeContactListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChanelType()) {
    query["ChanelType"] = request.chanelType();
  }

  if (!!request.hasChanelValue()) {
    query["ChanelValue"] = request.chanelValue();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.contactName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeContactListResponse>();
}

/**
 * @summary Queries alert contacts.
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
    query["ContactGroupName"] = request.contactGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Queries the details of a custom event.
 *
 * @param request DescribeCustomEventAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomEventAttributeResponse
 */
DescribeCustomEventAttributeResponse Client::describeCustomEventAttributeWithOptions(const DescribeCustomEventAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.eventId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchKeywords()) {
    query["SearchKeywords"] = request.searchKeywords();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeCustomEventAttributeResponse>();
}

/**
 * @summary Queries the details of a custom event.
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
 * @description >  This operation queries the number of times that a custom event occurred for each service.
 *
 * @param request DescribeCustomEventCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomEventCountResponse
 */
DescribeCustomEventCountResponse Client::describeCustomEventCountWithOptions(const DescribeCustomEventCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.eventId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasSearchKeywords()) {
    query["SearchKeywords"] = request.searchKeywords();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeCustomEventCountResponse>();
}

/**
 * @summary Queries the number of times that a custom event occurred within a period of time.
 *
 * @description >  This operation queries the number of times that a custom event occurred for each service.
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
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.eventId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasSearchKeywords()) {
    query["SearchKeywords"] = request.searchKeywords();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @description >  You can call the DescribeMetricList operation to query the metrics of cloud services. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html).
 *
 * @param request DescribeCustomMetricListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomMetricListResponse
 */
DescribeCustomMetricListResponse Client::describeCustomMetricListWithOptions(const DescribeCustomMetricListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDimension()) {
    query["Dimension"] = request.dimension();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasMd5()) {
    query["Md5"] = request.md5();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeCustomMetricListResponse>();
}

/**
 * @summary Queries the reported monitoring data.
 *
 * @description >  You can call the DescribeMetricList operation to query the metrics of cloud services. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html).
 *
 * @param request DescribeCustomMetricListRequest
 * @return DescribeCustomMetricListResponse
 */
DescribeCustomMetricListResponse Client::describeCustomMetricList(const DescribeCustomMetricListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomMetricListWithOptions(request, runtime);
}

/**
 * @summary Queries tag rules.
 *
 * @description This topic provides an example to show how to query tag rules that are related to `tagkey1`. The sample responses indicate that two tag rules are found. The rule IDs are `1536df65-a719-429d-8813-73cc40d7****` and `56e8cebb-b3d7-4a91-9880-78a8c84f****`.
 *
 * @param request DescribeDynamicTagRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDynamicTagRuleListResponse
 */
DescribeDynamicTagRuleListResponse Client::describeDynamicTagRuleListWithOptions(const DescribeDynamicTagRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDynamicTagRuleId()) {
    query["DynamicTagRuleId"] = request.dynamicTagRuleId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  if (!!request.hasTagRegionId()) {
    query["TagRegionId"] = request.tagRegionId();
  }

  if (!!request.hasTagValue()) {
    query["TagValue"] = request.tagValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeDynamicTagRuleListResponse>();
}

/**
 * @summary Queries tag rules.
 *
 * @description This topic provides an example to show how to query tag rules that are related to `tagkey1`. The sample responses indicate that two tag rules are found. The rule IDs are `1536df65-a719-429d-8813-73cc40d7****` and `56e8cebb-b3d7-4a91-9880-78a8c84f****`.
 *
 * @param request DescribeDynamicTagRuleListRequest
 * @return DescribeDynamicTagRuleListResponse
 */
DescribeDynamicTagRuleListResponse Client::describeDynamicTagRuleList(const DescribeDynamicTagRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDynamicTagRuleListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an event-triggered alert rule.
 *
 * @description This topic provides an example to show how to query the details of an event-triggered alert rule named `testRule`.
 *
 * @param request DescribeEventRuleAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventRuleAttributeResponse
 */
DescribeEventRuleAttributeResponse Client::describeEventRuleAttributeWithOptions(const DescribeEventRuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.silenceTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeEventRuleAttributeResponse>();
}

/**
 * @summary Queries the details of an event-triggered alert rule.
 *
 * @description This topic provides an example to show how to query the details of an event-triggered alert rule named `testRule`.
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
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasIsEnable()) {
    query["IsEnable"] = request.isEnable();
  }

  if (!!request.hasNamePrefix()) {
    query["NamePrefix"] = request.namePrefix();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Queries event-triggered alert rules.
 *
 * @description This topic provides an example to show how to query the details of an event-triggered alert rule named `testRule`.
 *
 * @param request DescribeEventRuleTargetListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventRuleTargetListResponse
 */
DescribeEventRuleTargetListResponse Client::describeEventRuleTargetListWithOptions(const DescribeEventRuleTargetListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeEventRuleTargetListResponse>();
}

/**
 * @summary Queries event-triggered alert rules.
 *
 * @description This topic provides an example to show how to query the details of an event-triggered alert rule named `testRule`.
 *
 * @param request DescribeEventRuleTargetListRequest
 * @return DescribeEventRuleTargetListResponse
 */
DescribeEventRuleTargetListResponse Client::describeEventRuleTargetList(const DescribeEventRuleTargetListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventRuleTargetListWithOptions(request, runtime);
}

/**
 * @summary Queries configuration sets that are used to export monitoring data.
 *
 * @param request DescribeExporterOutputListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExporterOutputListResponse
 */
DescribeExporterOutputListResponse Client::describeExporterOutputListWithOptions(const DescribeExporterOutputListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeExporterOutputListResponse>();
}

/**
 * @summary Queries configuration sets that are used to export monitoring data.
 *
 * @param request DescribeExporterOutputListRequest
 * @return DescribeExporterOutputListResponse
 */
DescribeExporterOutputListResponse Client::describeExporterOutputList(const DescribeExporterOutputListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExporterOutputListWithOptions(request, runtime);
}

/**
 * @summary Queries data export rules.
 *
 * @param request DescribeExporterRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExporterRuleListResponse
 */
DescribeExporterRuleListResponse Client::describeExporterRuleListWithOptions(const DescribeExporterRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeExporterRuleListResponse>();
}

/**
 * @summary Queries data export rules.
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
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProcessName()) {
    query["ProcessName"] = request.processName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasIds()) {
    query["Ids"] = request.ids();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["End"] = request.end();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasPromSQL()) {
    query["PromSQL"] = request.promSQL();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.start();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Queries namespaces and the details of the related metric import tasks.
 *
 * @description In this example, all namespaces within the current account are queried. The response shows that the current account has only one namespace named `aliyun-test`.
 *
 * @param request DescribeHybridMonitorNamespaceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridMonitorNamespaceListResponse
 */
DescribeHybridMonitorNamespaceListResponse Client::describeHybridMonitorNamespaceListWithOptions(const DescribeHybridMonitorNamespaceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasShowTaskStatistic()) {
    query["ShowTaskStatistic"] = request.showTaskStatistic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeHybridMonitorNamespaceListResponse>();
}

/**
 * @summary Queries namespaces and the details of the related metric import tasks.
 *
 * @description In this example, all namespaces within the current account are queried. The response shows that the current account has only one namespace named `aliyun-test`.
 *
 * @param request DescribeHybridMonitorNamespaceListRequest
 * @return DescribeHybridMonitorNamespaceListResponse
 */
DescribeHybridMonitorNamespaceListResponse Client::describeHybridMonitorNamespaceList(const DescribeHybridMonitorNamespaceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHybridMonitorNamespaceListWithOptions(request, runtime);
}

/**
 * @summary Queries Logstore groups.
 *
 * @description In this example, all Logstore groups within the current account are queried. The response shows that the current account has two Logstore groups: `Logstore_test` and `Logstore_aliyun`.
 *
 * @param request DescribeHybridMonitorSLSGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHybridMonitorSLSGroupResponse
 */
DescribeHybridMonitorSLSGroupResponse Client::describeHybridMonitorSLSGroupWithOptions(const DescribeHybridMonitorSLSGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSLSGroupName()) {
    query["SLSGroupName"] = request.SLSGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeHybridMonitorSLSGroupResponse>();
}

/**
 * @summary Queries Logstore groups.
 *
 * @description In this example, all Logstore groups within the current account are queried. The response shows that the current account has two Logstore groups: `Logstore_test` and `Logstore_aliyun`.
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
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasIncludeAliyunTask()) {
    query["IncludeAliyunTask"] = request.includeAliyunTask();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.targetUserId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Queries the details of a log monitoring metric.
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
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeLogMonitorAttributeResponse>();
}

/**
 * @summary Queries the details of a log monitoring metric.
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
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchValue()) {
    query["SearchValue"] = request.searchValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * *   The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. If the free quota is used up, you are automatically charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
 * *   Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
 * ### [](#)Description
 * >  Different from [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html), the DescribeMetricData operation provides statistical features. You can set the Dimension parameter to `{"instanceId": "i-abcdefgh12****"}` to aggregate all data of your Alibaba Cloud account.
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
    query["Dimensions"] = request.dimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExpress()) {
    query["Express"] = request.express();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.length();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMetricDataResponse>();
}

/**
 * @summary Queries the monitoring data of a metric for a cloud service.
 *
 * @description ### [](#)Limits
 * *   The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. If the free quota is used up, you are automatically charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
 * *   Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
 * ### [](#)Description
 * >  Different from [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html), the DescribeMetricData operation provides statistical features. You can set the Dimension parameter to `{"instanceId": "i-abcdefgh12****"}` to aggregate all data of your Alibaba Cloud account.
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
 * *   The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
 * *   Each API operation can be called up to 50 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
 * >  If `Throttling.User` or `Request was denied due to user flow control` is returned when you call an API operation, the API operation is throttled. For more information about how to handle the issue, see [How do I handle the throttling of a query API?](https://help.aliyun.com/document_detail/2615031.html)
 * ### [](#)Precautions
 * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
 * *   The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
 * *   The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
 * *   The storage duration is 91 days if the value of the `Period` parameter is greater than or equal to 300 seconds.
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
    query["Dimensions"] = request.dimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExpress()) {
    query["Express"] = request.express();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.length();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMetricLastResponse>();
}

/**
 * @summary Queries the latest monitoring data of a metric.
 *
 * @description ### [](#)Limits
 * *   The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
 * *   Each API operation can be called up to 50 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
 * >  If `Throttling.User` or `Request was denied due to user flow control` is returned when you call an API operation, the API operation is throttled. For more information about how to handle the issue, see [How do I handle the throttling of a query API?](https://help.aliyun.com/document_detail/2615031.html)
 * ### [](#)Precautions
 * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
 * *   The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
 * *   The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
 * *   The storage duration is 91 days if the value of the `Period` parameter is greater than or equal to 300 seconds.
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
 * @summary Queries the monitoring data of a metric for a specified cloud service.
 *
 * @description ## Limits
 * Each API operation can be called up to 50 times per second. An Alibaba Cloud account and the RAM users within the account share the quota. 
 * >This topic provides an example to show how to query the monitoring data of the `cpu_idle` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The returned result indicates that the monitoring data for the instance `i-abcdefgh12****` of the account `120886317861****` is queried at an interval of 60 seconds. The maximum, minimum, and average values of the metric are 100, 93.1, and 99.52.
 *
 * @param request DescribeMetricListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricListResponse
 */
DescribeMetricListResponse Client::describeMetricListWithOptions(const DescribeMetricListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.dimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExpress()) {
    query["Express"] = request.express();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.length();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMetricListResponse>();
}

/**
 * @summary Queries the monitoring data of a metric for a specified cloud service.
 *
 * @description ## Limits
 * Each API operation can be called up to 50 times per second. An Alibaba Cloud account and the RAM users within the account share the quota. 
 * >This topic provides an example to show how to query the monitoring data of the `cpu_idle` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The returned result indicates that the monitoring data for the instance `i-abcdefgh12****` of the account `120886317861****` is queried at an interval of 60 seconds. The maximum, minimum, and average values of the metric are 100, 93.1, and 99.52.
 *
 * @param request DescribeMetricListRequest
 * @return DescribeMetricListResponse
 */
DescribeMetricListResponse Client::describeMetricList(const DescribeMetricListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of metrics that are supported in CloudMonitor.
 *
 * @description This operation is used together with DescribeMetricList and DescribeMetricLast. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html) and [DescribeMetricLast](https://help.aliyun.com/document_detail/51939.html).
 *
 * @param request DescribeMetricMetaListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricMetaListResponse
 */
DescribeMetricMetaListResponse Client::describeMetricMetaListWithOptions(const DescribeMetricMetaListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMetricMetaListResponse>();
}

/**
 * @summary Queries the details of metrics that are supported in CloudMonitor.
 *
 * @description This operation is used together with DescribeMetricList and DescribeMetricLast. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html) and [DescribeMetricLast](https://help.aliyun.com/document_detail/51939.html).
 *
 * @param request DescribeMetricMetaListRequest
 * @return DescribeMetricMetaListResponse
 */
DescribeMetricMetaListResponse Client::describeMetricMetaList(const DescribeMetricMetaListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricMetaListWithOptions(request, runtime);
}

/**
 * @param request DescribeMetricRuleBlackListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricRuleBlackListResponse
 */
DescribeMetricRuleBlackListResponse Client::describeMetricRuleBlackListWithOptions(const DescribeMetricRuleBlackListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasIds()) {
    query["Ids"] = request.ids();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasIsEnable()) {
    query["IsEnable"] = request.isEnable();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.scopeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMetricRuleBlackListResponse>();
}

/**
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
  }));
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
  }));
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
 * @summary Queries alert rules.
 *
 * @description This topic provides an example on how to query all alert rules within your Alibaba Cloud account. The returned result shows that only one alert rule is found. The name of the alert rule is `Rule_01` and the ID is `applyTemplate344cfd42-0f32-4fd6-805a-88d7908a****`.
 *
 * @param request DescribeMetricRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricRuleListResponse
 */
DescribeMetricRuleListResponse Client::describeMetricRuleListWithOptions(const DescribeMetricRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertState()) {
    query["AlertState"] = request.alertState();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.dimensions();
  }

  if (!!request.hasEnableState()) {
    query["EnableState"] = request.enableState();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRuleIds()) {
    query["RuleIds"] = request.ruleIds();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMetricRuleListResponse>();
}

/**
 * @summary Queries alert rules.
 *
 * @description This topic provides an example on how to query all alert rules within your Alibaba Cloud account. The returned result shows that only one alert rule is found. The name of the alert rule is `Rule_01` and the ID is `applyTemplate344cfd42-0f32-4fd6-805a-88d7908a****`.
 *
 * @param request DescribeMetricRuleListRequest
 * @return DescribeMetricRuleListResponse
 */
DescribeMetricRuleListResponse Client::describeMetricRuleList(const DescribeMetricRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricRuleListWithOptions(request, runtime);
}

/**
 * @summary Queries the resources that are associated with a specified alert rule.
 *
 * @description ## Limit
 * This operation supports only Message Service (MNS) resources. 
 * >This topic provides an example on how to query the resources that are associated with an alert rule whose ID is `ae06917_75a8c43178ab66****`.
 *
 * @param request DescribeMetricRuleTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricRuleTargetsResponse
 */
DescribeMetricRuleTargetsResponse Client::describeMetricRuleTargetsWithOptions(const DescribeMetricRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMetricRuleTargetsResponse>();
}

/**
 * @summary Queries the resources that are associated with a specified alert rule.
 *
 * @description ## Limit
 * This operation supports only Message Service (MNS) resources. 
 * >This topic provides an example on how to query the resources that are associated with an alert rule whose ID is `ae06917_75a8c43178ab66****`.
 *
 * @param request DescribeMetricRuleTargetsRequest
 * @return DescribeMetricRuleTargetsResponse
 */
DescribeMetricRuleTargetsResponse Client::describeMetricRuleTargets(const DescribeMetricRuleTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricRuleTargetsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an alert template.
 *
 * @description This topic provides an example on how to query the details of an alert template whose ID is `70****`.
 *
 * @param request DescribeMetricRuleTemplateAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricRuleTemplateAttributeResponse
 */
DescribeMetricRuleTemplateAttributeResponse Client::describeMetricRuleTemplateAttributeWithOptions(const DescribeMetricRuleTemplateAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMetricRuleTemplateAttributeResponse>();
}

/**
 * @summary Queries the details of an alert template.
 *
 * @description This topic provides an example on how to query the details of an alert template whose ID is `70****`.
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
    query["History"] = request.history();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * *   The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
 * *   Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
 * ### [](#)Precautions
 * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
 * *   The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
 * *   The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
 * *   The storage duration is 91 days if the value of the `Period` is greater than or equal to 300 seconds.
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
    query["Dimensions"] = request.dimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExpress()) {
    query["Express"] = request.express();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.length();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasOrderDesc()) {
    query["OrderDesc"] = request.orderDesc();
  }

  if (!!request.hasOrderby()) {
    query["Orderby"] = request.orderby();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMetricTopResponse>();
}

/**
 * @summary Queries the latest monitoring data of a metric for a cloud service. The data can be sorted by a specified order.
 *
 * @description ### [](#)Limits
 * *   The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
 * *   Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
 * ### [](#)Precautions
 * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
 * *   The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
 * *   The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
 * *   The storage duration is 91 days if the value of the `Period` is greater than or equal to 300 seconds.
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
    query["GroupId"] = request.groupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["GroupId"] = request.groupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Queries the details of the resources in an application group.
 *
 * @param request DescribeMonitorGroupInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitorGroupInstanceAttributeResponse
 */
DescribeMonitorGroupInstanceAttributeResponse Client::describeMonitorGroupInstanceAttributeWithOptions(const DescribeMonitorGroupInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTotal()) {
    query["Total"] = request.total();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMonitorGroupInstanceAttributeResponse>();
}

/**
 * @summary Queries the details of the resources in an application group.
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
    query["Category"] = request.category();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Queries the policies that are used to pause alert notifications for an application group.
 *
 * @param request DescribeMonitorGroupNotifyPolicyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitorGroupNotifyPolicyListResponse
 */
DescribeMonitorGroupNotifyPolicyListResponse Client::describeMonitorGroupNotifyPolicyListWithOptions(const DescribeMonitorGroupNotifyPolicyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.policyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMonitorGroupNotifyPolicyListResponse>();
}

/**
 * @summary Queries the policies that are used to pause alert notifications for an application group.
 *
 * @param request DescribeMonitorGroupNotifyPolicyListRequest
 * @return DescribeMonitorGroupNotifyPolicyListResponse
 */
DescribeMonitorGroupNotifyPolicyListResponse Client::describeMonitorGroupNotifyPolicyList(const DescribeMonitorGroupNotifyPolicyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitorGroupNotifyPolicyListWithOptions(request, runtime);
}

/**
 * @summary Queries application groups.
 *
 * @description This topic provides an example of how to query the application groups of the current account. The response shows that the current account has two application groups: `testGroup124` and `test123`.
 *
 * @param request DescribeMonitorGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitorGroupsResponse
 */
DescribeMonitorGroupsResponse Client::describeMonitorGroupsWithOptions(const DescribeMonitorGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDynamicTagRuleId()) {
    query["DynamicTagRuleId"] = request.dynamicTagRuleId();
  }

  if (!!request.hasGroupFounderTagKey()) {
    query["GroupFounderTagKey"] = request.groupFounderTagKey();
  }

  if (!!request.hasGroupFounderTagValue()) {
    query["GroupFounderTagValue"] = request.groupFounderTagValue();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasIncludeTemplateHistory()) {
    query["IncludeTemplateHistory"] = request.includeTemplateHistory();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSelectContactGroups()) {
    query["SelectContactGroups"] = request.selectContactGroups();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasTypes()) {
    query["Types"] = request.types();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMonitorGroupsResponse>();
}

/**
 * @summary Queries application groups.
 *
 * @description This topic provides an example of how to query the application groups of the current account. The response shows that the current account has two application groups: `testGroup124` and `test123`.
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
    query["ShowUsed"] = request.showUsed();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
  }));
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
  }));
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
 * @summary Queries all hosts within the current Alibaba Cloud account, including hosts on which the CloudMonitor agent is installed and uninstalled.
 *
 * @param request DescribeMonitoringAgentHostsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitoringAgentHostsResponse
 */
DescribeMonitoringAgentHostsResponse Client::describeMonitoringAgentHostsWithOptions(const DescribeMonitoringAgentHostsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunHost()) {
    query["AliyunHost"] = request.aliyunHost();
  }

  if (!!request.hasHostName()) {
    query["HostName"] = request.hostName();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasInstanceRegionId()) {
    query["InstanceRegionId"] = request.instanceRegionId();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSerialNumbers()) {
    query["SerialNumbers"] = request.serialNumbers();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasSysomStatus()) {
    query["SysomStatus"] = request.sysomStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMonitoringAgentHostsResponse>();
}

/**
 * @summary Queries all hosts within the current Alibaba Cloud account, including hosts on which the CloudMonitor agent is installed and uninstalled.
 *
 * @param request DescribeMonitoringAgentHostsRequest
 * @return DescribeMonitoringAgentHostsResponse
 */
DescribeMonitoringAgentHostsResponse Client::describeMonitoringAgentHosts(const DescribeMonitoringAgentHostsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitoringAgentHostsWithOptions(request, runtime);
}

/**
 * @description >  Before you call this operation, call the CreateMonitoringAgentProcess operation to create processes. For more information, see [CreateMonitoringAgentProcess](https://help.aliyun.com/document_detail/114951.html~).
 * This topic provides an example of how to query the processes of the `i-hp3hl3cx1pbahzy8****` instance. The response indicates the details of the `NGINX` and `HTTP` processes.
 *
 * @param request DescribeMonitoringAgentProcessesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitoringAgentProcessesResponse
 */
DescribeMonitoringAgentProcessesResponse Client::describeMonitoringAgentProcessesWithOptions(const DescribeMonitoringAgentProcessesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMonitoringAgentProcessesResponse>();
}

/**
 * @description >  Before you call this operation, call the CreateMonitoringAgentProcess operation to create processes. For more information, see [CreateMonitoringAgentProcess](https://help.aliyun.com/document_detail/114951.html~).
 * This topic provides an example of how to query the processes of the `i-hp3hl3cx1pbahzy8****` instance. The response indicates the details of the `NGINX` and `HTTP` processes.
 *
 * @param request DescribeMonitoringAgentProcessesRequest
 * @return DescribeMonitoringAgentProcessesResponse
 */
DescribeMonitoringAgentProcessesResponse Client::describeMonitoringAgentProcesses(const DescribeMonitoringAgentProcessesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitoringAgentProcessesWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the CloudMonitor agent.
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
    query["HostAvailabilityTaskId"] = request.hostAvailabilityTaskId();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeMonitoringAgentStatusesResponse>();
}

/**
 * @summary Queries the status of the CloudMonitor agent.
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
  }));
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
 * @summary Queries the keys of all tags that are attached to cloud resources in a region.
 *
 * @description >  If a tag is attached to multiple cloud resources in the region, the key of the tag is returned only once.
 *
 * @param request DescribeProductResourceTagKeyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductResourceTagKeyListResponse
 */
DescribeProductResourceTagKeyListResponse Client::describeProductResourceTagKeyListWithOptions(const DescribeProductResourceTagKeyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeProductResourceTagKeyListResponse>();
}

/**
 * @summary Queries the keys of all tags that are attached to cloud resources in a region.
 *
 * @description >  If a tag is attached to multiple cloud resources in the region, the key of the tag is returned only once.
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
  }));
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
 * @summary Queries the information about monitored services in CloudMonitor.
 *
 * @description The information obtained by this operation includes the service description, namespace, and tags.
 *
 * @param request DescribeProjectMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProjectMetaResponse
 */
DescribeProjectMetaResponse Client::describeProjectMetaWithOptions(const DescribeProjectMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeProjectMetaResponse>();
}

/**
 * @summary Queries the information about monitored services in CloudMonitor.
 *
 * @description The information obtained by this operation includes the service description, namespace, and tags.
 *
 * @param request DescribeProjectMetaRequest
 * @return DescribeProjectMetaResponse
 */
DescribeProjectMetaResponse Client::describeProjectMeta(const DescribeProjectMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProjectMetaWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a site monitoring task.
 *
 * @description This topic provides an example on how to query the details of a site monitoring task whose ID is `cc641dff-c19d-45f3-ad0a-818a0c4f****`. The returned result indicates that the task name is `test123`, the URL that is monitored by the task is `https://aliyun.com`, and the name of the carrier is `Alibaba`.
 *
 * @param request DescribeSiteMonitorAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteMonitorAttributeResponse
 */
DescribeSiteMonitorAttributeResponse Client::describeSiteMonitorAttributeWithOptions(const DescribeSiteMonitorAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncludeAlert()) {
    query["IncludeAlert"] = request.includeAlert();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeSiteMonitorAttributeResponse>();
}

/**
 * @summary Queries the details of a site monitoring task.
 *
 * @description This topic provides an example on how to query the details of a site monitoring task whose ID is `cc641dff-c19d-45f3-ad0a-818a0c4f****`. The returned result indicates that the task name is `test123`, the URL that is monitored by the task is `https://aliyun.com`, and the name of the carrier is `Alibaba`.
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
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.length();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Queries the detection points that are provided by carriers.
 *
 * @description This topic provides an example on how to query the detection points that are provided by China Unicom in Guiyang.
 *
 * @param request DescribeSiteMonitorISPCityListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteMonitorISPCityListResponse
 */
DescribeSiteMonitorISPCityListResponse Client::describeSiteMonitorISPCityListWithOptions(const DescribeSiteMonitorISPCityListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCity()) {
    query["City"] = request.city();
  }

  if (!!request.hasIPV4()) {
    query["IPV4"] = request.IPV4();
  }

  if (!!request.hasIPV6()) {
    query["IPV6"] = request.IPV6();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.isp();
  }

  if (!!request.hasViewAll()) {
    query["ViewAll"] = request.viewAll();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeSiteMonitorISPCityListResponse>();
}

/**
 * @summary Queries the detection points that are provided by carriers.
 *
 * @description This topic provides an example on how to query the detection points that are provided by China Unicom in Guiyang.
 *
 * @param request DescribeSiteMonitorISPCityListRequest
 * @return DescribeSiteMonitorISPCityListResponse
 */
DescribeSiteMonitorISPCityListResponse Client::describeSiteMonitorISPCityList(const DescribeSiteMonitorISPCityListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteMonitorISPCityListWithOptions(request, runtime);
}

/**
 * @summary Queries site monitoring tasks.
 *
 * @description This topic provides an example on how to query all the site monitoring tasks of your Alibaba Cloud account. In this example, the returned result indicates that the Alibaba Cloud account has one site monitoring task named `HanZhou_ECS2`.
 *
 * @param request DescribeSiteMonitorListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteMonitorListResponse
 */
DescribeSiteMonitorListResponse Client::describeSiteMonitorListWithOptions(const DescribeSiteMonitorListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentGroup()) {
    query["AgentGroup"] = request.agentGroup();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskState()) {
    query["TaskState"] = request.taskState();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeSiteMonitorListResponse>();
}

/**
 * @summary Queries site monitoring tasks.
 *
 * @description This topic provides an example on how to query all the site monitoring tasks of your Alibaba Cloud account. In this example, the returned result indicates that the Alibaba Cloud account has one site monitoring task named `HanZhou_ECS2`.
 *
 * @param request DescribeSiteMonitorListRequest
 * @return DescribeSiteMonitorListResponse
 */
DescribeSiteMonitorListResponse Client::describeSiteMonitorList(const DescribeSiteMonitorListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteMonitorListWithOptions(request, runtime);
}

/**
 * @summary Queries the logs of one or more instant test tasks.
 *
 * @description You can create an instant test task only by using the Alibaba Cloud account that you used to enable Network Analysis and Monitoring.
 * This topic provides an example to show how to query the logs of an instant test task whose ID is `afa5c3ce-f944-4363-9edb-ce919a29****`.
 *
 * @param request DescribeSiteMonitorLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteMonitorLogResponse
 */
DescribeSiteMonitorLogResponse Client::describeSiteMonitorLogWithOptions(const DescribeSiteMonitorLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrowser()) {
    query["Browser"] = request.browser();
  }

  if (!!request.hasBrowserInfo()) {
    query["BrowserInfo"] = request.browserInfo();
  }

  if (!!request.hasCity()) {
    query["City"] = request.city();
  }

  if (!!request.hasDevice()) {
    query["Device"] = request.device();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.isp();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.length();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.taskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeSiteMonitorLogResponse>();
}

/**
 * @summary Queries the logs of one or more instant test tasks.
 *
 * @description You can create an instant test task only by using the Alibaba Cloud account that you used to enable Network Analysis and Monitoring.
 * This topic provides an example to show how to query the logs of an instant test task whose ID is `afa5c3ce-f944-4363-9edb-ce919a29****`.
 *
 * @param request DescribeSiteMonitorLogRequest
 * @return DescribeSiteMonitorLogResponse
 */
DescribeSiteMonitorLogResponse Client::describeSiteMonitorLog(const DescribeSiteMonitorLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteMonitorLogWithOptions(request, runtime);
}

/**
 * @summary Queries the quotas and version of site monitoring.
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeSiteMonitorQuotaResponse>();
}

/**
 * @summary Queries the quotas and version of site monitoring.
 *
 * @param request DescribeSiteMonitorQuotaRequest
 * @return DescribeSiteMonitorQuotaResponse
 */
DescribeSiteMonitorQuotaResponse Client::describeSiteMonitorQuota(const DescribeSiteMonitorQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteMonitorQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics of a specified metric for a specified site monitoring task.
 *
 * @description This topic provides an example on how to query the statistics of the `Availability` metric for a site monitoring task whose ID is `ef4cdc8b-9dc7-43e7-810e-f950e56c****`. The result indicates that the availability rate of the site is `100%`.
 *
 * @param request DescribeSiteMonitorStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteMonitorStatisticsResponse
 */
DescribeSiteMonitorStatisticsResponse Client::describeSiteMonitorStatisticsWithOptions(const DescribeSiteMonitorStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTimeRange()) {
    query["TimeRange"] = request.timeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeSiteMonitorStatisticsResponse>();
}

/**
 * @summary Queries the statistics of a specified metric for a specified site monitoring task.
 *
 * @description This topic provides an example on how to query the statistics of the `Availability` metric for a site monitoring task whose ID is `ef4cdc8b-9dc7-43e7-810e-f950e56c****`. The result indicates that the availability rate of the site is `100%`.
 *
 * @param request DescribeSiteMonitorStatisticsRequest
 * @return DescribeSiteMonitorStatisticsResponse
 */
DescribeSiteMonitorStatisticsResponse Client::describeSiteMonitorStatistics(const DescribeSiteMonitorStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteMonitorStatisticsWithOptions(request, runtime);
}

/**
 * @summary 查询拨测探测节点列表
 *
 * @param request DescribeSyntheticProbeListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSyntheticProbeListResponse
 */
DescribeSyntheticProbeListResponse Client::describeSyntheticProbeListWithOptions(const DescribeSyntheticProbeListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCity()) {
    query["City"] = request.city();
  }

  if (!!request.hasIdcProbe()) {
    query["IdcProbe"] = request.idcProbe();
  }

  if (!!request.hasIpv4()) {
    query["Ipv4"] = request.ipv4();
  }

  if (!!request.hasIpv6()) {
    query["Ipv6"] = request.ipv6();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.isp();
  }

  if (!!request.hasLmProbe()) {
    query["LmProbe"] = request.lmProbe();
  }

  if (!!request.hasMbProbe()) {
    query["MbProbe"] = request.mbProbe();
  }

  if (!!request.hasViewAll()) {
    query["ViewAll"] = request.viewAll();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeSyntheticProbeListResponse>();
}

/**
 * @summary 查询拨测探测节点列表
 *
 * @param request DescribeSyntheticProbeListRequest
 * @return DescribeSyntheticProbeListResponse
 */
DescribeSyntheticProbeListResponse Client::describeSyntheticProbeList(const DescribeSyntheticProbeListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSyntheticProbeListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a system event.
 *
 * @param request DescribeSystemEventAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSystemEventAttributeResponse
 */
DescribeSystemEventAttributeResponse Client::describeSystemEventAttributeWithOptions(const DescribeSystemEventAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasSearchKeywords()) {
    query["SearchKeywords"] = request.searchKeywords();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeSystemEventAttributeResponse>();
}

/**
 * @summary Queries the details of a system event.
 *
 * @param request DescribeSystemEventAttributeRequest
 * @return DescribeSystemEventAttributeResponse
 */
DescribeSystemEventAttributeResponse Client::describeSystemEventAttribute(const DescribeSystemEventAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSystemEventAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the number of times that a system event of a cloud service has occurred.
 *
 * @description ### [](#)Background information
 * You can call the [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html) operation to query the cloud services supported by CloudMonitor and their system events.
 * ### [](#)Description
 * This topic provides an example on how to query the number of times that a system event of `Elastic Compute Service (ECS)` has occurred. The returned result shows that the specified system event has occurred three times.
 *
 * @param request DescribeSystemEventCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSystemEventCountResponse
 */
DescribeSystemEventCountResponse Client::describeSystemEventCountWithOptions(const DescribeSystemEventCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasSearchKeywords()) {
    query["SearchKeywords"] = request.searchKeywords();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeSystemEventCountResponse>();
}

/**
 * @summary Queries the number of times that a system event of a cloud service has occurred.
 *
 * @description ### [](#)Background information
 * You can call the [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html) operation to query the cloud services supported by CloudMonitor and their system events.
 * ### [](#)Description
 * This topic provides an example on how to query the number of times that a system event of `Elastic Compute Service (ECS)` has occurred. The returned result shows that the specified system event has occurred three times.
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
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasSearchKeywords()) {
    query["SearchKeywords"] = request.searchKeywords();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Queries the meta information about system events.
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeSystemEventMetaListResponse>();
}

/**
 * @summary Queries the meta information about system events.
 *
 * @param request DescribeSystemEventMetaListRequest
 * @return DescribeSystemEventMetaListResponse
 */
DescribeSystemEventMetaListResponse Client::describeSystemEventMetaList(const DescribeSystemEventMetaListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSystemEventMetaListWithOptions(request, runtime);
}

/**
 * @summary Queries tag keys.
 *
 * @param request DescribeTagKeyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagKeyListResponse
 */
DescribeTagKeyListResponse Client::describeTagKeyListWithOptions(const DescribeTagKeyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeTagKeyListResponse>();
}

/**
 * @summary Queries tag keys.
 *
 * @param request DescribeTagKeyListRequest
 * @return DescribeTagKeyListResponse
 */
DescribeTagKeyListResponse Client::describeTagKeyList(const DescribeTagKeyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagKeyListWithOptions(request, runtime);
}

/**
 * @summary Queries the tag values corresponding to a specified tag key.
 *
 * @description This topic provides an example of how to query the tag values corresponding to `tagKey1`. The return results are `tagValue1` and `tagValue2`.
 *
 * @param request DescribeTagValueListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagValueListResponse
 */
DescribeTagValueListResponse Client::describeTagValueListWithOptions(const DescribeTagValueListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeTagValueListResponse>();
}

/**
 * @summary Queries the tag values corresponding to a specified tag key.
 *
 * @description This topic provides an example of how to query the tag values corresponding to `tagKey1`. The return results are `tagValue1` and `tagValue2`.
 *
 * @param request DescribeTagValueListRequest
 * @return DescribeTagValueListResponse
 */
DescribeTagValueListResponse Client::describeTagValueList(const DescribeTagValueListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagValueListWithOptions(request, runtime);
}

/**
 * @summary Queries unhealthy instances detected by availability monitoring tasks.
 *
 * @param request DescribeUnhealthyHostAvailabilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUnhealthyHostAvailabilityResponse
 */
DescribeUnhealthyHostAvailabilityResponse Client::describeUnhealthyHostAvailabilityWithOptions(const DescribeUnhealthyHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DescribeUnhealthyHostAvailabilityResponse>();
}

/**
 * @summary Queries unhealthy instances detected by availability monitoring tasks.
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
    query["Product"] = request.product();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @param request DisableEventRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableEventRulesResponse
 */
DisableEventRulesResponse Client::disableEventRulesWithOptions(const DisableEventRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleNames()) {
    query["RuleNames"] = request.ruleNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DisableEventRulesResponse>();
}

/**
 * @param request DisableEventRulesRequest
 * @return DisableEventRulesResponse
 */
DisableEventRulesResponse Client::disableEventRules(const DisableEventRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableEventRulesWithOptions(request, runtime);
}

/**
 * @summary Disables availability monitoring tasks.
 *
 * @param request DisableHostAvailabilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableHostAvailabilityResponse
 */
DisableHostAvailabilityResponse Client::disableHostAvailabilityWithOptions(const DisableHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DisableHostAvailabilityResponse>();
}

/**
 * @summary Disables availability monitoring tasks.
 *
 * @param request DisableHostAvailabilityRequest
 * @return DisableHostAvailabilityResponse
 */
DisableHostAvailabilityResponse Client::disableHostAvailability(const DisableHostAvailabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableHostAvailabilityWithOptions(request, runtime);
}

/**
 * @summary Disables alert rules.
 *
 * @param request DisableMetricRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableMetricRulesResponse
 */
DisableMetricRulesResponse Client::disableMetricRulesWithOptions(const DisableMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DisableMetricRulesResponse>();
}

/**
 * @summary Disables alert rules.
 *
 * @param request DisableMetricRulesRequest
 * @return DisableMetricRulesResponse
 */
DisableMetricRulesResponse Client::disableMetricRules(const DisableMetricRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableMetricRulesWithOptions(request, runtime);
}

/**
 * @summary Disables site monitoring tasks.
 *
 * @param request DisableSiteMonitorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSiteMonitorsResponse
 */
DisableSiteMonitorsResponse Client::disableSiteMonitorsWithOptions(const DisableSiteMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.taskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<DisableSiteMonitorsResponse>();
}

/**
 * @summary Disables site monitoring tasks.
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
    query["Product"] = request.product();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @param request EnableEventRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableEventRulesResponse
 */
EnableEventRulesResponse Client::enableEventRulesWithOptions(const EnableEventRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleNames()) {
    query["RuleNames"] = request.ruleNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<EnableEventRulesResponse>();
}

/**
 * @param request EnableEventRulesRequest
 * @return EnableEventRulesResponse
 */
EnableEventRulesResponse Client::enableEventRules(const EnableEventRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableEventRulesWithOptions(request, runtime);
}

/**
 * @summary Enables availability monitoring tasks.
 *
 * @param request EnableHostAvailabilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableHostAvailabilityResponse
 */
EnableHostAvailabilityResponse Client::enableHostAvailabilityWithOptions(const EnableHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<EnableHostAvailabilityResponse>();
}

/**
 * @summary Enables availability monitoring tasks.
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
    query["Id"] = request.id();
  }

  if (!!request.hasIsEnable()) {
    query["IsEnable"] = request.isEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["TaskIds"] = request.taskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary InstallMonitoringAgent
 *
 * @description ## Prerequisites
 * The Cloud Assistant client is installed on an ECS instance. For more information about how to install the Cloud Assistant client, see [Overview](https://help.aliyun.com/document_detail/64601.html).
 *
 * @param request InstallMonitoringAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallMonitoringAgentResponse
 */
InstallMonitoringAgentResponse Client::installMonitoringAgentWithOptions(const InstallMonitoringAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasInstallCommand()) {
    query["InstallCommand"] = request.installCommand();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<InstallMonitoringAgentResponse>();
}

/**
 * @summary InstallMonitoringAgent
 *
 * @description ## Prerequisites
 * The Cloud Assistant client is installed on an ECS instance. For more information about how to install the Cloud Assistant client, see [Overview](https://help.aliyun.com/document_detail/64601.html).
 *
 * @param request InstallMonitoringAgentRequest
 * @return InstallMonitoringAgentResponse
 */
InstallMonitoringAgentResponse Client::installMonitoringAgent(const InstallMonitoringAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installMonitoringAgentWithOptions(request, runtime);
}

/**
 * @param request ModifyGroupMonitoringAgentProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGroupMonitoringAgentProcessResponse
 */
ModifyGroupMonitoringAgentProcessResponse Client::modifyGroupMonitoringAgentProcessWithOptions(const ModifyGroupMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertConfig()) {
    query["AlertConfig"] = request.alertConfig();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasMatchExpressFilterRelation()) {
    query["MatchExpressFilterRelation"] = request.matchExpressFilterRelation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<ModifyGroupMonitoringAgentProcessResponse>();
}

/**
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
    query["AlertConfigEscalationList"] = request.alertConfigEscalationList();
  }

  if (!!request.hasAlertConfigTargetList()) {
    query["AlertConfigTargetList"] = request.alertConfigTargetList();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasInstanceList()) {
    query["InstanceList"] = request.instanceList();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskScope()) {
    query["TaskScope"] = request.taskScope();
  }

  if (!!request.hasAlertConfig()) {
    query["AlertConfig"] = request.alertConfig();
  }

  if (!!request.hasTaskOption()) {
    query["TaskOption"] = request.taskOption();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["HostName"] = request.hostName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<ModifyHostInfoResponse>();
}

/**
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
 * @summary Modifies a namespace.
 *
 * @description This topic provides an example on how to change the data retention period of the `aliyun` namespace to `cms.s1.2xlarge`. The response shows that the namespace is modified.
 *
 * @param request ModifyHybridMonitorNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridMonitorNamespaceResponse
 */
ModifyHybridMonitorNamespaceResponse Client::modifyHybridMonitorNamespaceWithOptions(const ModifyHybridMonitorNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasSpec()) {
    query["Spec"] = request.spec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<ModifyHybridMonitorNamespaceResponse>();
}

/**
 * @summary Modifies a namespace.
 *
 * @description This topic provides an example on how to change the data retention period of the `aliyun` namespace to `cms.s1.2xlarge`. The response shows that the namespace is modified.
 *
 * @param request ModifyHybridMonitorNamespaceRequest
 * @return ModifyHybridMonitorNamespaceResponse
 */
ModifyHybridMonitorNamespaceResponse Client::modifyHybridMonitorNamespace(const ModifyHybridMonitorNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridMonitorNamespaceWithOptions(request, runtime);
}

/**
 * @summary Modifies a Logstore group.
 *
 * @description In this example, a Logstore group named `Logstore_test` is modified. The Logstore of the `aliyun-project` project in the `cn-hangzhou` region is changed to `Logstore-aliyun-all`. The response shows that the Logstore group is modified.
 *
 * @param request ModifyHybridMonitorSLSGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridMonitorSLSGroupResponse
 */
ModifyHybridMonitorSLSGroupResponse Client::modifyHybridMonitorSLSGroupWithOptions(const ModifyHybridMonitorSLSGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSLSGroupConfig()) {
    query["SLSGroupConfig"] = request.SLSGroupConfig();
  }

  if (!!request.hasSLSGroupDescription()) {
    query["SLSGroupDescription"] = request.SLSGroupDescription();
  }

  if (!!request.hasSLSGroupName()) {
    query["SLSGroupName"] = request.SLSGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<ModifyHybridMonitorSLSGroupResponse>();
}

/**
 * @summary Modifies a Logstore group.
 *
 * @description In this example, a Logstore group named `Logstore_test` is modified. The Logstore of the `aliyun-project` project in the `cn-hangzhou` region is changed to `Logstore-aliyun-all`. The response shows that the Logstore group is modified.
 *
 * @param request ModifyHybridMonitorSLSGroupRequest
 * @return ModifyHybridMonitorSLSGroupResponse
 */
ModifyHybridMonitorSLSGroupResponse Client::modifyHybridMonitorSLSGroup(const ModifyHybridMonitorSLSGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHybridMonitorSLSGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies a metric for the logs that are imported from Log Service.
 *
 * @description This topic provides an example on how to change the collection period of a metric import task whose ID is `36****` to `15` seconds. The task is used to monitor the logs that are imported from Log Service. The returned result indicates that the metric is modified.
 *
 * @param request ModifyHybridMonitorTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHybridMonitorTaskResponse
 */
ModifyHybridMonitorTaskResponse Client::modifyHybridMonitorTaskWithOptions(const ModifyHybridMonitorTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttachLabels()) {
    query["AttachLabels"] = request.attachLabels();
  }

  if (!!request.hasCollectInterval()) {
    query["CollectInterval"] = request.collectInterval();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasSLSProcessConfig()) {
    query["SLSProcessConfig"] = request.SLSProcessConfig();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<ModifyHybridMonitorTaskResponse>();
}

/**
 * @summary Modifies a metric for the logs that are imported from Log Service.
 *
 * @description This topic provides an example on how to change the collection period of a metric import task whose ID is `36****` to `15` seconds. The task is used to monitor the logs that are imported from Log Service. The returned result indicates that the metric is modified.
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
    query["Category"] = request.category();
  }

  if (!!request.hasEffectiveTime()) {
    query["EffectiveTime"] = request.effectiveTime();
  }

  if (!!request.hasEnableEndTime()) {
    query["EnableEndTime"] = request.enableEndTime();
  }

  if (!!request.hasEnableStartTime()) {
    query["EnableStartTime"] = request.enableStartTime();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasInstances()) {
    query["Instances"] = request.instances();
  }

  if (!!request.hasMetrics()) {
    query["Metrics"] = request.metrics();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.scopeType();
  }

  if (!!request.hasScopeValue()) {
    query["ScopeValue"] = request.scopeValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["AlertTemplates"] = request.alertTemplates();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRestVersion()) {
    query["RestVersion"] = request.restVersion();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @param request ModifyMonitorGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMonitorGroupResponse
 */
ModifyMonitorGroupResponse Client::modifyMonitorGroupWithOptions(const ModifyMonitorGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroups()) {
    query["ContactGroups"] = request.contactGroups();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<ModifyMonitorGroupResponse>();
}

/**
 * @param request ModifyMonitorGroupRequest
 * @return ModifyMonitorGroupResponse
 */
ModifyMonitorGroupResponse Client::modifyMonitorGroup(const ModifyMonitorGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMonitorGroupWithOptions(request, runtime);
}

/**
 * @summary ModifyMonitorGroupInstances
 *
 * @param request ModifyMonitorGroupInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMonitorGroupInstancesResponse
 */
ModifyMonitorGroupInstancesResponse Client::modifyMonitorGroupInstancesWithOptions(const ModifyMonitorGroupInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstances()) {
    query["Instances"] = request.instances();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<ModifyMonitorGroupInstancesResponse>();
}

/**
 * @summary ModifyMonitorGroupInstances
 *
 * @param request ModifyMonitorGroupInstancesRequest
 * @return ModifyMonitorGroupInstancesResponse
 */
ModifyMonitorGroupInstancesResponse Client::modifyMonitorGroupInstances(const ModifyMonitorGroupInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMonitorGroupInstancesWithOptions(request, runtime);
}

/**
 * @summary Modifies a site monitoring task.
 *
 * @description The number of site monitoring tasks.
 *
 * @param request ModifySiteMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySiteMonitorResponse
 */
ModifySiteMonitorResponse Client::modifySiteMonitorWithOptions(const ModifySiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.address();
  }

  if (!!request.hasAlertIds()) {
    query["AlertIds"] = request.alertIds();
  }

  if (!!request.hasCustomSchedule()) {
    query["CustomSchedule"] = request.customSchedule();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIntervalUnit()) {
    query["IntervalUnit"] = request.intervalUnit();
  }

  if (!!request.hasIspCities()) {
    query["IspCities"] = request.ispCities();
  }

  if (!!request.hasOptionsJson()) {
    query["OptionsJson"] = request.optionsJson();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<ModifySiteMonitorResponse>();
}

/**
 * @summary Modifies a site monitoring task.
 *
 * @description The number of site monitoring tasks.
 *
 * @param request ModifySiteMonitorRequest
 * @return ModifySiteMonitorResponse
 */
ModifySiteMonitorResponse Client::modifySiteMonitor(const ModifySiteMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySiteMonitorWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies an alert contact.
 *
 * @param request PutContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutContactResponse
 */
PutContactResponse Client::putContactWithOptions(const PutContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactName()) {
    query["ContactName"] = request.contactName();
  }

  if (!!request.hasDescribe()) {
    query["Describe"] = request.describe();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasChannels()) {
    query["Channels"] = request.channels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<PutContactResponse>();
}

/**
 * @summary Creates or modifies an alert contact.
 *
 * @param request PutContactRequest
 * @return PutContactResponse
 */
PutContactResponse Client::putContact(const PutContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putContactWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies an alert contact group.
 *
 * @description This topic provides an example on how to create an alert contact group named `ECS_Group`.
 *
 * @param request PutContactGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutContactGroupResponse
 */
PutContactGroupResponse Client::putContactGroupWithOptions(const PutContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupName()) {
    query["ContactGroupName"] = request.contactGroupName();
  }

  if (!!request.hasContactNames()) {
    query["ContactNames"] = request.contactNames();
  }

  if (!!request.hasDescribe()) {
    query["Describe"] = request.describe();
  }

  if (!!request.hasEnableSubscribed()) {
    query["EnableSubscribed"] = request.enableSubscribed();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<PutContactGroupResponse>();
}

/**
 * @summary Creates or modifies an alert contact group.
 *
 * @description This topic provides an example on how to create an alert contact group named `ECS_Group`.
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
    query["EventInfo"] = request.eventInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @description Before you call this operation, call the PutCustomEvent operation to report the monitoring data of the custom event. For more information, see [PutCustomEvent](https://help.aliyun.com/document_detail/115012.html).
 *
 * @param request PutCustomEventRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutCustomEventRuleResponse
 */
PutCustomEventRuleResponse Client::putCustomEventRuleWithOptions(const PutCustomEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroups()) {
    query["ContactGroups"] = request.contactGroups();
  }

  if (!!request.hasEffectiveInterval()) {
    query["EffectiveInterval"] = request.effectiveInterval();
  }

  if (!!request.hasEmailSubject()) {
    query["EmailSubject"] = request.emailSubject();
  }

  if (!!request.hasEventName()) {
    query["EventName"] = request.eventName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.threshold();
  }

  if (!!request.hasWebhook()) {
    query["Webhook"] = request.webhook();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<PutCustomEventRuleResponse>();
}

/**
 * @description Before you call this operation, call the PutCustomEvent operation to report the monitoring data of the custom event. For more information, see [PutCustomEvent](https://help.aliyun.com/document_detail/115012.html).
 *
 * @param request PutCustomEventRuleRequest
 * @return PutCustomEventRuleResponse
 */
PutCustomEventRuleResponse Client::putCustomEventRule(const PutCustomEventRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putCustomEventRuleWithOptions(request, runtime);
}

/**
 * @summary Reports monitoring data.
 *
 * @description >  We recommend that you call the [PutHybridMonitorMetricData](https://help.aliyun.com/document_detail/383455.html) operation of Hybrid Cloud Monitoring to report monitoring data.
 *
 * @param request PutCustomMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutCustomMetricResponse
 */
PutCustomMetricResponse Client::putCustomMetricWithOptions(const PutCustomMetricRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMetricList()) {
    query["MetricList"] = request.metricList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<PutCustomMetricResponse>();
}

/**
 * @summary Reports monitoring data.
 *
 * @description >  We recommend that you call the [PutHybridMonitorMetricData](https://help.aliyun.com/document_detail/383455.html) operation of Hybrid Cloud Monitoring to report monitoring data.
 *
 * @param request PutCustomMetricRequest
 * @return PutCustomMetricResponse
 */
PutCustomMetricResponse Client::putCustomMetric(const PutCustomMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putCustomMetricWithOptions(request, runtime);
}

/**
 * @summary Creates a custom alert rule.
 *
 * @description Before you call this operation, call the PutCustomMetric operation to report custom monitoring data. For more information, see [PutCustomMetric](https://help.aliyun.com/document_detail/115004.html).
 *
 * @param request PutCustomMetricRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutCustomMetricRuleResponse
 */
PutCustomMetricRuleResponse Client::putCustomMetricRuleWithOptions(const PutCustomMetricRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComparisonOperator()) {
    query["ComparisonOperator"] = request.comparisonOperator();
  }

  if (!!request.hasContactGroups()) {
    query["ContactGroups"] = request.contactGroups();
  }

  if (!!request.hasEffectiveInterval()) {
    query["EffectiveInterval"] = request.effectiveInterval();
  }

  if (!!request.hasEmailSubject()) {
    query["EmailSubject"] = request.emailSubject();
  }

  if (!!request.hasEvaluationCount()) {
    query["EvaluationCount"] = request.evaluationCount();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.resources();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.silenceTime();
  }

  if (!!request.hasStatistics()) {
    query["Statistics"] = request.statistics();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.threshold();
  }

  if (!!request.hasWebhook()) {
    query["Webhook"] = request.webhook();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<PutCustomMetricRuleResponse>();
}

/**
 * @summary Creates a custom alert rule.
 *
 * @description Before you call this operation, call the PutCustomMetric operation to report custom monitoring data. For more information, see [PutCustomMetric](https://help.aliyun.com/document_detail/115004.html).
 *
 * @param request PutCustomMetricRuleRequest
 * @return PutCustomMetricRuleResponse
 */
PutCustomMetricRuleResponse Client::putCustomMetricRule(const PutCustomMetricRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putCustomMetricRuleWithOptions(request, runtime);
}

/**
 * @summary 创建或者修改事件监控
 *
 * @description If the specified rule name does not exist, an event-triggered alert rule is created. If the specified rule name exists, the specified event-triggered alert rule is modified.
 * In this example, the `myRuleName` alert rule is created for the `ecs` cloud service.
 *
 * @param request PutEventRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutEventRuleResponse
 */
PutEventRuleResponse Client::putEventRuleWithOptions(const PutEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEventPattern()) {
    query["EventPattern"] = request.eventPattern();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.silenceTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<PutEventRuleResponse>();
}

/**
 * @summary 创建或者修改事件监控
 *
 * @description If the specified rule name does not exist, an event-triggered alert rule is created. If the specified rule name exists, the specified event-triggered alert rule is modified.
 * In this example, the `myRuleName` alert rule is created for the `ecs` cloud service.
 *
 * @param request PutEventRuleRequest
 * @return PutEventRuleResponse
 */
PutEventRuleResponse Client::putEventRule(const PutEventRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putEventRuleWithOptions(request, runtime);
}

/**
 * @summary Adds or modifies the push channels of an event-triggered alert rule.
 *
 * @param request PutEventRuleTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutEventRuleTargetsResponse
 */
PutEventRuleTargetsResponse Client::putEventRuleTargetsWithOptions(const PutEventRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactParameters()) {
    query["ContactParameters"] = request.contactParameters();
  }

  if (!!request.hasFcParameters()) {
    query["FcParameters"] = request.fcParameters();
  }

  if (!!request.hasMnsParameters()) {
    query["MnsParameters"] = request.mnsParameters();
  }

  if (!!request.hasOpenApiParameters()) {
    query["OpenApiParameters"] = request.openApiParameters();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSlsParameters()) {
    query["SlsParameters"] = request.slsParameters();
  }

  if (!!request.hasWebhookParameters()) {
    query["WebhookParameters"] = request.webhookParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<PutEventRuleTargetsResponse>();
}

/**
 * @summary Adds or modifies the push channels of an event-triggered alert rule.
 *
 * @param request PutEventRuleTargetsRequest
 * @return PutEventRuleTargetsResponse
 */
PutEventRuleTargetsResponse Client::putEventRuleTargets(const PutEventRuleTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putEventRuleTargetsWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies a configuration set for exporting monitoring data.
 *
 * @description > The monitoring data can be exported only to Log Service. More services will be supported in the future.
 *
 * @param request PutExporterOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutExporterOutputResponse
 */
PutExporterOutputResponse Client::putExporterOutputWithOptions(const PutExporterOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigJson()) {
    query["ConfigJson"] = request.configJson();
  }

  if (!!request.hasDesc()) {
    query["Desc"] = request.desc();
  }

  if (!!request.hasDestName()) {
    query["DestName"] = request.destName();
  }

  if (!!request.hasDestType()) {
    query["DestType"] = request.destType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<PutExporterOutputResponse>();
}

/**
 * @summary Creates or modifies a configuration set for exporting monitoring data.
 *
 * @description > The monitoring data can be exported only to Log Service. More services will be supported in the future.
 *
 * @param request PutExporterOutputRequest
 * @return PutExporterOutputResponse
 */
PutExporterOutputResponse Client::putExporterOutput(const PutExporterOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putExporterOutputWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies a data export rule.
 *
 * @param request PutExporterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutExporterRuleResponse
 */
PutExporterRuleResponse Client::putExporterRuleWithOptions(const PutExporterRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescribe()) {
    query["Describe"] = request.describe();
  }

  if (!!request.hasDstNames()) {
    query["DstNames"] = request.dstNames();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasTargetWindows()) {
    query["TargetWindows"] = request.targetWindows();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<PutExporterRuleResponse>();
}

/**
 * @summary Creates or modifies a data export rule.
 *
 * @param request PutExporterRuleRequest
 * @return PutExporterRuleResponse
 */
PutExporterRuleResponse Client::putExporterRule(const PutExporterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putExporterRuleWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies an alert rule for an application group.
 *
 * @description This topic provides an example on how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the `17285****` application group. The ID of the alert rule is `123456`. The name of the alert rule is `Rule_test`. The alert level is `Critical`. The statistical method is `Average`. The alert threshold comparator is `GreaterThanOrEqualToThreshold`. The alert threshold is `90`. The number of alert retries is `3`. The returned result shows that the alert rule is created and the alert rule ID is `123456`.
 *
 * @param request PutGroupMetricRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutGroupMetricRuleResponse
 */
PutGroupMetricRuleResponse Client::putGroupMetricRuleWithOptions(const PutGroupMetricRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasContactGroups()) {
    query["ContactGroups"] = request.contactGroups();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.dimensions();
  }

  if (!!request.hasEffectiveInterval()) {
    query["EffectiveInterval"] = request.effectiveInterval();
  }

  if (!!request.hasEmailSubject()) {
    query["EmailSubject"] = request.emailSubject();
  }

  if (!!request.hasExtraDimensionJson()) {
    query["ExtraDimensionJson"] = request.extraDimensionJson();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNoDataPolicy()) {
    query["NoDataPolicy"] = request.noDataPolicy();
  }

  if (!!request.hasNoEffectiveInterval()) {
    query["NoEffectiveInterval"] = request.noEffectiveInterval();
  }

  if (!!request.hasOptions()) {
    query["Options"] = request.options();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.silenceTime();
  }

  if (!!request.hasWebhook()) {
    query["Webhook"] = request.webhook();
  }

  if (!!request.hasEscalations()) {
    query["Escalations"] = request.escalations();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<PutGroupMetricRuleResponse>();
}

/**
 * @summary Creates or modifies an alert rule for an application group.
 *
 * @description This topic provides an example on how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the `17285****` application group. The ID of the alert rule is `123456`. The name of the alert rule is `Rule_test`. The alert level is `Critical`. The statistical method is `Average`. The alert threshold comparator is `GreaterThanOrEqualToThreshold`. The alert threshold is `90`. The number of alert retries is `3`. The returned result shows that the alert rule is created and the alert rule ID is `123456`.
 *
 * @param request PutGroupMetricRuleRequest
 * @return PutGroupMetricRuleResponse
 */
PutGroupMetricRuleResponse Client::putGroupMetricRule(const PutGroupMetricRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putGroupMetricRuleWithOptions(request, runtime);
}

/**
 * @summary Imports the monitoring data of a metric to a namespace of Hybrid Cloud Monitoring.
 *
 * @description ## [](#)Prerequisites
 * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
 * ## [](#)Limits
 * The size of the monitoring data that you import at a time must be less than or equal to 1 MB.
 * ## [](#)Operation description
 * This topic provides an example on how to import the monitoring data of the `CPU_Usage` metric to the `default-aliyun` namespace of Hybrid Cloud Monitoring.
 *
 * @param request PutHybridMonitorMetricDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutHybridMonitorMetricDataResponse
 */
PutHybridMonitorMetricDataResponse Client::putHybridMonitorMetricDataWithOptions(const PutHybridMonitorMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMetricList()) {
    query["MetricList"] = request.metricList();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<PutHybridMonitorMetricDataResponse>();
}

/**
 * @summary Imports the monitoring data of a metric to a namespace of Hybrid Cloud Monitoring.
 *
 * @description ## [](#)Prerequisites
 * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
 * ## [](#)Limits
 * The size of the monitoring data that you import at a time must be less than or equal to 1 MB.
 * ## [](#)Operation description
 * This topic provides an example on how to import the monitoring data of the `CPU_Usage` metric to the `default-aliyun` namespace of Hybrid Cloud Monitoring.
 *
 * @param request PutHybridMonitorMetricDataRequest
 * @return PutHybridMonitorMetricDataResponse
 */
PutHybridMonitorMetricDataResponse Client::putHybridMonitorMetricData(const PutHybridMonitorMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putHybridMonitorMetricDataWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies a log monitoring metric.
 *
 * @description In the example of this topic, the `cpu_total` log monitoring metric is created. The response shows that the log monitoring metric is created and the metric ID is `16****`.
 *
 * @param request PutLogMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutLogMonitorResponse
 */
PutLogMonitorResponse Client::putLogMonitorWithOptions(const PutLogMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregates()) {
    query["Aggregates"] = request.aggregates();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasGroupbys()) {
    query["Groupbys"] = request.groupbys();
  }

  if (!!request.hasLogId()) {
    query["LogId"] = request.logId();
  }

  if (!!request.hasMetricExpress()) {
    query["MetricExpress"] = request.metricExpress();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasSlsLogstore()) {
    query["SlsLogstore"] = request.slsLogstore();
  }

  if (!!request.hasSlsProject()) {
    query["SlsProject"] = request.slsProject();
  }

  if (!!request.hasSlsRegionId()) {
    query["SlsRegionId"] = request.slsRegionId();
  }

  if (!!request.hasTumblingwindows()) {
    query["Tumblingwindows"] = request.tumblingwindows();
  }

  if (!!request.hasUnit()) {
    query["Unit"] = request.unit();
  }

  if (!!request.hasValueFilter()) {
    query["ValueFilter"] = request.valueFilter();
  }

  if (!!request.hasValueFilterRelation()) {
    query["ValueFilterRelation"] = request.valueFilterRelation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<PutLogMonitorResponse>();
}

/**
 * @summary Creates or modifies a log monitoring metric.
 *
 * @description In the example of this topic, the `cpu_total` log monitoring metric is created. The response shows that the log monitoring metric is created and the metric ID is `16****`.
 *
 * @param request PutLogMonitorRequest
 * @return PutLogMonitorResponse
 */
PutLogMonitorResponse Client::putLogMonitor(const PutLogMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putLogMonitorWithOptions(request, runtime);
}

/**
 * @summary Adds or modifies the push channels of an alert rule.
 *
 * @description # [](#)
 * This topic provides an example on how to associate an alert rule with a resource. In this example, the alert rule is `ae06917_75a8c43178ab66****`, the resource is `acs:mns:cn-hangzhou:120886317861****:/queues/test/message`, and the ID of the resource for which alerts are triggered is `1`. The response indicates that the resource is associated with the specified alert rule.
 *
 * @param request PutMetricRuleTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutMetricRuleTargetsResponse
 */
PutMetricRuleTargetsResponse Client::putMetricRuleTargetsWithOptions(const PutMetricRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasTargets()) {
    query["Targets"] = request.targets();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<PutMetricRuleTargetsResponse>();
}

/**
 * @summary Adds or modifies the push channels of an alert rule.
 *
 * @description # [](#)
 * This topic provides an example on how to associate an alert rule with a resource. In this example, the alert rule is `ae06917_75a8c43178ab66****`, the resource is `acs:mns:cn-hangzhou:120886317861****:/queues/test/message`, and the ID of the resource for which alerts are triggered is `1`. The response indicates that the resource is associated with the specified alert rule.
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
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasGroupRules()) {
    query["GroupRules"] = request.groupRules();
  }

  if (!!request.hasIsAsync()) {
    query["IsAsync"] = request.isAsync();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
    query["AutoInstall"] = request.autoInstall();
  }

  if (!!request.hasEnableInstallAgentNewECS()) {
    query["EnableInstallAgentNewECS"] = request.enableInstallAgentNewECS();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
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
 * @summary Configures an alert rule.
 *
 * @description This topic provides an example on how to create a threshold-triggered alert rule for the `cpu_total` metric of an Elastic Compute Service (ECS) instance whose ID is `i-uf6j91r34rnwawoo****`. The namespace of ECS metrics is `acs_ecs_dashboard`. The alert contact group of the alert rule is `ECS_Group`. The name of the alert rule is `test123`. The ID of the alert rule is `a151cd6023eacee2f0978e03863cc1697c89508****`. The statistical method for Critical-level alerts is `Average`. The comparison operator for Critical-level alerts is `GreaterThanOrEqualToThreshold`. The threshold for Critical-level alerts is `90`. The consecutive number of times for which the metric value meets the trigger condition before a Critical-level alert is triggered is `3`.
 * >  Statistics verification was added on August 15, 2024. Only the statistical value of the corresponding metric can be set for the Statistics parameter. For more information about how to obtain the value of this parameter, see [Appendix 1: Metrics](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics).
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
    request.setCompositeExpressionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.compositeExpression(), "CompositeExpression", "json"));
  }

  if (!!tmpReq.hasPrometheus()) {
    request.setPrometheusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.prometheus(), "Prometheus", "json"));
  }

  json query = {};
  if (!!request.hasCompositeExpressionShrink()) {
    query["CompositeExpression"] = request.compositeExpressionShrink();
  }

  if (!!request.hasContactGroups()) {
    query["ContactGroups"] = request.contactGroups();
  }

  if (!!request.hasEffectiveInterval()) {
    query["EffectiveInterval"] = request.effectiveInterval();
  }

  if (!!request.hasEmailSubject()) {
    query["EmailSubject"] = request.emailSubject();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNoDataPolicy()) {
    query["NoDataPolicy"] = request.noDataPolicy();
  }

  if (!!request.hasNoEffectiveInterval()) {
    query["NoEffectiveInterval"] = request.noEffectiveInterval();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasPrometheusShrink()) {
    query["Prometheus"] = request.prometheusShrink();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.resources();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.silenceTime();
  }

  if (!!request.hasWebhook()) {
    query["Webhook"] = request.webhook();
  }

  if (!!request.hasEscalations()) {
    query["Escalations"] = request.escalations();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<PutResourceMetricRuleResponse>();
}

/**
 * @summary Configures an alert rule.
 *
 * @description This topic provides an example on how to create a threshold-triggered alert rule for the `cpu_total` metric of an Elastic Compute Service (ECS) instance whose ID is `i-uf6j91r34rnwawoo****`. The namespace of ECS metrics is `acs_ecs_dashboard`. The alert contact group of the alert rule is `ECS_Group`. The name of the alert rule is `test123`. The ID of the alert rule is `a151cd6023eacee2f0978e03863cc1697c89508****`. The statistical method for Critical-level alerts is `Average`. The comparison operator for Critical-level alerts is `GreaterThanOrEqualToThreshold`. The threshold for Critical-level alerts is `90`. The consecutive number of times for which the metric value meets the trigger condition before a Critical-level alert is triggered is `3`.
 * >  Statistics verification was added on August 15, 2024. Only the statistical value of the corresponding metric can be set for the Statistics parameter. For more information about how to obtain the value of this parameter, see [Appendix 1: Metrics](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics).
 *
 * @param request PutResourceMetricRuleRequest
 * @return PutResourceMetricRuleResponse
 */
PutResourceMetricRuleResponse Client::putResourceMetricRule(const PutResourceMetricRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putResourceMetricRuleWithOptions(request, runtime);
}

/**
 * @summary Creates multiple alert rules for the specified metric of a specified resource.
 *
 * @description This topic provides an example on how to create a threshold-triggered alert rule for the `cpu_total` metric of an Elastic Compute Service (ECS) instance whose ID is `i-uf6j91r34rnwawoo****`. The namespace of ECS metrics is `acs_ecs_dashboard`. The alert contact group of the alert rule is `ECS_Group`. The name of the alert rule is `test123`. The ID of the alert rule is `a151cd6023eacee2f0978e03863cc1697c89508****`. The statistical method for Critical-level alerts is `Average`. The comparison operator for Critical-level alerts is `GreaterThanOrEqualToThreshold`. The threshold for Critical-level alerts is `90`. The consecutive number of times for which the metric value meets the trigger condition before a Critical-level alert is triggered is `3`.
 * >  Statistics verification was added on August 15, 2024. Only the statistical value of the corresponding metric can be set for the Statistics parameter. For more information about how to obtain the value of this parameter, see [Appendix 1: Metrics](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics).
 *
 * @param request PutResourceMetricRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutResourceMetricRulesResponse
 */
PutResourceMetricRulesResponse Client::putResourceMetricRulesWithOptions(const PutResourceMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRules()) {
    query["Rules"] = request.rules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<PutResourceMetricRulesResponse>();
}

/**
 * @summary Creates multiple alert rules for the specified metric of a specified resource.
 *
 * @description This topic provides an example on how to create a threshold-triggered alert rule for the `cpu_total` metric of an Elastic Compute Service (ECS) instance whose ID is `i-uf6j91r34rnwawoo****`. The namespace of ECS metrics is `acs_ecs_dashboard`. The alert contact group of the alert rule is `ECS_Group`. The name of the alert rule is `test123`. The ID of the alert rule is `a151cd6023eacee2f0978e03863cc1697c89508****`. The statistical method for Critical-level alerts is `Average`. The comparison operator for Critical-level alerts is `GreaterThanOrEqualToThreshold`. The threshold for Critical-level alerts is `90`. The consecutive number of times for which the metric value meets the trigger condition before a Critical-level alert is triggered is `3`.
 * >  Statistics verification was added on August 15, 2024. Only the statistical value of the corresponding metric can be set for the Statistics parameter. For more information about how to obtain the value of this parameter, see [Appendix 1: Metrics](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics).
 *
 * @param request PutResourceMetricRulesRequest
 * @return PutResourceMetricRulesResponse
 */
PutResourceMetricRulesResponse Client::putResourceMetricRules(const PutResourceMetricRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putResourceMetricRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes tags.
 *
 * @param request RemoveTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveTagsResponse
 */
RemoveTagsResponse Client::removeTagsWithOptions(const RemoveTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.groupIds();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<RemoveTagsResponse>();
}

/**
 * @summary Deletes tags.
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
 * @description This operation is used to test whether a system event can be triggered as expected. You can call this operation to simulate a system event and check whether an expected response is returned after the system event triggers an alert.
 *
 * @param request SendDryRunSystemEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendDryRunSystemEventResponse
 */
SendDryRunSystemEventResponse Client::sendDryRunSystemEventWithOptions(const SendDryRunSystemEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventContent()) {
    query["EventContent"] = request.eventContent();
  }

  if (!!request.hasEventName()) {
    query["EventName"] = request.eventName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<SendDryRunSystemEventResponse>();
}

/**
 * @summary Debugs a system event of an Alibaba Cloud service.
 *
 * @description This operation is used to test whether a system event can be triggered as expected. You can call this operation to simulate a system event and check whether an expected response is returned after the system event triggers an alert.
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
 * @description >  This API operation is not applicable to Elastic Compute Service (ECS) instances. To uninstall the agent from an ECS instance, see [Install and uninstall the CloudMonitor agent](https://help.aliyun.com/document_detail/183482.html).
 *
 * @param request UninstallMonitoringAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallMonitoringAgentResponse
 */
UninstallMonitoringAgentResponse Client::uninstallMonitoringAgentWithOptions(const UninstallMonitoringAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<UninstallMonitoringAgentResponse>();
}

/**
 * @summary Uninstalls the CloudMonitor agent from a third-party host.
 *
 * @description >  This API operation is not applicable to Elastic Compute Service (ECS) instances. To uninstall the agent from an ECS instance, see [Install and uninstall the CloudMonitor agent](https://help.aliyun.com/document_detail/183482.html).
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