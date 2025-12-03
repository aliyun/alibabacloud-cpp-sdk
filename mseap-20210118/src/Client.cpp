#include <darabonba/Core.hpp>
#include <alibabacloud/Mseap20210118.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::Mseap20210118::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Mseap20210118
{

AlibabaCloud::Mseap20210118::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("mseap", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 商品授权码激活
 *
 * @param request ActivateLicenseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateLicenseResponse
 */
ActivateLicenseResponse Client::activateLicenseWithOptions(const ActivateLicenseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasLicenseCode()) {
    query["LicenseCode"] = request.licenseCode();
  }

  if (!!request.hasLicenseNo()) {
    query["LicenseNo"] = request.licenseNo();
  }

  if (!!request.hasLicensePublisher()) {
    query["LicensePublisher"] = request.licensePublisher();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ActivateLicense"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActivateLicenseResponse>();
}

/**
 * @summary 商品授权码激活
 *
 * @param request ActivateLicenseRequest
 * @return ActivateLicenseResponse
 */
ActivateLicenseResponse Client::activateLicense(const ActivateLicenseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activateLicenseWithOptions(request, runtime);
}

/**
 * @summary 任务回调
 *
 * @param request CallbackTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CallbackTaskResponse
 */
CallbackTaskResponse Client::callbackTaskWithOptions(const CallbackTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunKp()) {
    query["AliyunKp"] = request.aliyunKp();
  }

  if (!!request.hasApiType()) {
    query["ApiType"] = request.apiType();
  }

  if (!!request.hasBid()) {
    query["Bid"] = request.bid();
  }

  if (!!request.hasBizCode()) {
    query["BizCode"] = request.bizCode();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOriginalRequest()) {
    query["OriginalRequest"] = request.originalRequest();
  }

  if (!!request.hasOutTaskId()) {
    query["OutTaskId"] = request.outTaskId();
  }

  if (!!request.hasPrincipalKey()) {
    query["PrincipalKey"] = request.principalKey();
  }

  if (!!request.hasTaskData()) {
    query["TaskData"] = request.taskData();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserBid()) {
    query["UserBid"] = request.userBid();
  }

  if (!!request.hasUserCallerParentId()) {
    query["UserCallerParentId"] = request.userCallerParentId();
  }

  if (!!request.hasUserCallerSecurityTransport()) {
    query["UserCallerSecurityTransport"] = request.userCallerSecurityTransport();
  }

  if (!!request.hasUserCallerType()) {
    query["UserCallerType"] = request.userCallerType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasUserKp()) {
    query["UserKp"] = request.userKp();
  }

  if (!!request.hasUserMfaPresent()) {
    query["UserMfaPresent"] = request.userMfaPresent();
  }

  if (!!request.hasUserSecurityToken()) {
    query["UserSecurityToken"] = request.userSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CallbackTask"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CallbackTaskResponse>();
}

/**
 * @summary 任务回调
 *
 * @param request CallbackTaskRequest
 * @return CallbackTaskResponse
 */
CallbackTaskResponse Client::callbackTask(const CallbackTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return callbackTaskWithOptions(request, runtime);
}

/**
 * @summary 查询协议状态
 *
 * @param request DescribeAgreementStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAgreementStatusResponse
 */
DescribeAgreementStatusResponse Client::describeAgreementStatusWithOptions(const DescribeAgreementStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgreementCode()) {
    query["AgreementCode"] = request.agreementCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAgreementStatus"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAgreementStatusResponse>();
}

/**
 * @summary 查询协议状态
 *
 * @param request DescribeAgreementStatusRequest
 * @return DescribeAgreementStatusResponse
 */
DescribeAgreementStatusResponse Client::describeAgreementStatus(const DescribeAgreementStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAgreementStatusWithOptions(request, runtime);
}

/**
 * @summary 合作伙伴生成上传文件策略
 *
 * @param request GenerateUploadFilePolicyForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateUploadFilePolicyForPartnerResponse
 */
GenerateUploadFilePolicyForPartnerResponse Client::generateUploadFilePolicyForPartnerWithOptions(const GenerateUploadFilePolicyForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.fileType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateUploadFilePolicyForPartner"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateUploadFilePolicyForPartnerResponse>();
}

/**
 * @summary 合作伙伴生成上传文件策略
 *
 * @param request GenerateUploadFilePolicyForPartnerRequest
 * @return GenerateUploadFilePolicyForPartnerResponse
 */
GenerateUploadFilePolicyForPartnerResponse Client::generateUploadFilePolicyForPartner(const GenerateUploadFilePolicyForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateUploadFilePolicyForPartnerWithOptions(request, runtime);
}

/**
 * @summary 获取node节点通过流程id
 *
 * @param request GetNodeByFlowIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeByFlowIdResponse
 */
GetNodeByFlowIdResponse Client::getNodeByFlowIdWithOptions(const GetNodeByFlowIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunKp()) {
    query["AliyunKp"] = request.aliyunKp();
  }

  if (!!request.hasApiType()) {
    query["ApiType"] = request.apiType();
  }

  if (!!request.hasBid()) {
    query["Bid"] = request.bid();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOriginalRequest()) {
    query["OriginalRequest"] = request.originalRequest();
  }

  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserBid()) {
    query["UserBid"] = request.userBid();
  }

  if (!!request.hasUserCallerParentId()) {
    query["UserCallerParentId"] = request.userCallerParentId();
  }

  if (!!request.hasUserCallerSecurityTransport()) {
    query["UserCallerSecurityTransport"] = request.userCallerSecurityTransport();
  }

  if (!!request.hasUserCallerType()) {
    query["UserCallerType"] = request.userCallerType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasUserKp()) {
    query["UserKp"] = request.userKp();
  }

  if (!!request.hasUserMfaPresent()) {
    query["UserMfaPresent"] = request.userMfaPresent();
  }

  if (!!request.hasUserSecurityToken()) {
    query["UserSecurityToken"] = request.userSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNodeByFlowId"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeByFlowIdResponse>();
}

/**
 * @summary 获取node节点通过流程id
 *
 * @param request GetNodeByFlowIdRequest
 * @return GetNodeByFlowIdResponse
 */
GetNodeByFlowIdResponse Client::getNodeByFlowId(const GetNodeByFlowIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNodeByFlowIdWithOptions(request, runtime);
}

/**
 * @summary 获取node节点通过模版id
 *
 * @param request GetNodeByTemplateIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeByTemplateIdResponse
 */
GetNodeByTemplateIdResponse Client::getNodeByTemplateIdWithOptions(const GetNodeByTemplateIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunKp()) {
    query["AliyunKp"] = request.aliyunKp();
  }

  if (!!request.hasApiType()) {
    query["ApiType"] = request.apiType();
  }

  if (!!request.hasBid()) {
    query["Bid"] = request.bid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOriginalRequest()) {
    query["OriginalRequest"] = request.originalRequest();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserBid()) {
    query["UserBid"] = request.userBid();
  }

  if (!!request.hasUserCallerParentId()) {
    query["UserCallerParentId"] = request.userCallerParentId();
  }

  if (!!request.hasUserCallerSecurityTransport()) {
    query["UserCallerSecurityTransport"] = request.userCallerSecurityTransport();
  }

  if (!!request.hasUserCallerType()) {
    query["UserCallerType"] = request.userCallerType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasUserKp()) {
    query["UserKp"] = request.userKp();
  }

  if (!!request.hasUserMfaPresent()) {
    query["UserMfaPresent"] = request.userMfaPresent();
  }

  if (!!request.hasUserSecurityToken()) {
    query["UserSecurityToken"] = request.userSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNodeByTemplateId"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeByTemplateIdResponse>();
}

/**
 * @summary 获取node节点通过模版id
 *
 * @param request GetNodeByTemplateIdRequest
 * @return GetNodeByTemplateIdResponse
 */
GetNodeByTemplateIdResponse Client::getNodeByTemplateId(const GetNodeByTemplateIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNodeByTemplateIdWithOptions(request, runtime);
}

/**
 * @summary 合作伙伴获取订单概要信息
 *
 * @param request GetOrderSummaryForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrderSummaryForPartnerResponse
 */
GetOrderSummaryForPartnerResponse Client::getOrderSummaryForPartnerWithOptions(const GetOrderSummaryForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOrderSummaryForPartner"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOrderSummaryForPartnerResponse>();
}

/**
 * @summary 合作伙伴获取订单概要信息
 *
 * @param request GetOrderSummaryForPartnerRequest
 * @return GetOrderSummaryForPartnerResponse
 */
GetOrderSummaryForPartnerResponse Client::getOrderSummaryForPartner(const GetOrderSummaryForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOrderSummaryForPartnerWithOptions(request, runtime);
}

/**
 * @summary 合作伙伴获取用户跨平台信息
 *
 * @param request GetPlatformUserInfoForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPlatformUserInfoForPartnerResponse
 */
GetPlatformUserInfoForPartnerResponse Client::getPlatformUserInfoForPartnerWithOptions(const GetPlatformUserInfoForPartnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasPlatformType()) {
    query["PlatformType"] = request.platformType();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPlatformUserInfoForPartner"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPlatformUserInfoForPartnerResponse>();
}

/**
 * @summary 合作伙伴获取用户跨平台信息
 *
 * @param request GetPlatformUserInfoForPartnerRequest
 * @return GetPlatformUserInfoForPartnerResponse
 */
GetPlatformUserInfoForPartnerResponse Client::getPlatformUserInfoForPartner(const GetPlatformUserInfoForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPlatformUserInfoForPartnerWithOptions(request, runtime);
}

/**
 * @summary 获取代理
 *
 * @param request GetProxyByTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProxyByTypeResponse
 */
GetProxyByTypeResponse Client::getProxyByTypeWithOptions(const GetProxyByTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunKp()) {
    query["AliyunKp"] = request.aliyunKp();
  }

  if (!!request.hasApiType()) {
    query["ApiType"] = request.apiType();
  }

  if (!!request.hasBid()) {
    query["Bid"] = request.bid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOriginalRequest()) {
    query["OriginalRequest"] = request.originalRequest();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserBid()) {
    query["UserBid"] = request.userBid();
  }

  if (!!request.hasUserCallerParentId()) {
    query["UserCallerParentId"] = request.userCallerParentId();
  }

  if (!!request.hasUserCallerSecurityTransport()) {
    query["UserCallerSecurityTransport"] = request.userCallerSecurityTransport();
  }

  if (!!request.hasUserCallerType()) {
    query["UserCallerType"] = request.userCallerType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasUserKp()) {
    query["UserKp"] = request.userKp();
  }

  if (!!request.hasUserMfaPresent()) {
    query["UserMfaPresent"] = request.userMfaPresent();
  }

  if (!!request.hasUserSecurityToken()) {
    query["UserSecurityToken"] = request.userSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProxyByType"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProxyByTypeResponse>();
}

/**
 * @summary 获取代理
 *
 * @param request GetProxyByTypeRequest
 * @return GetProxyByTypeResponse
 */
GetProxyByTypeResponse Client::getProxyByType(const GetProxyByTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProxyByTypeWithOptions(request, runtime);
}

/**
 * @summary 获取redis值
 *
 * @param request GetRedisValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRedisValueResponse
 */
GetRedisValueResponse Client::getRedisValueWithOptions(const GetRedisValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunKp()) {
    query["AliyunKp"] = request.aliyunKp();
  }

  if (!!request.hasApiType()) {
    query["ApiType"] = request.apiType();
  }

  if (!!request.hasBid()) {
    query["Bid"] = request.bid();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOriginalRequest()) {
    query["OriginalRequest"] = request.originalRequest();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.timeout();
  }

  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserBid()) {
    query["UserBid"] = request.userBid();
  }

  if (!!request.hasUserCallerParentId()) {
    query["UserCallerParentId"] = request.userCallerParentId();
  }

  if (!!request.hasUserCallerSecurityTransport()) {
    query["UserCallerSecurityTransport"] = request.userCallerSecurityTransport();
  }

  if (!!request.hasUserCallerType()) {
    query["UserCallerType"] = request.userCallerType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasUserKp()) {
    query["UserKp"] = request.userKp();
  }

  if (!!request.hasUserMfaPresent()) {
    query["UserMfaPresent"] = request.userMfaPresent();
  }

  if (!!request.hasUserSecurityToken()) {
    query["UserSecurityToken"] = request.userSecurityToken();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRedisValue"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRedisValueResponse>();
}

