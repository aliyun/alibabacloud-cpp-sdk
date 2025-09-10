#include <darabonba/Core.hpp>
#include <alibabacloud/Quotas20200510.hpp>
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
using namespace AlibabaCloud::Quotas20200510::Models;
namespace AlibabaCloud
{
namespace Quotas20200510
{

AlibabaCloud::Quotas20200510::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("quotas", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates a quota alert.
 *
 * @description The quota alerting feature has been upgraded and this API operation will be deprecated. If you want to create a quota alert of the new version, call CloudMonitor API operations. For more information, see [Use API operations to manage new quota alert rules](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request CreateQuotaAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQuotaAlarmResponse
 */
CreateQuotaAlarmResponse Client::createQuotaAlarmWithOptions(const CreateQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmName()) {
    body["AlarmName"] = request.alarmName();
  }

  if (!!request.hasOriginalContext()) {
    body["OriginalContext"] = request.originalContext();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.quotaActionCode();
  }

  if (!!request.hasQuotaDimensions()) {
    body["QuotaDimensions"] = request.quotaDimensions();
  }

  if (!!request.hasThreshold()) {
    body["Threshold"] = request.threshold();
  }

  if (!!request.hasThresholdPercent()) {
    body["ThresholdPercent"] = request.thresholdPercent();
  }

  if (!!request.hasThresholdType()) {
    body["ThresholdType"] = request.thresholdType();
  }

  if (!!request.hasWebHook()) {
    body["WebHook"] = request.webHook();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateQuotaAlarm"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQuotaAlarmResponse>();
}

/**
 * @summary Creates a quota alert.
 *
 * @description The quota alerting feature has been upgraded and this API operation will be deprecated. If you want to create a quota alert of the new version, call CloudMonitor API operations. For more information, see [Use API operations to manage new quota alert rules](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request CreateQuotaAlarmRequest
 * @return CreateQuotaAlarmResponse
 */
CreateQuotaAlarmResponse Client::createQuotaAlarm(const CreateQuotaAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQuotaAlarmWithOptions(request, runtime);
}

/**
 * @summary Submits an application to increase a quota.
 *
 * @description In this example, the operation is called to submit an application to increase the value of a quota whose ID is `q_security-groups` and whose name is Maximum Number of Security Groups. The quota belongs to Elastic Compute Service (ECS). The expected value of the quota is `804`, the application reason is `Scale Out`, and the ID of the region to which the quota belongs is `cn-hangzhou`.
 *
 * @param request CreateQuotaApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQuotaApplicationResponse
 */
CreateQuotaApplicationResponse Client::createQuotaApplicationWithOptions(const CreateQuotaApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuditMode()) {
    body["AuditMode"] = request.auditMode();
  }

  if (!!request.hasDesireValue()) {
    body["DesireValue"] = request.desireValue();
  }

  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.dimensions();
  }

  if (!!request.hasEffectiveTime()) {
    body["EffectiveTime"] = request.effectiveTime();
  }

  if (!!request.hasEnvLanguage()) {
    body["EnvLanguage"] = request.envLanguage();
  }

  if (!!request.hasExpireTime()) {
    body["ExpireTime"] = request.expireTime();
  }

  if (!!request.hasNoticeType()) {
    body["NoticeType"] = request.noticeType();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.quotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.quotaCategory();
  }

  if (!!request.hasReason()) {
    body["Reason"] = request.reason();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateQuotaApplication"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQuotaApplicationResponse>();
}

/**
 * @summary Submits an application to increase a quota.
 *
 * @description In this example, the operation is called to submit an application to increase the value of a quota whose ID is `q_security-groups` and whose name is Maximum Number of Security Groups. The quota belongs to Elastic Compute Service (ECS). The expected value of the quota is `804`, the application reason is `Scale Out`, and the ID of the region to which the quota belongs is `cn-hangzhou`.
 *
 * @param request CreateQuotaApplicationRequest
 * @return CreateQuotaApplicationResponse
 */
CreateQuotaApplicationResponse Client::createQuotaApplication(const CreateQuotaApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQuotaApplicationWithOptions(request, runtime);
}

/**
 * @summary Submits a quota increase application. After you add a quota item to a quota template, the system automatically submits quota applications only for new members of the resource directory. The quota values for existing members remain unchanged. If you want to increase the quota values of existing members, you can submit a quota application for the members by applying quota templates to the members. Only the management account of a resource directory can create multiple quota applications at a time.
 *
 * @description ### [](#)QPS limit
 * You can add a maximum of 10 quota items to a quota template at a time.
 *
 * @param request CreateQuotaApplicationsForTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQuotaApplicationsForTemplateResponse
 */
CreateQuotaApplicationsForTemplateResponse Client::createQuotaApplicationsForTemplateWithOptions(const CreateQuotaApplicationsForTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliyunUids()) {
    body["AliyunUids"] = request.aliyunUids();
  }

  if (!!request.hasDesireValue()) {
    body["DesireValue"] = request.desireValue();
  }

  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.dimensions();
  }

  if (!!request.hasEffectiveTime()) {
    body["EffectiveTime"] = request.effectiveTime();
  }

  if (!!request.hasEnvLanguage()) {
    body["EnvLanguage"] = request.envLanguage();
  }

  if (!!request.hasExpireTime()) {
    body["ExpireTime"] = request.expireTime();
  }

