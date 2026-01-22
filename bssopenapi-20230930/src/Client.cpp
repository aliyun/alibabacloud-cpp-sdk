#include <darabonba/Core.hpp>
#include <alibabacloud/BssOpenApi20230930.hpp>
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
using namespace AlibabaCloud::BssOpenApi20230930::Models;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{

AlibabaCloud::BssOpenApi20230930::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "business.aliyuncs.com"},
    {"cn-shanghai" , "business.aliyuncs.com"},
    {"ap-southeast-1" , "business.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-1" , "business.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2" , "business.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2-pop" , "business.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "business.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "business.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3" , "business.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "business.ap-southeast-1.aliyuncs.com"},
    {"cn-beijing" , "business.aliyuncs.com"},
    {"cn-beijing-finance-1" , "business.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "business.aliyuncs.com"},
    {"cn-beijing-gov-1" , "business.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "business.aliyuncs.com"},
    {"cn-chengdu" , "business.aliyuncs.com"},
    {"cn-edge-1" , "business.aliyuncs.com"},
    {"cn-fujian" , "business.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "business.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "business.aliyuncs.com"},
    {"cn-hangzhou-finance" , "business.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "business.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "business.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "business.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "business.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "business.aliyuncs.com"},
    {"cn-hongkong" , "business.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "business.aliyuncs.com"},
    {"cn-huhehaote" , "business.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "business.aliyuncs.com"},
    {"cn-north-2-gov-1" , "business.aliyuncs.com"},
    {"cn-qingdao" , "business.aliyuncs.com"},
    {"cn-qingdao-nebula" , "business.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "business.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "business.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "business.aliyuncs.com"},
    {"cn-shanghai-inner" , "business.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "business.aliyuncs.com"},
    {"cn-shenzhen" , "business.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "business.aliyuncs.com"},
    {"cn-shenzhen-inner" , "business.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "business.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "business.aliyuncs.com"},
    {"cn-wuhan" , "business.aliyuncs.com"},
    {"cn-wulanchabu" , "business.aliyuncs.com"},
    {"cn-yushanfang" , "business.aliyuncs.com"},
    {"cn-zhangbei" , "business.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "business.aliyuncs.com"},
    {"cn-zhangjiakou" , "business.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "business.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "business.aliyuncs.com"},
    {"eu-central-1" , "business.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1" , "business.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1-oxs" , "business.ap-southeast-1.aliyuncs.com"},
    {"me-east-1" , "business.ap-southeast-1.aliyuncs.com"},
    {"rus-west-1-pop" , "business.ap-southeast-1.aliyuncs.com"},
    {"us-east-1" , "business.ap-southeast-1.aliyuncs.com"},
    {"us-west-1" , "business.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("bssopenapi", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 添加优惠券抵扣标签
 *
 * @param tmpReq AddCouponDeductTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCouponDeductTagResponse
 */
AddCouponDeductTagResponse Client::addCouponDeductTagWithOptions(const AddCouponDeductTagRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddCouponDeductTagShrinkRequest request = AddCouponDeductTagShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEcIdAccountIds()) {
    request.setEcIdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEcIdAccountIds(), "EcIdAccountIds", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasCouponId()) {
    query["CouponId"] = request.getCouponId();
  }

  if (!!request.hasEcIdAccountIdsShrink()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIdsShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddCouponDeductTag"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCouponDeductTagResponse>();
}

/**
 * @summary 添加优惠券抵扣标签
 *
 * @param request AddCouponDeductTagRequest
 * @return AddCouponDeductTagResponse
 */
AddCouponDeductTagResponse Client::addCouponDeductTag(const AddCouponDeductTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCouponDeductTagWithOptions(request, runtime);
}

/**
 * @summary 财务单元实例重分配
 *
 * @param tmpReq AllocateCostCenterResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateCostCenterResourceResponse
 */
AllocateCostCenterResourceResponse Client::allocateCostCenterResourceWithOptions(const AllocateCostCenterResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AllocateCostCenterResourceShrinkRequest request = AllocateCostCenterResourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceInstanceList()) {
    request.setResourceInstanceListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceInstanceList(), "ResourceInstanceList", "json"));
  }

  json query = {};
  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  json body = {};
  if (!!request.hasFromCostCenterId()) {
    body["FromCostCenterId"] = request.getFromCostCenterId();
  }

  if (!!request.hasFromOwnerAccountId()) {
    body["FromOwnerAccountId"] = request.getFromOwnerAccountId();
  }

  if (!!request.hasResourceInstanceListShrink()) {
    body["ResourceInstanceList"] = request.getResourceInstanceListShrink();
  }

  if (!!request.hasToCostCenterId()) {
    body["ToCostCenterId"] = request.getToCostCenterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AllocateCostCenterResource"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateCostCenterResourceResponse>();
}

/**
 * @summary 财务单元实例重分配
 *
 * @param request AllocateCostCenterResourceRequest
 * @return AllocateCostCenterResourceResponse
 */
AllocateCostCenterResourceResponse Client::allocateCostCenterResource(const AllocateCostCenterResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateCostCenterResourceWithOptions(request, runtime);
}

/**
 * @summary 取消资金账户低额预警
 *
 * @param request CancelFundAccountLowAvailableAmountAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelFundAccountLowAvailableAmountAlarmResponse
 */
CancelFundAccountLowAvailableAmountAlarmResponse Client::cancelFundAccountLowAvailableAmountAlarmWithOptions(const CancelFundAccountLowAvailableAmountAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFundAccountId()) {
    body["FundAccountId"] = request.getFundAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CancelFundAccountLowAvailableAmountAlarm"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelFundAccountLowAvailableAmountAlarmResponse>();
}

/**
 * @summary 取消资金账户低额预警
 *
 * @param request CancelFundAccountLowAvailableAmountAlarmRequest
 * @return CancelFundAccountLowAvailableAmountAlarmResponse
 */
CancelFundAccountLowAvailableAmountAlarmResponse Client::cancelFundAccountLowAvailableAmountAlarm(const CancelFundAccountLowAvailableAmountAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelFundAccountLowAvailableAmountAlarmWithOptions(request, runtime);
}

/**
 * @summary 提货券账户检查是否存在
 *
 * @param request CheckAccountExistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAccountExistResponse
 */
CheckAccountExistResponse Client::checkAccountExistWithOptions(const CheckAccountExistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEcIdAccountIds()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIds();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  json body = {};
  if (!!request.hasToUserType()) {
    body["ToUserType"] = request.getToUserType();
  }

  if (!!request.hasTransferAccount()) {
    body["TransferAccount"] = request.getTransferAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckAccountExist"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAccountExistResponse>();
}

/**
 * @summary 提货券账户检查是否存在
 *
 * @param request CheckAccountExistRequest
 * @return CheckAccountExistResponse
 */
CheckAccountExistResponse Client::checkAccountExist(const CheckAccountExistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkAccountExistWithOptions(request, runtime);
}

/**
 * @summary 创建财务单元
 *
 * @param tmpReq CreateCostCenterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCostCenterResponse
 */
CreateCostCenterResponse Client::createCostCenterWithOptions(const CreateCostCenterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCostCenterShrinkRequest request = CreateCostCenterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCostCenterEntityList()) {
    request.setCostCenterEntityListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCostCenterEntityList(), "CostCenterEntityList", "json"));
  }

  json query = {};
  if (!!request.hasCostCenterEntityListShrink()) {
    query["CostCenterEntityList"] = request.getCostCenterEntityListShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCostCenter"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCostCenterResponse>();
}

/**
 * @summary 创建财务单元
 *
 * @param request CreateCostCenterRequest
 * @return CreateCostCenterResponse
 */
CreateCostCenterResponse Client::createCostCenter(const CreateCostCenterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCostCenterWithOptions(request, runtime);
}

/**
 * @summary 新建财务单元规则
 *
 * @param tmpReq CreateCostCenterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCostCenterRuleResponse
 */
CreateCostCenterRuleResponse Client::createCostCenterRuleWithOptions(const CreateCostCenterRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCostCenterRuleShrinkRequest request = CreateCostCenterRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterExpression()) {
    request.setFilterExpressionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterExpression(), "FilterExpression", "json"));
  }

  json query = {};
  if (!!request.hasFilterExpressionShrink()) {
    query["FilterExpression"] = request.getFilterExpressionShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  json body = {};
  if (!!request.hasCostCenterId()) {
    body["CostCenterId"] = request.getCostCenterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCostCenterRule"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCostCenterRuleResponse>();
}

/**
 * @summary 新建财务单元规则
 *
 * @param request CreateCostCenterRuleRequest
 * @return CreateCostCenterRuleResponse
 */
CreateCostCenterRuleResponse Client::createCostCenterRule(const CreateCostCenterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCostCenterRuleWithOptions(request, runtime);
}

/**
 * @summary 创建资金账户付款关系
 *
 * @param tmpReq CreateFundAccountPayRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFundAccountPayRelationResponse
 */
CreateFundAccountPayRelationResponse Client::createFundAccountPayRelationWithOptions(const CreateFundAccountPayRelationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateFundAccountPayRelationShrinkRequest request = CreateFundAccountPayRelationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEcIdAccountIds()) {
    request.setEcIdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEcIdAccountIds(), "EcIdAccountIds", "json"));
  }

  json query = {};
  if (!!request.hasEcIdAccountIdsShrink()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIdsShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  json body = {};
  if (!!request.hasFundAccountId()) {
    body["FundAccountId"] = request.getFundAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFundAccountPayRelation"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFundAccountPayRelationResponse>();
}

/**
 * @summary 创建资金账户付款关系
 *
 * @param request CreateFundAccountPayRelationRequest
 * @return CreateFundAccountPayRelationResponse
 */
CreateFundAccountPayRelationResponse Client::createFundAccountPayRelation(const CreateFundAccountPayRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFundAccountPayRelationWithOptions(request, runtime);
}

/**
 * @summary 创建资金账户划拨/回收
 *
 * @param request CreateFundAccountTransferRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFundAccountTransferResponse
 */
CreateFundAccountTransferResponse Client::createFundAccountTransferWithOptions(const CreateFundAccountTransferRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAmount()) {
    body["Amount"] = request.getAmount();
  }

  if (!!request.hasCurrency()) {
    body["Currency"] = request.getCurrency();
  }

  if (!!request.hasFinanceType()) {
    body["FinanceType"] = request.getFinanceType();
  }

  if (!!request.hasFromFundAccountId()) {
    body["FromFundAccountId"] = request.getFromFundAccountId();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.getRemark();
  }

  if (!!request.hasToFundAccountId()) {
    body["ToFundAccountId"] = request.getToFundAccountId();
  }

  if (!!request.hasTransferType()) {
    body["TransferType"] = request.getTransferType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateFundAccountTransfer"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFundAccountTransferResponse>();
}

/**
 * @summary 创建资金账户划拨/回收
 *
 * @param request CreateFundAccountTransferRequest
 * @return CreateFundAccountTransferResponse
 */
CreateFundAccountTransferResponse Client::createFundAccountTransfer(const CreateFundAccountTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFundAccountTransferWithOptions(request, runtime);
}

/**
 * @summary 申请发票
 *
 * @param tmpReq CreateInvoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInvoiceResponse
 */
CreateInvoiceResponse Client::createInvoiceWithOptions(const CreateInvoiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateInvoiceShrinkRequest request = CreateInvoiceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEcIdAccountIds()) {
    request.setEcIdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEcIdAccountIds(), "EcIdAccountIds", "json"));
  }

  if (!!tmpReq.hasInvoiceCandidateIds()) {
    request.setInvoiceCandidateIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInvoiceCandidateIds(), "InvoiceCandidateIds", "json"));
  }

  if (!!tmpReq.hasRecipientEmails()) {
    request.setRecipientEmailsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRecipientEmails(), "RecipientEmails", "json"));
  }

  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasEcIdAccountIdsShrink()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIdsShrink();
  }

  if (!!request.hasInvoiceCandidateIdsShrink()) {
    query["InvoiceCandidateIds"] = request.getInvoiceCandidateIdsShrink();
  }

  if (!!request.hasInvoiceMode()) {
    query["InvoiceMode"] = request.getInvoiceMode();
  }

  if (!!request.hasInvoiceRemark()) {
    query["InvoiceRemark"] = request.getInvoiceRemark();
  }

  if (!!request.hasInvoiceTitleId()) {
    query["InvoiceTitleId"] = request.getInvoiceTitleId();
  }

  if (!!request.hasInvoiceType()) {
    query["InvoiceType"] = request.getInvoiceType();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  if (!!request.hasRecipientEmailsShrink()) {
    query["RecipientEmails"] = request.getRecipientEmailsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInvoice"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInvoiceResponse>();
}

/**
 * @summary 申请发票
 *
 * @param request CreateInvoiceRequest
 * @return CreateInvoiceResponse
 */
CreateInvoiceResponse Client::createInvoice(const CreateInvoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInvoiceWithOptions(request, runtime);
}

/**
 * @summary 创建账单订阅
 *
 * @param request CreateReportDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateReportDefinitionResponse
 */
CreateReportDefinitionResponse Client::createReportDefinitionWithOptions(const CreateReportDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginBillingCycle()) {
    query["BeginBillingCycle"] = request.getBeginBillingCycle();
  }

  if (!!request.hasIncludeMembers()) {
    query["IncludeMembers"] = request.getIncludeMembers();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  if (!!request.hasNotSendOnNoData()) {
    query["NotSendOnNoData"] = request.getNotSendOnNoData();
  }

  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.getOssBucketName();
  }

  if (!!request.hasOssBucketOwnerAccountId()) {
    query["OssBucketOwnerAccountId"] = request.getOssBucketOwnerAccountId();
  }

  if (!!request.hasOssBucketPath()) {
    query["OssBucketPath"] = request.getOssBucketPath();
  }

  if (!!request.hasReportType()) {
    query["ReportType"] = request.getReportType();
  }

  if (!!request.hasSendWithAttach()) {
    query["SendWithAttach"] = request.getSendWithAttach();
  }

  if (!!request.hasSplitFileOnUserId()) {
    query["SplitFileOnUserId"] = request.getSplitFileOnUserId();
  }

  json body = {};
  if (!!request.hasMcProject()) {
    body["McProject"] = request.getMcProject();
  }

  if (!!request.hasMcTableName()) {
    body["McTableName"] = request.getMcTableName();
  }

  if (!!request.hasReportSourceType()) {
    body["ReportSourceType"] = request.getReportSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateReportDefinition"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateReportDefinitionResponse>();
}

/**
 * @summary 创建账单订阅
 *
 * @param request CreateReportDefinitionRequest
 * @return CreateReportDefinitionResponse
 */
CreateReportDefinitionResponse Client::createReportDefinition(const CreateReportDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createReportDefinitionWithOptions(request, runtime);
}

/**
 * @summary 删除财务单元
 *
 * @param request DeleteCostCenterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCostCenterResponse
 */
DeleteCostCenterResponse Client::deleteCostCenterWithOptions(const DeleteCostCenterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCostCenterId()) {
    query["CostCenterId"] = request.getCostCenterId();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  if (!!request.hasOwnerAccountId()) {
    query["OwnerAccountId"] = request.getOwnerAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCostCenter"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCostCenterResponse>();
}

/**
 * @summary 删除财务单元
 *
 * @param request DeleteCostCenterRequest
 * @return DeleteCostCenterResponse
 */
DeleteCostCenterResponse Client::deleteCostCenter(const DeleteCostCenterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCostCenterWithOptions(request, runtime);
}

/**
 * @summary 删除财务单元规则
 *
 * @param tmpReq DeleteCostCenterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCostCenterRuleResponse
 */
DeleteCostCenterRuleResponse Client::deleteCostCenterRuleWithOptions(const DeleteCostCenterRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteCostCenterRuleShrinkRequest request = DeleteCostCenterRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterExpression()) {
    request.setFilterExpressionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterExpression(), "FilterExpression", "json"));
  }

  json query = {};
  if (!!request.hasFilterExpressionShrink()) {
    query["FilterExpression"] = request.getFilterExpressionShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  json body = {};
  if (!!request.hasCostCenterId()) {
    body["CostCenterId"] = request.getCostCenterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteCostCenterRule"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCostCenterRuleResponse>();
}

/**
 * @summary 删除财务单元规则
 *
 * @param request DeleteCostCenterRuleRequest
 * @return DeleteCostCenterRuleResponse
 */
DeleteCostCenterRuleResponse Client::deleteCostCenterRule(const DeleteCostCenterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCostCenterRuleWithOptions(request, runtime);
}

/**
 * @summary 删除优惠券的抵扣标签
 *
 * @param tmpReq DeleteCouponDeductTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCouponDeductTagResponse
 */
DeleteCouponDeductTagResponse Client::deleteCouponDeductTagWithOptions(const DeleteCouponDeductTagRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteCouponDeductTagShrinkRequest request = DeleteCouponDeductTagShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEcIdAccountIds()) {
    request.setEcIdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEcIdAccountIds(), "EcIdAccountIds", "json"));
  }

  if (!!tmpReq.hasTagKeys()) {
    request.setTagKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagKeys(), "TagKeys", "json"));
  }

  json query = {};
  if (!!request.hasCouponId()) {
    query["CouponId"] = request.getCouponId();
  }

  if (!!request.hasEcIdAccountIdsShrink()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIdsShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  if (!!request.hasTagKeysShrink()) {
    query["TagKeys"] = request.getTagKeysShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCouponDeductTag"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCouponDeductTagResponse>();
}

/**
 * @summary 删除优惠券的抵扣标签
 *
 * @param request DeleteCouponDeductTagRequest
 * @return DeleteCouponDeductTagResponse
 */
DeleteCouponDeductTagResponse Client::deleteCouponDeductTag(const DeleteCouponDeductTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCouponDeductTagWithOptions(request, runtime);
}

/**
 * @summary 取消账单订阅
 *
 * @param request DeleteReportDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteReportDefinitionResponse
 */
DeleteReportDefinitionResponse Client::deleteReportDefinitionWithOptions(const DeleteReportDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  if (!!request.hasReportTaskId()) {
    query["ReportTaskId"] = request.getReportTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteReportDefinition"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteReportDefinitionResponse>();
}

/**
 * @summary 取消账单订阅
 *
 * @param request DeleteReportDefinitionRequest
 * @return DeleteReportDefinitionResponse
 */
DeleteReportDefinitionResponse Client::deleteReportDefinition(const DeleteReportDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteReportDefinitionWithOptions(request, runtime);
}

/**
 * @summary 查询优惠券列表
 *
 * @param tmpReq DescribeCouponRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCouponResponse
 */
DescribeCouponResponse Client::describeCouponWithOptions(const DescribeCouponRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeCouponShrinkRequest request = DescribeCouponShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEcIdAccountIds()) {
    request.setEcIdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEcIdAccountIds(), "EcIdAccountIds", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCoupon"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCouponResponse>();
}

/**
 * @summary 查询优惠券列表
 *
 * @param request DescribeCouponRequest
 * @return DescribeCouponResponse
 */
DescribeCouponResponse Client::describeCoupon(const DescribeCouponRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCouponWithOptions(request, runtime);
}

/**
 * @summary 查询优惠券可用商品列表
 *
 * @param tmpReq DescribeCouponItemListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCouponItemListResponse
 */
DescribeCouponItemListResponse Client::describeCouponItemListWithOptions(const DescribeCouponItemListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeCouponItemListShrinkRequest request = DescribeCouponItemListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEcIdAccountIds()) {
    request.setEcIdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEcIdAccountIds(), "EcIdAccountIds", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCouponItemList"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCouponItemListResponse>();
}

/**
 * @summary 查询优惠券可用商品列表
 *
 * @param request DescribeCouponItemListRequest
 * @return DescribeCouponItemListResponse
 */
DescribeCouponItemListResponse Client::describeCouponItemList(const DescribeCouponItemListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCouponItemListWithOptions(request, runtime);
}

/**
 * @summary 获取客户使用SPN的概述信息
 *
 * @param tmpReq DescribeUserSpnSummaryInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserSpnSummaryInfoResponse
 */
DescribeUserSpnSummaryInfoResponse Client::describeUserSpnSummaryInfoWithOptions(const DescribeUserSpnSummaryInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeUserSpnSummaryInfoShrinkRequest request = DescribeUserSpnSummaryInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEcIdAccountIds()) {
    request.setEcIdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEcIdAccountIds(), "EcIdAccountIds", "json"));
  }

  json query = {};
  if (!!request.hasEcIdAccountIdsShrink()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIdsShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserSpnSummaryInfo"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserSpnSummaryInfoResponse>();
}