/**
 * @summary 获取redis值
 *
 * @param request GetRedisValueRequest
 * @return GetRedisValueResponse
 */
GetRedisValueResponse Client::getRedisValue(const GetRedisValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRedisValueWithOptions(request, runtime);
}

/**
 * @summary 获取变量
 *
 * @param request GetVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVariableResponse
 */
GetVariableResponse Client::getVariableWithOptions(const GetVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunKp()) {
    query["AliyunKp"] = request.aliyunKp();
  }

  if (!!request.hasApiType()) {
    query["ApiType"] = request.apiType();
  }

  if (!!request.hasBid()) {
    query["Bid"] = request.bid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOriginalRequest()) {
    query["OriginalRequest"] = request.originalRequest();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserBid()) {
    query["UserBid"] = request.userBid();
  }

  if (!!request.hasUserCallerParentId()) {
    query["UserCallerParentId"] = request.userCallerParentId();
  }

  if (!!request.hasUserCallerSecurityTransport()) {
    query["UserCallerSecurityTransport"] = request.userCallerSecurityTransport();
  }

  if (!!request.hasUserCallerType()) {
    query["UserCallerType"] = request.userCallerType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasUserKp()) {
    query["UserKp"] = request.userKp();
  }

  if (!!request.hasUserMfaPresent()) {
    query["UserMfaPresent"] = request.userMfaPresent();
  }

  if (!!request.hasUserSecurityToken()) {
    query["UserSecurityToken"] = request.userSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVariable"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVariableResponse>();
}

