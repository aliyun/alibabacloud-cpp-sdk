// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/domain_20180129.hpp>
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

using namespace Alibabacloud_Domain20180129;

Alibabacloud_Domain20180129::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("domain"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Domain20180129::Client::getEndpoint(shared_ptr<string> productId,
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

AcknowledgeTaskResultResponse Alibabacloud_Domain20180129::Client::acknowledgeTaskResultWithOptions(shared_ptr<AcknowledgeTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->taskDetailNo)) {
    query->insert(pair<string, vector<string>>("TaskDetailNo", *request->taskDetailNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AcknowledgeTaskResult"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AcknowledgeTaskResultResponse(callApi(params, req, runtime));
}

AcknowledgeTaskResultResponse Alibabacloud_Domain20180129::Client::acknowledgeTaskResult(shared_ptr<AcknowledgeTaskResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return acknowledgeTaskResultWithOptions(request, runtime);
}

BatchFuzzyMatchDomainSensitiveWordResponse Alibabacloud_Domain20180129::Client::batchFuzzyMatchDomainSensitiveWordWithOptions(shared_ptr<BatchFuzzyMatchDomainSensitiveWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchFuzzyMatchDomainSensitiveWord"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchFuzzyMatchDomainSensitiveWordResponse(callApi(params, req, runtime));
}

BatchFuzzyMatchDomainSensitiveWordResponse Alibabacloud_Domain20180129::Client::batchFuzzyMatchDomainSensitiveWord(shared_ptr<BatchFuzzyMatchDomainSensitiveWordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchFuzzyMatchDomainSensitiveWordWithOptions(request, runtime);
}

CancelDomainVerificationResponse Alibabacloud_Domain20180129::Client::cancelDomainVerificationWithOptions(shared_ptr<CancelDomainVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionType)) {
    query->insert(pair<string, string>("ActionType", *request->actionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelDomainVerification"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelDomainVerificationResponse(callApi(params, req, runtime));
}

CancelDomainVerificationResponse Alibabacloud_Domain20180129::Client::cancelDomainVerification(shared_ptr<CancelDomainVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelDomainVerificationWithOptions(request, runtime);
}

CancelOperationAuditResponse Alibabacloud_Domain20180129::Client::cancelOperationAuditWithOptions(shared_ptr<CancelOperationAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->auditRecordId)) {
    query->insert(pair<string, long>("AuditRecordId", *request->auditRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelOperationAudit"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelOperationAuditResponse(callApi(params, req, runtime));
}

CancelOperationAuditResponse Alibabacloud_Domain20180129::Client::cancelOperationAudit(shared_ptr<CancelOperationAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOperationAuditWithOptions(request, runtime);
}

CancelQualificationVerificationResponse Alibabacloud_Domain20180129::Client::cancelQualificationVerificationWithOptions(shared_ptr<CancelQualificationVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qualificationType)) {
    query->insert(pair<string, string>("QualificationType", *request->qualificationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelQualificationVerification"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelQualificationVerificationResponse(callApi(params, req, runtime));
}

CancelQualificationVerificationResponse Alibabacloud_Domain20180129::Client::cancelQualificationVerification(shared_ptr<CancelQualificationVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelQualificationVerificationWithOptions(request, runtime);
}

CancelTaskResponse Alibabacloud_Domain20180129::Client::cancelTaskWithOptions(shared_ptr<CancelTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskNo)) {
    query->insert(pair<string, string>("TaskNo", *request->taskNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelTask"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelTaskResponse(callApi(params, req, runtime));
}

CancelTaskResponse Alibabacloud_Domain20180129::Client::cancelTask(shared_ptr<CancelTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelTaskWithOptions(request, runtime);
}

ChangeResourceGroupResponse Alibabacloud_Domain20180129::Client::changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    query->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeResourceGroupResponse(callApi(params, req, runtime));
}

ChangeResourceGroupResponse Alibabacloud_Domain20180129::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeResourceGroupWithOptions(request, runtime);
}

CheckDomainResponse Alibabacloud_Domain20180129::Client::checkDomainWithOptions(shared_ptr<CheckDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->feeCommand)) {
    query->insert(pair<string, string>("FeeCommand", *request->feeCommand));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->feeCurrency)) {
    query->insert(pair<string, string>("FeeCurrency", *request->feeCurrency));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->feePeriod)) {
    query->insert(pair<string, long>("FeePeriod", *request->feePeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDomain"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckDomainResponse(callApi(params, req, runtime));
}

CheckDomainResponse Alibabacloud_Domain20180129::Client::checkDomain(shared_ptr<CheckDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDomainWithOptions(request, runtime);
}

CheckDomainSunriseClaimResponse Alibabacloud_Domain20180129::Client::checkDomainSunriseClaimWithOptions(shared_ptr<CheckDomainSunriseClaimRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDomainSunriseClaim"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckDomainSunriseClaimResponse(callApi(params, req, runtime));
}

CheckDomainSunriseClaimResponse Alibabacloud_Domain20180129::Client::checkDomainSunriseClaim(shared_ptr<CheckDomainSunriseClaimRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDomainSunriseClaimWithOptions(request, runtime);
}

CheckMaxYearOfServerLockResponse Alibabacloud_Domain20180129::Client::checkMaxYearOfServerLockWithOptions(shared_ptr<CheckMaxYearOfServerLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkAction)) {
    query->insert(pair<string, string>("CheckAction", *request->checkAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckMaxYearOfServerLock"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckMaxYearOfServerLockResponse(callApi(params, req, runtime));
}

CheckMaxYearOfServerLockResponse Alibabacloud_Domain20180129::Client::checkMaxYearOfServerLock(shared_ptr<CheckMaxYearOfServerLockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkMaxYearOfServerLockWithOptions(request, runtime);
}

CheckProcessingServerLockApplyResponse Alibabacloud_Domain20180129::Client::checkProcessingServerLockApplyWithOptions(shared_ptr<CheckProcessingServerLockApplyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->feePeriod)) {
    query->insert(pair<string, long>("FeePeriod", *request->feePeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckProcessingServerLockApply"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckProcessingServerLockApplyResponse(callApi(params, req, runtime));
}

CheckProcessingServerLockApplyResponse Alibabacloud_Domain20180129::Client::checkProcessingServerLockApply(shared_ptr<CheckProcessingServerLockApplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkProcessingServerLockApplyWithOptions(request, runtime);
}

CheckTransferInFeasibilityResponse Alibabacloud_Domain20180129::Client::checkTransferInFeasibilityWithOptions(shared_ptr<CheckTransferInFeasibilityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transferAuthorizationCode)) {
    query->insert(pair<string, string>("TransferAuthorizationCode", *request->transferAuthorizationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckTransferInFeasibility"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckTransferInFeasibilityResponse(callApi(params, req, runtime));
}

CheckTransferInFeasibilityResponse Alibabacloud_Domain20180129::Client::checkTransferInFeasibility(shared_ptr<CheckTransferInFeasibilityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkTransferInFeasibilityWithOptions(request, runtime);
}

ConfirmTransferInEmailResponse Alibabacloud_Domain20180129::Client::confirmTransferInEmailWithOptions(shared_ptr<ConfirmTransferInEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainName)) {
    query->insert(pair<string, vector<string>>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmTransferInEmail"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmTransferInEmailResponse(callApi(params, req, runtime));
}

ConfirmTransferInEmailResponse Alibabacloud_Domain20180129::Client::confirmTransferInEmail(shared_ptr<ConfirmTransferInEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmTransferInEmailWithOptions(request, runtime);
}

DeleteContactTemplatesResponse Alibabacloud_Domain20180129::Client::deleteContactTemplatesWithOptions(shared_ptr<DeleteContactTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantProfileIds)) {
    query->insert(pair<string, string>("RegistrantProfileIds", *request->registrantProfileIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteContactTemplates"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteContactTemplatesResponse(callApi(params, req, runtime));
}

DeleteContactTemplatesResponse Alibabacloud_Domain20180129::Client::deleteContactTemplates(shared_ptr<DeleteContactTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteContactTemplatesWithOptions(request, runtime);
}

DeleteDomainGroupResponse Alibabacloud_Domain20180129::Client::deleteDomainGroupWithOptions(shared_ptr<DeleteDomainGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->domainGroupId)) {
    query->insert(pair<string, long>("DomainGroupId", *request->domainGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDomainGroup"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDomainGroupResponse(callApi(params, req, runtime));
}

DeleteDomainGroupResponse Alibabacloud_Domain20180129::Client::deleteDomainGroup(shared_ptr<DeleteDomainGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDomainGroupWithOptions(request, runtime);
}

DeleteEmailVerificationResponse Alibabacloud_Domain20180129::Client::deleteEmailVerificationWithOptions(shared_ptr<DeleteEmailVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEmailVerification"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEmailVerificationResponse(callApi(params, req, runtime));
}

DeleteEmailVerificationResponse Alibabacloud_Domain20180129::Client::deleteEmailVerification(shared_ptr<DeleteEmailVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEmailVerificationWithOptions(request, runtime);
}

DeleteRegistrantProfileResponse Alibabacloud_Domain20180129::Client::deleteRegistrantProfileWithOptions(shared_ptr<DeleteRegistrantProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->registrantProfileId)) {
    query->insert(pair<string, long>("RegistrantProfileId", *request->registrantProfileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRegistrantProfile"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRegistrantProfileResponse(callApi(params, req, runtime));
}

DeleteRegistrantProfileResponse Alibabacloud_Domain20180129::Client::deleteRegistrantProfile(shared_ptr<DeleteRegistrantProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRegistrantProfileWithOptions(request, runtime);
}

DomainSpecialBizCancelResponse Alibabacloud_Domain20180129::Client::domainSpecialBizCancelWithOptions(shared_ptr<DomainSpecialBizCancelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bizId)) {
    body->insert(pair<string, long>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DomainSpecialBizCancel"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DomainSpecialBizCancelResponse(callApi(params, req, runtime));
}

DomainSpecialBizCancelResponse Alibabacloud_Domain20180129::Client::domainSpecialBizCancel(shared_ptr<DomainSpecialBizCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return domainSpecialBizCancelWithOptions(request, runtime);
}

EmailVerifiedResponse Alibabacloud_Domain20180129::Client::emailVerifiedWithOptions(shared_ptr<EmailVerifiedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EmailVerified"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EmailVerifiedResponse(callApi(params, req, runtime));
}

EmailVerifiedResponse Alibabacloud_Domain20180129::Client::emailVerified(shared_ptr<EmailVerifiedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return emailVerifiedWithOptions(request, runtime);
}

FuzzyMatchDomainSensitiveWordResponse Alibabacloud_Domain20180129::Client::fuzzyMatchDomainSensitiveWordWithOptions(shared_ptr<FuzzyMatchDomainSensitiveWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FuzzyMatchDomainSensitiveWord"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FuzzyMatchDomainSensitiveWordResponse(callApi(params, req, runtime));
}

FuzzyMatchDomainSensitiveWordResponse Alibabacloud_Domain20180129::Client::fuzzyMatchDomainSensitiveWord(shared_ptr<FuzzyMatchDomainSensitiveWordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fuzzyMatchDomainSensitiveWordWithOptions(request, runtime);
}

GetOperationOssUploadPolicyResponse Alibabacloud_Domain20180129::Client::getOperationOssUploadPolicyWithOptions(shared_ptr<GetOperationOssUploadPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->auditType)) {
    query->insert(pair<string, long>("AuditType", *request->auditType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOperationOssUploadPolicy"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOperationOssUploadPolicyResponse(callApi(params, req, runtime));
}

GetOperationOssUploadPolicyResponse Alibabacloud_Domain20180129::Client::getOperationOssUploadPolicy(shared_ptr<GetOperationOssUploadPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOperationOssUploadPolicyWithOptions(request, runtime);
}

GetQualificationUploadPolicyResponse Alibabacloud_Domain20180129::Client::getQualificationUploadPolicyWithOptions(shared_ptr<GetQualificationUploadPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQualificationUploadPolicy"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQualificationUploadPolicyResponse(callApi(params, req, runtime));
}

GetQualificationUploadPolicyResponse Alibabacloud_Domain20180129::Client::getQualificationUploadPolicy(shared_ptr<GetQualificationUploadPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualificationUploadPolicyWithOptions(request, runtime);
}

ListEmailVerificationResponse Alibabacloud_Domain20180129::Client::listEmailVerificationWithOptions(shared_ptr<ListEmailVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginCreateTime)) {
    query->insert(pair<string, long>("BeginCreateTime", *request->beginCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endCreateTime)) {
    query->insert(pair<string, long>("EndCreateTime", *request->endCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->verificationStatus)) {
    query->insert(pair<string, long>("VerificationStatus", *request->verificationStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEmailVerification"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEmailVerificationResponse(callApi(params, req, runtime));
}

ListEmailVerificationResponse Alibabacloud_Domain20180129::Client::listEmailVerification(shared_ptr<ListEmailVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEmailVerificationWithOptions(request, runtime);
}

ListServerLockResponse Alibabacloud_Domain20180129::Client::listServerLockWithOptions(shared_ptr<ListServerLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginStartDate)) {
    query->insert(pair<string, long>("BeginStartDate", *request->beginStartDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endExpireDate)) {
    query->insert(pair<string, long>("EndExpireDate", *request->endExpireDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endStartDate)) {
    query->insert(pair<string, long>("EndStartDate", *request->endStartDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lockProductId)) {
    query->insert(pair<string, string>("LockProductId", *request->lockProductId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderByType)) {
    query->insert(pair<string, string>("OrderByType", *request->orderByType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serverLockStatus)) {
    query->insert(pair<string, long>("ServerLockStatus", *request->serverLockStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startExpireDate)) {
    query->insert(pair<string, long>("StartExpireDate", *request->startExpireDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServerLock"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServerLockResponse(callApi(params, req, runtime));
}

ListServerLockResponse Alibabacloud_Domain20180129::Client::listServerLock(shared_ptr<ListServerLockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServerLockWithOptions(request, runtime);
}

LookupTmchNoticeResponse Alibabacloud_Domain20180129::Client::lookupTmchNoticeWithOptions(shared_ptr<LookupTmchNoticeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->claimKey)) {
    query->insert(pair<string, string>("ClaimKey", *request->claimKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LookupTmchNotice"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LookupTmchNoticeResponse(callApi(params, req, runtime));
}

LookupTmchNoticeResponse Alibabacloud_Domain20180129::Client::lookupTmchNotice(shared_ptr<LookupTmchNoticeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lookupTmchNoticeWithOptions(request, runtime);
}

PollTaskResultResponse Alibabacloud_Domain20180129::Client::pollTaskResultWithOptions(shared_ptr<PollTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskNo)) {
    query->insert(pair<string, string>("TaskNo", *request->taskNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskResultStatus)) {
    query->insert(pair<string, long>("TaskResultStatus", *request->taskResultStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PollTaskResult"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PollTaskResultResponse(callApi(params, req, runtime));
}

PollTaskResultResponse Alibabacloud_Domain20180129::Client::pollTaskResult(shared_ptr<PollTaskResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pollTaskResultWithOptions(request, runtime);
}

QueryAdvancedDomainListResponse Alibabacloud_Domain20180129::Client::queryAdvancedDomainListWithOptions(shared_ptr<QueryAdvancedDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->domainGroupId)) {
    query->insert(pair<string, long>("DomainGroupId", *request->domainGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->domainNameSort)) {
    query->insert(pair<string, bool>("DomainNameSort", *request->domainNameSort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->domainStatus)) {
    query->insert(pair<string, long>("DomainStatus", *request->domainStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endExpirationDate)) {
    query->insert(pair<string, long>("EndExpirationDate", *request->endExpirationDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endLength)) {
    query->insert(pair<string, long>("EndLength", *request->endLength));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endRegistrationDate)) {
    query->insert(pair<string, long>("EndRegistrationDate", *request->endRegistrationDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excluded)) {
    query->insert(pair<string, string>("Excluded", *request->excluded));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->excludedPrefix)) {
    query->insert(pair<string, bool>("ExcludedPrefix", *request->excludedPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->excludedSuffix)) {
    query->insert(pair<string, bool>("ExcludedSuffix", *request->excludedSuffix));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->expirationDateSort)) {
    query->insert(pair<string, bool>("ExpirationDateSort", *request->expirationDateSort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->form)) {
    query->insert(pair<string, long>("Form", *request->form));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWord)) {
    query->insert(pair<string, string>("KeyWord", *request->keyWord));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keyWordPrefix)) {
    query->insert(pair<string, bool>("KeyWordPrefix", *request->keyWordPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keyWordSuffix)) {
    query->insert(pair<string, bool>("KeyWordSuffix", *request->keyWordSuffix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productDomainType)) {
    query->insert(pair<string, string>("ProductDomainType", *request->productDomainType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->productDomainTypeSort)) {
    query->insert(pair<string, bool>("ProductDomainTypeSort", *request->productDomainTypeSort));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->registrationDateSort)) {
    query->insert(pair<string, bool>("RegistrationDateSort", *request->registrationDateSort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startExpirationDate)) {
    query->insert(pair<string, long>("StartExpirationDate", *request->startExpirationDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startLength)) {
    query->insert(pair<string, long>("StartLength", *request->startLength));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startRegistrationDate)) {
    query->insert(pair<string, long>("StartRegistrationDate", *request->startRegistrationDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suffixs)) {
    query->insert(pair<string, string>("Suffixs", *request->suffixs));
  }
  if (!Darabonba_Util::Client::isUnset<vector<QueryAdvancedDomainListRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<QueryAdvancedDomainListRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tradeType)) {
    query->insert(pair<string, long>("TradeType", *request->tradeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAdvancedDomainList"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAdvancedDomainListResponse(callApi(params, req, runtime));
}

QueryAdvancedDomainListResponse Alibabacloud_Domain20180129::Client::queryAdvancedDomainList(shared_ptr<QueryAdvancedDomainListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAdvancedDomainListWithOptions(request, runtime);
}

QueryArtExtensionResponse Alibabacloud_Domain20180129::Client::queryArtExtensionWithOptions(shared_ptr<QueryArtExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryArtExtension"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryArtExtensionResponse(callApi(params, req, runtime));
}

QueryArtExtensionResponse Alibabacloud_Domain20180129::Client::queryArtExtension(shared_ptr<QueryArtExtensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryArtExtensionWithOptions(request, runtime);
}

QueryChangeLogListResponse Alibabacloud_Domain20180129::Client::queryChangeLogListWithOptions(shared_ptr<QueryChangeLogListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryChangeLogList"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryChangeLogListResponse(callApi(params, req, runtime));
}

QueryChangeLogListResponse Alibabacloud_Domain20180129::Client::queryChangeLogList(shared_ptr<QueryChangeLogListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryChangeLogListWithOptions(request, runtime);
}

QueryContactInfoResponse Alibabacloud_Domain20180129::Client::queryContactInfoWithOptions(shared_ptr<QueryContactInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactType)) {
    query->insert(pair<string, string>("ContactType", *request->contactType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryContactInfo"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryContactInfoResponse(callApi(params, req, runtime));
}

QueryContactInfoResponse Alibabacloud_Domain20180129::Client::queryContactInfo(shared_ptr<QueryContactInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryContactInfoWithOptions(request, runtime);
}

QueryDSRecordResponse Alibabacloud_Domain20180129::Client::queryDSRecordWithOptions(shared_ptr<QueryDSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDSRecord"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDSRecordResponse(callApi(params, req, runtime));
}

QueryDSRecordResponse Alibabacloud_Domain20180129::Client::queryDSRecord(shared_ptr<QueryDSRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDSRecordWithOptions(request, runtime);
}

QueryDnsHostResponse Alibabacloud_Domain20180129::Client::queryDnsHostWithOptions(shared_ptr<QueryDnsHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDnsHost"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDnsHostResponse(callApi(params, req, runtime));
}

QueryDnsHostResponse Alibabacloud_Domain20180129::Client::queryDnsHost(shared_ptr<QueryDnsHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDnsHostWithOptions(request, runtime);
}

QueryDomainAdminDivisionResponse Alibabacloud_Domain20180129::Client::queryDomainAdminDivisionWithOptions(shared_ptr<QueryDomainAdminDivisionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDomainAdminDivision"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDomainAdminDivisionResponse(callApi(params, req, runtime));
}

QueryDomainAdminDivisionResponse Alibabacloud_Domain20180129::Client::queryDomainAdminDivision(shared_ptr<QueryDomainAdminDivisionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDomainAdminDivisionWithOptions(request, runtime);
}

QueryDomainByDomainNameResponse Alibabacloud_Domain20180129::Client::queryDomainByDomainNameWithOptions(shared_ptr<QueryDomainByDomainNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDomainByDomainName"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDomainByDomainNameResponse(callApi(params, req, runtime));
}

QueryDomainByDomainNameResponse Alibabacloud_Domain20180129::Client::queryDomainByDomainName(shared_ptr<QueryDomainByDomainNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDomainByDomainNameWithOptions(request, runtime);
}

QueryDomainByInstanceIdResponse Alibabacloud_Domain20180129::Client::queryDomainByInstanceIdWithOptions(shared_ptr<QueryDomainByInstanceIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDomainByInstanceId"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDomainByInstanceIdResponse(callApi(params, req, runtime));
}

QueryDomainByInstanceIdResponse Alibabacloud_Domain20180129::Client::queryDomainByInstanceId(shared_ptr<QueryDomainByInstanceIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDomainByInstanceIdWithOptions(request, runtime);
}

QueryDomainGroupListResponse Alibabacloud_Domain20180129::Client::queryDomainGroupListWithOptions(shared_ptr<QueryDomainGroupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainGroupName)) {
    query->insert(pair<string, string>("DomainGroupName", *request->domainGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showDeletingGroup)) {
    query->insert(pair<string, bool>("ShowDeletingGroup", *request->showDeletingGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDomainGroupList"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDomainGroupListResponse(callApi(params, req, runtime));
}

QueryDomainGroupListResponse Alibabacloud_Domain20180129::Client::queryDomainGroupList(shared_ptr<QueryDomainGroupListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDomainGroupListWithOptions(request, runtime);
}

QueryDomainListResponse Alibabacloud_Domain20180129::Client::queryDomainListWithOptions(shared_ptr<QueryDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainGroupId)) {
    query->insert(pair<string, string>("DomainGroupId", *request->domainGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endExpirationDate)) {
    query->insert(pair<string, long>("EndExpirationDate", *request->endExpirationDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endRegistrationDate)) {
    query->insert(pair<string, long>("EndRegistrationDate", *request->endRegistrationDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderByType)) {
    query->insert(pair<string, string>("OrderByType", *request->orderByType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderKeyType)) {
    query->insert(pair<string, string>("OrderKeyType", *request->orderKeyType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productDomainType)) {
    query->insert(pair<string, string>("ProductDomainType", *request->productDomainType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    query->insert(pair<string, string>("QueryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startExpirationDate)) {
    query->insert(pair<string, long>("StartExpirationDate", *request->startExpirationDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startRegistrationDate)) {
    query->insert(pair<string, long>("StartRegistrationDate", *request->startRegistrationDate));
  }
  if (!Darabonba_Util::Client::isUnset<vector<QueryDomainListRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<QueryDomainListRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDomainList"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDomainListResponse(callApi(params, req, runtime));
}

QueryDomainListResponse Alibabacloud_Domain20180129::Client::queryDomainList(shared_ptr<QueryDomainListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDomainListWithOptions(request, runtime);
}

QueryDomainRealNameVerificationInfoResponse Alibabacloud_Domain20180129::Client::queryDomainRealNameVerificationInfoWithOptions(shared_ptr<QueryDomainRealNameVerificationInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fetchImage)) {
    query->insert(pair<string, bool>("FetchImage", *request->fetchImage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDomainRealNameVerificationInfo"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDomainRealNameVerificationInfoResponse(callApi(params, req, runtime));
}

QueryDomainRealNameVerificationInfoResponse Alibabacloud_Domain20180129::Client::queryDomainRealNameVerificationInfo(shared_ptr<QueryDomainRealNameVerificationInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDomainRealNameVerificationInfoWithOptions(request, runtime);
}

QueryDomainSpecialBizDetailResponse Alibabacloud_Domain20180129::Client::queryDomainSpecialBizDetailWithOptions(shared_ptr<QueryDomainSpecialBizDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bizId)) {
    body->insert(pair<string, long>("BizId", *request->bizId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDomainSpecialBizDetail"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDomainSpecialBizDetailResponse(callApi(params, req, runtime));
}

QueryDomainSpecialBizDetailResponse Alibabacloud_Domain20180129::Client::queryDomainSpecialBizDetail(shared_ptr<QueryDomainSpecialBizDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDomainSpecialBizDetailWithOptions(request, runtime);
}

QueryDomainSpecialBizInfoByDomainResponse Alibabacloud_Domain20180129::Client::queryDomainSpecialBizInfoByDomainWithOptions(shared_ptr<QueryDomainSpecialBizInfoByDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    body->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    body->insert(pair<string, string>("DomainName", *request->domainName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDomainSpecialBizInfoByDomain"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDomainSpecialBizInfoByDomainResponse(callApi(params, req, runtime));
}

QueryDomainSpecialBizInfoByDomainResponse Alibabacloud_Domain20180129::Client::queryDomainSpecialBizInfoByDomain(shared_ptr<QueryDomainSpecialBizInfoByDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDomainSpecialBizInfoByDomainWithOptions(request, runtime);
}

QueryDomainSuffixResponse Alibabacloud_Domain20180129::Client::queryDomainSuffixWithOptions(shared_ptr<QueryDomainSuffixRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDomainSuffix"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDomainSuffixResponse(callApi(params, req, runtime));
}

QueryDomainSuffixResponse Alibabacloud_Domain20180129::Client::queryDomainSuffix(shared_ptr<QueryDomainSuffixRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDomainSuffixWithOptions(request, runtime);
}

QueryEmailVerificationResponse Alibabacloud_Domain20180129::Client::queryEmailVerificationWithOptions(shared_ptr<QueryEmailVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEmailVerification"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEmailVerificationResponse(callApi(params, req, runtime));
}

QueryEmailVerificationResponse Alibabacloud_Domain20180129::Client::queryEmailVerification(shared_ptr<QueryEmailVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEmailVerificationWithOptions(request, runtime);
}

QueryEnsAssociationResponse Alibabacloud_Domain20180129::Client::queryEnsAssociationWithOptions(shared_ptr<QueryEnsAssociationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEnsAssociation"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEnsAssociationResponse(callApi(params, req, runtime));
}

QueryEnsAssociationResponse Alibabacloud_Domain20180129::Client::queryEnsAssociation(shared_ptr<QueryEnsAssociationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEnsAssociationWithOptions(request, runtime);
}

QueryFailReasonForDomainRealNameVerificationResponse Alibabacloud_Domain20180129::Client::queryFailReasonForDomainRealNameVerificationWithOptions(shared_ptr<QueryFailReasonForDomainRealNameVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realNameVerificationAction)) {
    query->insert(pair<string, string>("RealNameVerificationAction", *request->realNameVerificationAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryFailReasonForDomainRealNameVerification"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFailReasonForDomainRealNameVerificationResponse(callApi(params, req, runtime));
}

QueryFailReasonForDomainRealNameVerificationResponse Alibabacloud_Domain20180129::Client::queryFailReasonForDomainRealNameVerification(shared_ptr<QueryFailReasonForDomainRealNameVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFailReasonForDomainRealNameVerificationWithOptions(request, runtime);
}

QueryFailReasonForRegistrantProfileRealNameVerificationResponse Alibabacloud_Domain20180129::Client::queryFailReasonForRegistrantProfileRealNameVerificationWithOptions(shared_ptr<QueryFailReasonForRegistrantProfileRealNameVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->registrantProfileID)) {
    query->insert(pair<string, long>("RegistrantProfileID", *request->registrantProfileID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryFailReasonForRegistrantProfileRealNameVerification"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFailReasonForRegistrantProfileRealNameVerificationResponse(callApi(params, req, runtime));
}

QueryFailReasonForRegistrantProfileRealNameVerificationResponse Alibabacloud_Domain20180129::Client::queryFailReasonForRegistrantProfileRealNameVerification(shared_ptr<QueryFailReasonForRegistrantProfileRealNameVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFailReasonForRegistrantProfileRealNameVerificationWithOptions(request, runtime);
}

QueryFailingReasonListForQualificationResponse Alibabacloud_Domain20180129::Client::queryFailingReasonListForQualificationWithOptions(shared_ptr<QueryFailingReasonListForQualificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qualificationType)) {
    query->insert(pair<string, string>("QualificationType", *request->qualificationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryFailingReasonListForQualification"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFailingReasonListForQualificationResponse(callApi(params, req, runtime));
}

QueryFailingReasonListForQualificationResponse Alibabacloud_Domain20180129::Client::queryFailingReasonListForQualification(shared_ptr<QueryFailingReasonListForQualificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFailingReasonListForQualificationWithOptions(request, runtime);
}

QueryLocalEnsAssociationResponse Alibabacloud_Domain20180129::Client::queryLocalEnsAssociationWithOptions(shared_ptr<QueryLocalEnsAssociationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryLocalEnsAssociation"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryLocalEnsAssociationResponse(callApi(params, req, runtime));
}

QueryLocalEnsAssociationResponse Alibabacloud_Domain20180129::Client::queryLocalEnsAssociation(shared_ptr<QueryLocalEnsAssociationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryLocalEnsAssociationWithOptions(request, runtime);
}

QueryOperationAuditInfoDetailResponse Alibabacloud_Domain20180129::Client::queryOperationAuditInfoDetailWithOptions(shared_ptr<QueryOperationAuditInfoDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->auditRecordId)) {
    query->insert(pair<string, long>("AuditRecordId", *request->auditRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOperationAuditInfoDetail"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOperationAuditInfoDetailResponse(callApi(params, req, runtime));
}

QueryOperationAuditInfoDetailResponse Alibabacloud_Domain20180129::Client::queryOperationAuditInfoDetail(shared_ptr<QueryOperationAuditInfoDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOperationAuditInfoDetailWithOptions(request, runtime);
}

QueryOperationAuditInfoListResponse Alibabacloud_Domain20180129::Client::queryOperationAuditInfoListWithOptions(shared_ptr<QueryOperationAuditInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->auditStatus)) {
    query->insert(pair<string, long>("AuditStatus", *request->auditStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->auditType)) {
    query->insert(pair<string, long>("AuditType", *request->auditType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOperationAuditInfoList"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOperationAuditInfoListResponse(callApi(params, req, runtime));
}

QueryOperationAuditInfoListResponse Alibabacloud_Domain20180129::Client::queryOperationAuditInfoList(shared_ptr<QueryOperationAuditInfoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOperationAuditInfoListWithOptions(request, runtime);
}

QueryQualificationDetailResponse Alibabacloud_Domain20180129::Client::queryQualificationDetailWithOptions(shared_ptr<QueryQualificationDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qualificationType)) {
    query->insert(pair<string, string>("QualificationType", *request->qualificationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryQualificationDetail"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryQualificationDetailResponse(callApi(params, req, runtime));
}

QueryQualificationDetailResponse Alibabacloud_Domain20180129::Client::queryQualificationDetail(shared_ptr<QueryQualificationDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryQualificationDetailWithOptions(request, runtime);
}

QueryRegistrantProfileRealNameVerificationInfoResponse Alibabacloud_Domain20180129::Client::queryRegistrantProfileRealNameVerificationInfoWithOptions(shared_ptr<QueryRegistrantProfileRealNameVerificationInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->fetchImage)) {
    query->insert(pair<string, bool>("FetchImage", *request->fetchImage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->registrantProfileId)) {
    query->insert(pair<string, long>("RegistrantProfileId", *request->registrantProfileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRegistrantProfileRealNameVerificationInfo"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRegistrantProfileRealNameVerificationInfoResponse(callApi(params, req, runtime));
}

QueryRegistrantProfileRealNameVerificationInfoResponse Alibabacloud_Domain20180129::Client::queryRegistrantProfileRealNameVerificationInfo(shared_ptr<QueryRegistrantProfileRealNameVerificationInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRegistrantProfileRealNameVerificationInfoWithOptions(request, runtime);
}

QueryRegistrantProfilesResponse Alibabacloud_Domain20180129::Client::queryRegistrantProfilesWithOptions(shared_ptr<QueryRegistrantProfilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->defaultRegistrantProfile)) {
    query->insert(pair<string, bool>("DefaultRegistrantProfile", *request->defaultRegistrantProfile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realNameStatus)) {
    query->insert(pair<string, string>("RealNameStatus", *request->realNameStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantOrganization)) {
    query->insert(pair<string, string>("RegistrantOrganization", *request->registrantOrganization));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->registrantProfileId)) {
    query->insert(pair<string, long>("RegistrantProfileId", *request->registrantProfileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantProfileType)) {
    query->insert(pair<string, string>("RegistrantProfileType", *request->registrantProfileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantType)) {
    query->insert(pair<string, string>("RegistrantType", *request->registrantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhRegistrantOrganization)) {
    query->insert(pair<string, string>("ZhRegistrantOrganization", *request->zhRegistrantOrganization));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRegistrantProfiles"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRegistrantProfilesResponse(callApi(params, req, runtime));
}

QueryRegistrantProfilesResponse Alibabacloud_Domain20180129::Client::queryRegistrantProfiles(shared_ptr<QueryRegistrantProfilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRegistrantProfilesWithOptions(request, runtime);
}

QueryServerLockResponse Alibabacloud_Domain20180129::Client::queryServerLockWithOptions(shared_ptr<QueryServerLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryServerLock"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryServerLockResponse(callApi(params, req, runtime));
}

QueryServerLockResponse Alibabacloud_Domain20180129::Client::queryServerLock(shared_ptr<QueryServerLockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryServerLockWithOptions(request, runtime);
}

QueryTaskDetailHistoryResponse Alibabacloud_Domain20180129::Client::queryTaskDetailHistoryWithOptions(shared_ptr<QueryTaskDetailHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainNameCursor)) {
    query->insert(pair<string, string>("DomainNameCursor", *request->domainNameCursor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskDetailNoCursor)) {
    query->insert(pair<string, string>("TaskDetailNoCursor", *request->taskDetailNoCursor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskNo)) {
    query->insert(pair<string, string>("TaskNo", *request->taskNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskStatus)) {
    query->insert(pair<string, long>("TaskStatus", *request->taskStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTaskDetailHistory"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTaskDetailHistoryResponse(callApi(params, req, runtime));
}

QueryTaskDetailHistoryResponse Alibabacloud_Domain20180129::Client::queryTaskDetailHistory(shared_ptr<QueryTaskDetailHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTaskDetailHistoryWithOptions(request, runtime);
}

QueryTaskDetailListResponse Alibabacloud_Domain20180129::Client::queryTaskDetailListWithOptions(shared_ptr<QueryTaskDetailListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskNo)) {
    query->insert(pair<string, string>("TaskNo", *request->taskNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskStatus)) {
    query->insert(pair<string, long>("TaskStatus", *request->taskStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTaskDetailList"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTaskDetailListResponse(callApi(params, req, runtime));
}

QueryTaskDetailListResponse Alibabacloud_Domain20180129::Client::queryTaskDetailList(shared_ptr<QueryTaskDetailListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTaskDetailListWithOptions(request, runtime);
}

QueryTaskInfoHistoryResponse Alibabacloud_Domain20180129::Client::queryTaskInfoHistoryWithOptions(shared_ptr<QueryTaskInfoHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginCreateTime)) {
    query->insert(pair<string, long>("BeginCreateTime", *request->beginCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeCursor)) {
    query->insert(pair<string, long>("CreateTimeCursor", *request->createTimeCursor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endCreateTime)) {
    query->insert(pair<string, long>("EndCreateTime", *request->endCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskNoCursor)) {
    query->insert(pair<string, string>("TaskNoCursor", *request->taskNoCursor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTaskInfoHistory"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTaskInfoHistoryResponse(callApi(params, req, runtime));
}

QueryTaskInfoHistoryResponse Alibabacloud_Domain20180129::Client::queryTaskInfoHistory(shared_ptr<QueryTaskInfoHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTaskInfoHistoryWithOptions(request, runtime);
}

QueryTaskListResponse Alibabacloud_Domain20180129::Client::queryTaskListWithOptions(shared_ptr<QueryTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginCreateTime)) {
    query->insert(pair<string, long>("BeginCreateTime", *request->beginCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endCreateTime)) {
    query->insert(pair<string, long>("EndCreateTime", *request->endCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTaskList"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTaskListResponse(callApi(params, req, runtime));
}

QueryTaskListResponse Alibabacloud_Domain20180129::Client::queryTaskList(shared_ptr<QueryTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTaskListWithOptions(request, runtime);
}

QueryTransferInByInstanceIdResponse Alibabacloud_Domain20180129::Client::queryTransferInByInstanceIdWithOptions(shared_ptr<QueryTransferInByInstanceIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTransferInByInstanceId"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTransferInByInstanceIdResponse(callApi(params, req, runtime));
}

QueryTransferInByInstanceIdResponse Alibabacloud_Domain20180129::Client::queryTransferInByInstanceId(shared_ptr<QueryTransferInByInstanceIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTransferInByInstanceIdWithOptions(request, runtime);
}

QueryTransferInListResponse Alibabacloud_Domain20180129::Client::queryTransferInListWithOptions(shared_ptr<QueryTransferInListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->simpleTransferInStatus)) {
    query->insert(pair<string, string>("SimpleTransferInStatus", *request->simpleTransferInStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->submissionEndDate)) {
    query->insert(pair<string, long>("SubmissionEndDate", *request->submissionEndDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->submissionStartDate)) {
    query->insert(pair<string, long>("SubmissionStartDate", *request->submissionStartDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTransferInList"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTransferInListResponse(callApi(params, req, runtime));
}

QueryTransferInListResponse Alibabacloud_Domain20180129::Client::queryTransferInList(shared_ptr<QueryTransferInListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTransferInListWithOptions(request, runtime);
}

QueryTransferOutInfoResponse Alibabacloud_Domain20180129::Client::queryTransferOutInfoWithOptions(shared_ptr<QueryTransferOutInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTransferOutInfo"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTransferOutInfoResponse(callApi(params, req, runtime));
}

QueryTransferOutInfoResponse Alibabacloud_Domain20180129::Client::queryTransferOutInfo(shared_ptr<QueryTransferOutInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTransferOutInfoWithOptions(request, runtime);
}

RegistrantProfileRealNameVerificationResponse Alibabacloud_Domain20180129::Client::registrantProfileRealNameVerificationWithOptions(shared_ptr<RegistrantProfileRealNameVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identityCredentialNo)) {
    query->insert(pair<string, string>("IdentityCredentialNo", *request->identityCredentialNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identityCredentialType)) {
    query->insert(pair<string, string>("IdentityCredentialType", *request->identityCredentialType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->registrantProfileID)) {
    query->insert(pair<string, long>("RegistrantProfileID", *request->registrantProfileID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identityCredential)) {
    body->insert(pair<string, string>("IdentityCredential", *request->identityCredential));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegistrantProfileRealNameVerification"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegistrantProfileRealNameVerificationResponse(callApi(params, req, runtime));
}

RegistrantProfileRealNameVerificationResponse Alibabacloud_Domain20180129::Client::registrantProfileRealNameVerification(shared_ptr<RegistrantProfileRealNameVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registrantProfileRealNameVerificationWithOptions(request, runtime);
}

ResendEmailVerificationResponse Alibabacloud_Domain20180129::Client::resendEmailVerificationWithOptions(shared_ptr<ResendEmailVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResendEmailVerification"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResendEmailVerificationResponse(callApi(params, req, runtime));
}

ResendEmailVerificationResponse Alibabacloud_Domain20180129::Client::resendEmailVerification(shared_ptr<ResendEmailVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resendEmailVerificationWithOptions(request, runtime);
}

ResetQualificationVerificationResponse Alibabacloud_Domain20180129::Client::resetQualificationVerificationWithOptions(shared_ptr<ResetQualificationVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetQualificationVerification"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetQualificationVerificationResponse(callApi(params, req, runtime));
}

ResetQualificationVerificationResponse Alibabacloud_Domain20180129::Client::resetQualificationVerification(shared_ptr<ResetQualificationVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetQualificationVerificationWithOptions(request, runtime);
}

SaveBatchDomainRemarkResponse Alibabacloud_Domain20180129::Client::saveBatchDomainRemarkWithOptions(shared_ptr<SaveBatchDomainRemarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchDomainRemark"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveBatchDomainRemarkResponse(callApi(params, req, runtime));
}

SaveBatchDomainRemarkResponse Alibabacloud_Domain20180129::Client::saveBatchDomainRemark(shared_ptr<SaveBatchDomainRemarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchDomainRemarkWithOptions(request, runtime);
}

SaveBatchTaskForApplyQuickTransferOutOpenlyResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForApplyQuickTransferOutOpenlyWithOptions(shared_ptr<SaveBatchTaskForApplyQuickTransferOutOpenlyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainNames)) {
    query->insert(pair<string, vector<string>>("DomainNames", *request->domainNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForApplyQuickTransferOutOpenly"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveBatchTaskForApplyQuickTransferOutOpenlyResponse(callApi(params, req, runtime));
}

SaveBatchTaskForApplyQuickTransferOutOpenlyResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForApplyQuickTransferOutOpenly(shared_ptr<SaveBatchTaskForApplyQuickTransferOutOpenlyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForApplyQuickTransferOutOpenlyWithOptions(request, runtime);
}

SaveBatchTaskForCreatingOrderActivateResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForCreatingOrderActivateWithOptions(shared_ptr<SaveBatchTaskForCreatingOrderActivateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->couponNo)) {
    query->insert(pair<string, string>("CouponNo", *request->couponNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam>>(request->orderActivateParam)) {
    query->insert(pair<string, vector<SaveBatchTaskForCreatingOrderActivateRequestOrderActivateParam>>("OrderActivateParam", *request->orderActivateParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionNo)) {
    query->insert(pair<string, string>("PromotionNo", *request->promotionNo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useCoupon)) {
    query->insert(pair<string, bool>("UseCoupon", *request->useCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->usePromotion)) {
    query->insert(pair<string, bool>("UsePromotion", *request->usePromotion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForCreatingOrderActivate"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveBatchTaskForCreatingOrderActivateResponse(callApi(params, req, runtime));
}

SaveBatchTaskForCreatingOrderActivateResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForCreatingOrderActivate(shared_ptr<SaveBatchTaskForCreatingOrderActivateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForCreatingOrderActivateWithOptions(request, runtime);
}

SaveBatchTaskForCreatingOrderRedeemResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForCreatingOrderRedeemWithOptions(shared_ptr<SaveBatchTaskForCreatingOrderRedeemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->couponNo)) {
    query->insert(pair<string, string>("CouponNo", *request->couponNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam>>(request->orderRedeemParam)) {
    query->insert(pair<string, vector<SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam>>("OrderRedeemParam", *request->orderRedeemParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionNo)) {
    query->insert(pair<string, string>("PromotionNo", *request->promotionNo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useCoupon)) {
    query->insert(pair<string, bool>("UseCoupon", *request->useCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->usePromotion)) {
    query->insert(pair<string, bool>("UsePromotion", *request->usePromotion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForCreatingOrderRedeem"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveBatchTaskForCreatingOrderRedeemResponse(callApi(params, req, runtime));
}

SaveBatchTaskForCreatingOrderRedeemResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForCreatingOrderRedeem(shared_ptr<SaveBatchTaskForCreatingOrderRedeemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForCreatingOrderRedeemWithOptions(request, runtime);
}

SaveBatchTaskForCreatingOrderRenewResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForCreatingOrderRenewWithOptions(shared_ptr<SaveBatchTaskForCreatingOrderRenewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->couponNo)) {
    query->insert(pair<string, string>("CouponNo", *request->couponNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam>>(request->orderRenewParam)) {
    query->insert(pair<string, vector<SaveBatchTaskForCreatingOrderRenewRequestOrderRenewParam>>("OrderRenewParam", *request->orderRenewParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionNo)) {
    query->insert(pair<string, string>("PromotionNo", *request->promotionNo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useCoupon)) {
    query->insert(pair<string, bool>("UseCoupon", *request->useCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->usePromotion)) {
    query->insert(pair<string, bool>("UsePromotion", *request->usePromotion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForCreatingOrderRenew"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveBatchTaskForCreatingOrderRenewResponse(callApi(params, req, runtime));
}

SaveBatchTaskForCreatingOrderRenewResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForCreatingOrderRenew(shared_ptr<SaveBatchTaskForCreatingOrderRenewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForCreatingOrderRenewWithOptions(request, runtime);
}

SaveBatchTaskForCreatingOrderTransferResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForCreatingOrderTransferWithOptions(shared_ptr<SaveBatchTaskForCreatingOrderTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->couponNo)) {
    query->insert(pair<string, string>("CouponNo", *request->couponNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam>>(request->orderTransferParam)) {
    query->insert(pair<string, vector<SaveBatchTaskForCreatingOrderTransferRequestOrderTransferParam>>("OrderTransferParam", *request->orderTransferParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionNo)) {
    query->insert(pair<string, string>("PromotionNo", *request->promotionNo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useCoupon)) {
    query->insert(pair<string, bool>("UseCoupon", *request->useCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->usePromotion)) {
    query->insert(pair<string, bool>("UsePromotion", *request->usePromotion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForCreatingOrderTransfer"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveBatchTaskForCreatingOrderTransferResponse(callApi(params, req, runtime));
}

SaveBatchTaskForCreatingOrderTransferResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForCreatingOrderTransfer(shared_ptr<SaveBatchTaskForCreatingOrderTransferRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForCreatingOrderTransferWithOptions(request, runtime);
}

SaveBatchTaskForDomainNameProxyServiceResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForDomainNameProxyServiceWithOptions(shared_ptr<SaveBatchTaskForDomainNameProxyServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainName)) {
    query->insert(pair<string, vector<string>>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->status)) {
    query->insert(pair<string, bool>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForDomainNameProxyService"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveBatchTaskForDomainNameProxyServiceResponse(callApi(params, req, runtime));
}

SaveBatchTaskForDomainNameProxyServiceResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForDomainNameProxyService(shared_ptr<SaveBatchTaskForDomainNameProxyServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForDomainNameProxyServiceWithOptions(request, runtime);
}

SaveBatchTaskForGenerateDomainCertificateResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForGenerateDomainCertificateWithOptions(shared_ptr<SaveBatchTaskForGenerateDomainCertificateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SaveBatchTaskForGenerateDomainCertificateShrinkRequest> request = make_shared<SaveBatchTaskForGenerateDomainCertificateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->domainNames)) {
    request->domainNamesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->domainNames, make_shared<string>("DomainNames"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainNamesShrink)) {
    query->insert(pair<string, string>("DomainNames", *request->domainNamesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForGenerateDomainCertificate"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveBatchTaskForGenerateDomainCertificateResponse(callApi(params, req, runtime));
}

SaveBatchTaskForGenerateDomainCertificateResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForGenerateDomainCertificate(shared_ptr<SaveBatchTaskForGenerateDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForGenerateDomainCertificateWithOptions(request, runtime);
}

SaveBatchTaskForModifyingDomainDnsResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForModifyingDomainDnsWithOptions(shared_ptr<SaveBatchTaskForModifyingDomainDnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->aliyunDns)) {
    query->insert(pair<string, bool>("AliyunDns", *request->aliyunDns));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainName)) {
    query->insert(pair<string, vector<string>>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainNameServer)) {
    query->insert(pair<string, vector<string>>("DomainNameServer", *request->domainNameServer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForModifyingDomainDns"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveBatchTaskForModifyingDomainDnsResponse(callApi(params, req, runtime));
}

SaveBatchTaskForModifyingDomainDnsResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForModifyingDomainDns(shared_ptr<SaveBatchTaskForModifyingDomainDnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForModifyingDomainDnsWithOptions(request, runtime);
}

SaveBatchTaskForReserveDropListDomainResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForReserveDropListDomainWithOptions(shared_ptr<SaveBatchTaskForReserveDropListDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactTemplateId)) {
    query->insert(pair<string, string>("ContactTemplateId", *request->contactTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SaveBatchTaskForReserveDropListDomainRequestDomains>>(request->domains)) {
    query->insert(pair<string, vector<SaveBatchTaskForReserveDropListDomainRequestDomains>>("Domains", *request->domains));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForReserveDropListDomain"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveBatchTaskForReserveDropListDomainResponse(callApi(params, req, runtime));
}

SaveBatchTaskForReserveDropListDomainResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForReserveDropListDomain(shared_ptr<SaveBatchTaskForReserveDropListDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForReserveDropListDomainWithOptions(request, runtime);
}

SaveBatchTaskForTransferProhibitionLockResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForTransferProhibitionLockWithOptions(shared_ptr<SaveBatchTaskForTransferProhibitionLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainName)) {
    query->insert(pair<string, vector<string>>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->status)) {
    query->insert(pair<string, bool>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForTransferProhibitionLock"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveBatchTaskForTransferProhibitionLockResponse(callApi(params, req, runtime));
}

SaveBatchTaskForTransferProhibitionLockResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForTransferProhibitionLock(shared_ptr<SaveBatchTaskForTransferProhibitionLockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForTransferProhibitionLockWithOptions(request, runtime);
}

SaveBatchTaskForUpdateProhibitionLockResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForUpdateProhibitionLockWithOptions(shared_ptr<SaveBatchTaskForUpdateProhibitionLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainName)) {
    query->insert(pair<string, vector<string>>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->status)) {
    query->insert(pair<string, bool>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForUpdateProhibitionLock"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveBatchTaskForUpdateProhibitionLockResponse(callApi(params, req, runtime));
}

SaveBatchTaskForUpdateProhibitionLockResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForUpdateProhibitionLock(shared_ptr<SaveBatchTaskForUpdateProhibitionLockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForUpdateProhibitionLockWithOptions(request, runtime);
}

SaveBatchTaskForUpdatingContactInfoByNewContactResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForUpdatingContactInfoByNewContactWithOptions(shared_ptr<SaveBatchTaskForUpdatingContactInfoByNewContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    query->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactType)) {
    query->insert(pair<string, string>("ContactType", *request->contactType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainName)) {
    query->insert(pair<string, vector<string>>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postalCode)) {
    query->insert(pair<string, string>("PostalCode", *request->postalCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    query->insert(pair<string, string>("Province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantName)) {
    query->insert(pair<string, string>("RegistrantName", *request->registrantName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantOrganization)) {
    query->insert(pair<string, string>("RegistrantOrganization", *request->registrantOrganization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantType)) {
    query->insert(pair<string, string>("RegistrantType", *request->registrantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telArea)) {
    query->insert(pair<string, string>("TelArea", *request->telArea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telExt)) {
    query->insert(pair<string, string>("TelExt", *request->telExt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telephone)) {
    query->insert(pair<string, string>("Telephone", *request->telephone));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->transferOutProhibited)) {
    query->insert(pair<string, bool>("TransferOutProhibited", *request->transferOutProhibited));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhAddress)) {
    query->insert(pair<string, string>("ZhAddress", *request->zhAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhCity)) {
    query->insert(pair<string, string>("ZhCity", *request->zhCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhProvince)) {
    query->insert(pair<string, string>("ZhProvince", *request->zhProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhRegistrantName)) {
    query->insert(pair<string, string>("ZhRegistrantName", *request->zhRegistrantName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhRegistrantOrganization)) {
    query->insert(pair<string, string>("ZhRegistrantOrganization", *request->zhRegistrantOrganization));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForUpdatingContactInfoByNewContact"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveBatchTaskForUpdatingContactInfoByNewContactResponse(callApi(params, req, runtime));
}

SaveBatchTaskForUpdatingContactInfoByNewContactResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForUpdatingContactInfoByNewContact(shared_ptr<SaveBatchTaskForUpdatingContactInfoByNewContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForUpdatingContactInfoByNewContactWithOptions(request, runtime);
}

SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForUpdatingContactInfoByRegistrantProfileIdWithOptions(shared_ptr<SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactType)) {
    query->insert(pair<string, string>("ContactType", *request->contactType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainName)) {
    query->insert(pair<string, vector<string>>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->registrantProfileId)) {
    query->insert(pair<string, long>("RegistrantProfileId", *request->registrantProfileId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->transferOutProhibited)) {
    query->insert(pair<string, bool>("TransferOutProhibited", *request->transferOutProhibited));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForUpdatingContactInfoByRegistrantProfileId"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse(callApi(params, req, runtime));
}

SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse Alibabacloud_Domain20180129::Client::saveBatchTaskForUpdatingContactInfoByRegistrantProfileId(shared_ptr<SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForUpdatingContactInfoByRegistrantProfileIdWithOptions(request, runtime);
}

SaveDomainGroupResponse Alibabacloud_Domain20180129::Client::saveDomainGroupWithOptions(shared_ptr<SaveDomainGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->domainGroupId)) {
    query->insert(pair<string, long>("DomainGroupId", *request->domainGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainGroupName)) {
    query->insert(pair<string, string>("DomainGroupName", *request->domainGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveDomainGroup"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveDomainGroupResponse(callApi(params, req, runtime));
}

SaveDomainGroupResponse Alibabacloud_Domain20180129::Client::saveDomainGroup(shared_ptr<SaveDomainGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveDomainGroupWithOptions(request, runtime);
}

SaveRegistrantProfileResponse Alibabacloud_Domain20180129::Client::saveRegistrantProfileWithOptions(shared_ptr<SaveRegistrantProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    query->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->defaultRegistrantProfile)) {
    query->insert(pair<string, bool>("DefaultRegistrantProfile", *request->defaultRegistrantProfile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postalCode)) {
    query->insert(pair<string, string>("PostalCode", *request->postalCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    query->insert(pair<string, string>("Province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantName)) {
    query->insert(pair<string, string>("RegistrantName", *request->registrantName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantOrganization)) {
    query->insert(pair<string, string>("RegistrantOrganization", *request->registrantOrganization));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->registrantProfileId)) {
    query->insert(pair<string, long>("RegistrantProfileId", *request->registrantProfileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantProfileType)) {
    query->insert(pair<string, string>("RegistrantProfileType", *request->registrantProfileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantType)) {
    query->insert(pair<string, string>("RegistrantType", *request->registrantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telArea)) {
    query->insert(pair<string, string>("TelArea", *request->telArea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telExt)) {
    query->insert(pair<string, string>("TelExt", *request->telExt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telephone)) {
    query->insert(pair<string, string>("Telephone", *request->telephone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhAddress)) {
    query->insert(pair<string, string>("ZhAddress", *request->zhAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhCity)) {
    query->insert(pair<string, string>("ZhCity", *request->zhCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhProvince)) {
    query->insert(pair<string, string>("ZhProvince", *request->zhProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhRegistrantName)) {
    query->insert(pair<string, string>("ZhRegistrantName", *request->zhRegistrantName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhRegistrantOrganization)) {
    query->insert(pair<string, string>("ZhRegistrantOrganization", *request->zhRegistrantOrganization));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveRegistrantProfile"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveRegistrantProfileResponse(callApi(params, req, runtime));
}

SaveRegistrantProfileResponse Alibabacloud_Domain20180129::Client::saveRegistrantProfile(shared_ptr<SaveRegistrantProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveRegistrantProfileWithOptions(request, runtime);
}

SaveRegistrantProfileRealNameVerificationResponse Alibabacloud_Domain20180129::Client::saveRegistrantProfileRealNameVerificationWithOptions(shared_ptr<SaveRegistrantProfileRealNameVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    query->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identityCredential)) {
    query->insert(pair<string, string>("IdentityCredential", *request->identityCredential));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identityCredentialNo)) {
    query->insert(pair<string, string>("IdentityCredentialNo", *request->identityCredentialNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identityCredentialType)) {
    query->insert(pair<string, string>("IdentityCredentialType", *request->identityCredentialType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postalCode)) {
    query->insert(pair<string, string>("PostalCode", *request->postalCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    query->insert(pair<string, string>("Province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantName)) {
    query->insert(pair<string, string>("RegistrantName", *request->registrantName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantOrganization)) {
    query->insert(pair<string, string>("RegistrantOrganization", *request->registrantOrganization));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->registrantProfileId)) {
    query->insert(pair<string, long>("RegistrantProfileId", *request->registrantProfileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantProfileType)) {
    query->insert(pair<string, string>("RegistrantProfileType", *request->registrantProfileType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantType)) {
    query->insert(pair<string, string>("RegistrantType", *request->registrantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telArea)) {
    query->insert(pair<string, string>("TelArea", *request->telArea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telExt)) {
    query->insert(pair<string, string>("TelExt", *request->telExt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telephone)) {
    query->insert(pair<string, string>("Telephone", *request->telephone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhAddress)) {
    query->insert(pair<string, string>("ZhAddress", *request->zhAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhCity)) {
    query->insert(pair<string, string>("ZhCity", *request->zhCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhProvince)) {
    query->insert(pair<string, string>("ZhProvince", *request->zhProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhRegistrantName)) {
    query->insert(pair<string, string>("ZhRegistrantName", *request->zhRegistrantName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhRegistrantOrganization)) {
    query->insert(pair<string, string>("ZhRegistrantOrganization", *request->zhRegistrantOrganization));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveRegistrantProfileRealNameVerification"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveRegistrantProfileRealNameVerificationResponse(callApi(params, req, runtime));
}

SaveRegistrantProfileRealNameVerificationResponse Alibabacloud_Domain20180129::Client::saveRegistrantProfileRealNameVerification(shared_ptr<SaveRegistrantProfileRealNameVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveRegistrantProfileRealNameVerificationWithOptions(request, runtime);
}

SaveSingleTaskForAddingDSRecordResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForAddingDSRecordWithOptions(shared_ptr<SaveSingleTaskForAddingDSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->algorithm)) {
    query->insert(pair<string, long>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->digest)) {
    query->insert(pair<string, string>("Digest", *request->digest));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->digestType)) {
    query->insert(pair<string, long>("DigestType", *request->digestType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->keyTag)) {
    query->insert(pair<string, long>("KeyTag", *request->keyTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForAddingDSRecord"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForAddingDSRecordResponse(callApi(params, req, runtime));
}

SaveSingleTaskForAddingDSRecordResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForAddingDSRecord(shared_ptr<SaveSingleTaskForAddingDSRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForAddingDSRecordWithOptions(request, runtime);
}

SaveSingleTaskForApplyQuickTransferOutOpenlyResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForApplyQuickTransferOutOpenlyWithOptions(shared_ptr<SaveSingleTaskForApplyQuickTransferOutOpenlyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForApplyQuickTransferOutOpenly"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForApplyQuickTransferOutOpenlyResponse(callApi(params, req, runtime));
}

SaveSingleTaskForApplyQuickTransferOutOpenlyResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForApplyQuickTransferOutOpenly(shared_ptr<SaveSingleTaskForApplyQuickTransferOutOpenlyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForApplyQuickTransferOutOpenlyWithOptions(request, runtime);
}

SaveSingleTaskForApprovingTransferOutResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForApprovingTransferOutWithOptions(shared_ptr<SaveSingleTaskForApprovingTransferOutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForApprovingTransferOut"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForApprovingTransferOutResponse(callApi(params, req, runtime));
}

SaveSingleTaskForApprovingTransferOutResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForApprovingTransferOut(shared_ptr<SaveSingleTaskForApprovingTransferOutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForApprovingTransferOutWithOptions(request, runtime);
}

SaveSingleTaskForAssociatingEnsResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForAssociatingEnsWithOptions(shared_ptr<SaveSingleTaskForAssociatingEnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForAssociatingEns"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForAssociatingEnsResponse(callApi(params, req, runtime));
}

SaveSingleTaskForAssociatingEnsResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForAssociatingEns(shared_ptr<SaveSingleTaskForAssociatingEnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForAssociatingEnsWithOptions(request, runtime);
}

SaveSingleTaskForCancelingTransferInResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForCancelingTransferInWithOptions(shared_ptr<SaveSingleTaskForCancelingTransferInRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForCancelingTransferIn"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForCancelingTransferInResponse(callApi(params, req, runtime));
}

SaveSingleTaskForCancelingTransferInResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForCancelingTransferIn(shared_ptr<SaveSingleTaskForCancelingTransferInRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForCancelingTransferInWithOptions(request, runtime);
}

SaveSingleTaskForCancelingTransferOutResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForCancelingTransferOutWithOptions(shared_ptr<SaveSingleTaskForCancelingTransferOutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForCancelingTransferOut"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForCancelingTransferOutResponse(callApi(params, req, runtime));
}

SaveSingleTaskForCancelingTransferOutResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForCancelingTransferOut(shared_ptr<SaveSingleTaskForCancelingTransferOutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForCancelingTransferOutWithOptions(request, runtime);
}

SaveSingleTaskForCreatingDnsHostResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForCreatingDnsHostWithOptions(shared_ptr<SaveSingleTaskForCreatingDnsHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dnsName)) {
    query->insert(pair<string, string>("DnsName", *request->dnsName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ip)) {
    query->insert(pair<string, vector<string>>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForCreatingDnsHost"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForCreatingDnsHostResponse(callApi(params, req, runtime));
}

SaveSingleTaskForCreatingDnsHostResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForCreatingDnsHost(shared_ptr<SaveSingleTaskForCreatingDnsHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForCreatingDnsHostWithOptions(request, runtime);
}

SaveSingleTaskForCreatingOrderActivateResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForCreatingOrderActivateWithOptions(shared_ptr<SaveSingleTaskForCreatingOrderActivateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->aliyunDns)) {
    query->insert(pair<string, bool>("AliyunDns", *request->aliyunDns));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    query->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->couponNo)) {
    query->insert(pair<string, string>("CouponNo", *request->couponNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dns1)) {
    query->insert(pair<string, string>("Dns1", *request->dns1));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dns2)) {
    query->insert(pair<string, string>("Dns2", *request->dns2));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableDomainProxy)) {
    query->insert(pair<string, bool>("EnableDomainProxy", *request->enableDomainProxy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->permitPremiumActivation)) {
    query->insert(pair<string, bool>("PermitPremiumActivation", *request->permitPremiumActivation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postalCode)) {
    query->insert(pair<string, string>("PostalCode", *request->postalCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionNo)) {
    query->insert(pair<string, string>("PromotionNo", *request->promotionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    query->insert(pair<string, string>("Province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantName)) {
    query->insert(pair<string, string>("RegistrantName", *request->registrantName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantOrganization)) {
    query->insert(pair<string, string>("RegistrantOrganization", *request->registrantOrganization));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->registrantProfileId)) {
    query->insert(pair<string, long>("RegistrantProfileId", *request->registrantProfileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantType)) {
    query->insert(pair<string, string>("RegistrantType", *request->registrantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subscriptionDuration)) {
    query->insert(pair<string, long>("SubscriptionDuration", *request->subscriptionDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telArea)) {
    query->insert(pair<string, string>("TelArea", *request->telArea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telExt)) {
    query->insert(pair<string, string>("TelExt", *request->telExt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telephone)) {
    query->insert(pair<string, string>("Telephone", *request->telephone));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->trademarkDomainActivation)) {
    query->insert(pair<string, bool>("TrademarkDomainActivation", *request->trademarkDomainActivation));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useCoupon)) {
    query->insert(pair<string, bool>("UseCoupon", *request->useCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->usePromotion)) {
    query->insert(pair<string, bool>("UsePromotion", *request->usePromotion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhAddress)) {
    query->insert(pair<string, string>("ZhAddress", *request->zhAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhCity)) {
    query->insert(pair<string, string>("ZhCity", *request->zhCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhProvince)) {
    query->insert(pair<string, string>("ZhProvince", *request->zhProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhRegistrantName)) {
    query->insert(pair<string, string>("ZhRegistrantName", *request->zhRegistrantName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhRegistrantOrganization)) {
    query->insert(pair<string, string>("ZhRegistrantOrganization", *request->zhRegistrantOrganization));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForCreatingOrderActivate"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForCreatingOrderActivateResponse(callApi(params, req, runtime));
}

SaveSingleTaskForCreatingOrderActivateResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForCreatingOrderActivate(shared_ptr<SaveSingleTaskForCreatingOrderActivateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForCreatingOrderActivateWithOptions(request, runtime);
}

SaveSingleTaskForCreatingOrderRedeemResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForCreatingOrderRedeemWithOptions(shared_ptr<SaveSingleTaskForCreatingOrderRedeemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->couponNo)) {
    query->insert(pair<string, string>("CouponNo", *request->couponNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentExpirationDate)) {
    query->insert(pair<string, long>("CurrentExpirationDate", *request->currentExpirationDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionNo)) {
    query->insert(pair<string, string>("PromotionNo", *request->promotionNo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useCoupon)) {
    query->insert(pair<string, bool>("UseCoupon", *request->useCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->usePromotion)) {
    query->insert(pair<string, bool>("UsePromotion", *request->usePromotion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForCreatingOrderRedeem"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForCreatingOrderRedeemResponse(callApi(params, req, runtime));
}

SaveSingleTaskForCreatingOrderRedeemResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForCreatingOrderRedeem(shared_ptr<SaveSingleTaskForCreatingOrderRedeemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForCreatingOrderRedeemWithOptions(request, runtime);
}

SaveSingleTaskForCreatingOrderRenewResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForCreatingOrderRenewWithOptions(shared_ptr<SaveSingleTaskForCreatingOrderRenewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->couponNo)) {
    query->insert(pair<string, string>("CouponNo", *request->couponNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentExpirationDate)) {
    query->insert(pair<string, long>("CurrentExpirationDate", *request->currentExpirationDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionNo)) {
    query->insert(pair<string, string>("PromotionNo", *request->promotionNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subscriptionDuration)) {
    query->insert(pair<string, long>("SubscriptionDuration", *request->subscriptionDuration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useCoupon)) {
    query->insert(pair<string, bool>("UseCoupon", *request->useCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->usePromotion)) {
    query->insert(pair<string, bool>("UsePromotion", *request->usePromotion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForCreatingOrderRenew"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForCreatingOrderRenewResponse(callApi(params, req, runtime));
}

SaveSingleTaskForCreatingOrderRenewResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForCreatingOrderRenew(shared_ptr<SaveSingleTaskForCreatingOrderRenewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForCreatingOrderRenewWithOptions(request, runtime);
}

SaveSingleTaskForCreatingOrderTransferResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForCreatingOrderTransferWithOptions(shared_ptr<SaveSingleTaskForCreatingOrderTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationCode)) {
    query->insert(pair<string, string>("AuthorizationCode", *request->authorizationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->couponNo)) {
    query->insert(pair<string, string>("CouponNo", *request->couponNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->permitPremiumTransfer)) {
    query->insert(pair<string, bool>("PermitPremiumTransfer", *request->permitPremiumTransfer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionNo)) {
    query->insert(pair<string, string>("PromotionNo", *request->promotionNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->registrantProfileId)) {
    query->insert(pair<string, long>("RegistrantProfileId", *request->registrantProfileId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useCoupon)) {
    query->insert(pair<string, bool>("UseCoupon", *request->useCoupon));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->usePromotion)) {
    query->insert(pair<string, bool>("UsePromotion", *request->usePromotion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForCreatingOrderTransfer"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForCreatingOrderTransferResponse(callApi(params, req, runtime));
}

SaveSingleTaskForCreatingOrderTransferResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForCreatingOrderTransfer(shared_ptr<SaveSingleTaskForCreatingOrderTransferRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForCreatingOrderTransferWithOptions(request, runtime);
}

SaveSingleTaskForDeletingDSRecordResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForDeletingDSRecordWithOptions(shared_ptr<SaveSingleTaskForDeletingDSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->keyTag)) {
    query->insert(pair<string, long>("KeyTag", *request->keyTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForDeletingDSRecord"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForDeletingDSRecordResponse(callApi(params, req, runtime));
}

SaveSingleTaskForDeletingDSRecordResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForDeletingDSRecord(shared_ptr<SaveSingleTaskForDeletingDSRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForDeletingDSRecordWithOptions(request, runtime);
}

SaveSingleTaskForDeletingDnsHostResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForDeletingDnsHostWithOptions(shared_ptr<SaveSingleTaskForDeletingDnsHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dnsName)) {
    query->insert(pair<string, string>("DnsName", *request->dnsName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForDeletingDnsHost"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForDeletingDnsHostResponse(callApi(params, req, runtime));
}

SaveSingleTaskForDeletingDnsHostResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForDeletingDnsHost(shared_ptr<SaveSingleTaskForDeletingDnsHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForDeletingDnsHostWithOptions(request, runtime);
}

SaveSingleTaskForDisassociatingEnsResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForDisassociatingEnsWithOptions(shared_ptr<SaveSingleTaskForDisassociatingEnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForDisassociatingEns"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForDisassociatingEnsResponse(callApi(params, req, runtime));
}

SaveSingleTaskForDisassociatingEnsResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForDisassociatingEns(shared_ptr<SaveSingleTaskForDisassociatingEnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForDisassociatingEnsWithOptions(request, runtime);
}

SaveSingleTaskForDomainNameProxyServiceResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForDomainNameProxyServiceWithOptions(shared_ptr<SaveSingleTaskForDomainNameProxyServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->status)) {
    query->insert(pair<string, bool>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForDomainNameProxyService"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForDomainNameProxyServiceResponse(callApi(params, req, runtime));
}

SaveSingleTaskForDomainNameProxyServiceResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForDomainNameProxyService(shared_ptr<SaveSingleTaskForDomainNameProxyServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForDomainNameProxyServiceWithOptions(request, runtime);
}

SaveSingleTaskForGenerateDomainCertificateResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForGenerateDomainCertificateWithOptions(shared_ptr<SaveSingleTaskForGenerateDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForGenerateDomainCertificate"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForGenerateDomainCertificateResponse(callApi(params, req, runtime));
}

SaveSingleTaskForGenerateDomainCertificateResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForGenerateDomainCertificate(shared_ptr<SaveSingleTaskForGenerateDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForGenerateDomainCertificateWithOptions(request, runtime);
}

SaveSingleTaskForModifyingDSRecordResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForModifyingDSRecordWithOptions(shared_ptr<SaveSingleTaskForModifyingDSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->algorithm)) {
    query->insert(pair<string, long>("Algorithm", *request->algorithm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->digest)) {
    query->insert(pair<string, string>("Digest", *request->digest));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->digestType)) {
    query->insert(pair<string, long>("DigestType", *request->digestType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->keyTag)) {
    query->insert(pair<string, long>("KeyTag", *request->keyTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForModifyingDSRecord"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForModifyingDSRecordResponse(callApi(params, req, runtime));
}

SaveSingleTaskForModifyingDSRecordResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForModifyingDSRecord(shared_ptr<SaveSingleTaskForModifyingDSRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForModifyingDSRecordWithOptions(request, runtime);
}

SaveSingleTaskForModifyingDnsHostResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForModifyingDnsHostWithOptions(shared_ptr<SaveSingleTaskForModifyingDnsHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dnsName)) {
    query->insert(pair<string, string>("DnsName", *request->dnsName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->ip)) {
    query->insert(pair<string, vector<string>>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForModifyingDnsHost"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForModifyingDnsHostResponse(callApi(params, req, runtime));
}

SaveSingleTaskForModifyingDnsHostResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForModifyingDnsHost(shared_ptr<SaveSingleTaskForModifyingDnsHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForModifyingDnsHostWithOptions(request, runtime);
}

SaveSingleTaskForQueryingTransferAuthorizationCodeResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForQueryingTransferAuthorizationCodeWithOptions(shared_ptr<SaveSingleTaskForQueryingTransferAuthorizationCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForQueryingTransferAuthorizationCode"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForQueryingTransferAuthorizationCodeResponse(callApi(params, req, runtime));
}

SaveSingleTaskForQueryingTransferAuthorizationCodeResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForQueryingTransferAuthorizationCode(shared_ptr<SaveSingleTaskForQueryingTransferAuthorizationCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForQueryingTransferAuthorizationCodeWithOptions(request, runtime);
}

SaveSingleTaskForSaveArtExtensionResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForSaveArtExtensionWithOptions(shared_ptr<SaveSingleTaskForSaveArtExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dateOrPeriod)) {
    query->insert(pair<string, string>("DateOrPeriod", *request->dateOrPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dimensions)) {
    query->insert(pair<string, string>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->features)) {
    query->insert(pair<string, string>("Features", *request->features));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inscriptionsAndMarkings)) {
    query->insert(pair<string, string>("InscriptionsAndMarkings", *request->inscriptionsAndMarkings));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maker)) {
    query->insert(pair<string, string>("Maker", *request->maker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialsAndTechniques)) {
    query->insert(pair<string, string>("MaterialsAndTechniques", *request->materialsAndTechniques));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectType)) {
    query->insert(pair<string, string>("ObjectType", *request->objectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reference)) {
    query->insert(pair<string, string>("Reference", *request->reference));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    query->insert(pair<string, string>("Subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForSaveArtExtension"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForSaveArtExtensionResponse(callApi(params, req, runtime));
}

SaveSingleTaskForSaveArtExtensionResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForSaveArtExtension(shared_ptr<SaveSingleTaskForSaveArtExtensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForSaveArtExtensionWithOptions(request, runtime);
}

SaveSingleTaskForSynchronizingDSRecordResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForSynchronizingDSRecordWithOptions(shared_ptr<SaveSingleTaskForSynchronizingDSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForSynchronizingDSRecord"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForSynchronizingDSRecordResponse(callApi(params, req, runtime));
}

SaveSingleTaskForSynchronizingDSRecordResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForSynchronizingDSRecord(shared_ptr<SaveSingleTaskForSynchronizingDSRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForSynchronizingDSRecordWithOptions(request, runtime);
}

SaveSingleTaskForSynchronizingDnsHostResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForSynchronizingDnsHostWithOptions(shared_ptr<SaveSingleTaskForSynchronizingDnsHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForSynchronizingDnsHost"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForSynchronizingDnsHostResponse(callApi(params, req, runtime));
}

SaveSingleTaskForSynchronizingDnsHostResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForSynchronizingDnsHost(shared_ptr<SaveSingleTaskForSynchronizingDnsHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForSynchronizingDnsHostWithOptions(request, runtime);
}

SaveSingleTaskForTransferProhibitionLockResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForTransferProhibitionLockWithOptions(shared_ptr<SaveSingleTaskForTransferProhibitionLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->status)) {
    query->insert(pair<string, bool>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForTransferProhibitionLock"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForTransferProhibitionLockResponse(callApi(params, req, runtime));
}

SaveSingleTaskForTransferProhibitionLockResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForTransferProhibitionLock(shared_ptr<SaveSingleTaskForTransferProhibitionLockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForTransferProhibitionLockWithOptions(request, runtime);
}

SaveSingleTaskForUpdateProhibitionLockResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForUpdateProhibitionLockWithOptions(shared_ptr<SaveSingleTaskForUpdateProhibitionLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->status)) {
    query->insert(pair<string, bool>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForUpdateProhibitionLock"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForUpdateProhibitionLockResponse(callApi(params, req, runtime));
}

SaveSingleTaskForUpdateProhibitionLockResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForUpdateProhibitionLock(shared_ptr<SaveSingleTaskForUpdateProhibitionLockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForUpdateProhibitionLockWithOptions(request, runtime);
}

SaveSingleTaskForUpdatingContactInfoResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForUpdatingContactInfoWithOptions(shared_ptr<SaveSingleTaskForUpdatingContactInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->addTransferLock)) {
    query->insert(pair<string, bool>("AddTransferLock", *request->addTransferLock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactType)) {
    query->insert(pair<string, string>("ContactType", *request->contactType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->registrantProfileId)) {
    query->insert(pair<string, long>("RegistrantProfileId", *request->registrantProfileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForUpdatingContactInfo"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveSingleTaskForUpdatingContactInfoResponse(callApi(params, req, runtime));
}

SaveSingleTaskForUpdatingContactInfoResponse Alibabacloud_Domain20180129::Client::saveSingleTaskForUpdatingContactInfo(shared_ptr<SaveSingleTaskForUpdatingContactInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForUpdatingContactInfoWithOptions(request, runtime);
}

SaveTaskForSubmittingDomainDeleteResponse Alibabacloud_Domain20180129::Client::saveTaskForSubmittingDomainDeleteWithOptions(shared_ptr<SaveTaskForSubmittingDomainDeleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveTaskForSubmittingDomainDelete"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveTaskForSubmittingDomainDeleteResponse(callApi(params, req, runtime));
}

SaveTaskForSubmittingDomainDeleteResponse Alibabacloud_Domain20180129::Client::saveTaskForSubmittingDomainDelete(shared_ptr<SaveTaskForSubmittingDomainDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTaskForSubmittingDomainDeleteWithOptions(request, runtime);
}

SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse Alibabacloud_Domain20180129::Client::saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialWithOptions(shared_ptr<SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainName)) {
    query->insert(pair<string, vector<string>>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identityCredentialNo)) {
    query->insert(pair<string, string>("IdentityCredentialNo", *request->identityCredentialNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identityCredentialType)) {
    query->insert(pair<string, string>("IdentityCredentialType", *request->identityCredentialType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identityCredential)) {
    body->insert(pair<string, string>("IdentityCredential", *request->identityCredential));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredential"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse(callApi(params, req, runtime));
}

SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse Alibabacloud_Domain20180129::Client::saveTaskForSubmittingDomainRealNameVerificationByIdentityCredential(shared_ptr<SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialWithOptions(request, runtime);
}

SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse Alibabacloud_Domain20180129::Client::saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDWithOptions(shared_ptr<SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->registrantProfileId)) {
    query->insert(pair<string, long>("RegistrantProfileId", *request->registrantProfileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileID"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse(callApi(params, req, runtime));
}

SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse Alibabacloud_Domain20180129::Client::saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileID(shared_ptr<SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDWithOptions(request, runtime);
}

SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse Alibabacloud_Domain20180129::Client::saveTaskForUpdatingRegistrantInfoByIdentityCredentialWithOptions(shared_ptr<SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    query->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainName)) {
    query->insert(pair<string, vector<string>>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identityCredentialNo)) {
    query->insert(pair<string, string>("IdentityCredentialNo", *request->identityCredentialNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identityCredentialType)) {
    query->insert(pair<string, string>("IdentityCredentialType", *request->identityCredentialType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postalCode)) {
    query->insert(pair<string, string>("PostalCode", *request->postalCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    query->insert(pair<string, string>("Province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantName)) {
    query->insert(pair<string, string>("RegistrantName", *request->registrantName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantOrganization)) {
    query->insert(pair<string, string>("RegistrantOrganization", *request->registrantOrganization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantType)) {
    query->insert(pair<string, string>("RegistrantType", *request->registrantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telArea)) {
    query->insert(pair<string, string>("TelArea", *request->telArea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telExt)) {
    query->insert(pair<string, string>("TelExt", *request->telExt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telephone)) {
    query->insert(pair<string, string>("Telephone", *request->telephone));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->transferOutProhibited)) {
    query->insert(pair<string, bool>("TransferOutProhibited", *request->transferOutProhibited));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhAddress)) {
    query->insert(pair<string, string>("ZhAddress", *request->zhAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhCity)) {
    query->insert(pair<string, string>("ZhCity", *request->zhCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhProvince)) {
    query->insert(pair<string, string>("ZhProvince", *request->zhProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhRegistrantName)) {
    query->insert(pair<string, string>("ZhRegistrantName", *request->zhRegistrantName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhRegistrantOrganization)) {
    query->insert(pair<string, string>("ZhRegistrantOrganization", *request->zhRegistrantOrganization));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identityCredential)) {
    body->insert(pair<string, string>("IdentityCredential", *request->identityCredential));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveTaskForUpdatingRegistrantInfoByIdentityCredential"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse(callApi(params, req, runtime));
}

SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse Alibabacloud_Domain20180129::Client::saveTaskForUpdatingRegistrantInfoByIdentityCredential(shared_ptr<SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTaskForUpdatingRegistrantInfoByIdentityCredentialWithOptions(request, runtime);
}

SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse Alibabacloud_Domain20180129::Client::saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDWithOptions(shared_ptr<SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainName)) {
    query->insert(pair<string, vector<string>>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->registrantProfileId)) {
    query->insert(pair<string, long>("RegistrantProfileId", *request->registrantProfileId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->transferOutProhibited)) {
    query->insert(pair<string, bool>("TransferOutProhibited", *request->transferOutProhibited));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveTaskForUpdatingRegistrantInfoByRegistrantProfileID"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse(callApi(params, req, runtime));
}

SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse Alibabacloud_Domain20180129::Client::saveTaskForUpdatingRegistrantInfoByRegistrantProfileID(shared_ptr<SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDWithOptions(request, runtime);
}

ScrollDomainListResponse Alibabacloud_Domain20180129::Client::scrollDomainListWithOptions(shared_ptr<ScrollDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->domainGroupId)) {
    query->insert(pair<string, long>("DomainGroupId", *request->domainGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->domainStatus)) {
    query->insert(pair<string, long>("DomainStatus", *request->domainStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endExpirationDate)) {
    query->insert(pair<string, long>("EndExpirationDate", *request->endExpirationDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endLength)) {
    query->insert(pair<string, long>("EndLength", *request->endLength));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endRegistrationDate)) {
    query->insert(pair<string, long>("EndRegistrationDate", *request->endRegistrationDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excluded)) {
    query->insert(pair<string, string>("Excluded", *request->excluded));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->excludedPrefix)) {
    query->insert(pair<string, bool>("ExcludedPrefix", *request->excludedPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->excludedSuffix)) {
    query->insert(pair<string, bool>("ExcludedSuffix", *request->excludedSuffix));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->form)) {
    query->insert(pair<string, long>("Form", *request->form));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWord)) {
    query->insert(pair<string, string>("KeyWord", *request->keyWord));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keyWordPrefix)) {
    query->insert(pair<string, bool>("KeyWordPrefix", *request->keyWordPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keyWordSuffix)) {
    query->insert(pair<string, bool>("KeyWordSuffix", *request->keyWordSuffix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productDomainType)) {
    query->insert(pair<string, string>("ProductDomainType", *request->productDomainType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scrollId)) {
    query->insert(pair<string, string>("ScrollId", *request->scrollId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startExpirationDate)) {
    query->insert(pair<string, long>("StartExpirationDate", *request->startExpirationDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startLength)) {
    query->insert(pair<string, long>("StartLength", *request->startLength));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startRegistrationDate)) {
    query->insert(pair<string, long>("StartRegistrationDate", *request->startRegistrationDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suffixs)) {
    query->insert(pair<string, string>("Suffixs", *request->suffixs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tradeType)) {
    query->insert(pair<string, long>("TradeType", *request->tradeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScrollDomainList"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScrollDomainListResponse(callApi(params, req, runtime));
}

ScrollDomainListResponse Alibabacloud_Domain20180129::Client::scrollDomainList(shared_ptr<ScrollDomainListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return scrollDomainListWithOptions(request, runtime);
}

SetDefaultRegistrantProfileResponse Alibabacloud_Domain20180129::Client::setDefaultRegistrantProfileWithOptions(shared_ptr<SetDefaultRegistrantProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->registrantProfileId)) {
    query->insert(pair<string, long>("RegistrantProfileId", *request->registrantProfileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDefaultRegistrantProfile"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDefaultRegistrantProfileResponse(callApi(params, req, runtime));
}

SetDefaultRegistrantProfileResponse Alibabacloud_Domain20180129::Client::setDefaultRegistrantProfile(shared_ptr<SetDefaultRegistrantProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultRegistrantProfileWithOptions(request, runtime);
}

SetupDomainAutoRenewResponse Alibabacloud_Domain20180129::Client::setupDomainAutoRenewWithOptions(shared_ptr<SetupDomainAutoRenewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operation)) {
    query->insert(pair<string, string>("Operation", *request->operation));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetupDomainAutoRenew"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetupDomainAutoRenewResponse(callApi(params, req, runtime));
}

SetupDomainAutoRenewResponse Alibabacloud_Domain20180129::Client::setupDomainAutoRenew(shared_ptr<SetupDomainAutoRenewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupDomainAutoRenewWithOptions(request, runtime);
}

SubmitDomainSpecialBizCredentialsResponse Alibabacloud_Domain20180129::Client::submitDomainSpecialBizCredentialsWithOptions(shared_ptr<SubmitDomainSpecialBizCredentialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bizId)) {
    body->insert(pair<string, long>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->credentials)) {
    body->insert(pair<string, string>("Credentials", *request->credentials));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extend)) {
    body->insert(pair<string, string>("Extend", *request->extend));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDomainSpecialBizCredentials"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDomainSpecialBizCredentialsResponse(callApi(params, req, runtime));
}

SubmitDomainSpecialBizCredentialsResponse Alibabacloud_Domain20180129::Client::submitDomainSpecialBizCredentials(shared_ptr<SubmitDomainSpecialBizCredentialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDomainSpecialBizCredentialsWithOptions(request, runtime);
}

SubmitEmailVerificationResponse Alibabacloud_Domain20180129::Client::submitEmailVerificationWithOptions(shared_ptr<SubmitEmailVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sendIfExist)) {
    query->insert(pair<string, bool>("SendIfExist", *request->sendIfExist));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitEmailVerification"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitEmailVerificationResponse(callApi(params, req, runtime));
}

SubmitEmailVerificationResponse Alibabacloud_Domain20180129::Client::submitEmailVerification(shared_ptr<SubmitEmailVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitEmailVerificationWithOptions(request, runtime);
}

SubmitOperationAuditInfoResponse Alibabacloud_Domain20180129::Client::submitOperationAuditInfoWithOptions(shared_ptr<SubmitOperationAuditInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->auditInfo)) {
    query->insert(pair<string, string>("AuditInfo", *request->auditInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->auditType)) {
    query->insert(pair<string, long>("AuditType", *request->auditType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitOperationAuditInfo"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitOperationAuditInfoResponse(callApi(params, req, runtime));
}

SubmitOperationAuditInfoResponse Alibabacloud_Domain20180129::Client::submitOperationAuditInfo(shared_ptr<SubmitOperationAuditInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitOperationAuditInfoWithOptions(request, runtime);
}

SubmitOperationCredentialsResponse Alibabacloud_Domain20180129::Client::submitOperationCredentialsWithOptions(shared_ptr<SubmitOperationCredentialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->auditRecordId)) {
    query->insert(pair<string, long>("AuditRecordId", *request->auditRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->auditType)) {
    query->insert(pair<string, long>("AuditType", *request->auditType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->credentials)) {
    query->insert(pair<string, string>("Credentials", *request->credentials));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->regType)) {
    query->insert(pair<string, long>("RegType", *request->regType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitOperationCredentials"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitOperationCredentialsResponse(callApi(params, req, runtime));
}

SubmitOperationCredentialsResponse Alibabacloud_Domain20180129::Client::submitOperationCredentials(shared_ptr<SubmitOperationCredentialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitOperationCredentialsWithOptions(request, runtime);
}

TransferInCheckMailTokenResponse Alibabacloud_Domain20180129::Client::transferInCheckMailTokenWithOptions(shared_ptr<TransferInCheckMailTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransferInCheckMailToken"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransferInCheckMailTokenResponse(callApi(params, req, runtime));
}

TransferInCheckMailTokenResponse Alibabacloud_Domain20180129::Client::transferInCheckMailToken(shared_ptr<TransferInCheckMailTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferInCheckMailTokenWithOptions(request, runtime);
}

TransferInReenterTransferAuthorizationCodeResponse Alibabacloud_Domain20180129::Client::transferInReenterTransferAuthorizationCodeWithOptions(shared_ptr<TransferInReenterTransferAuthorizationCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transferAuthorizationCode)) {
    query->insert(pair<string, string>("TransferAuthorizationCode", *request->transferAuthorizationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransferInReenterTransferAuthorizationCode"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransferInReenterTransferAuthorizationCodeResponse(callApi(params, req, runtime));
}

TransferInReenterTransferAuthorizationCodeResponse Alibabacloud_Domain20180129::Client::transferInReenterTransferAuthorizationCode(shared_ptr<TransferInReenterTransferAuthorizationCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferInReenterTransferAuthorizationCodeWithOptions(request, runtime);
}

TransferInRefetchWhoisEmailResponse Alibabacloud_Domain20180129::Client::transferInRefetchWhoisEmailWithOptions(shared_ptr<TransferInRefetchWhoisEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransferInRefetchWhoisEmail"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransferInRefetchWhoisEmailResponse(callApi(params, req, runtime));
}

TransferInRefetchWhoisEmailResponse Alibabacloud_Domain20180129::Client::transferInRefetchWhoisEmail(shared_ptr<TransferInRefetchWhoisEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferInRefetchWhoisEmailWithOptions(request, runtime);
}

TransferInResendMailTokenResponse Alibabacloud_Domain20180129::Client::transferInResendMailTokenWithOptions(shared_ptr<TransferInResendMailTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransferInResendMailToken"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransferInResendMailTokenResponse(callApi(params, req, runtime));
}

TransferInResendMailTokenResponse Alibabacloud_Domain20180129::Client::transferInResendMailToken(shared_ptr<TransferInResendMailTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferInResendMailTokenWithOptions(request, runtime);
}

UpdateDomainToDomainGroupResponse Alibabacloud_Domain20180129::Client::updateDomainToDomainGroupWithOptions(shared_ptr<UpdateDomainToDomainGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSource)) {
    query->insert(pair<string, long>("DataSource", *request->dataSource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->domainGroupId)) {
    query->insert(pair<string, long>("DomainGroupId", *request->domainGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainName)) {
    query->insert(pair<string, vector<string>>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->replace)) {
    query->insert(pair<string, bool>("Replace", *request->replace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileToUpload)) {
    body->insert(pair<string, string>("FileToUpload", *request->fileToUpload));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDomainToDomainGroup"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDomainToDomainGroupResponse(callApi(params, req, runtime));
}

UpdateDomainToDomainGroupResponse Alibabacloud_Domain20180129::Client::updateDomainToDomainGroup(shared_ptr<UpdateDomainToDomainGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDomainToDomainGroupWithOptions(request, runtime);
}

VerifyContactFieldResponse Alibabacloud_Domain20180129::Client::verifyContactFieldWithOptions(shared_ptr<VerifyContactFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("Address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    query->insert(pair<string, string>("City", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->country)) {
    query->insert(pair<string, string>("Country", *request->country));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postalCode)) {
    query->insert(pair<string, string>("PostalCode", *request->postalCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    query->insert(pair<string, string>("Province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantName)) {
    query->insert(pair<string, string>("RegistrantName", *request->registrantName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantOrganization)) {
    query->insert(pair<string, string>("RegistrantOrganization", *request->registrantOrganization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registrantType)) {
    query->insert(pair<string, string>("RegistrantType", *request->registrantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telArea)) {
    query->insert(pair<string, string>("TelArea", *request->telArea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telExt)) {
    query->insert(pair<string, string>("TelExt", *request->telExt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telephone)) {
    query->insert(pair<string, string>("Telephone", *request->telephone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhAddress)) {
    query->insert(pair<string, string>("ZhAddress", *request->zhAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhCity)) {
    query->insert(pair<string, string>("ZhCity", *request->zhCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhProvince)) {
    query->insert(pair<string, string>("ZhProvince", *request->zhProvince));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhRegistrantName)) {
    query->insert(pair<string, string>("ZhRegistrantName", *request->zhRegistrantName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zhRegistrantOrganization)) {
    query->insert(pair<string, string>("ZhRegistrantOrganization", *request->zhRegistrantOrganization));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyContactField"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyContactFieldResponse(callApi(params, req, runtime));
}

VerifyContactFieldResponse Alibabacloud_Domain20180129::Client::verifyContactField(shared_ptr<VerifyContactFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyContactFieldWithOptions(request, runtime);
}

VerifyEmailResponse Alibabacloud_Domain20180129::Client::verifyEmailWithOptions(shared_ptr<VerifyEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyEmail"))},
    {"version", boost::any(string("2018-01-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyEmailResponse(callApi(params, req, runtime));
}

VerifyEmailResponse Alibabacloud_Domain20180129::Client::verifyEmail(shared_ptr<VerifyEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyEmailWithOptions(request, runtime);
}

