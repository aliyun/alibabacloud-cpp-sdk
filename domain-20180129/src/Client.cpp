#include <darabonba/Core.hpp>
#include <alibabacloud/Domain20180129.hpp>
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
using namespace AlibabaCloud::Domain20180129::Models;
namespace AlibabaCloud
{
namespace Domain20180129
{

AlibabaCloud::Domain20180129::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  this->_endpointMap = json({
    {"ap-southeast-1" , "domain-intl.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("domain", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Invoke AcknowledgeTaskResult to confirm the task detail result.
 *
 * @description After the task detail result is confirmed, it can no longer be queried from the [PollTaskResult](https://help.aliyun.com/document_detail/69361.html) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke AcknowledgeTaskResult to confirm the task detail result.
 *
 * @description After the task detail result is confirmed, it can no longer be queried from the [PollTaskResult](https://help.aliyun.com/document_detail/69361.html) API.
 *
 * @param request AcknowledgeTaskResultRequest
 * @return AcknowledgeTaskResultResponse
 */
AcknowledgeTaskResultResponse Client::acknowledgeTaskResult(const AcknowledgeTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acknowledgeTaskResultWithOptions(request, runtime);
}

/**
 * @summary You can invoke BatchFuzzyMatchDomainSensitiveWord to batch check whether domain names contain sensitive words.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary You can invoke BatchFuzzyMatchDomainSensitiveWord to batch check whether domain names contain sensitive words.
 *
 * @param request BatchFuzzyMatchDomainSensitiveWordRequest
 * @return BatchFuzzyMatchDomainSensitiveWordResponse
 */
BatchFuzzyMatchDomainSensitiveWordResponse Client::batchFuzzyMatchDomainSensitiveWord(const BatchFuzzyMatchDomainSensitiveWordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchFuzzyMatchDomainSensitiveWordWithOptions(request, runtime);
}

/**
 * @summary Cancels real-name verification for a domain name.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Cancels real-name verification for a domain name.
 *
 * @param request CancelDomainVerificationRequest
 * @return CancelDomainVerificationResponse
 */
CancelDomainVerificationResponse Client::cancelDomainVerification(const CancelDomainVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelDomainVerificationWithOptions(request, runtime);
}

/**
 * @summary Invoke the CancelOperationAudit API to cancel a self-service operation audit.
 *
 * @param request CancelOperationAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelOperationAuditResponse
 */
CancelOperationAuditResponse Client::cancelOperationAuditWithOptions(const CancelOperationAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditRecordId()) {
    query["AuditRecordId"] = request.getAuditRecordId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelOperationAudit"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelOperationAuditResponse>();
}

/**
 * @summary Invoke the CancelOperationAudit API to cancel a self-service operation audit.
 *
 * @param request CancelOperationAuditRequest
 * @return CancelOperationAuditResponse
 */
CancelOperationAuditResponse Client::cancelOperationAudit(const CancelOperationAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelOperationAuditWithOptions(request, runtime);
}

/**
 * @summary Cancel the qualification verification for ".restaurant" and ".trademark" domain names.
 *
 * @param request CancelQualificationVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelQualificationVerificationResponse
 */
CancelQualificationVerificationResponse Client::cancelQualificationVerificationWithOptions(const CancelQualificationVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasQualificationType()) {
    query["QualificationType"] = request.getQualificationType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelQualificationVerification"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelQualificationVerificationResponse>();
}

/**
 * @summary Cancel the qualification verification for ".restaurant" and ".trademark" domain names.
 *
 * @param request CancelQualificationVerificationRequest
 * @return CancelQualificationVerificationResponse
 */
CancelQualificationVerificationResponse Client::cancelQualificationVerification(const CancelQualificationVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelQualificationVerificationWithOptions(request, runtime);
}

/**
 * @summary Invoke CancelTask to cancel an ongoing job.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke CancelTask to cancel an ongoing job.
 *
 * @param request CancelTaskRequest
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTask(const CancelTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelTaskWithOptions(request, runtime);
}

/**
 * @summary Modify the resource group to which a domain name belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Modify the resource group to which a domain name belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Invoke the CheckDomain API to check whether a domain name can be registered.
 *
 * @description For the legitimacy requirements of domain names, see [Domain Name Legitimacy](https://help.aliyun.com/document_detail/67788.html).
 * > The CheckDomain API has a frequency limit. The combined queries per second (QPS) limit for an Alibaba Cloud account and its RAM users is 10, and the total QPS limit for this API is 100.
 *
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDomain"},
    {"version" , "2018-01-29"},
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
 * @summary Invoke the CheckDomain API to check whether a domain name can be registered.
 *
 * @description For the legitimacy requirements of domain names, see [Domain Name Legitimacy](https://help.aliyun.com/document_detail/67788.html).
 * > The CheckDomain API has a frequency limit. The combined queries per second (QPS) limit for an Alibaba Cloud account and its RAM users is 10, and the total QPS limit for this API is 100.
 *
 * @param request CheckDomainRequest
 * @return CheckDomainResponse
 */
CheckDomainResponse Client::checkDomain(const CheckDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDomainWithOptions(request, runtime);
}

/**
 * @summary Query the trademark keyword key based on the provided domain name.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Query the trademark keyword key based on the provided domain name.
 *
 * @param request CheckDomainSunriseClaimRequest
 * @return CheckDomainSunriseClaimResponse
 */
CheckDomainSunriseClaimResponse Client::checkDomainSunriseClaim(const CheckDomainSunriseClaimRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDomainSunriseClaimWithOptions(request, runtime);
}

/**
 * @summary Calls CheckIntlFixPriceDomainStatus to check the status and price of an international fixed-price domain name that is on sale.
 *
 * @param request CheckIntlFixPriceDomainStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckIntlFixPriceDomainStatusResponse
 */
CheckIntlFixPriceDomainStatusResponse Client::checkIntlFixPriceDomainStatusWithOptions(const CheckIntlFixPriceDomainStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckIntlFixPriceDomainStatus"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckIntlFixPriceDomainStatusResponse>();
}

/**
 * @summary Calls CheckIntlFixPriceDomainStatus to check the status and price of an international fixed-price domain name that is on sale.
 *
 * @param request CheckIntlFixPriceDomainStatusRequest
 * @return CheckIntlFixPriceDomainStatusResponse
 */
CheckIntlFixPriceDomainStatusResponse Client::checkIntlFixPriceDomainStatus(const CheckIntlFixPriceDomainStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkIntlFixPriceDomainStatusWithOptions(request, runtime);
}

/**
 * @summary Detects the maximum number of years for which a domain name can be purchased or renewed.
 *
 * @param request CheckMaxYearOfServerLockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckMaxYearOfServerLockResponse
 */
CheckMaxYearOfServerLockResponse Client::checkMaxYearOfServerLockWithOptions(const CheckMaxYearOfServerLockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckAction()) {
    query["CheckAction"] = request.getCheckAction();
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
    {"action" , "CheckMaxYearOfServerLock"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckMaxYearOfServerLockResponse>();
}

/**
 * @summary Detects the maximum number of years for which a domain name can be purchased or renewed.
 *
 * @param request CheckMaxYearOfServerLockRequest
 * @return CheckMaxYearOfServerLockResponse
 */
CheckMaxYearOfServerLockResponse Client::checkMaxYearOfServerLock(const CheckMaxYearOfServerLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkMaxYearOfServerLockWithOptions(request, runtime);
}

/**
 * @summary Checks whether the domain name has a registry lock service request with the **Processing** status at the domain name registry.
 *
 * @param request CheckProcessingServerLockApplyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckProcessingServerLockApplyResponse
 */
CheckProcessingServerLockApplyResponse Client::checkProcessingServerLockApplyWithOptions(const CheckProcessingServerLockApplyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
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
    {"action" , "CheckProcessingServerLockApply"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckProcessingServerLockApplyResponse>();
}

/**
 * @summary Checks whether the domain name has a registry lock service request with the **Processing** status at the domain name registry.
 *
 * @param request CheckProcessingServerLockApplyRequest
 * @return CheckProcessingServerLockApplyResponse
 */
CheckProcessingServerLockApplyResponse Client::checkProcessingServerLockApply(const CheckProcessingServerLockApplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkProcessingServerLockApplyWithOptions(request, runtime);
}

/**
 * @summary Invoke the CheckTransferInFeasibility API to validate whether a domain name can be transferred in.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the CheckTransferInFeasibility API to validate whether a domain name can be transferred in.
 *
 * @param request CheckTransferInFeasibilityRequest
 * @return CheckTransferInFeasibilityResponse
 */
CheckTransferInFeasibilityResponse Client::checkTransferInFeasibility(const CheckTransferInFeasibilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkTransferInFeasibilityWithOptions(request, runtime);
}

/**
 * @summary Invoke ConfirmTransferInEmail to confirm the transfer-in mailbox.
 *
 * @description Directly confirm the transfer-in mailbox.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke ConfirmTransferInEmail to confirm the transfer-in mailbox.
 *
 * @description Directly confirm the transfer-in mailbox.
 *
 * @param request ConfirmTransferInEmailRequest
 * @return ConfirmTransferInEmailResponse
 */
ConfirmTransferInEmailResponse Client::confirmTransferInEmail(const ConfirmTransferInEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return confirmTransferInEmailWithOptions(request, runtime);
}

/**
 * @summary Creates an international fixed-price domain name order by calling CreateIntlFixedPriceDomainOrder.
 *
 * @param request CreateIntlFixedPriceDomainOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIntlFixedPriceDomainOrderResponse
 */
CreateIntlFixedPriceDomainOrderResponse Client::createIntlFixedPriceDomainOrderWithOptions(const CreateIntlFixedPriceDomainOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasExpectedPrice()) {
    query["ExpectedPrice"] = request.getExpectedPrice();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIntlFixedPriceDomainOrder"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIntlFixedPriceDomainOrderResponse>();
}

/**
 * @summary Creates an international fixed-price domain name order by calling CreateIntlFixedPriceDomainOrder.
 *
 * @param request CreateIntlFixedPriceDomainOrderRequest
 * @return CreateIntlFixedPriceDomainOrderResponse
 */
CreateIntlFixedPriceDomainOrderResponse Client::createIntlFixedPriceDomainOrder(const CreateIntlFixedPriceDomainOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIntlFixedPriceDomainOrderWithOptions(request, runtime);
}

/**
 * @summary Batch delete domain contact templates.
 *
 * @param request DeleteContactTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactTemplatesResponse
 */
DeleteContactTemplatesResponse Client::deleteContactTemplatesWithOptions(const DeleteContactTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegistrantProfileIds()) {
    query["RegistrantProfileIds"] = request.getRegistrantProfileIds();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContactTemplates"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContactTemplatesResponse>();
}

/**
 * @summary Batch delete domain contact templates.
 *
 * @param request DeleteContactTemplatesRequest
 * @return DeleteContactTemplatesResponse
 */
DeleteContactTemplatesResponse Client::deleteContactTemplates(const DeleteContactTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactTemplatesWithOptions(request, runtime);
}

/**
 * @summary Deleting a group containing more than 1,000 domain names is an asynchronous procedure. You must wait for the system to process the request.
 *
 * @param request DeleteDomainGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainGroupResponse
 */
DeleteDomainGroupResponse Client::deleteDomainGroupWithOptions(const DeleteDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainGroupId()) {
    query["DomainGroupId"] = request.getDomainGroupId();
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
    {"action" , "DeleteDomainGroup"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDomainGroupResponse>();
}

/**
 * @summary Deleting a group containing more than 1,000 domain names is an asynchronous procedure. You must wait for the system to process the request.
 *
 * @param request DeleteDomainGroupRequest
 * @return DeleteDomainGroupResponse
 */
DeleteDomainGroupResponse Client::deleteDomainGroup(const DeleteDomainGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainGroupWithOptions(request, runtime);
}

/**
 * @summary Invoke the DeleteEmailVerification API to delete an email address that has passed verification.
 *
 * @description > If you want to use the email address again after deletion, you must complete email verification again.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the DeleteEmailVerification API to delete an email address that has passed verification.
 *
 * @description > If you want to use the email address again after deletion, you must complete email verification again.
 *
 * @param request DeleteEmailVerificationRequest
 * @return DeleteEmailVerificationResponse
 */
DeleteEmailVerificationResponse Client::deleteEmailVerification(const DeleteEmailVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEmailVerificationWithOptions(request, runtime);
}

/**
 * @summary Invoke the DeleteRegistrantProfile API to delete a specified domain name registrant profile.
 *
 * @description > If the API call succeeds, the System immediately deletes the corresponding domain name registrant profile.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the DeleteRegistrantProfile API to delete a specified domain name registrant profile.
 *
 * @description > If the API call succeeds, the System immediately deletes the corresponding domain name registrant profile.
 *
 * @param request DeleteRegistrantProfileRequest
 * @return DeleteRegistrantProfileResponse
 */
DeleteRegistrantProfileResponse Client::deleteRegistrantProfile(const DeleteRegistrantProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRegistrantProfileWithOptions(request, runtime);
}

/**
 * @summary Retrieves information from the domain name knowledge base.
 *
 * @param request DomainKnowledgeRetrieveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DomainKnowledgeRetrieveResponse
 */
DomainKnowledgeRetrieveResponse Client::domainKnowledgeRetrieveWithOptions(const DomainKnowledgeRetrieveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalTopN()) {
    query["GlobalTopN"] = request.getGlobalTopN();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasSite()) {
    query["Site"] = request.getSite();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DomainKnowledgeRetrieve"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DomainKnowledgeRetrieveResponse>();
}

/**
 * @summary Retrieves information from the domain name knowledge base.
 *
 * @param request DomainKnowledgeRetrieveRequest
 * @return DomainKnowledgeRetrieveResponse
 */
DomainKnowledgeRetrieveResponse Client::domainKnowledgeRetrieve(const DomainKnowledgeRetrieveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return domainKnowledgeRetrieveWithOptions(request, runtime);
}

/**
 * @summary Cancel the special business process for a domain name
 *
 * @param request DomainSpecialBizCancelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DomainSpecialBizCancelResponse
 */
DomainSpecialBizCancelResponse Client::domainSpecialBizCancelWithOptions(const DomainSpecialBizCancelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  json body = {};
  if (!!request.hasBizId()) {
    body["BizId"] = request.getBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DomainSpecialBizCancel"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DomainSpecialBizCancelResponse>();
}

/**
 * @summary Cancel the special business process for a domain name
 *
 * @param request DomainSpecialBizCancelRequest
 * @return DomainSpecialBizCancelResponse
 */
DomainSpecialBizCancelResponse Client::domainSpecialBizCancel(const DomainSpecialBizCancelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return domainSpecialBizCancelWithOptions(request, runtime);
}

/**
 * @summary 邮箱验证通过
 *
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
    {"version" , "2018-01-29"},
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
 * @summary 邮箱验证通过
 *
 * @param request EmailVerifiedRequest
 * @return EmailVerifiedResponse
 */
EmailVerifiedResponse Client::emailVerified(const EmailVerifiedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return emailVerifiedWithOptions(request, runtime);
}

/**
 * @summary Invoke FuzzyMatchDomainSensitiveWord to check whether a domain name contains sensitive words.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke FuzzyMatchDomainSensitiveWord to check whether a domain name contains sensitive words.
 *
 * @param request FuzzyMatchDomainSensitiveWordRequest
 * @return FuzzyMatchDomainSensitiveWordResponse
 */
FuzzyMatchDomainSensitiveWordResponse Client::fuzzyMatchDomainSensitiveWord(const FuzzyMatchDomainSensitiveWordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fuzzyMatchDomainSensitiveWordWithOptions(request, runtime);
}

/**
 * @summary Queries the list of domain names for fixed-price orders at the international site (alibabacloud.com).
 *
 * @param request GetIntlFixPriceDomainListUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIntlFixPriceDomainListUrlResponse
 */
GetIntlFixPriceDomainListUrlResponse Client::getIntlFixPriceDomainListUrlWithOptions(const GetIntlFixPriceDomainListUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListDate()) {
    query["ListDate"] = request.getListDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIntlFixPriceDomainListUrl"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIntlFixPriceDomainListUrlResponse>();
}

/**
 * @summary Queries the list of domain names for fixed-price orders at the international site (alibabacloud.com).
 *
 * @param request GetIntlFixPriceDomainListUrlRequest
 * @return GetIntlFixPriceDomainListUrlResponse
 */
GetIntlFixPriceDomainListUrlResponse Client::getIntlFixPriceDomainListUrl(const GetIntlFixPriceDomainListUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIntlFixPriceDomainListUrlWithOptions(request, runtime);
}

/**
 * @summary Invoke GetOperationOssUploadPolicy to obtain the storage information for review materials.
 *
 * @param request GetOperationOssUploadPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOperationOssUploadPolicyResponse
 */
GetOperationOssUploadPolicyResponse Client::getOperationOssUploadPolicyWithOptions(const GetOperationOssUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditType()) {
    query["AuditType"] = request.getAuditType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOperationOssUploadPolicy"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOperationOssUploadPolicyResponse>();
}

/**
 * @summary Invoke GetOperationOssUploadPolicy to obtain the storage information for review materials.
 *
 * @param request GetOperationOssUploadPolicyRequest
 * @return GetOperationOssUploadPolicyResponse
 */
GetOperationOssUploadPolicyResponse Client::getOperationOssUploadPolicy(const GetOperationOssUploadPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOperationOssUploadPolicyWithOptions(request, runtime);
}

/**
 * @summary Obtain the authorization policy corresponding to the ".restaurant" and ".trademark" domain names.
 *
 * @param request GetQualificationUploadPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualificationUploadPolicyResponse
 */
GetQualificationUploadPolicyResponse Client::getQualificationUploadPolicyWithOptions(const GetQualificationUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "GetQualificationUploadPolicy"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualificationUploadPolicyResponse>();
}

/**
 * @summary Obtain the authorization policy corresponding to the ".restaurant" and ".trademark" domain names.
 *
 * @param request GetQualificationUploadPolicyRequest
 * @return GetQualificationUploadPolicyResponse
 */
GetQualificationUploadPolicyResponse Client::getQualificationUploadPolicy(const GetQualificationUploadPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualificationUploadPolicyWithOptions(request, runtime);
}

/**
 * @summary Invoke the ListEmailVerification API to query the email verification list.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the ListEmailVerification API to query the email verification list.
 *
 * @param request ListEmailVerificationRequest
 * @return ListEmailVerificationResponse
 */
ListEmailVerificationResponse Client::listEmailVerification(const ListEmailVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEmailVerificationWithOptions(request, runtime);
}

/**
 * @summary Queries information about domain names for which registry locks are enabled.
 *
 * @param request ListServerLockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServerLockResponse
 */
ListServerLockResponse Client::listServerLockWithOptions(const ListServerLockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginStartDate()) {
    query["BeginStartDate"] = request.getBeginStartDate();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndExpireDate()) {
    query["EndExpireDate"] = request.getEndExpireDate();
  }

  if (!!request.hasEndStartDate()) {
    query["EndStartDate"] = request.getEndStartDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLockProductId()) {
    query["LockProductId"] = request.getLockProductId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderByType()) {
    query["OrderByType"] = request.getOrderByType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasServerLockStatus()) {
    query["ServerLockStatus"] = request.getServerLockStatus();
  }

  if (!!request.hasStartExpireDate()) {
    query["StartExpireDate"] = request.getStartExpireDate();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServerLock"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServerLockResponse>();
}

/**
 * @summary Queries information about domain names for which registry locks are enabled.
 *
 * @param request ListServerLockRequest
 * @return ListServerLockResponse
 */
ListServerLockResponse Client::listServerLock(const ListServerLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServerLockWithOptions(request, runtime);
}

/**
 * @summary Call `LookupTmchNotice` to look up a trademark term from the TMCH by passing it as the `key`.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Call `LookupTmchNotice` to look up a trademark term from the TMCH by passing it as the `key`.
 *
 * @param request LookupTmchNoticeRequest
 * @return LookupTmchNoticeResponse
 */
LookupTmchNoticeResponse Client::lookupTmchNotice(const LookupTmchNoticeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lookupTmchNoticeWithOptions(request, runtime);
}

/**
 * @summary Invoke PollTaskResult to obtain a list of domain name job details that have completed execution (including jobs that succeeded or failed and exceeded the retry count).
 *
 * @description This API must be used together with [AcknowledgeTaskResult](~~AcknowledgeTaskResult~~) to confirm job results. Once a job result is confirmed, the corresponding job record can no longer be queried through this API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke PollTaskResult to obtain a list of domain name job details that have completed execution (including jobs that succeeded or failed and exceeded the retry count).
 *
 * @description This API must be used together with [AcknowledgeTaskResult](~~AcknowledgeTaskResult~~) to confirm job results. Once a job result is confirmed, the corresponding job record can no longer be queried through this API.
 *
 * @param request PollTaskResultRequest
 * @return PollTaskResultResponse
 */
PollTaskResultResponse Client::pollTaskResult(const PollTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pollTaskResultWithOptions(request, runtime);
}

/**
 * @summary Invoke QueryAdvancedDomainList to perform an advanced search of the domain name list.
 *
 * @description Search for domain names under your current Alibaba Cloud account that meet specific conditions. A maximum of **5000** entries are displayed. If the result reaches **5000** entries, narrow your search scope.
 *
 * @param request QueryAdvancedDomainListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAdvancedDomainListResponse
 */
QueryAdvancedDomainListResponse Client::queryAdvancedDomainListWithOptions(const QueryAdvancedDomainListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainGroupId()) {
    query["DomainGroupId"] = request.getDomainGroupId();
  }

  if (!!request.hasDomainNameSort()) {
    query["DomainNameSort"] = request.getDomainNameSort();
  }

  if (!!request.hasDomainStatus()) {
    query["DomainStatus"] = request.getDomainStatus();
  }

  if (!!request.hasEndExpirationDate()) {
    query["EndExpirationDate"] = request.getEndExpirationDate();
  }

  if (!!request.hasEndLength()) {
    query["EndLength"] = request.getEndLength();
  }

  if (!!request.hasEndRegistrationDate()) {
    query["EndRegistrationDate"] = request.getEndRegistrationDate();
  }

  if (!!request.hasExcluded()) {
    query["Excluded"] = request.getExcluded();
  }

  if (!!request.hasExcludedPrefix()) {
    query["ExcludedPrefix"] = request.getExcludedPrefix();
  }

  if (!!request.hasExcludedSuffix()) {
    query["ExcludedSuffix"] = request.getExcludedSuffix();
  }

  if (!!request.hasExpirationDateSort()) {
    query["ExpirationDateSort"] = request.getExpirationDateSort();
  }

  if (!!request.hasForm()) {
    query["Form"] = request.getForm();
  }

  if (!!request.hasIsPremiumDomain()) {
    query["IsPremiumDomain"] = request.getIsPremiumDomain();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.getKeyWord();
  }

  if (!!request.hasKeyWordPrefix()) {
    query["KeyWordPrefix"] = request.getKeyWordPrefix();
  }

  if (!!request.hasKeyWordSuffix()) {
    query["KeyWordSuffix"] = request.getKeyWordSuffix();
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

  if (!!request.hasProductDomainType()) {
    query["ProductDomainType"] = request.getProductDomainType();
  }

  if (!!request.hasProductDomainTypeSort()) {
    query["ProductDomainTypeSort"] = request.getProductDomainTypeSort();
  }

  if (!!request.hasRegistrationDateSort()) {
    query["RegistrationDateSort"] = request.getRegistrationDateSort();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartExpirationDate()) {
    query["StartExpirationDate"] = request.getStartExpirationDate();
  }

  if (!!request.hasStartLength()) {
    query["StartLength"] = request.getStartLength();
  }

  if (!!request.hasStartRegistrationDate()) {
    query["StartRegistrationDate"] = request.getStartRegistrationDate();
  }

  if (!!request.hasSuffixs()) {
    query["Suffixs"] = request.getSuffixs();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTradeType()) {
    query["TradeType"] = request.getTradeType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAdvancedDomainList"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAdvancedDomainListResponse>();
}

/**
 * @summary Invoke QueryAdvancedDomainList to perform an advanced search of the domain name list.
 *
 * @description Search for domain names under your current Alibaba Cloud account that meet specific conditions. A maximum of **5000** entries are displayed. If the result reaches **5000** entries, narrow your search scope.
 *
 * @param request QueryAdvancedDomainListRequest
 * @return QueryAdvancedDomainListResponse
 */
QueryAdvancedDomainListResponse Client::queryAdvancedDomainList(const QueryAdvancedDomainListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAdvancedDomainListWithOptions(request, runtime);
}

/**
 * @summary Invoke the QueryArtExtension API to query Art extension information.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the QueryArtExtension API to query Art extension information.
 *
 * @param request QueryArtExtensionRequest
 * @return QueryArtExtensionResponse
 */
QueryArtExtensionResponse Client::queryArtExtension(const QueryArtExtensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryArtExtensionWithOptions(request, runtime);
}

/**
 * @summary Call QueryChangeLogList to get a paginated list of the operation logs.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Call QueryChangeLogList to get a paginated list of the operation logs.
 *
 * @param request QueryChangeLogListRequest
 * @return QueryChangeLogListResponse
 */
QueryChangeLogListResponse Client::queryChangeLogList(const QueryChangeLogListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryChangeLogListWithOptions(request, runtime);
}

/**
 * @summary Invoke QueryContactInfo to query domain contact information.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke QueryContactInfo to query domain contact information.
 *
 * @param request QueryContactInfoRequest
 * @return QueryContactInfoResponse
 */
QueryContactInfoResponse Client::queryContactInfo(const QueryContactInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryContactInfoWithOptions(request, runtime);
}

/**
 * @summary Invoke QueryDSRecord to query the DS records of a domain name.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke QueryDSRecord to query the DS records of a domain name.
 *
 * @param request QueryDSRecordRequest
 * @return QueryDSRecordResponse
 */
QueryDSRecordResponse Client::queryDSRecord(const QueryDSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDSRecordWithOptions(request, runtime);
}

/**
 * @summary Queries the DNS host for a domain name.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Queries the DNS host for a domain name.
 *
 * @param request QueryDnsHostRequest
 * @return QueryDnsHostResponse
 */
QueryDnsHostResponse Client::queryDnsHost(const QueryDnsHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDnsHostWithOptions(request, runtime);
}

/**
 * @summary Invoke the QueryDomainAdminDivision API to query Chinese administrative regions.
 *
 * @param request QueryDomainAdminDivisionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainAdminDivisionResponse
 */
QueryDomainAdminDivisionResponse Client::queryDomainAdminDivisionWithOptions(const QueryDomainAdminDivisionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "QueryDomainAdminDivision"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDomainAdminDivisionResponse>();
}

/**
 * @summary Invoke the QueryDomainAdminDivision API to query Chinese administrative regions.
 *
 * @param request QueryDomainAdminDivisionRequest
 * @return QueryDomainAdminDivisionResponse
 */
QueryDomainAdminDivisionResponse Client::queryDomainAdminDivision(const QueryDomainAdminDivisionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainAdminDivisionWithOptions(request, runtime);
}

/**
 * @summary Call `QueryDomainByDomainName` to retrieve information about a domain name.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Call `QueryDomainByDomainName` to retrieve information about a domain name.
 *
 * @param request QueryDomainByDomainNameRequest
 * @return QueryDomainByDomainNameResponse
 */
QueryDomainByDomainNameResponse Client::queryDomainByDomainName(const QueryDomainByDomainNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainByDomainNameWithOptions(request, runtime);
}

/**
 * @summary Call `QueryDomainByInstanceId` to retrieve the basic information of a domain name by instance ID.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Call `QueryDomainByInstanceId` to retrieve the basic information of a domain name by instance ID.
 *
 * @param request QueryDomainByInstanceIdRequest
 * @return QueryDomainByInstanceIdResponse
 */
QueryDomainByInstanceIdResponse Client::queryDomainByInstanceId(const QueryDomainByInstanceIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainByInstanceIdWithOptions(request, runtime);
}

/**
 * @summary Queries a list of domain groups.
 *
 * @param request QueryDomainGroupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainGroupListResponse
 */
QueryDomainGroupListResponse Client::queryDomainGroupListWithOptions(const QueryDomainGroupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainGroupName()) {
    query["DomainGroupName"] = request.getDomainGroupName();
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

  if (!!request.hasShowDeletingGroup()) {
    query["ShowDeletingGroup"] = request.getShowDeletingGroup();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDomainGroupList"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDomainGroupListResponse>();
}

/**
 * @summary Queries a list of domain groups.
 *
 * @param request QueryDomainGroupListRequest
 * @return QueryDomainGroupListResponse
 */
QueryDomainGroupListResponse Client::queryDomainGroupList(const QueryDomainGroupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainGroupListWithOptions(request, runtime);
}

/**
 * @summary Returns a paginated list of domain names in your account.
 *
 * @param request QueryDomainListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainListResponse
 */
QueryDomainListResponse Client::queryDomainListWithOptions(const QueryDomainListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenewEnabled()) {
    query["AutoRenewEnabled"] = request.getAutoRenewEnabled();
  }

  if (!!request.hasCcompany()) {
    query["Ccompany"] = request.getCcompany();
  }

  if (!!request.hasDns()) {
    query["Dns"] = request.getDns();
  }

  if (!!request.hasDomainGroupId()) {
    query["DomainGroupId"] = request.getDomainGroupId();
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

  if (!!request.hasRegistrar()) {
    query["Registrar"] = request.getRegistrar();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartExpirationDate()) {
    query["StartExpirationDate"] = request.getStartExpirationDate();
  }

  if (!!request.hasStartRegistrationDate()) {
    query["StartRegistrationDate"] = request.getStartRegistrationDate();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDomainList"},
    {"version" , "2018-01-29"},
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
 * @summary Returns a paginated list of domain names in your account.
 *
 * @param request QueryDomainListRequest
 * @return QueryDomainListResponse
 */
QueryDomainListResponse Client::queryDomainList(const QueryDomainListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainListWithOptions(request, runtime);
}

/**
 * @summary Invoke QueryDomainRealNameVerificationInfo to query real-name verification information for a domain name.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke QueryDomainRealNameVerificationInfo to query real-name verification information for a domain name.
 *
 * @param request QueryDomainRealNameVerificationInfoRequest
 * @return QueryDomainRealNameVerificationInfoResponse
 */
QueryDomainRealNameVerificationInfoResponse Client::queryDomainRealNameVerificationInfo(const QueryDomainRealNameVerificationInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainRealNameVerificationInfoWithOptions(request, runtime);
}

/**
 * @summary 实时查询域名价格
 *
 * @param tmpReq QueryDomainRealTimePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainRealTimePriceResponse
 */
QueryDomainRealTimePriceResponse Client::queryDomainRealTimePriceWithOptions(const QueryDomainRealTimePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryDomainRealTimePriceShrinkRequest request = QueryDomainRealTimePriceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDomainItem()) {
    request.setDomainItemShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDomainItem(), "DomainItem", "json"));
  }

  json query = {};
  if (!!request.hasCurrency()) {
    query["Currency"] = request.getCurrency();
  }

  if (!!request.hasDomainItemShrink()) {
    query["DomainItem"] = request.getDomainItemShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDomainRealTimePrice"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDomainRealTimePriceResponse>();
}

/**
 * @summary 实时查询域名价格
 *
 * @param request QueryDomainRealTimePriceRequest
 * @return QueryDomainRealTimePriceResponse
 */
QueryDomainRealTimePriceResponse Client::queryDomainRealTimePrice(const QueryDomainRealTimePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainRealTimePriceWithOptions(request, runtime);
}

/**
 * @summary Query domain name special business details
 *
 * @param request QueryDomainSpecialBizDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainSpecialBizDetailResponse
 */
QueryDomainSpecialBizDetailResponse Client::queryDomainSpecialBizDetailWithOptions(const QueryDomainSpecialBizDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  json body = {};
  if (!!request.hasBizId()) {
    body["BizId"] = request.getBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryDomainSpecialBizDetail"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDomainSpecialBizDetailResponse>();
}

/**
 * @summary Query domain name special business details
 *
 * @param request QueryDomainSpecialBizDetailRequest
 * @return QueryDomainSpecialBizDetailResponse
 */
QueryDomainSpecialBizDetailResponse Client::queryDomainSpecialBizDetail(const QueryDomainSpecialBizDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainSpecialBizDetailWithOptions(request, runtime);
}

/**
 * @summary Query domain special business details by domain name
 *
 * @param request QueryDomainSpecialBizInfoByDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainSpecialBizInfoByDomainResponse
 */
QueryDomainSpecialBizInfoByDomainResponse Client::queryDomainSpecialBizInfoByDomainWithOptions(const QueryDomainSpecialBizInfoByDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  json body = {};
  if (!!request.hasBizType()) {
    body["BizType"] = request.getBizType();
  }

  if (!!request.hasDomainName()) {
    body["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryDomainSpecialBizInfoByDomain"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDomainSpecialBizInfoByDomainResponse>();
}

/**
 * @summary Query domain special business details by domain name
 *
 * @param request QueryDomainSpecialBizInfoByDomainRequest
 * @return QueryDomainSpecialBizInfoByDomainResponse
 */
QueryDomainSpecialBizInfoByDomainResponse Client::queryDomainSpecialBizInfoByDomain(const QueryDomainSpecialBizInfoByDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainSpecialBizInfoByDomainWithOptions(request, runtime);
}

/**
 * @summary Queries the available domain name suffixes.
 *
 * @param request QueryDomainSuffixRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainSuffixResponse
 */
QueryDomainSuffixResponse Client::queryDomainSuffixWithOptions(const QueryDomainSuffixRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "QueryDomainSuffix"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDomainSuffixResponse>();
}

/**
 * @summary Queries the available domain name suffixes.
 *
 * @param request QueryDomainSuffixRequest
 * @return QueryDomainSuffixResponse
 */
QueryDomainSuffixResponse Client::queryDomainSuffix(const QueryDomainSuffixRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainSuffixWithOptions(request, runtime);
}

/**
 * @summary Invoke the QueryEmailVerification API to query the email verification result.
 *
 * @param request QueryEmailVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEmailVerificationResponse
 */
QueryEmailVerificationResponse Client::queryEmailVerificationWithOptions(const QueryEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryEmailVerification"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryEmailVerificationResponse>();
}

/**
 * @summary Invoke the QueryEmailVerification API to query the email verification result.
 *
 * @param request QueryEmailVerificationRequest
 * @return QueryEmailVerificationResponse
 */
QueryEmailVerificationResponse Client::queryEmailVerification(const QueryEmailVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEmailVerificationWithOptions(request, runtime);
}

/**
 * @summary Invoke the QueryEnsAssociation API to query the wallet address attached in the ENS system.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the QueryEnsAssociation API to query the wallet address attached in the ENS system.
 *
 * @param request QueryEnsAssociationRequest
 * @return QueryEnsAssociationResponse
 */
QueryEnsAssociationResponse Client::queryEnsAssociation(const QueryEnsAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEnsAssociationWithOptions(request, runtime);
}

/**
 * @summary Query the reasons for real-name verification (including naming review) failure for a domain name.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Query the reasons for real-name verification (including naming review) failure for a domain name.
 *
 * @param request QueryFailReasonForDomainRealNameVerificationRequest
 * @return QueryFailReasonForDomainRealNameVerificationResponse
 */
QueryFailReasonForDomainRealNameVerificationResponse Client::queryFailReasonForDomainRealNameVerification(const QueryFailReasonForDomainRealNameVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFailReasonForDomainRealNameVerificationWithOptions(request, runtime);
}

/**
 * @summary Invoke the QueryFailReasonForRegistrantProfileRealNameVerification API to query the reasons why identity verification for an information template failed the Review.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the QueryFailReasonForRegistrantProfileRealNameVerification API to query the reasons why identity verification for an information template failed the Review.
 *
 * @param request QueryFailReasonForRegistrantProfileRealNameVerificationRequest
 * @return QueryFailReasonForRegistrantProfileRealNameVerificationResponse
 */
QueryFailReasonForRegistrantProfileRealNameVerificationResponse Client::queryFailReasonForRegistrantProfileRealNameVerification(const QueryFailReasonForRegistrantProfileRealNameVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFailReasonForRegistrantProfileRealNameVerificationWithOptions(request, runtime);
}

/**
 * @summary Query the reasons for qualification verification failure for ".restaurant" and ".trademark" domain names.
 *
 * @param request QueryFailingReasonListForQualificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFailingReasonListForQualificationResponse
 */
QueryFailingReasonListForQualificationResponse Client::queryFailingReasonListForQualificationWithOptions(const QueryFailingReasonListForQualificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasQualificationType()) {
    query["QualificationType"] = request.getQualificationType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFailingReasonListForQualification"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFailingReasonListForQualificationResponse>();
}

/**
 * @summary Query the reasons for qualification verification failure for ".restaurant" and ".trademark" domain names.
 *
 * @param request QueryFailingReasonListForQualificationRequest
 * @return QueryFailingReasonListForQualificationResponse
 */
QueryFailingReasonListForQualificationResponse Client::queryFailingReasonListForQualification(const QueryFailingReasonListForQualificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFailingReasonListForQualificationWithOptions(request, runtime);
}

/**
 * @summary Queries the list of international fixed-price orders by calling QueryIntlFixedPriceOrderList.
 *
 * @param request QueryIntlFixedPriceOrderListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryIntlFixedPriceOrderListResponse
 */
QueryIntlFixedPriceOrderListResponse Client::queryIntlFixedPriceOrderListWithOptions(const QueryIntlFixedPriceOrderListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryIntlFixedPriceOrderList"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryIntlFixedPriceOrderListResponse>();
}

/**
 * @summary Queries the list of international fixed-price orders by calling QueryIntlFixedPriceOrderList.
 *
 * @param request QueryIntlFixedPriceOrderListRequest
 * @return QueryIntlFixedPriceOrderListResponse
 */
QueryIntlFixedPriceOrderListResponse Client::queryIntlFixedPriceOrderList(const QueryIntlFixedPriceOrderListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryIntlFixedPriceOrderListWithOptions(request, runtime);
}

/**
 * @summary Invoke QueryLocalEnsAssociation to query the ENS binding address recorded in the Alibaba Cloud system.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke QueryLocalEnsAssociation to query the ENS binding address recorded in the Alibaba Cloud system.
 *
 * @param request QueryLocalEnsAssociationRequest
 * @return QueryLocalEnsAssociationResponse
 */
QueryLocalEnsAssociationResponse Client::queryLocalEnsAssociation(const QueryLocalEnsAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryLocalEnsAssociationWithOptions(request, runtime);
}

/**
 * @summary Invoke the QueryOperationAuditInfoDetail API to query the details of a self-service operation review record.
 *
 * @param request QueryOperationAuditInfoDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryOperationAuditInfoDetailResponse
 */
QueryOperationAuditInfoDetailResponse Client::queryOperationAuditInfoDetailWithOptions(const QueryOperationAuditInfoDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditRecordId()) {
    query["AuditRecordId"] = request.getAuditRecordId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryOperationAuditInfoDetail"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryOperationAuditInfoDetailResponse>();
}

/**
 * @summary Invoke the QueryOperationAuditInfoDetail API to query the details of a self-service operation review record.
 *
 * @param request QueryOperationAuditInfoDetailRequest
 * @return QueryOperationAuditInfoDetailResponse
 */
QueryOperationAuditInfoDetailResponse Client::queryOperationAuditInfoDetail(const QueryOperationAuditInfoDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryOperationAuditInfoDetailWithOptions(request, runtime);
}

/**
 * @summary You can invoke QueryOperationAuditInfoList to query the list of review records for self-service operations.
 *
 * @param request QueryOperationAuditInfoListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryOperationAuditInfoListResponse
 */
QueryOperationAuditInfoListResponse Client::queryOperationAuditInfoListWithOptions(const QueryOperationAuditInfoListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.getAuditStatus();
  }

  if (!!request.hasAuditType()) {
    query["AuditType"] = request.getAuditType();
  }

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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryOperationAuditInfoList"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryOperationAuditInfoListResponse>();
}

/**
 * @summary You can invoke QueryOperationAuditInfoList to query the list of review records for self-service operations.
 *
 * @param request QueryOperationAuditInfoListRequest
 * @return QueryOperationAuditInfoListResponse
 */
QueryOperationAuditInfoListResponse Client::queryOperationAuditInfoList(const QueryOperationAuditInfoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryOperationAuditInfoListWithOptions(request, runtime);
}

/**
 * @summary Query the qualification verification details of ".restaurant" and ".trademark" domain names.
 *
 * @param request QueryQualificationDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryQualificationDetailResponse
 */
QueryQualificationDetailResponse Client::queryQualificationDetailWithOptions(const QueryQualificationDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasQualificationType()) {
    query["QualificationType"] = request.getQualificationType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryQualificationDetail"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryQualificationDetailResponse>();
}

/**
 * @summary Query the qualification verification details of ".restaurant" and ".trademark" domain names.
 *
 * @param request QueryQualificationDetailRequest
 * @return QueryQualificationDetailResponse
 */
QueryQualificationDetailResponse Client::queryQualificationDetail(const QueryQualificationDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryQualificationDetailWithOptions(request, runtime);
}

/**
 * @summary Invoke the QueryRegistrantProfileRealNameVerificationInfo API to query the identity verification documents of an information template.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the QueryRegistrantProfileRealNameVerificationInfo API to query the identity verification documents of an information template.
 *
 * @param request QueryRegistrantProfileRealNameVerificationInfoRequest
 * @return QueryRegistrantProfileRealNameVerificationInfoResponse
 */
QueryRegistrantProfileRealNameVerificationInfoResponse Client::queryRegistrantProfileRealNameVerificationInfo(const QueryRegistrantProfileRealNameVerificationInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRegistrantProfileRealNameVerificationInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the domain name registrant profiles under the current account.
 *
 * @description You can pass in optional parameters to help you find registrant profiles more precisely. For example:
 * - If you already know the ID of a registrant profile, you can pass in the registrant profile ID to query detailed profile information.
 * - If you do not know the ID of a registrant profile, you can pass in parameters such as the domain name registrant name to query detailed profile information.
 *
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

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasZhRegistrantOrganization()) {
    query["ZhRegistrantOrganization"] = request.getZhRegistrantOrganization();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRegistrantProfiles"},
    {"version" , "2018-01-29"},
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
 * @summary Queries the domain name registrant profiles under the current account.
 *
 * @description You can pass in optional parameters to help you find registrant profiles more precisely. For example:
 * - If you already know the ID of a registrant profile, you can pass in the registrant profile ID to query detailed profile information.
 * - If you do not know the ID of a registrant profile, you can pass in parameters such as the domain name registrant name to query detailed profile information.
 *
 * @param request QueryRegistrantProfilesRequest
 * @return QueryRegistrantProfilesResponse
 */
QueryRegistrantProfilesResponse Client::queryRegistrantProfiles(const QueryRegistrantProfilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRegistrantProfilesWithOptions(request, runtime);
}

/**
 * @summary Query the registry lock details of a domain name.
 *
 * @param request QueryServerLockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryServerLockResponse
 */
QueryServerLockResponse Client::queryServerLockWithOptions(const QueryServerLockRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryServerLock"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryServerLockResponse>();
}

/**
 * @summary Query the registry lock details of a domain name.
 *
 * @param request QueryServerLockRequest
 * @return QueryServerLockResponse
 */
QueryServerLockResponse Client::queryServerLock(const QueryServerLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryServerLockWithOptions(request, runtime);
}

/**
 * @summary You can invoke QueryTaskDetailHistory to perform a paged query on the detail history list of a specified domain name job.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary You can invoke QueryTaskDetailHistory to perform a paged query on the detail history list of a specified domain name job.
 *
 * @param request QueryTaskDetailHistoryRequest
 * @return QueryTaskDetailHistoryResponse
 */
QueryTaskDetailHistoryResponse Client::queryTaskDetailHistory(const QueryTaskDetailHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskDetailHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the details list of a specified domain name task by paging.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Queries the details list of a specified domain name task by paging.
 *
 * @param request QueryTaskDetailListRequest
 * @return QueryTaskDetailListResponse
 */
QueryTaskDetailListResponse Client::queryTaskDetailList(const QueryTaskDetailListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskDetailListWithOptions(request, runtime);
}

/**
 * @summary You can invoke QueryTaskInfoHistory to perform a paged query of the domain name job history list under your account.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary You can invoke QueryTaskInfoHistory to perform a paged query of the domain name job history list under your account.
 *
 * @param request QueryTaskInfoHistoryRequest
 * @return QueryTaskInfoHistoryResponse
 */
QueryTaskInfoHistoryResponse Client::queryTaskInfoHistory(const QueryTaskInfoHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskInfoHistoryWithOptions(request, runtime);
}

/**
 * @summary Invoke QueryTaskList to perform a paged query of the domain name job list under your account.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke QueryTaskList to perform a paged query of the domain name job list under your account.
 *
 * @param request QueryTaskListRequest
 * @return QueryTaskListResponse
 */
QueryTaskListResponse Client::queryTaskList(const QueryTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskListWithOptions(request, runtime);
}

/**
 * @summary Invoke QueryTransferInByInstanceId to query domain name transfer-in information by instance ID.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke QueryTransferInByInstanceId to query domain name transfer-in information by instance ID.
 *
 * @param request QueryTransferInByInstanceIdRequest
 * @return QueryTransferInByInstanceIdResponse
 */
QueryTransferInByInstanceIdResponse Client::queryTransferInByInstanceId(const QueryTransferInByInstanceIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTransferInByInstanceIdWithOptions(request, runtime);
}

/**
 * @summary Invoke QueryTransferInList to query the domain name transfer-in list.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke QueryTransferInList to query the domain name transfer-in list.
 *
 * @param request QueryTransferInListRequest
 * @return QueryTransferInListResponse
 */
QueryTransferInListResponse Client::queryTransferInList(const QueryTransferInListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTransferInListWithOptions(request, runtime);
}

/**
 * @summary Invoke QueryTransferOutInfo to query domain name transfer-out information.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke QueryTransferOutInfo to query domain name transfer-out information.
 *
 * @param request QueryTransferOutInfoRequest
 * @return QueryTransferOutInfoResponse
 */
QueryTransferOutInfoResponse Client::queryTransferOutInfo(const QueryTransferOutInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTransferOutInfoWithOptions(request, runtime);
}

/**
 * @summary Invoke the RegistrantProfileRealNameVerification API to submit real-name verification for an information template.
 *
 * @description - Identity verification document review takes 3 to 5 business days. After the authority completes the review, you can invoke the [QueryRegistrantProfiles](https://help.aliyun.com/document_detail/67701.html) API to query the identity verification result.  
 * - If identity verification fails, refer to [Reasons for Identity Verification Failure and Solutions](https://help.aliyun.com/document_detail/35885.html) for troubleshooting and resolution.
 * > You must invoke this API using the POST method; otherwise, the invocation will fail. When using a software development kit (SDK), set the **method** parameter of the request object to **POST**.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the RegistrantProfileRealNameVerification API to submit real-name verification for an information template.
 *
 * @description - Identity verification document review takes 3 to 5 business days. After the authority completes the review, you can invoke the [QueryRegistrantProfiles](https://help.aliyun.com/document_detail/67701.html) API to query the identity verification result.  
 * - If identity verification fails, refer to [Reasons for Identity Verification Failure and Solutions](https://help.aliyun.com/document_detail/35885.html) for troubleshooting and resolution.
 * > You must invoke this API using the POST method; otherwise, the invocation will fail. When using a software development kit (SDK), set the **method** parameter of the request object to **POST**.
 *
 * @param request RegistrantProfileRealNameVerificationRequest
 * @return RegistrantProfileRealNameVerificationResponse
 */
RegistrantProfileRealNameVerificationResponse Client::registrantProfileRealNameVerification(const RegistrantProfileRealNameVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registrantProfileRealNameVerificationWithOptions(request, runtime);
}

/**
 * @summary Invoke the ResendEmailVerification API to resend the verification email.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the ResendEmailVerification API to resend the verification email.
 *
 * @param request ResendEmailVerificationRequest
 * @return ResendEmailVerificationResponse
 */
ResendEmailVerificationResponse Client::resendEmailVerification(const ResendEmailVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resendEmailVerificationWithOptions(request, runtime);
}

/**
 * @summary Reset the qualification verification status for .restaurant and .trademark domain names.
 *
 * @param request ResetQualificationVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetQualificationVerificationResponse
 */
ResetQualificationVerificationResponse Client::resetQualificationVerificationWithOptions(const ResetQualificationVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ResetQualificationVerification"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetQualificationVerificationResponse>();
}

/**
 * @summary Reset the qualification verification status for .restaurant and .trademark domain names.
 *
 * @param request ResetQualificationVerificationRequest
 * @return ResetQualificationVerificationResponse
 */
ResetQualificationVerificationResponse Client::resetQualificationVerification(const ResetQualificationVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetQualificationVerificationWithOptions(request, runtime);
}

/**
 * @summary Invoke SaveBatchDomainRemark to batch save domain name remarks.
 *
 * @param request SaveBatchDomainRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchDomainRemarkResponse
 */
SaveBatchDomainRemarkResponse Client::saveBatchDomainRemarkWithOptions(const SaveBatchDomainRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveBatchDomainRemark"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchDomainRemarkResponse>();
}

/**
 * @summary Invoke SaveBatchDomainRemark to batch save domain name remarks.
 *
 * @param request SaveBatchDomainRemarkRequest
 * @return SaveBatchDomainRemarkResponse
 */
SaveBatchDomainRemarkResponse Client::saveBatchDomainRemark(const SaveBatchDomainRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchDomainRemarkWithOptions(request, runtime);
}

/**
 * @summary Submits a batch task to quickly transfer out domain names.
 *
 * @description This is an asynchronous operation. To query the result of the task, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) operation.
 *
 * @param request SaveBatchTaskForApplyQuickTransferOutOpenlyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForApplyQuickTransferOutOpenlyResponse
 */
SaveBatchTaskForApplyQuickTransferOutOpenlyResponse Client::saveBatchTaskForApplyQuickTransferOutOpenlyWithOptions(const SaveBatchTaskForApplyQuickTransferOutOpenlyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.getDomainNames();
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
    {"action" , "SaveBatchTaskForApplyQuickTransferOutOpenly"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchTaskForApplyQuickTransferOutOpenlyResponse>();
}

/**
 * @summary Submits a batch task to quickly transfer out domain names.
 *
 * @description This is an asynchronous operation. To query the result of the task, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) operation.
 *
 * @param request SaveBatchTaskForApplyQuickTransferOutOpenlyRequest
 * @return SaveBatchTaskForApplyQuickTransferOutOpenlyResponse
 */
SaveBatchTaskForApplyQuickTransferOutOpenlyResponse Client::saveBatchTaskForApplyQuickTransferOutOpenly(const SaveBatchTaskForApplyQuickTransferOutOpenlyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForApplyQuickTransferOutOpenlyWithOptions(request, runtime);
}

/**
 * @summary Submits a batch domain name registration task.
 *
 * @description Starting from March 1, 2022, domain names can only be registered by using real-name verified domain name registrant profiles. Passing registrant information directly to register domain names is no longer supported.
 * To register a domain name, you must specify associated domain name to be registered, associated domain name registrant information, and the DNS servers. You must associate associated domain name registrant information by using the ID of a real-name verified domain name registrant profile. For DNS servers, you can use the default Alibaba Cloud DNS or specify custom DNS servers.
 * > - The total number of domain names registered per week cannot exceed 100,000.
 * > - Registration payments can only be made by using the account cash balance. Credit limits are not supported.
 * - The request parameter format for the **SaveBatchTaskForCreatingOrderActivate** operation is OrderActivateParam.N.*, where N represents the sequence number of associated domain name.
 * To query the task execution result, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Submits a batch domain name registration task.
 *
 * @description Starting from March 1, 2022, domain names can only be registered by using real-name verified domain name registrant profiles. Passing registrant information directly to register domain names is no longer supported.
 * To register a domain name, you must specify associated domain name to be registered, associated domain name registrant information, and the DNS servers. You must associate associated domain name registrant information by using the ID of a real-name verified domain name registrant profile. For DNS servers, you can use the default Alibaba Cloud DNS or specify custom DNS servers.
 * > - The total number of domain names registered per week cannot exceed 100,000.
 * > - Registration payments can only be made by using the account cash balance. Credit limits are not supported.
 * - The request parameter format for the **SaveBatchTaskForCreatingOrderActivate** operation is OrderActivateParam.N.*, where N represents the sequence number of associated domain name.
 * To query the task execution result, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation.
 *
 * @param request SaveBatchTaskForCreatingOrderActivateRequest
 * @return SaveBatchTaskForCreatingOrderActivateResponse
 */
SaveBatchTaskForCreatingOrderActivateResponse Client::saveBatchTaskForCreatingOrderActivate(const SaveBatchTaskForCreatingOrderActivateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForCreatingOrderActivateWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveBatchTaskForCreatingOrderRedeem API to submit a batch domain redeem job.
 *
 * @description You can query the job execution result by using the [Query Task Detail List](https://help.aliyun.com/document_detail/67710.html) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveBatchTaskForCreatingOrderRedeem API to submit a batch domain redeem job.
 *
 * @description You can query the job execution result by using the [Query Task Detail List](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveBatchTaskForCreatingOrderRedeemRequest
 * @return SaveBatchTaskForCreatingOrderRedeemResponse
 */
SaveBatchTaskForCreatingOrderRedeemResponse Client::saveBatchTaskForCreatingOrderRedeem(const SaveBatchTaskForCreatingOrderRedeemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForCreatingOrderRedeemWithOptions(request, runtime);
}

/**
 * @summary Submits a batch domain name renewal task.
 *
 * @description To query the task result, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Submits a batch domain name renewal task.
 *
 * @description To query the task result, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation.
 *
 * @param request SaveBatchTaskForCreatingOrderRenewRequest
 * @return SaveBatchTaskForCreatingOrderRenewResponse
 */
SaveBatchTaskForCreatingOrderRenewResponse Client::saveBatchTaskForCreatingOrderRenew(const SaveBatchTaskForCreatingOrderRenewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForCreatingOrderRenewWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveBatchTaskForCreatingOrderTransfer API to submit a batch domain name transfer-in job.
 *
 * @description You can query the job execution result by invoking the QueryTaskDetailList API. For more information, see [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.htm?spm=a2c4g.11186623.0.0.5096389cgV6sng).
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveBatchTaskForCreatingOrderTransfer API to submit a batch domain name transfer-in job.
 *
 * @description You can query the job execution result by invoking the QueryTaskDetailList API. For more information, see [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.htm?spm=a2c4g.11186623.0.0.5096389cgV6sng).
 *
 * @param request SaveBatchTaskForCreatingOrderTransferRequest
 * @return SaveBatchTaskForCreatingOrderTransferResponse
 */
SaveBatchTaskForCreatingOrderTransferResponse Client::saveBatchTaskForCreatingOrderTransfer(const SaveBatchTaskForCreatingOrderTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForCreatingOrderTransferWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveBatchTaskForDomainNameProxyService API to submit a batch domain name proxy service job.
 *
 * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
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

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.getServiceType();
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
    {"action" , "SaveBatchTaskForDomainNameProxyService"},
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveBatchTaskForDomainNameProxyService API to submit a batch domain name proxy service job.
 *
 * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveBatchTaskForDomainNameProxyServiceRequest
 * @return SaveBatchTaskForDomainNameProxyServiceResponse
 */
SaveBatchTaskForDomainNameProxyServiceResponse Client::saveBatchTaskForDomainNameProxyService(const SaveBatchTaskForDomainNameProxyServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForDomainNameProxyServiceWithOptions(request, runtime);
}

/**
 * @summary 提交批量生成证书的任务
 *
 * @param tmpReq SaveBatchTaskForGenerateDomainCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForGenerateDomainCertificateResponse
 */
SaveBatchTaskForGenerateDomainCertificateResponse Client::saveBatchTaskForGenerateDomainCertificateWithOptions(const SaveBatchTaskForGenerateDomainCertificateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveBatchTaskForGenerateDomainCertificateShrinkRequest request = SaveBatchTaskForGenerateDomainCertificateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDomainNames()) {
    request.setDomainNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDomainNames(), "DomainNames", "json"));
  }

  json query = {};
  if (!!request.hasDomainNamesShrink()) {
    query["DomainNames"] = request.getDomainNamesShrink();
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
    {"action" , "SaveBatchTaskForGenerateDomainCertificate"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchTaskForGenerateDomainCertificateResponse>();
}

/**
 * @summary 提交批量生成证书的任务
 *
 * @param request SaveBatchTaskForGenerateDomainCertificateRequest
 * @return SaveBatchTaskForGenerateDomainCertificateResponse
 */
SaveBatchTaskForGenerateDomainCertificateResponse Client::saveBatchTaskForGenerateDomainCertificate(const SaveBatchTaskForGenerateDomainCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForGenerateDomainCertificateWithOptions(request, runtime);
}

/**
 * @summary Submits a batch task to modify the DNS servers for the specified domain names.
 *
 * @description To query the task result, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Submits a batch task to modify the DNS servers for the specified domain names.
 *
 * @description To query the task result, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
 *
 * @param request SaveBatchTaskForModifyingDomainDnsRequest
 * @return SaveBatchTaskForModifyingDomainDnsResponse
 */
SaveBatchTaskForModifyingDomainDnsResponse Client::saveBatchTaskForModifyingDomainDns(const SaveBatchTaskForModifyingDomainDnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForModifyingDomainDnsWithOptions(request, runtime);
}

/**
 * @summary Call the SaveBatchTaskForReserveDropListDomain API to submit a batch task for domain reservation.
 *
 * @description To query task execution results, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
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
    {"version" , "2018-01-29"},
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
 * @summary Call the SaveBatchTaskForReserveDropListDomain API to submit a batch task for domain reservation.
 *
 * @description To query task execution results, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
 *
 * @param request SaveBatchTaskForReserveDropListDomainRequest
 * @return SaveBatchTaskForReserveDropListDomainResponse
 */
SaveBatchTaskForReserveDropListDomainResponse Client::saveBatchTaskForReserveDropListDomain(const SaveBatchTaskForReserveDropListDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForReserveDropListDomainWithOptions(request, runtime);
}

/**
 * @summary Submits a batch transfer-out task for multiple domain names using their authorization codes.
 *
 * @description This is an asynchronous operation. After submitting the task, call `QueryTaskDetailList` to check its status.
 *
 * @param request SaveBatchTaskForTransferOutByAuthorizationCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForTransferOutByAuthorizationCodeResponse
 */
SaveBatchTaskForTransferOutByAuthorizationCodeResponse Client::saveBatchTaskForTransferOutByAuthorizationCodeWithOptions(const SaveBatchTaskForTransferOutByAuthorizationCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTransferOutParamList()) {
    query["TransferOutParamList"] = request.getTransferOutParamList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveBatchTaskForTransferOutByAuthorizationCode"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchTaskForTransferOutByAuthorizationCodeResponse>();
}

/**
 * @summary Submits a batch transfer-out task for multiple domain names using their authorization codes.
 *
 * @description This is an asynchronous operation. After submitting the task, call `QueryTaskDetailList` to check its status.
 *
 * @param request SaveBatchTaskForTransferOutByAuthorizationCodeRequest
 * @return SaveBatchTaskForTransferOutByAuthorizationCodeResponse
 */
SaveBatchTaskForTransferOutByAuthorizationCodeResponse Client::saveBatchTaskForTransferOutByAuthorizationCode(const SaveBatchTaskForTransferOutByAuthorizationCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForTransferOutByAuthorizationCodeWithOptions(request, runtime);
}

/**
 * @summary Call SaveBatchTaskForTransferProhibitionLock to enable or disable the transfer prohibition lock for multiple domain names.
 *
 * @description To check the result of the task, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Call SaveBatchTaskForTransferProhibitionLock to enable or disable the transfer prohibition lock for multiple domain names.
 *
 * @description To check the result of the task, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveBatchTaskForTransferProhibitionLockRequest
 * @return SaveBatchTaskForTransferProhibitionLockResponse
 */
SaveBatchTaskForTransferProhibitionLockResponse Client::saveBatchTaskForTransferProhibitionLock(const SaveBatchTaskForTransferProhibitionLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForTransferProhibitionLockWithOptions(request, runtime);
}

/**
 * @summary Submits a batch task to enable or disable the update prohibition lock for one or more domain names.
 *
 * @description To check the status of the task, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) operation.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Submits a batch task to enable or disable the update prohibition lock for one or more domain names.
 *
 * @description To check the status of the task, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) operation.
 *
 * @param request SaveBatchTaskForUpdateProhibitionLockRequest
 * @return SaveBatchTaskForUpdateProhibitionLockResponse
 */
SaveBatchTaskForUpdateProhibitionLockResponse Client::saveBatchTaskForUpdateProhibitionLock(const SaveBatchTaskForUpdateProhibitionLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForUpdateProhibitionLockWithOptions(request, runtime);
}

/**
 * @summary Submit a domain information modification job with new contact information.
 *
 * @description You can query the job execution result by using the [Query Task Detail List](https://help.aliyun.com/document_detail/67710.html) API.
 *
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

  if (!!request.hasZhAddress()) {
    query["ZhAddress"] = request.getZhAddress();
  }

  if (!!request.hasZhCity()) {
    query["ZhCity"] = request.getZhCity();
  }

  if (!!request.hasZhProvince()) {
    query["ZhProvince"] = request.getZhProvince();
  }

  if (!!request.hasZhRegistrantName()) {
    query["ZhRegistrantName"] = request.getZhRegistrantName();
  }

  if (!!request.hasZhRegistrantOrganization()) {
    query["ZhRegistrantOrganization"] = request.getZhRegistrantOrganization();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveBatchTaskForUpdatingContactInfoByNewContact"},
    {"version" , "2018-01-29"},
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
 * @summary Submit a domain information modification job with new contact information.
 *
 * @description You can query the job execution result by using the [Query Task Detail List](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveBatchTaskForUpdatingContactInfoByNewContactRequest
 * @return SaveBatchTaskForUpdatingContactInfoByNewContactResponse
 */
SaveBatchTaskForUpdatingContactInfoByNewContactResponse Client::saveBatchTaskForUpdatingContactInfoByNewContact(const SaveBatchTaskForUpdatingContactInfoByNewContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForUpdatingContactInfoByNewContactWithOptions(request, runtime);
}

/**
 * @summary Call SaveBatchTaskForUpdatingContactInfoByRegistrantProfileId to update the contact information of one or more domain names by using a registrant profile.
 *
 * @description To check the task result, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation.
 *
 * @param request SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse
 */
SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse Client::saveBatchTaskForUpdatingContactInfoByRegistrantProfileIdWithOptions(const SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "SaveBatchTaskForUpdatingContactInfoByRegistrantProfileId"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse>();
}

/**
 * @summary Call SaveBatchTaskForUpdatingContactInfoByRegistrantProfileId to update the contact information of one or more domain names by using a registrant profile.
 *
 * @description To check the task result, call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation.
 *
 * @param request SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest
 * @return SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse
 */
SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse Client::saveBatchTaskForUpdatingContactInfoByRegistrantProfileId(const SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForUpdatingContactInfoByRegistrantProfileIdWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveDomainGroup API to create or update a domain name group.
 *
 * @param request SaveDomainGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveDomainGroupResponse
 */
SaveDomainGroupResponse Client::saveDomainGroupWithOptions(const SaveDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainGroupId()) {
    query["DomainGroupId"] = request.getDomainGroupId();
  }

  if (!!request.hasDomainGroupName()) {
    query["DomainGroupName"] = request.getDomainGroupName();
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
    {"action" , "SaveDomainGroup"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveDomainGroupResponse>();
}

/**
 * @summary Invoke the SaveDomainGroup API to create or update a domain name group.
 *
 * @param request SaveDomainGroupRequest
 * @return SaveDomainGroupResponse
 */
SaveDomainGroupResponse Client::saveDomainGroup(const SaveDomainGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveDomainGroupWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveRegistrantProfile API to create or update a domain name registrant profile.
 *
 * @description The domain name registrant profile contains registrant information. When you create or update a registrant profile, we recommend that you fill in all registrant information according to your actual situation and ensure consistency between the Chinese and English versions. To avoid faults during domain name registry review, we recommend entering all English registrant information in lowercase letters. For specific requirements, see the parameter descriptions below.
 *
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

  if (!!request.hasZhAddress()) {
    query["ZhAddress"] = request.getZhAddress();
  }

  if (!!request.hasZhCity()) {
    query["ZhCity"] = request.getZhCity();
  }

  if (!!request.hasZhProvince()) {
    query["ZhProvince"] = request.getZhProvince();
  }

  if (!!request.hasZhRegistrantName()) {
    query["ZhRegistrantName"] = request.getZhRegistrantName();
  }

  if (!!request.hasZhRegistrantOrganization()) {
    query["ZhRegistrantOrganization"] = request.getZhRegistrantOrganization();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveRegistrantProfile"},
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveRegistrantProfile API to create or update a domain name registrant profile.
 *
 * @description The domain name registrant profile contains registrant information. When you create or update a registrant profile, we recommend that you fill in all registrant information according to your actual situation and ensure consistency between the Chinese and English versions. To avoid faults during domain name registry review, we recommend entering all English registrant information in lowercase letters. For specific requirements, see the parameter descriptions below.
 *
 * @param request SaveRegistrantProfileRequest
 * @return SaveRegistrantProfileResponse
 */
SaveRegistrantProfileResponse Client::saveRegistrantProfile(const SaveRegistrantProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveRegistrantProfileWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveRegistrantProfileRealNameVerification API to save domain contact and certificate information.
 *
 * @param request SaveRegistrantProfileRealNameVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveRegistrantProfileRealNameVerificationResponse
 */
SaveRegistrantProfileRealNameVerificationResponse Client::saveRegistrantProfileRealNameVerificationWithOptions(const SaveRegistrantProfileRealNameVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasIdentityCredential()) {
    query["IdentityCredential"] = request.getIdentityCredential();
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

  if (!!request.hasZhAddress()) {
    query["ZhAddress"] = request.getZhAddress();
  }

  if (!!request.hasZhCity()) {
    query["ZhCity"] = request.getZhCity();
  }

  if (!!request.hasZhProvince()) {
    query["ZhProvince"] = request.getZhProvince();
  }

  if (!!request.hasZhRegistrantName()) {
    query["ZhRegistrantName"] = request.getZhRegistrantName();
  }

  if (!!request.hasZhRegistrantOrganization()) {
    query["ZhRegistrantOrganization"] = request.getZhRegistrantOrganization();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveRegistrantProfileRealNameVerification"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveRegistrantProfileRealNameVerificationResponse>();
}

/**
 * @summary Invoke the SaveRegistrantProfileRealNameVerification API to save domain contact and certificate information.
 *
 * @param request SaveRegistrantProfileRealNameVerificationRequest
 * @return SaveRegistrantProfileRealNameVerificationResponse
 */
SaveRegistrantProfileRealNameVerificationResponse Client::saveRegistrantProfileRealNameVerification(const SaveRegistrantProfileRealNameVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveRegistrantProfileRealNameVerificationWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveSingleTaskForAddingDSRecord API to submit a job for creating a DS record.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForAddingDSRecord API to submit a job for creating a DS record.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
 *
 * @param request SaveSingleTaskForAddingDSRecordRequest
 * @return SaveSingleTaskForAddingDSRecordResponse
 */
SaveSingleTaskForAddingDSRecordResponse Client::saveSingleTaskForAddingDSRecord(const SaveSingleTaskForAddingDSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForAddingDSRecordWithOptions(request, runtime);
}

/**
 * @summary Submits a task for a quick transfer-out of a domain name.
 *
 * @description This is an asynchronous operation. To check the task\\"s status, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
 *
 * @param request SaveSingleTaskForApplyQuickTransferOutOpenlyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForApplyQuickTransferOutOpenlyResponse
 */
SaveSingleTaskForApplyQuickTransferOutOpenlyResponse Client::saveSingleTaskForApplyQuickTransferOutOpenlyWithOptions(const SaveSingleTaskForApplyQuickTransferOutOpenlyRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "SaveSingleTaskForApplyQuickTransferOutOpenly"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForApplyQuickTransferOutOpenlyResponse>();
}

/**
 * @summary Submits a task for a quick transfer-out of a domain name.
 *
 * @description This is an asynchronous operation. To check the task\\"s status, call the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
 *
 * @param request SaveSingleTaskForApplyQuickTransferOutOpenlyRequest
 * @return SaveSingleTaskForApplyQuickTransferOutOpenlyResponse
 */
SaveSingleTaskForApplyQuickTransferOutOpenlyResponse Client::saveSingleTaskForApplyQuickTransferOutOpenly(const SaveSingleTaskForApplyQuickTransferOutOpenlyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForApplyQuickTransferOutOpenlyWithOptions(request, runtime);
}

/**
 * @summary 确认转出
 *
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
    {"version" , "2018-01-29"},
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
 * @summary 确认转出
 *
 * @param request SaveSingleTaskForApprovingTransferOutRequest
 * @return SaveSingleTaskForApprovingTransferOutResponse
 */
SaveSingleTaskForApprovingTransferOutResponse Client::saveSingleTaskForApprovingTransferOut(const SaveSingleTaskForApprovingTransferOutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForApprovingTransferOutWithOptions(request, runtime);
}

/**
 * @summary Submit a job to attach an ENS address.
 *
 * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Submit a job to attach an ENS address.
 *
 * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveSingleTaskForAssociatingEnsRequest
 * @return SaveSingleTaskForAssociatingEnsResponse
 */
SaveSingleTaskForAssociatingEnsResponse Client::saveSingleTaskForAssociatingEns(const SaveSingleTaskForAssociatingEnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForAssociatingEnsWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveSingleTaskForCancelingTransferIn API to submit a job to cancel a domain name transfer-in.
 *
 * @description You can query the job execution result by invoking the QueryTaskDetailList API (~~67710~~).
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForCancelingTransferIn API to submit a job to cancel a domain name transfer-in.
 *
 * @description You can query the job execution result by invoking the QueryTaskDetailList API (~~67710~~).
 *
 * @param request SaveSingleTaskForCancelingTransferInRequest
 * @return SaveSingleTaskForCancelingTransferInResponse
 */
SaveSingleTaskForCancelingTransferInResponse Client::saveSingleTaskForCancelingTransferIn(const SaveSingleTaskForCancelingTransferInRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCancelingTransferInWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveSingleTaskForCancelingTransferOut API to submit a job to cancel a domain name transfer-out.
 *
 * @description You can query the job execution result by invoking the QueryTaskDetailList API (~~67710~~).
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForCancelingTransferOut API to submit a job to cancel a domain name transfer-out.
 *
 * @description You can query the job execution result by invoking the QueryTaskDetailList API (~~67710~~).
 *
 * @param request SaveSingleTaskForCancelingTransferOutRequest
 * @return SaveSingleTaskForCancelingTransferOutResponse
 */
SaveSingleTaskForCancelingTransferOutResponse Client::saveSingleTaskForCancelingTransferOut(const SaveSingleTaskForCancelingTransferOutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCancelingTransferOutWithOptions(request, runtime);
}

/**
 * @summary Invoke SaveSingleTaskForCreatingDnsHost to submit a single job for creating a DNS host.
 *
 * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke SaveSingleTaskForCreatingDnsHost to submit a single job for creating a DNS host.
 *
 * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveSingleTaskForCreatingDnsHostRequest
 * @return SaveSingleTaskForCreatingDnsHostResponse
 */
SaveSingleTaskForCreatingDnsHostResponse Client::saveSingleTaskForCreatingDnsHost(const SaveSingleTaskForCreatingDnsHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCreatingDnsHostWithOptions(request, runtime);
}

/**
 * @summary Submits a domain name registration task.
 *
 * @description Starting from March 1, 2022, you can associated domain names only by using real-name verified domain name registrant profiles. Passing registrant information directly to associated domain names is no longer supported.
 * To register a domain name, you must specify the domain name, registrant information, and DNS servers. You must associate the registrant information with a real-name verified domain name registrant profile by specifying the profile ID. You can use the default Alibaba Cloud DNS servers or specify custom DNS servers.
 * You can call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation to query the task execution result.
 *
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

  if (!!request.hasExpectedPunycode()) {
    query["ExpectedPunycode"] = request.getExpectedPunycode();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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

  if (!!request.hasZhAddress()) {
    query["ZhAddress"] = request.getZhAddress();
  }

  if (!!request.hasZhCity()) {
    query["ZhCity"] = request.getZhCity();
  }

  if (!!request.hasZhProvince()) {
    query["ZhProvince"] = request.getZhProvince();
  }

  if (!!request.hasZhRegistrantName()) {
    query["ZhRegistrantName"] = request.getZhRegistrantName();
  }

  if (!!request.hasZhRegistrantOrganization()) {
    query["ZhRegistrantOrganization"] = request.getZhRegistrantOrganization();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForCreatingOrderActivate"},
    {"version" , "2018-01-29"},
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
 * @summary Submits a domain name registration task.
 *
 * @description Starting from March 1, 2022, you can associated domain names only by using real-name verified domain name registrant profiles. Passing registrant information directly to associated domain names is no longer supported.
 * To register a domain name, you must specify the domain name, registrant information, and DNS servers. You must associate the registrant information with a real-name verified domain name registrant profile by specifying the profile ID. You can use the default Alibaba Cloud DNS servers or specify custom DNS servers.
 * You can call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) operation to query the task execution result.
 *
 * @param request SaveSingleTaskForCreatingOrderActivateRequest
 * @return SaveSingleTaskForCreatingOrderActivateResponse
 */
SaveSingleTaskForCreatingOrderActivateResponse Client::saveSingleTaskForCreatingOrderActivate(const SaveSingleTaskForCreatingOrderActivateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCreatingOrderActivateWithOptions(request, runtime);
}

/**
 * @summary Invoke SaveSingleTaskForCreatingOrderRedeem to submit a domain redeem job.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke SaveSingleTaskForCreatingOrderRedeem to submit a domain redeem job.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveSingleTaskForCreatingOrderRedeemRequest
 * @return SaveSingleTaskForCreatingOrderRedeemResponse
 */
SaveSingleTaskForCreatingOrderRedeemResponse Client::saveSingleTaskForCreatingOrderRedeem(const SaveSingleTaskForCreatingOrderRedeemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCreatingOrderRedeemWithOptions(request, runtime);
}

/**
 * @summary Use SaveSingleTaskForCreatingOrderRenew to submit a domain name renewal task.
 *
 * @description To check the execution results of the task, call [QueryTaskDetailList](~~QueryTaskDetailList~~).
 *
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

  if (!!request.hasPermitPremiumRenew()) {
    query["PermitPremiumRenew"] = request.getPermitPremiumRenew();
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
    {"version" , "2018-01-29"},
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
 * @summary Use SaveSingleTaskForCreatingOrderRenew to submit a domain name renewal task.
 *
 * @description To check the execution results of the task, call [QueryTaskDetailList](~~QueryTaskDetailList~~).
 *
 * @param request SaveSingleTaskForCreatingOrderRenewRequest
 * @return SaveSingleTaskForCreatingOrderRenewResponse
 */
SaveSingleTaskForCreatingOrderRenewResponse Client::saveSingleTaskForCreatingOrderRenew(const SaveSingleTaskForCreatingOrderRenewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCreatingOrderRenewWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveSingleTaskForCreatingOrderTransfer API to submit a domain name transfer-in job.
 *
 * @description You can query the task execution result by calling the QueryTaskDetailList API (~~67710~~).
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForCreatingOrderTransfer API to submit a domain name transfer-in job.
 *
 * @description You can query the task execution result by calling the QueryTaskDetailList API (~~67710~~).
 *
 * @param request SaveSingleTaskForCreatingOrderTransferRequest
 * @return SaveSingleTaskForCreatingOrderTransferResponse
 */
SaveSingleTaskForCreatingOrderTransferResponse Client::saveSingleTaskForCreatingOrderTransfer(const SaveSingleTaskForCreatingOrderTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCreatingOrderTransferWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveSingleTaskForDeletingDSRecord API to submit a job for deleting a DS record.
 *
 * @description You can query the task execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForDeletingDSRecord API to submit a job for deleting a DS record.
 *
 * @description You can query the task execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
 *
 * @param request SaveSingleTaskForDeletingDSRecordRequest
 * @return SaveSingleTaskForDeletingDSRecordResponse
 */
SaveSingleTaskForDeletingDSRecordResponse Client::saveSingleTaskForDeletingDSRecord(const SaveSingleTaskForDeletingDSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForDeletingDSRecordWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveSingleTaskForDeletingDnsHost API to submit a job for deleting a DNS host.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForDeletingDnsHost API to submit a job for deleting a DNS host.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
 *
 * @param request SaveSingleTaskForDeletingDnsHostRequest
 * @return SaveSingleTaskForDeletingDnsHostResponse
 */
SaveSingleTaskForDeletingDnsHostResponse Client::saveSingleTaskForDeletingDnsHost(const SaveSingleTaskForDeletingDnsHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForDeletingDnsHostWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveSingleTaskForDisassociatingEns API to submit a job for detaching an ENS address.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForDisassociatingEns API to submit a job for detaching an ENS address.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveSingleTaskForDisassociatingEnsRequest
 * @return SaveSingleTaskForDisassociatingEnsResponse
 */
SaveSingleTaskForDisassociatingEnsResponse Client::saveSingleTaskForDisassociatingEns(const SaveSingleTaskForDisassociatingEnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForDisassociatingEnsWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveSingleTaskForDomainNameProxyService API to submit a domain name proxy service job.
 *
 * @description Invoke the SaveSingleTaskForDomainNameProxyService API to submit a domain name proxy service job.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForDomainNameProxyService API to submit a domain name proxy service job.
 *
 * @description Invoke the SaveSingleTaskForDomainNameProxyService API to submit a domain name proxy service job.
 *
 * @param request SaveSingleTaskForDomainNameProxyServiceRequest
 * @return SaveSingleTaskForDomainNameProxyServiceResponse
 */
SaveSingleTaskForDomainNameProxyServiceResponse Client::saveSingleTaskForDomainNameProxyService(const SaveSingleTaskForDomainNameProxyServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForDomainNameProxyServiceWithOptions(request, runtime);
}

/**
 * @summary 提交生成域名证书任务
 *
 * @param request SaveSingleTaskForGenerateDomainCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForGenerateDomainCertificateResponse
 */
SaveSingleTaskForGenerateDomainCertificateResponse Client::saveSingleTaskForGenerateDomainCertificateWithOptions(const SaveSingleTaskForGenerateDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "SaveSingleTaskForGenerateDomainCertificate"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForGenerateDomainCertificateResponse>();
}

/**
 * @summary 提交生成域名证书任务
 *
 * @param request SaveSingleTaskForGenerateDomainCertificateRequest
 * @return SaveSingleTaskForGenerateDomainCertificateResponse
 */
SaveSingleTaskForGenerateDomainCertificateResponse Client::saveSingleTaskForGenerateDomainCertificate(const SaveSingleTaskForGenerateDomainCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForGenerateDomainCertificateWithOptions(request, runtime);
}

/**
 * @summary Invoke SaveSingleTaskForModifyingDSRecord to submit a job for modifying a DS record.
 *
 * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke SaveSingleTaskForModifyingDSRecord to submit a job for modifying a DS record.
 *
 * @description You can query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveSingleTaskForModifyingDSRecordRequest
 * @return SaveSingleTaskForModifyingDSRecordResponse
 */
SaveSingleTaskForModifyingDSRecordResponse Client::saveSingleTaskForModifyingDSRecord(const SaveSingleTaskForModifyingDSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForModifyingDSRecordWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveSingleTaskForModifyingDnsHost API to submit a job for modifying a DNS host.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForModifyingDnsHost API to submit a job for modifying a DNS host.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveSingleTaskForModifyingDnsHostRequest
 * @return SaveSingleTaskForModifyingDnsHostResponse
 */
SaveSingleTaskForModifyingDnsHostResponse Client::saveSingleTaskForModifyingDnsHost(const SaveSingleTaskForModifyingDnsHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForModifyingDnsHostWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveSingleTaskForQueryingTransferAuthorizationCode API to submit a job for retrieving the domain name transfer password.
 *
 * @description You can query the job execution result by calling the QueryTaskDetailList API (~~67710~~). The transfer password is returned in the TaskResult field of the corresponding job.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForQueryingTransferAuthorizationCode API to submit a job for retrieving the domain name transfer password.
 *
 * @description You can query the job execution result by calling the QueryTaskDetailList API (~~67710~~). The transfer password is returned in the TaskResult field of the corresponding job.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForSaveArtExtension API to submit a job for creating Art extension information.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForSaveArtExtension API to submit a job for creating Art extension information.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveSingleTaskForSaveArtExtensionRequest
 * @return SaveSingleTaskForSaveArtExtensionResponse
 */
SaveSingleTaskForSaveArtExtensionResponse Client::saveSingleTaskForSaveArtExtension(const SaveSingleTaskForSaveArtExtensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForSaveArtExtensionWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveSingleTaskForSynchronizingDSRecord API to submit a job for synchronizing a DS record.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForSynchronizingDSRecord API to submit a job for synchronizing a DS record.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveSingleTaskForSynchronizingDSRecordRequest
 * @return SaveSingleTaskForSynchronizingDSRecordResponse
 */
SaveSingleTaskForSynchronizingDSRecordResponse Client::saveSingleTaskForSynchronizingDSRecord(const SaveSingleTaskForSynchronizingDSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForSynchronizingDSRecordWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveSingleTaskForSynchronizingDnsHost API to submit a DNS host synchronization job. This is used to handle cases such as missing or inconsistent DNS hosts.
 *
 * @description You can query the job execution result by using the [Query Task Detail List](https://help.aliyun.com/document_detail/67710.html) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForSynchronizingDnsHost API to submit a DNS host synchronization job. This is used to handle cases such as missing or inconsistent DNS hosts.
 *
 * @description You can query the job execution result by using the [Query Task Detail List](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveSingleTaskForSynchronizingDnsHostRequest
 * @return SaveSingleTaskForSynchronizingDnsHostResponse
 */
SaveSingleTaskForSynchronizingDnsHostResponse Client::saveSingleTaskForSynchronizingDnsHost(const SaveSingleTaskForSynchronizingDnsHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForSynchronizingDnsHostWithOptions(request, runtime);
}

/**
 * @summary Submits a single transfer-out task based on the transfer key of a domain name.
 *
 * @description The task ID.
 *
 * @param request SaveSingleTaskForTransferOutByAuthorizationCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForTransferOutByAuthorizationCodeResponse
 */
SaveSingleTaskForTransferOutByAuthorizationCodeResponse Client::saveSingleTaskForTransferOutByAuthorizationCodeWithOptions(const SaveSingleTaskForTransferOutByAuthorizationCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationCode()) {
    query["AuthorizationCode"] = request.getAuthorizationCode();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSingleTaskForTransferOutByAuthorizationCode"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSingleTaskForTransferOutByAuthorizationCodeResponse>();
}

/**
 * @summary Submits a single transfer-out task based on the transfer key of a domain name.
 *
 * @description The task ID.
 *
 * @param request SaveSingleTaskForTransferOutByAuthorizationCodeRequest
 * @return SaveSingleTaskForTransferOutByAuthorizationCodeResponse
 */
SaveSingleTaskForTransferOutByAuthorizationCodeResponse Client::saveSingleTaskForTransferOutByAuthorizationCode(const SaveSingleTaskForTransferOutByAuthorizationCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForTransferOutByAuthorizationCodeWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveSingleTaskForTransferProhibitionLock API to submit a transfer prohibition lock job.
 *
 * @description You can query the task execution result by using the [List Task Details](https://help.aliyun.com/document_detail/67710.html) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForTransferProhibitionLock API to submit a transfer prohibition lock job.
 *
 * @description You can query the task execution result by using the [List Task Details](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveSingleTaskForTransferProhibitionLockRequest
 * @return SaveSingleTaskForTransferProhibitionLockResponse
 */
SaveSingleTaskForTransferProhibitionLockResponse Client::saveSingleTaskForTransferProhibitionLock(const SaveSingleTaskForTransferProhibitionLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForTransferProhibitionLockWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveSingleTaskForUpdateProhibitionLock API to submit a task for the Update Prohibition Lock.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForUpdateProhibitionLock API to submit a task for the Update Prohibition Lock.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](~~QueryTaskDetailList~~) API.
 *
 * @param request SaveSingleTaskForUpdateProhibitionLockRequest
 * @return SaveSingleTaskForUpdateProhibitionLockResponse
 */
SaveSingleTaskForUpdateProhibitionLockResponse Client::saveSingleTaskForUpdateProhibitionLock(const SaveSingleTaskForUpdateProhibitionLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForUpdateProhibitionLockWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveSingleTaskForUpdatingContactInfo API to submit a domain contact information update job.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveSingleTaskForUpdatingContactInfo API to submit a domain contact information update job.
 *
 * @description You can query the job execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveSingleTaskForUpdatingContactInfoRequest
 * @return SaveSingleTaskForUpdatingContactInfoResponse
 */
SaveSingleTaskForUpdatingContactInfoResponse Client::saveSingleTaskForUpdatingContactInfo(const SaveSingleTaskForUpdatingContactInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForUpdatingContactInfoWithOptions(request, runtime);
}

/**
 * @summary Submit a domain deletion job. Only whitelist users can access this API.
 *
 * @description Invoke SaveTaskForSubmittingDomainDelete to submit a domain deletion job.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Submit a domain deletion job. Only whitelist users can access this API.
 *
 * @description Invoke SaveTaskForSubmittingDomainDelete to submit a domain deletion job.
 *
 * @param request SaveTaskForSubmittingDomainDeleteRequest
 * @return SaveTaskForSubmittingDomainDeleteResponse
 */
SaveTaskForSubmittingDomainDeleteResponse Client::saveTaskForSubmittingDomainDelete(const SaveTaskForSubmittingDomainDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForSubmittingDomainDeleteWithOptions(request, runtime);
}

/**
 * @summary Submits real-name verification information for one or more domain names in bulk.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Submits real-name verification information for one or more domain names in bulk.
 *
 * @param request SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest
 * @return SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse
 */
SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse Client::saveTaskForSubmittingDomainRealNameVerificationByIdentityCredential(const SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialWithOptions(request, runtime);
}

/**
 * @summary Creates a task to submit real-name verification information for a domain name by using a specified registrant profile.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Creates a task to submit real-name verification information for a domain name by using a specified registrant profile.
 *
 * @param request SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest
 * @return SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse
 */
SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse Client::saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileID(const SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveTaskForUpdatingRegistrantInfoByIdentityCredential API to submit a batch job for updating registrant contact information by providing contact details and required documentation. You must provide the corresponding documentation as required.
 *
 * @description Query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
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

  if (!!request.hasZhAddress()) {
    query["ZhAddress"] = request.getZhAddress();
  }

  if (!!request.hasZhCity()) {
    query["ZhCity"] = request.getZhCity();
  }

  if (!!request.hasZhProvince()) {
    query["ZhProvince"] = request.getZhProvince();
  }

  if (!!request.hasZhRegistrantName()) {
    query["ZhRegistrantName"] = request.getZhRegistrantName();
  }

  if (!!request.hasZhRegistrantOrganization()) {
    query["ZhRegistrantOrganization"] = request.getZhRegistrantOrganization();
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SaveTaskForUpdatingRegistrantInfoByIdentityCredential API to submit a batch job for updating registrant contact information by providing contact details and required documentation. You must provide the corresponding documentation as required.
 *
 * @description Query the task execution result by using the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.html) API.
 *
 * @param request SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest
 * @return SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse
 */
SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse Client::saveTaskForUpdatingRegistrantInfoByIdentityCredential(const SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForUpdatingRegistrantInfoByIdentityCredentialWithOptions(request, runtime);
}

/**
 * @summary Submits a task to update registrant information using a registrant profile ID.
 *
 * @description Call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.htm?spm=a2c4g.11186623.0.0.33f47edeV0nkFx) API to check the task result. After a successful update, the registrant information for the domain name is updated to match the registrant profile. If the domain name requires real-name verification, it becomes verified.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Submits a task to update registrant information using a registrant profile ID.
 *
 * @description Call the [QueryTaskDetailList](https://help.aliyun.com/document_detail/67710.htm?spm=a2c4g.11186623.0.0.33f47edeV0nkFx) API to check the task result. After a successful update, the registrant information for the domain name is updated to match the registrant profile. If the domain name requires real-name verification, it becomes verified.
 *
 * @param request SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest
 * @return SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse
 */
SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse Client::saveTaskForUpdatingRegistrantInfoByRegistrantProfileID(const SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDWithOptions(request, runtime);
}

/**
 * @summary Traverses domain names.
 *
 * @description If you have a large number of domain names, a slow response may occur when you call an API operation to query domain names. In this case, you can call this operation to query domain names more quickly. When you call this operation for the first time, specify the request parameters except ScrollId. A scroll ID is returned without other data. In the second request, use the scroll ID obtained from the previous response. In subsequent requests, the newly specified request parameters do not take effect, and the request parameters that are specified in the first request prevail.
 *
 * @param request ScrollDomainListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScrollDomainListResponse
 */
ScrollDomainListResponse Client::scrollDomainListWithOptions(const ScrollDomainListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainGroupId()) {
    query["DomainGroupId"] = request.getDomainGroupId();
  }

  if (!!request.hasDomainStatus()) {
    query["DomainStatus"] = request.getDomainStatus();
  }

  if (!!request.hasEndExpirationDate()) {
    query["EndExpirationDate"] = request.getEndExpirationDate();
  }

  if (!!request.hasEndLength()) {
    query["EndLength"] = request.getEndLength();
  }

  if (!!request.hasEndRegistrationDate()) {
    query["EndRegistrationDate"] = request.getEndRegistrationDate();
  }

  if (!!request.hasExcluded()) {
    query["Excluded"] = request.getExcluded();
  }

  if (!!request.hasExcludedPrefix()) {
    query["ExcludedPrefix"] = request.getExcludedPrefix();
  }

  if (!!request.hasExcludedSuffix()) {
    query["ExcludedSuffix"] = request.getExcludedSuffix();
  }

  if (!!request.hasForm()) {
    query["Form"] = request.getForm();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.getKeyWord();
  }

  if (!!request.hasKeyWordPrefix()) {
    query["KeyWordPrefix"] = request.getKeyWordPrefix();
  }

  if (!!request.hasKeyWordSuffix()) {
    query["KeyWordSuffix"] = request.getKeyWordSuffix();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductDomainType()) {
    query["ProductDomainType"] = request.getProductDomainType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasScrollId()) {
    query["ScrollId"] = request.getScrollId();
  }

  if (!!request.hasStartExpirationDate()) {
    query["StartExpirationDate"] = request.getStartExpirationDate();
  }

  if (!!request.hasStartLength()) {
    query["StartLength"] = request.getStartLength();
  }

  if (!!request.hasStartRegistrationDate()) {
    query["StartRegistrationDate"] = request.getStartRegistrationDate();
  }

  if (!!request.hasSuffixs()) {
    query["Suffixs"] = request.getSuffixs();
  }

  if (!!request.hasTradeType()) {
    query["TradeType"] = request.getTradeType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ScrollDomainList"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScrollDomainListResponse>();
}

/**
 * @summary Traverses domain names.
 *
 * @description If you have a large number of domain names, a slow response may occur when you call an API operation to query domain names. In this case, you can call this operation to query domain names more quickly. When you call this operation for the first time, specify the request parameters except ScrollId. A scroll ID is returned without other data. In the second request, use the scroll ID obtained from the previous response. In subsequent requests, the newly specified request parameters do not take effect, and the request parameters that are specified in the first request prevail.
 *
 * @param request ScrollDomainListRequest
 * @return ScrollDomainListResponse
 */
ScrollDomainListResponse Client::scrollDomainList(const ScrollDomainListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return scrollDomainListWithOptions(request, runtime);
}

/**
 * @summary Invoke the SetDefaultRegistrantProfile API to set the default contact template for a domain name.
 *
 * @param request SetDefaultRegistrantProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultRegistrantProfileResponse
 */
SetDefaultRegistrantProfileResponse Client::setDefaultRegistrantProfileWithOptions(const SetDefaultRegistrantProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "SetDefaultRegistrantProfile"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDefaultRegistrantProfileResponse>();
}

/**
 * @summary Invoke the SetDefaultRegistrantProfile API to set the default contact template for a domain name.
 *
 * @param request SetDefaultRegistrantProfileRequest
 * @return SetDefaultRegistrantProfileResponse
 */
SetDefaultRegistrantProfileResponse Client::setDefaultRegistrantProfile(const SetDefaultRegistrantProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultRegistrantProfileWithOptions(request, runtime);
}

/**
 * @summary Sets or cancels auto-renewal for a domain name.
 *
 * @description This operation currently supports only domain names registered on the China site (aliyun.com).
 * **Before using this operation, make sure that you fully understand the billing method and [pricing](https://wanwang.aliyun.com/help/price.html?spm=5176.22941859.J_9989412330.10.68a51838KnzTeD) of domain name services.**
 *
 * @param request SetupDomainAutoRenewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetupDomainAutoRenewResponse
 */
SetupDomainAutoRenewResponse Client::setupDomainAutoRenewWithOptions(const SetupDomainAutoRenewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOperation()) {
    query["Operation"] = request.getOperation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetupDomainAutoRenew"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetupDomainAutoRenewResponse>();
}

/**
 * @summary Sets or cancels auto-renewal for a domain name.
 *
 * @description This operation currently supports only domain names registered on the China site (aliyun.com).
 * **Before using this operation, make sure that you fully understand the billing method and [pricing](https://wanwang.aliyun.com/help/price.html?spm=5176.22941859.J_9989412330.10.68a51838KnzTeD) of domain name services.**
 *
 * @param request SetupDomainAutoRenewRequest
 * @return SetupDomainAutoRenewResponse
 */
SetupDomainAutoRenewResponse Client::setupDomainAutoRenew(const SetupDomainAutoRenewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setupDomainAutoRenewWithOptions(request, runtime);
}

/**
 * @summary Submit documentation for special domain name services
 *
 * @param request SubmitDomainSpecialBizCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDomainSpecialBizCredentialsResponse
 */
SubmitDomainSpecialBizCredentialsResponse Client::submitDomainSpecialBizCredentialsWithOptions(const SubmitDomainSpecialBizCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  json body = {};
  if (!!request.hasBizId()) {
    body["BizId"] = request.getBizId();
  }

  if (!!request.hasCredentials()) {
    body["Credentials"] = request.getCredentials();
  }

  if (!!request.hasExtend()) {
    body["Extend"] = request.getExtend();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitDomainSpecialBizCredentials"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDomainSpecialBizCredentialsResponse>();
}

/**
 * @summary Submit documentation for special domain name services
 *
 * @param request SubmitDomainSpecialBizCredentialsRequest
 * @return SubmitDomainSpecialBizCredentialsResponse
 */
SubmitDomainSpecialBizCredentialsResponse Client::submitDomainSpecialBizCredentials(const SubmitDomainSpecialBizCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDomainSpecialBizCredentialsWithOptions(request, runtime);
}

/**
 * @summary Invoke the SubmitEmailVerification API to send an email verification message.
 *
 * @description After receiving the verification email, you must log on to your mailbox and complete verification within 3 days. If the verification email has expired, you can invoke the [ResendEmailVerification](https://help.aliyun.com/document_detail/67734.html) API to resend the verification email.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the SubmitEmailVerification API to send an email verification message.
 *
 * @description After receiving the verification email, you must log on to your mailbox and complete verification within 3 days. If the verification email has expired, you can invoke the [ResendEmailVerification](https://help.aliyun.com/document_detail/67734.html) API to resend the verification email.
 *
 * @param request SubmitEmailVerificationRequest
 * @return SubmitEmailVerificationResponse
 */
SubmitEmailVerificationResponse Client::submitEmailVerification(const SubmitEmailVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitEmailVerificationWithOptions(request, runtime);
}

/**
 * @summary Invoke the SubmitOperationAuditInfo API to submit self-service business review information.
 *
 * @param request SubmitOperationAuditInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitOperationAuditInfoResponse
 */
SubmitOperationAuditInfoResponse Client::submitOperationAuditInfoWithOptions(const SubmitOperationAuditInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditInfo()) {
    query["AuditInfo"] = request.getAuditInfo();
  }

  if (!!request.hasAuditType()) {
    query["AuditType"] = request.getAuditType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitOperationAuditInfo"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitOperationAuditInfoResponse>();
}

/**
 * @summary Invoke the SubmitOperationAuditInfo API to submit self-service business review information.
 *
 * @param request SubmitOperationAuditInfoRequest
 * @return SubmitOperationAuditInfoResponse
 */
SubmitOperationAuditInfoResponse Client::submitOperationAuditInfo(const SubmitOperationAuditInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitOperationAuditInfoWithOptions(request, runtime);
}

/**
 * @summary Invoke the SubmitOperationCredentials API to submit certificate materials for self-service operations pending review.
 *
 * @param request SubmitOperationCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitOperationCredentialsResponse
 */
SubmitOperationCredentialsResponse Client::submitOperationCredentialsWithOptions(const SubmitOperationCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditRecordId()) {
    query["AuditRecordId"] = request.getAuditRecordId();
  }

  if (!!request.hasAuditType()) {
    query["AuditType"] = request.getAuditType();
  }

  if (!!request.hasCredentials()) {
    query["Credentials"] = request.getCredentials();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegType()) {
    query["RegType"] = request.getRegType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitOperationCredentials"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitOperationCredentialsResponse>();
}

/**
 * @summary Invoke the SubmitOperationCredentials API to submit certificate materials for self-service operations pending review.
 *
 * @param request SubmitOperationCredentialsRequest
 * @return SubmitOperationCredentialsResponse
 */
SubmitOperationCredentialsResponse Client::submitOperationCredentials(const SubmitOperationCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitOperationCredentialsWithOptions(request, runtime);
}

/**
 * @summary Calls the TransferInCheckMailToken operation to verify the email token of a domain name registrant.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Calls the TransferInCheckMailToken operation to verify the email token of a domain name registrant.
 *
 * @param request TransferInCheckMailTokenRequest
 * @return TransferInCheckMailTokenResponse
 */
TransferInCheckMailTokenResponse Client::transferInCheckMailToken(const TransferInCheckMailTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferInCheckMailTokenWithOptions(request, runtime);
}

/**
 * @summary Invoke the TransferInReenterTransferAuthorizationCode API to re-enter the transfer password for domain name transfer-in.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the TransferInReenterTransferAuthorizationCode API to re-enter the transfer password for domain name transfer-in.
 *
 * @param request TransferInReenterTransferAuthorizationCodeRequest
 * @return TransferInReenterTransferAuthorizationCodeResponse
 */
TransferInReenterTransferAuthorizationCodeResponse Client::transferInReenterTransferAuthorizationCode(const TransferInReenterTransferAuthorizationCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferInReenterTransferAuthorizationCodeWithOptions(request, runtime);
}

/**
 * @summary Invoke TransferInRefetchWhoisEmail to perform email verification for domain transfer-in.
 *
 * @description The system automatically retrieves the registrant\\"s email address from WHOIS. If the email address is incorrect or cannot be retrieved, the system will re-scrape the WHOIS email address.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke TransferInRefetchWhoisEmail to perform email verification for domain transfer-in.
 *
 * @description The system automatically retrieves the registrant\\"s email address from WHOIS. If the email address is incorrect or cannot be retrieved, the system will re-scrape the WHOIS email address.
 *
 * @param request TransferInRefetchWhoisEmailRequest
 * @return TransferInRefetchWhoisEmailResponse
 */
TransferInRefetchWhoisEmailResponse Client::transferInRefetchWhoisEmail(const TransferInRefetchWhoisEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferInRefetchWhoisEmailWithOptions(request, runtime);
}

/**
 * @summary Invoke the TransferInResendMailToken API to resend the verification email for domain transfer-in.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the TransferInResendMailToken API to resend the verification email for domain transfer-in.
 *
 * @param request TransferInResendMailTokenRequest
 * @return TransferInResendMailTokenResponse
 */
TransferInResendMailTokenResponse Client::transferInResendMailToken(const TransferInResendMailTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferInResendMailTokenWithOptions(request, runtime);
}

/**
 * @summary If you use file upload to replace more than 1,000 domain names in a domain name group, the operation is asynchronous. The result is available only after the request is processed.
 *
 * @param request UpdateDomainToDomainGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDomainToDomainGroupResponse
 */
UpdateDomainToDomainGroupResponse Client::updateDomainToDomainGroupWithOptions(const UpdateDomainToDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSource()) {
    query["DataSource"] = request.getDataSource();
  }

  if (!!request.hasDomainGroupId()) {
    query["DomainGroupId"] = request.getDomainGroupId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasReplace()) {
    query["Replace"] = request.getReplace();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  json body = {};
  if (!!request.hasFileToUpload()) {
    body["FileToUpload"] = request.getFileToUpload();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDomainToDomainGroup"},
    {"version" , "2018-01-29"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDomainToDomainGroupResponse>();
}

/**
 * @summary If you use file upload to replace more than 1,000 domain names in a domain name group, the operation is asynchronous. The result is available only after the request is processed.
 *
 * @param request UpdateDomainToDomainGroupRequest
 * @return UpdateDomainToDomainGroupResponse
 */
UpdateDomainToDomainGroupResponse Client::updateDomainToDomainGroup(const UpdateDomainToDomainGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDomainToDomainGroupWithOptions(request, runtime);
}

/**
 * @summary Whether some parameters are required depends on the requirements of the domain name registry. This API validates the compliance and validity of the input parameters and does not perform validation against actual domain information.
 *
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

  if (!!request.hasZhAddress()) {
    query["ZhAddress"] = request.getZhAddress();
  }

  if (!!request.hasZhCity()) {
    query["ZhCity"] = request.getZhCity();
  }

  if (!!request.hasZhProvince()) {
    query["ZhProvince"] = request.getZhProvince();
  }

  if (!!request.hasZhRegistrantName()) {
    query["ZhRegistrantName"] = request.getZhRegistrantName();
  }

  if (!!request.hasZhRegistrantOrganization()) {
    query["ZhRegistrantOrganization"] = request.getZhRegistrantOrganization();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyContactField"},
    {"version" , "2018-01-29"},
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
 * @summary Whether some parameters are required depends on the requirements of the domain name registry. This API validates the compliance and validity of the input parameters and does not perform validation against actual domain information.
 *
 * @param request VerifyContactFieldRequest
 * @return VerifyContactFieldResponse
 */
VerifyContactFieldResponse Client::verifyContactField(const VerifyContactFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyContactFieldWithOptions(request, runtime);
}

/**
 * @summary Invoke the VerifyEmail API to submit email verification.
 *
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
    {"version" , "2018-01-29"},
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
 * @summary Invoke the VerifyEmail API to submit email verification.
 *
 * @param request VerifyEmailRequest
 * @return VerifyEmailResponse
 */
VerifyEmailResponse Client::verifyEmail(const VerifyEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyEmailWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Domain20180129