/**
 * @summary 获取变量
 *
 * @param request GetVariableRequest
 * @return GetVariableResponse
 */
GetVariableResponse Client::getVariable(const GetVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVariableWithOptions(request, runtime);
}

/**
 * @summary 识别验证码
 *
 * @param request IdentifyCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IdentifyCodeResponse
 */
IdentifyCodeResponse Client::identifyCodeWithOptions(const IdentifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunKp()) {
    query["AliyunKp"] = request.aliyunKp();
  }

  if (!!request.hasApiType()) {
    query["ApiType"] = request.apiType();
  }

  if (!!request.hasBid()) {
    query["Bid"] = request.bid();
  }

  if (!!request.hasData()) {
    query["Data"] = request.data();
  }

  if (!!request.hasLabel()) {
    query["Label"] = request.label();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOriginalRequest()) {
    query["OriginalRequest"] = request.originalRequest();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserBid()) {
    query["UserBid"] = request.userBid();
  }

  if (!!request.hasUserCallerParentId()) {
    query["UserCallerParentId"] = request.userCallerParentId();
  }

  if (!!request.hasUserCallerSecurityTransport()) {
    query["UserCallerSecurityTransport"] = request.userCallerSecurityTransport();
  }

  if (!!request.hasUserCallerType()) {
    query["UserCallerType"] = request.userCallerType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasUserKp()) {
    query["UserKp"] = request.userKp();
  }

  if (!!request.hasUserMfaPresent()) {
    query["UserMfaPresent"] = request.userMfaPresent();
  }

  if (!!request.hasUserSecurityToken()) {
    query["UserSecurityToken"] = request.userSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IdentifyCode"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IdentifyCodeResponse>();
}

