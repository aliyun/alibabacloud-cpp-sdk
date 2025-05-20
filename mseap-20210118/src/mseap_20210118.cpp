// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/mseap_20210118.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Mseap20210118;

Alibabacloud_Mseap20210118::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("mseap"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Mseap20210118::Client::getEndpoint(shared_ptr<string> productId,
                                                       shared_ptr<string> regionId,
                                                       shared_ptr<string> endpointRule,
                                                       shared_ptr<string> network,
                                                       shared_ptr<string> suffix,
                                                       shared_ptr<map<string, string>> endpointMap,
                                                       shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

ActivateLicenseResponse Alibabacloud_Mseap20210118::Client::activateLicenseWithOptions(shared_ptr<ActivateLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->licenseCode)) {
    query->insert(pair<string, string>("LicenseCode", *request->licenseCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->licenseNo)) {
    query->insert(pair<string, string>("LicenseNo", *request->licenseNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->licensePublisher)) {
    query->insert(pair<string, string>("LicensePublisher", *request->licensePublisher));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ActivateLicense"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ActivateLicenseResponse(callApi(params, req, runtime));
}

ActivateLicenseResponse Alibabacloud_Mseap20210118::Client::activateLicense(shared_ptr<ActivateLicenseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activateLicenseWithOptions(request, runtime);
}

CallbackTaskResponse Alibabacloud_Mseap20210118::Client::callbackTaskWithOptions(shared_ptr<CallbackTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunKp)) {
    query->insert(pair<string, string>("AliyunKp", *request->aliyunKp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    query->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizCode)) {
    query->insert(pair<string, string>("BizCode", *request->bizCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalRequest)) {
    query->insert(pair<string, string>("OriginalRequest", *request->originalRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outTaskId)) {
    query->insert(pair<string, string>("OutTaskId", *request->outTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->principalKey)) {
    query->insert(pair<string, string>("PrincipalKey", *request->principalKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskData)) {
    query->insert(pair<string, string>("TaskData", *request->taskData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userBid)) {
    query->insert(pair<string, string>("UserBid", *request->userBid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userCallerParentId)) {
    query->insert(pair<string, long>("UserCallerParentId", *request->userCallerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userCallerSecurityTransport)) {
    query->insert(pair<string, bool>("UserCallerSecurityTransport", *request->userCallerSecurityTransport));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCallerType)) {
    query->insert(pair<string, string>("UserCallerType", *request->userCallerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userKp)) {
    query->insert(pair<string, string>("UserKp", *request->userKp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userMfaPresent)) {
    query->insert(pair<string, bool>("UserMfaPresent", *request->userMfaPresent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSecurityToken)) {
    query->insert(pair<string, string>("UserSecurityToken", *request->userSecurityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CallbackTask"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CallbackTaskResponse(callApi(params, req, runtime));
}

CallbackTaskResponse Alibabacloud_Mseap20210118::Client::callbackTask(shared_ptr<CallbackTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return callbackTaskWithOptions(request, runtime);
}

DescribeAgreementStatusResponse Alibabacloud_Mseap20210118::Client::describeAgreementStatusWithOptions(shared_ptr<DescribeAgreementStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agreementCode)) {
    query->insert(pair<string, string>("AgreementCode", *request->agreementCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAgreementStatus"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAgreementStatusResponse(callApi(params, req, runtime));
}

DescribeAgreementStatusResponse Alibabacloud_Mseap20210118::Client::describeAgreementStatus(shared_ptr<DescribeAgreementStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAgreementStatusWithOptions(request, runtime);
}

GenerateUploadFilePolicyForPartnerResponse Alibabacloud_Mseap20210118::Client::generateUploadFilePolicyForPartnerWithOptions(shared_ptr<GenerateUploadFilePolicyForPartnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileType)) {
    query->insert(pair<string, string>("FileType", *request->fileType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateUploadFilePolicyForPartner"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateUploadFilePolicyForPartnerResponse(callApi(params, req, runtime));
}

GenerateUploadFilePolicyForPartnerResponse Alibabacloud_Mseap20210118::Client::generateUploadFilePolicyForPartner(shared_ptr<GenerateUploadFilePolicyForPartnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateUploadFilePolicyForPartnerWithOptions(request, runtime);
}

GetNodeByFlowIdResponse Alibabacloud_Mseap20210118::Client::getNodeByFlowIdWithOptions(shared_ptr<GetNodeByFlowIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunKp)) {
    query->insert(pair<string, string>("AliyunKp", *request->aliyunKp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    query->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flowId)) {
    query->insert(pair<string, long>("FlowId", *request->flowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalRequest)) {
    query->insert(pair<string, string>("OriginalRequest", *request->originalRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userBid)) {
    query->insert(pair<string, string>("UserBid", *request->userBid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userCallerParentId)) {
    query->insert(pair<string, long>("UserCallerParentId", *request->userCallerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userCallerSecurityTransport)) {
    query->insert(pair<string, bool>("UserCallerSecurityTransport", *request->userCallerSecurityTransport));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCallerType)) {
    query->insert(pair<string, string>("UserCallerType", *request->userCallerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userKp)) {
    query->insert(pair<string, string>("UserKp", *request->userKp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userMfaPresent)) {
    query->insert(pair<string, bool>("UserMfaPresent", *request->userMfaPresent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSecurityToken)) {
    query->insert(pair<string, string>("UserSecurityToken", *request->userSecurityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNodeByFlowId"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNodeByFlowIdResponse(callApi(params, req, runtime));
}

GetNodeByFlowIdResponse Alibabacloud_Mseap20210118::Client::getNodeByFlowId(shared_ptr<GetNodeByFlowIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeByFlowIdWithOptions(request, runtime);
}

GetNodeByTemplateIdResponse Alibabacloud_Mseap20210118::Client::getNodeByTemplateIdWithOptions(shared_ptr<GetNodeByTemplateIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunKp)) {
    query->insert(pair<string, string>("AliyunKp", *request->aliyunKp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    query->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalRequest)) {
    query->insert(pair<string, string>("OriginalRequest", *request->originalRequest));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userBid)) {
    query->insert(pair<string, string>("UserBid", *request->userBid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userCallerParentId)) {
    query->insert(pair<string, long>("UserCallerParentId", *request->userCallerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userCallerSecurityTransport)) {
    query->insert(pair<string, bool>("UserCallerSecurityTransport", *request->userCallerSecurityTransport));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCallerType)) {
    query->insert(pair<string, string>("UserCallerType", *request->userCallerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userKp)) {
    query->insert(pair<string, string>("UserKp", *request->userKp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userMfaPresent)) {
    query->insert(pair<string, bool>("UserMfaPresent", *request->userMfaPresent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSecurityToken)) {
    query->insert(pair<string, string>("UserSecurityToken", *request->userSecurityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNodeByTemplateId"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNodeByTemplateIdResponse(callApi(params, req, runtime));
}

GetNodeByTemplateIdResponse Alibabacloud_Mseap20210118::Client::getNodeByTemplateId(shared_ptr<GetNodeByTemplateIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeByTemplateIdWithOptions(request, runtime);
}

GetProxyByTypeResponse Alibabacloud_Mseap20210118::Client::getProxyByTypeWithOptions(shared_ptr<GetProxyByTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunKp)) {
    query->insert(pair<string, string>("AliyunKp", *request->aliyunKp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    query->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalRequest)) {
    query->insert(pair<string, string>("OriginalRequest", *request->originalRequest));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userBid)) {
    query->insert(pair<string, string>("UserBid", *request->userBid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userCallerParentId)) {
    query->insert(pair<string, long>("UserCallerParentId", *request->userCallerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userCallerSecurityTransport)) {
    query->insert(pair<string, bool>("UserCallerSecurityTransport", *request->userCallerSecurityTransport));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCallerType)) {
    query->insert(pair<string, string>("UserCallerType", *request->userCallerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userKp)) {
    query->insert(pair<string, string>("UserKp", *request->userKp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userMfaPresent)) {
    query->insert(pair<string, bool>("UserMfaPresent", *request->userMfaPresent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSecurityToken)) {
    query->insert(pair<string, string>("UserSecurityToken", *request->userSecurityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProxyByType"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProxyByTypeResponse(callApi(params, req, runtime));
}

GetProxyByTypeResponse Alibabacloud_Mseap20210118::Client::getProxyByType(shared_ptr<GetProxyByTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProxyByTypeWithOptions(request, runtime);
}

GetRedisValueResponse Alibabacloud_Mseap20210118::Client::getRedisValueWithOptions(shared_ptr<GetRedisValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunKp)) {
    query->insert(pair<string, string>("AliyunKp", *request->aliyunKp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    query->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalRequest)) {
    query->insert(pair<string, string>("OriginalRequest", *request->originalRequest));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userBid)) {
    query->insert(pair<string, string>("UserBid", *request->userBid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userCallerParentId)) {
    query->insert(pair<string, long>("UserCallerParentId", *request->userCallerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userCallerSecurityTransport)) {
    query->insert(pair<string, bool>("UserCallerSecurityTransport", *request->userCallerSecurityTransport));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCallerType)) {
    query->insert(pair<string, string>("UserCallerType", *request->userCallerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userKp)) {
    query->insert(pair<string, string>("UserKp", *request->userKp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userMfaPresent)) {
    query->insert(pair<string, bool>("UserMfaPresent", *request->userMfaPresent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSecurityToken)) {
    query->insert(pair<string, string>("UserSecurityToken", *request->userSecurityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRedisValue"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRedisValueResponse(callApi(params, req, runtime));
}

GetRedisValueResponse Alibabacloud_Mseap20210118::Client::getRedisValue(shared_ptr<GetRedisValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRedisValueWithOptions(request, runtime);
}

GetVariableResponse Alibabacloud_Mseap20210118::Client::getVariableWithOptions(shared_ptr<GetVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunKp)) {
    query->insert(pair<string, string>("AliyunKp", *request->aliyunKp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    query->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalRequest)) {
    query->insert(pair<string, string>("OriginalRequest", *request->originalRequest));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userBid)) {
    query->insert(pair<string, string>("UserBid", *request->userBid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userCallerParentId)) {
    query->insert(pair<string, long>("UserCallerParentId", *request->userCallerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userCallerSecurityTransport)) {
    query->insert(pair<string, bool>("UserCallerSecurityTransport", *request->userCallerSecurityTransport));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCallerType)) {
    query->insert(pair<string, string>("UserCallerType", *request->userCallerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userKp)) {
    query->insert(pair<string, string>("UserKp", *request->userKp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userMfaPresent)) {
    query->insert(pair<string, bool>("UserMfaPresent", *request->userMfaPresent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSecurityToken)) {
    query->insert(pair<string, string>("UserSecurityToken", *request->userSecurityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVariable"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVariableResponse(callApi(params, req, runtime));
}

GetVariableResponse Alibabacloud_Mseap20210118::Client::getVariable(shared_ptr<GetVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVariableWithOptions(request, runtime);
}

IdentifyCodeResponse Alibabacloud_Mseap20210118::Client::identifyCodeWithOptions(shared_ptr<IdentifyCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunKp)) {
    query->insert(pair<string, string>("AliyunKp", *request->aliyunKp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    query->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    query->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    query->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalRequest)) {
    query->insert(pair<string, string>("OriginalRequest", *request->originalRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userBid)) {
    query->insert(pair<string, string>("UserBid", *request->userBid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userCallerParentId)) {
    query->insert(pair<string, long>("UserCallerParentId", *request->userCallerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userCallerSecurityTransport)) {
    query->insert(pair<string, bool>("UserCallerSecurityTransport", *request->userCallerSecurityTransport));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCallerType)) {
    query->insert(pair<string, string>("UserCallerType", *request->userCallerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userKp)) {
    query->insert(pair<string, string>("UserKp", *request->userKp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userMfaPresent)) {
    query->insert(pair<string, bool>("UserMfaPresent", *request->userMfaPresent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSecurityToken)) {
    query->insert(pair<string, string>("UserSecurityToken", *request->userSecurityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IdentifyCode"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IdentifyCodeResponse(callApi(params, req, runtime));
}

IdentifyCodeResponse Alibabacloud_Mseap20210118::Client::identifyCode(shared_ptr<IdentifyCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return identifyCodeWithOptions(request, runtime);
}

PullRpaModelResponse Alibabacloud_Mseap20210118::Client::pullRpaModelWithOptions(shared_ptr<PullRpaModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunKp)) {
    query->insert(pair<string, string>("AliyunKp", *request->aliyunKp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    query->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalRequest)) {
    query->insert(pair<string, string>("OriginalRequest", *request->originalRequest));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userBid)) {
    query->insert(pair<string, string>("UserBid", *request->userBid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userCallerParentId)) {
    query->insert(pair<string, long>("UserCallerParentId", *request->userCallerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCallerType)) {
    query->insert(pair<string, string>("UserCallerType", *request->userCallerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userKp)) {
    query->insert(pair<string, string>("UserKp", *request->userKp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userMfaPresent)) {
    query->insert(pair<string, bool>("UserMfaPresent", *request->userMfaPresent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSecurityToken)) {
    query->insert(pair<string, string>("UserSecurityToken", *request->userSecurityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PullRpaModel"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PullRpaModelResponse(callApi(params, req, runtime));
}

PullRpaModelResponse Alibabacloud_Mseap20210118::Client::pullRpaModel(shared_ptr<PullRpaModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pullRpaModelWithOptions(request, runtime);
}

PullTaskResponse Alibabacloud_Mseap20210118::Client::pullTaskWithOptions(shared_ptr<PullTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunKp)) {
    query->insert(pair<string, string>("AliyunKp", *request->aliyunKp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    query->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizCode)) {
    query->insert(pair<string, string>("BizCode", *request->bizCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalRequest)) {
    query->insert(pair<string, string>("OriginalRequest", *request->originalRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->principalKey)) {
    query->insert(pair<string, string>("PrincipalKey", *request->principalKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userBid)) {
    query->insert(pair<string, string>("UserBid", *request->userBid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userCallerParentId)) {
    query->insert(pair<string, long>("UserCallerParentId", *request->userCallerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userCallerSecurityTransport)) {
    query->insert(pair<string, bool>("UserCallerSecurityTransport", *request->userCallerSecurityTransport));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCallerType)) {
    query->insert(pair<string, string>("UserCallerType", *request->userCallerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userKp)) {
    query->insert(pair<string, string>("UserKp", *request->userKp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userMfaPresent)) {
    query->insert(pair<string, bool>("UserMfaPresent", *request->userMfaPresent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSecurityToken)) {
    query->insert(pair<string, string>("UserSecurityToken", *request->userSecurityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PullTask"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PullTaskResponse(callApi(params, req, runtime));
}

PullTaskResponse Alibabacloud_Mseap20210118::Client::pullTask(shared_ptr<PullTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pullTaskWithOptions(request, runtime);
}

PushRpaTaskResponse Alibabacloud_Mseap20210118::Client::pushRpaTaskWithOptions(shared_ptr<PushRpaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunKp)) {
    query->insert(pair<string, string>("AliyunKp", *request->aliyunKp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    query->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelId)) {
    query->insert(pair<string, long>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalRequest)) {
    query->insert(pair<string, string>("OriginalRequest", *request->originalRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->request)) {
    query->insert(pair<string, string>("Request", *request->request));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userBid)) {
    query->insert(pair<string, string>("UserBid", *request->userBid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userCallerParentId)) {
    query->insert(pair<string, long>("UserCallerParentId", *request->userCallerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCallerType)) {
    query->insert(pair<string, string>("UserCallerType", *request->userCallerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userKp)) {
    query->insert(pair<string, string>("UserKp", *request->userKp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userMfaPresent)) {
    query->insert(pair<string, bool>("UserMfaPresent", *request->userMfaPresent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSecurityToken)) {
    query->insert(pair<string, string>("UserSecurityToken", *request->userSecurityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushRpaTask"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushRpaTaskResponse(callApi(params, req, runtime));
}

PushRpaTaskResponse Alibabacloud_Mseap20210118::Client::pushRpaTask(shared_ptr<PushRpaTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushRpaTaskWithOptions(request, runtime);
}

PushRpaTaskDetailResponse Alibabacloud_Mseap20210118::Client::pushRpaTaskDetailWithOptions(shared_ptr<PushRpaTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunKp)) {
    query->insert(pair<string, string>("AliyunKp", *request->aliyunKp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    query->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputData)) {
    query->insert(pair<string, string>("InputData", *request->inputData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputHtml)) {
    query->insert(pair<string, string>("InputHtml", *request->inputHtml));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputScreenshot)) {
    query->insert(pair<string, string>("InputScreenshot", *request->inputScreenshot));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelDetailId)) {
    query->insert(pair<string, long>("ModelDetailId", *request->modelDetailId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalRequest)) {
    query->insert(pair<string, string>("OriginalRequest", *request->originalRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputData)) {
    query->insert(pair<string, string>("OutputData", *request->outputData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputHtml)) {
    query->insert(pair<string, string>("OutputHtml", *request->outputHtml));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputScreenshot)) {
    query->insert(pair<string, string>("OutputScreenshot", *request->outputScreenshot));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskDetailId)) {
    query->insert(pair<string, long>("TaskDetailId", *request->taskDetailId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userBid)) {
    query->insert(pair<string, string>("UserBid", *request->userBid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userCallerParentId)) {
    query->insert(pair<string, long>("UserCallerParentId", *request->userCallerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCallerType)) {
    query->insert(pair<string, string>("UserCallerType", *request->userCallerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userKp)) {
    query->insert(pair<string, string>("UserKp", *request->userKp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSecurityToken)) {
    query->insert(pair<string, string>("UserSecurityToken", *request->userSecurityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushRpaTaskDetail"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushRpaTaskDetailResponse(callApi(params, req, runtime));
}

PushRpaTaskDetailResponse Alibabacloud_Mseap20210118::Client::pushRpaTaskDetail(shared_ptr<PushRpaTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushRpaTaskDetailWithOptions(request, runtime);
}

SendNotificationForPartnerResponse Alibabacloud_Mseap20210118::Client::sendNotificationForPartnerWithOptions(shared_ptr<SendNotificationForPartnerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendNotificationForPartnerShrinkRequest> request = make_shared<SendNotificationForPartnerShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->paramMap)) {
    request->paramMapShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->paramMap, make_shared<string>("ParamMap"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->smartSubChannels)) {
    request->smartSubChannelsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->smartSubChannels, make_shared<string>("SmartSubChannels"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelType)) {
    query->insert(pair<string, string>("ChannelType", *request->channelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyType)) {
    query->insert(pair<string, string>("NotifyType", *request->notifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifycationEventType)) {
    query->insert(pair<string, string>("NotifycationEventType", *request->notifycationEventType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramMapShrink)) {
    query->insert(pair<string, string>("ParamMap", *request->paramMapShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sendTarget)) {
    query->insert(pair<string, string>("SendTarget", *request->sendTarget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smartSubChannelsShrink)) {
    query->insert(pair<string, string>("SmartSubChannels", *request->smartSubChannelsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trackId)) {
    query->insert(pair<string, string>("TrackId", *request->trackId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendNotificationForPartner"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendNotificationForPartnerResponse(callApi(params, req, runtime));
}

SendNotificationForPartnerResponse Alibabacloud_Mseap20210118::Client::sendNotificationForPartner(shared_ptr<SendNotificationForPartnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendNotificationForPartnerWithOptions(request, runtime);
}

SetRedisValueResponse Alibabacloud_Mseap20210118::Client::setRedisValueWithOptions(shared_ptr<SetRedisValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunKp)) {
    query->insert(pair<string, string>("AliyunKp", *request->aliyunKp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiType)) {
    query->insert(pair<string, string>("ApiType", *request->apiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bid)) {
    query->insert(pair<string, string>("Bid", *request->bid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalRequest)) {
    query->insert(pair<string, string>("OriginalRequest", *request->originalRequest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userBid)) {
    query->insert(pair<string, string>("UserBid", *request->userBid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userCallerParentId)) {
    query->insert(pair<string, long>("UserCallerParentId", *request->userCallerParentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCallerType)) {
    query->insert(pair<string, string>("UserCallerType", *request->userCallerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userKp)) {
    query->insert(pair<string, string>("UserKp", *request->userKp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->userMfaPresent)) {
    query->insert(pair<string, bool>("UserMfaPresent", *request->userMfaPresent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSecurityToken)) {
    query->insert(pair<string, string>("UserSecurityToken", *request->userSecurityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetRedisValue"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetRedisValueResponse(callApi(params, req, runtime));
}

SetRedisValueResponse Alibabacloud_Mseap20210118::Client::setRedisValue(shared_ptr<SetRedisValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setRedisValueWithOptions(request, runtime);
}

UpdateAgreementStatusResponse Alibabacloud_Mseap20210118::Client::updateAgreementStatusWithOptions(shared_ptr<UpdateAgreementStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agreementCode)) {
    query->insert(pair<string, string>("AgreementCode", *request->agreementCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAgreementStatus"))},
    {"version", boost::any(string("2021-01-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAgreementStatusResponse(callApi(params, req, runtime));
}

UpdateAgreementStatusResponse Alibabacloud_Mseap20210118::Client::updateAgreementStatus(shared_ptr<UpdateAgreementStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAgreementStatusWithOptions(request, runtime);
}

