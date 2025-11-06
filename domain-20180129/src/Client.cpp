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
 * @summary 确认任务结果
 *
 * @param request AcknowledgeTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AcknowledgeTaskResultResponse
 */
AcknowledgeTaskResultResponse Client::acknowledgeTaskResultWithOptions(const AcknowledgeTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasTaskDetailNo()) {
    query["TaskDetailNo"] = request.taskDetailNo();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 确认任务结果
 *
 * @param request AcknowledgeTaskResultRequest
 * @return AcknowledgeTaskResultResponse
 */
AcknowledgeTaskResultResponse Client::acknowledgeTaskResult(const AcknowledgeTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acknowledgeTaskResultWithOptions(request, runtime);
}

/**
 * @summary 通过关键字进行批量模糊匹配
 *
 * @param request BatchFuzzyMatchDomainSensitiveWordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchFuzzyMatchDomainSensitiveWordResponse
 */
BatchFuzzyMatchDomainSensitiveWordResponse Client::batchFuzzyMatchDomainSensitiveWordWithOptions(const BatchFuzzyMatchDomainSensitiveWordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 通过关键字进行批量模糊匹配
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
    query["ActionType"] = request.actionType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 取消审核
 *
 * @param request CancelOperationAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelOperationAuditResponse
 */
CancelOperationAuditResponse Client::cancelOperationAuditWithOptions(const CancelOperationAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditRecordId()) {
    query["AuditRecordId"] = request.auditRecordId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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
 * @summary 取消审核
 *
 * @param request CancelOperationAuditRequest
 * @return CancelOperationAuditResponse
 */
CancelOperationAuditResponse Client::cancelOperationAudit(const CancelOperationAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelOperationAuditWithOptions(request, runtime);
}

/**
 * @param request CancelQualificationVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelQualificationVerificationResponse
 */
CancelQualificationVerificationResponse Client::cancelQualificationVerificationWithOptions(const CancelQualificationVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasQualificationType()) {
    query["QualificationType"] = request.qualificationType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request CancelQualificationVerificationRequest
 * @return CancelQualificationVerificationResponse
 */
CancelQualificationVerificationResponse Client::cancelQualificationVerification(const CancelQualificationVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelQualificationVerificationWithOptions(request, runtime);
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
    query["Lang"] = request.lang();
  }

  if (!!request.hasTaskNo()) {
    query["TaskNo"] = request.taskNo();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request CancelTaskRequest
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTask(const CancelTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelTaskWithOptions(request, runtime);
}

/**
 * @summary 修改实例所在资源组
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 修改实例所在资源组
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasFeeCommand()) {
    query["FeeCommand"] = request.feeCommand();
  }

  if (!!request.hasFeeCurrency()) {
    query["FeeCurrency"] = request.feeCurrency();
  }

  if (!!request.hasFeePeriod()) {
    query["FeePeriod"] = request.feePeriod();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request CheckDomainSunriseClaimRequest
 * @return CheckDomainSunriseClaimResponse
 */
CheckDomainSunriseClaimResponse Client::checkDomainSunriseClaim(const CheckDomainSunriseClaimRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDomainSunriseClaimWithOptions(request, runtime);
}

/**
 * @summary 校验在售国际一口价域名状态和询价
 *
 * @param request CheckIntlFixPriceDomainStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckIntlFixPriceDomainStatusResponse
 */
CheckIntlFixPriceDomainStatusResponse Client::checkIntlFixPriceDomainStatusWithOptions(const CheckIntlFixPriceDomainStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
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
 * @summary 校验在售国际一口价域名状态和询价
 *
 * @param request CheckIntlFixPriceDomainStatusRequest
 * @return CheckIntlFixPriceDomainStatusResponse
 */
CheckIntlFixPriceDomainStatusResponse Client::checkIntlFixPriceDomainStatus(const CheckIntlFixPriceDomainStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkIntlFixPriceDomainStatusWithOptions(request, runtime);
}

/**
 * @param request CheckMaxYearOfServerLockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckMaxYearOfServerLockResponse
 */
CheckMaxYearOfServerLockResponse Client::checkMaxYearOfServerLockWithOptions(const CheckMaxYearOfServerLockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckAction()) {
    query["CheckAction"] = request.checkAction();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request CheckMaxYearOfServerLockRequest
 * @return CheckMaxYearOfServerLockResponse
 */
CheckMaxYearOfServerLockResponse Client::checkMaxYearOfServerLock(const CheckMaxYearOfServerLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkMaxYearOfServerLockWithOptions(request, runtime);
}

/**
 * @param request CheckProcessingServerLockApplyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckProcessingServerLockApplyResponse
 */
CheckProcessingServerLockApplyResponse Client::checkProcessingServerLockApplyWithOptions(const CheckProcessingServerLockApplyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasFeePeriod()) {
    query["FeePeriod"] = request.feePeriod();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request CheckProcessingServerLockApplyRequest
 * @return CheckProcessingServerLockApplyResponse
 */
CheckProcessingServerLockApplyResponse Client::checkProcessingServerLockApply(const CheckProcessingServerLockApplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkProcessingServerLockApplyWithOptions(request, runtime);
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasTransferAuthorizationCode()) {
    query["TransferAuthorizationCode"] = request.transferAuthorizationCode();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request ConfirmTransferInEmailRequest
 * @return ConfirmTransferInEmailResponse
 */
ConfirmTransferInEmailResponse Client::confirmTransferInEmail(const ConfirmTransferInEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return confirmTransferInEmailWithOptions(request, runtime);
}

/**
 * @summary 创建国际一口价订单
 *
 * @param request CreateIntlFixedPriceDomainOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIntlFixedPriceDomainOrderResponse
 */
CreateIntlFixedPriceDomainOrderResponse Client::createIntlFixedPriceDomainOrderWithOptions(const CreateIntlFixedPriceDomainOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasExpectedPrice()) {
    query["ExpectedPrice"] = request.expectedPrice();
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
 * @summary 创建国际一口价订单
 *
 * @param request CreateIntlFixedPriceDomainOrderRequest
 * @return CreateIntlFixedPriceDomainOrderResponse
 */
CreateIntlFixedPriceDomainOrderResponse Client::createIntlFixedPriceDomainOrder(const CreateIntlFixedPriceDomainOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIntlFixedPriceDomainOrderWithOptions(request, runtime);
}

/**
 * @summary 批量删除联系人模板
 *
 * @param request DeleteContactTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactTemplatesResponse
 */
DeleteContactTemplatesResponse Client::deleteContactTemplatesWithOptions(const DeleteContactTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegistrantProfileIds()) {
    query["RegistrantProfileIds"] = request.registrantProfileIds();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 批量删除联系人模板
 *
 * @param request DeleteContactTemplatesRequest
 * @return DeleteContactTemplatesResponse
 */
DeleteContactTemplatesResponse Client::deleteContactTemplates(const DeleteContactTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactTemplatesWithOptions(request, runtime);
}

/**
 * @summary 删除域名分组
 *
 * @param request DeleteDomainGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainGroupResponse
 */
DeleteDomainGroupResponse Client::deleteDomainGroupWithOptions(const DeleteDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainGroupId()) {
    query["DomainGroupId"] = request.domainGroupId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 删除域名分组
 *
 * @param request DeleteDomainGroupRequest
 * @return DeleteDomainGroupResponse
 */
DeleteDomainGroupResponse Client::deleteDomainGroup(const DeleteDomainGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainGroupWithOptions(request, runtime);
}

/**
 * @summary 删除邮箱验证
 *
 * @param request DeleteEmailVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEmailVerificationResponse
 */
DeleteEmailVerificationResponse Client::deleteEmailVerificationWithOptions(const DeleteEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 删除邮箱验证
 *
 * @param request DeleteEmailVerificationRequest
 * @return DeleteEmailVerificationResponse
 */
DeleteEmailVerificationResponse Client::deleteEmailVerification(const DeleteEmailVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEmailVerificationWithOptions(request, runtime);
}

/**
 * @summary 删除联系人模板
 *
 * @param request DeleteRegistrantProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRegistrantProfileResponse
 */
DeleteRegistrantProfileResponse Client::deleteRegistrantProfileWithOptions(const DeleteRegistrantProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.registrantProfileId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 删除联系人模板
 *
 * @param request DeleteRegistrantProfileRequest
 * @return DeleteRegistrantProfileResponse
 */
DeleteRegistrantProfileResponse Client::deleteRegistrantProfile(const DeleteRegistrantProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRegistrantProfileWithOptions(request, runtime);
}

/**
 * @summary 取消域名特殊业务流程
 *
 * @param request DomainSpecialBizCancelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DomainSpecialBizCancelResponse
 */
DomainSpecialBizCancelResponse Client::domainSpecialBizCancelWithOptions(const DomainSpecialBizCancelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  json body = {};
  if (!!request.hasBizId()) {
    body["BizId"] = request.bizId();
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
 * @summary 取消域名特殊业务流程
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
    query["Email"] = request.email();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 通过关键字进行模糊匹配
 *
 * @param request FuzzyMatchDomainSensitiveWordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FuzzyMatchDomainSensitiveWordResponse
 */
FuzzyMatchDomainSensitiveWordResponse Client::fuzzyMatchDomainSensitiveWordWithOptions(const FuzzyMatchDomainSensitiveWordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 通过关键字进行模糊匹配
 *
 * @param request FuzzyMatchDomainSensitiveWordRequest
 * @return FuzzyMatchDomainSensitiveWordResponse
 */
FuzzyMatchDomainSensitiveWordResponse Client::fuzzyMatchDomainSensitiveWord(const FuzzyMatchDomainSensitiveWordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fuzzyMatchDomainSensitiveWordWithOptions(request, runtime);
}

/**
 * @summary 查询国际一口价在售域名列表
 *
 * @param request GetIntlFixPriceDomainListUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIntlFixPriceDomainListUrlResponse
 */
GetIntlFixPriceDomainListUrlResponse Client::getIntlFixPriceDomainListUrlWithOptions(const GetIntlFixPriceDomainListUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListDate()) {
    query["ListDate"] = request.listDate();
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
 * @summary 查询国际一口价在售域名列表
 *
 * @param request GetIntlFixPriceDomainListUrlRequest
 * @return GetIntlFixPriceDomainListUrlResponse
 */
GetIntlFixPriceDomainListUrlResponse Client::getIntlFixPriceDomainListUrl(const GetIntlFixPriceDomainListUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIntlFixPriceDomainListUrlWithOptions(request, runtime);
}

/**
 * @param request GetOperationOssUploadPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOperationOssUploadPolicyResponse
 */
GetOperationOssUploadPolicyResponse Client::getOperationOssUploadPolicyWithOptions(const GetOperationOssUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditType()) {
    query["AuditType"] = request.auditType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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
 * @param request GetOperationOssUploadPolicyRequest
 * @return GetOperationOssUploadPolicyResponse
 */
GetOperationOssUploadPolicyResponse Client::getOperationOssUploadPolicy(const GetOperationOssUploadPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOperationOssUploadPolicyWithOptions(request, runtime);
}

/**
 * @param request GetQualificationUploadPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualificationUploadPolicyResponse
 */
GetQualificationUploadPolicyResponse Client::getQualificationUploadPolicyWithOptions(const GetQualificationUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request GetQualificationUploadPolicyRequest
 * @return GetQualificationUploadPolicyResponse
 */
GetQualificationUploadPolicyResponse Client::getQualificationUploadPolicy(const GetQualificationUploadPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualificationUploadPolicyWithOptions(request, runtime);
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
    query["BeginCreateTime"] = request.beginCreateTime();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasEndCreateTime()) {
    query["EndCreateTime"] = request.endCreateTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasVerificationStatus()) {
    query["VerificationStatus"] = request.verificationStatus();
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
    query["BeginStartDate"] = request.beginStartDate();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndExpireDate()) {
    query["EndExpireDate"] = request.endExpireDate();
  }

  if (!!request.hasEndStartDate()) {
    query["EndStartDate"] = request.endStartDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLockProductId()) {
    query["LockProductId"] = request.lockProductId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOrderByType()) {
    query["OrderByType"] = request.orderByType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasServerLockStatus()) {
    query["ServerLockStatus"] = request.serverLockStatus();
  }

  if (!!request.hasStartExpireDate()) {
    query["StartExpireDate"] = request.startExpireDate();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request LookupTmchNoticeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LookupTmchNoticeResponse
 */
LookupTmchNoticeResponse Client::lookupTmchNoticeWithOptions(const LookupTmchNoticeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClaimKey()) {
    query["ClaimKey"] = request.claimKey();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTaskNo()) {
    query["TaskNo"] = request.taskNo();
  }

  if (!!request.hasTaskResultStatus()) {
    query["TaskResultStatus"] = request.taskResultStatus();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request PollTaskResultRequest
 * @return PollTaskResultResponse
 */
PollTaskResultResponse Client::pollTaskResult(const PollTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pollTaskResultWithOptions(request, runtime);
}

/**
 * @summary 搜索域名列表
 *
 * @param request QueryAdvancedDomainListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAdvancedDomainListResponse
 */
QueryAdvancedDomainListResponse Client::queryAdvancedDomainListWithOptions(const QueryAdvancedDomainListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainGroupId()) {
    query["DomainGroupId"] = request.domainGroupId();
  }

  if (!!request.hasDomainNameSort()) {
    query["DomainNameSort"] = request.domainNameSort();
  }

  if (!!request.hasDomainStatus()) {
    query["DomainStatus"] = request.domainStatus();
  }

  if (!!request.hasEndExpirationDate()) {
    query["EndExpirationDate"] = request.endExpirationDate();
  }

  if (!!request.hasEndLength()) {
    query["EndLength"] = request.endLength();
  }

  if (!!request.hasEndRegistrationDate()) {
    query["EndRegistrationDate"] = request.endRegistrationDate();
  }

  if (!!request.hasExcluded()) {
    query["Excluded"] = request.excluded();
  }

  if (!!request.hasExcludedPrefix()) {
    query["ExcludedPrefix"] = request.excludedPrefix();
  }

  if (!!request.hasExcludedSuffix()) {
    query["ExcludedSuffix"] = request.excludedSuffix();
  }

  if (!!request.hasExpirationDateSort()) {
    query["ExpirationDateSort"] = request.expirationDateSort();
  }

  if (!!request.hasForm()) {
    query["Form"] = request.form();
  }

  if (!!request.hasIsPremiumDomain()) {
    query["IsPremiumDomain"] = request.isPremiumDomain();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasKeyWordPrefix()) {
    query["KeyWordPrefix"] = request.keyWordPrefix();
  }

  if (!!request.hasKeyWordSuffix()) {
    query["KeyWordSuffix"] = request.keyWordSuffix();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductDomainType()) {
    query["ProductDomainType"] = request.productDomainType();
  }

  if (!!request.hasProductDomainTypeSort()) {
    query["ProductDomainTypeSort"] = request.productDomainTypeSort();
  }

  if (!!request.hasRegistrationDateSort()) {
    query["RegistrationDateSort"] = request.registrationDateSort();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartExpirationDate()) {
    query["StartExpirationDate"] = request.startExpirationDate();
  }

  if (!!request.hasStartLength()) {
    query["StartLength"] = request.startLength();
  }

  if (!!request.hasStartRegistrationDate()) {
    query["StartRegistrationDate"] = request.startRegistrationDate();
  }

  if (!!request.hasSuffixs()) {
    query["Suffixs"] = request.suffixs();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTradeType()) {
    query["TradeType"] = request.tradeType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 搜索域名列表
 *
 * @param request QueryAdvancedDomainListRequest
 * @return QueryAdvancedDomainListResponse
 */
QueryAdvancedDomainListResponse Client::queryAdvancedDomainList(const QueryAdvancedDomainListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAdvancedDomainListWithOptions(request, runtime);
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request QueryArtExtensionRequest
 * @return QueryArtExtensionResponse
 */
QueryArtExtensionResponse Client::queryArtExtension(const QueryArtExtensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryArtExtensionWithOptions(request, runtime);
}

/**
 * @summary 查询操作记录
 *
 * @param request QueryChangeLogListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryChangeLogListResponse
 */
QueryChangeLogListResponse Client::queryChangeLogListWithOptions(const QueryChangeLogListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 查询操作记录
 *
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
    query["ContactType"] = request.contactType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request QueryDnsHostRequest
 * @return QueryDnsHostResponse
 */
QueryDnsHostResponse Client::queryDnsHost(const QueryDnsHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDnsHostWithOptions(request, runtime);
}

/**
 * @param request QueryDomainAdminDivisionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainAdminDivisionResponse
 */
QueryDomainAdminDivisionResponse Client::queryDomainAdminDivisionWithOptions(const QueryDomainAdminDivisionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request QueryDomainAdminDivisionRequest
 * @return QueryDomainAdminDivisionResponse
 */
QueryDomainAdminDivisionResponse Client::queryDomainAdminDivision(const QueryDomainAdminDivisionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainAdminDivisionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a domain name.
 *
 * @param request QueryDomainByDomainNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainByDomainNameResponse
 */
QueryDomainByDomainNameResponse Client::queryDomainByDomainNameWithOptions(const QueryDomainByDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary Queries the information about a domain name.
 *
 * @param request QueryDomainByDomainNameRequest
 * @return QueryDomainByDomainNameResponse
 */
QueryDomainByDomainNameResponse Client::queryDomainByDomainName(const QueryDomainByDomainNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainByDomainNameWithOptions(request, runtime);
}

/**
 * @summary 根据实例id查询域名信息
 *
 * @param request QueryDomainByInstanceIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainByInstanceIdResponse
 */
QueryDomainByInstanceIdResponse Client::queryDomainByInstanceIdWithOptions(const QueryDomainByInstanceIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 根据实例id查询域名信息
 *
 * @param request QueryDomainByInstanceIdRequest
 * @return QueryDomainByInstanceIdResponse
 */
QueryDomainByInstanceIdResponse Client::queryDomainByInstanceId(const QueryDomainByInstanceIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainByInstanceIdWithOptions(request, runtime);
}

/**
 * @param request QueryDomainGroupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainGroupListResponse
 */
QueryDomainGroupListResponse Client::queryDomainGroupListWithOptions(const QueryDomainGroupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainGroupName()) {
    query["DomainGroupName"] = request.domainGroupName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasShowDeletingGroup()) {
    query["ShowDeletingGroup"] = request.showDeletingGroup();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request QueryDomainGroupListRequest
 * @return QueryDomainGroupListResponse
 */
QueryDomainGroupListResponse Client::queryDomainGroupList(const QueryDomainGroupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainGroupListWithOptions(request, runtime);
}

/**
 * @summary Queries a list of domain names within your Alibaba Cloud account by page.
 *
 * @param request QueryDomainListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainListResponse
 */
QueryDomainListResponse Client::queryDomainListWithOptions(const QueryDomainListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCcompany()) {
    query["Ccompany"] = request.ccompany();
  }

  if (!!request.hasDomainGroupId()) {
    query["DomainGroupId"] = request.domainGroupId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndExpirationDate()) {
    query["EndExpirationDate"] = request.endExpirationDate();
  }

  if (!!request.hasEndRegistrationDate()) {
    query["EndRegistrationDate"] = request.endRegistrationDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrderByType()) {
    query["OrderByType"] = request.orderByType();
  }

  if (!!request.hasOrderKeyType()) {
    query["OrderKeyType"] = request.orderKeyType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductDomainType()) {
    query["ProductDomainType"] = request.productDomainType();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  if (!!request.hasRegistrar()) {
    query["Registrar"] = request.registrar();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartExpirationDate()) {
    query["StartExpirationDate"] = request.startExpirationDate();
  }

  if (!!request.hasStartRegistrationDate()) {
    query["StartRegistrationDate"] = request.startRegistrationDate();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary Queries a list of domain names within your Alibaba Cloud account by page.
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasFetchImage()) {
    query["FetchImage"] = request.fetchImage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
    request.setDomainItemShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.domainItem(), "DomainItem", "json"));
  }

  json query = {};
  if (!!request.hasCurrency()) {
    query["Currency"] = request.currency();
  }

  if (!!request.hasDomainItemShrink()) {
    query["DomainItem"] = request.domainItemShrink();
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
 * @summary 查询域名特殊业务详情
 *
 * @param request QueryDomainSpecialBizDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainSpecialBizDetailResponse
 */
QueryDomainSpecialBizDetailResponse Client::queryDomainSpecialBizDetailWithOptions(const QueryDomainSpecialBizDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  json body = {};
  if (!!request.hasBizId()) {
    body["BizId"] = request.bizId();
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
 * @summary 查询域名特殊业务详情
 *
 * @param request QueryDomainSpecialBizDetailRequest
 * @return QueryDomainSpecialBizDetailResponse
 */
QueryDomainSpecialBizDetailResponse Client::queryDomainSpecialBizDetail(const QueryDomainSpecialBizDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainSpecialBizDetailWithOptions(request, runtime);
}

/**
 * @summary 通过域名查询域名特殊业务详情
 *
 * @param request QueryDomainSpecialBizInfoByDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainSpecialBizInfoByDomainResponse
 */
QueryDomainSpecialBizInfoByDomainResponse Client::queryDomainSpecialBizInfoByDomainWithOptions(const QueryDomainSpecialBizInfoByDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  json body = {};
  if (!!request.hasBizType()) {
    body["BizType"] = request.bizType();
  }

  if (!!request.hasDomainName()) {
    body["DomainName"] = request.domainName();
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
 * @summary 通过域名查询域名特殊业务详情
 *
 * @param request QueryDomainSpecialBizInfoByDomainRequest
 * @return QueryDomainSpecialBizInfoByDomainResponse
 */
QueryDomainSpecialBizInfoByDomainResponse Client::queryDomainSpecialBizInfoByDomain(const QueryDomainSpecialBizInfoByDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainSpecialBizInfoByDomainWithOptions(request, runtime);
}

/**
 * @param request QueryDomainSuffixRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDomainSuffixResponse
 */
QueryDomainSuffixResponse Client::queryDomainSuffixWithOptions(const QueryDomainSuffixRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request QueryDomainSuffixRequest
 * @return QueryDomainSuffixResponse
 */
QueryDomainSuffixResponse Client::queryDomainSuffix(const QueryDomainSuffixRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDomainSuffixWithOptions(request, runtime);
}

/**
 * @summary 查询邮箱验证状态
 *
 * @param request QueryEmailVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEmailVerificationResponse
 */
QueryEmailVerificationResponse Client::queryEmailVerificationWithOptions(const QueryEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 查询邮箱验证状态
 *
 * @param request QueryEmailVerificationRequest
 * @return QueryEmailVerificationResponse
 */
QueryEmailVerificationResponse Client::queryEmailVerification(const QueryEmailVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEmailVerificationWithOptions(request, runtime);
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRealNameVerificationAction()) {
    query["RealNameVerificationAction"] = request.realNameVerificationAction();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegistrantProfileID()) {
    query["RegistrantProfileID"] = request.registrantProfileID();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request QueryFailReasonForRegistrantProfileRealNameVerificationRequest
 * @return QueryFailReasonForRegistrantProfileRealNameVerificationResponse
 */
QueryFailReasonForRegistrantProfileRealNameVerificationResponse Client::queryFailReasonForRegistrantProfileRealNameVerification(const QueryFailReasonForRegistrantProfileRealNameVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFailReasonForRegistrantProfileRealNameVerificationWithOptions(request, runtime);
}

/**
 * @param request QueryFailingReasonListForQualificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFailingReasonListForQualificationResponse
 */
QueryFailingReasonListForQualificationResponse Client::queryFailingReasonListForQualificationWithOptions(const QueryFailingReasonListForQualificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasQualificationType()) {
    query["QualificationType"] = request.qualificationType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request QueryFailingReasonListForQualificationRequest
 * @return QueryFailingReasonListForQualificationResponse
 */
QueryFailingReasonListForQualificationResponse Client::queryFailingReasonListForQualification(const QueryFailingReasonListForQualificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFailingReasonListForQualificationWithOptions(request, runtime);
}

/**
 * @summary 查询国际一口价订单列表
 *
 * @param request QueryIntlFixedPriceOrderListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryIntlFixedPriceOrderListResponse
 */
QueryIntlFixedPriceOrderListResponse Client::queryIntlFixedPriceOrderListWithOptions(const QueryIntlFixedPriceOrderListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
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
 * @summary 查询国际一口价订单列表
 *
 * @param request QueryIntlFixedPriceOrderListRequest
 * @return QueryIntlFixedPriceOrderListResponse
 */
QueryIntlFixedPriceOrderListResponse Client::queryIntlFixedPriceOrderList(const QueryIntlFixedPriceOrderListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryIntlFixedPriceOrderListWithOptions(request, runtime);
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request QueryLocalEnsAssociationRequest
 * @return QueryLocalEnsAssociationResponse
 */
QueryLocalEnsAssociationResponse Client::queryLocalEnsAssociation(const QueryLocalEnsAssociationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryLocalEnsAssociationWithOptions(request, runtime);
}

/**
 * @param request QueryOperationAuditInfoDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryOperationAuditInfoDetailResponse
 */
QueryOperationAuditInfoDetailResponse Client::queryOperationAuditInfoDetailWithOptions(const QueryOperationAuditInfoDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditRecordId()) {
    query["AuditRecordId"] = request.auditRecordId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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
 * @param request QueryOperationAuditInfoDetailRequest
 * @return QueryOperationAuditInfoDetailResponse
 */
QueryOperationAuditInfoDetailResponse Client::queryOperationAuditInfoDetail(const QueryOperationAuditInfoDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryOperationAuditInfoDetailWithOptions(request, runtime);
}

/**
 * @param request QueryOperationAuditInfoListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryOperationAuditInfoListResponse
 */
QueryOperationAuditInfoListResponse Client::queryOperationAuditInfoListWithOptions(const QueryOperationAuditInfoListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.auditStatus();
  }

  if (!!request.hasAuditType()) {
    query["AuditType"] = request.auditType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
 * @param request QueryOperationAuditInfoListRequest
 * @return QueryOperationAuditInfoListResponse
 */
QueryOperationAuditInfoListResponse Client::queryOperationAuditInfoList(const QueryOperationAuditInfoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryOperationAuditInfoListWithOptions(request, runtime);
}

/**
 * @param request QueryQualificationDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryQualificationDetailResponse
 */
QueryQualificationDetailResponse Client::queryQualificationDetailWithOptions(const QueryQualificationDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasQualificationType()) {
    query["QualificationType"] = request.qualificationType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request QueryQualificationDetailRequest
 * @return QueryQualificationDetailResponse
 */
QueryQualificationDetailResponse Client::queryQualificationDetail(const QueryQualificationDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryQualificationDetailWithOptions(request, runtime);
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
    query["FetchImage"] = request.fetchImage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.registrantProfileId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request QueryRegistrantProfileRealNameVerificationInfoRequest
 * @return QueryRegistrantProfileRealNameVerificationInfoResponse
 */
QueryRegistrantProfileRealNameVerificationInfoResponse Client::queryRegistrantProfileRealNameVerificationInfo(const QueryRegistrantProfileRealNameVerificationInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRegistrantProfileRealNameVerificationInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the registrant profiles that belong to your Alibaba Cloud account.
 *
 * @description You can use optional request parameters to specify specific query criteria to query registrant profiles as required. For example:
 * *   If you know the ID of the profile that you want to query, you can use the registrant profile ID parameter to query the detailed information about the profile.
 * *   If you do not know the ID of the profile that you want to query, you can use parameters such as the registrant name parameter to query the detailed information about the profile.
 *
 * @param request QueryRegistrantProfilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRegistrantProfilesResponse
 */
QueryRegistrantProfilesResponse Client::queryRegistrantProfilesWithOptions(const QueryRegistrantProfilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultRegistrantProfile()) {
    query["DefaultRegistrantProfile"] = request.defaultRegistrantProfile();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRealNameStatus()) {
    query["RealNameStatus"] = request.realNameStatus();
  }

  if (!!request.hasRegistrantOrganization()) {
    query["RegistrantOrganization"] = request.registrantOrganization();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.registrantProfileId();
  }

  if (!!request.hasRegistrantProfileType()) {
    query["RegistrantProfileType"] = request.registrantProfileType();
  }

  if (!!request.hasRegistrantType()) {
    query["RegistrantType"] = request.registrantType();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasZhRegistrantOrganization()) {
    query["ZhRegistrantOrganization"] = request.zhRegistrantOrganization();
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
 * @summary Queries the registrant profiles that belong to your Alibaba Cloud account.
 *
 * @description You can use optional request parameters to specify specific query criteria to query registrant profiles as required. For example:
 * *   If you know the ID of the profile that you want to query, you can use the registrant profile ID parameter to query the detailed information about the profile.
 * *   If you do not know the ID of the profile that you want to query, you can use parameters such as the registrant name parameter to query the detailed information about the profile.
 *
 * @param request QueryRegistrantProfilesRequest
 * @return QueryRegistrantProfilesResponse
 */
QueryRegistrantProfilesResponse Client::queryRegistrantProfiles(const QueryRegistrantProfilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRegistrantProfilesWithOptions(request, runtime);
}

/**
 * @param request QueryServerLockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryServerLockResponse
 */
QueryServerLockResponse Client::queryServerLockWithOptions(const QueryServerLockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request QueryServerLockRequest
 * @return QueryServerLockResponse
 */
QueryServerLockResponse Client::queryServerLock(const QueryServerLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryServerLockWithOptions(request, runtime);
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasDomainNameCursor()) {
    query["DomainNameCursor"] = request.domainNameCursor();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTaskDetailNoCursor()) {
    query["TaskDetailNoCursor"] = request.taskDetailNoCursor();
  }

  if (!!request.hasTaskNo()) {
    query["TaskNo"] = request.taskNo();
  }

  if (!!request.hasTaskStatus()) {
    query["TaskStatus"] = request.taskStatus();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request QueryTaskDetailHistoryRequest
 * @return QueryTaskDetailHistoryResponse
 */
QueryTaskDetailHistoryResponse Client::queryTaskDetailHistory(const QueryTaskDetailHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskDetailHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specific domain name task by page.
 *
 * @param request QueryTaskDetailListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTaskDetailListResponse
 */
QueryTaskDetailListResponse Client::queryTaskDetailListWithOptions(const QueryTaskDetailListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTaskNo()) {
    query["TaskNo"] = request.taskNo();
  }

  if (!!request.hasTaskStatus()) {
    query["TaskStatus"] = request.taskStatus();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary Queries the details of a specific domain name task by page.
 *
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
    query["BeginCreateTime"] = request.beginCreateTime();
  }

  if (!!request.hasCreateTimeCursor()) {
    query["CreateTimeCursor"] = request.createTimeCursor();
  }

  if (!!request.hasEndCreateTime()) {
    query["EndCreateTime"] = request.endCreateTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTaskNoCursor()) {
    query["TaskNoCursor"] = request.taskNoCursor();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request QueryTaskInfoHistoryRequest
 * @return QueryTaskInfoHistoryResponse
 */
QueryTaskInfoHistoryResponse Client::queryTaskInfoHistory(const QueryTaskInfoHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskInfoHistoryWithOptions(request, runtime);
}

/**
 * @summary 查询任务列表
 *
 * @param request QueryTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTaskListResponse
 */
QueryTaskListResponse Client::queryTaskListWithOptions(const QueryTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginCreateTime()) {
    query["BeginCreateTime"] = request.beginCreateTime();
  }

  if (!!request.hasEndCreateTime()) {
    query["EndCreateTime"] = request.endCreateTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 查询任务列表
 *
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSimpleTransferInStatus()) {
    query["SimpleTransferInStatus"] = request.simpleTransferInStatus();
  }

  if (!!request.hasSubmissionEndDate()) {
    query["SubmissionEndDate"] = request.submissionEndDate();
  }

  if (!!request.hasSubmissionStartDate()) {
    query["SubmissionStartDate"] = request.submissionStartDate();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request QueryTransferOutInfoRequest
 * @return QueryTransferOutInfoResponse
 */
QueryTransferOutInfoResponse Client::queryTransferOutInfo(const QueryTransferOutInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTransferOutInfoWithOptions(request, runtime);
}

/**
 * @summary 保存联系人模板实名资料
 *
 * @param request RegistrantProfileRealNameVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegistrantProfileRealNameVerificationResponse
 */
RegistrantProfileRealNameVerificationResponse Client::registrantProfileRealNameVerificationWithOptions(const RegistrantProfileRealNameVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityCredentialNo()) {
    query["IdentityCredentialNo"] = request.identityCredentialNo();
  }

  if (!!request.hasIdentityCredentialType()) {
    query["IdentityCredentialType"] = request.identityCredentialType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegistrantProfileID()) {
    query["RegistrantProfileID"] = request.registrantProfileID();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  json body = {};
  if (!!request.hasIdentityCredential()) {
    body["IdentityCredential"] = request.identityCredential();
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
 * @summary 保存联系人模板实名资料
 *
 * @param request RegistrantProfileRealNameVerificationRequest
 * @return RegistrantProfileRealNameVerificationResponse
 */
RegistrantProfileRealNameVerificationResponse Client::registrantProfileRealNameVerification(const RegistrantProfileRealNameVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registrantProfileRealNameVerificationWithOptions(request, runtime);
}

/**
 * @summary 重新发送验证邮件
 *
 * @param request ResendEmailVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResendEmailVerificationResponse
 */
ResendEmailVerificationResponse Client::resendEmailVerificationWithOptions(const ResendEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 重新发送验证邮件
 *
 * @param request ResendEmailVerificationRequest
 * @return ResendEmailVerificationResponse
 */
ResendEmailVerificationResponse Client::resendEmailVerification(const ResendEmailVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resendEmailVerificationWithOptions(request, runtime);
}

/**
 * @summary 重置资质审核状态
 *
 * @param request ResetQualificationVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetQualificationVerificationResponse
 */
ResetQualificationVerificationResponse Client::resetQualificationVerificationWithOptions(const ResetQualificationVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 重置资质审核状态
 *
 * @param request ResetQualificationVerificationRequest
 * @return ResetQualificationVerificationResponse
 */
ResetQualificationVerificationResponse Client::resetQualificationVerification(const ResetQualificationVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetQualificationVerificationWithOptions(request, runtime);
}

/**
 * @summary 批量保存域名备注信息
 *
 * @param request SaveBatchDomainRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchDomainRemarkResponse
 */
SaveBatchDomainRemarkResponse Client::saveBatchDomainRemarkWithOptions(const SaveBatchDomainRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 批量保存域名备注信息
 *
 * @param request SaveBatchDomainRemarkRequest
 * @return SaveBatchDomainRemarkResponse
 */
SaveBatchDomainRemarkResponse Client::saveBatchDomainRemark(const SaveBatchDomainRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchDomainRemarkWithOptions(request, runtime);
}

/**
 * @summary 批量申请域名快速转出
 *
 * @param request SaveBatchTaskForApplyQuickTransferOutOpenlyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForApplyQuickTransferOutOpenlyResponse
 */
SaveBatchTaskForApplyQuickTransferOutOpenlyResponse Client::saveBatchTaskForApplyQuickTransferOutOpenlyWithOptions(const SaveBatchTaskForApplyQuickTransferOutOpenlyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.domainNames();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 批量申请域名快速转出
 *
 * @param request SaveBatchTaskForApplyQuickTransferOutOpenlyRequest
 * @return SaveBatchTaskForApplyQuickTransferOutOpenlyResponse
 */
SaveBatchTaskForApplyQuickTransferOutOpenlyResponse Client::saveBatchTaskForApplyQuickTransferOutOpenly(const SaveBatchTaskForApplyQuickTransferOutOpenlyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForApplyQuickTransferOutOpenlyWithOptions(request, runtime);
}

/**
 * @summary 保存批量任务-注册订单
 *
 * @param request SaveBatchTaskForCreatingOrderActivateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForCreatingOrderActivateResponse
 */
SaveBatchTaskForCreatingOrderActivateResponse Client::saveBatchTaskForCreatingOrderActivateWithOptions(const SaveBatchTaskForCreatingOrderActivateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.couponNo();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrderActivateParam()) {
    query["OrderActivateParam"] = request.orderActivateParam();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.promotionNo();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.useCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.usePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 保存批量任务-注册订单
 *
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
    query["CouponNo"] = request.couponNo();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrderRedeemParam()) {
    query["OrderRedeemParam"] = request.orderRedeemParam();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.promotionNo();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.useCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.usePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request SaveBatchTaskForCreatingOrderRedeemRequest
 * @return SaveBatchTaskForCreatingOrderRedeemResponse
 */
SaveBatchTaskForCreatingOrderRedeemResponse Client::saveBatchTaskForCreatingOrderRedeem(const SaveBatchTaskForCreatingOrderRedeemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForCreatingOrderRedeemWithOptions(request, runtime);
}

/**
 * @summary 保存批量任务-续费订单
 *
 * @param request SaveBatchTaskForCreatingOrderRenewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForCreatingOrderRenewResponse
 */
SaveBatchTaskForCreatingOrderRenewResponse Client::saveBatchTaskForCreatingOrderRenewWithOptions(const SaveBatchTaskForCreatingOrderRenewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.couponNo();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrderRenewParam()) {
    query["OrderRenewParam"] = request.orderRenewParam();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.promotionNo();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.useCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.usePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 保存批量任务-续费订单
 *
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
    query["CouponNo"] = request.couponNo();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrderTransferParam()) {
    query["OrderTransferParam"] = request.orderTransferParam();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.promotionNo();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.useCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.usePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request SaveBatchTaskForCreatingOrderTransferRequest
 * @return SaveBatchTaskForCreatingOrderTransferResponse
 */
SaveBatchTaskForCreatingOrderTransferResponse Client::saveBatchTaskForCreatingOrderTransfer(const SaveBatchTaskForCreatingOrderTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForCreatingOrderTransferWithOptions(request, runtime);
}

/**
 * @summary 保存批量任务-开启/关闭whois隐私保护锁
 *
 * @param request SaveBatchTaskForDomainNameProxyServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForDomainNameProxyServiceResponse
 */
SaveBatchTaskForDomainNameProxyServiceResponse Client::saveBatchTaskForDomainNameProxyServiceWithOptions(const SaveBatchTaskForDomainNameProxyServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 保存批量任务-开启/关闭whois隐私保护锁
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
    request.setDomainNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.domainNames(), "DomainNames", "json"));
  }

  json query = {};
  if (!!request.hasDomainNamesShrink()) {
    query["DomainNames"] = request.domainNamesShrink();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 批量修改dns
 *
 * @param request SaveBatchTaskForModifyingDomainDnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForModifyingDomainDnsResponse
 */
SaveBatchTaskForModifyingDomainDnsResponse Client::saveBatchTaskForModifyingDomainDnsWithOptions(const SaveBatchTaskForModifyingDomainDnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunDns()) {
    query["AliyunDns"] = request.aliyunDns();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasDomainNameServer()) {
    query["DomainNameServer"] = request.domainNameServer();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 批量修改dns
 *
 * @param request SaveBatchTaskForModifyingDomainDnsRequest
 * @return SaveBatchTaskForModifyingDomainDnsResponse
 */
SaveBatchTaskForModifyingDomainDnsResponse Client::saveBatchTaskForModifyingDomainDns(const SaveBatchTaskForModifyingDomainDnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForModifyingDomainDnsWithOptions(request, runtime);
}

/**
 * @summary 提交批量预定删除抢注域名任务
 *
 * @param request SaveBatchTaskForReserveDropListDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForReserveDropListDomainResponse
 */
SaveBatchTaskForReserveDropListDomainResponse Client::saveBatchTaskForReserveDropListDomainWithOptions(const SaveBatchTaskForReserveDropListDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactTemplateId()) {
    query["ContactTemplateId"] = request.contactTemplateId();
  }

  if (!!request.hasDomains()) {
    query["Domains"] = request.domains();
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
 * @summary 提交批量预定删除抢注域名任务
 *
 * @param request SaveBatchTaskForReserveDropListDomainRequest
 * @return SaveBatchTaskForReserveDropListDomainResponse
 */
SaveBatchTaskForReserveDropListDomainResponse Client::saveBatchTaskForReserveDropListDomain(const SaveBatchTaskForReserveDropListDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForReserveDropListDomainWithOptions(request, runtime);
}

/**
 * @summary 基于转移码的批量转出任务提交
 *
 * @param request SaveBatchTaskForTransferOutByAuthorizationCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForTransferOutByAuthorizationCodeResponse
 */
SaveBatchTaskForTransferOutByAuthorizationCodeResponse Client::saveBatchTaskForTransferOutByAuthorizationCodeWithOptions(const SaveBatchTaskForTransferOutByAuthorizationCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTransferOutParamList()) {
    query["TransferOutParamList"] = request.transferOutParamList();
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
 * @summary 基于转移码的批量转出任务提交
 *
 * @param request SaveBatchTaskForTransferOutByAuthorizationCodeRequest
 * @return SaveBatchTaskForTransferOutByAuthorizationCodeResponse
 */
SaveBatchTaskForTransferOutByAuthorizationCodeResponse Client::saveBatchTaskForTransferOutByAuthorizationCode(const SaveBatchTaskForTransferOutByAuthorizationCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForTransferOutByAuthorizationCodeWithOptions(request, runtime);
}

/**
 * @summary 保存批量任务-开启/关闭禁止转移锁
 *
 * @param request SaveBatchTaskForTransferProhibitionLockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForTransferProhibitionLockResponse
 */
SaveBatchTaskForTransferProhibitionLockResponse Client::saveBatchTaskForTransferProhibitionLockWithOptions(const SaveBatchTaskForTransferProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 保存批量任务-开启/关闭禁止转移锁
 *
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request SaveBatchTaskForUpdateProhibitionLockRequest
 * @return SaveBatchTaskForUpdateProhibitionLockResponse
 */
SaveBatchTaskForUpdateProhibitionLockResponse Client::saveBatchTaskForUpdateProhibitionLock(const SaveBatchTaskForUpdateProhibitionLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForUpdateProhibitionLockWithOptions(request, runtime);
}

/**
 * @summary 使用联系人信息修改联系人的批量任务
 *
 * @param request SaveBatchTaskForUpdatingContactInfoByNewContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForUpdatingContactInfoByNewContactResponse
 */
SaveBatchTaskForUpdatingContactInfoByNewContactResponse Client::saveBatchTaskForUpdatingContactInfoByNewContactWithOptions(const SaveBatchTaskForUpdatingContactInfoByNewContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.address();
  }

  if (!!request.hasCity()) {
    query["City"] = request.city();
  }

  if (!!request.hasContactType()) {
    query["ContactType"] = request.contactType();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.country();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPostalCode()) {
    query["PostalCode"] = request.postalCode();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.province();
  }

  if (!!request.hasRegistrantName()) {
    query["RegistrantName"] = request.registrantName();
  }

  if (!!request.hasRegistrantOrganization()) {
    query["RegistrantOrganization"] = request.registrantOrganization();
  }

  if (!!request.hasRegistrantType()) {
    query["RegistrantType"] = request.registrantType();
  }

  if (!!request.hasTelArea()) {
    query["TelArea"] = request.telArea();
  }

  if (!!request.hasTelExt()) {
    query["TelExt"] = request.telExt();
  }

  if (!!request.hasTelephone()) {
    query["Telephone"] = request.telephone();
  }

  if (!!request.hasTransferOutProhibited()) {
    query["TransferOutProhibited"] = request.transferOutProhibited();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasZhAddress()) {
    query["ZhAddress"] = request.zhAddress();
  }

  if (!!request.hasZhCity()) {
    query["ZhCity"] = request.zhCity();
  }

  if (!!request.hasZhProvince()) {
    query["ZhProvince"] = request.zhProvince();
  }

  if (!!request.hasZhRegistrantName()) {
    query["ZhRegistrantName"] = request.zhRegistrantName();
  }

  if (!!request.hasZhRegistrantOrganization()) {
    query["ZhRegistrantOrganization"] = request.zhRegistrantOrganization();
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
 * @summary 使用联系人信息修改联系人的批量任务
 *
 * @param request SaveBatchTaskForUpdatingContactInfoByNewContactRequest
 * @return SaveBatchTaskForUpdatingContactInfoByNewContactResponse
 */
SaveBatchTaskForUpdatingContactInfoByNewContactResponse Client::saveBatchTaskForUpdatingContactInfoByNewContact(const SaveBatchTaskForUpdatingContactInfoByNewContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForUpdatingContactInfoByNewContactWithOptions(request, runtime);
}

/**
 * @summary 使用模板修改联系人的批量任务
 *
 * @param request SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse
 */
SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse Client::saveBatchTaskForUpdatingContactInfoByRegistrantProfileIdWithOptions(const SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactType()) {
    query["ContactType"] = request.contactType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.registrantProfileId();
  }

  if (!!request.hasTransferOutProhibited()) {
    query["TransferOutProhibited"] = request.transferOutProhibited();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 使用模板修改联系人的批量任务
 *
 * @param request SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest
 * @return SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse
 */
SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResponse Client::saveBatchTaskForUpdatingContactInfoByRegistrantProfileId(const SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBatchTaskForUpdatingContactInfoByRegistrantProfileIdWithOptions(request, runtime);
}

/**
 * @summary 创建/更新域名分组
 *
 * @param request SaveDomainGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveDomainGroupResponse
 */
SaveDomainGroupResponse Client::saveDomainGroupWithOptions(const SaveDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainGroupId()) {
    query["DomainGroupId"] = request.domainGroupId();
  }

  if (!!request.hasDomainGroupName()) {
    query["DomainGroupName"] = request.domainGroupName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 创建/更新域名分组
 *
 * @param request SaveDomainGroupRequest
 * @return SaveDomainGroupResponse
 */
SaveDomainGroupResponse Client::saveDomainGroup(const SaveDomainGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveDomainGroupWithOptions(request, runtime);
}

/**
 * @summary 保存联系人模板
 *
 * @param request SaveRegistrantProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveRegistrantProfileResponse
 */
SaveRegistrantProfileResponse Client::saveRegistrantProfileWithOptions(const SaveRegistrantProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.address();
  }

  if (!!request.hasCity()) {
    query["City"] = request.city();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.country();
  }

  if (!!request.hasDefaultRegistrantProfile()) {
    query["DefaultRegistrantProfile"] = request.defaultRegistrantProfile();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPostalCode()) {
    query["PostalCode"] = request.postalCode();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.province();
  }

  if (!!request.hasRegistrantName()) {
    query["RegistrantName"] = request.registrantName();
  }

  if (!!request.hasRegistrantOrganization()) {
    query["RegistrantOrganization"] = request.registrantOrganization();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.registrantProfileId();
  }

  if (!!request.hasRegistrantProfileType()) {
    query["RegistrantProfileType"] = request.registrantProfileType();
  }

  if (!!request.hasRegistrantType()) {
    query["RegistrantType"] = request.registrantType();
  }

  if (!!request.hasTelArea()) {
    query["TelArea"] = request.telArea();
  }

  if (!!request.hasTelExt()) {
    query["TelExt"] = request.telExt();
  }

  if (!!request.hasTelephone()) {
    query["Telephone"] = request.telephone();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasZhAddress()) {
    query["ZhAddress"] = request.zhAddress();
  }

  if (!!request.hasZhCity()) {
    query["ZhCity"] = request.zhCity();
  }

  if (!!request.hasZhProvince()) {
    query["ZhProvince"] = request.zhProvince();
  }

  if (!!request.hasZhRegistrantName()) {
    query["ZhRegistrantName"] = request.zhRegistrantName();
  }

  if (!!request.hasZhRegistrantOrganization()) {
    query["ZhRegistrantOrganization"] = request.zhRegistrantOrganization();
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
 * @summary 保存联系人模板
 *
 * @param request SaveRegistrantProfileRequest
 * @return SaveRegistrantProfileResponse
 */
SaveRegistrantProfileResponse Client::saveRegistrantProfile(const SaveRegistrantProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveRegistrantProfileWithOptions(request, runtime);
}

/**
 * @summary 保存联系人模板和凭据
 *
 * @param request SaveRegistrantProfileRealNameVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveRegistrantProfileRealNameVerificationResponse
 */
SaveRegistrantProfileRealNameVerificationResponse Client::saveRegistrantProfileRealNameVerificationWithOptions(const SaveRegistrantProfileRealNameVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.address();
  }

  if (!!request.hasCity()) {
    query["City"] = request.city();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.country();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasIdentityCredential()) {
    query["IdentityCredential"] = request.identityCredential();
  }

  if (!!request.hasIdentityCredentialNo()) {
    query["IdentityCredentialNo"] = request.identityCredentialNo();
  }

  if (!!request.hasIdentityCredentialType()) {
    query["IdentityCredentialType"] = request.identityCredentialType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPostalCode()) {
    query["PostalCode"] = request.postalCode();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.province();
  }

  if (!!request.hasRegistrantName()) {
    query["RegistrantName"] = request.registrantName();
  }

  if (!!request.hasRegistrantOrganization()) {
    query["RegistrantOrganization"] = request.registrantOrganization();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.registrantProfileId();
  }

  if (!!request.hasRegistrantProfileType()) {
    query["RegistrantProfileType"] = request.registrantProfileType();
  }

  if (!!request.hasRegistrantType()) {
    query["RegistrantType"] = request.registrantType();
  }

  if (!!request.hasTelArea()) {
    query["TelArea"] = request.telArea();
  }

  if (!!request.hasTelExt()) {
    query["TelExt"] = request.telExt();
  }

  if (!!request.hasTelephone()) {
    query["Telephone"] = request.telephone();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasZhAddress()) {
    query["ZhAddress"] = request.zhAddress();
  }

  if (!!request.hasZhCity()) {
    query["ZhCity"] = request.zhCity();
  }

  if (!!request.hasZhProvince()) {
    query["ZhProvince"] = request.zhProvince();
  }

  if (!!request.hasZhRegistrantName()) {
    query["ZhRegistrantName"] = request.zhRegistrantName();
  }

  if (!!request.hasZhRegistrantOrganization()) {
    query["ZhRegistrantOrganization"] = request.zhRegistrantOrganization();
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
 * @summary 保存联系人模板和凭据
 *
 * @param request SaveRegistrantProfileRealNameVerificationRequest
 * @return SaveRegistrantProfileRealNameVerificationResponse
 */
SaveRegistrantProfileRealNameVerificationResponse Client::saveRegistrantProfileRealNameVerification(const SaveRegistrantProfileRealNameVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveRegistrantProfileRealNameVerificationWithOptions(request, runtime);
}

/**
 * @summary 添加dnsSec记录
 *
 * @param request SaveSingleTaskForAddingDSRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForAddingDSRecordResponse
 */
SaveSingleTaskForAddingDSRecordResponse Client::saveSingleTaskForAddingDSRecordWithOptions(const SaveSingleTaskForAddingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasDigest()) {
    query["Digest"] = request.digest();
  }

  if (!!request.hasDigestType()) {
    query["DigestType"] = request.digestType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasKeyTag()) {
    query["KeyTag"] = request.keyTag();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 添加dnsSec记录
 *
 * @param request SaveSingleTaskForAddingDSRecordRequest
 * @return SaveSingleTaskForAddingDSRecordResponse
 */
SaveSingleTaskForAddingDSRecordResponse Client::saveSingleTaskForAddingDSRecord(const SaveSingleTaskForAddingDSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForAddingDSRecordWithOptions(request, runtime);
}

/**
 * @summary 申请域名快速转出
 *
 * @param request SaveSingleTaskForApplyQuickTransferOutOpenlyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForApplyQuickTransferOutOpenlyResponse
 */
SaveSingleTaskForApplyQuickTransferOutOpenlyResponse Client::saveSingleTaskForApplyQuickTransferOutOpenlyWithOptions(const SaveSingleTaskForApplyQuickTransferOutOpenlyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 申请域名快速转出
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request SaveSingleTaskForAssociatingEnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForAssociatingEnsResponse
 */
SaveSingleTaskForAssociatingEnsResponse Client::saveSingleTaskForAssociatingEnsWithOptions(const SaveSingleTaskForAssociatingEnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.address();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request SaveSingleTaskForCancelingTransferInRequest
 * @return SaveSingleTaskForCancelingTransferInResponse
 */
SaveSingleTaskForCancelingTransferInResponse Client::saveSingleTaskForCancelingTransferIn(const SaveSingleTaskForCancelingTransferInRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCancelingTransferInWithOptions(request, runtime);
}

/**
 * @summary 取消转出
 *
 * @param request SaveSingleTaskForCancelingTransferOutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForCancelingTransferOutResponse
 */
SaveSingleTaskForCancelingTransferOutResponse Client::saveSingleTaskForCancelingTransferOutWithOptions(const SaveSingleTaskForCancelingTransferOutRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 取消转出
 *
 * @param request SaveSingleTaskForCancelingTransferOutRequest
 * @return SaveSingleTaskForCancelingTransferOutResponse
 */
SaveSingleTaskForCancelingTransferOutResponse Client::saveSingleTaskForCancelingTransferOut(const SaveSingleTaskForCancelingTransferOutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCancelingTransferOutWithOptions(request, runtime);
}

/**
 * @summary 保存创建dns服务器的任务请求
 *
 * @param request SaveSingleTaskForCreatingDnsHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForCreatingDnsHostResponse
 */
SaveSingleTaskForCreatingDnsHostResponse Client::saveSingleTaskForCreatingDnsHostWithOptions(const SaveSingleTaskForCreatingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDnsName()) {
    query["DnsName"] = request.dnsName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 保存创建dns服务器的任务请求
 *
 * @param request SaveSingleTaskForCreatingDnsHostRequest
 * @return SaveSingleTaskForCreatingDnsHostResponse
 */
SaveSingleTaskForCreatingDnsHostResponse Client::saveSingleTaskForCreatingDnsHost(const SaveSingleTaskForCreatingDnsHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCreatingDnsHostWithOptions(request, runtime);
}

/**
 * @summary 保存单个任务-注册订单
 *
 * @param request SaveSingleTaskForCreatingOrderActivateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForCreatingOrderActivateResponse
 */
SaveSingleTaskForCreatingOrderActivateResponse Client::saveSingleTaskForCreatingOrderActivateWithOptions(const SaveSingleTaskForCreatingOrderActivateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.address();
  }

  if (!!request.hasAliyunDns()) {
    query["AliyunDns"] = request.aliyunDns();
  }

  if (!!request.hasCity()) {
    query["City"] = request.city();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.country();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.couponNo();
  }

  if (!!request.hasDns1()) {
    query["Dns1"] = request.dns1();
  }

  if (!!request.hasDns2()) {
    query["Dns2"] = request.dns2();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasEnableDomainProxy()) {
    query["EnableDomainProxy"] = request.enableDomainProxy();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPermitPremiumActivation()) {
    query["PermitPremiumActivation"] = request.permitPremiumActivation();
  }

  if (!!request.hasPostalCode()) {
    query["PostalCode"] = request.postalCode();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.promotionNo();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.province();
  }

  if (!!request.hasRegistrantName()) {
    query["RegistrantName"] = request.registrantName();
  }

  if (!!request.hasRegistrantOrganization()) {
    query["RegistrantOrganization"] = request.registrantOrganization();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.registrantProfileId();
  }

  if (!!request.hasRegistrantType()) {
    query["RegistrantType"] = request.registrantType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubscriptionDuration()) {
    query["SubscriptionDuration"] = request.subscriptionDuration();
  }

  if (!!request.hasTelArea()) {
    query["TelArea"] = request.telArea();
  }

  if (!!request.hasTelExt()) {
    query["TelExt"] = request.telExt();
  }

  if (!!request.hasTelephone()) {
    query["Telephone"] = request.telephone();
  }

  if (!!request.hasTrademarkDomainActivation()) {
    query["TrademarkDomainActivation"] = request.trademarkDomainActivation();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.useCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.usePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasZhAddress()) {
    query["ZhAddress"] = request.zhAddress();
  }

  if (!!request.hasZhCity()) {
    query["ZhCity"] = request.zhCity();
  }

  if (!!request.hasZhProvince()) {
    query["ZhProvince"] = request.zhProvince();
  }

  if (!!request.hasZhRegistrantName()) {
    query["ZhRegistrantName"] = request.zhRegistrantName();
  }

  if (!!request.hasZhRegistrantOrganization()) {
    query["ZhRegistrantOrganization"] = request.zhRegistrantOrganization();
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
 * @summary 保存单个任务-注册订单
 *
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
    query["CouponNo"] = request.couponNo();
  }

  if (!!request.hasCurrentExpirationDate()) {
    query["CurrentExpirationDate"] = request.currentExpirationDate();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.promotionNo();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.useCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.usePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request SaveSingleTaskForCreatingOrderRedeemRequest
 * @return SaveSingleTaskForCreatingOrderRedeemResponse
 */
SaveSingleTaskForCreatingOrderRedeemResponse Client::saveSingleTaskForCreatingOrderRedeem(const SaveSingleTaskForCreatingOrderRedeemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCreatingOrderRedeemWithOptions(request, runtime);
}

/**
 * @summary 保存单个任务-续费订单
 *
 * @param request SaveSingleTaskForCreatingOrderRenewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForCreatingOrderRenewResponse
 */
SaveSingleTaskForCreatingOrderRenewResponse Client::saveSingleTaskForCreatingOrderRenewWithOptions(const SaveSingleTaskForCreatingOrderRenewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.couponNo();
  }

  if (!!request.hasCurrentExpirationDate()) {
    query["CurrentExpirationDate"] = request.currentExpirationDate();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.promotionNo();
  }

  if (!!request.hasSubscriptionDuration()) {
    query["SubscriptionDuration"] = request.subscriptionDuration();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.useCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.usePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 保存单个任务-续费订单
 *
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
    query["AuthorizationCode"] = request.authorizationCode();
  }

  if (!!request.hasCouponNo()) {
    query["CouponNo"] = request.couponNo();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPermitPremiumTransfer()) {
    query["PermitPremiumTransfer"] = request.permitPremiumTransfer();
  }

  if (!!request.hasPromotionNo()) {
    query["PromotionNo"] = request.promotionNo();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.registrantProfileId();
  }

  if (!!request.hasUseCoupon()) {
    query["UseCoupon"] = request.useCoupon();
  }

  if (!!request.hasUsePromotion()) {
    query["UsePromotion"] = request.usePromotion();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request SaveSingleTaskForCreatingOrderTransferRequest
 * @return SaveSingleTaskForCreatingOrderTransferResponse
 */
SaveSingleTaskForCreatingOrderTransferResponse Client::saveSingleTaskForCreatingOrderTransfer(const SaveSingleTaskForCreatingOrderTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForCreatingOrderTransferWithOptions(request, runtime);
}

/**
 * @summary 删除dnsSec记录
 *
 * @param request SaveSingleTaskForDeletingDSRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForDeletingDSRecordResponse
 */
SaveSingleTaskForDeletingDSRecordResponse Client::saveSingleTaskForDeletingDSRecordWithOptions(const SaveSingleTaskForDeletingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasKeyTag()) {
    query["KeyTag"] = request.keyTag();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 删除dnsSec记录
 *
 * @param request SaveSingleTaskForDeletingDSRecordRequest
 * @return SaveSingleTaskForDeletingDSRecordResponse
 */
SaveSingleTaskForDeletingDSRecordResponse Client::saveSingleTaskForDeletingDSRecord(const SaveSingleTaskForDeletingDSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForDeletingDSRecordWithOptions(request, runtime);
}

/**
 * @summary 删除DNS HOST任务
 *
 * @param request SaveSingleTaskForDeletingDnsHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForDeletingDnsHostResponse
 */
SaveSingleTaskForDeletingDnsHostResponse Client::saveSingleTaskForDeletingDnsHostWithOptions(const SaveSingleTaskForDeletingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDnsName()) {
    query["DnsName"] = request.dnsName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 删除DNS HOST任务
 *
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request SaveSingleTaskForDisassociatingEnsRequest
 * @return SaveSingleTaskForDisassociatingEnsResponse
 */
SaveSingleTaskForDisassociatingEnsResponse Client::saveSingleTaskForDisassociatingEns(const SaveSingleTaskForDisassociatingEnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForDisassociatingEnsWithOptions(request, runtime);
}

/**
 * @summary 保存单个任务-开启/关闭whois隐私保护锁
 *
 * @param request SaveSingleTaskForDomainNameProxyServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForDomainNameProxyServiceResponse
 */
SaveSingleTaskForDomainNameProxyServiceResponse Client::saveSingleTaskForDomainNameProxyServiceWithOptions(const SaveSingleTaskForDomainNameProxyServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 保存单个任务-开启/关闭whois隐私保护锁
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 修改DnsSec记录
 *
 * @param request SaveSingleTaskForModifyingDSRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForModifyingDSRecordResponse
 */
SaveSingleTaskForModifyingDSRecordResponse Client::saveSingleTaskForModifyingDSRecordWithOptions(const SaveSingleTaskForModifyingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasDigest()) {
    query["Digest"] = request.digest();
  }

  if (!!request.hasDigestType()) {
    query["DigestType"] = request.digestType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasKeyTag()) {
    query["KeyTag"] = request.keyTag();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 修改DnsSec记录
 *
 * @param request SaveSingleTaskForModifyingDSRecordRequest
 * @return SaveSingleTaskForModifyingDSRecordResponse
 */
SaveSingleTaskForModifyingDSRecordResponse Client::saveSingleTaskForModifyingDSRecord(const SaveSingleTaskForModifyingDSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForModifyingDSRecordWithOptions(request, runtime);
}

/**
 * @summary 保存修改dns服务器的任务请求
 *
 * @param request SaveSingleTaskForModifyingDnsHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForModifyingDnsHostResponse
 */
SaveSingleTaskForModifyingDnsHostResponse Client::saveSingleTaskForModifyingDnsHostWithOptions(const SaveSingleTaskForModifyingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDnsName()) {
    query["DnsName"] = request.dnsName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 保存修改dns服务器的任务请求
 *
 * @param request SaveSingleTaskForModifyingDnsHostRequest
 * @return SaveSingleTaskForModifyingDnsHostResponse
 */
SaveSingleTaskForModifyingDnsHostResponse Client::saveSingleTaskForModifyingDnsHost(const SaveSingleTaskForModifyingDnsHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForModifyingDnsHostWithOptions(request, runtime);
}

/**
 * @summary 发送转移码
 *
 * @param request SaveSingleTaskForQueryingTransferAuthorizationCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForQueryingTransferAuthorizationCodeResponse
 */
SaveSingleTaskForQueryingTransferAuthorizationCodeResponse Client::saveSingleTaskForQueryingTransferAuthorizationCodeWithOptions(const SaveSingleTaskForQueryingTransferAuthorizationCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 发送转移码
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
    query["ContactTemplateId"] = request.contactTemplateId();
  }

  if (!!request.hasDns1()) {
    query["Dns1"] = request.dns1();
  }

  if (!!request.hasDns2()) {
    query["Dns2"] = request.dns2();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
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
 * @summary 保存art扩展信息任务
 *
 * @param request SaveSingleTaskForSaveArtExtensionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForSaveArtExtensionResponse
 */
SaveSingleTaskForSaveArtExtensionResponse Client::saveSingleTaskForSaveArtExtensionWithOptions(const SaveSingleTaskForSaveArtExtensionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDateOrPeriod()) {
    query["DateOrPeriod"] = request.dateOrPeriod();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.dimensions();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasFeatures()) {
    query["Features"] = request.features();
  }

  if (!!request.hasInscriptionsAndMarkings()) {
    query["InscriptionsAndMarkings"] = request.inscriptionsAndMarkings();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMaker()) {
    query["Maker"] = request.maker();
  }

  if (!!request.hasMaterialsAndTechniques()) {
    query["MaterialsAndTechniques"] = request.materialsAndTechniques();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.objectType();
  }

  if (!!request.hasReference()) {
    query["Reference"] = request.reference();
  }

  if (!!request.hasSubject()) {
    query["Subject"] = request.subject();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
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
 * @summary 保存art扩展信息任务
 *
 * @param request SaveSingleTaskForSaveArtExtensionRequest
 * @return SaveSingleTaskForSaveArtExtensionResponse
 */
SaveSingleTaskForSaveArtExtensionResponse Client::saveSingleTaskForSaveArtExtension(const SaveSingleTaskForSaveArtExtensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForSaveArtExtensionWithOptions(request, runtime);
}

/**
 * @summary 同步DnsSec记录
 *
 * @param request SaveSingleTaskForSynchronizingDSRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForSynchronizingDSRecordResponse
 */
SaveSingleTaskForSynchronizingDSRecordResponse Client::saveSingleTaskForSynchronizingDSRecordWithOptions(const SaveSingleTaskForSynchronizingDSRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 同步DnsSec记录
 *
 * @param request SaveSingleTaskForSynchronizingDSRecordRequest
 * @return SaveSingleTaskForSynchronizingDSRecordResponse
 */
SaveSingleTaskForSynchronizingDSRecordResponse Client::saveSingleTaskForSynchronizingDSRecord(const SaveSingleTaskForSynchronizingDSRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForSynchronizingDSRecordWithOptions(request, runtime);
}

/**
 * @summary 保存同步dns服务器的任务请求
 *
 * @param request SaveSingleTaskForSynchronizingDnsHostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForSynchronizingDnsHostResponse
 */
SaveSingleTaskForSynchronizingDnsHostResponse Client::saveSingleTaskForSynchronizingDnsHostWithOptions(const SaveSingleTaskForSynchronizingDnsHostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 保存同步dns服务器的任务请求
 *
 * @param request SaveSingleTaskForSynchronizingDnsHostRequest
 * @return SaveSingleTaskForSynchronizingDnsHostResponse
 */
SaveSingleTaskForSynchronizingDnsHostResponse Client::saveSingleTaskForSynchronizingDnsHost(const SaveSingleTaskForSynchronizingDnsHostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForSynchronizingDnsHostWithOptions(request, runtime);
}

/**
 * @summary Submit a single transfer-out task based on the transfer key of domain names.
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
    query["AuthorizationCode"] = request.authorizationCode();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
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
 * @summary Submit a single transfer-out task based on the transfer key of domain names.
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
 * @summary 保存单个任务-开启/关闭禁止转移锁
 *
 * @param request SaveSingleTaskForTransferProhibitionLockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForTransferProhibitionLockResponse
 */
SaveSingleTaskForTransferProhibitionLockResponse Client::saveSingleTaskForTransferProhibitionLockWithOptions(const SaveSingleTaskForTransferProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 保存单个任务-开启/关闭禁止转移锁
 *
 * @param request SaveSingleTaskForTransferProhibitionLockRequest
 * @return SaveSingleTaskForTransferProhibitionLockResponse
 */
SaveSingleTaskForTransferProhibitionLockResponse Client::saveSingleTaskForTransferProhibitionLock(const SaveSingleTaskForTransferProhibitionLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForTransferProhibitionLockWithOptions(request, runtime);
}

/**
 * @summary 保存单个任务-开启/关闭信息安全锁
 *
 * @param request SaveSingleTaskForUpdateProhibitionLockRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForUpdateProhibitionLockResponse
 */
SaveSingleTaskForUpdateProhibitionLockResponse Client::saveSingleTaskForUpdateProhibitionLockWithOptions(const SaveSingleTaskForUpdateProhibitionLockRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 保存单个任务-开启/关闭信息安全锁
 *
 * @param request SaveSingleTaskForUpdateProhibitionLockRequest
 * @return SaveSingleTaskForUpdateProhibitionLockResponse
 */
SaveSingleTaskForUpdateProhibitionLockResponse Client::saveSingleTaskForUpdateProhibitionLock(const SaveSingleTaskForUpdateProhibitionLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForUpdateProhibitionLockWithOptions(request, runtime);
}

/**
 * @summary 保存修改联系人的任务
 *
 * @param request SaveSingleTaskForUpdatingContactInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSingleTaskForUpdatingContactInfoResponse
 */
SaveSingleTaskForUpdatingContactInfoResponse Client::saveSingleTaskForUpdatingContactInfoWithOptions(const SaveSingleTaskForUpdatingContactInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddTransferLock()) {
    query["AddTransferLock"] = request.addTransferLock();
  }

  if (!!request.hasContactType()) {
    query["ContactType"] = request.contactType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.registrantProfileId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 保存修改联系人的任务
 *
 * @param request SaveSingleTaskForUpdatingContactInfoRequest
 * @return SaveSingleTaskForUpdatingContactInfoResponse
 */
SaveSingleTaskForUpdatingContactInfoResponse Client::saveSingleTaskForUpdatingContactInfo(const SaveSingleTaskForUpdatingContactInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSingleTaskForUpdatingContactInfoWithOptions(request, runtime);
}

/**
 * @summary 保存删除域名的任务
 *
 * @param request SaveTaskForSubmittingDomainDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTaskForSubmittingDomainDeleteResponse
 */
SaveTaskForSubmittingDomainDeleteResponse Client::saveTaskForSubmittingDomainDeleteWithOptions(const SaveTaskForSubmittingDomainDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 保存删除域名的任务
 *
 * @param request SaveTaskForSubmittingDomainDeleteRequest
 * @return SaveTaskForSubmittingDomainDeleteResponse
 */
SaveTaskForSubmittingDomainDeleteResponse Client::saveTaskForSubmittingDomainDelete(const SaveTaskForSubmittingDomainDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForSubmittingDomainDeleteWithOptions(request, runtime);
}

/**
 * @summary 批量提交域名资料
 *
 * @param request SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse
 */
SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse Client::saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialWithOptions(const SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasIdentityCredentialNo()) {
    query["IdentityCredentialNo"] = request.identityCredentialNo();
  }

  if (!!request.hasIdentityCredentialType()) {
    query["IdentityCredentialType"] = request.identityCredentialType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  json body = {};
  if (!!request.hasIdentityCredential()) {
    body["IdentityCredential"] = request.identityCredential();
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
 * @summary 批量提交域名资料
 *
 * @param request SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest
 * @return SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse
 */
SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResponse Client::saveTaskForSubmittingDomainRealNameVerificationByIdentityCredential(const SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialWithOptions(request, runtime);
}

/**
 * @summary 根据模板保存域名的实名认证信息
 *
 * @param request SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse
 */
SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse Client::saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDWithOptions(const SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.registrantProfileId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 根据模板保存域名的实名认证信息
 *
 * @param request SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest
 * @return SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse
 */
SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResponse Client::saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileID(const SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDWithOptions(request, runtime);
}

/**
 * @summary 根据联系人信息批量修改注册联系人信息
 *
 * @param request SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse
 */
SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse Client::saveTaskForUpdatingRegistrantInfoByIdentityCredentialWithOptions(const SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.address();
  }

  if (!!request.hasCity()) {
    query["City"] = request.city();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.country();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasIdentityCredentialNo()) {
    query["IdentityCredentialNo"] = request.identityCredentialNo();
  }

  if (!!request.hasIdentityCredentialType()) {
    query["IdentityCredentialType"] = request.identityCredentialType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPostalCode()) {
    query["PostalCode"] = request.postalCode();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.province();
  }

  if (!!request.hasRegistrantName()) {
    query["RegistrantName"] = request.registrantName();
  }

  if (!!request.hasRegistrantOrganization()) {
    query["RegistrantOrganization"] = request.registrantOrganization();
  }

  if (!!request.hasRegistrantType()) {
    query["RegistrantType"] = request.registrantType();
  }

  if (!!request.hasTelArea()) {
    query["TelArea"] = request.telArea();
  }

  if (!!request.hasTelExt()) {
    query["TelExt"] = request.telExt();
  }

  if (!!request.hasTelephone()) {
    query["Telephone"] = request.telephone();
  }

  if (!!request.hasTransferOutProhibited()) {
    query["TransferOutProhibited"] = request.transferOutProhibited();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasZhAddress()) {
    query["ZhAddress"] = request.zhAddress();
  }

  if (!!request.hasZhCity()) {
    query["ZhCity"] = request.zhCity();
  }

  if (!!request.hasZhProvince()) {
    query["ZhProvince"] = request.zhProvince();
  }

  if (!!request.hasZhRegistrantName()) {
    query["ZhRegistrantName"] = request.zhRegistrantName();
  }

  if (!!request.hasZhRegistrantOrganization()) {
    query["ZhRegistrantOrganization"] = request.zhRegistrantOrganization();
  }

  json body = {};
  if (!!request.hasIdentityCredential()) {
    body["IdentityCredential"] = request.identityCredential();
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
 * @summary 根据联系人信息批量修改注册联系人信息
 *
 * @param request SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest
 * @return SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse
 */
SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResponse Client::saveTaskForUpdatingRegistrantInfoByIdentityCredential(const SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTaskForUpdatingRegistrantInfoByIdentityCredentialWithOptions(request, runtime);
}

/**
 * @summary 根据模板批量修改注册联系人
 *
 * @param request SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse
 */
SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResponse Client::saveTaskForUpdatingRegistrantInfoByRegistrantProfileIDWithOptions(const SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.registrantProfileId();
  }

  if (!!request.hasTransferOutProhibited()) {
    query["TransferOutProhibited"] = request.transferOutProhibited();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 根据模板批量修改注册联系人
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
    query["DomainGroupId"] = request.domainGroupId();
  }

  if (!!request.hasDomainStatus()) {
    query["DomainStatus"] = request.domainStatus();
  }

  if (!!request.hasEndExpirationDate()) {
    query["EndExpirationDate"] = request.endExpirationDate();
  }

  if (!!request.hasEndLength()) {
    query["EndLength"] = request.endLength();
  }

  if (!!request.hasEndRegistrationDate()) {
    query["EndRegistrationDate"] = request.endRegistrationDate();
  }

  if (!!request.hasExcluded()) {
    query["Excluded"] = request.excluded();
  }

  if (!!request.hasExcludedPrefix()) {
    query["ExcludedPrefix"] = request.excludedPrefix();
  }

  if (!!request.hasExcludedSuffix()) {
    query["ExcludedSuffix"] = request.excludedSuffix();
  }

  if (!!request.hasForm()) {
    query["Form"] = request.form();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasKeyWordPrefix()) {
    query["KeyWordPrefix"] = request.keyWordPrefix();
  }

  if (!!request.hasKeyWordSuffix()) {
    query["KeyWordSuffix"] = request.keyWordSuffix();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductDomainType()) {
    query["ProductDomainType"] = request.productDomainType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasScrollId()) {
    query["ScrollId"] = request.scrollId();
  }

  if (!!request.hasStartExpirationDate()) {
    query["StartExpirationDate"] = request.startExpirationDate();
  }

  if (!!request.hasStartLength()) {
    query["StartLength"] = request.startLength();
  }

  if (!!request.hasStartRegistrationDate()) {
    query["StartRegistrationDate"] = request.startRegistrationDate();
  }

  if (!!request.hasSuffixs()) {
    query["Suffixs"] = request.suffixs();
  }

  if (!!request.hasTradeType()) {
    query["TradeType"] = request.tradeType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 设置默认模板
 *
 * @param request SetDefaultRegistrantProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultRegistrantProfileResponse
 */
SetDefaultRegistrantProfileResponse Client::setDefaultRegistrantProfileWithOptions(const SetDefaultRegistrantProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegistrantProfileId()) {
    query["RegistrantProfileId"] = request.registrantProfileId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 设置默认模板
 *
 * @param request SetDefaultRegistrantProfileRequest
 * @return SetDefaultRegistrantProfileResponse
 */
SetDefaultRegistrantProfileResponse Client::setDefaultRegistrantProfile(const SetDefaultRegistrantProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultRegistrantProfileWithOptions(request, runtime);
}

/**
 * @summary 域名设置自动续费
 *
 * @param request SetupDomainAutoRenewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetupDomainAutoRenewResponse
 */
SetupDomainAutoRenewResponse Client::setupDomainAutoRenewWithOptions(const SetupDomainAutoRenewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOperation()) {
    query["Operation"] = request.operation();
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
 * @summary 域名设置自动续费
 *
 * @param request SetupDomainAutoRenewRequest
 * @return SetupDomainAutoRenewResponse
 */
SetupDomainAutoRenewResponse Client::setupDomainAutoRenew(const SetupDomainAutoRenewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setupDomainAutoRenewWithOptions(request, runtime);
}

/**
 * @summary 域名特殊业务提交资料
 *
 * @param request SubmitDomainSpecialBizCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDomainSpecialBizCredentialsResponse
 */
SubmitDomainSpecialBizCredentialsResponse Client::submitDomainSpecialBizCredentialsWithOptions(const SubmitDomainSpecialBizCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  json body = {};
  if (!!request.hasBizId()) {
    body["BizId"] = request.bizId();
  }

  if (!!request.hasCredentials()) {
    body["Credentials"] = request.credentials();
  }

  if (!!request.hasExtend()) {
    body["Extend"] = request.extend();
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
 * @summary 域名特殊业务提交资料
 *
 * @param request SubmitDomainSpecialBizCredentialsRequest
 * @return SubmitDomainSpecialBizCredentialsResponse
 */
SubmitDomainSpecialBizCredentialsResponse Client::submitDomainSpecialBizCredentials(const SubmitDomainSpecialBizCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDomainSpecialBizCredentialsWithOptions(request, runtime);
}

/**
 * @summary 提交邮箱验证
 *
 * @param request SubmitEmailVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitEmailVerificationResponse
 */
SubmitEmailVerificationResponse Client::submitEmailVerificationWithOptions(const SubmitEmailVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSendIfExist()) {
    query["SendIfExist"] = request.sendIfExist();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 提交邮箱验证
 *
 * @param request SubmitEmailVerificationRequest
 * @return SubmitEmailVerificationResponse
 */
SubmitEmailVerificationResponse Client::submitEmailVerification(const SubmitEmailVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitEmailVerificationWithOptions(request, runtime);
}

/**
 * @summary 提交申请信息
 *
 * @param request SubmitOperationAuditInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitOperationAuditInfoResponse
 */
SubmitOperationAuditInfoResponse Client::submitOperationAuditInfoWithOptions(const SubmitOperationAuditInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditInfo()) {
    query["AuditInfo"] = request.auditInfo();
  }

  if (!!request.hasAuditType()) {
    query["AuditType"] = request.auditType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
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
 * @summary 提交申请信息
 *
 * @param request SubmitOperationAuditInfoRequest
 * @return SubmitOperationAuditInfoResponse
 */
SubmitOperationAuditInfoResponse Client::submitOperationAuditInfo(const SubmitOperationAuditInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitOperationAuditInfoWithOptions(request, runtime);
}

/**
 * @summary 提交证件资料
 *
 * @param request SubmitOperationCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitOperationCredentialsResponse
 */
SubmitOperationCredentialsResponse Client::submitOperationCredentialsWithOptions(const SubmitOperationCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditRecordId()) {
    query["AuditRecordId"] = request.auditRecordId();
  }

  if (!!request.hasAuditType()) {
    query["AuditType"] = request.auditType();
  }

  if (!!request.hasCredentials()) {
    query["Credentials"] = request.credentials();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegType()) {
    query["RegType"] = request.regType();
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
 * @summary 提交证件资料
 *
 * @param request SubmitOperationCredentialsRequest
 * @return SubmitOperationCredentialsResponse
 */
SubmitOperationCredentialsResponse Client::submitOperationCredentials(const SubmitOperationCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitOperationCredentialsWithOptions(request, runtime);
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
    query["Lang"] = request.lang();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasTransferAuthorizationCode()) {
    query["TransferAuthorizationCode"] = request.transferAuthorizationCode();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @param request TransferInResendMailTokenRequest
 * @return TransferInResendMailTokenResponse
 */
TransferInResendMailTokenResponse Client::transferInResendMailToken(const TransferInResendMailTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferInResendMailTokenWithOptions(request, runtime);
}

/**
 * @summary 向分组设置域名
 *
 * @param request UpdateDomainToDomainGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDomainToDomainGroupResponse
 */
UpdateDomainToDomainGroupResponse Client::updateDomainToDomainGroupWithOptions(const UpdateDomainToDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSource()) {
    query["DataSource"] = request.dataSource();
  }

  if (!!request.hasDomainGroupId()) {
    query["DomainGroupId"] = request.domainGroupId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasReplace()) {
    query["Replace"] = request.replace();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  json body = {};
  if (!!request.hasFileToUpload()) {
    body["FileToUpload"] = request.fileToUpload();
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
 * @summary 向分组设置域名
 *
 * @param request UpdateDomainToDomainGroupRequest
 * @return UpdateDomainToDomainGroupResponse
 */
UpdateDomainToDomainGroupResponse Client::updateDomainToDomainGroup(const UpdateDomainToDomainGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDomainToDomainGroupWithOptions(request, runtime);
}

/**
 * @summary 校验联系人信息
 *
 * @param request VerifyContactFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyContactFieldResponse
 */
VerifyContactFieldResponse Client::verifyContactFieldWithOptions(const VerifyContactFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.address();
  }

  if (!!request.hasCity()) {
    query["City"] = request.city();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.country();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPostalCode()) {
    query["PostalCode"] = request.postalCode();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.province();
  }

  if (!!request.hasRegistrantName()) {
    query["RegistrantName"] = request.registrantName();
  }

  if (!!request.hasRegistrantOrganization()) {
    query["RegistrantOrganization"] = request.registrantOrganization();
  }

  if (!!request.hasRegistrantType()) {
    query["RegistrantType"] = request.registrantType();
  }

  if (!!request.hasTelArea()) {
    query["TelArea"] = request.telArea();
  }

  if (!!request.hasTelExt()) {
    query["TelExt"] = request.telExt();
  }

  if (!!request.hasTelephone()) {
    query["Telephone"] = request.telephone();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
  }

  if (!!request.hasZhAddress()) {
    query["ZhAddress"] = request.zhAddress();
  }

  if (!!request.hasZhCity()) {
    query["ZhCity"] = request.zhCity();
  }

  if (!!request.hasZhProvince()) {
    query["ZhProvince"] = request.zhProvince();
  }

  if (!!request.hasZhRegistrantName()) {
    query["ZhRegistrantName"] = request.zhRegistrantName();
  }

  if (!!request.hasZhRegistrantOrganization()) {
    query["ZhRegistrantOrganization"] = request.zhRegistrantOrganization();
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
 * @summary 校验联系人信息
 *
 * @param request VerifyContactFieldRequest
 * @return VerifyContactFieldResponse
 */
VerifyContactFieldResponse Client::verifyContactField(const VerifyContactFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyContactFieldWithOptions(request, runtime);
}

/**
 * @summary 验证邮箱Token
 *
 * @param request VerifyEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyEmailResponse
 */
VerifyEmailResponse Client::verifyEmailWithOptions(const VerifyEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.userClientIp();
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
 * @summary 验证邮箱Token
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