/**
 * @summary 获取客户使用SPN的概述信息
 *
 * @param request DescribeUserSpnSummaryInfoRequest
 * @return DescribeUserSpnSummaryInfoResponse
 */
DescribeUserSpnSummaryInfoResponse Client::describeUserSpnSummaryInfo(const DescribeUserSpnSummaryInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserSpnSummaryInfoWithOptions(request, runtime);
}

/**
 * @summary 查询资金账户可用金
 *
 * @param request GetFundAccountAvailableAmountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFundAccountAvailableAmountResponse
 */
GetFundAccountAvailableAmountResponse Client::getFundAccountAvailableAmountWithOptions(const GetFundAccountAvailableAmountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFundAccountId()) {
    body["FundAccountId"] = request.getFundAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFundAccountAvailableAmount"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFundAccountAvailableAmountResponse>();
}

/**
 * @summary 查询资金账户可用金
 *
 * @param request GetFundAccountAvailableAmountRequest
 * @return GetFundAccountAvailableAmountResponse
 */
GetFundAccountAvailableAmountResponse Client::getFundAccountAvailableAmount(const GetFundAccountAvailableAmountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFundAccountAvailableAmountWithOptions(request, runtime);
}

/**
 * @summary 查询资金账户可分配信控额度
 *
 * @param request GetFundAccountCanAllocateCreditAmountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFundAccountCanAllocateCreditAmountResponse
 */
