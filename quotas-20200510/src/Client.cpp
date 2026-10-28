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
 * @summary Creates an alert rule for a quota item.
 *
 * @description The quota alerting feature has been upgraded and this API operation will be deprecated. Use the CloudMonitor API operations [PutResourceMetricRules](https://help.aliyun.com/document_detail/2513316.html) and [PutMetricRuleTargets](https://help.aliyun.com/document_detail/2513302.html) to create alert rules for the new version of quota alerting.
 * For more information about how to use API operations to manage the new version of quota alerting, see [Manage new quota alerts by using API operations](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request CreateQuotaAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQuotaAlarmResponse
 */
CreateQuotaAlarmResponse Client::createQuotaAlarmWithOptions(const CreateQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmName()) {
    body["AlarmName"] = request.getAlarmName();
  }

  if (!!request.hasOriginalContext()) {
    body["OriginalContext"] = request.getOriginalContext();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.getQuotaActionCode();
  }

  if (!!request.hasQuotaDimensions()) {
    body["QuotaDimensions"] = request.getQuotaDimensions();
  }

  if (!!request.hasThreshold()) {
    body["Threshold"] = request.getThreshold();
  }

  if (!!request.hasThresholdPercent()) {
    body["ThresholdPercent"] = request.getThresholdPercent();
  }

  if (!!request.hasThresholdType()) {
    body["ThresholdType"] = request.getThresholdType();
  }

  if (!!request.hasWebHook()) {
    body["WebHook"] = request.getWebHook();
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
 * @summary Creates an alert rule for a quota item.
 *
 * @description The quota alerting feature has been upgraded and this API operation will be deprecated. Use the CloudMonitor API operations [PutResourceMetricRules](https://help.aliyun.com/document_detail/2513316.html) and [PutMetricRuleTargets](https://help.aliyun.com/document_detail/2513302.html) to create alert rules for the new version of quota alerting.
 * For more information about how to use API operations to manage the new version of quota alerting, see [Manage new quota alerts by using API operations](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request CreateQuotaAlarmRequest
 * @return CreateQuotaAlarmResponse
 */
CreateQuotaAlarmResponse Client::createQuotaAlarm(const CreateQuotaAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQuotaAlarmWithOptions(request, runtime);
}

/**
 * @summary Creates a quota increase request.
 *
 * @description > After you create a quota increase request, you can call the [ListQuotaApplications](https://help.aliyun.com/document_detail/440568.html) operation to view the approval result. If the value of `Status` is `Agree`, the request is approved.
 *
 * @param request CreateQuotaApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQuotaApplicationResponse
 */
CreateQuotaApplicationResponse Client::createQuotaApplicationWithOptions(const CreateQuotaApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuditMode()) {
    body["AuditMode"] = request.getAuditMode();
  }

  if (!!request.hasDesireValue()) {
    body["DesireValue"] = request.getDesireValue();
  }

  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEffectiveTime()) {
    body["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasEnvLanguage()) {
    body["EnvLanguage"] = request.getEnvLanguage();
  }

  if (!!request.hasExpireTime()) {
    body["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasNoticeType()) {
    body["NoticeType"] = request.getNoticeType();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.getQuotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.getQuotaCategory();
  }

  if (!!request.hasReason()) {
    body["Reason"] = request.getReason();
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
 * @summary Creates a quota increase request.
 *
 * @description > After you create a quota increase request, you can call the [ListQuotaApplications](https://help.aliyun.com/document_detail/440568.html) operation to view the approval result. If the value of `Status` is `Agree`, the request is approved.
 *
 * @param request CreateQuotaApplicationRequest
 * @return CreateQuotaApplicationResponse
 */
CreateQuotaApplicationResponse Client::createQuotaApplication(const CreateQuotaApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQuotaApplicationWithOptions(request, runtime);
}

/**
 * @summary Creates batch quota increase applications for members in a resource folder. When you add a quota item to a quota template, only new members in the resource folder autocommit quota increase applications, and existing members remain unchanged. To increase quotas for existing members by using a quota template, you can select the quota template to commit batch quota increase applications for multiple members in the resource folder. Only the administrator account of the resource folder can create batch quota applications.
 *
 * @description ### Limits
 * A single application can include a maximum of 10 quota items.
 *
 * @param request CreateQuotaApplicationsForTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQuotaApplicationsForTemplateResponse
 */
CreateQuotaApplicationsForTemplateResponse Client::createQuotaApplicationsForTemplateWithOptions(const CreateQuotaApplicationsForTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliyunUids()) {
    body["AliyunUids"] = request.getAliyunUids();
  }

  if (!!request.hasDesireValue()) {
    body["DesireValue"] = request.getDesireValue();
  }

  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEffectiveTime()) {
    body["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasEnvLanguage()) {
    body["EnvLanguage"] = request.getEnvLanguage();
  }

  if (!!request.hasExpireTime()) {
    body["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasNoticeType()) {
    body["NoticeType"] = request.getNoticeType();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.getQuotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.getQuotaCategory();
  }

  if (!!request.hasReason()) {
    body["Reason"] = request.getReason();
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
 * @summary Creates batch quota increase applications for members in a resource folder. When you add a quota item to a quota template, only new members in the resource folder autocommit quota increase applications, and existing members remain unchanged. To increase quotas for existing members by using a quota template, you can select the quota template to commit batch quota increase applications for multiple members in the resource folder. Only the administrator account of the resource folder can create batch quota applications.
 *
 * @description ### Limits
 * A single application can include a maximum of 10 quota items.
 *
 * @param request CreateQuotaApplicationsForTemplateRequest
 * @return CreateQuotaApplicationsForTemplateResponse
 */
CreateQuotaApplicationsForTemplateResponse Client::createQuotaApplicationsForTemplate(const CreateQuotaApplicationsForTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQuotaApplicationsForTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a quota template. After the management account creates a quota template, the template automatically submits quota increase applications for new members added to the resource directory. Existing members remain unaffected. You can use a quota template to apply for increases to multiple quota items at a time, improving the efficiency and automation of quota management across the organization. Only the management account of a resource directory can create a quota template.
 *
 * @description ### Before you begin
 * Make sure that the status of the quota template is enabled (that is, `ServiceStatus` is `1`).
 * Call the [GetQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450407.html) operation to query the status of the quota template. If the `ServiceStatus` of the quota template is `0` (not configured) or `-1` (disabled), call the [ModifyQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450406.html) operation to change the status to `1` (enabled).
 * ### Usage notes
 * After you create a quota template, you can call the [ListQuotaApplicationsForTemplate](https://help.aliyun.com/document_detail/2584864.html) operation to view the approval result. If `Status` is displayed as `Agree`, the application is approved.
 *
 * @param request CreateTemplateQuotaItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTemplateQuotaItemResponse
 */
CreateTemplateQuotaItemResponse Client::createTemplateQuotaItemWithOptions(const CreateTemplateQuotaItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDesireValue()) {
    body["DesireValue"] = request.getDesireValue();
  }

  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEffectiveTime()) {
    body["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasEnvLanguage()) {
    body["EnvLanguage"] = request.getEnvLanguage();
  }

  if (!!request.hasExpireTime()) {
    body["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasNoticeType()) {
    body["NoticeType"] = request.getNoticeType();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.getQuotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.getQuotaCategory();
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
 * @summary Creates a quota template. After the management account creates a quota template, the template automatically submits quota increase applications for new members added to the resource directory. Existing members remain unaffected. You can use a quota template to apply for increases to multiple quota items at a time, improving the efficiency and automation of quota management across the organization. Only the management account of a resource directory can create a quota template.
 *
 * @description ### Before you begin
 * Make sure that the status of the quota template is enabled (that is, `ServiceStatus` is `1`).
 * Call the [GetQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450407.html) operation to query the status of the quota template. If the `ServiceStatus` of the quota template is `0` (not configured) or `-1` (disabled), call the [ModifyQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450406.html) operation to change the status to `1` (enabled).
 * ### Usage notes
 * After you create a quota template, you can call the [ListQuotaApplicationsForTemplate](https://help.aliyun.com/document_detail/2584864.html) operation to view the approval result. If `Status` is displayed as `Agree`, the application is approved.
 *
 * @param request CreateTemplateQuotaItemRequest
 * @return CreateTemplateQuotaItemResponse
 */
CreateTemplateQuotaItemResponse Client::createTemplateQuotaItem(const CreateTemplateQuotaItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTemplateQuotaItemWithOptions(request, runtime);
}

/**
 * @summary Deletes a quota usage alert.
 *
 * @description The quota alerting feature has been upgraded, and this API operation will be deprecated soon. This API operation can only delete legacy quota usage alerts. To delete new-version quota usage alerts, use the CloudMonitor API operations [DeleteMetricRules](https://help.aliyun.com/document_detail/2513295.html) and [DeleteMetricRuleTargets](https://help.aliyun.com/document_detail/2513294.html).
 * For more information about managing new-version quota alerts by using API operations, see [Manage new-version quota alerts by using API operations](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request DeleteQuotaAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQuotaAlarmResponse
 */
DeleteQuotaAlarmResponse Client::deleteQuotaAlarmWithOptions(const DeleteQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmId()) {
    body["AlarmId"] = request.getAlarmId();
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
 * @summary Deletes a quota usage alert.
 *
 * @description The quota alerting feature has been upgraded, and this API operation will be deprecated soon. This API operation can only delete legacy quota usage alerts. To delete new-version quota usage alerts, use the CloudMonitor API operations [DeleteMetricRules](https://help.aliyun.com/document_detail/2513295.html) and [DeleteMetricRuleTargets](https://help.aliyun.com/document_detail/2513294.html).
 * For more information about managing new-version quota alerts by using API operations, see [Manage new-version quota alerts by using API operations](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request DeleteQuotaAlarmRequest
 * @return DeleteQuotaAlarmResponse
 */
DeleteQuotaAlarmResponse Client::deleteQuotaAlarm(const DeleteQuotaAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQuotaAlarmWithOptions(request, runtime);
}

/**
 * @summary Deletes a quota template. After the management account deletes a quota template, the template no longer automatically submits quota increase requests for new members added to the resource directory. Only the management account of the resource directory can delete quota templates.
 *
 * @param request DeleteTemplateQuotaItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplateQuotaItemResponse
 */
DeleteTemplateQuotaItemResponse Client::deleteTemplateQuotaItemWithOptions(const DeleteTemplateQuotaItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
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
 * @summary Deletes a quota template. After the management account deletes a quota template, the template no longer automatically submits quota increase requests for new members added to the resource directory. Only the management account of the resource directory can delete quota templates.
 *
 * @param request DeleteTemplateQuotaItemRequest
 * @return DeleteTemplateQuotaItemResponse
 */
DeleteTemplateQuotaItemResponse Client::deleteTemplateQuotaItem(const DeleteTemplateQuotaItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTemplateQuotaItemWithOptions(request, runtime);
}

/**
 * @summary Queries the quota details of a specified cloud service.
 *
 * @param request GetProductQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProductQuotaResponse
 */
GetProductQuotaResponse Client::getProductQuotaWithOptions(const GetProductQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.getQuotaActionCode();
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
 * @summary Queries the quota details of a specified cloud service.
 *
 * @param request GetProductQuotaRequest
 * @return GetProductQuotaResponse
 */
GetProductQuotaResponse Client::getProductQuota(const GetProductQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProductQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the quota dimensions supported by the target cloud service.
 *
 * @param request GetProductQuotaDimensionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProductQuotaDimensionResponse
 */
GetProductQuotaDimensionResponse Client::getProductQuotaDimensionWithOptions(const GetProductQuotaDimensionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDependentDimensions()) {
    body["DependentDimensions"] = request.getDependentDimensions();
  }

  if (!!request.hasDimensionKey()) {
    body["DimensionKey"] = request.getDimensionKey();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
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
 * @summary Queries the details of the quota dimensions supported by the target cloud service.
 *
 * @param request GetProductQuotaDimensionRequest
 * @return GetProductQuotaDimensionResponse
 */
GetProductQuotaDimensionResponse Client::getProductQuotaDimension(const GetProductQuotaDimensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProductQuotaDimensionWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified quota alert.
 *
 * @description The quota alert feature has been upgraded. This API operation will be deprecated soon. This API operation can only query the details of legacy quota usage alerts. To query the details of new-version quota usage alerts, use the CloudMonitor API operation [DescribeMetricRuleList](https://help.aliyun.com/document_detail/2513291.html). For more information about how to use API operations to manage new-version quota alerts, see [Use API operations to manage new-version quota alerts](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request GetQuotaAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaAlarmResponse
 */
GetQuotaAlarmResponse Client::getQuotaAlarmWithOptions(const GetQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmId()) {
    body["AlarmId"] = request.getAlarmId();
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
 * @summary Queries the details of a specified quota alert.
 *
 * @description The quota alert feature has been upgraded. This API operation will be deprecated soon. This API operation can only query the details of legacy quota usage alerts. To query the details of new-version quota usage alerts, use the CloudMonitor API operation [DescribeMetricRuleList](https://help.aliyun.com/document_detail/2513291.html). For more information about how to use API operations to manage new-version quota alerts, see [Use API operations to manage new-version quota alerts](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request GetQuotaAlarmRequest
 * @return GetQuotaAlarmResponse
 */
GetQuotaAlarmResponse Client::getQuotaAlarm(const GetQuotaAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQuotaAlarmWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a quota increase application.
 *
 * @param request GetQuotaApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaApplicationResponse
 */
GetQuotaApplicationResponse Client::getQuotaApplicationWithOptions(const GetQuotaApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.getApplicationId();
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
 * @summary Queries the details of a quota increase application.
 *
 * @param request GetQuotaApplicationRequest
 * @return GetQuotaApplicationResponse
 */
GetQuotaApplicationResponse Client::getQuotaApplication(const GetQuotaApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQuotaApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries the approval information of a quota application, including the average approval time, whether approval reminders are supported, and the approval reminder interval.
 *
 * @description ### Before you begin
 * Make sure that you have created a quota increase application. For more information, see [CreateQuotaApplication](https://help.aliyun.com/document_detail/440566.html).
 *
 * @param request GetQuotaApplicationApprovalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaApplicationApprovalResponse
 */
GetQuotaApplicationApprovalResponse Client::getQuotaApplicationApprovalWithOptions(const GetQuotaApplicationApprovalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.getApplicationId();
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
 * @summary Queries the approval information of a quota application, including the average approval time, whether approval reminders are supported, and the approval reminder interval.
 *
 * @description ### Before you begin
 * Make sure that you have created a quota increase application. For more information, see [CreateQuotaApplication](https://help.aliyun.com/document_detail/440566.html).
 *
 * @param request GetQuotaApplicationApprovalRequest
 * @return GetQuotaApplicationApprovalResponse
 */
GetQuotaApplicationApprovalResponse Client::getQuotaApplicationApproval(const GetQuotaApplicationApprovalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQuotaApplicationApprovalWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the quota template.
 *
 * @description The default status of a quota template is unset (that is, `ServiceStatus` is `0`). You can use the features of the quota template only when its status is enabled (that is, `ServiceStatus` is `1`).
 *
 * @param request GetQuotaTemplateServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaTemplateServiceStatusResponse
 */
GetQuotaTemplateServiceStatusResponse Client::getQuotaTemplateServiceStatusWithOptions(const GetQuotaTemplateServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceDirectoryId()) {
    body["ResourceDirectoryId"] = request.getResourceDirectoryId();
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
 * @summary Queries the status of the quota template.
 *
 * @description The default status of a quota template is unset (that is, `ServiceStatus` is `0`). You can use the features of the quota template only when its status is enabled (that is, `ServiceStatus` is `1`).
 *
 * @param request GetQuotaTemplateServiceStatusRequest
 * @return GetQuotaTemplateServiceStatusResponse
 */
GetQuotaTemplateServiceStatusResponse Client::getQuotaTemplateServiceStatus(const GetQuotaTemplateServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQuotaTemplateServiceStatusWithOptions(request, runtime);
}

/**
 * @summary 获取配额使用率概览
 *
 * @param request GetQuotaUtilizationOverviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQuotaUtilizationOverviewResponse
 */
GetQuotaUtilizationOverviewResponse Client::getQuotaUtilizationOverviewWithOptions(const GetQuotaUtilizationOverviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.getQuotaCategory();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetQuotaUtilizationOverview"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQuotaUtilizationOverviewResponse>();
}

/**
 * @summary 获取配额使用率概览
 *
 * @param request GetQuotaUtilizationOverviewRequest
 * @return GetQuotaUtilizationOverviewResponse
 */
GetQuotaUtilizationOverviewResponse Client::getQuotaUtilizationOverview(const GetQuotaUtilizationOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQuotaUtilizationOverviewWithOptions(request, runtime);
}

/**
 * @summary Queries the history of quota alerts.
 *
 * @description The quota alert feature has been upgraded and this API operation will be deprecated. This API operation can only query the history of legacy quota usage alerts. To query the history of new quota usage alerts, use the CloudMonitor API operations [DescribeAlertLogCount](https://help.aliyun.com/document_detail/2513275.html) and [DescribeAlertLogList](https://help.aliyun.com/document_detail/2513276.html). For more information about how to use API operations to manage new quota alerts, see [Use API operations to manage new quota alerts](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request ListAlarmHistoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlarmHistoriesResponse
 */
ListAlarmHistoriesResponse Client::listAlarmHistoriesWithOptions(const ListAlarmHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmId()) {
    body["AlarmId"] = request.getAlarmId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
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
 * @summary Queries the history of quota alerts.
 *
 * @description The quota alert feature has been upgraded and this API operation will be deprecated. This API operation can only query the history of legacy quota usage alerts. To query the history of new quota usage alerts, use the CloudMonitor API operations [DescribeAlertLogCount](https://help.aliyun.com/document_detail/2513275.html) and [DescribeAlertLogList](https://help.aliyun.com/document_detail/2513276.html). For more information about how to use API operations to manage new quota alerts, see [Use API operations to manage new quota alerts](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request ListAlarmHistoriesRequest
 * @return ListAlarmHistoriesResponse
 */
ListAlarmHistoriesResponse Client::listAlarmHistories(const ListAlarmHistoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAlarmHistoriesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of quotas associated with a specific quota. Some quotas are interdependent and should be increased simultaneously.
 *
 * @param request ListDependentQuotasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDependentQuotasResponse
 */
ListDependentQuotasResponse Client::listDependentQuotasWithOptions(const ListDependentQuotasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.getQuotaActionCode();
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
 * @summary Queries the list of quotas associated with a specific quota. Some quotas are interdependent and should be increased simultaneously.
 *
 * @param request ListDependentQuotasRequest
 * @return ListDependentQuotasResponse
 */
ListDependentQuotasResponse Client::listDependentQuotas(const ListDependentQuotasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDependentQuotasWithOptions(request, runtime);
}

/**
 * @summary This operation queries the dimension groups of a specified Alibaba Cloud service.
 *
 * @param request ListProductDimensionGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductDimensionGroupsResponse
 */
ListProductDimensionGroupsResponse Client::listProductDimensionGroupsWithOptions(const ListProductDimensionGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
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
 * @summary This operation queries the dimension groups of a specified Alibaba Cloud service.
 *
 * @param request ListProductDimensionGroupsRequest
 * @return ListProductDimensionGroupsResponse
 */
ListProductDimensionGroupsResponse Client::listProductDimensionGroups(const ListProductDimensionGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductDimensionGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the quota dimensions supported by the specified cloud service.
 *
 * @param request ListProductQuotaDimensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductQuotaDimensionsResponse
 */
ListProductQuotaDimensionsResponse Client::listProductQuotaDimensionsWithOptions(const ListProductQuotaDimensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.getQuotaCategory();
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
 * @summary Queries the quota dimensions supported by the specified cloud service.
 *
 * @param request ListProductQuotaDimensionsRequest
 * @return ListProductQuotaDimensionsResponse
 */
ListProductQuotaDimensionsResponse Client::listProductQuotaDimensions(const ListProductQuotaDimensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductQuotaDimensionsWithOptions(request, runtime);
}

/**
 * @summary Queries the quotas of a specified cloud service.
 *
 * @param request ListProductQuotasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductQuotasResponse
 */
ListProductQuotasResponse Client::listProductQuotasWithOptions(const ListProductQuotasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasGroupCode()) {
    body["GroupCode"] = request.getGroupCode();
  }

  if (!!request.hasKeyWord()) {
    body["KeyWord"] = request.getKeyWord();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.getQuotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.getQuotaCategory();
  }

  if (!!request.hasSortField()) {
    body["SortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    body["SortOrder"] = request.getSortOrder();
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
 * @summary Queries the quotas of a specified cloud service.
 *
 * @param request ListProductQuotasRequest
 * @return ListProductQuotasResponse
 */
ListProductQuotasResponse Client::listProductQuotas(const ListProductQuotasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductQuotasWithOptions(request, runtime);
}

/**
 * @summary Queries the list of Alibaba Cloud services supported by Quota Center.
 *
 * @description The query results are the same as those in [Alibaba Cloud services supported by Quota Center](https://help.aliyun.com/document_detail/182368.html).
 *
 * @param request ListProductsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProductsWithOptions(const ListProductsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
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
 * @summary Queries the list of Alibaba Cloud services supported by Quota Center.
 *
 * @description The query results are the same as those in [Alibaba Cloud services supported by Quota Center](https://help.aliyun.com/document_detail/182368.html).
 *
 * @param request ListProductsRequest
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProducts(const ListProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductsWithOptions(request, runtime);
}

/**
 * @summary Queries quota usage alerts.
 *
 * @description The quota alert feature has been upgraded. This API operation is scheduled for deprecation and queries only earlier-version quota usage alerts. To query new-version quota usage alerts, call the CloudMonitor API operation [DescribeMetricRuleList](https://help.aliyun.com/document_detail/2513291.html). For more information about how to manage new-version quota alerts using API operations, see [Use API operations to manage new-version quota alerts](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request ListQuotaAlarmsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotaAlarmsResponse
 */
ListQuotaAlarmsResponse Client::listQuotaAlarmsWithOptions(const ListQuotaAlarmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmName()) {
    body["AlarmName"] = request.getAlarmName();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.getQuotaActionCode();
  }

  if (!!request.hasQuotaDimensions()) {
    body["QuotaDimensions"] = request.getQuotaDimensions();
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
 * @summary Queries quota usage alerts.
 *
 * @description The quota alert feature has been upgraded. This API operation is scheduled for deprecation and queries only earlier-version quota usage alerts. To query new-version quota usage alerts, call the CloudMonitor API operation [DescribeMetricRuleList](https://help.aliyun.com/document_detail/2513291.html). For more information about how to manage new-version quota alerts using API operations, see [Use API operations to manage new-version quota alerts](https://help.aliyun.com/document_detail/2863234.html).
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
    query["NextToken"] = request.getNextToken();
  }

  json body = {};
  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.getQuotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.getQuotaCategory();
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
 * @summary Queries the list of quota increase applications.
 *
 * @param request ListQuotaApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotaApplicationsResponse
 */
ListQuotaApplicationsResponse Client::listQuotaApplicationsWithOptions(const ListQuotaApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasKeyWord()) {
    body["KeyWord"] = request.getKeyWord();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.getQuotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.getQuotaCategory();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
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
 * @summary Queries the list of quota increase applications.
 *
 * @param request ListQuotaApplicationsRequest
 * @return ListQuotaApplicationsResponse
 */
ListQuotaApplicationsResponse Client::listQuotaApplications(const ListQuotaApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQuotaApplicationsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of quota increase applications for a member in a resource directory.
 *
 * @param request ListQuotaApplicationsDetailForTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotaApplicationsDetailForTemplateResponse
 */
ListQuotaApplicationsDetailForTemplateResponse Client::listQuotaApplicationsDetailForTemplateWithOptions(const ListQuotaApplicationsDetailForTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliyunUid()) {
    body["AliyunUid"] = request.getAliyunUid();
  }

  if (!!request.hasBatchQuotaApplicationId()) {
    body["BatchQuotaApplicationId"] = request.getBatchQuotaApplicationId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.getQuotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.getQuotaCategory();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
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
 * @summary Queries the details of quota increase applications for a member in a resource directory.
 *
 * @param request ListQuotaApplicationsDetailForTemplateRequest
 * @return ListQuotaApplicationsDetailForTemplateResponse
 */
ListQuotaApplicationsDetailForTemplateResponse Client::listQuotaApplicationsDetailForTemplate(const ListQuotaApplicationsDetailForTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQuotaApplicationsDetailForTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the history of batch requests for member quotas submitted using a quota template.
 *
 * @param request ListQuotaApplicationsForTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotaApplicationsForTemplateResponse
 */
ListQuotaApplicationsForTemplateResponse Client::listQuotaApplicationsForTemplateWithOptions(const ListQuotaApplicationsForTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplyEndTime()) {
    body["ApplyEndTime"] = request.getApplyEndTime();
  }

  if (!!request.hasApplyStartTime()) {
    body["ApplyStartTime"] = request.getApplyStartTime();
  }

  if (!!request.hasBatchQuotaApplicationId()) {
    body["BatchQuotaApplicationId"] = request.getBatchQuotaApplicationId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.getQuotaActionCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.getQuotaCategory();
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
 * @summary Queries the history of batch requests for member quotas submitted using a quota template.
 *
 * @param request ListQuotaApplicationsForTemplateRequest
 * @return ListQuotaApplicationsForTemplateResponse
 */
ListQuotaApplicationsForTemplateResponse Client::listQuotaApplicationsForTemplate(const ListQuotaApplicationsForTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQuotaApplicationsForTemplateWithOptions(request, runtime);
}

/**
 * @summary 列举配额使用率报告
 *
 * @param request ListQuotaUtilizationReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotaUtilizationReportResponse
 */
ListQuotaUtilizationReportResponse Client::listQuotaUtilizationReportWithOptions(const ListQuotaUtilizationReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdjustable()) {
    body["Adjustable"] = request.getAdjustable();
  }

  if (!!request.hasKeyWords()) {
    body["KeyWords"] = request.getKeyWords();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasQuotaCategory()) {
    body["QuotaCategory"] = request.getQuotaCategory();
  }

  if (!!request.hasQuotaRegionId()) {
    body["QuotaRegionId"] = request.getQuotaRegionId();
  }

  if (!!request.hasUtilizationStatuses()) {
    body["UtilizationStatuses"] = request.getUtilizationStatuses();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListQuotaUtilizationReport"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQuotaUtilizationReportResponse>();
}

/**
 * @summary 列举配额使用率报告
 *
 * @param request ListQuotaUtilizationReportRequest
 * @return ListQuotaUtilizationReportResponse
 */
ListQuotaUtilizationReportResponse Client::listQuotaUtilizationReport(const ListQuotaUtilizationReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQuotaUtilizationReportWithOptions(request, runtime);
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
    body["ServiceStatus"] = request.getServiceStatus();
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
 * @summary Only the administrator account of a resource directory can modify a quota template. Modifications to a quota template apply only to new members that are added to the resource directory and do not affect existing members.
 *
 * @param request ModifyTemplateQuotaItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTemplateQuotaItemResponse
 */
ModifyTemplateQuotaItemResponse Client::modifyTemplateQuotaItemWithOptions(const ModifyTemplateQuotaItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQuotaCategory()) {
    query["QuotaCategory"] = request.getQuotaCategory();
  }

  json body = {};
  if (!!request.hasDesireValue()) {
    body["DesireValue"] = request.getDesireValue();
  }

  if (!!request.hasDimensions()) {
    body["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasEffectiveTime()) {
    body["EffectiveTime"] = request.getEffectiveTime();
  }

  if (!!request.hasEnvLanguage()) {
    body["EnvLanguage"] = request.getEnvLanguage();
  }

  if (!!request.hasExpireTime()) {
    body["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasNoticeType()) {
    body["NoticeType"] = request.getNoticeType();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasQuotaActionCode()) {
    body["QuotaActionCode"] = request.getQuotaActionCode();
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
 * @summary Only the administrator account of a resource directory can modify a quota template. Modifications to a quota template apply only to new members that are added to the resource directory and do not affect existing members.
 *
 * @param request ModifyTemplateQuotaItemRequest
 * @return ModifyTemplateQuotaItemResponse
 */
ModifyTemplateQuotaItemResponse Client::modifyTemplateQuotaItem(const ModifyTemplateQuotaItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTemplateQuotaItemWithOptions(request, runtime);
}

/**
 * @summary Sends a reminder for a quota application that is pending approval.
 *
 * @description > This operation applies only to quota applications that support reminders. In the GetQuotaApplicationApproval response, the `SupportReminder` parameter for these applications is `true`.
 *
 * @param request RemindQuotaApplicationApprovalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemindQuotaApplicationApprovalResponse
 */
RemindQuotaApplicationApprovalResponse Client::remindQuotaApplicationApprovalWithOptions(const RemindQuotaApplicationApprovalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.getApplicationId();
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
 * @summary Sends a reminder for a quota application that is pending approval.
 *
 * @description > This operation applies only to quota applications that support reminders. In the GetQuotaApplicationApproval response, the `SupportReminder` parameter for these applications is `true`.
 *
 * @param request RemindQuotaApplicationApprovalRequest
 * @return RemindQuotaApplicationApprovalResponse
 */
RemindQuotaApplicationApprovalResponse Client::remindQuotaApplicationApproval(const RemindQuotaApplicationApprovalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return remindQuotaApplicationApprovalWithOptions(request, runtime);
}

/**
 * @summary 发起配额使用率报告查询
 *
 * @param request StartQuotaUtilizationReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartQuotaUtilizationReportResponse
 */
StartQuotaUtilizationReportResponse Client::startQuotaUtilizationReportWithOptions(const StartQuotaUtilizationReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "StartQuotaUtilizationReport"},
    {"version" , "2020-05-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartQuotaUtilizationReportResponse>();
}

/**
 * @summary 发起配额使用率报告查询
 *
 * @param request StartQuotaUtilizationReportRequest
 * @return StartQuotaUtilizationReportResponse
 */
StartQuotaUtilizationReportResponse Client::startQuotaUtilizationReport(const StartQuotaUtilizationReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startQuotaUtilizationReportWithOptions(request, runtime);
}

/**
 * @summary Modifies quota alert information.
 *
 * @description This API operation is deprecated because the quota alert feature has been upgraded. To modify information about new quota usage alerts, use the CloudMonitor API operations [PutResourceMetricRules](https://help.aliyun.com/document_detail/2513316.html) and [PutMetricRuleTargets](https://help.aliyun.com/document_detail/2513302.html). For more information about using API operations to manage new quota alerts, see [Use API operations to manage new quota alerts](https://help.aliyun.com/document_detail/2863234.html).
 *
 * @param request UpdateQuotaAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQuotaAlarmResponse
 */
UpdateQuotaAlarmResponse Client::updateQuotaAlarmWithOptions(const UpdateQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmId()) {
    body["AlarmId"] = request.getAlarmId();
  }

  if (!!request.hasAlarmName()) {
    body["AlarmName"] = request.getAlarmName();
  }

  if (!!request.hasThreshold()) {
    body["Threshold"] = request.getThreshold();
  }

  if (!!request.hasThresholdPercent()) {
    body["ThresholdPercent"] = request.getThresholdPercent();
  }

  if (!!request.hasThresholdType()) {
    body["ThresholdType"] = request.getThresholdType();
  }

  if (!!request.hasWebHook()) {
    body["WebHook"] = request.getWebHook();
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
 * @summary Modifies quota alert information.
 *
 * @description This API operation is deprecated because the quota alert feature has been upgraded. To modify information about new quota usage alerts, use the CloudMonitor API operations [PutResourceMetricRules](https://help.aliyun.com/document_detail/2513316.html) and [PutMetricRuleTargets](https://help.aliyun.com/document_detail/2513302.html). For more information about using API operations to manage new quota alerts, see [Use API operations to manage new quota alerts](https://help.aliyun.com/document_detail/2863234.html).
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