/**
 * @summary 识别验证码
 *
 * @param request IdentifyCodeRequest
 * @return IdentifyCodeResponse
 */
IdentifyCodeResponse Client::identifyCode(const IdentifyCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return identifyCodeWithOptions(request, runtime);
}

/**
 * @summary 拉取协议变更识别模型
 *
 * @param request PullRpaModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PullRpaModelResponse
 */
PullRpaModelResponse Client::pullRpaModelWithOptions(const PullRpaModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunKp()) {
    query["AliyunKp"] = request.aliyunKp();
  }

  if (!!request.hasApiType()) {
    query["ApiType"] = request.apiType();
  }

  if (!!request.hasBid()) {
    query["Bid"] = request.bid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOriginalRequest()) {
    query["OriginalRequest"] = request.originalRequest();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserBid()) {
    query["UserBid"] = request.userBid();
  }

  if (!!request.hasUserCallerParentId()) {
    query["UserCallerParentId"] = request.userCallerParentId();
  }

  if (!!request.hasUserCallerType()) {
    query["UserCallerType"] = request.userCallerType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasUserKp()) {
    query["UserKp"] = request.userKp();
  }

  if (!!request.hasUserMfaPresent()) {
    query["UserMfaPresent"] = request.userMfaPresent();
  }

  if (!!request.hasUserSecurityToken()) {
    query["UserSecurityToken"] = request.userSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PullRpaModel"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PullRpaModelResponse>();
}