GetFundAccountCanAllocateCreditAmountResponse Client::getFundAccountCanAllocateCreditAmountWithOptions(const GetFundAccountCanAllocateCreditAmountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFundAccountId()) {
    body["FundAccountId"] = request.getFundAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFundAccountCanAllocateCreditAmount"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFundAccountCanAllocateCreditAmountResponse>();
}

/**
 * @summary 查询资金账户可分配信控额度
 *
 * @param request GetFundAccountCanAllocateCreditAmountRequest
 * @return GetFundAccountCanAllocateCreditAmountResponse
 */
GetFundAccountCanAllocateCreditAmountResponse Client::getFundAccountCanAllocateCreditAmount(const GetFundAccountCanAllocateCreditAmountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFundAccountCanAllocateCreditAmountWithOptions(request, runtime);
}

/**
 * @summary 查询资金账户可回收金额
 *
 * @param request GetFundAccountCanRecycleAmountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFundAccountCanRecycleAmountResponse
 */
GetFundAccountCanRecycleAmountResponse Client::getFundAccountCanRecycleAmountWithOptions(const GetFundAccountCanRecycleAmountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrency()) {
    body["Currency"] = request.getCurrency();
  }

  if (!!request.hasRecycleFromFundAccountId()) {
    body["RecycleFromFundAccountId"] = request.getRecycleFromFundAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFundAccountCanRecycleAmount"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFundAccountCanRecycleAmountResponse>();
}

