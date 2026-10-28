#include <darabonba/Core.hpp>
#include <alibabacloud/Agency20221216.hpp>
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
using namespace AlibabaCloud::Agency20221216::Models;
namespace AlibabaCloud
{
namespace Agency20221216
{

AlibabaCloud::Agency20221216::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "agency.aliyuncs.com"},
    {"ap-northeast-2-pop" , "agency.aliyuncs.com"},
    {"ap-south-1" , "agency.aliyuncs.com"},
    {"ap-southeast-2" , "agency.aliyuncs.com"},
    {"ap-southeast-3" , "agency.aliyuncs.com"},
    {"ap-southeast-5" , "agency.aliyuncs.com"},
    {"cn-beijing" , "agency.aliyuncs.com"},
    {"cn-beijing-finance-1" , "agency.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "agency.aliyuncs.com"},
    {"cn-beijing-gov-1" , "agency.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "agency.aliyuncs.com"},
    {"cn-chengdu" , "agency.aliyuncs.com"},
    {"cn-edge-1" , "agency.aliyuncs.com"},
    {"cn-fujian" , "agency.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "agency.aliyuncs.com"},
    {"cn-hangzhou" , "agency.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "agency.aliyuncs.com"},
    {"cn-hangzhou-finance" , "agency.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "agency.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "agency.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "agency.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "agency.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "agency.aliyuncs.com"},
    {"cn-hongkong" , "agency.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "agency.aliyuncs.com"},
    {"cn-huhehaote" , "agency.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "agency.aliyuncs.com"},
    {"cn-north-2-gov-1" , "agency.aliyuncs.com"},
    {"cn-qingdao" , "agency.aliyuncs.com"},
    {"cn-qingdao-nebula" , "agency.aliyuncs.com"},
    {"cn-shanghai" , "agency.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "agency.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "agency.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "agency.aliyuncs.com"},
    {"cn-shanghai-inner" , "agency.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "agency.aliyuncs.com"},
    {"cn-shenzhen" , "agency.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "agency.aliyuncs.com"},
    {"cn-shenzhen-inner" , "agency.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "agency.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "agency.aliyuncs.com"},
    {"cn-wuhan" , "agency.aliyuncs.com"},
    {"cn-wulanchabu" , "agency.aliyuncs.com"},
    {"cn-yushanfang" , "agency.aliyuncs.com"},
    {"cn-zhangbei" , "agency.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "agency.aliyuncs.com"},
    {"cn-zhangjiakou" , "agency.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "agency.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "agency.aliyuncs.com"},
    {"eu-central-1" , "agency.aliyuncs.com"},
    {"eu-west-1" , "agency.aliyuncs.com"},
    {"eu-west-1-oxs" , "agency.aliyuncs.com"},
    {"me-east-1" , "agency.aliyuncs.com"},
    {"rus-west-1-pop" , "agency.aliyuncs.com"},
    {"us-east-1" , "agency.aliyuncs.com"},
    {"us-west-1" , "agency.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("agency", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Configures the automatic write-off feature before the end-of-month settlement. When the consumed but undeducted quota reaches the specified automatic write-off amount, the amount is transferred to the deducted quota for offset.
 *
 * @param request AutomaticWriteOffRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AutomaticWriteOffResponse
 */
AutomaticWriteOffResponse Client::automaticWriteOffWithOptions(const AutomaticWriteOffRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutomaticWriteOffAmount()) {
    query["AutomaticWriteOffAmount"] = request.getAutomaticWriteOffAmount();
  }

  if (!!request.hasAutomaticWriteOffEnabled()) {
    query["AutomaticWriteOffEnabled"] = request.getAutomaticWriteOffEnabled();
  }

  if (!!request.hasCustomerUid()) {
    query["CustomerUid"] = request.getCustomerUid();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AutomaticWriteOff"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AutomaticWriteOffResponse>();
}

/**
 * @summary Configures the automatic write-off feature before the end-of-month settlement. When the consumed but undeducted quota reaches the specified automatic write-off amount, the amount is transferred to the deducted quota for offset.
 *
 * @param request AutomaticWriteOffRequest
 * @return AutomaticWriteOffResponse
 */
AutomaticWriteOffResponse Client::automaticWriteOff(const AutomaticWriteOffRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return automaticWriteOffWithOptions(request, runtime);
}

/**
 * @summary Invalidates a coupon.
 *
 * @param request CancelCouponRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelCouponResponse
 */
CancelCouponResponse Client::cancelCouponWithOptions(const CancelCouponRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCouponId()) {
    query["CouponId"] = request.getCouponId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelCoupon"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelCouponResponse>();
}

/**
 * @summary Invalidates a coupon.
 *
 * @param request CancelCouponRequest
 * @return CancelCouponResponse
 */
CancelCouponResponse Client::cancelCoupon(const CancelCouponRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelCouponWithOptions(request, runtime);
}

/**
 * @summary Unsubscribe from multi-level bills for international channel ecosystem partners.
 *
 * @description Make sure that the caller is an international Alibaba Cloud master reseller partner.
 * You can unsubscribe from one type of bill file at a time.
 * After the corresponding bill type is unsubscribed, files are no longer pushed to the specified OSS space.
 * **This content is published only on the international site.**
 *
 * @param request CancelSubscriptionBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelSubscriptionBillResponse
 */
CancelSubscriptionBillResponse Client::cancelSubscriptionBillWithOptions(const CancelSubscriptionBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubscribeType()) {
    query["SubscribeType"] = request.getSubscribeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelSubscriptionBill"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelSubscriptionBillResponse>();
}

/**
 * @summary Unsubscribe from multi-level bills for international channel ecosystem partners.
 *
 * @description Make sure that the caller is an international Alibaba Cloud master reseller partner.
 * You can unsubscribe from one type of bill file at a time.
 * After the corresponding bill type is unsubscribed, files are no longer pushed to the specified OSS space.
 * **This content is published only on the international site.**
 *
 * @param request CancelSubscriptionBillRequest
 * @return CancelSubscriptionBillResponse
 */
CancelSubscriptionBillResponse Client::cancelSubscriptionBill(const CancelSubscriptionBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelSubscriptionBillWithOptions(request, runtime);
}

/**
 * @summary Queries the list of coupon approval statuses.
 *
 * @description Ensure that the current calling account is a distribution partner. 
 * <notice>Available only on the international site.</notice>
 *
 * @param request CouponApprovalStatusListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CouponApprovalStatusListResponse
 */
CouponApprovalStatusListResponse Client::couponApprovalStatusListWithOptions(const CouponApprovalStatusListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateStatus()) {
    query["TemplateStatus"] = request.getTemplateStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CouponApprovalStatusList"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CouponApprovalStatusListResponse>();
}

/**
 * @summary Queries the list of coupon approval statuses.
 *
 * @description Ensure that the current calling account is a distribution partner. 
 * <notice>Available only on the international site.</notice>
 *
 * @param request CouponApprovalStatusListRequest
 * @return CouponApprovalStatusListResponse
 */
CouponApprovalStatusListResponse Client::couponApprovalStatusList(const CouponApprovalStatusListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return couponApprovalStatusListWithOptions(request, runtime);
}

/**
 * @summary Creates a coupon template.
 *
 * @param tmpReq CreateCouponTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCouponTemplateResponse
 */
CreateCouponTemplateResponse Client::createCouponTemplateWithOptions(const CreateCouponTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCouponTemplateShrinkRequest request = CreateCouponTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProductType()) {
    request.setProductTypeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProductType(), "ProductType", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasApplicableProducts()) {
    query["ApplicableProducts"] = request.getApplicableProducts();
  }

  if (!!request.hasCostBearer()) {
    query["CostBearer"] = request.getCostBearer();
  }

  if (!!request.hasCouponDescription()) {
    query["CouponDescription"] = request.getCouponDescription();
  }

  if (!!request.hasExpireddate()) {
    query["Expireddate"] = request.getExpireddate();
  }

  if (!!request.hasLimitPerPerson()) {
    query["LimitPerPerson"] = request.getLimitPerPerson();
  }

  if (!!request.hasProductTypeShrink()) {
    query["ProductType"] = request.getProductTypeShrink();
  }

  if (!!request.hasPurchaseType()) {
    query["PurchaseType"] = request.getPurchaseType();
  }

  if (!!request.hasReasonForApplication()) {
    query["ReasonForApplication"] = request.getReasonForApplication();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasVailddate()) {
    query["Vailddate"] = request.getVailddate();
  }

  if (!!request.hasVaildperioddays()) {
    query["Vaildperioddays"] = request.getVaildperioddays();
  }

  if (!!request.hasValidUntil()) {
    query["ValidUntil"] = request.getValidUntil();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCouponTemplate"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCouponTemplateResponse>();
}

/**
 * @summary Creates a coupon template.
 *
 * @param request CreateCouponTemplateRequest
 * @return CreateCouponTemplateResponse
 */
CreateCouponTemplateResponse Client::createCouponTemplate(const CreateCouponTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCouponTemplateWithOptions(request, runtime);
}

/**
 * @summary Registers a customer to be invited.
 *
 * @param request CreateCustomerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomerResponse
 */
CreateCustomerResponse Client::createCustomerWithOptions(const CreateCustomerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerName()) {
    query["CustomerName"] = request.getCustomerName();
  }

  if (!!request.hasCustomerSource()) {
    query["CustomerSource"] = request.getCustomerSource();
  }

  if (!!request.hasCustomerSubTrade()) {
    query["CustomerSubTrade"] = request.getCustomerSubTrade();
  }

  if (!!request.hasCustomerTrade()) {
    query["CustomerTrade"] = request.getCustomerTrade();
  }

  if (!!request.hasNation()) {
    query["Nation"] = request.getNation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomer"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomerResponse>();
}

/**
 * @summary Registers a customer to be invited.
 *
 * @param request CreateCustomerRequest
 * @return CreateCustomerResponse
 */
CreateCustomerResponse Client::createCustomer(const CreateCustomerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomerWithOptions(request, runtime);
}

/**
 * @summary Queries the quota adjustment records for distribution customers on the Alibaba Cloud International Website. This operation applies only to international users and cannot be called on the Alibaba Cloud China Website.
 *
 * @description The caller must be a channel master distributor partner or a channel distributor partner on the Alibaba Cloud International Website.
 *
 * @param request CustomerQuotaRecordListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CustomerQuotaRecordListResponse
 */
CustomerQuotaRecordListResponse Client::customerQuotaRecordListWithOptions(const CustomerQuotaRecordListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CustomerQuotaRecordList"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CustomerQuotaRecordListResponse>();
}

/**
 * @summary Queries the quota adjustment records for distribution customers on the Alibaba Cloud International Website. This operation applies only to international users and cannot be called on the Alibaba Cloud China Website.
 *
 * @description The caller must be a channel master distributor partner or a channel distributor partner on the Alibaba Cloud International Website.
 *
 * @param request CustomerQuotaRecordListRequest
 * @return CustomerQuotaRecordListResponse
 */
CustomerQuotaRecordListResponse Client::customerQuotaRecordList(const CustomerQuotaRecordListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return customerQuotaRecordListWithOptions(request, runtime);
}

/**
 * @summary Reduces the deducted credit of a reseller\\"s customer. For example, if the current deducted credit is 500 and the available credit is 1000, a reduction of 300 changes the deducted credit to 200 and the available credit to 1300.
 * Note: Sometimes the used credit of a customer may be negative. This indicates that no recovery of the used credit is needed. Wait for the customer to consume the credit. This occurs when a refund is issued while the customer\\"s credit is fully used. As a result, the customer\\"s credit increases beyond the original limit.
 * For example, if the current maximum available credit of a customer is 1000 with no usage, and a refund of 300 occurs, the used credit becomes -300.
 *
 * @param request DeductOutstandingBalanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeductOutstandingBalanceResponse
 */
DeductOutstandingBalanceResponse Client::deductOutstandingBalanceWithOptions(const DeductOutstandingBalanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeductAmount()) {
    query["DeductAmount"] = request.getDeductAmount();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeductOutstandingBalance"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeductOutstandingBalanceResponse>();
}

/**
 * @summary Reduces the deducted credit of a reseller\\"s customer. For example, if the current deducted credit is 500 and the available credit is 1000, a reduction of 300 changes the deducted credit to 200 and the available credit to 1300.
 * Note: Sometimes the used credit of a customer may be negative. This indicates that no recovery of the used credit is needed. Wait for the customer to consume the credit. This occurs when a refund is issued while the customer\\"s credit is fully used. As a result, the customer\\"s credit increases beyond the original limit.
 * For example, if the current maximum available credit of a customer is 1000 with no usage, and a refund of 300 occurs, the used credit becomes -300.
 *
 * @param request DeductOutstandingBalanceRequest
 * @return DeductOutstandingBalanceResponse
 */
DeductOutstandingBalanceResponse Client::deductOutstandingBalance(const DeductOutstandingBalanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deductOutstandingBalanceWithOptions(request, runtime);
}

/**
 * @summary Invalidates a coupon template.
 *
 * @description Make sure that the current caller is a distribution partner. 
 * <notice>Available only on the China site.</notice>.
 *
 * @param request DeleteCouponTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCouponTemplateResponse
 */
DeleteCouponTemplateResponse Client::deleteCouponTemplateWithOptions(const DeleteCouponTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCouponTemplate"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCouponTemplateResponse>();
}

/**
 * @summary Invalidates a coupon template.
 *
 * @description Make sure that the current caller is a distribution partner. 
 * <notice>Available only on the China site.</notice>.
 *
 * @param request DeleteCouponTemplateRequest
 * @return DeleteCouponTemplateResponse
 */
DeleteCouponTemplateResponse Client::deleteCouponTemplate(const DeleteCouponTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCouponTemplateWithOptions(request, runtime);
}

/**
 * @summary Manages the shutdown status of pay-as-you-go instances for resold subordinate customers by Alibaba Cloud international channel master distributor partners and Alibaba Cloud international channel distributor partners.
 *
 * @description The caller must be an Alibaba Cloud international channel master distributor partner or an Alibaba Cloud international channel distributor partner.
 * **This content is published only on the China site (Chinese).**.
 *
 * @param request EditEndUserStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditEndUserStatusResponse
 */
EditEndUserStatusResponse Client::editEndUserStatusWithOptions(const EditEndUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EditEndUserStatus"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditEndUserStatusResponse>();
}

/**
 * @summary Manages the shutdown status of pay-as-you-go instances for resold subordinate customers by Alibaba Cloud international channel master distributor partners and Alibaba Cloud international channel distributor partners.
 *
 * @description The caller must be an Alibaba Cloud international channel master distributor partner or an Alibaba Cloud international channel distributor partner.
 * **This content is published only on the China site (Chinese).**.
 *
 * @param request EditEndUserStatusRequest
 * @return EditEndUserStatusResponse
 */
EditEndUserStatusResponse Client::editEndUserStatus(const EditEndUserStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editEndUserStatusWithOptions(request, runtime);
}

/**
 * @summary Sets the new purchase status of a subordinate reseller customer for an Alibaba Cloud reseller partner.
 *
 * @description The caller must be an Alibaba Cloud reseller partner.
 * **This content is published only on the China site.**.
 *
 * @param request EditNewBuyStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditNewBuyStatusResponse
 */
EditNewBuyStatusResponse Client::editNewBuyStatusWithOptions(const EditNewBuyStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewBuyStatus()) {
    query["NewBuyStatus"] = request.getNewBuyStatus();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EditNewBuyStatus"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditNewBuyStatusResponse>();
}

/**
 * @summary Sets the new purchase status of a subordinate reseller customer for an Alibaba Cloud reseller partner.
 *
 * @description The caller must be an Alibaba Cloud reseller partner.
 * **This content is published only on the China site.**.
 *
 * @param request EditNewBuyStatusRequest
 * @return EditNewBuyStatusResponse
 */
EditNewBuyStatusResponse Client::editNewBuyStatus(const EditNewBuyStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editNewBuyStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the shutdown policy of a subordinate customer by an Alibaba Cloud distributor partner or reseller partner.
 *
 * @description The caller must be an Alibaba Cloud international channel distributor partner or an Alibaba Cloud international channel reseller partner.
 * **This content is published only on the Chinese site.**.
 *
 * @param request EditZeroCreditShutdownRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditZeroCreditShutdownResponse
 */
EditZeroCreditShutdownResponse Client::editZeroCreditShutdownWithOptions(const EditZeroCreditShutdownRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasShutdownPolicy()) {
    query["ShutdownPolicy"] = request.getShutdownPolicy();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EditZeroCreditShutdown"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditZeroCreditShutdownResponse>();
}

/**
 * @summary Modifies the shutdown policy of a subordinate customer by an Alibaba Cloud distributor partner or reseller partner.
 *
 * @description The caller must be an Alibaba Cloud international channel distributor partner or an Alibaba Cloud international channel reseller partner.
 * **This content is published only on the Chinese site.**.
 *
 * @param request EditZeroCreditShutdownRequest
 * @return EditZeroCreditShutdownResponse
 */
EditZeroCreditShutdownResponse Client::editZeroCreditShutdown(const EditZeroCreditShutdownRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editZeroCreditShutdownWithOptions(request, runtime);
}

/**
 * @summary Exports the quota adjustment records of a distributor\\"s customer, corresponding to the total budget adjustment details export feature on ACPN.
 *
 * @description The caller must be an Alibaba Cloud international site channel master distributor partner or an Alibaba Cloud international site channel distributor partner.
 *
 * @param request ExportCustomerQuotaRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportCustomerQuotaRecordResponse
 */
ExportCustomerQuotaRecordResponse Client::exportCustomerQuotaRecordWithOptions(const ExportCustomerQuotaRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasEndUserPk()) {
    query["EndUserPk"] = request.getEndUserPk();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.getOperationType();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportCustomerQuotaRecord"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportCustomerQuotaRecordResponse>();
}

/**
 * @summary Exports the quota adjustment records of a distributor\\"s customer, corresponding to the total budget adjustment details export feature on ACPN.
 *
 * @description The caller must be an Alibaba Cloud international site channel master distributor partner or an Alibaba Cloud international site channel distributor partner.
 *
 * @param request ExportCustomerQuotaRecordRequest
 * @return ExportCustomerQuotaRecordResponse
 */
ExportCustomerQuotaRecordResponse Client::exportCustomerQuotaRecord(const ExportCustomerQuotaRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportCustomerQuotaRecordWithOptions(request, runtime);
}

/**
 * @summary Exports the reversed deduction details from ACPN.
 *
 * @param request ExportReversedDeductionHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportReversedDeductionHistoryResponse
 */
ExportReversedDeductionHistoryResponse Client::exportReversedDeductionHistoryWithOptions(const ExportReversedDeductionHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasExportUid()) {
    query["ExportUid"] = request.getExportUid();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportReversedDeductionHistory"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportReversedDeductionHistoryResponse>();
}

/**
 * @summary Exports the reversed deduction details from ACPN.
 *
 * @param request ExportReversedDeductionHistoryRequest
 * @return ExportReversedDeductionHistoryResponse
 */
ExportReversedDeductionHistoryResponse Client::exportReversedDeductionHistory(const ExportReversedDeductionHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportReversedDeductionHistoryWithOptions(request, runtime);
}

/**
 * @summary Returns the account information of distribution customers.
 *
 * @param request GetAccountInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountInfoResponse
 */
GetAccountInfoResponse Client::getAccountInfoWithOptions(const GetAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccountInfo"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountInfoResponse>();
}

/**
 * @summary Returns the account information of distribution customers.
 *
 * @param request GetAccountInfoRequest
 * @return GetAccountInfoResponse
 */
GetAccountInfoResponse Client::getAccountInfo(const GetAccountInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountInfoWithOptions(request, runtime);
}

/**
 * @summary Queries a list of all active and delisted commission-eligible commodities for T1-level international distribution partners. This operation is available only for international users and cannot be called on the China site.
 *
 * @description Ensure that the current calling account is a distribution partner. 
 * <notice>Available only on the international site.</notice>
 *
 * @param tmpReq GetCommissionableProductsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCommissionableProductsResponse
 */
GetCommissionableProductsResponse Client::getCommissionableProductsWithOptions(const GetCommissionableProductsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetCommissionableProductsShrinkRequest request = GetCommissionableProductsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListShowStatusList()) {
    request.setListShowStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListShowStatusList(), "ListShowStatusList", "simple"));
  }

  json query = {};
  if (!!request.hasCommodityCodeList()) {
    query["CommodityCodeList"] = request.getCommodityCodeList();
  }

  if (!!request.hasFiscalYear()) {
    query["FiscalYear"] = request.getFiscalYear();
  }

  if (!!request.hasListShowStatusListShrink()) {
    query["ListShowStatusList"] = request.getListShowStatusListShrink();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPipCodeList()) {
    query["PipCodeList"] = request.getPipCodeList();
  }

  if (!!request.hasRealEndMonth()) {
    query["RealEndMonth"] = request.getRealEndMonth();
  }

  if (!!request.hasRealStartMonth()) {
    query["RealStartMonth"] = request.getRealStartMonth();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCommissionableProducts"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCommissionableProductsResponse>();
}

/**
 * @summary Queries a list of all active and delisted commission-eligible commodities for T1-level international distribution partners. This operation is available only for international users and cannot be called on the China site.
 *
 * @description Ensure that the current calling account is a distribution partner. 
 * <notice>Available only on the international site.</notice>
 *
 * @param request GetCommissionableProductsRequest
 * @return GetCommissionableProductsResponse
 */
GetCommissionableProductsResponse Client::getCommissionableProducts(const GetCommissionableProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCommissionableProductsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a coupon template.
 *
 * @description Ensure that the current calling account is a distribution partner. 
 * <notice>Available only on the International site
 *
 * @param request GetCouponTemplateDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCouponTemplateDetailResponse
 */
GetCouponTemplateDetailResponse Client::getCouponTemplateDetailWithOptions(const GetCouponTemplateDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCouponTemplateDetail"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCouponTemplateDetailResponse>();
}

/**
 * @summary Queries the details of a coupon template.
 *
 * @description Ensure that the current calling account is a distribution partner. 
 * <notice>Available only on the International site
 *
 * @param request GetCouponTemplateDetailRequest
 * @return GetCouponTemplateDetailResponse
 */
GetCouponTemplateDetailResponse Client::getCouponTemplateDetail(const GetCouponTemplateDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCouponTemplateDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the products that can be offset by international channel distribution coupons.
 *
 * @param request GetCoupondeductProductCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCoupondeductProductCodeResponse
 */
GetCoupondeductProductCodeResponse Client::getCoupondeductProductCodeWithOptions(const GetCoupondeductProductCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCoupondeductProductCode"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCoupondeductProductCodeResponse>();
}

/**
 * @summary Queries the products that can be offset by international channel distribution coupons.
 *
 * @param request GetCoupondeductProductCodeRequest
 * @return GetCoupondeductProductCodeResponse
 */
GetCoupondeductProductCodeResponse Client::getCoupondeductProductCode(const GetCoupondeductProductCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCoupondeductProductCodeWithOptions(request, runtime);
}

/**
 * @summary Queries the credit control information of a distributor customer. If the distributor customer is of the Agency type, the PopCreditInfoJson parameter in the response is empty. This feature is available only for Reseller and Distributor.
 *
 * @param request GetCreditInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCreditInfoResponse
 */
GetCreditInfoResponse Client::getCreditInfoWithOptions(const GetCreditInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCreditInfo"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCreditInfoResponse>();
}

/**
 * @summary Queries the credit control information of a distributor customer. If the distributor customer is of the Agency type, the PopCreditInfoJson parameter in the response is empty. This feature is available only for Reseller and Distributor.
 *
 * @param request GetCreditInfoRequest
 * @return GetCreditInfoResponse
 */
GetCreditInfoResponse Client::getCreditInfo(const GetCreditInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCreditInfoWithOptions(request, runtime);
}

/**
 * @summary Queries customer orders on the Alibaba Cloud International site. This operation is only allowed for the international site.
 *
 * @description The caller must be an Alibaba Cloud International site channel master distributor partner or an Alibaba Cloud International site channel distributor partner.
 *
 * @param request GetCustomerOrdersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomerOrdersResponse
 */
GetCustomerOrdersResponse Client::getCustomerOrdersWithOptions(const GetCustomerOrdersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomerOrders"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomerOrdersResponse>();
}

/**
 * @summary Queries customer orders on the Alibaba Cloud International site. This operation is only allowed for the international site.
 *
 * @description The caller must be an Alibaba Cloud International site channel master distributor partner or an Alibaba Cloud International site channel distributor partner.
 *
 * @param request GetCustomerOrdersRequest
 * @return GetCustomerOrdersResponse
 */
GetCustomerOrdersResponse Client::getCustomerOrders(const GetCustomerOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomerOrdersWithOptions(request, runtime);
}

/**
 * @summary Retrieves the daily bills for resellers and distributors. This feature is only available for resellers and distributors.
 *
 * @param request GetDailyBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDailyBillResponse
 */
GetDailyBillResponse Client::getDailyBillWithOptions(const GetDailyBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwner()) {
    query["BillOwner"] = request.getBillOwner();
  }

  if (!!request.hasBillType()) {
    query["BillType"] = request.getBillType();
  }

  if (!!request.hasDate()) {
    query["Date"] = request.getDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDailyBill"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDailyBillResponse>();
}

/**
 * @summary Retrieves the daily bills for resellers and distributors. This feature is only available for resellers and distributors.
 *
 * @param request GetDailyBillRequest
 * @return GetDailyBillResponse
 */
GetDailyBillResponse Client::getDailyBill(const GetDailyBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDailyBillWithOptions(request, runtime);
}

/**
 * @summary Queries the invitation status of registered customers who have been sent invitations.
 *
 * @param request GetInviteStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInviteStatusResponse
 */
GetInviteStatusResponse Client::getInviteStatusWithOptions(const GetInviteStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInviteStatusList()) {
    query["InviteStatusList"] = request.getInviteStatusList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInviteStatus"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInviteStatusResponse>();
}

/**
 * @summary Queries the invitation status of registered customers who have been sent invitations.
 *
 * @param request GetInviteStatusRequest
 * @return GetInviteStatusResponse
 */
GetInviteStatusResponse Client::getInviteStatus(const GetInviteStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInviteStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves the monthly bill for distributors. This feature is available only to resellers and distributors.
 *
 * @param request GetMonthlyBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMonthlyBillResponse
 */
GetMonthlyBillResponse Client::getMonthlyBillWithOptions(const GetMonthlyBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwner()) {
    query["BillOwner"] = request.getBillOwner();
  }

  if (!!request.hasBillType()) {
    query["BillType"] = request.getBillType();
  }

  if (!!request.hasMonth()) {
    query["Month"] = request.getMonth();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMonthlyBill"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMonthlyBillResponse>();
}

/**
 * @summary Retrieves the monthly bill for distributors. This feature is available only to resellers and distributors.
 *
 * @param request GetMonthlyBillRequest
 * @return GetMonthlyBillResponse
 */
GetMonthlyBillResponse Client::getMonthlyBill(const GetMonthlyBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMonthlyBillWithOptions(request, runtime);
}

/**
 * @summary Queries order control change records.
 *
 * @description The caller must be an Alibaba Cloud international site channel master distributor partner or an Alibaba Cloud international site channel distributor partner.
 *
 * @param request GetPurchaseControlRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPurchaseControlRecordResponse
 */
GetPurchaseControlRecordResponse Client::getPurchaseControlRecordWithOptions(const GetPurchaseControlRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerUID()) {
    query["CustomerUID"] = request.getCustomerUID();
  }

  if (!!request.hasOperationTime()) {
    query["OperationTime"] = request.getOperationTime();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPurchaseControlRecord"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPurchaseControlRecordResponse>();
}

/**
 * @summary Queries order control change records.
 *
 * @description The caller must be an Alibaba Cloud international site channel master distributor partner or an Alibaba Cloud international site channel distributor partner.
 *
 * @param request GetPurchaseControlRecordRequest
 * @return GetPurchaseControlRecordResponse
 */
GetPurchaseControlRecordResponse Client::getPurchaseControlRecord(const GetPurchaseControlRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPurchaseControlRecordWithOptions(request, runtime);
}

/**
 * @summary Queries the modification records of the deferred shutdown policy.
 *
 * @description The caller must be an Alibaba Cloud international site channel master distributor partner or an Alibaba Cloud international site channel distributor partner.
 * **This content is published only on the international site.**.
 *
 * @param request GetShutdownPolicyRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetShutdownPolicyRecordResponse
 */
GetShutdownPolicyRecordResponse Client::getShutdownPolicyRecordWithOptions(const GetShutdownPolicyRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerUID()) {
    query["CustomerUID"] = request.getCustomerUID();
  }

  if (!!request.hasOperationTime()) {
    query["OperationTime"] = request.getOperationTime();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetShutdownPolicyRecord"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetShutdownPolicyRecordResponse>();
}

/**
 * @summary Queries the modification records of the deferred shutdown policy.
 *
 * @description The caller must be an Alibaba Cloud international site channel master distributor partner or an Alibaba Cloud international site channel distributor partner.
 * **This content is published only on the international site.**.
 *
 * @param request GetShutdownPolicyRecordRequest
 * @return GetShutdownPolicyRecordResponse
 */
GetShutdownPolicyRecordResponse Client::getShutdownPolicyRecord(const GetShutdownPolicyRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getShutdownPolicyRecordWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a coupon application initiated by a tier-2 distributor. This operation applies only to distributors.
 *
 * @param request GetTier2CouponApprovalDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTier2CouponApprovalDetailResponse
 */
GetTier2CouponApprovalDetailResponse Client::getTier2CouponApprovalDetailWithOptions(const GetTier2CouponApprovalDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationSheetId()) {
    query["ApplicationSheetId"] = request.getApplicationSheetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTier2CouponApprovalDetail"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTier2CouponApprovalDetailResponse>();
}

/**
 * @summary Queries the details of a coupon application initiated by a tier-2 distributor. This operation applies only to distributors.
 *
 * @param request GetTier2CouponApprovalDetailRequest
 * @return GetTier2CouponApprovalDetailResponse
 */
GetTier2CouponApprovalDetailResponse Client::getTier2CouponApprovalDetail(const GetTier2CouponApprovalDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTier2CouponApprovalDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves all unassociated customers.
 *
 * @param request GetUnassociatedCustomerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUnassociatedCustomerResponse
 */
GetUnassociatedCustomerResponse Client::getUnassociatedCustomerWithOptions(const GetUnassociatedCustomerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUnassociatedCustomer"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUnassociatedCustomerResponse>();
}

/**
 * @summary Retrieves all unassociated customers.
 *
 * @param request GetUnassociatedCustomerRequest
 * @return GetUnassociatedCustomerResponse
 */
GetUnassociatedCustomerResponse Client::getUnassociatedCustomer(const GetUnassociatedCustomerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUnassociatedCustomerWithOptions(request, runtime);
}

/**
 * @summary Invites a customer to register as a partner customer.
 *
 * @param request InviteSubAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InviteSubAccountResponse
 */
InviteSubAccountResponse Client::inviteSubAccountWithOptions(const InviteSubAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountInfoList()) {
    query["AccountInfoList"] = request.getAccountInfoList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InviteSubAccount"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InviteSubAccountResponse>();
}

/**
 * @summary Invites a customer to register as a partner customer.
 *
 * @param request InviteSubAccountRequest
 * @return InviteSubAccountResponse
 */
InviteSubAccountResponse Client::inviteSubAccount(const InviteSubAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return inviteSubAccountWithOptions(request, runtime);
}

/**
 * @summary Invites T2 Reseller sub-accounts in batch as a T1 partner.
 *
 * @description 1. The caller of this operation must be a channel master reseller partner on Alibaba Cloud International Website.
 * 2. The system automatically determines whether the invitation is cross-region based on whether the RegisterNation parameter falls within the T1 contract coverage area. You can call the ListCountries operation to query the contract coverage area.
 * - If the invitation is cross-region, a cross-region invitation approval process is initiated. After Alibaba Cloud approves the request, an invitation registration email is sent to the specified email address.
 * - If the invitation is not cross-region, an invitation registration email is sent directly.
 *
 * @param request InviteSubResellerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InviteSubResellerResponse
 */
InviteSubResellerResponse Client::inviteSubResellerWithOptions(const InviteSubResellerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountInfoList()) {
    query["AccountInfoList"] = request.getAccountInfoList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InviteSubReseller"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InviteSubResellerResponse>();
}

/**
 * @summary Invites T2 Reseller sub-accounts in batch as a T1 partner.
 *
 * @description 1. The caller of this operation must be a channel master reseller partner on Alibaba Cloud International Website.
 * 2. The system automatically determines whether the invitation is cross-region based on whether the RegisterNation parameter falls within the T1 contract coverage area. You can call the ListCountries operation to query the contract coverage area.
 * - If the invitation is cross-region, a cross-region invitation approval process is initiated. After Alibaba Cloud approves the request, an invitation registration email is sent to the specified email address.
 * - If the invitation is not cross-region, an invitation registration email is sent directly.
 *
 * @param request InviteSubResellerRequest
 * @return InviteSubResellerResponse
 */
InviteSubResellerResponse Client::inviteSubReseller(const InviteSubResellerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return inviteSubResellerWithOptions(request, runtime);
}

/**
 * @summary Issues coupons.
 *
 * @param request IssueCouponForCustomerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IssueCouponForCustomerResponse
 */
IssueCouponForCustomerResponse Client::issueCouponForCustomerWithOptions(const IssueCouponForCustomerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasApplicationReason()) {
    query["ApplicationReason"] = request.getApplicationReason();
  }

  if (!!request.hasCouponTemplateId()) {
    query["CouponTemplateId"] = request.getCouponTemplateId();
  }

  if (!!request.hasIsUseBenefit()) {
    query["IsUseBenefit"] = request.getIsUseBenefit();
  }

  if (!!request.hasUidlist()) {
    query["Uidlist"] = request.getUidlist();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IssueCouponForCustomer"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IssueCouponForCustomerResponse>();
}

/**
 * @summary Issues coupons.
 *
 * @param request IssueCouponForCustomerRequest
 * @return IssueCouponForCustomerResponse
 */
IssueCouponForCustomerResponse Client::issueCouponForCustomer(const IssueCouponForCustomerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return issueCouponForCustomerWithOptions(request, runtime);
}

/**
 * @summary Queries the list of serviceable regions. This feature is available to all distributors. The response returns region codes based on the serviceable countries specified in the distributor contract.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCountriesResponse
 */
ListCountriesResponse Client::listCountriesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListCountries"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCountriesResponse>();
}

/**
 * @summary Queries the list of serviceable regions. This feature is available to all distributors. The response returns region codes based on the serviceable countries specified in the distributor contract.
 *
 * @return ListCountriesResponse
 */
ListCountriesResponse Client::listCountries() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCountriesWithOptions(runtime);
}

/**
 * @summary Queries the usage of coupons issued by a distribution partner.
 *
 * @description Ensure that the current calling account is a distribution partner. 
 * <notice>Available only on the international site.</notice>
 *
 * @param request ListCouponUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCouponUsageResponse
 */
ListCouponUsageResponse Client::listCouponUsageWithOptions(const ListCouponUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasCouponTemplateId()) {
    query["CouponTemplateId"] = request.getCouponTemplateId();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasT2PartnerUid()) {
    query["T2PartnerUid"] = request.getT2PartnerUid();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCouponUsage"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCouponUsageResponse>();
}

/**
 * @summary Queries the usage of coupons issued by a distribution partner.
 *
 * @description Ensure that the current calling account is a distribution partner. 
 * <notice>Available only on the international site.</notice>
 *
 * @param request ListCouponUsageRequest
 * @return ListCouponUsageResponse
 */
ListCouponUsageResponse Client::listCouponUsage(const ListCouponUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCouponUsageWithOptions(request, runtime);
}

/**
 * @summary Queries the list of exported files.
 *
 * @param request ListExportTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExportTasksResponse
 */
ListExportTasksResponse Client::listExportTasksWithOptions(const ListExportTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.getSceneCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExportTasks"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExportTasksResponse>();
}

/**
 * @summary Queries the list of exported files.
 *
 * @param request ListExportTasksRequest
 * @return ListExportTasksResponse
 */
ListExportTasksResponse Client::listExportTasks(const ListExportTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExportTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the coupon applications submitted by secondary distributors for their end users. This operation applies only to tier-1 distributors.
 *
 * @param request ListTier2CouponApprovalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTier2CouponApprovalResponse
 */
ListTier2CouponApprovalResponse Client::listTier2CouponApprovalWithOptions(const ListTier2CouponApprovalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationSheetId()) {
    query["ApplicationSheetId"] = request.getApplicationSheetId();
  }

  if (!!request.hasApprovalStatus()) {
    query["ApprovalStatus"] = request.getApprovalStatus();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasT2PartnerName()) {
    query["T2PartnerName"] = request.getT2PartnerName();
  }

  if (!!request.hasT2PartnerUid()) {
    query["T2PartnerUid"] = request.getT2PartnerUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTier2CouponApproval"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTier2CouponApprovalResponse>();
}

/**
 * @summary Queries the coupon applications submitted by secondary distributors for their end users. This operation applies only to tier-1 distributors.
 *
 * @param request ListTier2CouponApprovalRequest
 * @return ListTier2CouponApprovalResponse
 */
ListTier2CouponApprovalResponse Client::listTier2CouponApproval(const ListTier2CouponApprovalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTier2CouponApprovalWithOptions(request, runtime);
}

/**
 * @summary Approves a process that requires partner approval. This operation is applicable only to distributors.
 *
 * @param request ProcessApprovalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProcessApprovalResponse
 */
ProcessApprovalResponse Client::processApprovalWithOptions(const ProcessApprovalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationSheetId()) {
    query["ApplicationSheetId"] = request.getApplicationSheetId();
  }

  if (!!request.hasApprovalAction()) {
    query["ApprovalAction"] = request.getApprovalAction();
  }

  if (!!request.hasApprovalComments()) {
    query["ApprovalComments"] = request.getApprovalComments();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ProcessApproval"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ProcessApprovalResponse>();
}

/**
 * @summary Approves a process that requires partner approval. This operation is applicable only to distributors.
 *
 * @param request ProcessApprovalRequest
 * @return ProcessApprovalResponse
 */
ProcessApprovalResponse Client::processApproval(const ProcessApprovalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return processApprovalWithOptions(request, runtime);
}

/**
 * @summary Queries the change records of the automatic write-off quota by using paging.
 *
 * @param request QueryAutomaticWriteOffChangeRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAutomaticWriteOffChangeRecordsResponse
 */
QueryAutomaticWriteOffChangeRecordsResponse Client::queryAutomaticWriteOffChangeRecordsWithOptions(const QueryAutomaticWriteOffChangeRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerUid()) {
    query["CustomerUid"] = request.getCustomerUid();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAutomaticWriteOffChangeRecords"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAutomaticWriteOffChangeRecordsResponse>();
}

/**
 * @summary Queries the change records of the automatic write-off quota by using paging.
 *
 * @param request QueryAutomaticWriteOffChangeRecordsRequest
 * @return QueryAutomaticWriteOffChangeRecordsResponse
 */
QueryAutomaticWriteOffChangeRecordsResponse Client::queryAutomaticWriteOffChangeRecords(const QueryAutomaticWriteOffChangeRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAutomaticWriteOffChangeRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the quota offset details of a specified customer.
 *
 * @param request QueryReversedDeductionHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryReversedDeductionHistoryResponse
 */
QueryReversedDeductionHistoryResponse Client::queryReversedDeductionHistoryWithOptions(const QueryReversedDeductionHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryReversedDeductionHistory"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryReversedDeductionHistoryResponse>();
}

/**
 * @summary Queries the quota offset details of a specified customer.
 *
 * @param request QueryReversedDeductionHistoryRequest
 * @return QueryReversedDeductionHistoryResponse
 */
QueryReversedDeductionHistoryResponse Client::queryReversedDeductionHistory(const QueryReversedDeductionHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryReversedDeductionHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the quota transaction export results for international distribution users. This API operation is available only on the international site.
 *
 * @description The caller must be an Alibaba Cloud International site channel master distributor partner or an Alibaba Cloud International site channel distributor partner.
 *
 * @param request QuotaListExportPagedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuotaListExportPagedResponse
 */
QuotaListExportPagedResponse Client::quotaListExportPagedWithOptions(const QuotaListExportPagedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuotaListExportPaged"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuotaListExportPagedResponse>();
}

/**
 * @summary Queries the quota transaction export results for international distribution users. This API operation is available only on the international site.
 *
 * @description The caller must be an Alibaba Cloud International site channel master distributor partner or an Alibaba Cloud International site channel distributor partner.
 *
 * @param request QuotaListExportPagedRequest
 * @return QuotaListExportPagedResponse
 */
QuotaListExportPagedResponse Client::quotaListExportPaged(const QuotaListExportPagedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return quotaListExportPagedWithOptions(request, runtime);
}

/**
 * @summary Resends an invitation email.
 *
 * @param request ResendEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResendEmailResponse
 */
ResendEmailResponse Client::resendEmailWithOptions(const ResendEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInviteId()) {
    query["InviteId"] = request.getInviteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResendEmail"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResendEmailResponse>();
}

/**
 * @summary Resends an invitation email.
 *
 * @param request ResendEmailRequest
 * @return ResendEmailResponse
 */
ResendEmailResponse Client::resendEmail(const ResendEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resendEmailWithOptions(request, runtime);
}

/**
 * @summary Updates sub-account information, including the nickname and remarks.
 *
 * @param request SetAccountInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAccountInfoResponse
 */
SetAccountInfoResponse Client::setAccountInfoWithOptions(const SetAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountNickname()) {
    query["AccountNickname"] = request.getAccountNickname();
  }

  if (!!request.hasCustomerBd()) {
    query["CustomerBd"] = request.getCustomerBd();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAccountInfo"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAccountInfoResponse>();
}

/**
 * @summary Updates sub-account information, including the nickname and remarks.
 *
 * @param request SetAccountInfoRequest
 * @return SetAccountInfoResponse
 */
SetAccountInfoResponse Client::setAccountInfo(const SetAccountInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAccountInfoWithOptions(request, runtime);
}

/**
 * @summary Sets the credit limit for a reseller customer. This feature is available only for Resellers and Distributors.
 *
 * @param request SetCreditLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetCreditLineResponse
 */
SetCreditLineResponse Client::setCreditLineWithOptions(const SetCreditLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreditLine()) {
    query["CreditLine"] = request.getCreditLine();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetCreditLine"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetCreditLineResponse>();
}

/**
 * @summary Sets the credit limit for a reseller customer. This feature is available only for Resellers and Distributors.
 *
 * @param request SetCreditLineRequest
 * @return SetCreditLineResponse
 */
SetCreditLineResponse Client::setCreditLine(const SetCreditLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCreditLineWithOptions(request, runtime);
}

/**
 * @summary Sets the credit usage threshold. When a customer\\"s available credit falls below the threshold, the reseller is notified by email. This feature is available only for Resellers and Distributors.
 *
 * @param request SetWarningThresholdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetWarningThresholdResponse
 */
SetWarningThresholdResponse Client::setWarningThresholdWithOptions(const SetWarningThresholdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  if (!!request.hasWarningValue()) {
    query["WarningValue"] = request.getWarningValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetWarningThreshold"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetWarningThresholdResponse>();
}

/**
 * @summary Sets the credit usage threshold. When a customer\\"s available credit falls below the threshold, the reseller is notified by email. This feature is available only for Resellers and Distributors.
 *
 * @param request SetWarningThresholdRequest
 * @return SetWarningThresholdResponse
 */
SetWarningThresholdResponse Client::setWarningThreshold(const SetWarningThresholdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setWarningThresholdWithOptions(request, runtime);
}

/**
 * @summary Subscribes to multi-level ecosystem partner bills on Alibaba Cloud International and generates bill files to OSS.
 *
 * @description - Ensure that the caller is an Alibaba Cloud international master reseller partner.
 * - A user can subscribe to one type of bill file at a time.
 * - After subscription, bill files generated on the previous day are pushed daily starting from the next day. On the 5th of each month, full bill files for the previous billing cycle are pushed.
 * - Bill files generated on a daily basis may be delayed. Delayed bill files are pushed the day after they are generated and may include bills that were delayed from earlier days. Pull the full files for the previous month at the beginning of each month.
 * - Grant the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/?spm=api-workbench.API%20Document.0.0.68c71e0fhmTSJp#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission to the subscribing user.
 * - File names.
 * ```.
 * BillingItemDetailForBillingPeriod   (Billing item detail)
 *   
 * Daily push file name format: UID_PartnerBillingItemDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_BillingItemDetail_20190310_0001_01.
 *   
 * Full file name format at the beginning of the next month: UID_PartnerBillingItemDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetail_201903_0001_01.
 * InstanceDetailForBillingPeriod  (Instance bill detail)
 *  
 *  Daily push file name format: UID_PartnerInstanceDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_InstanceDetail_20190310_0001_01.
 *   
 * Full file name format at the beginning of the next month: UID_PartnerInstanceDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetail_201903_1999-0001_01.
 * BillingItemDetailMonthly   (Billing item monthly bill)
 *   
 * Daily push file name format: UID_PartnerBillingItemDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetailMonthly_201903_0001_01. This file is updated daily with full data from the beginning of the month to the current day, until the 5th of the next month.
 * InstanceDetailMonthly  (Instance monthly bill)
 *   
 * Daily push file name format: UID_PartnerInstanceDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetailMonthly_201903_0001_01. This file is updated daily with full data from the beginning of the month to the current day, until the 5th of the next month.
 * fileNo exists only when the number of bill rows reaches the split threshold and the file is split.
 * ```
 * **This content is published only on the Chinese site.**.
 *
 * @param request SubscriptionBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubscriptionBillResponse
 */
SubscriptionBillResponse Client::subscriptionBillWithOptions(const SubscriptionBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginBillingCycle()) {
    query["BeginBillingCycle"] = request.getBeginBillingCycle();
  }

  if (!!request.hasBillFormat()) {
    query["BillFormat"] = request.getBillFormat();
  }

  if (!!request.hasBucketOwnerId()) {
    query["BucketOwnerId"] = request.getBucketOwnerId();
  }

  if (!!request.hasSubscribeBucket()) {
    query["SubscribeBucket"] = request.getSubscribeBucket();
  }

  if (!!request.hasSubscribeSegmentSize()) {
    query["SubscribeSegmentSize"] = request.getSubscribeSegmentSize();
  }

  if (!!request.hasSubscribeType()) {
    query["SubscribeType"] = request.getSubscribeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubscriptionBill"},
    {"version" , "2022-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubscriptionBillResponse>();
}

/**
 * @summary Subscribes to multi-level ecosystem partner bills on Alibaba Cloud International and generates bill files to OSS.
 *
 * @description - Ensure that the caller is an Alibaba Cloud international master reseller partner.
 * - A user can subscribe to one type of bill file at a time.
 * - After subscription, bill files generated on the previous day are pushed daily starting from the next day. On the 5th of each month, full bill files for the previous billing cycle are pushed.
 * - Bill files generated on a daily basis may be delayed. Delayed bill files are pushed the day after they are generated and may include bills that were delayed from earlier days. Pull the full files for the previous month at the beginning of each month.
 * - Grant the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/?spm=api-workbench.API%20Document.0.0.68c71e0fhmTSJp#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission to the subscribing user.
 * - File names.
 * ```.
 * BillingItemDetailForBillingPeriod   (Billing item detail)
 *   
 * Daily push file name format: UID_PartnerBillingItemDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_BillingItemDetail_20190310_0001_01.
 *   
 * Full file name format at the beginning of the next month: UID_PartnerBillingItemDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetail_201903_0001_01.
 * InstanceDetailForBillingPeriod  (Instance bill detail)
 *  
 *  Daily push file name format: UID_PartnerInstanceDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_InstanceDetail_20190310_0001_01.
 *   
 * Full file name format at the beginning of the next month: UID_PartnerInstanceDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetail_201903_1999-0001_01.
 * BillingItemDetailMonthly   (Billing item monthly bill)
 *   
 * Daily push file name format: UID_PartnerBillingItemDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetailMonthly_201903_0001_01. This file is updated daily with full data from the beginning of the month to the current day, until the 5th of the next month.
 * InstanceDetailMonthly  (Instance monthly bill)
 *   
 * Daily push file name format: UID_PartnerInstanceDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetailMonthly_201903_0001_01. This file is updated daily with full data from the beginning of the month to the current day, until the 5th of the next month.
 * fileNo exists only when the number of bill rows reaches the split threshold and the file is split.
 * ```
 * **This content is published only on the Chinese site.**.
 *
 * @param request SubscriptionBillRequest
 * @return SubscriptionBillResponse
 */
SubscriptionBillResponse Client::subscriptionBill(const SubscriptionBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return subscriptionBillWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Agency20221216