/**
 * @summary 拉取协议变更识别模型
 *
 * @param request PullRpaModelRequest
 * @return PullRpaModelResponse
 */
PullRpaModelResponse Client::pullRpaModel(const PullRpaModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pullRpaModelWithOptions(request, runtime);
}

/**
 * @summary RPA拉取任务
 *
 * @param request PullTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PullTaskResponse
 */
PullTaskResponse Client::pullTaskWithOptions(const PullTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunKp()) {
    query["AliyunKp"] = request.aliyunKp();
  }

  if (!!request.hasApiType()) {
    query["ApiType"] = request.apiType();
  }

  if (!!request.hasBid()) {
    query["Bid"] = request.bid();
  }

  if (!!request.hasBizCode()) {
    query["BizCode"] = request.bizCode();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOriginalRequest()) {
    query["OriginalRequest"] = request.originalRequest();
  }

  if (!!request.hasPrincipalKey()) {
    query["PrincipalKey"] = request.principalKey();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserBid()) {
    query["UserBid"] = request.userBid();
  }

  if (!!request.hasUserCallerParentId()) {
    query["UserCallerParentId"] = request.userCallerParentId();
  }

  if (!!request.hasUserCallerSecurityTransport()) {
    query["UserCallerSecurityTransport"] = request.userCallerSecurityTransport();
  }

  if (!!request.hasUserCallerType()) {
    query["UserCallerType"] = request.userCallerType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasUserKp()) {
    query["UserKp"] = request.userKp();
  }

  if (!!request.hasUserMfaPresent()) {
    query["UserMfaPresent"] = request.userMfaPresent();
  }

  if (!!request.hasUserSecurityToken()) {
    query["UserSecurityToken"] = request.userSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PullTask"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PullTaskResponse>();
}

/**
 * @summary RPA拉取任务
 *
 * @param request PullTaskRequest
 * @return PullTaskResponse
 */
PullTaskResponse Client::pullTask(const PullTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pullTaskWithOptions(request, runtime);
}