/**
 * @summary 查询资金账户可回收金额
 *
 * @param request GetFundAccountCanRecycleAmountRequest
 * @return GetFundAccountCanRecycleAmountResponse
 */
GetFundAccountCanRecycleAmountResponse Client::getFundAccountCanRecycleAmount(const GetFundAccountCanRecycleAmountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFundAccountCanRecycleAmountWithOptions(request, runtime);
}

/**
 * @summary 查询资金账户的可转出金额
 *
 * @param request GetFundAccountCanTransferAmountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFundAccountCanTransferAmountResponse
 */
GetFundAccountCanTransferAmountResponse Client::getFundAccountCanTransferAmountWithOptions(const GetFundAccountCanTransferAmountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrency()) {
    body["Currency"] = request.getCurrency();
  }

  if (!!request.hasFundAccountId()) {
    body["FundAccountId"] = request.getFundAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFundAccountCanTransferAmount"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFundAccountCanTransferAmountResponse>();
}

/**
 * @summary 查询资金账户的可转出金额
 *
 * @param request GetFundAccountCanTransferAmountRequest
 * @return GetFundAccountCanTransferAmountResponse
 */
GetFundAccountCanTransferAmountResponse Client::getFundAccountCanTransferAmount(const GetFundAccountCanTransferAmountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFundAccountCanTransferAmountWithOptions(request, runtime);
}

/**
 * @summary 查询资金账户可提现金额
 *
 * @param request GetFundAccountCanWithdrawAmountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFundAccountCanWithdrawAmountResponse
 */
GetFundAccountCanWithdrawAmountResponse Client::getFundAccountCanWithdrawAmountWithOptions(const GetFundAccountCanWithdrawAmountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFundAccountId()) {
    body["FundAccountId"] = request.getFundAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFundAccountCanWithdrawAmount"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFundAccountCanWithdrawAmountResponse>();
}

/**
 * @summary 查询资金账户可提现金额
 *
 * @param request GetFundAccountCanWithdrawAmountRequest
 * @return GetFundAccountCanWithdrawAmountResponse
 */
