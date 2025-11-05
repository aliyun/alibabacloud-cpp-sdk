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
 * @summary 作废优惠券
 *
 * @param request CancelCouponRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelCouponResponse
 */
CancelCouponResponse Client::cancelCouponWithOptions(const CancelCouponRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCouponId()) {
    query["CouponId"] = request.couponId();
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
 * @summary 作废优惠券
 *
 * @param request CancelCouponRequest
 * @return CancelCouponResponse
 */
CancelCouponResponse Client::cancelCoupon(const CancelCouponRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelCouponWithOptions(request, runtime);
}

/**
 * @summary Cancels the subscription to multi-level bills as an Alibaba Cloud eco-partner.
 *
 * @description Make sure that you are a distributor of the Alibaba Cloud international ecosystem.
 * You can call this operation to cancel the subscription to only one type of bill at a time.
 * After the subscription to a type of bill is canceled, bills of this type are no longer pushed to the specified Object Storage Service (OSS) bucket.
 * **This topic is published only on the international site (alibabacloud.com).
 *
 * @param request CancelSubscriptionBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelSubscriptionBillResponse
 */
CancelSubscriptionBillResponse Client::cancelSubscriptionBillWithOptions(const CancelSubscriptionBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubscribeType()) {
    query["SubscribeType"] = request.subscribeType();
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
 * @summary Cancels the subscription to multi-level bills as an Alibaba Cloud eco-partner.
 *
 * @description Make sure that you are a distributor of the Alibaba Cloud international ecosystem.
 * You can call this operation to cancel the subscription to only one type of bill at a time.
 * After the subscription to a type of bill is canceled, bills of this type are no longer pushed to the specified Object Storage Service (OSS) bucket.
 * **This topic is published only on the international site (alibabacloud.com).
 *
 * @param request CancelSubscriptionBillRequest
 * @return CancelSubscriptionBillResponse
 */
CancelSubscriptionBillResponse Client::cancelSubscriptionBill(const CancelSubscriptionBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelSubscriptionBillWithOptions(request, runtime);
}

/**
 * @summary 优惠券审批状态列表
 *
 * @param request CouponApprovalStatusListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CouponApprovalStatusListResponse
 */
CouponApprovalStatusListResponse Client::couponApprovalStatusListWithOptions(const CouponApprovalStatusListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateStatus()) {
    query["TemplateStatus"] = request.templateStatus();
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
 * @summary 优惠券审批状态列表
 *
 * @param request CouponApprovalStatusListRequest
 * @return CouponApprovalStatusListResponse
 */
CouponApprovalStatusListResponse Client::couponApprovalStatusList(const CouponApprovalStatusListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return couponApprovalStatusListWithOptions(request, runtime);
}

/**
 * @summary 创建优惠券模板
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
    request.setProductTypeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.productType(), "ProductType", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasApplicableProducts()) {
    query["ApplicableProducts"] = request.applicableProducts();
  }

  if (!!request.hasCostBearer()) {
    query["CostBearer"] = request.costBearer();
  }

  if (!!request.hasCouponDescription()) {
    query["CouponDescription"] = request.couponDescription();
  }

  if (!!request.hasExpireddate()) {
    query["Expireddate"] = request.expireddate();
  }

  if (!!request.hasLimitPerPerson()) {
    query["LimitPerPerson"] = request.limitPerPerson();
  }

  if (!!request.hasProductTypeShrink()) {
    query["ProductType"] = request.productTypeShrink();
  }

  if (!!request.hasPurchaseType()) {
    query["PurchaseType"] = request.purchaseType();
  }

  if (!!request.hasReasonForApplication()) {
    query["ReasonForApplication"] = request.reasonForApplication();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasVailddate()) {
    query["Vailddate"] = request.vailddate();
  }

  if (!!request.hasVaildperioddays()) {
    query["Vaildperioddays"] = request.vaildperioddays();
  }

  if (!!request.hasValidUntil()) {
    query["ValidUntil"] = request.validUntil();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.value();
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
 * @summary 创建优惠券模板
 *
 * @param request CreateCouponTemplateRequest
 * @return CreateCouponTemplateResponse
 */
CreateCouponTemplateResponse Client::createCouponTemplate(const CreateCouponTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCouponTemplateWithOptions(request, runtime);
}

/**
 * @summary This function is designed for create a customer who is to be invited.
 *
 * @param request CreateCustomerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomerResponse
 */
CreateCustomerResponse Client::createCustomerWithOptions(const CreateCustomerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerName()) {
    query["CustomerName"] = request.customerName();
  }

  if (!!request.hasCustomerSource()) {
    query["CustomerSource"] = request.customerSource();
  }

  if (!!request.hasCustomerSubTrade()) {
    query["CustomerSubTrade"] = request.customerSubTrade();
  }

  if (!!request.hasCustomerTrade()) {
    query["CustomerTrade"] = request.customerTrade();
  }

  if (!!request.hasNation()) {
    query["Nation"] = request.nation();
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
 * @summary This function is designed for create a customer who is to be invited.
 *
 * @param request CreateCustomerRequest
 * @return CreateCustomerResponse
 */
CreateCustomerResponse Client::createCustomer(const CreateCustomerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomerWithOptions(request, runtime);
}

/**
 * @summary Query quota adjustment list of Distribution Customer from International Site. Not available on Domestic Site.
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
 * @summary Query quota adjustment list of Distribution Customer from International Site. Not available on Domestic Site.
 *
 * @param request CustomerQuotaRecordListRequest
 * @return CustomerQuotaRecordListResponse
 */
CustomerQuotaRecordListResponse Client::customerQuotaRecordList(const CustomerQuotaRecordListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return customerQuotaRecordListWithOptions(request, runtime);
}

/**
 * @summary This API is used to offset the Deducted Credit of a Distribution Customer. For example, if the current Deducted Credit is 500 and the Available Credit is 1000, by offsetting 300, the Deducted Credit will then become 200, and the Available Credit becomes 1300.
 *
 * @description Note that sometimes you may find that the customer\\"s Used Credit is negative. This indicates that there is no need to restore the Used Credit, and its ready for customer\\"s usage. This phenomenon occurs because a refund is generated while the customer\\"s credit is full, thereby triggered additional increasing on the customer\\"s credit.
 * For example, if the customer\\"s maximum Available Credit is 1000 with no usage, and a refund of 300 occurs, the Used Credit will become -300.
 *
 * @param request DeductOutstandingBalanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeductOutstandingBalanceResponse
 */
DeductOutstandingBalanceResponse Client::deductOutstandingBalanceWithOptions(const DeductOutstandingBalanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeductAmount()) {
    query["DeductAmount"] = request.deductAmount();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
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
 * @summary This API is used to offset the Deducted Credit of a Distribution Customer. For example, if the current Deducted Credit is 500 and the Available Credit is 1000, by offsetting 300, the Deducted Credit will then become 200, and the Available Credit becomes 1300.
 *
 * @description Note that sometimes you may find that the customer\\"s Used Credit is negative. This indicates that there is no need to restore the Used Credit, and its ready for customer\\"s usage. This phenomenon occurs because a refund is generated while the customer\\"s credit is full, thereby triggered additional increasing on the customer\\"s credit.
 * For example, if the customer\\"s maximum Available Credit is 1000 with no usage, and a refund of 300 occurs, the Used Credit will become -300.
 *
 * @param request DeductOutstandingBalanceRequest
 * @return DeductOutstandingBalanceResponse
 */
DeductOutstandingBalanceResponse Client::deductOutstandingBalance(const DeductOutstandingBalanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deductOutstandingBalanceWithOptions(request, runtime);
}

/**
 * @summary 作废优惠券模板
 *
 * @param request DeleteCouponTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCouponTemplateResponse
 */
DeleteCouponTemplateResponse Client::deleteCouponTemplateWithOptions(const DeleteCouponTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
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
 * @summary 作废优惠券模板
 *
 * @param request DeleteCouponTemplateRequest
 * @return DeleteCouponTemplateResponse
 */
DeleteCouponTemplateResponse Client::deleteCouponTemplate(const DeleteCouponTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCouponTemplateWithOptions(request, runtime);
}

/**
 * @summary Set the after-shutdown instance status for post-pay End Users as a Reseller.
 *
 * @description The caller should be the Partner as identified in the Alibaba Cloud distribution model. </br>
 * **This content is only published on the international site. **
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
 * @summary Set the after-shutdown instance status for post-pay End Users as a Reseller.
 *
 * @description The caller should be the Partner as identified in the Alibaba Cloud distribution model. </br>
 * **This content is only published on the international site. **
 *
 * @param request EditEndUserStatusRequest
 * @return EditEndUserStatusResponse
 */
EditEndUserStatusResponse Client::editEndUserStatus(const EditEndUserStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editEndUserStatusWithOptions(request, runtime);
}

/**
 * @summary Set the New Buy status for Sub-Customer as a Partner.
 *
 * @description The caller should be the Partner as identified in the Alibaba Cloud distribution model. </br>
 * **This content is only published on the international site. **
 *
 * @param request EditNewBuyStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditNewBuyStatusResponse
 */
EditNewBuyStatusResponse Client::editNewBuyStatusWithOptions(const EditNewBuyStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewBuyStatus()) {
    query["NewBuyStatus"] = request.newBuyStatus();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
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
 * @summary Set the New Buy status for Sub-Customer as a Partner.
 *
 * @description The caller should be the Partner as identified in the Alibaba Cloud distribution model. </br>
 * **This content is only published on the international site. **
 *
 * @param request EditNewBuyStatusRequest
 * @return EditNewBuyStatusResponse
 */
EditNewBuyStatusResponse Client::editNewBuyStatus(const EditNewBuyStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editNewBuyStatusWithOptions(request, runtime);
}

/**
 * @summary Modify the End User\\"s Shutdown Policy as a Reseller.
 *
 * @description The caller should be the Partner as identified in the Alibaba Cloud distribution model. </br>
 * **This content is only published on the international site. **
 *
 * @param request EditZeroCreditShutdownRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditZeroCreditShutdownResponse
 */
EditZeroCreditShutdownResponse Client::editZeroCreditShutdownWithOptions(const EditZeroCreditShutdownRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasShutdownPolicy()) {
    query["ShutdownPolicy"] = request.shutdownPolicy();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
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
 * @summary Modify the End User\\"s Shutdown Policy as a Reseller.
 *
 * @description The caller should be the Partner as identified in the Alibaba Cloud distribution model. </br>
 * **This content is only published on the international site. **
 *
 * @param request EditZeroCreditShutdownRequest
 * @return EditZeroCreditShutdownResponse
 */
EditZeroCreditShutdownResponse Client::editZeroCreditShutdown(const EditZeroCreditShutdownRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editZeroCreditShutdownWithOptions(request, runtime);
}

/**
 * @summary Export quota amount adjustment history as a Distribution Customer from International Site. Only available on International Site.
 *
 * @description Caller must be a Partner from International Site, either Distribution or Reseller will do.
 *
 * @param request ExportCustomerQuotaRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportCustomerQuotaRecordResponse
 */
ExportCustomerQuotaRecordResponse Client::exportCustomerQuotaRecordWithOptions(const ExportCustomerQuotaRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasEndUserPk()) {
    query["EndUserPk"] = request.endUserPk();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.operationType();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
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
 * @summary Export quota amount adjustment history as a Distribution Customer from International Site. Only available on International Site.
 *
 * @description Caller must be a Partner from International Site, either Distribution or Reseller will do.
 *
 * @param request ExportCustomerQuotaRecordRequest
 * @return ExportCustomerQuotaRecordResponse
 */
ExportCustomerQuotaRecordResponse Client::exportCustomerQuotaRecord(const ExportCustomerQuotaRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportCustomerQuotaRecordWithOptions(request, runtime);
}

/**
 * @summary 额度冲减明细列表导出接口
 *
 * @param request ExportReversedDeductionHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportReversedDeductionHistoryResponse
 */
ExportReversedDeductionHistoryResponse Client::exportReversedDeductionHistoryWithOptions(const ExportReversedDeductionHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasExportUid()) {
    query["ExportUid"] = request.exportUid();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
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
 * @summary 额度冲减明细列表导出接口
 *
 * @param request ExportReversedDeductionHistoryRequest
 * @return ExportReversedDeductionHistoryResponse
 */
ExportReversedDeductionHistoryResponse Client::exportReversedDeductionHistory(const ExportReversedDeductionHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportReversedDeductionHistoryWithOptions(request, runtime);
}

/**
 * @summary Return Distribution Customer\\"s account information.
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
 * @summary Return Distribution Customer\\"s account information.
 *
 * @param request GetAccountInfoRequest
 * @return GetAccountInfoResponse
 */
GetAccountInfoResponse Client::getAccountInfo(const GetAccountInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountInfoWithOptions(request, runtime);
}

/**
 * @summary 提供返佣商品API
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
    request.setListShowStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.listShowStatusList(), "ListShowStatusList", "simple"));
  }

  json query = {};
  if (!!request.hasCommodityCodeList()) {
    query["CommodityCodeList"] = request.commodityCodeList();
  }

  if (!!request.hasFiscalYear()) {
    query["FiscalYear"] = request.fiscalYear();
  }

  if (!!request.hasListShowStatusListShrink()) {
    query["ListShowStatusList"] = request.listShowStatusListShrink();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPipCodeList()) {
    query["PipCodeList"] = request.pipCodeList();
  }

  if (!!request.hasRealEndMonth()) {
    query["RealEndMonth"] = request.realEndMonth();
  }

  if (!!request.hasRealStartMonth()) {
    query["RealStartMonth"] = request.realStartMonth();
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
 * @summary 提供返佣商品API
 *
 * @param request GetCommissionableProductsRequest
 * @return GetCommissionableProductsResponse
 */
GetCommissionableProductsResponse Client::getCommissionableProducts(const GetCommissionableProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCommissionableProductsWithOptions(request, runtime);
}

/**
 * @summary 查询优惠券模板详情
 *
 * @param request GetCouponTemplateDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCouponTemplateDetailResponse
 */
GetCouponTemplateDetailResponse Client::getCouponTemplateDetailWithOptions(const GetCouponTemplateDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
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
 * @summary 查询优惠券模板详情
 *
 * @param request GetCouponTemplateDetailRequest
 * @return GetCouponTemplateDetailResponse
 */
GetCouponTemplateDetailResponse Client::getCouponTemplateDetail(const GetCouponTemplateDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCouponTemplateDetailWithOptions(request, runtime);
}

/**
 * @summary 国际渠道分销优惠券可抵扣产品
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
 * @summary 国际渠道分销优惠券可抵扣产品
 *
 * @param request GetCoupondeductProductCodeRequest
 * @return GetCoupondeductProductCodeResponse
 */
GetCoupondeductProductCodeResponse Client::getCoupondeductProductCode(const GetCoupondeductProductCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCoupondeductProductCodeWithOptions(request, runtime);
}

/**
 * @summary Query Credit Control information of Distribution Customers. The PopCreditInfoJson in the Return Parameter will be empty if the Distribution Customer is an Agency. This function is only available for Resellers and Distributors.
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
 * @summary Query Credit Control information of Distribution Customers. The PopCreditInfoJson in the Return Parameter will be empty if the Distribution Customer is an Agency. This function is only available for Resellers and Distributors.
 *
 * @param request GetCreditInfoRequest
 * @return GetCreditInfoResponse
 */
GetCreditInfoResponse Client::getCreditInfo(const GetCreditInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCreditInfoWithOptions(request, runtime);
}

/**
 * @summary 客户订单查询
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
 * @summary 客户订单查询
 *
 * @param request GetCustomerOrdersRequest
 * @return GetCustomerOrdersResponse
 */
GetCustomerOrdersResponse Client::getCustomerOrders(const GetCustomerOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomerOrdersWithOptions(request, runtime);
}

/**
 * @summary Issue Distributor\\"s daily Bill. This function is only available for Resellers and Distributors.
 *
 * @param request GetDailyBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDailyBillResponse
 */
GetDailyBillResponse Client::getDailyBillWithOptions(const GetDailyBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwner()) {
    query["BillOwner"] = request.billOwner();
  }

  if (!!request.hasBillType()) {
    query["BillType"] = request.billType();
  }

  if (!!request.hasDate()) {
    query["Date"] = request.date();
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
 * @summary Issue Distributor\\"s daily Bill. This function is only available for Resellers and Distributors.
 *
 * @param request GetDailyBillRequest
 * @return GetDailyBillResponse
 */
GetDailyBillResponse Client::getDailyBill(const GetDailyBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDailyBillWithOptions(request, runtime);
}

/**
 * @summary Query invitation status of customer who have been created and invited.
 *
 * @param request GetInviteStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInviteStatusResponse
 */
GetInviteStatusResponse Client::getInviteStatusWithOptions(const GetInviteStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInviteStatusList()) {
    query["InviteStatusList"] = request.inviteStatusList();
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
 * @summary Query invitation status of customer who have been created and invited.
 *
 * @param request GetInviteStatusRequest
 * @return GetInviteStatusResponse
 */
GetInviteStatusResponse Client::getInviteStatus(const GetInviteStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInviteStatusWithOptions(request, runtime);
}

/**
 * @summary Issue Distributor\\"s Monthly Bill. This function is only available for Resellers and Distributors.
 *
 * @param request GetMonthlyBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMonthlyBillResponse
 */
GetMonthlyBillResponse Client::getMonthlyBillWithOptions(const GetMonthlyBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwner()) {
    query["BillOwner"] = request.billOwner();
  }

  if (!!request.hasBillType()) {
    query["BillType"] = request.billType();
  }

  if (!!request.hasMonth()) {
    query["Month"] = request.month();
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
 * @summary Issue Distributor\\"s Monthly Bill. This function is only available for Resellers and Distributors.
 *
 * @param request GetMonthlyBillRequest
 * @return GetMonthlyBillResponse
 */
GetMonthlyBillResponse Client::getMonthlyBill(const GetMonthlyBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMonthlyBillWithOptions(request, runtime);
}

/**
 * @summary Query all the Unassociated Customer.
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
 * @summary Query all the Unassociated Customer.
 *
 * @param request GetUnassociatedCustomerRequest
 * @return GetUnassociatedCustomerResponse
 */
GetUnassociatedCustomerResponse Client::getUnassociatedCustomer(const GetUnassociatedCustomerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUnassociatedCustomerWithOptions(request, runtime);
}

/**
 * @summary Initiate the Partner registration invitation.
 *
 * @description The current API request rate for the Cloud Product has not been disclosed.
 *
 * @param request InviteSubAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InviteSubAccountResponse
 */
InviteSubAccountResponse Client::inviteSubAccountWithOptions(const InviteSubAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountInfoList()) {
    query["AccountInfoList"] = request.accountInfoList();
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
 * @summary Initiate the Partner registration invitation.
 *
 * @description The current API request rate for the Cloud Product has not been disclosed.
 *
 * @param request InviteSubAccountRequest
 * @return InviteSubAccountResponse
 */
InviteSubAccountResponse Client::inviteSubAccount(const InviteSubAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return inviteSubAccountWithOptions(request, runtime);
}

/**
 * @summary 发放优惠券
 *
 * @param request IssueCouponForCustomerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IssueCouponForCustomerResponse
 */
IssueCouponForCustomerResponse Client::issueCouponForCustomerWithOptions(const IssueCouponForCustomerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasCouponTemplateId()) {
    query["CouponTemplateId"] = request.couponTemplateId();
  }

  if (!!request.hasIsUseBenefit()) {
    query["IsUseBenefit"] = request.isUseBenefit();
  }

  if (!!request.hasUidlist()) {
    query["Uidlist"] = request.uidlist();
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
 * @summary 发放优惠券
 *
 * @param request IssueCouponForCustomerRequest
 * @return IssueCouponForCustomerResponse
 */
IssueCouponForCustomerResponse Client::issueCouponForCustomer(const IssueCouponForCustomerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return issueCouponForCustomerWithOptions(request, runtime);
}

/**
 * @summary This function is available for all Distributors. It displays the corresponding region code information based on the operable countries as agreed in the Distributor\\"s contract.
 *
 * @description The current API request rate for cloud products has not been disclosed.
 *
 * @param request ListCountriesRequest
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
 * @summary This function is available for all Distributors. It displays the corresponding region code information based on the operable countries as agreed in the Distributor\\"s contract.
 *
 * @description The current API request rate for cloud products has not been disclosed.
 *
 * @return ListCountriesResponse
 */
ListCountriesResponse Client::listCountries() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCountriesWithOptions(runtime);
}

/**
 * @summary 优惠券使用量列表查询
 *
 * @param request ListCouponUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCouponUsageResponse
 */
ListCouponUsageResponse Client::listCouponUsageWithOptions(const ListCouponUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.account();
  }

  if (!!request.hasCouponTemplateId()) {
    query["CouponTemplateId"] = request.couponTemplateId();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
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
 * @summary 优惠券使用量列表查询
 *
 * @param request ListCouponUsageRequest
 * @return ListCouponUsageResponse
 */
ListCouponUsageResponse Client::listCouponUsage(const ListCouponUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCouponUsageWithOptions(request, runtime);
}

/**
 * @summary 通用查询导出任务列表
 *
 * @param request ListExportTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExportTasksResponse
 */
ListExportTasksResponse Client::listExportTasksWithOptions(const ListExportTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.sceneCode();
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
 * @summary 通用查询导出任务列表
 *
 * @param request ListExportTasksRequest
 * @return ListExportTasksResponse
 */
ListExportTasksResponse Client::listExportTasks(const ListExportTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExportTasksWithOptions(request, runtime);
}

/**
 * @summary 额度冲减明细列表
 *
 * @param request QueryReversedDeductionHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryReversedDeductionHistoryResponse
 */
QueryReversedDeductionHistoryResponse Client::queryReversedDeductionHistoryWithOptions(const QueryReversedDeductionHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
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
 * @summary 额度冲减明细列表
 *
 * @param request QueryReversedDeductionHistoryRequest
 * @return QueryReversedDeductionHistoryResponse
 */
QueryReversedDeductionHistoryResponse Client::queryReversedDeductionHistory(const QueryReversedDeductionHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryReversedDeductionHistoryWithOptions(request, runtime);
}

/**
 * @summary Check the result of export quota list as a Distribution Customer from International Site. Only available on International Site.
 *
 * @description Caller must be a Partner from International Site, either Distribution or Reseller will do.
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
 * @summary Check the result of export quota list as a Distribution Customer from International Site. Only available on International Site.
 *
 * @description Caller must be a Partner from International Site, either Distribution or Reseller will do.
 *
 * @param request QuotaListExportPagedRequest
 * @return QuotaListExportPagedResponse
 */
QuotaListExportPagedResponse Client::quotaListExportPaged(const QuotaListExportPagedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return quotaListExportPagedWithOptions(request, runtime);
}

/**
 * @summary Resend invitation email.
 *
 * @param request ResendEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResendEmailResponse
 */
ResendEmailResponse Client::resendEmailWithOptions(const ResendEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInviteId()) {
    query["InviteId"] = request.inviteId();
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
 * @summary Resend invitation email.
 *
 * @param request ResendEmailRequest
 * @return ResendEmailResponse
 */
ResendEmailResponse Client::resendEmail(const ResendEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resendEmailWithOptions(request, runtime);
}

/**
 * @summary This function is designed for Sub Account information maintenance, including Nickname and Remark.
 *
 * @param request SetAccountInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAccountInfoResponse
 */
SetAccountInfoResponse Client::setAccountInfoWithOptions(const SetAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountNickname()) {
    query["AccountNickname"] = request.accountNickname();
  }

  if (!!request.hasCustomerBd()) {
    query["CustomerBd"] = request.customerBd();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
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
 * @summary This function is designed for Sub Account information maintenance, including Nickname and Remark.
 *
 * @param request SetAccountInfoRequest
 * @return SetAccountInfoResponse
 */
SetAccountInfoResponse Client::setAccountInfo(const SetAccountInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAccountInfoWithOptions(request, runtime);
}

/**
 * @summary Set Credit Line for Distribution Customers. This function is only available for Resellers and Distributors.
 *
 * @param request SetCreditLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetCreditLineResponse
 */
SetCreditLineResponse Client::setCreditLineWithOptions(const SetCreditLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreditLine()) {
    query["CreditLine"] = request.creditLine();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
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
 * @summary Set Credit Line for Distribution Customers. This function is only available for Resellers and Distributors.
 *
 * @param request SetCreditLineRequest
 * @return SetCreditLineResponse
 */
SetCreditLineResponse Client::setCreditLine(const SetCreditLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCreditLineWithOptions(request, runtime);
}

/**
 * @summary You can use this API to set the threshold for the use of credit control. When the customer credit control reaches below the threshold, it will pass through the notification email distributor. This feature is for Reseller and Distributor only.
 *
 * @param request SetWarningThresholdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetWarningThresholdResponse
 */
SetWarningThresholdResponse Client::setWarningThresholdWithOptions(const SetWarningThresholdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
  }

  if (!!request.hasWarningValue()) {
    query["WarningValue"] = request.warningValue();
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
 * @summary You can use this API to set the threshold for the use of credit control. When the customer credit control reaches below the threshold, it will pass through the notification email distributor. This feature is for Reseller and Distributor only.
 *
 * @param request SetWarningThresholdRequest
 * @return SetWarningThresholdResponse
 */
SetWarningThresholdResponse Client::setWarningThreshold(const SetWarningThresholdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setWarningThresholdWithOptions(request, runtime);
}

/**
 * @summary Generates the subscription to multi-level bills as an Alibaba Cloud eco-partner.
 *
 * @description *   Make sure that you are a distributor of the Alibaba Cloud international ecosystem.
 * *   You can call this operation to subscribe to only one type of bill at a time.
 * *   After the subscription to a type of bill is generated, the bill for the previous day is pushed on a daily basis from the next day. On the fifth day of each month, the full-data bill for the previous month is pushed.
 * *   A daily bill may be delayed. The delayed bill is pushed the next day after it is generated. The delayed bill may contain the bill data that is delayed until the previous day. We recommend that you query the full-data bill for the previous month at the beginning of each month.
 * *   Your account must be granted the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/?spm=api-workbench.API%20Document.0.0.68c71e0fhmTSJp#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission.
 * *   The following file name formats are supported for bills:
 * ```
 * BillingItemDetailForBillingPeriod
 *   
 * File name format of a daily bill: UID_PartnerBillingItemDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_BillingItemDetail_20190310_0001_01. 
 *   
 * File name format of a monthly full-data bill: UID_PartnerBillingItemDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetail_201903_0001_01. 
 * InstanceDetailForBillingPeriod
 *  
 *  File name format of a daily bill: UID_PartnerInstanceDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_InstanceDetail_20190310_0001_01. 
 *   
 * File name format of a monthly full-data bill: UID_PartnerInstanceDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetail_201903_1999-0001_01. 
 * BillingItemDetailMonthly
 *   
 * File name format of a daily bill: UID_PartnerBillingItemDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetailMonthly_201903_0001_01. This bill contains the bill data that is generated from the beginning of the current month to the fifth day of the next month. 
 * InstanceDetailMonthly
 *   
 * File name format of a daily bill: UID_PartnerInstanceDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetailMonthly_201903_0001_01. This bill contains the bill data that is generated from the beginning of the current month to the fifth day of the next month. 
 * The fileNo field exists only when the number of bill rows reaches the maximum rows in a single bill file and the bill is split into multiple files.
 * ```
 * **This topic is published only on the international site (alibabacloud.com).
 *
 * @param request SubscriptionBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubscriptionBillResponse
 */
SubscriptionBillResponse Client::subscriptionBillWithOptions(const SubscriptionBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginBillingCycle()) {
    query["BeginBillingCycle"] = request.beginBillingCycle();
  }

  if (!!request.hasBillFormat()) {
    query["BillFormat"] = request.billFormat();
  }

  if (!!request.hasBucketOwnerId()) {
    query["BucketOwnerId"] = request.bucketOwnerId();
  }

  if (!!request.hasSubscribeBucket()) {
    query["SubscribeBucket"] = request.subscribeBucket();
  }

  if (!!request.hasSubscribeSegmentSize()) {
    query["SubscribeSegmentSize"] = request.subscribeSegmentSize();
  }

  if (!!request.hasSubscribeType()) {
    query["SubscribeType"] = request.subscribeType();
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
 * @summary Generates the subscription to multi-level bills as an Alibaba Cloud eco-partner.
 *
 * @description *   Make sure that you are a distributor of the Alibaba Cloud international ecosystem.
 * *   You can call this operation to subscribe to only one type of bill at a time.
 * *   After the subscription to a type of bill is generated, the bill for the previous day is pushed on a daily basis from the next day. On the fifth day of each month, the full-data bill for the previous month is pushed.
 * *   A daily bill may be delayed. The delayed bill is pushed the next day after it is generated. The delayed bill may contain the bill data that is delayed until the previous day. We recommend that you query the full-data bill for the previous month at the beginning of each month.
 * *   Your account must be granted the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/?spm=api-workbench.API%20Document.0.0.68c71e0fhmTSJp#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission.
 * *   The following file name formats are supported for bills:
 * ```
 * BillingItemDetailForBillingPeriod
 *   
 * File name format of a daily bill: UID_PartnerBillingItemDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_BillingItemDetail_20190310_0001_01. 
 *   
 * File name format of a monthly full-data bill: UID_PartnerBillingItemDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetail_201903_0001_01. 
 * InstanceDetailForBillingPeriod
 *  
 *  File name format of a daily bill: UID_PartnerInstanceDetail_YYYYMMDD_SquenceNo_fileNo. Example: 169**_InstanceDetail_20190310_0001_01. 
 *   
 * File name format of a monthly full-data bill: UID_PartnerInstanceDetail_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetail_201903_1999-0001_01. 
 * BillingItemDetailMonthly
 *   
 * File name format of a daily bill: UID_PartnerBillingItemDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_BillingItemDetailMonthly_201903_0001_01. This bill contains the bill data that is generated from the beginning of the current month to the fifth day of the next month. 
 * InstanceDetailMonthly
 *   
 * File name format of a daily bill: UID_PartnerInstanceDetailMonthly_YYYYMM_SquenceNo_fileNo. Example: 169**_InstanceDetailMonthly_201903_0001_01. This bill contains the bill data that is generated from the beginning of the current month to the fifth day of the next month. 
 * The fileNo field exists only when the number of bill rows reaches the maximum rows in a single bill file and the bill is split into multiple files.
 * ```
 * **This topic is published only on the international site (alibabacloud.com).
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