/**
 * @summary 推送RPA运行时任务
 *
 * @param request PushRpaTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushRpaTaskResponse
 */
PushRpaTaskResponse Client::pushRpaTaskWithOptions(const PushRpaTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunKp()) {
    query["AliyunKp"] = request.aliyunKp();
  }

  if (!!request.hasApiType()) {
    query["ApiType"] = request.apiType();
  }

  if (!!request.hasBid()) {
    query["Bid"] = request.bid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasModelId()) {
    query["ModelId"] = request.modelId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOriginalRequest()) {
    query["OriginalRequest"] = request.originalRequest();
  }

  if (!!request.hasRequest()) {
    query["Request"] = request.request();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserBid()) {
    query["UserBid"] = request.userBid();
  }

  if (!!request.hasUserCallerParentId()) {
    query["UserCallerParentId"] = request.userCallerParentId();
  }

  if (!!request.hasUserCallerType()) {
    query["UserCallerType"] = request.userCallerType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasUserKp()) {
    query["UserKp"] = request.userKp();
  }

  if (!!request.hasUserMfaPresent()) {
    query["UserMfaPresent"] = request.userMfaPresent();
  }

  if (!!request.hasUserSecurityToken()) {
    query["UserSecurityToken"] = request.userSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushRpaTask"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushRpaTaskResponse>();
}

/**
 * @summary 推送RPA运行时任务
 *
 * @param request PushRpaTaskRequest
 * @return PushRpaTaskResponse
 */
PushRpaTaskResponse Client::pushRpaTask(const PushRpaTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushRpaTaskWithOptions(request, runtime);
}

/**
 * @summary 推送运行时任务明细
 *
 * @param request PushRpaTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushRpaTaskDetailResponse
 */
PushRpaTaskDetailResponse Client::pushRpaTaskDetailWithOptions(const PushRpaTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunKp()) {
    query["AliyunKp"] = request.aliyunKp();
  }

  if (!!request.hasApiType()) {
    query["ApiType"] = request.apiType();
  }

  if (!!request.hasBid()) {
    query["Bid"] = request.bid();
  }

  if (!!request.hasInputData()) {
    query["InputData"] = request.inputData();
  }

  if (!!request.hasInputHtml()) {
    query["InputHtml"] = request.inputHtml();
  }

  if (!!request.hasInputScreenshot()) {
    query["InputScreenshot"] = request.inputScreenshot();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasModelDetailId()) {
    query["ModelDetailId"] = request.modelDetailId();
  }

  if (!!request.hasOriginalRequest()) {
    query["OriginalRequest"] = request.originalRequest();
  }

  if (!!request.hasOutputData()) {
    query["OutputData"] = request.outputData();
  }

  if (!!request.hasOutputHtml()) {
    query["OutputHtml"] = request.outputHtml();
  }

  if (!!request.hasOutputScreenshot()) {
    query["OutputScreenshot"] = request.outputScreenshot();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskDetailId()) {
    query["TaskDetailId"] = request.taskDetailId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserBid()) {
    query["UserBid"] = request.userBid();
  }

  if (!!request.hasUserCallerParentId()) {
    query["UserCallerParentId"] = request.userCallerParentId();
  }

  if (!!request.hasUserCallerType()) {
    query["UserCallerType"] = request.userCallerType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasUserKp()) {
    query["UserKp"] = request.userKp();
  }

  if (!!request.hasUserSecurityToken()) {
    query["UserSecurityToken"] = request.userSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PushRpaTaskDetail"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushRpaTaskDetailResponse>();
}

/**
 * @summary 推送运行时任务明细
 *
 * @param request PushRpaTaskDetailRequest
 * @return PushRpaTaskDetailResponse
 */
PushRpaTaskDetailResponse Client::pushRpaTaskDetail(const PushRpaTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushRpaTaskDetailWithOptions(request, runtime);
}