GetFundAccountCanWithdrawAmountResponse Client::getFundAccountCanWithdrawAmount(const GetFundAccountCanWithdrawAmountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFundAccountCanWithdrawAmountWithOptions(request, runtime);
}

/**
 * @summary 查询资金账户低额预警
 *
 * @param request GetFundAccountLowAvailableAmountAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFundAccountLowAvailableAmountAlarmResponse
 */
GetFundAccountLowAvailableAmountAlarmResponse Client::getFundAccountLowAvailableAmountAlarmWithOptions(const GetFundAccountLowAvailableAmountAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFundAccountId()) {
    body["FundAccountId"] = request.getFundAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFundAccountLowAvailableAmountAlarm"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFundAccountLowAvailableAmountAlarmResponse>();
}

/**
 * @summary 查询资金账户低额预警
 *
 * @param request GetFundAccountLowAvailableAmountAlarmRequest
 * @return GetFundAccountLowAvailableAmountAlarmResponse
 */
GetFundAccountLowAvailableAmountAlarmResponse Client::getFundAccountLowAvailableAmountAlarm(const GetFundAccountLowAvailableAmountAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFundAccountLowAvailableAmountAlarmWithOptions(request, runtime);
}

/**
 * @summary 查询资金账户收支明细
 *
 * @param tmpReq GetFundAccountTransactionDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFundAccountTransactionDetailsResponse
 */
GetFundAccountTransactionDetailsResponse Client::getFundAccountTransactionDetailsWithOptions(const GetFundAccountTransactionDetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetFundAccountTransactionDetailsShrinkRequest request = GetFundAccountTransactionDetailsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTransactionChannelList()) {
    request.setTransactionChannelListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTransactionChannelList(), "TransactionChannelList", "json"));
  }

  if (!!tmpReq.hasTransactionTypeList()) {
    request.setTransactionTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTransactionTypeList(), "TransactionTypeList", "json"));
  }

  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  json body = {};
  if (!!request.hasBillNumber()) {
    body["BillNumber"] = request.getBillNumber();
  }

  if (!!request.hasChannelTransactionNumber()) {
    body["ChannelTransactionNumber"] = request.getChannelTransactionNumber();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFundAccountId()) {
    body["FundAccountId"] = request.getFundAccountId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTransactionChannelListShrink()) {
    body["TransactionChannelList"] = request.getTransactionChannelListShrink();
  }

  if (!!request.hasTransactionDirection()) {
    body["TransactionDirection"] = request.getTransactionDirection();
  }

  if (!!request.hasTransactionNumber()) {
    body["TransactionNumber"] = request.getTransactionNumber();
  }

  if (!!request.hasTransactionType()) {
    body["TransactionType"] = request.getTransactionType();
  }

  if (!!request.hasTransactionTypeListShrink()) {
    body["TransactionTypeList"] = request.getTransactionTypeListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetFundAccountTransactionDetails"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFundAccountTransactionDetailsResponse>();
}

/**
 * @summary 查询资金账户收支明细
 *
 * @param request GetFundAccountTransactionDetailsRequest
 * @return GetFundAccountTransactionDetailsResponse
 */
GetFundAccountTransactionDetailsResponse Client::getFundAccountTransactionDetails(const GetFundAccountTransactionDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFundAccountTransactionDetailsWithOptions(request, runtime);
}

/**
 * @summary 订单详情查询
 *
 * @param request GetOrderDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrderDetailResponse
 */
GetOrderDetailResponse Client::getOrderDetailWithOptions(const GetOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOrderDetail"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOrderDetailResponse>();
}

/**
 * @summary 订单详情查询
 *
 * @param request GetOrderDetailRequest
 * @return GetOrderDetailResponse
 */
GetOrderDetailResponse Client::getOrderDetail(const GetOrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOrderDetailWithOptions(request, runtime);
}

/**
 * @summary 订单列表查询
 *
 * @param request GetOrdersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrdersResponse
 */
GetOrdersResponse Client::getOrdersWithOptions(const GetOrdersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.getCreateTimeStart();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPaymentStatus()) {
    query["PaymentStatus"] = request.getPaymentStatus();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.getSubscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOrders"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOrdersResponse>();
}

/**
 * @summary 订单列表查询
 *
 * @param request GetOrdersRequest
 * @return GetOrdersResponse
 */
GetOrdersResponse Client::getOrders(const GetOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOrdersWithOptions(request, runtime);
}

/**
 * @summary 获取节省计划及可抵扣商品信息
 *
 * @param tmpReq GetSavingPlanDeductableCommodityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSavingPlanDeductableCommodityResponse
 */
GetSavingPlanDeductableCommodityResponse Client::getSavingPlanDeductableCommodityWithOptions(const GetSavingPlanDeductableCommodityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSavingPlanDeductableCommodityShrinkRequest request = GetSavingPlanDeductableCommodityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEcIdAccountIds()) {
    request.setEcIdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEcIdAccountIds(), "EcIdAccountIds", "json"));
  }

  json query = {};
  if (!!request.hasEcIdAccountIdsShrink()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIdsShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSavingPlanDeductableCommodity"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSavingPlanDeductableCommodityResponse>();
}

/**
 * @summary 获取节省计划及可抵扣商品信息
 *
 * @param request GetSavingPlanDeductableCommodityRequest
 * @return GetSavingPlanDeductableCommodityResponse
 */
GetSavingPlanDeductableCommodityResponse Client::getSavingPlanDeductableCommodity(const GetSavingPlanDeductableCommodityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSavingPlanDeductableCommodityWithOptions(request, runtime);
}

/**
 * @summary 获取节省计划实例共享账号信息
 *
 * @param tmpReq GetSavingPlanShareAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSavingPlanShareAccountsResponse
 */
GetSavingPlanShareAccountsResponse Client::getSavingPlanShareAccountsWithOptions(const GetSavingPlanShareAccountsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSavingPlanShareAccountsShrinkRequest request = GetSavingPlanShareAccountsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEcIdAccountIds()) {
    request.setEcIdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEcIdAccountIds(), "EcIdAccountIds", "json"));
  }

  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEcIdAccountIdsShrink()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIdsShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSpnInstanceCode()) {
    query["SpnInstanceCode"] = request.getSpnInstanceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSavingPlanShareAccounts"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSavingPlanShareAccountsResponse>();
}

