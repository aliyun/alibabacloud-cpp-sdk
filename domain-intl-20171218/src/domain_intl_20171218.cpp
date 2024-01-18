// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/domain_intl_20171218.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Domain-intl20171218;

Alibabacloud_Domain-intl20171218::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("domain-intl"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Domain-intl20171218::Client::getEndpoint(shared_ptr<string> productId,
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

AcknowledgeTaskResultResponse Alibabacloud_Domain-intl20171218::Client::acknowledgeTaskResultWithOptions(shared_ptr<AcknowledgeTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

AcknowledgeTaskResultResponse Alibabacloud_Domain-intl20171218::Client::acknowledgeTaskResult(shared_ptr<AcknowledgeTaskResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return acknowledgeTaskResultWithOptions(request, runtime);
}

BatchFuzzyMatchDomainSensitiveWordResponse Alibabacloud_Domain-intl20171218::Client::batchFuzzyMatchDomainSensitiveWordWithOptions(shared_ptr<BatchFuzzyMatchDomainSensitiveWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

BatchFuzzyMatchDomainSensitiveWordResponse Alibabacloud_Domain-intl20171218::Client::batchFuzzyMatchDomainSensitiveWord(shared_ptr<BatchFuzzyMatchDomainSensitiveWordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchFuzzyMatchDomainSensitiveWordWithOptions(request, runtime);
}

CancelDomainVerificationResponse Alibabacloud_Domain-intl20171218::Client::cancelDomainVerificationWithOptions(shared_ptr<CancelDomainVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

CancelDomainVerificationResponse Alibabacloud_Domain-intl20171218::Client::cancelDomainVerification(shared_ptr<CancelDomainVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelDomainVerificationWithOptions(request, runtime);
}

CancelTaskResponse Alibabacloud_Domain-intl20171218::Client::cancelTaskWithOptions(shared_ptr<CancelTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

CancelTaskResponse Alibabacloud_Domain-intl20171218::Client::cancelTask(shared_ptr<CancelTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelTaskWithOptions(request, runtime);
}

CheckDomainResponse Alibabacloud_Domain-intl20171218::Client::checkDomainWithOptions(shared_ptr<CheckDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDomain"))},
    {"version", boost::any(string("2017-12-18"))},
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

CheckDomainResponse Alibabacloud_Domain-intl20171218::Client::checkDomain(shared_ptr<CheckDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDomainWithOptions(request, runtime);
}

CheckDomainSunriseClaimResponse Alibabacloud_Domain-intl20171218::Client::checkDomainSunriseClaimWithOptions(shared_ptr<CheckDomainSunriseClaimRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

CheckDomainSunriseClaimResponse Alibabacloud_Domain-intl20171218::Client::checkDomainSunriseClaim(shared_ptr<CheckDomainSunriseClaimRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDomainSunriseClaimWithOptions(request, runtime);
}

CheckTransferInFeasibilityResponse Alibabacloud_Domain-intl20171218::Client::checkTransferInFeasibilityWithOptions(shared_ptr<CheckTransferInFeasibilityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

CheckTransferInFeasibilityResponse Alibabacloud_Domain-intl20171218::Client::checkTransferInFeasibility(shared_ptr<CheckTransferInFeasibilityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkTransferInFeasibilityWithOptions(request, runtime);
}

ConfirmTransferInEmailResponse Alibabacloud_Domain-intl20171218::Client::confirmTransferInEmailWithOptions(shared_ptr<ConfirmTransferInEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

ConfirmTransferInEmailResponse Alibabacloud_Domain-intl20171218::Client::confirmTransferInEmail(shared_ptr<ConfirmTransferInEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmTransferInEmailWithOptions(request, runtime);
}

DeleteEmailVerificationResponse Alibabacloud_Domain-intl20171218::Client::deleteEmailVerificationWithOptions(shared_ptr<DeleteEmailVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

DeleteEmailVerificationResponse Alibabacloud_Domain-intl20171218::Client::deleteEmailVerification(shared_ptr<DeleteEmailVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEmailVerificationWithOptions(request, runtime);
}

DeleteRegistrantProfileResponse Alibabacloud_Domain-intl20171218::Client::deleteRegistrantProfileWithOptions(shared_ptr<DeleteRegistrantProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

DeleteRegistrantProfileResponse Alibabacloud_Domain-intl20171218::Client::deleteRegistrantProfile(shared_ptr<DeleteRegistrantProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRegistrantProfileWithOptions(request, runtime);
}

EmailVerifiedResponse Alibabacloud_Domain-intl20171218::Client::emailVerifiedWithOptions(shared_ptr<EmailVerifiedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

EmailVerifiedResponse Alibabacloud_Domain-intl20171218::Client::emailVerified(shared_ptr<EmailVerifiedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return emailVerifiedWithOptions(request, runtime);
}

FuzzyMatchDomainSensitiveWordResponse Alibabacloud_Domain-intl20171218::Client::fuzzyMatchDomainSensitiveWordWithOptions(shared_ptr<FuzzyMatchDomainSensitiveWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

FuzzyMatchDomainSensitiveWordResponse Alibabacloud_Domain-intl20171218::Client::fuzzyMatchDomainSensitiveWord(shared_ptr<FuzzyMatchDomainSensitiveWordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fuzzyMatchDomainSensitiveWordWithOptions(request, runtime);
}

ListEmailVerificationResponse Alibabacloud_Domain-intl20171218::Client::listEmailVerificationWithOptions(shared_ptr<ListEmailVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

ListEmailVerificationResponse Alibabacloud_Domain-intl20171218::Client::listEmailVerification(shared_ptr<ListEmailVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEmailVerificationWithOptions(request, runtime);
}

LookupTmchNoticeResponse Alibabacloud_Domain-intl20171218::Client::lookupTmchNoticeWithOptions(shared_ptr<LookupTmchNoticeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

LookupTmchNoticeResponse Alibabacloud_Domain-intl20171218::Client::lookupTmchNotice(shared_ptr<LookupTmchNoticeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lookupTmchNoticeWithOptions(request, runtime);
}

PollTaskResultResponse Alibabacloud_Domain-intl20171218::Client::pollTaskResultWithOptions(shared_ptr<PollTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

PollTaskResultResponse Alibabacloud_Domain-intl20171218::Client::pollTaskResult(shared_ptr<PollTaskResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pollTaskResultWithOptions(request, runtime);
}

QueryArtExtensionResponse Alibabacloud_Domain-intl20171218::Client::queryArtExtensionWithOptions(shared_ptr<QueryArtExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryArtExtensionResponse Alibabacloud_Domain-intl20171218::Client::queryArtExtension(shared_ptr<QueryArtExtensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryArtExtensionWithOptions(request, runtime);
}

QueryChangeLogListResponse Alibabacloud_Domain-intl20171218::Client::queryChangeLogListWithOptions(shared_ptr<QueryChangeLogListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryChangeLogListResponse Alibabacloud_Domain-intl20171218::Client::queryChangeLogList(shared_ptr<QueryChangeLogListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryChangeLogListWithOptions(request, runtime);
}

QueryContactInfoResponse Alibabacloud_Domain-intl20171218::Client::queryContactInfoWithOptions(shared_ptr<QueryContactInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryContactInfoResponse Alibabacloud_Domain-intl20171218::Client::queryContactInfo(shared_ptr<QueryContactInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryContactInfoWithOptions(request, runtime);
}

QueryDSRecordResponse Alibabacloud_Domain-intl20171218::Client::queryDSRecordWithOptions(shared_ptr<QueryDSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryDSRecordResponse Alibabacloud_Domain-intl20171218::Client::queryDSRecord(shared_ptr<QueryDSRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDSRecordWithOptions(request, runtime);
}

QueryDnsHostResponse Alibabacloud_Domain-intl20171218::Client::queryDnsHostWithOptions(shared_ptr<QueryDnsHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryDnsHostResponse Alibabacloud_Domain-intl20171218::Client::queryDnsHost(shared_ptr<QueryDnsHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDnsHostWithOptions(request, runtime);
}

QueryDomainByDomainNameResponse Alibabacloud_Domain-intl20171218::Client::queryDomainByDomainNameWithOptions(shared_ptr<QueryDomainByDomainNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryDomainByDomainNameResponse Alibabacloud_Domain-intl20171218::Client::queryDomainByDomainName(shared_ptr<QueryDomainByDomainNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDomainByDomainNameWithOptions(request, runtime);
}

QueryDomainByInstanceIdResponse Alibabacloud_Domain-intl20171218::Client::queryDomainByInstanceIdWithOptions(shared_ptr<QueryDomainByInstanceIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryDomainByInstanceIdResponse Alibabacloud_Domain-intl20171218::Client::queryDomainByInstanceId(shared_ptr<QueryDomainByInstanceIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDomainByInstanceIdWithOptions(request, runtime);
}

QueryDomainListResponse Alibabacloud_Domain-intl20171218::Client::queryDomainListWithOptions(shared_ptr<QueryDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (!Darabonba_Util::Client::isUnset<long>(request->startExpirationDate)) {
    query->insert(pair<string, long>("StartExpirationDate", *request->startExpirationDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startRegistrationDate)) {
    query->insert(pair<string, long>("StartRegistrationDate", *request->startRegistrationDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDomainList"))},
    {"version", boost::any(string("2017-12-18"))},
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

QueryDomainListResponse Alibabacloud_Domain-intl20171218::Client::queryDomainList(shared_ptr<QueryDomainListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDomainListWithOptions(request, runtime);
}

QueryDomainRealNameVerificationInfoResponse Alibabacloud_Domain-intl20171218::Client::queryDomainRealNameVerificationInfoWithOptions(shared_ptr<QueryDomainRealNameVerificationInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryDomainRealNameVerificationInfoResponse Alibabacloud_Domain-intl20171218::Client::queryDomainRealNameVerificationInfo(shared_ptr<QueryDomainRealNameVerificationInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDomainRealNameVerificationInfoWithOptions(request, runtime);
}

QueryEnsAssociationResponse Alibabacloud_Domain-intl20171218::Client::queryEnsAssociationWithOptions(shared_ptr<QueryEnsAssociationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryEnsAssociationResponse Alibabacloud_Domain-intl20171218::Client::queryEnsAssociation(shared_ptr<QueryEnsAssociationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEnsAssociationWithOptions(request, runtime);
}

QueryFailReasonForDomainRealNameVerificationResponse Alibabacloud_Domain-intl20171218::Client::queryFailReasonForDomainRealNameVerificationWithOptions(shared_ptr<QueryFailReasonForDomainRealNameVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryFailReasonForDomainRealNameVerificationResponse Alibabacloud_Domain-intl20171218::Client::queryFailReasonForDomainRealNameVerification(shared_ptr<QueryFailReasonForDomainRealNameVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFailReasonForDomainRealNameVerificationWithOptions(request, runtime);
}

QueryFailReasonForRegistrantProfileRealNameVerificationResponse Alibabacloud_Domain-intl20171218::Client::queryFailReasonForRegistrantProfileRealNameVerificationWithOptions(shared_ptr<QueryFailReasonForRegistrantProfileRealNameVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryFailReasonForRegistrantProfileRealNameVerificationResponse Alibabacloud_Domain-intl20171218::Client::queryFailReasonForRegistrantProfileRealNameVerification(shared_ptr<QueryFailReasonForRegistrantProfileRealNameVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFailReasonForRegistrantProfileRealNameVerificationWithOptions(request, runtime);
}

QueryLocalEnsAssociationResponse Alibabacloud_Domain-intl20171218::Client::queryLocalEnsAssociationWithOptions(shared_ptr<QueryLocalEnsAssociationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryLocalEnsAssociationResponse Alibabacloud_Domain-intl20171218::Client::queryLocalEnsAssociation(shared_ptr<QueryLocalEnsAssociationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryLocalEnsAssociationWithOptions(request, runtime);
}

QueryRegistrantProfileRealNameVerificationInfoResponse Alibabacloud_Domain-intl20171218::Client::queryRegistrantProfileRealNameVerificationInfoWithOptions(shared_ptr<QueryRegistrantProfileRealNameVerificationInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryRegistrantProfileRealNameVerificationInfoResponse Alibabacloud_Domain-intl20171218::Client::queryRegistrantProfileRealNameVerificationInfo(shared_ptr<QueryRegistrantProfileRealNameVerificationInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRegistrantProfileRealNameVerificationInfoWithOptions(request, runtime);
}

QueryRegistrantProfilesResponse Alibabacloud_Domain-intl20171218::Client::queryRegistrantProfilesWithOptions(shared_ptr<QueryRegistrantProfilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRegistrantProfiles"))},
    {"version", boost::any(string("2017-12-18"))},
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

QueryRegistrantProfilesResponse Alibabacloud_Domain-intl20171218::Client::queryRegistrantProfiles(shared_ptr<QueryRegistrantProfilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRegistrantProfilesWithOptions(request, runtime);
}

QueryTaskDetailHistoryResponse Alibabacloud_Domain-intl20171218::Client::queryTaskDetailHistoryWithOptions(shared_ptr<QueryTaskDetailHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryTaskDetailHistoryResponse Alibabacloud_Domain-intl20171218::Client::queryTaskDetailHistory(shared_ptr<QueryTaskDetailHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTaskDetailHistoryWithOptions(request, runtime);
}

QueryTaskDetailListResponse Alibabacloud_Domain-intl20171218::Client::queryTaskDetailListWithOptions(shared_ptr<QueryTaskDetailListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryTaskDetailListResponse Alibabacloud_Domain-intl20171218::Client::queryTaskDetailList(shared_ptr<QueryTaskDetailListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTaskDetailListWithOptions(request, runtime);
}

QueryTaskInfoHistoryResponse Alibabacloud_Domain-intl20171218::Client::queryTaskInfoHistoryWithOptions(shared_ptr<QueryTaskInfoHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryTaskInfoHistoryResponse Alibabacloud_Domain-intl20171218::Client::queryTaskInfoHistory(shared_ptr<QueryTaskInfoHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTaskInfoHistoryWithOptions(request, runtime);
}

QueryTaskListResponse Alibabacloud_Domain-intl20171218::Client::queryTaskListWithOptions(shared_ptr<QueryTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryTaskListResponse Alibabacloud_Domain-intl20171218::Client::queryTaskList(shared_ptr<QueryTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTaskListWithOptions(request, runtime);
}

QueryTransferInByInstanceIdResponse Alibabacloud_Domain-intl20171218::Client::queryTransferInByInstanceIdWithOptions(shared_ptr<QueryTransferInByInstanceIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryTransferInByInstanceIdResponse Alibabacloud_Domain-intl20171218::Client::queryTransferInByInstanceId(shared_ptr<QueryTransferInByInstanceIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTransferInByInstanceIdWithOptions(request, runtime);
}

QueryTransferInListResponse Alibabacloud_Domain-intl20171218::Client::queryTransferInListWithOptions(shared_ptr<QueryTransferInListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryTransferInListResponse Alibabacloud_Domain-intl20171218::Client::queryTransferInList(shared_ptr<QueryTransferInListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTransferInListWithOptions(request, runtime);
}

QueryTransferOutInfoResponse Alibabacloud_Domain-intl20171218::Client::queryTransferOutInfoWithOptions(shared_ptr<QueryTransferOutInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

QueryTransferOutInfoResponse Alibabacloud_Domain-intl20171218::Client::queryTransferOutInfo(shared_ptr<QueryTransferOutInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTransferOutInfoWithOptions(request, runtime);
}

RegistrantProfileRealNameVerificationResponse Alibabacloud_Domain-intl20171218::Client::registrantProfileRealNameVerificationWithOptions(shared_ptr<RegistrantProfileRealNameVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

RegistrantProfileRealNameVerificationResponse Alibabacloud_Domain-intl20171218::Client::registrantProfileRealNameVerification(shared_ptr<RegistrantProfileRealNameVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registrantProfileRealNameVerificationWithOptions(request, runtime);
}

ResendEmailVerificationResponse Alibabacloud_Domain-intl20171218::Client::resendEmailVerificationWithOptions(shared_ptr<ResendEmailVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

ResendEmailVerificationResponse Alibabacloud_Domain-intl20171218::Client::resendEmailVerification(shared_ptr<ResendEmailVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resendEmailVerificationWithOptions(request, runtime);
}

SaveBatchTaskForCreatingOrderActivateResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForCreatingOrderActivateWithOptions(shared_ptr<SaveBatchTaskForCreatingOrderActivateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveBatchTaskForCreatingOrderActivateResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForCreatingOrderActivate(shared_ptr<SaveBatchTaskForCreatingOrderActivateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForCreatingOrderActivateWithOptions(request, runtime);
}

SaveBatchTaskForCreatingOrderRedeemResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForCreatingOrderRedeemWithOptions(shared_ptr<SaveBatchTaskForCreatingOrderRedeemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveBatchTaskForCreatingOrderRedeemResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForCreatingOrderRedeem(shared_ptr<SaveBatchTaskForCreatingOrderRedeemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForCreatingOrderRedeemWithOptions(request, runtime);
}

SaveBatchTaskForCreatingOrderRenewResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForCreatingOrderRenewWithOptions(shared_ptr<SaveBatchTaskForCreatingOrderRenewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveBatchTaskForCreatingOrderRenewResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForCreatingOrderRenew(shared_ptr<SaveBatchTaskForCreatingOrderRenewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForCreatingOrderRenewWithOptions(request, runtime);
}

SaveBatchTaskForCreatingOrderTransferResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForCreatingOrderTransferWithOptions(shared_ptr<SaveBatchTaskForCreatingOrderTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveBatchTaskForCreatingOrderTransferResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForCreatingOrderTransfer(shared_ptr<SaveBatchTaskForCreatingOrderTransferRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForCreatingOrderTransferWithOptions(request, runtime);
}

SaveBatchTaskForDomainNameProxyServiceResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForDomainNameProxyServiceWithOptions(shared_ptr<SaveBatchTaskForDomainNameProxyServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->domainName)) {
    query->insert(pair<string, vector<string>>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->status)) {
    query->insert(pair<string, bool>("status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForDomainNameProxyService"))},
    {"version", boost::any(string("2017-12-18"))},
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

SaveBatchTaskForDomainNameProxyServiceResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForDomainNameProxyService(shared_ptr<SaveBatchTaskForDomainNameProxyServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForDomainNameProxyServiceWithOptions(request, runtime);
}

SaveBatchTaskForModifyingDomainDnsResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForModifyingDomainDnsWithOptions(shared_ptr<SaveBatchTaskForModifyingDomainDnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveBatchTaskForModifyingDomainDnsResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForModifyingDomainDns(shared_ptr<SaveBatchTaskForModifyingDomainDnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForModifyingDomainDnsWithOptions(request, runtime);
}

SaveBatchTaskForReserveDropListDomainResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForReserveDropListDomainWithOptions(shared_ptr<SaveBatchTaskForReserveDropListDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveBatchTaskForReserveDropListDomainResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForReserveDropListDomain(shared_ptr<SaveBatchTaskForReserveDropListDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForReserveDropListDomainWithOptions(request, runtime);
}

SaveBatchTaskForTransferProhibitionLockResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForTransferProhibitionLockWithOptions(shared_ptr<SaveBatchTaskForTransferProhibitionLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveBatchTaskForTransferProhibitionLockResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForTransferProhibitionLock(shared_ptr<SaveBatchTaskForTransferProhibitionLockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForTransferProhibitionLockWithOptions(request, runtime);
}

SaveBatchTaskForUpdateProhibitionLockResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForUpdateProhibitionLockWithOptions(shared_ptr<SaveBatchTaskForUpdateProhibitionLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveBatchTaskForUpdateProhibitionLockResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForUpdateProhibitionLock(shared_ptr<SaveBatchTaskForUpdateProhibitionLockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForUpdateProhibitionLockWithOptions(request, runtime);
}

SaveBatchTaskForUpdatingContactInfoResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForUpdatingContactInfoWithOptions(shared_ptr<SaveBatchTaskForUpdatingContactInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->addTransferLock)) {
    query->insert(pair<string, bool>("AddTransferLock", *request->addTransferLock));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->userClientIp)) {
    query->insert(pair<string, string>("UserClientIp", *request->userClientIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForUpdatingContactInfo"))},
    {"version", boost::any(string("2017-12-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveBatchTaskForUpdatingContactInfoResponse(callApi(params, req, runtime));
}

SaveBatchTaskForUpdatingContactInfoResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForUpdatingContactInfo(shared_ptr<SaveBatchTaskForUpdatingContactInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForUpdatingContactInfoWithOptions(request, runtime);
}

SaveBatchTaskForUpdatingContactInfoByNewContactResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForUpdatingContactInfoByNewContactWithOptions(shared_ptr<SaveBatchTaskForUpdatingContactInfoByNewContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBatchTaskForUpdatingContactInfoByNewContact"))},
    {"version", boost::any(string("2017-12-18"))},
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

SaveBatchTaskForUpdatingContactInfoByNewContactResponse Alibabacloud_Domain-intl20171218::Client::saveBatchTaskForUpdatingContactInfoByNewContact(shared_ptr<SaveBatchTaskForUpdatingContactInfoByNewContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBatchTaskForUpdatingContactInfoByNewContactWithOptions(request, runtime);
}

SaveRegistrantProfileResponse Alibabacloud_Domain-intl20171218::Client::saveRegistrantProfileWithOptions(shared_ptr<SaveRegistrantProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveRegistrantProfile"))},
    {"version", boost::any(string("2017-12-18"))},
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

SaveRegistrantProfileResponse Alibabacloud_Domain-intl20171218::Client::saveRegistrantProfile(shared_ptr<SaveRegistrantProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveRegistrantProfileWithOptions(request, runtime);
}

SaveSingleTaskForAddingDSRecordResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForAddingDSRecordWithOptions(shared_ptr<SaveSingleTaskForAddingDSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForAddingDSRecordResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForAddingDSRecord(shared_ptr<SaveSingleTaskForAddingDSRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForAddingDSRecordWithOptions(request, runtime);
}

SaveSingleTaskForApprovingTransferOutResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForApprovingTransferOutWithOptions(shared_ptr<SaveSingleTaskForApprovingTransferOutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForApprovingTransferOutResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForApprovingTransferOut(shared_ptr<SaveSingleTaskForApprovingTransferOutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForApprovingTransferOutWithOptions(request, runtime);
}

SaveSingleTaskForAssociatingEnsResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForAssociatingEnsWithOptions(shared_ptr<SaveSingleTaskForAssociatingEnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForAssociatingEnsResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForAssociatingEns(shared_ptr<SaveSingleTaskForAssociatingEnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForAssociatingEnsWithOptions(request, runtime);
}

SaveSingleTaskForCancelingTransferInResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForCancelingTransferInWithOptions(shared_ptr<SaveSingleTaskForCancelingTransferInRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForCancelingTransferInResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForCancelingTransferIn(shared_ptr<SaveSingleTaskForCancelingTransferInRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForCancelingTransferInWithOptions(request, runtime);
}

SaveSingleTaskForCancelingTransferOutResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForCancelingTransferOutWithOptions(shared_ptr<SaveSingleTaskForCancelingTransferOutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForCancelingTransferOutResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForCancelingTransferOut(shared_ptr<SaveSingleTaskForCancelingTransferOutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForCancelingTransferOutWithOptions(request, runtime);
}

SaveSingleTaskForCreatingDnsHostResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForCreatingDnsHostWithOptions(shared_ptr<SaveSingleTaskForCreatingDnsHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForCreatingDnsHostResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForCreatingDnsHost(shared_ptr<SaveSingleTaskForCreatingDnsHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForCreatingDnsHostWithOptions(request, runtime);
}

SaveSingleTaskForCreatingOrderActivateResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForCreatingOrderActivateWithOptions(shared_ptr<SaveSingleTaskForCreatingOrderActivateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveSingleTaskForCreatingOrderActivate"))},
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForCreatingOrderActivateResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForCreatingOrderActivate(shared_ptr<SaveSingleTaskForCreatingOrderActivateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForCreatingOrderActivateWithOptions(request, runtime);
}

SaveSingleTaskForCreatingOrderRedeemResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForCreatingOrderRedeemWithOptions(shared_ptr<SaveSingleTaskForCreatingOrderRedeemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForCreatingOrderRedeemResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForCreatingOrderRedeem(shared_ptr<SaveSingleTaskForCreatingOrderRedeemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForCreatingOrderRedeemWithOptions(request, runtime);
}

SaveSingleTaskForCreatingOrderRenewResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForCreatingOrderRenewWithOptions(shared_ptr<SaveSingleTaskForCreatingOrderRenewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForCreatingOrderRenewResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForCreatingOrderRenew(shared_ptr<SaveSingleTaskForCreatingOrderRenewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForCreatingOrderRenewWithOptions(request, runtime);
}

SaveSingleTaskForCreatingOrderTransferResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForCreatingOrderTransferWithOptions(shared_ptr<SaveSingleTaskForCreatingOrderTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForCreatingOrderTransferResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForCreatingOrderTransfer(shared_ptr<SaveSingleTaskForCreatingOrderTransferRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForCreatingOrderTransferWithOptions(request, runtime);
}

SaveSingleTaskForDeletingDSRecordResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForDeletingDSRecordWithOptions(shared_ptr<SaveSingleTaskForDeletingDSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForDeletingDSRecordResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForDeletingDSRecord(shared_ptr<SaveSingleTaskForDeletingDSRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForDeletingDSRecordWithOptions(request, runtime);
}

SaveSingleTaskForDeletingDnsHostResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForDeletingDnsHostWithOptions(shared_ptr<SaveSingleTaskForDeletingDnsHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("SaveSingleTaskForDeletingDnsHost"))},
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForDeletingDnsHostResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForDeletingDnsHost(shared_ptr<SaveSingleTaskForDeletingDnsHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForDeletingDnsHostWithOptions(request, runtime);
}

SaveSingleTaskForDisassociatingEnsResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForDisassociatingEnsWithOptions(shared_ptr<SaveSingleTaskForDisassociatingEnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForDisassociatingEnsResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForDisassociatingEns(shared_ptr<SaveSingleTaskForDisassociatingEnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForDisassociatingEnsWithOptions(request, runtime);
}

SaveSingleTaskForDomainNameProxyServiceResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForDomainNameProxyServiceWithOptions(shared_ptr<SaveSingleTaskForDomainNameProxyServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForDomainNameProxyServiceResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForDomainNameProxyService(shared_ptr<SaveSingleTaskForDomainNameProxyServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForDomainNameProxyServiceWithOptions(request, runtime);
}

SaveSingleTaskForModifyingDSRecordResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForModifyingDSRecordWithOptions(shared_ptr<SaveSingleTaskForModifyingDSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForModifyingDSRecordResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForModifyingDSRecord(shared_ptr<SaveSingleTaskForModifyingDSRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForModifyingDSRecordWithOptions(request, runtime);
}

SaveSingleTaskForModifyingDnsHostResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForModifyingDnsHostWithOptions(shared_ptr<SaveSingleTaskForModifyingDnsHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForModifyingDnsHostResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForModifyingDnsHost(shared_ptr<SaveSingleTaskForModifyingDnsHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForModifyingDnsHostWithOptions(request, runtime);
}

SaveSingleTaskForQueryingTransferAuthorizationCodeResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForQueryingTransferAuthorizationCodeWithOptions(shared_ptr<SaveSingleTaskForQueryingTransferAuthorizationCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForQueryingTransferAuthorizationCodeResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForQueryingTransferAuthorizationCode(shared_ptr<SaveSingleTaskForQueryingTransferAuthorizationCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForQueryingTransferAuthorizationCodeWithOptions(request, runtime);
}

SaveSingleTaskForSaveArtExtensionResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForSaveArtExtensionWithOptions(shared_ptr<SaveSingleTaskForSaveArtExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForSaveArtExtensionResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForSaveArtExtension(shared_ptr<SaveSingleTaskForSaveArtExtensionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForSaveArtExtensionWithOptions(request, runtime);
}

SaveSingleTaskForSynchronizingDSRecordResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForSynchronizingDSRecordWithOptions(shared_ptr<SaveSingleTaskForSynchronizingDSRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForSynchronizingDSRecordResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForSynchronizingDSRecord(shared_ptr<SaveSingleTaskForSynchronizingDSRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForSynchronizingDSRecordWithOptions(request, runtime);
}

SaveSingleTaskForSynchronizingDnsHostResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForSynchronizingDnsHostWithOptions(shared_ptr<SaveSingleTaskForSynchronizingDnsHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForSynchronizingDnsHostResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForSynchronizingDnsHost(shared_ptr<SaveSingleTaskForSynchronizingDnsHostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForSynchronizingDnsHostWithOptions(request, runtime);
}

SaveSingleTaskForTransferProhibitionLockResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForTransferProhibitionLockWithOptions(shared_ptr<SaveSingleTaskForTransferProhibitionLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForTransferProhibitionLockResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForTransferProhibitionLock(shared_ptr<SaveSingleTaskForTransferProhibitionLockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForTransferProhibitionLockWithOptions(request, runtime);
}

SaveSingleTaskForUpdateProhibitionLockResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForUpdateProhibitionLockWithOptions(shared_ptr<SaveSingleTaskForUpdateProhibitionLockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForUpdateProhibitionLockResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForUpdateProhibitionLock(shared_ptr<SaveSingleTaskForUpdateProhibitionLockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForUpdateProhibitionLockWithOptions(request, runtime);
}

SaveSingleTaskForUpdatingContactInfoResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForUpdatingContactInfoWithOptions(shared_ptr<SaveSingleTaskForUpdatingContactInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveSingleTaskForUpdatingContactInfoResponse Alibabacloud_Domain-intl20171218::Client::saveSingleTaskForUpdatingContactInfo(shared_ptr<SaveSingleTaskForUpdatingContactInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveSingleTaskForUpdatingContactInfoWithOptions(request, runtime);
}

SaveTaskForSubmittingDomainDeleteResponse Alibabacloud_Domain-intl20171218::Client::saveTaskForSubmittingDomainDeleteWithOptions(shared_ptr<SaveTaskForSubmittingDomainDeleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveTaskForSubmittingDomainDeleteResponse Alibabacloud_Domain-intl20171218::Client::saveTaskForSubmittingDomainDelete(shared_ptr<SaveTaskForSubmittingDomainDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTaskForSubmittingDomainDeleteWithOptions(request, runtime);
}

SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse Alibabacloud_Domain-intl20171218::Client::saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialWithOptions(shared_ptr<SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse Alibabacloud_Domain-intl20171218::Client::saveTaskForSubmittingDomainRealNameVerificationByIdentityCredential(shared_ptr<SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialWithOptions(request, runtime);
}

SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse Alibabacloud_Domain-intl20171218::Client::saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDWithOptions(shared_ptr<SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse Alibabacloud_Domain-intl20171218::Client::saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileID(shared_ptr<SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDWithOptions(request, runtime);
}

SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse Alibabacloud_Domain-intl20171218::Client::saveTaskForUpdatingRegistrantInfoByIdentityCredentialWithOptions(shared_ptr<SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse Alibabacloud_Domain-intl20171218::Client::saveTaskForUpdatingRegistrantInfoByIdentityCredential(shared_ptr<SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTaskForUpdatingRegistrantInfoByIdentityCredentialWithOptions(request, runtime);
}

SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse Alibabacloud_Domain-intl20171218::Client::saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDWithOptions(shared_ptr<SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse Alibabacloud_Domain-intl20171218::Client::saveTaskForUpdatingRegistrantInfoByRegistrantProfileID(shared_ptr<SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDWithOptions(request, runtime);
}

SubmitEmailVerificationResponse Alibabacloud_Domain-intl20171218::Client::submitEmailVerificationWithOptions(shared_ptr<SubmitEmailVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

SubmitEmailVerificationResponse Alibabacloud_Domain-intl20171218::Client::submitEmailVerification(shared_ptr<SubmitEmailVerificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitEmailVerificationWithOptions(request, runtime);
}

TransferInCheckMailTokenResponse Alibabacloud_Domain-intl20171218::Client::transferInCheckMailTokenWithOptions(shared_ptr<TransferInCheckMailTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

TransferInCheckMailTokenResponse Alibabacloud_Domain-intl20171218::Client::transferInCheckMailToken(shared_ptr<TransferInCheckMailTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferInCheckMailTokenWithOptions(request, runtime);
}

TransferInReenterTransferAuthorizationCodeResponse Alibabacloud_Domain-intl20171218::Client::transferInReenterTransferAuthorizationCodeWithOptions(shared_ptr<TransferInReenterTransferAuthorizationCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

TransferInReenterTransferAuthorizationCodeResponse Alibabacloud_Domain-intl20171218::Client::transferInReenterTransferAuthorizationCode(shared_ptr<TransferInReenterTransferAuthorizationCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferInReenterTransferAuthorizationCodeWithOptions(request, runtime);
}

TransferInRefetchWhoisEmailResponse Alibabacloud_Domain-intl20171218::Client::transferInRefetchWhoisEmailWithOptions(shared_ptr<TransferInRefetchWhoisEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

TransferInRefetchWhoisEmailResponse Alibabacloud_Domain-intl20171218::Client::transferInRefetchWhoisEmail(shared_ptr<TransferInRefetchWhoisEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferInRefetchWhoisEmailWithOptions(request, runtime);
}

TransferInResendMailTokenResponse Alibabacloud_Domain-intl20171218::Client::transferInResendMailTokenWithOptions(shared_ptr<TransferInResendMailTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

TransferInResendMailTokenResponse Alibabacloud_Domain-intl20171218::Client::transferInResendMailToken(shared_ptr<TransferInResendMailTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferInResendMailTokenWithOptions(request, runtime);
}

VerifyContactFieldResponse Alibabacloud_Domain-intl20171218::Client::verifyContactFieldWithOptions(shared_ptr<VerifyContactFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyContactField"))},
    {"version", boost::any(string("2017-12-18"))},
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

VerifyContactFieldResponse Alibabacloud_Domain-intl20171218::Client::verifyContactField(shared_ptr<VerifyContactFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyContactFieldWithOptions(request, runtime);
}

VerifyEmailResponse Alibabacloud_Domain-intl20171218::Client::verifyEmailWithOptions(shared_ptr<VerifyEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2017-12-18"))},
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

VerifyEmailResponse Alibabacloud_Domain-intl20171218::Client::verifyEmail(shared_ptr<VerifyEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyEmailWithOptions(request, runtime);
}