/**
 * @summary 合作伙伴发送消息通知
 *
 * @param tmpReq SendNotificationForPartnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendNotificationForPartnerResponse
 */
SendNotificationForPartnerResponse Client::sendNotificationForPartnerWithOptions(const SendNotificationForPartnerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendNotificationForPartnerShrinkRequest request = SendNotificationForPartnerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParamMap()) {
    request.setParamMapShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.paramMap(), "ParamMap", "json"));
  }

  if (!!tmpReq.hasSmartSubChannels()) {
    request.setSmartSubChannelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.smartSubChannels(), "SmartSubChannels", "json"));
  }

  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasChannelType()) {
    query["ChannelType"] = request.channelType();
  }

  if (!!request.hasNotifyType()) {
    query["NotifyType"] = request.notifyType();
  }

  if (!!request.hasNotifycationEventType()) {
    query["NotifycationEventType"] = request.notifycationEventType();
  }

  if (!!request.hasParamMapShrink()) {
    query["ParamMap"] = request.paramMapShrink();
  }

  if (!!request.hasSendTarget()) {
    query["SendTarget"] = request.sendTarget();
  }

  if (!!request.hasSmartSubChannelsShrink()) {
    query["SmartSubChannels"] = request.smartSubChannelsShrink();
  }

  if (!!request.hasTrackId()) {
    query["TrackId"] = request.trackId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendNotificationForPartner"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendNotificationForPartnerResponse>();
}

/**
 * @summary 合作伙伴发送消息通知
 *
 * @param request SendNotificationForPartnerRequest
 * @return SendNotificationForPartnerResponse
 */
SendNotificationForPartnerResponse Client::sendNotificationForPartner(const SendNotificationForPartnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendNotificationForPartnerWithOptions(request, runtime);
}

/**
 * @summary redis设置
 *
 * @param request SetRedisValueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetRedisValueResponse
 */
SetRedisValueResponse Client::setRedisValueWithOptions(const SetRedisValueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunKp()) {
    query["AliyunKp"] = request.aliyunKp();
  }

  if (!!request.hasApiType()) {
    query["ApiType"] = request.apiType();
  }

  if (!!request.hasBid()) {
    query["Bid"] = request.bid();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOriginalRequest()) {
    query["OriginalRequest"] = request.originalRequest();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.requestId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.timeout();
  }

  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserBid()) {
    query["UserBid"] = request.userBid();
  }

  if (!!request.hasUserCallerParentId()) {
    query["UserCallerParentId"] = request.userCallerParentId();
  }

  if (!!request.hasUserCallerType()) {
    query["UserCallerType"] = request.userCallerType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasUserKp()) {
    query["UserKp"] = request.userKp();
  }

  if (!!request.hasUserMfaPresent()) {
    query["UserMfaPresent"] = request.userMfaPresent();
  }

  if (!!request.hasUserSecurityToken()) {
    query["UserSecurityToken"] = request.userSecurityToken();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetRedisValue"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetRedisValueResponse>();
}

/**
 * @summary redis设置
 *
 * @param request SetRedisValueRequest
 * @return SetRedisValueResponse
 */
SetRedisValueResponse Client::setRedisValue(const SetRedisValueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setRedisValueWithOptions(request, runtime);
}

/**
 * @summary 更新协议状态
 *
 * @param request UpdateAgreementStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgreementStatusResponse
 */
UpdateAgreementStatusResponse Client::updateAgreementStatusWithOptions(const UpdateAgreementStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgreementCode()) {
    query["AgreementCode"] = request.agreementCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAgreementStatus"},
    {"version" , "2021-01-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgreementStatusResponse>();
}

/**
 * @summary 更新协议状态
 *
 * @param request UpdateAgreementStatusRequest
 * @return UpdateAgreementStatusResponse
 */
UpdateAgreementStatusResponse Client::updateAgreementStatus(const UpdateAgreementStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAgreementStatusWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Mseap20210118