/**
 * @summary 获取节省计划实例共享账号信息
 *
 * @param request GetSavingPlanShareAccountsRequest
 * @return GetSavingPlanShareAccountsResponse
 */
GetSavingPlanShareAccountsResponse Client::getSavingPlanShareAccounts(const GetSavingPlanShareAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSavingPlanShareAccountsWithOptions(request, runtime);
}

/**
 * @summary 获取节省计划实例客户自定义规则
 *
 * @param tmpReq GetSavingPlanUserDeductRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSavingPlanUserDeductRuleResponse
 */
GetSavingPlanUserDeductRuleResponse Client::getSavingPlanUserDeductRuleWithOptions(const GetSavingPlanUserDeductRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSavingPlanUserDeductRuleShrinkRequest request = GetSavingPlanUserDeductRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEcIdAccountIds()) {
    request.setEcIdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEcIdAccountIds(), "EcIdAccountIds", "json"));
  }

  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEcIdAccountIdsShrink()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIdsShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSpnInstanceCode()) {
    query["SpnInstanceCode"] = request.getSpnInstanceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSavingPlanUserDeductRule"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSavingPlanUserDeductRuleResponse>();
}

/**
 * @summary 获取节省计划实例客户自定义规则
 *
 * @param request GetSavingPlanUserDeductRuleRequest
 * @return GetSavingPlanUserDeductRuleResponse
 */
GetSavingPlanUserDeductRuleResponse Client::getSavingPlanUserDeductRule(const GetSavingPlanUserDeductRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSavingPlanUserDeductRuleWithOptions(request, runtime);
}

/**
 * @summary 查询优惠券设置的抵扣标签
 *
 * @param tmpReq ListCouponDeductTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCouponDeductTagResponse
 */
ListCouponDeductTagResponse Client::listCouponDeductTagWithOptions(const ListCouponDeductTagRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCouponDeductTagShrinkRequest request = ListCouponDeductTagShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEcIdAccountIds()) {
    request.setEcIdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEcIdAccountIds(), "EcIdAccountIds", "json"));
  }

  json query = {};
  if (!!request.hasCouponId()) {
    query["CouponId"] = request.getCouponId();
  }

  if (!!request.hasEcIdAccountIdsShrink()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIdsShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCouponDeductTag"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCouponDeductTagResponse>();
}

/**
 * @summary 查询优惠券设置的抵扣标签
 *
 * @param request ListCouponDeductTagRequest
 * @return ListCouponDeductTagResponse
 */
ListCouponDeductTagResponse Client::listCouponDeductTag(const ListCouponDeductTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCouponDeductTagWithOptions(request, runtime);
}

/**
 * @summary 查询资金账户列表
 *
 * @param request ListFundAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFundAccountResponse
 */
ListFundAccountResponse Client::listFundAccountWithOptions(const ListFundAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  json body = {};
  if (!!request.hasQueryOnlyInUse()) {
    body["QueryOnlyInUse"] = request.getQueryOnlyInUse();
  }

  if (!!request.hasQueryOnlyManage()) {
    body["QueryOnlyManage"] = request.getQueryOnlyManage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListFundAccount"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFundAccountResponse>();
}

/**
 * @summary 查询资金账户列表
 *
 * @param request ListFundAccountRequest
 * @return ListFundAccountResponse
 */
ListFundAccountResponse Client::listFundAccount(const ListFundAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFundAccountWithOptions(request, runtime);
}

/**
 * @summary 查询资金账户的付款关系
 *
 * @param request ListFundAccountPayRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFundAccountPayRelationResponse
 */
ListFundAccountPayRelationResponse Client::listFundAccountPayRelationWithOptions(const ListFundAccountPayRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  json body = {};
  if (!!request.hasFundAccountId()) {
    body["FundAccountId"] = request.getFundAccountId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListFundAccountPayRelation"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFundAccountPayRelationResponse>();
}

/**
 * @summary 查询资金账户的付款关系
 *
 * @param request ListFundAccountPayRelationRequest
 * @return ListFundAccountPayRelationResponse
 */
ListFundAccountPayRelationResponse Client::listFundAccountPayRelation(const ListFundAccountPayRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFundAccountPayRelationWithOptions(request, runtime);
}

/**
 * @summary 对客OpenAPI开票对象查询
 *
 * @param tmpReq ListInvoiceCandidateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInvoiceCandidateResponse
 */
ListInvoiceCandidateResponse Client::listInvoiceCandidateWithOptions(const ListInvoiceCandidateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListInvoiceCandidateShrinkRequest request = ListInvoiceCandidateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBillingCycles()) {
    request.setBillingCyclesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBillingCycles(), "BillingCycles", "json"));
  }

  if (!!tmpReq.hasBusinessIds()) {
    request.setBusinessIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBusinessIds(), "BusinessIds", "json"));
  }

  if (!!tmpReq.hasEcIdAccountIds()) {
    request.setEcIdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEcIdAccountIds(), "EcIdAccountIds", "json"));
  }

  if (!!tmpReq.hasInvoiceIssuers()) {
    request.setInvoiceIssuersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInvoiceIssuers(), "InvoiceIssuers", "json"));
  }

  if (!!tmpReq.hasStatus()) {
    request.setStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatus(), "Status", "json"));
  }

  if (!!tmpReq.hasTypes()) {
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTypes(), "Types", "json"));
  }

  json query = {};
  if (!!request.hasBillingCyclesShrink()) {
    query["BillingCycles"] = request.getBillingCyclesShrink();
  }

  if (!!request.hasBusinessIdsShrink()) {
    query["BusinessIds"] = request.getBusinessIdsShrink();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEcIdAccountIdsShrink()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIdsShrink();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInvoiceIssuersShrink()) {
    query["InvoiceIssuers"] = request.getInvoiceIssuersShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatusShrink()) {
    query["Status"] = request.getStatusShrink();
  }

  if (!!request.hasTypesShrink()) {
    query["Types"] = request.getTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInvoiceCandidate"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInvoiceCandidateResponse>();
}

/**
 * @summary 对客OpenAPI开票对象查询
 *
 * @param request ListInvoiceCandidateRequest
 * @return ListInvoiceCandidateResponse
 */
ListInvoiceCandidateResponse Client::listInvoiceCandidate(const ListInvoiceCandidateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInvoiceCandidateWithOptions(request, runtime);
}

/**
 * @summary 发票抬头查询服务
 *
 * @param request ListInvoiceTitleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInvoiceTitleResponse
 */