  if (!!request.hasNoticeType()) {
    body["NoticeType"] = request.noticeType();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.quotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.quotaCategory();
  }

  if (!!request.hasReason()) {
    body["Reason"] = request.reason();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateQuotaApplicationsForTemplate"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQuotaApplicationsForTemplateResponse>();
}

/**
 * @summary Submits a quota increase application. After you add a quota item to a quota template, the system automatically submits quota applications only for new members of the resource directory. The quota values for existing members remain unchanged. If you want to increase the quota values of existing members, you can submit a quota application for the members by applying quota templates to the members. Only the management account of a resource directory can create multiple quota applications at a time.
 *
 * @description ### [](#)QPS limit
 * You can add a maximum of 10 quota items to a quota template at a time.
 *
 * @param request CreateQuotaApplicationsForTemplateRequest
 * @return CreateQuotaApplicationsForTemplateResponse
 */
CreateQuotaApplicationsForTemplateResponse Client::createQuotaApplicationsForTemplate(const CreateQuotaApplicationsForTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQuotaApplicationsForTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a quota template by using the management account of a resource directory. After you create a quota template, if a member is added to the resource directory, the quota template automatically submits a quota increase request for the member. The quota values for existing members remain unchanged. You can use a quota template to apply for increases on multiple quotas at the same time. This automated approach improves the efficiency of quota management across your organization. Only the management account of a resource directory can create quota templates.
 *
 * @description ### [](#)Usage notes
 * You must set the `ServiceStatus` parameter to `1`. This ensures that the quota template is enabled.
 * You can call the [GetQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450407.html) operation to query the status of a quota template. If the value of the `ServiceStatus` parameter in the response is `0` or `-1`, you must call the [ModifyQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450406.html) operation to modify the value to `1`. A value of 0 indicates that the quota template is not configured. A value of -1 indicates that the quota template is disabled. A value of 1 indicates that the quota template is enabled.
 * ### [](#)
 * After you create a quota template, you can call the [ListQuotaApplicationsForTemplate](https://help.aliyun.com/document_detail/2584864.html) operation to view the approval result. If the value of the `Status` parameter in the response is `Agree`, the quota template is approved.
 *
 * @param request CreateTemplateQuotaItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTemplateQuotaItemResponse
 */
CreateTemplateQuotaItemResponse Client::createTemplateQuotaItemWithOptions(const CreateTemplateQuotaItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDesireValue()) {
    body["DesireValue"] = request.desireValue();
  }

  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.dimensions();
  }

  if (!!request.hasEffectiveTime()) {
    body["EffectiveTime"] = request.effectiveTime();
  }

  if (!!request.hasEnvLanguage()) {
    body["EnvLanguage"] = request.envLanguage();
  }

  if (!!request.hasExpireTime()) {
    body["ExpireTime"] = request.expireTime();
  }

  if (!!request.hasNoticeType()) {
    body["NoticeType"] = request.noticeType();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.quotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.quotaCategory();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateTemplateQuotaItem"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTemplateQuotaItemResponse>();
}

/**
 * @summary Creates a quota template by using the management account of a resource directory. After you create a quota template, if a member is added to the resource directory, the quota template automatically submits a quota increase request for the member. The quota values for existing members remain unchanged. You can use a quota template to apply for increases on multiple quotas at the same time. This automated approach improves the efficiency of quota management across your organization. Only the management account of a resource directory can create quota templates.
 *
 * @description ### [](#)Usage notes
 * You must set the `ServiceStatus` parameter to `1`. This ensures that the quota template is enabled.
 * You can call the [GetQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450407.html) operation to query the status of a quota template. If the value of the `ServiceStatus` parameter in the response is `0` or `-1`, you must call the [ModifyQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450406.html) operation to modify the value to `1`. A value of 0 indicates that the quota template is not configured. A value of -1 indicates that the quota template is disabled. A value of 1 indicates that the quota template is enabled.
 * ### [](#)
 * After you create a quota template, you can call the [ListQuotaApplicationsForTemplate](https://help.aliyun.com/document_detail/2584864.html) operation to view the approval result. If the value of the `Status` parameter in the response is `Agree`, the quota template is approved.
 *
 * @param request CreateTemplateQuotaItemRequest
 * @return CreateTemplateQuotaItemResponse
 */
CreateTemplateQuotaItemResponse Client::createTemplateQuotaItem(const CreateTemplateQuotaItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTemplateQuotaItemWithOptions(request, runtime);
}

/**
 * @summary Deletes a quota alert.
 *
 * @description *   The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to delete a quota alert rule of the old version. If you want to delete a quota alert rule of the new version, call the CloudMonitor API operation [DeleteMetricRules](https://help.aliyun.com/document_detail/2513295.html) or [DeleteMetricRuleTargets](https://help.aliyun.com/document_detail/2513294.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
 * *   In this example, the API operation is called to delete a quota alert rule whose ID is `6b512ab7-da3a-4142-b529-2b2a9294****`.
 *
 * @param request DeleteQuotaAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQuotaAlarmResponse
 */
DeleteQuotaAlarmResponse Client::deleteQuotaAlarmWithOptions(const DeleteQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmId()) {
    body["AlarmId"] = request.alarmId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteQuotaAlarm"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQuotaAlarmResponse>();
}

/**
 * @summary Deletes a quota alert.
 *
 * @description *   The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to delete a quota alert rule of the old version. If you want to delete a quota alert rule of the new version, call the CloudMonitor API operation [DeleteMetricRules](https://help.aliyun.com/document_detail/2513295.html) or [DeleteMetricRuleTargets](https://help.aliyun.com/document_detail/2513294.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
 * *   In this example, the API operation is called to delete a quota alert rule whose ID is `6b512ab7-da3a-4142-b529-2b2a9294****`.
 *
 * @param request DeleteQuotaAlarmRequest
 * @return DeleteQuotaAlarmResponse
 */
DeleteQuotaAlarmResponse Client::deleteQuotaAlarm(const DeleteQuotaAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQuotaAlarmWithOptions(request, runtime);
}

/**
 * @summary Deletes a quota template by using the management account of a resource directory. After you delete a quota template, if a member is added to the resource directory, the quota template no longer automatically submits a quota increase request for the member. Only the management account of a resource directory can delete quota templates.
 *
 * @param request DeleteTemplateQuotaItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplateQuotaItemResponse
 */
DeleteTemplateQuotaItemResponse Client::deleteTemplateQuotaItemWithOptions(const DeleteTemplateQuotaItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteTemplateQuotaItem"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTemplateQuotaItemResponse>();
}

/**
 * @summary Deletes a quota template by using the management account of a resource directory. After you delete a quota template, if a member is added to the resource directory, the quota template no longer automatically submits a quota increase request for the member. Only the management account of a resource directory can delete quota templates.
 *
 * @param request DeleteTemplateQuotaItemRequest
 * @return DeleteTemplateQuotaItemResponse
 */
DeleteTemplateQuotaItemResponse Client::deleteTemplateQuotaItem(const DeleteTemplateQuotaItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTemplateQuotaItemWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a quota of a cloud service.
 *
 * @description In this example, the operation is called to query the details of a quota whose ID is `q_security-groups` and whose name is Maximum Number of Security Groups. This quota belongs to Elastic Compute Service (ECS). The query result shows the details of the quota. The details include the name, ID, description, quota value, used quota, unit, and dimension of the quota. In this example, the quota name is `Maximum Number of Security Groups`. The quota ID is `q_security-groups`. The description is `The maximum number of security groups that can be created for the current account`. The quota value is `801`. The used quota is `26`. The quota unit is `Number of security groups`. The quota dimension is `{"regionId":"cn-hangzhou"}`.
 *
 * @param request GetProductQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProductQuotaResponse
 */
GetProductQuotaResponse Client::getProductQuotaWithOptions(const GetProductQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.dimensions();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.quotaActionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetProductQuota"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProductQuotaResponse>();
}

/**
 * @summary Queries the details of a quota of a cloud service.
 *
 * @description In this example, the operation is called to query the details of a quota whose ID is `q_security-groups` and whose name is Maximum Number of Security Groups. This quota belongs to Elastic Compute Service (ECS). The query result shows the details of the quota. The details include the name, ID, description, quota value, used quota, unit, and dimension of the quota. In this example, the quota name is `Maximum Number of Security Groups`. The quota ID is `q_security-groups`. The description is `The maximum number of security groups that can be created for the current account`. The quota value is `801`. The used quota is `26`. The quota unit is `Number of security groups`. The quota dimension is `{"regionId":"cn-hangzhou"}`.
 *
 * @param request GetProductQuotaRequest
 * @return GetProductQuotaResponse
 */
GetProductQuotaResponse Client::getProductQuota(const GetProductQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProductQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a quota dimension that is supported by an Alibaba Cloud service.
 *
 * @description In this example, the operation is called to query the details of a quota dimension whose key is `regionId`. The quota dimension belongs to Elastic Compute Service (ECS) Quotas by Instance Type whose service code is ecs-spec. The following query results are returned:
 * *   The values of the quota dimension include `cn-shenzhen`, `cn-beijing`, and `cn-hangzhou`.
 * *   The name of the quota dimension is `region`.
 *
 * @param request GetProductQuotaDimensionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProductQuotaDimensionResponse
 */
GetProductQuotaDimensionResponse Client::getProductQuotaDimensionWithOptions(const GetProductQuotaDimensionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDependentDimensions()) {
    body["DependentDimensions"] = request.dependentDimensions();
  }

  if (!!request.hasDimensionKey()) {
    body["DimensionKey"] = request.dimensionKey();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetProductQuotaDimension"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProductQuotaDimensionResponse>();
}

/**
 * @summary Queries the details of a quota dimension that is supported by an Alibaba Cloud service.
 *
 * @description In this example, the operation is called to query the details of a quota dimension whose key is `regionId`. The quota dimension belongs to Elastic Compute Service (ECS) Quotas by Instance Type whose service code is ecs-spec. The following query results are returned:
 * *   The values of the quota dimension include `cn-shenzhen`, `cn-beijing`, and `cn-hangzhou`.
 * *   The name of the quota dimension is `region`.
 *
 * @param request GetProductQuotaDimensionRequest
 * @return GetProductQuotaDimensionResponse
 */
GetProductQuotaDimensionResponse Client::getProductQuotaDimension(const GetProductQuotaDimensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProductQuotaDimensionWithOptions(request, runtime);
}

/**
 * @summary In this example, the operation is called to query the details of a quota alert. The details of the alert are returned. The query results include the alert ID, alert name, alert contact, and time when the quota alert was created.
 *
 * @description *   The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to query the details about the quota alert rules of the old version. If you want to query the details about the quota alert rules of the new version, call CloudMonitor API operations. For more information, see [Use API operations to manage new quota alert rules](https://help.aliyun.com/document_detail/2863234.html).
 * *   In this example, the operation is called to query the details of a quota alert rule whose ID is `78d7e436-4b25-4897-84b5-d7b656bb****`. The details of the alert rule are returned. The query result includes the alert ID, alert name, alert contact, and the time when the quota alert rule was created.
 *
 * @param request GetQuotaAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaAlarmResponse
 */
GetQuotaAlarmResponse Client::getQuotaAlarmWithOptions(const GetQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmId()) {
    body["AlarmId"] = request.alarmId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetQuotaAlarm"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQuotaAlarmResponse>();
}

/**
 * @summary In this example, the operation is called to query the details of a quota alert. The details of the alert are returned. The query results include the alert ID, alert name, alert contact, and time when the quota alert was created.
 *
 * @description *   The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to query the details about the quota alert rules of the old version. If you want to query the details about the quota alert rules of the new version, call CloudMonitor API operations. For more information, see [Use API operations to manage new quota alert rules](https://help.aliyun.com/document_detail/2863234.html).
 * *   In this example, the operation is called to query the details of a quota alert rule whose ID is `78d7e436-4b25-4897-84b5-d7b656bb****`. The details of the alert rule are returned. The query result includes the alert ID, alert name, alert contact, and the time when the quota alert rule was created.
 *
 * @param request GetQuotaAlarmRequest
 * @return GetQuotaAlarmResponse
 */
GetQuotaAlarmResponse Client::getQuotaAlarm(const GetQuotaAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQuotaAlarmWithOptions(request, runtime);
}

/**
 * @summary Queries the details about a specified application that is submitted to increase a quota.
 *
 * @description In this example, the operation is called to query the details about an application whose ID is `d314d6ae-867d-484c-9009-3d421a80****`. The query result shows the details about the application. The details include the application ID, application time, expected quota value, and application result.
 *
 * @param request GetQuotaApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaApplicationResponse
 */
GetQuotaApplicationResponse Client::getQuotaApplicationWithOptions(const GetQuotaApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetQuotaApplication"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQuotaApplicationResponse>();
}

/**
 * @summary Queries the details about a specified application that is submitted to increase a quota.
 *
 * @description In this example, the operation is called to query the details about an application whose ID is `d314d6ae-867d-484c-9009-3d421a80****`. The query result shows the details about the application. The details include the application ID, application time, expected quota value, and application result.
 *
 * @param request GetQuotaApplicationRequest
 * @return GetQuotaApplicationResponse
 */
GetQuotaApplicationResponse Client::getQuotaApplication(const GetQuotaApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQuotaApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries the information about quota application approval, such as the average amount of time required for approval, whether approval reminders are supported, and the interval between two consecutive approval reminders.
 *
 * @description ### [](#)Prerequisites
 * Make sure that you have created an application for quota increase. For more information, see [CreateQuotaApplication](https://help.aliyun.com/document_detail/440566.html).
 *
 * @param request GetQuotaApplicationApprovalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaApplicationApprovalResponse
 */
GetQuotaApplicationApprovalResponse Client::getQuotaApplicationApprovalWithOptions(const GetQuotaApplicationApprovalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetQuotaApplicationApproval"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQuotaApplicationApprovalResponse>();
}

/**
 * @summary Queries the information about quota application approval, such as the average amount of time required for approval, whether approval reminders are supported, and the interval between two consecutive approval reminders.
 *
 * @description ### [](#)Prerequisites
 * Make sure that you have created an application for quota increase. For more information, see [CreateQuotaApplication](https://help.aliyun.com/document_detail/440566.html).
 *
 * @param request GetQuotaApplicationApprovalRequest
 * @return GetQuotaApplicationApprovalResponse
 */
GetQuotaApplicationApprovalResponse Client::getQuotaApplicationApproval(const GetQuotaApplicationApprovalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQuotaApplicationApprovalWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a quota template.
 *
 * @description By default, the value of `ServiceStatus` is `0`, which indicates that no quota template is specified. If you want to use a quota template, make sure that the quota template is enabled. In this case, the value of `ServiceStatus` is `1`.
 *
 * @param request GetQuotaTemplateServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaTemplateServiceStatusResponse
 */
GetQuotaTemplateServiceStatusResponse Client::getQuotaTemplateServiceStatusWithOptions(const GetQuotaTemplateServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceDirectoryId()) {
    body["ResourceDirectoryId"] = request.resourceDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetQuotaTemplateServiceStatus"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQuotaTemplateServiceStatusResponse>();
}

/**
 * @summary Queries the status of a quota template.
 *
 * @description By default, the value of `ServiceStatus` is `0`, which indicates that no quota template is specified. If you want to use a quota template, make sure that the quota template is enabled. In this case, the value of `ServiceStatus` is `1`.
 *
 * @param request GetQuotaTemplateServiceStatusRequest
 * @return GetQuotaTemplateServiceStatusResponse
 */
GetQuotaTemplateServiceStatusResponse Client::getQuotaTemplateServiceStatus(const GetQuotaTemplateServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQuotaTemplateServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the alert records.
 *
 * @description The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to query the historical records of quota alert rules of the old version. If you want to query the historical records of quota alert rules of the new version, call the CloudMonitor API operation [DescribeAlertLogCount](https://help.aliyun.com/document_detail/2513275.html) or [DescribeAlertLogList](https://help.aliyun.com/document_detail/2513276.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request ListAlarmHistoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlarmHistoriesResponse
 */
ListAlarmHistoriesResponse Client::listAlarmHistoriesWithOptions(const ListAlarmHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmId()) {
    body["AlarmId"] = request.alarmId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAlarmHistories"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlarmHistoriesResponse>();
}

/**
 * @summary Queries the alert records.
 *
 * @description The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to query the historical records of quota alert rules of the old version. If you want to query the historical records of quota alert rules of the new version, call the CloudMonitor API operation [DescribeAlertLogCount](https://help.aliyun.com/document_detail/2513275.html) or [DescribeAlertLogList](https://help.aliyun.com/document_detail/2513276.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request ListAlarmHistoriesRequest
 * @return ListAlarmHistoriesResponse
 */
ListAlarmHistoriesResponse Client::listAlarmHistories(const ListAlarmHistoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAlarmHistoriesWithOptions(request, runtime);
}

/**
 * @summary Queries the quotas on which a specified quota depends.
 *
 * @description In this example, the operation is called to query the quotas on which a Container Service for Kubernetes (ACK) quota whose ID is `q_i5uzm3` depends. This quota is the maximum number of nodes that can be created in an ACK cluster. The query result indicates that the specified quota depends on the following three quotas:
 * *   An Elastic Compute Service (ECS) quota whose ID is `q_elastic-network-interfaces`. This quota is the maximum number of ENIs (Secondary ENIs) that can be owned by an Alibaba Cloud account. The quota is available in the following regions: `cn-shenzhen`, `cn-beijing`, and `cn-hangzhou`.
 * *   A Server Load Balancer (SLB) quota whose ID is `q_fh20b0`. This quota is the number of servers that can be attached to the backend of an SLB instance.
 * *   An SLB quota whose ID is `q_3mmbsp`. This quota is the number of SLB instances that can be owned by an Alibaba Cloud account.
 *
 * @param request ListDependentQuotasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDependentQuotasResponse
 */
ListDependentQuotasResponse Client::listDependentQuotasWithOptions(const ListDependentQuotasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.quotaActionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDependentQuotas"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDependentQuotasResponse>();
}

/**
 * @summary Queries the quotas on which a specified quota depends.
 *
 * @description In this example, the operation is called to query the quotas on which a Container Service for Kubernetes (ACK) quota whose ID is `q_i5uzm3` depends. This quota is the maximum number of nodes that can be created in an ACK cluster. The query result indicates that the specified quota depends on the following three quotas:
 * *   An Elastic Compute Service (ECS) quota whose ID is `q_elastic-network-interfaces`. This quota is the maximum number of ENIs (Secondary ENIs) that can be owned by an Alibaba Cloud account. The quota is available in the following regions: `cn-shenzhen`, `cn-beijing`, and `cn-hangzhou`.
 * *   A Server Load Balancer (SLB) quota whose ID is `q_fh20b0`. This quota is the number of servers that can be attached to the backend of an SLB instance.
 * *   An SLB quota whose ID is `q_3mmbsp`. This quota is the number of SLB instances that can be owned by an Alibaba Cloud account.
 *
 * @param request ListDependentQuotasRequest
 * @return ListDependentQuotasResponse
 */
ListDependentQuotasResponse Client::listDependentQuotas(const ListDependentQuotasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDependentQuotasWithOptions(request, runtime);
}

/**
 * @summary Queries the dimension groups of an Alibaba Cloud service.
 *
 * @description This topic provides an example on how to call the ListProductDimensionGroups operation to query the dimension groups of Object Storage Service (OSS). In this example, a dimension group is returned. The group name is `OSS_Group`, the group code is `oss_wf1ngqmd7q`, and the group key is `chargeType`.
 *
 * @param request ListProductDimensionGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductDimensionGroupsResponse
 */
ListProductDimensionGroupsResponse Client::listProductDimensionGroupsWithOptions(const ListProductDimensionGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProductDimensionGroups"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductDimensionGroupsResponse>();
}

/**
 * @summary Queries the dimension groups of an Alibaba Cloud service.
 *
 * @description This topic provides an example on how to call the ListProductDimensionGroups operation to query the dimension groups of Object Storage Service (OSS). In this example, a dimension group is returned. The group name is `OSS_Group`, the group code is `oss_wf1ngqmd7q`, and the group key is `chargeType`.
 *
 * @param request ListProductDimensionGroupsRequest
 * @return ListProductDimensionGroupsResponse
 */
ListProductDimensionGroupsResponse Client::listProductDimensionGroups(const ListProductDimensionGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductDimensionGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the quota dimensions that are supported by the specified Alibaba Cloud service.
 *
 * @description In this example, the operation is called to query the quota dimensions that are supported by Elastic Compute Service (ECS). The query results show all the quota dimensions that are supported by ECS.
 *
 * @param request ListProductQuotaDimensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductQuotaDimensionsResponse
 */
ListProductQuotaDimensionsResponse Client::listProductQuotaDimensionsWithOptions(const ListProductQuotaDimensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.quotaCategory();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListProductQuotaDimensions"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductQuotaDimensionsResponse>();
}

/**
 * @summary Queries the quota dimensions that are supported by the specified Alibaba Cloud service.
 *
 * @description In this example, the operation is called to query the quota dimensions that are supported by Elastic Compute Service (ECS). The query results show all the quota dimensions that are supported by ECS.
 *
 * @param request ListProductQuotaDimensionsRequest
 * @return ListProductQuotaDimensionsResponse
 */
ListProductQuotaDimensionsResponse Client::listProductQuotaDimensions(const ListProductQuotaDimensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductQuotaDimensionsWithOptions(request, runtime);
}

/**
 * @summary Queries the quotas of a specific Alibaba Cloud service.
 *
 * @description In this example, the operation is called to query the quotas whose instance type is `ecs.g5.2xlarge`. The quotas belong to Elastic Compute Service (ECS) Quotas by Instance Type. The query result includes the name, ID, unit, dimensions, and cycle of each quota.
 *
 * @param request ListProductQuotasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductQuotasResponse
 */
ListProductQuotasResponse Client::listProductQuotasWithOptions(const ListProductQuotasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.dimensions();
  }

  if (!!request.hasGroupCode()) {
    body["GroupCode"] = request.groupCode();
  }

  if (!!request.hasKeyWord()) {
    body["KeyWord"] = request.keyWord();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.quotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.quotaCategory();
  }

  if (!!request.hasSortField()) {
    body["SortField"] = request.sortField();
  }

  if (!!request.hasSortOrder()) {
    body["SortOrder"] = request.sortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListProductQuotas"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductQuotasResponse>();
}

/**
 * @summary Queries the quotas of a specific Alibaba Cloud service.
 *
 * @description In this example, the operation is called to query the quotas whose instance type is `ecs.g5.2xlarge`. The quotas belong to Elastic Compute Service (ECS) Quotas by Instance Type. The query result includes the name, ID, unit, dimensions, and cycle of each quota.
 *
 * @param request ListProductQuotasRequest
 * @return ListProductQuotasResponse
 */
ListProductQuotasResponse Client::listProductQuotas(const ListProductQuotasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductQuotasWithOptions(request, runtime);
}

/**
 * @summary Queries the Alibaba Cloud services that support Quota Center.
 *
 * @description The services in the query result are the same as the services listed in [Alibaba Cloud services that support Quota Center](https://help.aliyun.com/document_detail/182368.html).
 *
 * @param request ListProductsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProductsWithOptions(const ListProductsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListProducts"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductsResponse>();
}

/**
 * @summary Queries the Alibaba Cloud services that support Quota Center.
 *
 * @description The services in the query result are the same as the services listed in [Alibaba Cloud services that support Quota Center](https://help.aliyun.com/document_detail/182368.html).
 *
 * @param request ListProductsRequest
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProducts(const ListProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductsWithOptions(request, runtime);
}

/**
 * @summary Queries quota alerts.
 *
 * @description The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to query quota alert rules of the old version. If you want to query quota alert rules of the new version, call the CloudMonitor API operation [DescribeMetricRuleList](https://help.aliyun.com/document_detail/2513291.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request ListQuotaAlarmsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotaAlarmsResponse
 */
ListQuotaAlarmsResponse Client::listQuotaAlarmsWithOptions(const ListQuotaAlarmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmName()) {
    body["AlarmName"] = request.alarmName();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.quotaActionCode();
  }

  if (!!request.hasQuotaDimensions()) {
    body["QuotaDimensions"] = request.quotaDimensions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListQuotaAlarms"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQuotaAlarmsResponse>();
}

/**
 * @summary Queries quota alerts.
 *
 * @description The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to query quota alert rules of the old version. If you want to query quota alert rules of the new version, call the CloudMonitor API operation [DescribeMetricRuleList](https://help.aliyun.com/document_detail/2513291.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request ListQuotaAlarmsRequest
 * @return ListQuotaAlarmsResponse
 */
ListQuotaAlarmsResponse Client::listQuotaAlarms(const ListQuotaAlarmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQuotaAlarmsWithOptions(request, runtime);
}

/**
 * @summary Queries quota templates by using the management account of a resource directory.
 *
 * @param request ListQuotaApplicationTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotaApplicationTemplatesResponse
 */
ListQuotaApplicationTemplatesResponse Client::listQuotaApplicationTemplatesWithOptions(const ListQuotaApplicationTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  json body = {};
  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.dimensions();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.quotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.quotaCategory();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListQuotaApplicationTemplates"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQuotaApplicationTemplatesResponse>();
}

/**
 * @summary Queries quota templates by using the management account of a resource directory.
 *
 * @param request ListQuotaApplicationTemplatesRequest
 * @return ListQuotaApplicationTemplatesResponse
 */
ListQuotaApplicationTemplatesResponse Client::listQuotaApplicationTemplates(const ListQuotaApplicationTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQuotaApplicationTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an application that is submitted to increase a quota.
 *
 * @description In this example, the operation is called to query the details of an application that is submitted to increase a quota whose ID is `q_i5uzm3` and whose name is Maximum Number of Nodes. This quota belongs to Container Service for Kubernetes (ACK). The query result shows the details of the application. The details include the application ID, application time, requested quota, and application result. In this example, the application ID is `b926571d-cc09-4711-b547-58a615f0****`. The application time is `2021-01-15T09:13:53Z`. The expected quota value is `101`. The application result is `Agree`.
 *
 * @param request ListQuotaApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotaApplicationsResponse
 */
ListQuotaApplicationsResponse Client::listQuotaApplicationsWithOptions(const ListQuotaApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.dimensions();
  }

  if (!!request.hasKeyWord()) {
    body["KeyWord"] = request.keyWord();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.quotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.quotaCategory();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListQuotaApplications"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQuotaApplicationsResponse>();
}

/**
 * @summary Queries the details of an application that is submitted to increase a quota.
 *
 * @description In this example, the operation is called to query the details of an application that is submitted to increase a quota whose ID is `q_i5uzm3` and whose name is Maximum Number of Nodes. This quota belongs to Container Service for Kubernetes (ACK). The query result shows the details of the application. The details include the application ID, application time, requested quota, and application result. In this example, the application ID is `b926571d-cc09-4711-b547-58a615f0****`. The application time is `2021-01-15T09:13:53Z`. The expected quota value is `101`. The application result is `Agree`.
 *
 * @param request ListQuotaApplicationsRequest
 * @return ListQuotaApplicationsResponse
 */
ListQuotaApplicationsResponse Client::listQuotaApplications(const ListQuotaApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQuotaApplicationsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a quota increase application for member accounts in a resource directory.
 *
 * @param request ListQuotaApplicationsDetailForTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotaApplicationsDetailForTemplateResponse
 */
ListQuotaApplicationsDetailForTemplateResponse Client::listQuotaApplicationsDetailForTemplateWithOptions(const ListQuotaApplicationsDetailForTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliyunUid()) {
    body["AliyunUid"] = request.aliyunUid();
  }

  if (!!request.hasBatchQuotaApplicationId()) {
    body["BatchQuotaApplicationId"] = request.batchQuotaApplicationId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.quotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.quotaCategory();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListQuotaApplicationsDetailForTemplate"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQuotaApplicationsDetailForTemplateResponse>();
}

/**
 * @summary Queries the details of a quota increase application for member accounts in a resource directory.
 *
 * @param request ListQuotaApplicationsDetailForTemplateRequest
 * @return ListQuotaApplicationsDetailForTemplateResponse
 */
ListQuotaApplicationsDetailForTemplateResponse Client::listQuotaApplicationsDetailForTemplate(const ListQuotaApplicationsDetailForTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQuotaApplicationsDetailForTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the application records of a quota template that is used to apply for quotas for member accounts.
 *
 * @param request ListQuotaApplicationsForTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotaApplicationsForTemplateResponse
 */
ListQuotaApplicationsForTemplateResponse Client::listQuotaApplicationsForTemplateWithOptions(const ListQuotaApplicationsForTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplyEndTime()) {
    body["ApplyEndTime"] = request.applyEndTime();
  }

  if (!!request.hasApplyStartTime()) {
    body["ApplyStartTime"] = request.applyStartTime();
  }

  if (!!request.hasBatchQuotaApplicationId()) {
    body["BatchQuotaApplicationId"] = request.batchQuotaApplicationId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.quotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.quotaCategory();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListQuotaApplicationsForTemplate"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQuotaApplicationsForTemplateResponse>();
}

/**
 * @summary Queries the application records of a quota template that is used to apply for quotas for member accounts.
 *
 * @param request ListQuotaApplicationsForTemplateRequest
 * @return ListQuotaApplicationsForTemplateResponse
 */
ListQuotaApplicationsForTemplateResponse Client::listQuotaApplicationsForTemplate(const ListQuotaApplicationsForTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQuotaApplicationsForTemplateWithOptions(request, runtime);
}

/**
 * @summary Changes the status of a quota template. By default, the quota template is not configured. If the management account of a resource directory uses a quota template for the first time, you must enable the quota template. Only the management account of a resource directory can change the status of quota templates.
 *
 * @description ### [](#)Prerequisites
 * A resource directory is enabled. For more information, see [EnableResourceDirectory](https://help.aliyun.com/document_detail/604185.html).
 * ### [](#)Usage notes
 * If the `ServiceStatus` parameter is set to `0` or `-1`, you can call this operation to set the parameter to `1`. Then, you can call the [CreateTemplateQuotaItem](https://help.aliyun.com/document_detail/450615.html) operation to create a quota template.
 *
 * @param request ModifyQuotaTemplateServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyQuotaTemplateServiceStatusResponse
 */
ModifyQuotaTemplateServiceStatusResponse Client::modifyQuotaTemplateServiceStatusWithOptions(const ModifyQuotaTemplateServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasServiceStatus()) {
    body["ServiceStatus"] = request.serviceStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyQuotaTemplateServiceStatus"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyQuotaTemplateServiceStatusResponse>();
}

/**
 * @summary Changes the status of a quota template. By default, the quota template is not configured. If the management account of a resource directory uses a quota template for the first time, you must enable the quota template. Only the management account of a resource directory can change the status of quota templates.
 *
 * @description ### [](#)Prerequisites
 * A resource directory is enabled. For more information, see [EnableResourceDirectory](https://help.aliyun.com/document_detail/604185.html).
 * ### [](#)Usage notes
 * If the `ServiceStatus` parameter is set to `0` or `-1`, you can call this operation to set the parameter to `1`. Then, you can call the [CreateTemplateQuotaItem](https://help.aliyun.com/document_detail/450615.html) operation to create a quota template.
 *
 * @param request ModifyQuotaTemplateServiceStatusRequest
 * @return ModifyQuotaTemplateServiceStatusResponse
 */
ModifyQuotaTemplateServiceStatusResponse Client::modifyQuotaTemplateServiceStatus(const ModifyQuotaTemplateServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyQuotaTemplateServiceStatusWithOptions(request, runtime);
}

/**
 * @summary The ID of the quota template.
 *
 * @param request ModifyTemplateQuotaItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTemplateQuotaItemResponse
 */
ModifyTemplateQuotaItemResponse Client::modifyTemplateQuotaItemWithOptions(const ModifyTemplateQuotaItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQuotaCategory()) {
    query["QuotaCategory"] = request.quotaCategory();
  }

  json body = {};
  if (!!request.hasDesireValue()) {
    body["DesireValue"] = request.desireValue();
  }

  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.dimensions();
  }

  if (!!request.hasEffectiveTime()) {
    body["EffectiveTime"] = request.effectiveTime();
  }

  if (!!request.hasEnvLanguage()) {
    body["EnvLanguage"] = request.envLanguage();
  }

  if (!!request.hasExpireTime()) {
    body["ExpireTime"] = request.expireTime();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasNoticeType()) {
    body["NoticeType"] = request.noticeType();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.quotaActionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyTemplateQuotaItem"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTemplateQuotaItemResponse>();
}

/**
 * @summary The ID of the quota template.
 *
 * @param request ModifyTemplateQuotaItemRequest
 * @return ModifyTemplateQuotaItemResponse
 */
ModifyTemplateQuotaItemResponse Client::modifyTemplateQuotaItem(const ModifyTemplateQuotaItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTemplateQuotaItemWithOptions(request, runtime);
}

/**
 * @summary Reminds the approver of a quota application to review the application. This operation is applicable to quota applications that support the approval reminding feature.
 *
 * @description >  You can call this operation to enable the approval reminder feature for quota applications that support this feature. To check whether this feature is supported, you can view the value of `SupportReminder` in the GetQuotaApplicationApproval operation. If the value of SupportReminder is `true`, this feature is supported.
 *
 * @param request RemindQuotaApplicationApprovalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemindQuotaApplicationApprovalResponse
 */
RemindQuotaApplicationApprovalResponse Client::remindQuotaApplicationApprovalWithOptions(const RemindQuotaApplicationApprovalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RemindQuotaApplicationApproval"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemindQuotaApplicationApprovalResponse>();
}

/**
 * @summary Reminds the approver of a quota application to review the application. This operation is applicable to quota applications that support the approval reminding feature.
 *
 * @description >  You can call this operation to enable the approval reminder feature for quota applications that support this feature. To check whether this feature is supported, you can view the value of `SupportReminder` in the GetQuotaApplicationApproval operation. If the value of SupportReminder is `true`, this feature is supported.
 *
 * @param request RemindQuotaApplicationApprovalRequest
 * @return RemindQuotaApplicationApprovalResponse
 */
RemindQuotaApplicationApprovalResponse Client::remindQuotaApplicationApproval(const RemindQuotaApplicationApprovalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return remindQuotaApplicationApprovalWithOptions(request, runtime);
}

/**
 * @summary Modifies a quota alert rule.
 *
 * @description *   The quota alerting feature has been upgraded and this API operation will be deprecated. If you want to modify the information about a specific quota alert rule of the new version, call the CloudMonitor API operation [PutResourceMetricRules](https://help.aliyun.com/document_detail/2513316.html) or [PutMetricRuleTargets](https://help.aliyun.com/document_detail/2513302.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
 * *   In this example, the API operation is called to modify the information about a quota alert rule whose ID is `a2efa7fc-832f-47bb-8054-39e28012****` and whose name is `rules`. The alert threshold is changed from `150` to `160`.
 *
 * @param request UpdateQuotaAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQuotaAlarmResponse
 */
UpdateQuotaAlarmResponse Client::updateQuotaAlarmWithOptions(const UpdateQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmId()) {
    body["AlarmId"] = request.alarmId();
  }

  if (!!request.hasAlarmName()) {
    body["AlarmName"] = request.alarmName();
  }

  if (!!request.hasThreshold()) {
    body["Threshold"] = request.threshold();
  }

  if (!!request.hasThresholdPercent()) {
    body["ThresholdPercent"] = request.thresholdPercent();
  }

  if (!!request.hasThresholdType()) {
    body["ThresholdType"] = request.thresholdType();
  }

  if (!!request.hasWebHook()) {
    body["WebHook"] = request.webHook();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateQuotaAlarm"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQuotaAlarmResponse>();
}

/**
 * @summary Modifies a quota alert rule.
 *
 * @description *   The quota alerting feature has been upgraded and this API operation will be deprecated. If you want to modify the information about a specific quota alert rule of the new version, call the CloudMonitor API operation [PutResourceMetricRules](https://help.aliyun.com/document_detail/2513316.html) or [PutMetricRuleTargets](https://help.aliyun.com/document_detail/2513302.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
 * *   In this example, the API operation is called to modify the information about a quota alert rule whose ID is `a2efa7fc-832f-47bb-8054-39e28012****` and whose name is `rules`. The alert threshold is changed from `150` to `160`.
 *
 * @param request UpdateQuotaAlarmRequest
 * @return UpdateQuotaAlarmResponse
 */
UpdateQuotaAlarmResponse Client::updateQuotaAlarm(const UpdateQuotaAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateQuotaAlarmWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Quotas20200510