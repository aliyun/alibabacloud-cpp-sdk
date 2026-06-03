#include <darabonba/Core.hpp>
#include <alibabacloud/DomainIntl20171218.hpp>
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
using namespace AlibabaCloud::DomainIntl20171218::Models;
namespace AlibabaCloud
{
namespace DomainIntl20171218
{

AlibabaCloud::DomainIntl20171218::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("domain-intl", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request AcknowledgeTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AcknowledgeTaskResultResponse
 */
AcknowledgeTaskResultResponse Client::acknowledgeTaskResultWithOptions(const AcknowledgeTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTaskDetailNo()) {
    query["TaskDetailNo"] = request.getTaskDetailNo();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AcknowledgeTaskResult"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AcknowledgeTaskResultResponse>();
}

/**
 * @param request AcknowledgeTaskResultRequest
 * @return AcknowledgeTaskResultResponse
 */
AcknowledgeTaskResultResponse Client::acknowledgeTaskResult(const AcknowledgeTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acknowledgeTaskResultWithOptions(request, runtime);
}

/**
 * @param request BatchFuzzyMatchDomainSensitiveWordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchFuzzyMatchDomainSensitiveWordResponse
 */
BatchFuzzyMatchDomainSensitiveWordResponse Client::batchFuzzyMatchDomainSensitiveWordWithOptions(const BatchFuzzyMatchDomainSensitiveWordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchFuzzyMatchDomainSensitiveWord"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchFuzzyMatchDomainSensitiveWordResponse>();
}

/**
 * @param request BatchFuzzyMatchDomainSensitiveWordRequest
 * @return BatchFuzzyMatchDomainSensitiveWordResponse
 */
BatchFuzzyMatchDomainSensitiveWordResponse Client::batchFuzzyMatchDomainSensitiveWord(const BatchFuzzyMatchDomainSensitiveWordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchFuzzyMatchDomainSensitiveWordWithOptions(request, runtime);
}

/**
 * @param request CancelDomainVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelDomainVerificationResponse
 */
CancelDomainVerificationResponse Client::cancelDomainVerificationWithOptions(const CancelDomainVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionType()) {
    query["ActionType"] = request.getActionType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelDomainVerification"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelDomainVerificationResponse>();
}

/**
 * @param request CancelDomainVerificationRequest
 * @return CancelDomainVerificationResponse
 */
CancelDomainVerificationResponse Client::cancelDomainVerification(const CancelDomainVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelDomainVerificationWithOptions(request, runtime);
}

/**
 * @param request CancelTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTaskWithOptions(const CancelTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTaskNo()) {
    query["TaskNo"] = request.getTaskNo();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelTask"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelTaskResponse>();
}

/**
 * @param request CancelTaskRequest
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTask(const CancelTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelTaskWithOptions(request, runtime);
}

/**
 * @param request CheckDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDomainResponse
 */
CheckDomainResponse Client::checkDomainWithOptions(const CheckDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasFeeCommand()) {
    query["FeeCommand"] = request.getFeeCommand();
  }

  if (!!request.hasFeeCurrency()) {
    query["FeeCurrency"] = request.getFeeCurrency();
  }

  if (!!request.hasFeePeriod()) {
    query["FeePeriod"] = request.getFeePeriod();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDomain"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDomainResponse>();
}

/**
 * @param request CheckDomainRequest
 * @return CheckDomainResponse
 */
CheckDomainResponse Client::checkDomain(const CheckDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDomainWithOptions(request, runtime);
}

/**
 * @param request CheckDomainSunriseClaimRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDomainSunriseClaimResponse
 */
CheckDomainSunriseClaimResponse Client::checkDomainSunriseClaimWithOptions(const CheckDomainSunriseClaimRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDomainSunriseClaim"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDomainSunriseClaimResponse>();
}

/**
 * @param request CheckDomainSunriseClaimRequest
 * @return CheckDomainSunriseClaimResponse
 */
CheckDomainSunriseClaimResponse Client::checkDomainSunriseClaim(const CheckDomainSunriseClaimRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDomainSunriseClaimWithOptions(request, runtime);
}

/**
 * @param request CheckTransferInFeasibilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckTransferInFeasibilityResponse
 */
CheckTransferInFeasibilityResponse Client::checkTransferInFeasibilityWithOptions(const CheckTransferInFeasibilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTransferAuthorizationCode()) {
    query["TransferAuthorizationCode"] = request.getTransferAuthorizationCode();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckTransferInFeasibility"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckTransferInFeasibilityResponse>();
}

/**
 * @param request CheckTransferInFeasibilityRequest
 * @return CheckTransferInFeasibilityResponse
 */
CheckTransferInFeasibilityResponse Client::checkTransferInFeasibility(const CheckTransferInFeasibilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkTransferInFeasibilityWithOptions(request, runtime);
}

/**
 * @param request ConfirmTransferInEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmTransferInEmailResponse
 */
ConfirmTransferInEmailResponse Client::confirmTransferInEmailWithOptions(const ConfirmTransferInEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfirmTransferInEmail"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfirmTransferInEmailResponse>();
}

/**
 * @param request ConfirmTransferInEmailRequest
 * @return ConfirmTransferInEmailResponse
 */
ConfirmTransferInEmailResponse Client::confirmTransferInEmail(const ConfirmTransferInEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return confirmTransferInEmailWithOptions(request, runtime);
}

/**
 * @param request DeleteEmailVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEmailVerificationResponse
 */
DeleteEmailVerificationResponse Client::deleteEmailVerificationWithOptions(const DeleteEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEmailVerification"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEmailVerificationResponse>();
}

/**
 * @param request DeleteEmailVerificationRequest
 * @return DeleteEmailVerificationResponse
 */
DeleteEmailVerificationResponse Client::deleteEmailVerification(const DeleteEmailVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEmailVerificationWithOptions(request, runtime);
}

/**
 * @param request DeleteRegistrantProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRegistrantProfileResponse
 */
DeleteRegistrantProfileResponse Client::deleteRegistrantProfileWithOptions(const DeleteRegistrantProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.getRegistrantProfileId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRegistrantProfile"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRegistrantProfileResponse>();
}

/**
 * @param request DeleteRegistrantProfileRequest
 * @return DeleteRegistrantProfileResponse
 */
DeleteRegistrantProfileResponse Client::deleteRegistrantProfile(const DeleteRegistrantProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRegistrantProfileWithOptions(request, runtime);
}

/**
 * @param request EmailVerifiedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EmailVerifiedResponse
 */
EmailVerifiedResponse Client::emailVerifiedWithOptions(const EmailVerifiedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EmailVerified"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EmailVerifiedResponse>();
}

/**
 * @param request EmailVerifiedRequest
 * @return EmailVerifiedResponse
 */
EmailVerifiedResponse Client::emailVerified(const EmailVerifiedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return emailVerifiedWithOptions(request, runtime);
}

/**
 * @param request FuzzyMatchDomainSensitiveWordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FuzzyMatchDomainSensitiveWordResponse
 */
FuzzyMatchDomainSensitiveWordResponse Client::fuzzyMatchDomainSensitiveWordWithOptions(const FuzzyMatchDomainSensitiveWordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FuzzyMatchDomainSensitiveWord"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FuzzyMatchDomainSensitiveWordResponse>();
}

/**
 * @param request FuzzyMatchDomainSensitiveWordRequest
 * @return FuzzyMatchDomainSensitiveWordResponse
 */
FuzzyMatchDomainSensitiveWordResponse Client::fuzzyMatchDomainSensitiveWord(const FuzzyMatchDomainSensitiveWordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fuzzyMatchDomainSensitiveWordWithOptions(request, runtime);
}

/**
 * @param request ListEmailVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEmailVerificationResponse
 */
ListEmailVerificationResponse Client::listEmailVerificationWithOptions(const ListEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginCreateTime()) {
    query["BeginCreateTime"] = request.getBeginCreateTime();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasEndCreateTime()) {
    query["EndCreateTime"] = request.getEndCreateTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasVerificationStatus()) {
    query["VerificationStatus"] = request.getVerificationStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEmailVerification"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEmailVerificationResponse>();
}

/**
 * @param request ListEmailVerificationRequest
 * @return ListEmailVerificationResponse
 */
ListEmailVerificationResponse Client::listEmailVerification(const ListEmailVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEmailVerificationWithOptions(request, runtime);
}

/**
 * @param request LookupTmchNoticeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LookupTmchNoticeResponse
 */
LookupTmchNoticeResponse Client::lookupTmchNoticeWithOptions(const LookupTmchNoticeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClaimKey()) {
    query["ClaimKey"] = request.getClaimKey();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LookupTmchNotice"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LookupTmchNoticeResponse>();
}

/**
 * @param request LookupTmchNoticeRequest
 * @return LookupTmchNoticeResponse
 */
LookupTmchNoticeResponse Client::lookupTmchNotice(const LookupTmchNoticeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lookupTmchNoticeWithOptions(request, runtime);
}

/**
 * @param request PollTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PollTaskResultResponse
 */
PollTaskResultResponse Client::pollTaskResultWithOptions(const PollTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskNo()) {
    query["TaskNo"] = request.getTaskNo();
  }

  if (!!request.hasTaskResultStatus()) {
    query["TaskResultStatus"] = request.getTaskResultStatus();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PollTaskResult"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PollTaskResultResponse>();
}

/**
 * @param request PollTaskResultRequest
 * @return PollTaskResultResponse
 */
PollTaskResultResponse Client::pollTaskResult(const PollTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pollTaskResultWithOptions(request, runtime);
}

/**
 * @param request QueryArtExtensionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryArtExtensionResponse
 */
QueryArtExtensionResponse Client::queryArtExtensionWithOptions(const QueryArtExtensionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryArtExtension"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryArtExtensionResponse>();
}

/**
 * @param request QueryArtExtensionRequest
 * @return QueryArtExtensionResponse
 */
QueryArtExtensionResponse Client::queryArtExtension(const QueryArtExtensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryArtExtensionWithOptions(request, runtime);
}

/**
 * @param request QueryChangeLogListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryChangeLogListResponse
 */
QueryChangeLogListResponse Client::queryChangeLogListWithOptions(const QueryChangeLogListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryChangeLogList"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryChangeLogListResponse>();
}

/**
 * @param request QueryChangeLogListRequest
 * @return QueryChangeLogListResponse
 */
QueryChangeLogListResponse Client::queryChangeLogList(const QueryChangeLogListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryChangeLogListWithOptions(request, runtime);
}

/**
 * @param request QueryContactInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryContactInfoResponse
 */
QueryContactInfoResponse Client::queryContactInfoWithOptions(const QueryContactInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactType()) {
    query["ContactType"] = request.getContactType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryContactInfo"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryContactInfoResponse>();
}

/**
 * @param request QueryContactInfoRequest
 * @return QueryContactInfoResponse
 */
QueryContactInfoResponse Client::queryContactInfo(const QueryContactInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryContactInfoWithOptions(request, runtime);
}

/**
 * @param request QueryDSRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDSRecordResponse
 */
QueryDSRecordResponse Client::queryDSRecordWithOptions(const QueryDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDSRecord"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDSRecordResponse>();
}

/**
 * @param request QueryDSRecordRequest
 * @return QueryDSRecordResponse
 */
QueryDSRecordResponse Client::queryDSRecord(const QueryDSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDSRecordWithOptions(request, runtime);
}

/**
 * @param request QueryDnsHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDnsHostResponse
 */
QueryDnsHostResponse Client::queryDnsHostWithOptions(const QueryDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDnsHost"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDnsHostResponse>();
}

/**
 * @param request QueryDnsHostRequest
 * @return QueryDnsHostResponse
 */
QueryDnsHostResponse Client::queryDnsHost(const QueryDnsHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDnsHostWithOptions(request, runtime);
}

/**
 * @param request QueryDomainByDomainNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainByDomainNameResponse
 */
QueryDomainByDomainNameResponse Client::queryDomainByDomainNameWithOptions(const QueryDomainByDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDomainByDomainName"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDomainByDomainNameResponse>();
}

/**
 * @param request QueryDomainByDomainNameRequest
 * @return QueryDomainByDomainNameResponse
 */
QueryDomainByDomainNameResponse Client::queryDomainByDomainName(const QueryDomainByDomainNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainByDomainNameWithOptions(request, runtime);
}

/**
 * @param request QueryDomainByInstanceIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainByInstanceIdResponse
 */
QueryDomainByInstanceIdResponse Client::queryDomainByInstanceIdWithOptions(const QueryDomainByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDomainByInstanceId"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDomainByInstanceIdResponse>();
}

/**
 * @param request QueryDomainByInstanceIdRequest
 * @return QueryDomainByInstanceIdResponse
 */
QueryDomainByInstanceIdResponse Client::queryDomainByInstanceId(const QueryDomainByInstanceIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainByInstanceIdWithOptions(request, runtime);
}

/**
 * @summary Queries a list of domain names.
 *
 * @param request QueryDomainListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainListResponse
 */
QueryDomainListResponse Client::queryDomainListWithOptions(const QueryDomainListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCcompany()) {
    query["Ccompany"] = request.getCcompany();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndExpirationDate()) {
    query["EndExpirationDate"] = request.getEndExpirationDate();
  }

  if (!!request.hasEndRegistrationDate()) {
    query["EndRegistrationDate"] = request.getEndRegistrationDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrderByType()) {
    query["OrderByType"] = request.getOrderByType();
  }

  if (!!request.hasOrderKeyType()) {
    query["OrderKeyType"] = request.getOrderKeyType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductDomainType()) {
    query["ProductDomainType"] = request.getProductDomainType();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasStartExpirationDate()) {
    query["StartExpirationDate"] = request.getStartExpirationDate();
  }

  if (!!request.hasStartRegistrationDate()) {
    query["StartRegistrationDate"] = request.getStartRegistrationDate();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDomainList"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDomainListResponse>();
}

/**
 * @summary Queries a list of domain names.
 *
 * @param request QueryDomainListRequest
 * @return QueryDomainListResponse
 */
QueryDomainListResponse Client::queryDomainList(const QueryDomainListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainListWithOptions(request, runtime);
}

/**
 * @param request QueryDomainRealNameVerificationInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainRealNameVerificationInfoResponse
 */
QueryDomainRealNameVerificationInfoResponse Client::queryDomainRealNameVerificationInfoWithOptions(const QueryDomainRealNameVerificationInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasFetchImage()) {
    query["FetchImage"] = request.getFetchImage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDomainRealNameVerificationInfo"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDomainRealNameVerificationInfoResponse>();
}

/**
 * @param request QueryDomainRealNameVerificationInfoRequest
 * @return QueryDomainRealNameVerificationInfoResponse
 */
QueryDomainRealNameVerificationInfoResponse Client::queryDomainRealNameVerificationInfo(const QueryDomainRealNameVerificationInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainRealNameVerificationInfoWithOptions(request, runtime);
}

/**
 * @param request QueryEnsAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEnsAssociationResponse
 */
QueryEnsAssociationResponse Client::queryEnsAssociationWithOptions(const QueryEnsAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryEnsAssociation"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryEnsAssociationResponse>();
}

/**
 * @param request QueryEnsAssociationRequest
 * @return QueryEnsAssociationResponse
 */
QueryEnsAssociationResponse Client::queryEnsAssociation(const QueryEnsAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEnsAssociationWithOptions(request, runtime);
}

/**
 * @param request QueryFailReasonForDomainRealNameVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFailReasonForDomainRealNameVerificationResponse
 */
QueryFailReasonForDomainRealNameVerificationResponse Client::queryFailReasonForDomainRealNameVerificationWithOptions(const QueryFailReasonForDomainRealNameVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRealNameVerificationAction()) {
    query["RealNameVerificationAction"] = request.getRealNameVerificationAction();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFailReasonForDomainRealNameVerification"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFailReasonForDomainRealNameVerificationResponse>();
}

/**
 * @param request QueryFailReasonForDomainRealNameVerificationRequest
 * @return QueryFailReasonForDomainRealNameVerificationResponse
 */
QueryFailReasonForDomainRealNameVerificationResponse Client::queryFailReasonForDomainRealNameVerification(const QueryFailReasonForDomainRealNameVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFailReasonForDomainRealNameVerificationWithOptions(request, runtime);
}

/**
 * @param request QueryFailReasonForRegistrantProfileRealNameVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFailReasonForRegistrantProfileRealNameVerificationResponse
 */
QueryFailReasonForRegistrantProfileRealNameVerificationResponse Client::queryFailReasonForRegistrantProfileRealNameVerificationWithOptions(const QueryFailReasonForRegistrantProfileRealNameVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegistrantProfileID()) {
    query["RegistrantProfileID"] = request.getRegistrantProfileID();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFailReasonForRegistrantProfileRealNameVerification"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFailReasonForRegistrantProfileRealNameVerificationResponse>();
}

/**
 * @param request QueryFailReasonForRegistrantProfileRealNameVerificationRequest
 * @return QueryFailReasonForRegistrantProfileRealNameVerificationResponse
 */
QueryFailReasonForRegistrantProfileRealNameVerificationResponse Client::queryFailReasonForRegistrantProfileRealNameVerification(const QueryFailReasonForRegistrantProfileRealNameVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFailReasonForRegistrantProfileRealNameVerificationWithOptions(request, runtime);
}

/**
 * @param request QueryLocalEnsAssociationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryLocalEnsAssociationResponse
 */
QueryLocalEnsAssociationResponse Client::queryLocalEnsAssociationWithOptions(const QueryLocalEnsAssociationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryLocalEnsAssociation"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryLocalEnsAssociationResponse>();
}

/**
 * @param request QueryLocalEnsAssociationRequest
 * @return QueryLocalEnsAssociationResponse
 */
QueryLocalEnsAssociationResponse Client::queryLocalEnsAssociation(const QueryLocalEnsAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryLocalEnsAssociationWithOptions(request, runtime);
}

/**
 * @param request QueryRegistrantProfileRealNameVerificationInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRegistrantProfileRealNameVerificationInfoResponse
 */
QueryRegistrantProfileRealNameVerificationInfoResponse Client::queryRegistrantProfileRealNameVerificationInfoWithOptions(const QueryRegistrantProfileRealNameVerificationInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFetchImage()) {
    query["FetchImage"] = request.getFetchImage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.getRegistrantProfileId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRegistrantProfileRealNameVerificationInfo"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRegistrantProfileRealNameVerificationInfoResponse>();
}

/**
 * @param request QueryRegistrantProfileRealNameVerificationInfoRequest
 * @return QueryRegistrantProfileRealNameVerificationInfoResponse
 */
QueryRegistrantProfileRealNameVerificationInfoResponse Client::queryRegistrantProfileRealNameVerificationInfo(const QueryRegistrantProfileRealNameVerificationInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRegistrantProfileRealNameVerificationInfoWithOptions(request, runtime);
}

/**
 * @param request QueryRegistrantProfilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRegistrantProfilesResponse
 */
QueryRegistrantProfilesResponse Client::queryRegistrantProfilesWithOptions(const QueryRegistrantProfilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultRegistrantProfile()) {
    query["DefaultRegistrantProfile"] = request.getDefaultRegistrantProfile();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRealNameStatus()) {
    query["RealNameStatus"] = request.getRealNameStatus();
  }

  if (!!request.hasRegistrantOrganization()) {
    query["RegistrantOrganization"] = request.getRegistrantOrganization();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.getRegistrantProfileId();
  }

  if (!!request.hasRegistrantProfileType()) {
    query["RegistrantProfileType"] = request.getRegistrantProfileType();
  }

  if (!!request.hasRegistrantType()) {
    query["RegistrantType"] = request.getRegistrantType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRegistrantProfiles"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRegistrantProfilesResponse>();
}

/**
 * @param request QueryRegistrantProfilesRequest
 * @return QueryRegistrantProfilesResponse
 */
QueryRegistrantProfilesResponse Client::queryRegistrantProfiles(const QueryRegistrantProfilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRegistrantProfilesWithOptions(request, runtime);
}

/**
 * @param request QueryTaskDetailHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTaskDetailHistoryResponse
 */
QueryTaskDetailHistoryResponse Client::queryTaskDetailHistoryWithOptions(const QueryTaskDetailHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainNameCursor()) {
    query["DomainNameCursor"] = request.getDomainNameCursor();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskDetailNoCursor()) {
    query["TaskDetailNoCursor"] = request.getTaskDetailNoCursor();
  }

  if (!!request.hasTaskNo()) {
    query["TaskNo"] = request.getTaskNo();
  }

  if (!!request.hasTaskStatus()) {
    query["TaskStatus"] = request.getTaskStatus();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTaskDetailHistory"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTaskDetailHistoryResponse>();
}

/**
 * @param request QueryTaskDetailHistoryRequest
 * @return QueryTaskDetailHistoryResponse
 */
QueryTaskDetailHistoryResponse Client::queryTaskDetailHistory(const QueryTaskDetailHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskDetailHistoryWithOptions(request, runtime);
}

/**
 * @param request QueryTaskDetailListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTaskDetailListResponse
 */
QueryTaskDetailListResponse Client::queryTaskDetailListWithOptions(const QueryTaskDetailListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskNo()) {
    query["TaskNo"] = request.getTaskNo();
  }

  if (!!request.hasTaskStatus()) {
    query["TaskStatus"] = request.getTaskStatus();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTaskDetailList"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTaskDetailListResponse>();
}

/**
 * @param request QueryTaskDetailListRequest
 * @return QueryTaskDetailListResponse
 */
QueryTaskDetailListResponse Client::queryTaskDetailList(const QueryTaskDetailListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskDetailListWithOptions(request, runtime);
}

/**
 * @param request QueryTaskInfoHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTaskInfoHistoryResponse
 */
QueryTaskInfoHistoryResponse Client::queryTaskInfoHistoryWithOptions(const QueryTaskInfoHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginCreateTime()) {
    query["BeginCreateTime"] = request.getBeginCreateTime();
  }

  if (!!request.hasCreateTimeCursor()) {
    query["CreateTimeCursor"] = request.getCreateTimeCursor();
  }

  if (!!request.hasEndCreateTime()) {
    query["EndCreateTime"] = request.getEndCreateTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskNoCursor()) {
    query["TaskNoCursor"] = request.getTaskNoCursor();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTaskInfoHistory"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTaskInfoHistoryResponse>();
}

/**
 * @param request QueryTaskInfoHistoryRequest
 * @return QueryTaskInfoHistoryResponse
 */
QueryTaskInfoHistoryResponse Client::queryTaskInfoHistory(const QueryTaskInfoHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskInfoHistoryWithOptions(request, runtime);
}

/**
 * @param request QueryTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTaskListResponse
 */
QueryTaskListResponse Client::queryTaskListWithOptions(const QueryTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginCreateTime()) {
    query["BeginCreateTime"] = request.getBeginCreateTime();
  }

  if (!!request.hasEndCreateTime()) {
    query["EndCreateTime"] = request.getEndCreateTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTaskList"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTaskListResponse>();
}

/**
 * @param request QueryTaskListRequest
 * @return QueryTaskListResponse
 */
QueryTaskListResponse Client::queryTaskList(const QueryTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskListWithOptions(request, runtime);
}

/**
 * @param request QueryTransferInByInstanceIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTransferInByInstanceIdResponse
 */
QueryTransferInByInstanceIdResponse Client::queryTransferInByInstanceIdWithOptions(const QueryTransferInByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTransferInByInstanceId"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTransferInByInstanceIdResponse>();
}

/**
 * @param request QueryTransferInByInstanceIdRequest
 * @return QueryTransferInByInstanceIdResponse
 */
QueryTransferInByInstanceIdResponse Client::queryTransferInByInstanceId(const QueryTransferInByInstanceIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTransferInByInstanceIdWithOptions(request, runtime);
}

/**
 * @param request QueryTransferInListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTransferInListResponse
 */
QueryTransferInListResponse Client::queryTransferInListWithOptions(const QueryTransferInListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSimpleTransferInStatus()) {
    query["SimpleTransferInStatus"] = request.getSimpleTransferInStatus();
  }

  if (!!request.hasSubmissionEndDate()) {
    query["SubmissionEndDate"] = request.getSubmissionEndDate();
  }

  if (!!request.hasSubmissionStartDate()) {
    query["SubmissionStartDate"] = request.getSubmissionStartDate();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTransferInList"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTransferInListResponse>();
}

/**
 * @param request QueryTransferInListRequest
 * @return QueryTransferInListResponse
 */
QueryTransferInListResponse Client::queryTransferInList(const QueryTransferInListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTransferInListWithOptions(request, runtime);
}

/**
 * @param request QueryTransferOutInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTransferOutInfoResponse
 */
QueryTransferOutInfoResponse Client::queryTransferOutInfoWithOptions(const QueryTransferOutInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTransferOutInfo"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTransferOutInfoResponse>();
}

/**
 * @param request QueryTransferOutInfoRequest
 * @return QueryTransferOutInfoResponse
 */
QueryTransferOutInfoResponse Client::queryTransferOutInfo(const QueryTransferOutInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTransferOutInfoWithOptions(request, runtime);
}

/**
 * @param request RegistrantProfileRealNameVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegistrantProfileRealNameVerificationResponse
 */
RegistrantProfileRealNameVerificationResponse Client::registrantProfileRealNameVerificationWithOptions(const RegistrantProfileRealNameVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityCredentialNo()) {
    query["IdentityCredentialNo"] = request.getIdentityCredentialNo();
  }

  if (!!request.hasIdentityCredentialType()) {
    query["IdentityCredentialType"] = request.getIdentityCredentialType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegistrantProfileID()) {
    query["RegistrantProfileID"] = request.getRegistrantProfileID();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  json body = {};
  if (!!request.hasIdentityCredential()) {
    body["IdentityCredential"] = request.getIdentityCredential();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RegistrantProfileRealNameVerification"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegistrantProfileRealNameVerificationResponse>();
}

/**
 * @param request RegistrantProfileRealNameVerificationRequest
 * @return RegistrantProfileRealNameVerificationResponse
 */
RegistrantProfileRealNameVerificationResponse Client::registrantProfileRealNameVerification(const RegistrantProfileRealNameVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registrantProfileRealNameVerificationWithOptions(request, runtime);
}

/**
 * @param request ResendEmailVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResendEmailVerificationResponse
 */
ResendEmailVerificationResponse Client::resendEmailVerificationWithOptions(const ResendEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResendEmailVerification"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResendEmailVerificationResponse>();
}

/**
 * @param request ResendEmailVerificationRequest
 * @return ResendEmailVerificationResponse
 */
ResendEmailVerificationResponse Client::resendEmailVerification(const ResendEmailVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resendEmailVerificationWithOptions(request, runtime);
}

/**
 * @param request SaveBatchTaskForCreatingOrderActivateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForCreatingOrderActivateResponse
 */
SaveBatchTaskForCreatingOrderActivateResponse Client::saveBatchTaskForCreatingOrderActivateWithOptions(const SaveBatchTaskForCreatingOrderActivateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrderActivateParam()) {
    query["OrderActivateParam"] = request.getOrderActivateParam();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.getPromotionNo();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.getUseCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.getUsePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveBatchTaskForCreatingOrderActivate"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchTaskForCreatingOrderActivateResponse>();
}

/**
 * @param request SaveBatchTaskForCreatingOrderActivateRequest
 * @return SaveBatchTaskForCreatingOrderActivateResponse
 */
SaveBatchTaskForCreatingOrderActivateResponse Client::saveBatchTaskForCreatingOrderActivate(const SaveBatchTaskForCreatingOrderActivateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForCreatingOrderActivateWithOptions(request, runtime);
}

/**
 * @param request SaveBatchTaskForCreatingOrderRedeemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForCreatingOrderRedeemResponse
 */
SaveBatchTaskForCreatingOrderRedeemResponse Client::saveBatchTaskForCreatingOrderRedeemWithOptions(const SaveBatchTaskForCreatingOrderRedeemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrderRedeemParam()) {
    query["OrderRedeemParam"] = request.getOrderRedeemParam();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.getPromotionNo();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.getUseCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.getUsePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveBatchTaskForCreatingOrderRedeem"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchTaskForCreatingOrderRedeemResponse>();
}

/**
 * @param request SaveBatchTaskForCreatingOrderRedeemRequest
 * @return SaveBatchTaskForCreatingOrderRedeemResponse
 */
SaveBatchTaskForCreatingOrderRedeemResponse Client::saveBatchTaskForCreatingOrderRedeem(const SaveBatchTaskForCreatingOrderRedeemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForCreatingOrderRedeemWithOptions(request, runtime);
}

/**
 * @param request SaveBatchTaskForCreatingOrderRenewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForCreatingOrderRenewResponse
 */
SaveBatchTaskForCreatingOrderRenewResponse Client::saveBatchTaskForCreatingOrderRenewWithOptions(const SaveBatchTaskForCreatingOrderRenewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrderRenewParam()) {
    query["OrderRenewParam"] = request.getOrderRenewParam();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.getPromotionNo();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.getUseCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.getUsePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveBatchTaskForCreatingOrderRenew"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchTaskForCreatingOrderRenewResponse>();
}

/**
 * @param request SaveBatchTaskForCreatingOrderRenewRequest
 * @return SaveBatchTaskForCreatingOrderRenewResponse
 */
SaveBatchTaskForCreatingOrderRenewResponse Client::saveBatchTaskForCreatingOrderRenew(const SaveBatchTaskForCreatingOrderRenewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForCreatingOrderRenewWithOptions(request, runtime);
}

/**
 * @param request SaveBatchTaskForCreatingOrderTransferRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForCreatingOrderTransferResponse
 */
SaveBatchTaskForCreatingOrderTransferResponse Client::saveBatchTaskForCreatingOrderTransferWithOptions(const SaveBatchTaskForCreatingOrderTransferRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrderTransferParam()) {
    query["OrderTransferParam"] = request.getOrderTransferParam();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.getPromotionNo();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.getUseCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.getUsePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveBatchTaskForCreatingOrderTransfer"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchTaskForCreatingOrderTransferResponse>();
}

/**
 * @param request SaveBatchTaskForCreatingOrderTransferRequest
 * @return SaveBatchTaskForCreatingOrderTransferResponse
 */
SaveBatchTaskForCreatingOrderTransferResponse Client::saveBatchTaskForCreatingOrderTransfer(const SaveBatchTaskForCreatingOrderTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForCreatingOrderTransferWithOptions(request, runtime);
}

/**
 * @param request SaveBatchTaskForDomainNameProxyServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForDomainNameProxyServiceResponse
 */
SaveBatchTaskForDomainNameProxyServiceResponse Client::saveBatchTaskForDomainNameProxyServiceWithOptions(const SaveBatchTaskForDomainNameProxyServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveBatchTaskForDomainNameProxyService"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchTaskForDomainNameProxyServiceResponse>();
}

/**
 * @param request SaveBatchTaskForDomainNameProxyServiceRequest
 * @return SaveBatchTaskForDomainNameProxyServiceResponse
 */
SaveBatchTaskForDomainNameProxyServiceResponse Client::saveBatchTaskForDomainNameProxyService(const SaveBatchTaskForDomainNameProxyServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForDomainNameProxyServiceWithOptions(request, runtime);
}

/**
 * @param request SaveBatchTaskForModifyingDomainDnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForModifyingDomainDnsResponse
 */
SaveBatchTaskForModifyingDomainDnsResponse Client::saveBatchTaskForModifyingDomainDnsWithOptions(const SaveBatchTaskForModifyingDomainDnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunDns()) {
    query["AliyunDns"] = request.getAliyunDns();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainNameServer()) {
    query["DomainNameServer"] = request.getDomainNameServer();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveBatchTaskForModifyingDomainDns"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchTaskForModifyingDomainDnsResponse>();
}

/**
 * @param request SaveBatchTaskForModifyingDomainDnsRequest
 * @return SaveBatchTaskForModifyingDomainDnsResponse
 */
SaveBatchTaskForModifyingDomainDnsResponse Client::saveBatchTaskForModifyingDomainDns(const SaveBatchTaskForModifyingDomainDnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForModifyingDomainDnsWithOptions(request, runtime);
}

/**
 * @summary 国际站删除抢注批量接口
 *
 * @param request SaveBatchTaskForReserveDropListDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForReserveDropListDomainResponse
 */
SaveBatchTaskForReserveDropListDomainResponse Client::saveBatchTaskForReserveDropListDomainWithOptions(const SaveBatchTaskForReserveDropListDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactTemplateId()) {
    query["ContactTemplateId"] = request.getContactTemplateId();
  }

  if (!!request.hasDomains()) {
    query["Domains"] = request.getDomains();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveBatchTaskForReserveDropListDomain"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchTaskForReserveDropListDomainResponse>();
}

/**
 * @summary 国际站删除抢注批量接口
 *
 * @param request SaveBatchTaskForReserveDropListDomainRequest
 * @return SaveBatchTaskForReserveDropListDomainResponse
 */
SaveBatchTaskForReserveDropListDomainResponse Client::saveBatchTaskForReserveDropListDomain(const SaveBatchTaskForReserveDropListDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForReserveDropListDomainWithOptions(request, runtime);
}

/**
 * @param request SaveBatchTaskForTransferProhibitionLockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForTransferProhibitionLockResponse
 */
SaveBatchTaskForTransferProhibitionLockResponse Client::saveBatchTaskForTransferProhibitionLockWithOptions(const SaveBatchTaskForTransferProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveBatchTaskForTransferProhibitionLock"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchTaskForTransferProhibitionLockResponse>();
}

/**
 * @param request SaveBatchTaskForTransferProhibitionLockRequest
 * @return SaveBatchTaskForTransferProhibitionLockResponse
 */
SaveBatchTaskForTransferProhibitionLockResponse Client::saveBatchTaskForTransferProhibitionLock(const SaveBatchTaskForTransferProhibitionLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForTransferProhibitionLockWithOptions(request, runtime);
}

/**
 * @param request SaveBatchTaskForUpdateProhibitionLockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForUpdateProhibitionLockResponse
 */
SaveBatchTaskForUpdateProhibitionLockResponse Client::saveBatchTaskForUpdateProhibitionLockWithOptions(const SaveBatchTaskForUpdateProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveBatchTaskForUpdateProhibitionLock"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchTaskForUpdateProhibitionLockResponse>();
}

/**
 * @param request SaveBatchTaskForUpdateProhibitionLockRequest
 * @return SaveBatchTaskForUpdateProhibitionLockResponse
 */
SaveBatchTaskForUpdateProhibitionLockResponse Client::saveBatchTaskForUpdateProhibitionLock(const SaveBatchTaskForUpdateProhibitionLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForUpdateProhibitionLockWithOptions(request, runtime);
}

/**
 * @param request SaveBatchTaskForUpdatingContactInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForUpdatingContactInfoResponse
 */
SaveBatchTaskForUpdatingContactInfoResponse Client::saveBatchTaskForUpdatingContactInfoWithOptions(const SaveBatchTaskForUpdatingContactInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddTransferLock()) {
    query["AddTransferLock"] = request.getAddTransferLock();
  }

  if (!!request.hasContactType()) {
    query["ContactType"] = request.getContactType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.getRegistrantProfileId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveBatchTaskForUpdatingContactInfo"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchTaskForUpdatingContactInfoResponse>();
}

/**
 * @param request SaveBatchTaskForUpdatingContactInfoRequest
 * @return SaveBatchTaskForUpdatingContactInfoResponse
 */
SaveBatchTaskForUpdatingContactInfoResponse Client::saveBatchTaskForUpdatingContactInfo(const SaveBatchTaskForUpdatingContactInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForUpdatingContactInfoWithOptions(request, runtime);
}

/**
 * @param request SaveBatchTaskForUpdatingContactInfoByNewContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForUpdatingContactInfoByNewContactResponse
 */
SaveBatchTaskForUpdatingContactInfoByNewContactResponse Client::saveBatchTaskForUpdatingContactInfoByNewContactWithOptions(const SaveBatchTaskForUpdatingContactInfoByNewContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasContactType()) {
    query["ContactType"] = request.getContactType();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPostalCode()) {
    query["PostalCode"] = request.getPostalCode();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.getProvince();
  }

  if (!!request.hasRegistrantName()) {
    query["RegistrantName"] = request.getRegistrantName();
  }

  if (!!request.hasRegistrantOrganization()) {
    query["RegistrantOrganization"] = request.getRegistrantOrganization();
  }

  if (!!request.hasTelArea()) {
    query["TelArea"] = request.getTelArea();
  }

  if (!!request.hasTelExt()) {
    query["TelExt"] = request.getTelExt();
  }

  if (!!request.hasTelephone()) {
    query["Telephone"] = request.getTelephone();
  }

  if (!!request.hasTransferOutProhibited()) {
    query["TransferOutProhibited"] = request.getTransferOutProhibited();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveBatchTaskForUpdatingContactInfoByNewContact"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchTaskForUpdatingContactInfoByNewContactResponse>();
}

/**
 * @param request SaveBatchTaskForUpdatingContactInfoByNewContactRequest
 * @return SaveBatchTaskForUpdatingContactInfoByNewContactResponse
 */
SaveBatchTaskForUpdatingContactInfoByNewContactResponse Client::saveBatchTaskForUpdatingContactInfoByNewContact(const SaveBatchTaskForUpdatingContactInfoByNewContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForUpdatingContactInfoByNewContactWithOptions(request, runtime);
}

/**
 * @param request SaveRegistrantProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveRegistrantProfileResponse
 */
SaveRegistrantProfileResponse Client::saveRegistrantProfileWithOptions(const SaveRegistrantProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasDefaultRegistrantProfile()) {
    query["DefaultRegistrantProfile"] = request.getDefaultRegistrantProfile();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPostalCode()) {
    query["PostalCode"] = request.getPostalCode();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.getProvince();
  }

  if (!!request.hasRegistrantName()) {
    query["RegistrantName"] = request.getRegistrantName();
  }

  if (!!request.hasRegistrantOrganization()) {
    query["RegistrantOrganization"] = request.getRegistrantOrganization();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.getRegistrantProfileId();
  }

  if (!!request.hasRegistrantProfileType()) {
    query["RegistrantProfileType"] = request.getRegistrantProfileType();
  }

  if (!!request.hasRegistrantType()) {
    query["RegistrantType"] = request.getRegistrantType();
  }

  if (!!request.hasTelArea()) {
    query["TelArea"] = request.getTelArea();
  }

  if (!!request.hasTelExt()) {
    query["TelExt"] = request.getTelExt();
  }

  if (!!request.hasTelephone()) {
    query["Telephone"] = request.getTelephone();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveRegistrantProfile"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveRegistrantProfileResponse>();
}

/**
 * @param request SaveRegistrantProfileRequest
 * @return SaveRegistrantProfileResponse
 */
SaveRegistrantProfileResponse Client::saveRegistrantProfile(const SaveRegistrantProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveRegistrantProfileWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForAddingDSRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForAddingDSRecordResponse
 */
SaveSingleTaskForAddingDSRecordResponse Client::saveSingleTaskForAddingDSRecordWithOptions(const SaveSingleTaskForAddingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasDigest()) {
    query["Digest"] = request.getDigest();
  }

  if (!!request.hasDigestType()) {
    query["DigestType"] = request.getDigestType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasKeyTag()) {
    query["KeyTag"] = request.getKeyTag();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForAddingDSRecord"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForAddingDSRecordResponse>();
}

/**
 * @param request SaveSingleTaskForAddingDSRecordRequest
 * @return SaveSingleTaskForAddingDSRecordResponse
 */
SaveSingleTaskForAddingDSRecordResponse Client::saveSingleTaskForAddingDSRecord(const SaveSingleTaskForAddingDSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForAddingDSRecordWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForApprovingTransferOutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForApprovingTransferOutResponse
 */
SaveSingleTaskForApprovingTransferOutResponse Client::saveSingleTaskForApprovingTransferOutWithOptions(const SaveSingleTaskForApprovingTransferOutRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForApprovingTransferOut"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForApprovingTransferOutResponse>();
}

/**
 * @param request SaveSingleTaskForApprovingTransferOutRequest
 * @return SaveSingleTaskForApprovingTransferOutResponse
 */
SaveSingleTaskForApprovingTransferOutResponse Client::saveSingleTaskForApprovingTransferOut(const SaveSingleTaskForApprovingTransferOutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForApprovingTransferOutWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForAssociatingEnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForAssociatingEnsResponse
 */
SaveSingleTaskForAssociatingEnsResponse Client::saveSingleTaskForAssociatingEnsWithOptions(const SaveSingleTaskForAssociatingEnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForAssociatingEns"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForAssociatingEnsResponse>();
}

/**
 * @param request SaveSingleTaskForAssociatingEnsRequest
 * @return SaveSingleTaskForAssociatingEnsResponse
 */
SaveSingleTaskForAssociatingEnsResponse Client::saveSingleTaskForAssociatingEns(const SaveSingleTaskForAssociatingEnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForAssociatingEnsWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForCancelingTransferInRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForCancelingTransferInResponse
 */
SaveSingleTaskForCancelingTransferInResponse Client::saveSingleTaskForCancelingTransferInWithOptions(const SaveSingleTaskForCancelingTransferInRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForCancelingTransferIn"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForCancelingTransferInResponse>();
}

/**
 * @param request SaveSingleTaskForCancelingTransferInRequest
 * @return SaveSingleTaskForCancelingTransferInResponse
 */
SaveSingleTaskForCancelingTransferInResponse Client::saveSingleTaskForCancelingTransferIn(const SaveSingleTaskForCancelingTransferInRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCancelingTransferInWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForCancelingTransferOutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForCancelingTransferOutResponse
 */
SaveSingleTaskForCancelingTransferOutResponse Client::saveSingleTaskForCancelingTransferOutWithOptions(const SaveSingleTaskForCancelingTransferOutRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForCancelingTransferOut"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForCancelingTransferOutResponse>();
}

/**
 * @param request SaveSingleTaskForCancelingTransferOutRequest
 * @return SaveSingleTaskForCancelingTransferOutResponse
 */
SaveSingleTaskForCancelingTransferOutResponse Client::saveSingleTaskForCancelingTransferOut(const SaveSingleTaskForCancelingTransferOutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCancelingTransferOutWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForCreatingDnsHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForCreatingDnsHostResponse
 */
SaveSingleTaskForCreatingDnsHostResponse Client::saveSingleTaskForCreatingDnsHostWithOptions(const SaveSingleTaskForCreatingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDnsName()) {
    query["DnsName"] = request.getDnsName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForCreatingDnsHost"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForCreatingDnsHostResponse>();
}

/**
 * @param request SaveSingleTaskForCreatingDnsHostRequest
 * @return SaveSingleTaskForCreatingDnsHostResponse
 */
SaveSingleTaskForCreatingDnsHostResponse Client::saveSingleTaskForCreatingDnsHost(const SaveSingleTaskForCreatingDnsHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCreatingDnsHostWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForCreatingOrderActivateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForCreatingOrderActivateResponse
 */
SaveSingleTaskForCreatingOrderActivateResponse Client::saveSingleTaskForCreatingOrderActivateWithOptions(const SaveSingleTaskForCreatingOrderActivateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasAliyunDns()) {
    query["AliyunDns"] = request.getAliyunDns();
  }

  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasDns1()) {
    query["Dns1"] = request.getDns1();
  }

  if (!!request.hasDns2()) {
    query["Dns2"] = request.getDns2();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasEnableDomainProxy()) {
    query["EnableDomainProxy"] = request.getEnableDomainProxy();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPermitPremiumActivation()) {
    query["PermitPremiumActivation"] = request.getPermitPremiumActivation();
  }

  if (!!request.hasPostalCode()) {
    query["PostalCode"] = request.getPostalCode();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.getPromotionNo();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.getProvince();
  }

  if (!!request.hasRegistrantName()) {
    query["RegistrantName"] = request.getRegistrantName();
  }

  if (!!request.hasRegistrantOrganization()) {
    query["RegistrantOrganization"] = request.getRegistrantOrganization();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.getRegistrantProfileId();
  }

  if (!!request.hasRegistrantType()) {
    query["RegistrantType"] = request.getRegistrantType();
  }

  if (!!request.hasSubscriptionDuration()) {
    query["SubscriptionDuration"] = request.getSubscriptionDuration();
  }

  if (!!request.hasTelArea()) {
    query["TelArea"] = request.getTelArea();
  }

  if (!!request.hasTelExt()) {
    query["TelExt"] = request.getTelExt();
  }

  if (!!request.hasTelephone()) {
    query["Telephone"] = request.getTelephone();
  }

  if (!!request.hasTrademarkDomainActivation()) {
    query["TrademarkDomainActivation"] = request.getTrademarkDomainActivation();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.getUseCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.getUsePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForCreatingOrderActivate"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForCreatingOrderActivateResponse>();
}

/**
 * @param request SaveSingleTaskForCreatingOrderActivateRequest
 * @return SaveSingleTaskForCreatingOrderActivateResponse
 */
SaveSingleTaskForCreatingOrderActivateResponse Client::saveSingleTaskForCreatingOrderActivate(const SaveSingleTaskForCreatingOrderActivateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCreatingOrderActivateWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForCreatingOrderRedeemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForCreatingOrderRedeemResponse
 */
SaveSingleTaskForCreatingOrderRedeemResponse Client::saveSingleTaskForCreatingOrderRedeemWithOptions(const SaveSingleTaskForCreatingOrderRedeemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasCurrentExpirationDate()) {
    query["CurrentExpirationDate"] = request.getCurrentExpirationDate();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.getPromotionNo();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.getUseCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.getUsePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForCreatingOrderRedeem"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForCreatingOrderRedeemResponse>();
}

/**
 * @param request SaveSingleTaskForCreatingOrderRedeemRequest
 * @return SaveSingleTaskForCreatingOrderRedeemResponse
 */
SaveSingleTaskForCreatingOrderRedeemResponse Client::saveSingleTaskForCreatingOrderRedeem(const SaveSingleTaskForCreatingOrderRedeemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCreatingOrderRedeemWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForCreatingOrderRenewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForCreatingOrderRenewResponse
 */
SaveSingleTaskForCreatingOrderRenewResponse Client::saveSingleTaskForCreatingOrderRenewWithOptions(const SaveSingleTaskForCreatingOrderRenewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasCurrentExpirationDate()) {
    query["CurrentExpirationDate"] = request.getCurrentExpirationDate();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.getPromotionNo();
  }

  if (!!request.hasSubscriptionDuration()) {
    query["SubscriptionDuration"] = request.getSubscriptionDuration();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.getUseCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.getUsePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForCreatingOrderRenew"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForCreatingOrderRenewResponse>();
}

/**
 * @param request SaveSingleTaskForCreatingOrderRenewRequest
 * @return SaveSingleTaskForCreatingOrderRenewResponse
 */
SaveSingleTaskForCreatingOrderRenewResponse Client::saveSingleTaskForCreatingOrderRenew(const SaveSingleTaskForCreatingOrderRenewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCreatingOrderRenewWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForCreatingOrderTransferRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForCreatingOrderTransferResponse
 */
SaveSingleTaskForCreatingOrderTransferResponse Client::saveSingleTaskForCreatingOrderTransferWithOptions(const SaveSingleTaskForCreatingOrderTransferRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationCode()) {
    query["AuthorizationCode"] = request.getAuthorizationCode();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.getCouponNo();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPermitPremiumTransfer()) {
    query["PermitPremiumTransfer"] = request.getPermitPremiumTransfer();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.getPromotionNo();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.getRegistrantProfileId();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.getUseCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.getUsePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForCreatingOrderTransfer"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForCreatingOrderTransferResponse>();
}

/**
 * @param request SaveSingleTaskForCreatingOrderTransferRequest
 * @return SaveSingleTaskForCreatingOrderTransferResponse
 */
SaveSingleTaskForCreatingOrderTransferResponse Client::saveSingleTaskForCreatingOrderTransfer(const SaveSingleTaskForCreatingOrderTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCreatingOrderTransferWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForDeletingDSRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForDeletingDSRecordResponse
 */
SaveSingleTaskForDeletingDSRecordResponse Client::saveSingleTaskForDeletingDSRecordWithOptions(const SaveSingleTaskForDeletingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasKeyTag()) {
    query["KeyTag"] = request.getKeyTag();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForDeletingDSRecord"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForDeletingDSRecordResponse>();
}

/**
 * @param request SaveSingleTaskForDeletingDSRecordRequest
 * @return SaveSingleTaskForDeletingDSRecordResponse
 */
SaveSingleTaskForDeletingDSRecordResponse Client::saveSingleTaskForDeletingDSRecord(const SaveSingleTaskForDeletingDSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForDeletingDSRecordWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForDeletingDnsHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForDeletingDnsHostResponse
 */
SaveSingleTaskForDeletingDnsHostResponse Client::saveSingleTaskForDeletingDnsHostWithOptions(const SaveSingleTaskForDeletingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDnsName()) {
    query["DnsName"] = request.getDnsName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForDeletingDnsHost"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForDeletingDnsHostResponse>();
}

/**
 * @param request SaveSingleTaskForDeletingDnsHostRequest
 * @return SaveSingleTaskForDeletingDnsHostResponse
 */
SaveSingleTaskForDeletingDnsHostResponse Client::saveSingleTaskForDeletingDnsHost(const SaveSingleTaskForDeletingDnsHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForDeletingDnsHostWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForDisassociatingEnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForDisassociatingEnsResponse
 */
SaveSingleTaskForDisassociatingEnsResponse Client::saveSingleTaskForDisassociatingEnsWithOptions(const SaveSingleTaskForDisassociatingEnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForDisassociatingEns"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForDisassociatingEnsResponse>();
}

/**
 * @param request SaveSingleTaskForDisassociatingEnsRequest
 * @return SaveSingleTaskForDisassociatingEnsResponse
 */
SaveSingleTaskForDisassociatingEnsResponse Client::saveSingleTaskForDisassociatingEns(const SaveSingleTaskForDisassociatingEnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForDisassociatingEnsWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForDomainNameProxyServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForDomainNameProxyServiceResponse
 */
SaveSingleTaskForDomainNameProxyServiceResponse Client::saveSingleTaskForDomainNameProxyServiceWithOptions(const SaveSingleTaskForDomainNameProxyServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForDomainNameProxyService"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForDomainNameProxyServiceResponse>();
}

/**
 * @param request SaveSingleTaskForDomainNameProxyServiceRequest
 * @return SaveSingleTaskForDomainNameProxyServiceResponse
 */
SaveSingleTaskForDomainNameProxyServiceResponse Client::saveSingleTaskForDomainNameProxyService(const SaveSingleTaskForDomainNameProxyServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForDomainNameProxyServiceWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForModifyingDSRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForModifyingDSRecordResponse
 */
SaveSingleTaskForModifyingDSRecordResponse Client::saveSingleTaskForModifyingDSRecordWithOptions(const SaveSingleTaskForModifyingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasDigest()) {
    query["Digest"] = request.getDigest();
  }

  if (!!request.hasDigestType()) {
    query["DigestType"] = request.getDigestType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasKeyTag()) {
    query["KeyTag"] = request.getKeyTag();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForModifyingDSRecord"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForModifyingDSRecordResponse>();
}

/**
 * @param request SaveSingleTaskForModifyingDSRecordRequest
 * @return SaveSingleTaskForModifyingDSRecordResponse
 */
SaveSingleTaskForModifyingDSRecordResponse Client::saveSingleTaskForModifyingDSRecord(const SaveSingleTaskForModifyingDSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForModifyingDSRecordWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForModifyingDnsHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForModifyingDnsHostResponse
 */
SaveSingleTaskForModifyingDnsHostResponse Client::saveSingleTaskForModifyingDnsHostWithOptions(const SaveSingleTaskForModifyingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDnsName()) {
    query["DnsName"] = request.getDnsName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForModifyingDnsHost"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForModifyingDnsHostResponse>();
}

/**
 * @param request SaveSingleTaskForModifyingDnsHostRequest
 * @return SaveSingleTaskForModifyingDnsHostResponse
 */
SaveSingleTaskForModifyingDnsHostResponse Client::saveSingleTaskForModifyingDnsHost(const SaveSingleTaskForModifyingDnsHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForModifyingDnsHostWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForQueryingTransferAuthorizationCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForQueryingTransferAuthorizationCodeResponse
 */
SaveSingleTaskForQueryingTransferAuthorizationCodeResponse Client::saveSingleTaskForQueryingTransferAuthorizationCodeWithOptions(const SaveSingleTaskForQueryingTransferAuthorizationCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForQueryingTransferAuthorizationCode"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForQueryingTransferAuthorizationCodeResponse>();
}

/**
 * @param request SaveSingleTaskForQueryingTransferAuthorizationCodeRequest
 * @return SaveSingleTaskForQueryingTransferAuthorizationCodeResponse
 */
SaveSingleTaskForQueryingTransferAuthorizationCodeResponse Client::saveSingleTaskForQueryingTransferAuthorizationCode(const SaveSingleTaskForQueryingTransferAuthorizationCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForQueryingTransferAuthorizationCodeWithOptions(request, runtime);
}

/**
 * @summary 单笔抢注批量接口
 *
 * @param request SaveSingleTaskForReserveDropListDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForReserveDropListDomainResponse
 */
SaveSingleTaskForReserveDropListDomainResponse Client::saveSingleTaskForReserveDropListDomainWithOptions(const SaveSingleTaskForReserveDropListDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactTemplateId()) {
    query["ContactTemplateId"] = request.getContactTemplateId();
  }

  if (!!request.hasDns1()) {
    query["Dns1"] = request.getDns1();
  }

  if (!!request.hasDns2()) {
    query["Dns2"] = request.getDns2();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForReserveDropListDomain"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForReserveDropListDomainResponse>();
}

/**
 * @summary 单笔抢注批量接口
 *
 * @param request SaveSingleTaskForReserveDropListDomainRequest
 * @return SaveSingleTaskForReserveDropListDomainResponse
 */
SaveSingleTaskForReserveDropListDomainResponse Client::saveSingleTaskForReserveDropListDomain(const SaveSingleTaskForReserveDropListDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForReserveDropListDomainWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForSaveArtExtensionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForSaveArtExtensionResponse
 */
SaveSingleTaskForSaveArtExtensionResponse Client::saveSingleTaskForSaveArtExtensionWithOptions(const SaveSingleTaskForSaveArtExtensionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDateOrPeriod()) {
    query["DateOrPeriod"] = request.getDateOrPeriod();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.getDimensions();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasFeatures()) {
    query["Features"] = request.getFeatures();
  }

  if (!!request.hasInscriptionsAndMarkings()) {
    query["InscriptionsAndMarkings"] = request.getInscriptionsAndMarkings();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMaker()) {
    query["Maker"] = request.getMaker();
  }

  if (!!request.hasMaterialsAndTechniques()) {
    query["MaterialsAndTechniques"] = request.getMaterialsAndTechniques();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
  }

  if (!!request.hasReference()) {
    query["Reference"] = request.getReference();
  }

  if (!!request.hasSubject()) {
    query["Subject"] = request.getSubject();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForSaveArtExtension"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForSaveArtExtensionResponse>();
}

/**
 * @param request SaveSingleTaskForSaveArtExtensionRequest
 * @return SaveSingleTaskForSaveArtExtensionResponse
 */
SaveSingleTaskForSaveArtExtensionResponse Client::saveSingleTaskForSaveArtExtension(const SaveSingleTaskForSaveArtExtensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForSaveArtExtensionWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForSynchronizingDSRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForSynchronizingDSRecordResponse
 */
SaveSingleTaskForSynchronizingDSRecordResponse Client::saveSingleTaskForSynchronizingDSRecordWithOptions(const SaveSingleTaskForSynchronizingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForSynchronizingDSRecord"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForSynchronizingDSRecordResponse>();
}

/**
 * @param request SaveSingleTaskForSynchronizingDSRecordRequest
 * @return SaveSingleTaskForSynchronizingDSRecordResponse
 */
SaveSingleTaskForSynchronizingDSRecordResponse Client::saveSingleTaskForSynchronizingDSRecord(const SaveSingleTaskForSynchronizingDSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForSynchronizingDSRecordWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForSynchronizingDnsHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForSynchronizingDnsHostResponse
 */
SaveSingleTaskForSynchronizingDnsHostResponse Client::saveSingleTaskForSynchronizingDnsHostWithOptions(const SaveSingleTaskForSynchronizingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForSynchronizingDnsHost"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForSynchronizingDnsHostResponse>();
}

/**
 * @param request SaveSingleTaskForSynchronizingDnsHostRequest
 * @return SaveSingleTaskForSynchronizingDnsHostResponse
 */
SaveSingleTaskForSynchronizingDnsHostResponse Client::saveSingleTaskForSynchronizingDnsHost(const SaveSingleTaskForSynchronizingDnsHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForSynchronizingDnsHostWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForTransferProhibitionLockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForTransferProhibitionLockResponse
 */
SaveSingleTaskForTransferProhibitionLockResponse Client::saveSingleTaskForTransferProhibitionLockWithOptions(const SaveSingleTaskForTransferProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForTransferProhibitionLock"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForTransferProhibitionLockResponse>();
}

/**
 * @param request SaveSingleTaskForTransferProhibitionLockRequest
 * @return SaveSingleTaskForTransferProhibitionLockResponse
 */
SaveSingleTaskForTransferProhibitionLockResponse Client::saveSingleTaskForTransferProhibitionLock(const SaveSingleTaskForTransferProhibitionLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForTransferProhibitionLockWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForUpdateProhibitionLockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForUpdateProhibitionLockResponse
 */
SaveSingleTaskForUpdateProhibitionLockResponse Client::saveSingleTaskForUpdateProhibitionLockWithOptions(const SaveSingleTaskForUpdateProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForUpdateProhibitionLock"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForUpdateProhibitionLockResponse>();
}

/**
 * @param request SaveSingleTaskForUpdateProhibitionLockRequest
 * @return SaveSingleTaskForUpdateProhibitionLockResponse
 */
SaveSingleTaskForUpdateProhibitionLockResponse Client::saveSingleTaskForUpdateProhibitionLock(const SaveSingleTaskForUpdateProhibitionLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForUpdateProhibitionLockWithOptions(request, runtime);
}

/**
 * @param request SaveSingleTaskForUpdatingContactInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForUpdatingContactInfoResponse
 */
SaveSingleTaskForUpdatingContactInfoResponse Client::saveSingleTaskForUpdatingContactInfoWithOptions(const SaveSingleTaskForUpdatingContactInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddTransferLock()) {
    query["AddTransferLock"] = request.getAddTransferLock();
  }

  if (!!request.hasContactType()) {
    query["ContactType"] = request.getContactType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.getRegistrantProfileId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForUpdatingContactInfo"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForUpdatingContactInfoResponse>();
}

/**
 * @param request SaveSingleTaskForUpdatingContactInfoRequest
 * @return SaveSingleTaskForUpdatingContactInfoResponse
 */
SaveSingleTaskForUpdatingContactInfoResponse Client::saveSingleTaskForUpdatingContactInfo(const SaveSingleTaskForUpdatingContactInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForUpdatingContactInfoWithOptions(request, runtime);
}

/**
 * @param request SaveTaskForSubmittingDomainDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTaskForSubmittingDomainDeleteResponse
 */
SaveTaskForSubmittingDomainDeleteResponse Client::saveTaskForSubmittingDomainDeleteWithOptions(const SaveTaskForSubmittingDomainDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveTaskForSubmittingDomainDelete"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveTaskForSubmittingDomainDeleteResponse>();
}

/**
 * @param request SaveTaskForSubmittingDomainDeleteRequest
 * @return SaveTaskForSubmittingDomainDeleteResponse
 */
SaveTaskForSubmittingDomainDeleteResponse Client::saveTaskForSubmittingDomainDelete(const SaveTaskForSubmittingDomainDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForSubmittingDomainDeleteWithOptions(request, runtime);
}

/**
 * @param request SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse
 */
SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse Client::saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialWithOptions(const SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasIdentityCredentialNo()) {
    query["IdentityCredentialNo"] = request.getIdentityCredentialNo();
  }

  if (!!request.hasIdentityCredentialType()) {
    query["IdentityCredentialType"] = request.getIdentityCredentialType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  json body = {};
  if (!!request.hasIdentityCredential()) {
    body["IdentityCredential"] = request.getIdentityCredential();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredential"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse>();
}

/**
 * @param request SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest
 * @return SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse
 */
SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse Client::saveTaskForSubmittingDomainRealNameVerificationByIdentityCredential(const SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialWithOptions(request, runtime);
}

/**
 * @param request SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse
 */
SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse Client::saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDWithOptions(const SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.getRegistrantProfileId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileID"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse>();
}

/**
 * @param request SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest
 * @return SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse
 */
SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse Client::saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileID(const SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDWithOptions(request, runtime);
}

/**
 * @param request SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse
 */
SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse Client::saveTaskForUpdatingRegistrantInfoByIdentityCredentialWithOptions(const SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasIdentityCredentialNo()) {
    query["IdentityCredentialNo"] = request.getIdentityCredentialNo();
  }

  if (!!request.hasIdentityCredentialType()) {
    query["IdentityCredentialType"] = request.getIdentityCredentialType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPostalCode()) {
    query["PostalCode"] = request.getPostalCode();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.getProvince();
  }

  if (!!request.hasRegistrantName()) {
    query["RegistrantName"] = request.getRegistrantName();
  }

  if (!!request.hasRegistrantOrganization()) {
    query["RegistrantOrganization"] = request.getRegistrantOrganization();
  }

  if (!!request.hasRegistrantType()) {
    query["RegistrantType"] = request.getRegistrantType();
  }

  if (!!request.hasTelArea()) {
    query["TelArea"] = request.getTelArea();
  }

  if (!!request.hasTelExt()) {
    query["TelExt"] = request.getTelExt();
  }

  if (!!request.hasTelephone()) {
    query["Telephone"] = request.getTelephone();
  }

  if (!!request.hasTransferOutProhibited()) {
    query["TransferOutProhibited"] = request.getTransferOutProhibited();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  json body = {};
  if (!!request.hasIdentityCredential()) {
    body["IdentityCredential"] = request.getIdentityCredential();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveTaskForUpdatingRegistrantInfoByIdentityCredential"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse>();
}

/**
 * @param request SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest
 * @return SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse
 */
SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse Client::saveTaskForUpdatingRegistrantInfoByIdentityCredential(const SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForUpdatingRegistrantInfoByIdentityCredentialWithOptions(request, runtime);
}

/**
 * @param request SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse
 */
SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse Client::saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDWithOptions(const SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.getRegistrantProfileId();
  }

  if (!!request.hasTransferOutProhibited()) {
    query["TransferOutProhibited"] = request.getTransferOutProhibited();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveTaskForUpdatingRegistrantInfoByRegistrantProfileID"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse>();
}

/**
 * @param request SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest
 * @return SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse
 */
SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse Client::saveTaskForUpdatingRegistrantInfoByRegistrantProfileID(const SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDWithOptions(request, runtime);
}

/**
 * @param request SubmitEmailVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitEmailVerificationResponse
 */
SubmitEmailVerificationResponse Client::submitEmailVerificationWithOptions(const SubmitEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSendIfExist()) {
    query["SendIfExist"] = request.getSendIfExist();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitEmailVerification"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitEmailVerificationResponse>();
}

/**
 * @param request SubmitEmailVerificationRequest
 * @return SubmitEmailVerificationResponse
 */
SubmitEmailVerificationResponse Client::submitEmailVerification(const SubmitEmailVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitEmailVerificationWithOptions(request, runtime);
}

/**
 * @param request TransferInCheckMailTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferInCheckMailTokenResponse
 */
TransferInCheckMailTokenResponse Client::transferInCheckMailTokenWithOptions(const TransferInCheckMailTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferInCheckMailToken"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferInCheckMailTokenResponse>();
}

/**
 * @param request TransferInCheckMailTokenRequest
 * @return TransferInCheckMailTokenResponse
 */
TransferInCheckMailTokenResponse Client::transferInCheckMailToken(const TransferInCheckMailTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferInCheckMailTokenWithOptions(request, runtime);
}

/**
 * @param request TransferInReenterTransferAuthorizationCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferInReenterTransferAuthorizationCodeResponse
 */
TransferInReenterTransferAuthorizationCodeResponse Client::transferInReenterTransferAuthorizationCodeWithOptions(const TransferInReenterTransferAuthorizationCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTransferAuthorizationCode()) {
    query["TransferAuthorizationCode"] = request.getTransferAuthorizationCode();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferInReenterTransferAuthorizationCode"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferInReenterTransferAuthorizationCodeResponse>();
}

/**
 * @param request TransferInReenterTransferAuthorizationCodeRequest
 * @return TransferInReenterTransferAuthorizationCodeResponse
 */
TransferInReenterTransferAuthorizationCodeResponse Client::transferInReenterTransferAuthorizationCode(const TransferInReenterTransferAuthorizationCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferInReenterTransferAuthorizationCodeWithOptions(request, runtime);
}

/**
 * @param request TransferInRefetchWhoisEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferInRefetchWhoisEmailResponse
 */
TransferInRefetchWhoisEmailResponse Client::transferInRefetchWhoisEmailWithOptions(const TransferInRefetchWhoisEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferInRefetchWhoisEmail"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferInRefetchWhoisEmailResponse>();
}

/**
 * @param request TransferInRefetchWhoisEmailRequest
 * @return TransferInRefetchWhoisEmailResponse
 */
TransferInRefetchWhoisEmailResponse Client::transferInRefetchWhoisEmail(const TransferInRefetchWhoisEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferInRefetchWhoisEmailWithOptions(request, runtime);
}

/**
 * @param request TransferInResendMailTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferInResendMailTokenResponse
 */
TransferInResendMailTokenResponse Client::transferInResendMailTokenWithOptions(const TransferInResendMailTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferInResendMailToken"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferInResendMailTokenResponse>();
}

/**
 * @param request TransferInResendMailTokenRequest
 * @return TransferInResendMailTokenResponse
 */
TransferInResendMailTokenResponse Client::transferInResendMailToken(const TransferInResendMailTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferInResendMailTokenWithOptions(request, runtime);
}

/**
 * @param request VerifyContactFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyContactFieldResponse
 */
VerifyContactFieldResponse Client::verifyContactFieldWithOptions(const VerifyContactFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPostalCode()) {
    query["PostalCode"] = request.getPostalCode();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.getProvince();
  }

  if (!!request.hasRegistrantName()) {
    query["RegistrantName"] = request.getRegistrantName();
  }

  if (!!request.hasRegistrantOrganization()) {
    query["RegistrantOrganization"] = request.getRegistrantOrganization();
  }

  if (!!request.hasRegistrantType()) {
    query["RegistrantType"] = request.getRegistrantType();
  }

  if (!!request.hasTelArea()) {
    query["TelArea"] = request.getTelArea();
  }

  if (!!request.hasTelExt()) {
    query["TelExt"] = request.getTelExt();
  }

  if (!!request.hasTelephone()) {
    query["Telephone"] = request.getTelephone();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyContactField"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyContactFieldResponse>();
}

/**
 * @param request VerifyContactFieldRequest
 * @return VerifyContactFieldResponse
 */
VerifyContactFieldResponse Client::verifyContactField(const VerifyContactFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyContactFieldWithOptions(request, runtime);
}

/**
 * @param request VerifyEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyEmailResponse
 */
VerifyEmailResponse Client::verifyEmailWithOptions(const VerifyEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyEmail"},
    {"version" , "2017-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyEmailResponse>();
}

/**
 * @param request VerifyEmailRequest
 * @return VerifyEmailResponse
 */
VerifyEmailResponse Client::verifyEmail(const VerifyEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyEmailWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace DomainIntl20171218