ListInvoiceTitleResponse Client::listInvoiceTitleWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListInvoiceTitle"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInvoiceTitleResponse>();
}

/**
 * @summary 发票抬头查询服务
 *
 * @return ListInvoiceTitleResponse
 */
ListInvoiceTitleResponse Client::listInvoiceTitle() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInvoiceTitleWithOptions(runtime);
}

/**
 * @summary 查看已订阅的报告列表
 *
 * @param request ListReportDefinitionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListReportDefinitionsResponse
 */
ListReportDefinitionsResponse Client::listReportDefinitionsWithOptions(const ListReportDefinitionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListReportDefinitions"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListReportDefinitionsResponse>();
}

/**
 * @summary 查看已订阅的报告列表
 *
 * @param request ListReportDefinitionsRequest
 * @return ListReportDefinitionsResponse
 */
ListReportDefinitionsResponse Client::listReportDefinitions(const ListReportDefinitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listReportDefinitionsWithOptions(request, runtime);
}

/**
 * @summary 修改财务单元
 *
 * @param tmpReq ModifyCostCenterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCostCenterResponse
 */
ModifyCostCenterResponse Client::modifyCostCenterWithOptions(const ModifyCostCenterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyCostCenterShrinkRequest request = ModifyCostCenterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCostCenterEntityList()) {
    request.setCostCenterEntityListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCostCenterEntityList(), "CostCenterEntityList", "json"));
  }

  json query = {};
  if (!!request.hasCostCenterEntityListShrink()) {
    query["CostCenterEntityList"] = request.getCostCenterEntityListShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCostCenter"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCostCenterResponse>();
}

/**
 * @summary 修改财务单元
 *
 * @param request ModifyCostCenterRequest
 * @return ModifyCostCenterResponse
 */
ModifyCostCenterResponse Client::modifyCostCenter(const ModifyCostCenterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCostCenterWithOptions(request, runtime);
}

/**
 * @summary 修改财务单元规则
 *
 * @param tmpReq ModifyCostCenterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCostCenterRuleResponse
 */
ModifyCostCenterRuleResponse Client::modifyCostCenterRuleWithOptions(const ModifyCostCenterRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyCostCenterRuleShrinkRequest request = ModifyCostCenterRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterExpression()) {
    request.setFilterExpressionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterExpression(), "FilterExpression", "json"));
  }

  json query = {};
  if (!!request.hasFilterExpressionShrink()) {
    query["FilterExpression"] = request.getFilterExpressionShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  json body = {};
  if (!!request.hasCostCenterId()) {
    body["CostCenterId"] = request.getCostCenterId();
  }

  if (!!request.hasOwnerAccountId()) {
    body["OwnerAccountId"] = request.getOwnerAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyCostCenterRule"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCostCenterRuleResponse>();
}

/**
 * @summary 修改财务单元规则
 *
 * @param request ModifyCostCenterRuleRequest
 * @return ModifyCostCenterRuleResponse
 */
ModifyCostCenterRuleResponse Client::modifyCostCenterRule(const ModifyCostCenterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCostCenterRuleWithOptions(request, runtime);
}

/**
 * @summary 对客订单支付接口
 *
 * @param request PayOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PayOrderResponse
 */
PayOrderResponse Client::payOrderWithOptions(const PayOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuyerId()) {
    query["BuyerId"] = request.getBuyerId();
  }

  if (!!request.hasEcIdAccountIds()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIds();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasPaySubmitUid()) {
    query["PaySubmitUid"] = request.getPaySubmitUid();
  }

  if (!!request.hasPayerId()) {
    query["PayerId"] = request.getPayerId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PayOrder"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PayOrderResponse>();
}

/**
 * @summary 对客订单支付接口
 *
 * @param request PayOrderRequest
 * @return PayOrderResponse
 */
PayOrderResponse Client::payOrder(const PayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return payOrderWithOptions(request, runtime);
}

/**
 * @summary 查询财务单元
 *
 * @param tmpReq QueryCostCenterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCostCenterResponse
 */
QueryCostCenterResponse Client::queryCostCenterWithOptions(const QueryCostCenterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryCostCenterShrinkRequest request = QueryCostCenterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEcIdAccountIds()) {
    request.setEcIdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEcIdAccountIds(), "EcIdAccountIds", "json"));
  }

  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEcIdAccountIdsShrink()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIdsShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  if (!!request.hasOwnerAccountId()) {
    query["OwnerAccountId"] = request.getOwnerAccountId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentCostCenterId()) {
    query["ParentCostCenterId"] = request.getParentCostCenterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCostCenter"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCostCenterResponse>();
}

/**
 * @summary 查询财务单元
 *
 * @param request QueryCostCenterRequest
 * @return QueryCostCenterResponse
 */
QueryCostCenterResponse Client::queryCostCenter(const QueryCostCenterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCostCenterWithOptions(request, runtime);
}

/**
 * @summary 查询财务单元下资源信息
 *
 * @param request QueryCostCenterResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCostCenterResourceResponse
 */
QueryCostCenterResourceResponse Client::queryCostCenterResourceWithOptions(const QueryCostCenterResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEcIdAccountIds()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  json body = {};
  if (!!request.hasCostCenterId()) {
    body["CostCenterId"] = request.getCostCenterId();
  }

  if (!!request.hasOwnerAccountId()) {
    body["OwnerAccountId"] = request.getOwnerAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryCostCenterResource"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCostCenterResourceResponse>();
}

/**
 * @summary 查询财务单元下资源信息
 *
 * @param request QueryCostCenterResourceRequest
 * @return QueryCostCenterResourceResponse
 */
QueryCostCenterResourceResponse Client::queryCostCenterResource(const QueryCostCenterResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCostCenterResourceWithOptions(request, runtime);
}

/**
 * @summary 查询财务单元规则
 *
 * @param request QueryCostCenterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCostCenterRuleResponse
 */
QueryCostCenterRuleResponse Client::queryCostCenterRuleWithOptions(const QueryCostCenterRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEcIdAccountIds()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIds();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  json body = {};
  if (!!request.hasCostCenterId()) {
    body["CostCenterId"] = request.getCostCenterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryCostCenterRule"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCostCenterRuleResponse>();
}

/**
 * @summary 查询财务单元规则
 *
 * @param request QueryCostCenterRuleRequest
 * @return QueryCostCenterRuleResponse
 */
QueryCostCenterRuleResponse Client::queryCostCenterRule(const QueryCostCenterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCostCenterRuleWithOptions(request, runtime);
}

/**
 * @summary 查询财务单元分摊规则
 *
 * @param request QueryCostCenterShareRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCostCenterShareRuleResponse
 */
QueryCostCenterShareRuleResponse Client::queryCostCenterShareRuleWithOptions(const QueryCostCenterShareRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEcIdAccountIds()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerAccountId()) {
    query["OwnerAccountId"] = request.getOwnerAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCostCenterShareRule"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCostCenterShareRuleResponse>();
}

/**
 * @summary 查询财务单元分摊规则
 *
 * @param request QueryCostCenterShareRuleRequest
 * @return QueryCostCenterShareRuleResponse
 */
QueryCostCenterShareRuleResponse Client::queryCostCenterShareRule(const QueryCostCenterShareRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCostCenterShareRuleWithOptions(request, runtime);
}

/**
 * @summary 修改财务单元分摊规则
 *
 * @param tmpReq SaveCostCenterShareRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveCostCenterShareRuleResponse
 */
SaveCostCenterShareRuleResponse Client::saveCostCenterShareRuleWithOptions(const SaveCostCenterShareRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveCostCenterShareRuleShrinkRequest request = SaveCostCenterShareRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateShareRuleList()) {
    request.setCreateShareRuleListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateShareRuleList(), "CreateShareRuleList", "json"));
  }

  if (!!tmpReq.hasModifyShareRuleList()) {
    request.setModifyShareRuleListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getModifyShareRuleList(), "ModifyShareRuleList", "json"));
  }

  if (!!tmpReq.hasRemoveShareRuleList()) {
    request.setRemoveShareRuleListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRemoveShareRuleList(), "RemoveShareRuleList", "json"));
  }

  json query = {};
  if (!!request.hasCreateShareRuleListShrink()) {
    query["CreateShareRuleList"] = request.getCreateShareRuleListShrink();
  }

  if (!!request.hasModifyShareRuleListShrink()) {
    query["ModifyShareRuleList"] = request.getModifyShareRuleListShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  if (!!request.hasOwnerAccountId()) {
    query["OwnerAccountId"] = request.getOwnerAccountId();
  }

  if (!!request.hasRemoveShareRuleListShrink()) {
    query["RemoveShareRuleList"] = request.getRemoveShareRuleListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveCostCenterShareRule"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveCostCenterShareRuleResponse>();
}

/**
 * @summary 修改财务单元分摊规则
 *
 * @param request SaveCostCenterShareRuleRequest
 * @return SaveCostCenterShareRuleResponse
 */
SaveCostCenterShareRuleResponse Client::saveCostCenterShareRule(const SaveCostCenterShareRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveCostCenterShareRuleWithOptions(request, runtime);
}

/**
 * @summary 设置资金账户的信控限额
 *
 * @param request SetFundAccountCreditAmountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetFundAccountCreditAmountResponse
 */
SetFundAccountCreditAmountResponse Client::setFundAccountCreditAmountWithOptions(const SetFundAccountCreditAmountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCreditAmount()) {
    body["CreditAmount"] = request.getCreditAmount();
  }

  if (!!request.hasCurrency()) {
    body["Currency"] = request.getCurrency();
  }

  if (!!request.hasFundAccountId()) {
    body["FundAccountId"] = request.getFundAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetFundAccountCreditAmount"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetFundAccountCreditAmountResponse>();
}

/**
 * @summary 设置资金账户的信控限额
 *
 * @param request SetFundAccountCreditAmountRequest
 * @return SetFundAccountCreditAmountResponse
 */
SetFundAccountCreditAmountResponse Client::setFundAccountCreditAmount(const SetFundAccountCreditAmountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setFundAccountCreditAmountWithOptions(request, runtime);
}

/**
 * @summary 设置资金账户低额预警
 *
 * @param request SetFundAccountLowAvailableAmountAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetFundAccountLowAvailableAmountAlarmResponse
 */
SetFundAccountLowAvailableAmountAlarmResponse Client::setFundAccountLowAvailableAmountAlarmWithOptions(const SetFundAccountLowAvailableAmountAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFundAccountId()) {
    body["FundAccountId"] = request.getFundAccountId();
  }

  if (!!request.hasThresholdAmount()) {
    body["ThresholdAmount"] = request.getThresholdAmount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetFundAccountLowAvailableAmountAlarm"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetFundAccountLowAvailableAmountAlarmResponse>();
}

/**
 * @summary 设置资金账户低额预警
 *
 * @param request SetFundAccountLowAvailableAmountAlarmRequest
 * @return SetFundAccountLowAvailableAmountAlarmResponse
 */
SetFundAccountLowAvailableAmountAlarmResponse Client::setFundAccountLowAvailableAmountAlarm(const SetFundAccountLowAvailableAmountAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setFundAccountLowAvailableAmountAlarmWithOptions(request, runtime);
}

/**
 * @summary 设置节省计划用户级抵扣规则
 *
 * @param tmpReq SetSavingPlanUserDeductRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetSavingPlanUserDeductRuleResponse
 */
SetSavingPlanUserDeductRuleResponse Client::setSavingPlanUserDeductRuleWithOptions(const SetSavingPlanUserDeductRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetSavingPlanUserDeductRuleShrinkRequest request = SetSavingPlanUserDeductRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEcIdAccountIds()) {
    request.setEcIdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEcIdAccountIds(), "EcIdAccountIds", "json"));
  }

  if (!!tmpReq.hasUserDeductRules()) {
    request.setUserDeductRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserDeductRules(), "UserDeductRules", "json"));
  }

  json query = {};
  if (!!request.hasEcIdAccountIdsShrink()) {
    query["EcIdAccountIds"] = request.getEcIdAccountIdsShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.getNbid();
  }

  json body = {};
  if (!!request.hasSpnInstanceCode()) {
    body["SpnInstanceCode"] = request.getSpnInstanceCode();
  }

  if (!!request.hasUserDeductRulesShrink()) {
    body["UserDeductRules"] = request.getUserDeductRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetSavingPlanUserDeductRule"},
    {"version" , "2023-09-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetSavingPlanUserDeductRuleResponse>();
}

/**
 * @summary 设置节省计划用户级抵扣规则
 *
 * @param request SetSavingPlanUserDeductRuleRequest
 * @return SetSavingPlanUserDeductRuleResponse
 */
SetSavingPlanUserDeductRuleResponse Client::setSavingPlanUserDeductRule(const SetSavingPlanUserDeductRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSavingPlanUserDeductRuleWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930