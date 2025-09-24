#include <darabonba/Core.hpp>
#include <alibabacloud/BssOpenApi20171214.hpp>
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
using namespace AlibabaCloud::BssOpenApi20171214::Models;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{

AlibabaCloud::BssOpenApi20171214::Client::Client(Config &config): OpenApiClient(config){
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
 * @summary Creates a financial relationship.
 *
 * @description For more information about a financial relationship, see <props="intl">[Usage notes on the trusteeship]( https://www.alibabacloud.com/help/doc-detail/116383.html). 
 * If enterprise names used by the management account and a member for real-name verification are the same, you do not need to call an API operation for confirmation. Otherwise, you must call the ConfirmRelation operation for confirmation.
 *
 * @param request AddAccountRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAccountRelationResponse
 */
AddAccountRelationResponse Client::addAccountRelationWithOptions(const AddAccountRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChildNick()) {
    query["ChildNick"] = request.childNick();
  }

  if (!!request.hasChildUserId()) {
    query["ChildUserId"] = request.childUserId();
  }

  if (!!request.hasParentUserId()) {
    query["ParentUserId"] = request.parentUserId();
  }

  if (!!request.hasPermissionCodes()) {
    query["PermissionCodes"] = request.permissionCodes();
  }

  if (!!request.hasRelationType()) {
    query["RelationType"] = request.relationType();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.requestId();
  }

  if (!!request.hasRoleCodes()) {
    query["RoleCodes"] = request.roleCodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAccountRelation"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAccountRelationResponse>();
}

/**
 * @summary Creates a financial relationship.
 *
 * @description For more information about a financial relationship, see <props="intl">[Usage notes on the trusteeship]( https://www.alibabacloud.com/help/doc-detail/116383.html). 
 * If enterprise names used by the management account and a member for real-name verification are the same, you do not need to call an API operation for confirmation. Otherwise, you must call the ConfirmRelation operation for confirmation.
 *
 * @param request AddAccountRelationRequest
 * @return AddAccountRelationResponse
 */
AddAccountRelationResponse Client::addAccountRelation(const AddAccountRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAccountRelationWithOptions(request, runtime);
}

/**
 * @summary Transfers resource instances from the source cost center to the destination cost center.
 *
 * @param request AllocateCostUnitResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateCostUnitResourceResponse
 */
AllocateCostUnitResourceResponse Client::allocateCostUnitResourceWithOptions(const AllocateCostUnitResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFromUnitId()) {
    query["FromUnitId"] = request.fromUnitId();
  }

  if (!!request.hasFromUnitUserId()) {
    query["FromUnitUserId"] = request.fromUnitUserId();
  }

  if (!!request.hasResourceInstanceList()) {
    query["ResourceInstanceList"] = request.resourceInstanceList();
  }

  if (!!request.hasToUnitId()) {
    query["ToUnitId"] = request.toUnitId();
  }

  if (!!request.hasToUnitUserId()) {
    query["ToUnitUserId"] = request.toUnitUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocateCostUnitResource"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateCostUnitResourceResponse>();
}

/**
 * @summary Transfers resource instances from the source cost center to the destination cost center.
 *
 * @param request AllocateCostUnitResourceRequest
 * @return AllocateCostUnitResourceResponse
 */
AllocateCostUnitResourceResponse Client::allocateCostUnitResource(const AllocateCostUnitResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateCostUnitResourceWithOptions(request, runtime);
}

/**
 * @summary Submits an application for an invoice.
 *
 * @param request ApplyInvoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyInvoiceResponse
 */
ApplyInvoiceResponse Client::applyInvoiceWithOptions(const ApplyInvoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressId()) {
    query["AddressId"] = request.addressId();
  }

  if (!!request.hasApplyUserNick()) {
    query["ApplyUserNick"] = request.applyUserNick();
  }

  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.customerId();
  }

  if (!!request.hasInvoiceAmount()) {
    query["InvoiceAmount"] = request.invoiceAmount();
  }

  if (!!request.hasInvoiceByAmount()) {
    query["InvoiceByAmount"] = request.invoiceByAmount();
  }

  if (!!request.hasInvoicingType()) {
    query["InvoicingType"] = request.invoicingType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProcessWay()) {
    query["ProcessWay"] = request.processWay();
  }

  if (!!request.hasSelectedIds()) {
    query["SelectedIds"] = request.selectedIds();
  }

  if (!!request.hasUserRemark()) {
    query["UserRemark"] = request.userRemark();
  }

  if (!!request.hasEmails()) {
    query["emails"] = request.emails();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyInvoice"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyInvoiceResponse>();
}

/**
 * @summary Submits an application for an invoice.
 *
 * @param request ApplyInvoiceRequest
 * @return ApplyInvoiceResponse
 */
ApplyInvoiceResponse Client::applyInvoice(const ApplyInvoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyInvoiceWithOptions(request, runtime);
}

/**
 * @summary Cancels an unpaid order.
 *
 * @param request CancelOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelOrderResponse
 */
CancelOrderResponse Client::cancelOrderWithOptions(const CancelOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelOrder"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelOrderResponse>();
}

/**
 * @summary Cancels an unpaid order.
 *
 * @param request CancelOrderRequest
 * @return CancelOrderResponse
 */
CancelOrderResponse Client::cancelOrder(const CancelOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelOrderWithOptions(request, runtime);
}

/**
 * @param request ChangeResellerConsumeAmountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResellerConsumeAmountResponse
 */
ChangeResellerConsumeAmountResponse Client::changeResellerConsumeAmountWithOptions(const ChangeResellerConsumeAmountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdjustType()) {
    query["AdjustType"] = request.adjustType();
  }

  if (!!request.hasAmount()) {
    query["Amount"] = request.amount();
  }

  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.businessType();
  }

  if (!!request.hasCurrency()) {
    query["Currency"] = request.currency();
  }

  if (!!request.hasExtendMap()) {
    query["ExtendMap"] = request.extendMap();
  }

  if (!!request.hasOutBizId()) {
    query["OutBizId"] = request.outBizId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResellerConsumeAmount"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResellerConsumeAmountResponse>();
}

/**
 * @param request ChangeResellerConsumeAmountRequest
 * @return ChangeResellerConsumeAmountResponse
 */
ChangeResellerConsumeAmountResponse Client::changeResellerConsumeAmount(const ChangeResellerConsumeAmountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResellerConsumeAmountWithOptions(request, runtime);
}

/**
 * @summary Confirms the invitation initiated by the master account.
 *
 * @description 1\\. A member needs to confirm an invitation only if a financial management relationship is established between the management account and the member and enterprise names used by the management account and the member for real-name verification are different. 2. The permissions to be confirmed must be the same as those granted to the member when the management account initiates the invitation.
 *
 * @param request ConfirmRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmRelationResponse
 */
ConfirmRelationResponse Client::confirmRelationWithOptions(const ConfirmRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChildUserId()) {
    query["ChildUserId"] = request.childUserId();
  }

  if (!!request.hasConfirmCode()) {
    query["ConfirmCode"] = request.confirmCode();
  }

  if (!!request.hasParentUserId()) {
    query["ParentUserId"] = request.parentUserId();
  }

  if (!!request.hasPermissionCodes()) {
    query["PermissionCodes"] = request.permissionCodes();
  }

  if (!!request.hasRelationId()) {
    query["RelationId"] = request.relationId();
  }

  if (!!request.hasRelationType()) {
    query["RelationType"] = request.relationType();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.requestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfirmRelation"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfirmRelationResponse>();
}

/**
 * @summary Confirms the invitation initiated by the master account.
 *
 * @description 1\\. A member needs to confirm an invitation only if a financial management relationship is established between the management account and the member and enterprise names used by the management account and the member for real-name verification are different. 2. The permissions to be confirmed must be the same as those granted to the member when the management account initiates the invitation.
 *
 * @param request ConfirmRelationRequest
 * @return ConfirmRelationResponse
 */
ConfirmRelationResponse Client::confirmRelation(const ConfirmRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return confirmRelationWithOptions(request, runtime);
}

/**
 * @summary Changes the billing method of an instance. You can call this operation to switch the billing method from pay-as-you-go to subscription for Server Load Balancer (SLB) instances, elastic IP addresses (EIPs), and NAT gateways, and switch the billing method from subscription to pay-as-you-go for SLB instances and EIPs.
 *
 * @param request ConvertChargeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertChargeTypeResponse
 */
ConvertChargeTypeResponse Client::convertChargeTypeWithOptions(const ConvertChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConvertChargeType"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConvertChargeTypeResponse>();
}

/**
 * @summary Changes the billing method of an instance. You can call this operation to switch the billing method from pay-as-you-go to subscription for Server Load Balancer (SLB) instances, elastic IP addresses (EIPs), and NAT gateways, and switch the billing method from subscription to pay-as-you-go for SLB instances and EIPs.
 *
 * @param request ConvertChargeTypeRequest
 * @return ConvertChargeTypeResponse
 */
ConvertChargeTypeResponse Client::convertChargeType(const ConvertChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertChargeTypeWithOptions(request, runtime);
}

/**
 * @summary Creates an account to establish a financial relationship.
 *
 * @description You can call this operation to create an account so as to establish a master-member financial relationship.
 *
 * @param request CreateAgAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgAccountResponse
 */
CreateAgAccountResponse Client::createAgAccountWithOptions(const CreateAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountAttr()) {
    query["AccountAttr"] = request.accountAttr();
  }

  if (!!request.hasCityName()) {
    query["CityName"] = request.cityName();
  }

  if (!!request.hasEnterpriseName()) {
    query["EnterpriseName"] = request.enterpriseName();
  }

  if (!!request.hasFirstName()) {
    query["FirstName"] = request.firstName();
  }

  if (!!request.hasLastName()) {
    query["LastName"] = request.lastName();
  }

  if (!!request.hasLoginEmail()) {
    query["LoginEmail"] = request.loginEmail();
  }

  if (!!request.hasNationCode()) {
    query["NationCode"] = request.nationCode();
  }

  if (!!request.hasPostcode()) {
    query["Postcode"] = request.postcode();
  }

  if (!!request.hasProvinceName()) {
    query["ProvinceName"] = request.provinceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAgAccount"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgAccountResponse>();
}

/**
 * @summary Creates an account to establish a financial relationship.
 *
 * @description You can call this operation to create an account so as to establish a master-member financial relationship.
 *
 * @param request CreateAgAccountRequest
 * @return CreateAgAccountResponse
 */
CreateAgAccountResponse Client::createAgAccount(const CreateAgAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgAccountWithOptions(request, runtime);
}

/**
 * @summary Creates a cost center. You can create multiple cost centers at a time.
 *
 * @param request CreateCostUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCostUnitResponse
 */
CreateCostUnitResponse Client::createCostUnitWithOptions(const CreateCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUnitEntityList()) {
    query["UnitEntityList"] = request.unitEntityList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCostUnit"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCostUnitResponse>();
}

/**
 * @summary Creates a cost center. You can create multiple cost centers at a time.
 *
 * @param request CreateCostUnitRequest
 * @return CreateCostUnitResponse
 */
CreateCostUnitResponse Client::createCostUnit(const CreateCostUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCostUnitWithOptions(request, runtime);
}

/**
 * @summary Creates an instance. If you call this operation, an order for a new instance is created and the order is automatically paid for. You cannot create Elastic Compute Service (ECS) instances or ApsaraDB RDS instances by calling the operation.
 *
 * @param request CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasLogistics()) {
    query["Logistics"] = request.logistics();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParameter()) {
    query["Parameter"] = request.parameter();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRenewPeriod()) {
    query["RenewPeriod"] = request.renewPeriod();
  }

  if (!!request.hasRenewalStatus()) {
    query["RenewalStatus"] = request.renewalStatus();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Creates an instance. If you call this operation, an order for a new instance is created and the order is automatically paid for. You cannot create Elastic Compute Service (ECS) instances or ApsaraDB RDS instances by calling the operation.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary Indicates whether the call is successful. A value of true indicates that the call is successful. A value of false indicates that the call failed.
 *
 * @param request CreateResellerUserQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResellerUserQuotaResponse
 */
CreateResellerUserQuotaResponse Client::createResellerUserQuotaWithOptions(const CreateResellerUserQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.amount();
  }

  if (!!request.hasCurrency()) {
    query["Currency"] = request.currency();
  }

  if (!!request.hasOutBizId()) {
    query["OutBizId"] = request.outBizId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateResellerUserQuota"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResellerUserQuotaResponse>();
}

/**
 * @summary Indicates whether the call is successful. A value of true indicates that the call is successful. A value of false indicates that the call failed.
 *
 * @param request CreateResellerUserQuotaRequest
 * @return CreateResellerUserQuotaResponse
 */
CreateResellerUserQuotaResponse Client::createResellerUserQuota(const CreateResellerUserQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResellerUserQuotaWithOptions(request, runtime);
}

/**
 * @summary Creates a resource plan.
 *
 * @param request CreateResourcePackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourcePackageResponse
 */
CreateResourcePackageResponse Client::createResourcePackageWithOptions(const CreateResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasEffectiveDate()) {
    query["EffectiveDate"] = request.effectiveDate();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPackageType()) {
    query["PackageType"] = request.packageType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.specification();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateResourcePackage"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourcePackageResponse>();
}

/**
 * @summary Creates a resource plan.
 *
 * @param request CreateResourcePackageRequest
 * @return CreateResourcePackageResponse
 */
CreateResourcePackageResponse Client::createResourcePackage(const CreateResourcePackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResourcePackageWithOptions(request, runtime);
}

/**
 * @summary Creates a savings plan. After you call this operation, a savings plan is purchased and paid for.
 *
 * @param tmpReq CreateSavingsPlansInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSavingsPlansInstanceResponse
 */
CreateSavingsPlansInstanceResponse Client::createSavingsPlansInstanceWithOptions(const CreateSavingsPlansInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSavingsPlansInstanceShrinkRequest request = CreateSavingsPlansInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtendMap()) {
    request.setExtendMapShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extendMap(), "ExtendMap", "json"));
  }

  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.commodityCode();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasEffectiveDate()) {
    query["EffectiveDate"] = request.effectiveDate();
  }

  if (!!request.hasExtendMapShrink()) {
    query["ExtendMap"] = request.extendMapShrink();
  }

  if (!!request.hasPayMode()) {
    query["PayMode"] = request.payMode();
  }

  if (!!request.hasPoolValue()) {
    query["PoolValue"] = request.poolValue();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.specType();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.specification();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSavingsPlansInstance"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSavingsPlansInstanceResponse>();
}

/**
 * @summary Creates a savings plan. After you call this operation, a savings plan is purchased and paid for.
 *
 * @param request CreateSavingsPlansInstanceRequest
 * @return CreateSavingsPlansInstanceResponse
 */
CreateSavingsPlansInstanceResponse Client::createSavingsPlansInstance(const CreateSavingsPlansInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSavingsPlansInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a cost center.
 *
 * @param request DeleteCostUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCostUnitResponse
 */
DeleteCostUnitResponse Client::deleteCostUnitWithOptions(const DeleteCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerUid()) {
    query["OwnerUid"] = request.ownerUid();
  }

  if (!!request.hasUnitId()) {
    query["UnitId"] = request.unitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCostUnit"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCostUnitResponse>();
}

/**
 * @summary Deletes a cost center.
 *
 * @param request DeleteCostUnitRequest
 * @return DeleteCostUnitResponse
 */
DeleteCostUnitResponse Client::deleteCostUnit(const DeleteCostUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCostUnitWithOptions(request, runtime);
}

/**
 * @summary Query the summary information of the user "Cost Management-Budget".
 *
 * @description This operation is in beta testing and is only available for specific users in the whitelist. Excessive calls may result in performance issues. For example, the response times out.
 *
 * @param request DescribeCostBudgetsSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCostBudgetsSummaryResponse
 */
DescribeCostBudgetsSummaryResponse Client::describeCostBudgetsSummaryWithOptions(const DescribeCostBudgetsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBudgetName()) {
    query["BudgetName"] = request.budgetName();
  }

  if (!!request.hasBudgetStatus()) {
    query["BudgetStatus"] = request.budgetStatus();
  }

  if (!!request.hasBudgetType()) {
    query["BudgetType"] = request.budgetType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCostBudgetsSummary"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCostBudgetsSummaryResponse>();
}

/**
 * @summary Query the summary information of the user "Cost Management-Budget".
 *
 * @description This operation is in beta testing and is only available for specific users in the whitelist. Excessive calls may result in performance issues. For example, the response times out.
 *
 * @param request DescribeCostBudgetsSummaryRequest
 * @return DescribeCostBudgetsSummaryResponse
 */
DescribeCostBudgetsSummaryResponse Client::describeCostBudgetsSummary(const DescribeCostBudgetsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCostBudgetsSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the monthly allocated costs of instances by allocation month.
 *
 * @description You can view and export the allocated costs of the current month after 10:00 on the fourth day of the next month. The allocated costs of a single allocation month may involve orders or bills in different billing cycles. If a historical allocated amount is incorrect, the historical allocated costs need to be adjusted. As a result, the allocated costs displayed for a single allocation month may be different at different time points.
 *
 * @param request DescribeInstanceAmortizedCostByAmortizationPeriodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAmortizedCostByAmortizationPeriodResponse
 */
DescribeInstanceAmortizedCostByAmortizationPeriodResponse Client::describeInstanceAmortizedCostByAmortizationPeriodWithOptions(const DescribeInstanceAmortizedCostByAmortizationPeriodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBillOwnerIdList()) {
    body["BillOwnerIdList"] = request.billOwnerIdList();
  }

  if (!!request.hasBillUserIdList()) {
    body["BillUserIdList"] = request.billUserIdList();
  }

  if (!!request.hasBillingCycle()) {
    body["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasConsumePeriodFilter()) {
    body["ConsumePeriodFilter"] = request.consumePeriodFilter();
  }

  if (!!request.hasCostUnitCode()) {
    body["CostUnitCode"] = request.costUnitCode();
  }

  if (!!request.hasInstanceIdList()) {
    body["InstanceIdList"] = request.instanceIdList();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductDetail()) {
    body["ProductDetail"] = request.productDetail();
  }

  if (!!request.hasSubscriptionType()) {
    body["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceAmortizedCostByAmortizationPeriod"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceAmortizedCostByAmortizationPeriodResponse>();
}

/**
 * @summary Queries the monthly allocated costs of instances by allocation month.
 *
 * @description You can view and export the allocated costs of the current month after 10:00 on the fourth day of the next month. The allocated costs of a single allocation month may involve orders or bills in different billing cycles. If a historical allocated amount is incorrect, the historical allocated costs need to be adjusted. As a result, the allocated costs displayed for a single allocation month may be different at different time points.
 *
 * @param request DescribeInstanceAmortizedCostByAmortizationPeriodRequest
 * @return DescribeInstanceAmortizedCostByAmortizationPeriodResponse
 */
DescribeInstanceAmortizedCostByAmortizationPeriodResponse Client::describeInstanceAmortizedCostByAmortizationPeriod(const DescribeInstanceAmortizedCostByAmortizationPeriodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAmortizedCostByAmortizationPeriodWithOptions(request, runtime);
}

/**
 * @summary 实例摊销日摊销成本
 *
 * @param request DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAmortizedCostByAmortizationPeriodDateResponse
 */
DescribeInstanceAmortizedCostByAmortizationPeriodDateResponse Client::describeInstanceAmortizedCostByAmortizationPeriodDateWithOptions(const DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAmortizationDateEnd()) {
    body["AmortizationDateEnd"] = request.amortizationDateEnd();
  }

  if (!!request.hasAmortizationDateStart()) {
    body["AmortizationDateStart"] = request.amortizationDateStart();
  }

  if (!!request.hasBillOwnerIdList()) {
    body["BillOwnerIdList"] = request.billOwnerIdList();
  }

  if (!!request.hasBillUserIdList()) {
    body["BillUserIdList"] = request.billUserIdList();
  }

  if (!!request.hasBillingCycle()) {
    body["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasCostUnitCode()) {
    body["CostUnitCode"] = request.costUnitCode();
  }

  if (!!request.hasInstanceIdList()) {
    body["InstanceIdList"] = request.instanceIdList();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductDetail()) {
    body["ProductDetail"] = request.productDetail();
  }

  if (!!request.hasSubscriptionType()) {
    body["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceAmortizedCostByAmortizationPeriodDate"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceAmortizedCostByAmortizationPeriodDateResponse>();
}

/**
 * @summary 实例摊销日摊销成本
 *
 * @param request DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest
 * @return DescribeInstanceAmortizedCostByAmortizationPeriodDateResponse
 */
DescribeInstanceAmortizedCostByAmortizationPeriodDateResponse Client::describeInstanceAmortizedCostByAmortizationPeriodDate(const DescribeInstanceAmortizedCostByAmortizationPeriodDateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAmortizedCostByAmortizationPeriodDateWithOptions(request, runtime);
}

/**
 * @summary 实例账期月摊销成本
 *
 * @param request DescribeInstanceAmortizedCostByConsumePeriodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAmortizedCostByConsumePeriodResponse
 */
DescribeInstanceAmortizedCostByConsumePeriodResponse Client::describeInstanceAmortizedCostByConsumePeriodWithOptions(const DescribeInstanceAmortizedCostByConsumePeriodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAmortizationPeriodFilter()) {
    body["AmortizationPeriodFilter"] = request.amortizationPeriodFilter();
  }

  if (!!request.hasBillOwnerIdList()) {
    body["BillOwnerIdList"] = request.billOwnerIdList();
  }

  if (!!request.hasBillUserIdList()) {
    body["BillUserIdList"] = request.billUserIdList();
  }

  if (!!request.hasBillingCycle()) {
    body["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasCostUnitCode()) {
    body["CostUnitCode"] = request.costUnitCode();
  }

  if (!!request.hasInstanceIdList()) {
    body["InstanceIdList"] = request.instanceIdList();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductDetail()) {
    body["ProductDetail"] = request.productDetail();
  }

  if (!!request.hasSubscriptionType()) {
    body["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceAmortizedCostByConsumePeriod"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceAmortizedCostByConsumePeriodResponse>();
}

/**
 * @summary 实例账期月摊销成本
 *
 * @param request DescribeInstanceAmortizedCostByConsumePeriodRequest
 * @return DescribeInstanceAmortizedCostByConsumePeriodResponse
 */
DescribeInstanceAmortizedCostByConsumePeriodResponse Client::describeInstanceAmortizedCostByConsumePeriod(const DescribeInstanceAmortizedCostByConsumePeriodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAmortizedCostByConsumePeriodWithOptions(request, runtime);
}

/**
 * @summary Queries the billing information about instances or billable items in a billing cycle.
 *
 * @description *   Instance bills are generated after the total bill is split. In most cases, the instance bills do not include data generated on the last day of the specified billing cycle.
 * *   The instance information may change during the billing cycle. The instance configurations and types in monthly bills are subject to the point in time when you query bills. For more information, see the corresponding bill details.
 * *   You can query data generated after June 2020 for Cloud Communications services. You can query data generated after November 2020 for Alibaba Cloud Domains.
 *
 * @param request DescribeInstanceBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceBillResponse
 */
DescribeInstanceBillResponse Client::describeInstanceBillWithOptions(const DescribeInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasBillingDate()) {
    query["BillingDate"] = request.billingDate();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.granularity();
  }

  if (!!request.hasInstanceID()) {
    query["InstanceID"] = request.instanceID();
  }

  if (!!request.hasIsBillingItem()) {
    query["IsBillingItem"] = request.isBillingItem();
  }

  if (!!request.hasIsHideZeroCharge()) {
    query["IsHideZeroCharge"] = request.isHideZeroCharge();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipCode()) {
    query["PipCode"] = request.pipCode();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceBill"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceBillResponse>();
}

/**
 * @summary Queries the billing information about instances or billable items in a billing cycle.
 *
 * @description *   Instance bills are generated after the total bill is split. In most cases, the instance bills do not include data generated on the last day of the specified billing cycle.
 * *   The instance information may change during the billing cycle. The instance configurations and types in monthly bills are subject to the point in time when you query bills. For more information, see the corresponding bill details.
 * *   You can query data generated after June 2020 for Cloud Communications services. You can query data generated after November 2020 for Alibaba Cloud Domains.
 *
 * @param request DescribeInstanceBillRequest
 * @return DescribeInstanceBillResponse
 */
DescribeInstanceBillResponse Client::describeInstanceBill(const DescribeInstanceBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceBillWithOptions(request, runtime);
}

/**
 * @summary 实例摊销日抵扣还原摊销成本
 *
 * @param request DescribeInstanceDeductAmortizedCostByAmortizationPeriodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponse
 */
DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponse Client::describeInstanceDeductAmortizedCostByAmortizationPeriodWithOptions(const DescribeInstanceDeductAmortizedCostByAmortizationPeriodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBillOwnerIdList()) {
    body["BillOwnerIdList"] = request.billOwnerIdList();
  }

  if (!!request.hasBillUserIdList()) {
    body["BillUserIdList"] = request.billUserIdList();
  }

  if (!!request.hasBillingCycle()) {
    body["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasCostUnitCode()) {
    body["CostUnitCode"] = request.costUnitCode();
  }

  if (!!request.hasInstanceIdList()) {
    body["InstanceIdList"] = request.instanceIdList();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductDetail()) {
    body["ProductDetail"] = request.productDetail();
  }

  if (!!request.hasSubscriptionType()) {
    body["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceDeductAmortizedCostByAmortizationPeriod"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponse>();
}

/**
 * @summary 实例摊销日抵扣还原摊销成本
 *
 * @param request DescribeInstanceDeductAmortizedCostByAmortizationPeriodRequest
 * @return DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponse
 */
DescribeInstanceDeductAmortizedCostByAmortizationPeriodResponse Client::describeInstanceDeductAmortizedCostByAmortizationPeriod(const DescribeInstanceDeductAmortizedCostByAmortizationPeriodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceDeductAmortizedCostByAmortizationPeriodWithOptions(request, runtime);
}

/**
 * @summary Queries the pricing information about an Alibaba Cloud service.
 *
 * @param request DescribePricingModuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePricingModuleResponse
 */
DescribePricingModuleResponse Client::describePricingModuleWithOptions(const DescribePricingModuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePricingModule"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePricingModuleResponse>();
}

/**
 * @summary Queries the pricing information about an Alibaba Cloud service.
 *
 * @param request DescribePricingModuleRequest
 * @return DescribePricingModuleResponse
 */
DescribePricingModuleResponse Client::describePricingModule(const DescribePricingModuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePricingModuleWithOptions(request, runtime);
}

/**
 * @summary Queries the allocated costs of services by allocation month.
 *
 * @description You can view and export the allocated costs of the current month after 10:00 on the fourth day of the next month. The allocated costs of a single allocation month may involve orders or bills in different billing cycles. If a historical allocated amount is incorrect, the historical allocated costs need to be adjusted. As a result, the allocated costs displayed for a single allocation month may be different at different time points.
 *
 * @param request DescribeProductAmortizedCostByAmortizationPeriodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductAmortizedCostByAmortizationPeriodResponse
 */
DescribeProductAmortizedCostByAmortizationPeriodResponse Client::describeProductAmortizedCostByAmortizationPeriodWithOptions(const DescribeProductAmortizedCostByAmortizationPeriodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBillOwnerIdList()) {
    body["BillOwnerIdList"] = request.billOwnerIdList();
  }

  if (!!request.hasBillUserIdList()) {
    body["BillUserIdList"] = request.billUserIdList();
  }

  if (!!request.hasBillingCycle()) {
    body["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasConsumePeriodFilter()) {
    body["ConsumePeriodFilter"] = request.consumePeriodFilter();
  }

  if (!!request.hasCostUnitCode()) {
    body["CostUnitCode"] = request.costUnitCode();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductDetail()) {
    body["ProductDetail"] = request.productDetail();
  }

  if (!!request.hasSubscriptionType()) {
    body["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeProductAmortizedCostByAmortizationPeriod"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProductAmortizedCostByAmortizationPeriodResponse>();
}

/**
 * @summary Queries the allocated costs of services by allocation month.
 *
 * @description You can view and export the allocated costs of the current month after 10:00 on the fourth day of the next month. The allocated costs of a single allocation month may involve orders or bills in different billing cycles. If a historical allocated amount is incorrect, the historical allocated costs need to be adjusted. As a result, the allocated costs displayed for a single allocation month may be different at different time points.
 *
 * @param request DescribeProductAmortizedCostByAmortizationPeriodRequest
 * @return DescribeProductAmortizedCostByAmortizationPeriodResponse
 */
DescribeProductAmortizedCostByAmortizationPeriodResponse Client::describeProductAmortizedCostByAmortizationPeriod(const DescribeProductAmortizedCostByAmortizationPeriodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProductAmortizedCostByAmortizationPeriodWithOptions(request, runtime);
}

/**
 * @summary 产品账期月摊销成本
 *
 * @param request DescribeProductAmortizedCostByConsumePeriodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductAmortizedCostByConsumePeriodResponse
 */
DescribeProductAmortizedCostByConsumePeriodResponse Client::describeProductAmortizedCostByConsumePeriodWithOptions(const DescribeProductAmortizedCostByConsumePeriodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAmortizationPeriodFilter()) {
    body["AmortizationPeriodFilter"] = request.amortizationPeriodFilter();
  }

  if (!!request.hasBillOwnerIdList()) {
    body["BillOwnerIdList"] = request.billOwnerIdList();
  }

  if (!!request.hasBillUserIdList()) {
    body["BillUserIdList"] = request.billUserIdList();
  }

  if (!!request.hasBillingCycle()) {
    body["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasCostUnitCode()) {
    body["CostUnitCode"] = request.costUnitCode();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductDetail()) {
    body["ProductDetail"] = request.productDetail();
  }

  if (!!request.hasSubscriptionType()) {
    body["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeProductAmortizedCostByConsumePeriod"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProductAmortizedCostByConsumePeriodResponse>();
}

/**
 * @summary 产品账期月摊销成本
 *
 * @param request DescribeProductAmortizedCostByConsumePeriodRequest
 * @return DescribeProductAmortizedCostByConsumePeriodResponse
 */
DescribeProductAmortizedCostByConsumePeriodResponse Client::describeProductAmortizedCostByConsumePeriod(const DescribeProductAmortizedCostByConsumePeriodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProductAmortizedCostByConsumePeriodWithOptions(request, runtime);
}

/**
 * @summary Queries the coverage details of reserved instances (RIs) or storage capacity units (SCUs).
 *
 * @description 1\\. The queried coverage details are the same as those displayed in the table on the Coverage tab of the Manage Reserved Instances page in the Billing Management console.
 * 2\\. You can call this operation to query the coverage details of RIs or SCUs.
 * 3\\. You can call this operation to query coverage details at an hourly, daily, or monthly granularity.
 *
 * @param request DescribeResourceCoverageDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceCoverageDetailResponse
 */
DescribeResourceCoverageDetailResponse Client::describeResourceCoverageDetailWithOptions(const DescribeResourceCoverageDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.endPeriod();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.periodType();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.startPeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceCoverageDetail"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceCoverageDetailResponse>();
}

/**
 * @summary Queries the coverage details of reserved instances (RIs) or storage capacity units (SCUs).
 *
 * @description 1\\. The queried coverage details are the same as those displayed in the table on the Coverage tab of the Manage Reserved Instances page in the Billing Management console.
 * 2\\. You can call this operation to query the coverage details of RIs or SCUs.
 * 3\\. You can call this operation to query coverage details at an hourly, daily, or monthly granularity.
 *
 * @param request DescribeResourceCoverageDetailRequest
 * @return DescribeResourceCoverageDetailResponse
 */
DescribeResourceCoverageDetailResponse Client::describeResourceCoverageDetail(const DescribeResourceCoverageDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceCoverageDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the total coverage data of reserved instances (RIs) or storage capacity units (SCUs).
 *
 * @description The queried total coverage data is the same as the aggregated data displayed on the Coverage tab of the Manage Reserved Instances page in the Billing Management console.
 * You can call this operation to query the total coverage data of RIs or SCUs.
 *
 * @param request DescribeResourceCoverageTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceCoverageTotalResponse
 */
DescribeResourceCoverageTotalResponse Client::describeResourceCoverageTotalWithOptions(const DescribeResourceCoverageTotalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.endPeriod();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.periodType();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.startPeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceCoverageTotal"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceCoverageTotalResponse>();
}

/**
 * @summary Queries the total coverage data of reserved instances (RIs) or storage capacity units (SCUs).
 *
 * @description The queried total coverage data is the same as the aggregated data displayed on the Coverage tab of the Manage Reserved Instances page in the Billing Management console.
 * You can call this operation to query the total coverage data of RIs or SCUs.
 *
 * @param request DescribeResourceCoverageTotalRequest
 * @return DescribeResourceCoverageTotalResponse
 */
DescribeResourceCoverageTotalResponse Client::describeResourceCoverageTotal(const DescribeResourceCoverageTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceCoverageTotalWithOptions(request, runtime);
}

/**
 * @summary Queries the information about resource plans of an Alibaba Cloud service.
 *
 * @param request DescribeResourcePackageProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourcePackageProductResponse
 */
DescribeResourcePackageProductResponse Client::describeResourcePackageProductWithOptions(const DescribeResourcePackageProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourcePackageProduct"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourcePackageProductResponse>();
}

/**
 * @summary Queries the information about resource plans of an Alibaba Cloud service.
 *
 * @param request DescribeResourcePackageProductRequest
 * @return DescribeResourcePackageProductResponse
 */
DescribeResourcePackageProductResponse Client::describeResourcePackageProduct(const DescribeResourcePackageProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourcePackageProductWithOptions(request, runtime);
}

/**
 * @summary Queries the usage details of reserved instances (RIs) or storage capacity units (SCUs).
 *
 * @param request DescribeResourceUsageDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceUsageDetailResponse
 */
DescribeResourceUsageDetailResponse Client::describeResourceUsageDetailWithOptions(const DescribeResourceUsageDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.endPeriod();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.periodType();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.startPeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceUsageDetail"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceUsageDetailResponse>();
}

/**
 * @summary Queries the usage details of reserved instances (RIs) or storage capacity units (SCUs).
 *
 * @param request DescribeResourceUsageDetailRequest
 * @return DescribeResourceUsageDetailResponse
 */
DescribeResourceUsageDetailResponse Client::describeResourceUsageDetail(const DescribeResourceUsageDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceUsageDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the total usage data of reserved instances or storage capacity units (SCUs).
 *
 * @param request DescribeResourceUsageTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceUsageTotalResponse
 */
DescribeResourceUsageTotalResponse Client::describeResourceUsageTotalWithOptions(const DescribeResourceUsageTotalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.endPeriod();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.periodType();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.startPeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceUsageTotal"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceUsageTotalResponse>();
}

/**
 * @summary Queries the total usage data of reserved instances or storage capacity units (SCUs).
 *
 * @param request DescribeResourceUsageTotalRequest
 * @return DescribeResourceUsageTotalResponse
 */
DescribeResourceUsageTotalResponse Client::describeResourceUsageTotal(const DescribeResourceUsageTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceUsageTotalWithOptions(request, runtime);
}

/**
 * @summary Queries the coverage details of savings plans.
 *
 * @param request DescribeSavingsPlansCoverageDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSavingsPlansCoverageDetailResponse
 */
DescribeSavingsPlansCoverageDetailResponse Client::describeSavingsPlansCoverageDetailWithOptions(const DescribeSavingsPlansCoverageDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.endPeriod();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.periodType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.startPeriod();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSavingsPlansCoverageDetail"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSavingsPlansCoverageDetailResponse>();
}

/**
 * @summary Queries the coverage details of savings plans.
 *
 * @param request DescribeSavingsPlansCoverageDetailRequest
 * @return DescribeSavingsPlansCoverageDetailResponse
 */
DescribeSavingsPlansCoverageDetailResponse Client::describeSavingsPlansCoverageDetail(const DescribeSavingsPlansCoverageDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSavingsPlansCoverageDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the coverage summary of savings plans.
 *
 * @param request DescribeSavingsPlansCoverageTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSavingsPlansCoverageTotalResponse
 */
DescribeSavingsPlansCoverageTotalResponse Client::describeSavingsPlansCoverageTotalWithOptions(const DescribeSavingsPlansCoverageTotalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.endPeriod();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.periodType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.startPeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSavingsPlansCoverageTotal"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSavingsPlansCoverageTotalResponse>();
}

/**
 * @summary Queries the coverage summary of savings plans.
 *
 * @param request DescribeSavingsPlansCoverageTotalRequest
 * @return DescribeSavingsPlansCoverageTotalResponse
 */
DescribeSavingsPlansCoverageTotalResponse Client::describeSavingsPlansCoverageTotal(const DescribeSavingsPlansCoverageTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSavingsPlansCoverageTotalWithOptions(request, runtime);
}

/**
 * @summary Queries the usage details of savings plans.
 *
 * @param request DescribeSavingsPlansUsageDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSavingsPlansUsageDetailResponse
 */
DescribeSavingsPlansUsageDetailResponse Client::describeSavingsPlansUsageDetailWithOptions(const DescribeSavingsPlansUsageDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.endPeriod();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.periodType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.startPeriod();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSavingsPlansUsageDetail"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSavingsPlansUsageDetailResponse>();
}

/**
 * @summary Queries the usage details of savings plans.
 *
 * @param request DescribeSavingsPlansUsageDetailRequest
 * @return DescribeSavingsPlansUsageDetailResponse
 */
DescribeSavingsPlansUsageDetailResponse Client::describeSavingsPlansUsageDetail(const DescribeSavingsPlansUsageDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSavingsPlansUsageDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the usage summary of savings plans.
 *
 * @param request DescribeSavingsPlansUsageTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSavingsPlansUsageTotalResponse
 */
DescribeSavingsPlansUsageTotalResponse Client::describeSavingsPlansUsageTotalWithOptions(const DescribeSavingsPlansUsageTotalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.endPeriod();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.periodType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.startPeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSavingsPlansUsageTotal"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSavingsPlansUsageTotalResponse>();
}

/**
 * @summary Queries the usage summary of savings plans.
 *
 * @param request DescribeSavingsPlansUsageTotalRequest
 * @return DescribeSavingsPlansUsageTotalResponse
 */
DescribeSavingsPlansUsageTotalResponse Client::describeSavingsPlansUsageTotal(const DescribeSavingsPlansUsageTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSavingsPlansUsageTotalWithOptions(request, runtime);
}

/**
 * @summary Queries split bills.
 *
 * @description *   The data that you query by calling this operation is the same as the data that is queried by billing cycles in the Split Bill module of Cost Allocation.
 * *   You can query split bills that were generated within the last 12 months by calling this operation.
 * *   You can query split bills only after you enable the [Split Bill](https://usercenter2-intl.aliyun.com/finance/split-bill) service in the User Center console.
 *
 * @param request DescribeSplitItemBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSplitItemBillResponse
 */
DescribeSplitItemBillResponse Client::describeSplitItemBillWithOptions(const DescribeSplitItemBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasBillingDate()) {
    query["BillingDate"] = request.billingDate();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.granularity();
  }

  if (!!request.hasInstanceID()) {
    query["InstanceID"] = request.instanceID();
  }

  if (!!request.hasIsHideZeroCharge()) {
    query["IsHideZeroCharge"] = request.isHideZeroCharge();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipCode()) {
    query["PipCode"] = request.pipCode();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSplitItemID()) {
    query["SplitItemID"] = request.splitItemID();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  if (!!request.hasTagFilter()) {
    query["TagFilter"] = request.tagFilter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSplitItemBill"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSplitItemBillResponse>();
}

/**
 * @summary Queries split bills.
 *
 * @description *   The data that you query by calling this operation is the same as the data that is queried by billing cycles in the Split Bill module of Cost Allocation.
 * *   You can query split bills that were generated within the last 12 months by calling this operation.
 * *   You can query split bills only after you enable the [Split Bill](https://usercenter2-intl.aliyun.com/finance/split-bill) service in the User Center console.
 *
 * @param request DescribeSplitItemBillRequest
 * @return DescribeSplitItemBillResponse
 */
DescribeSplitItemBillResponse Client::describeSplitItemBill(const DescribeSplitItemBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSplitItemBillWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a financial relationship.
 *
 * @param request GetAccountRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountRelationResponse
 */
GetAccountRelationResponse Client::getAccountRelationWithOptions(const GetAccountRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccountRelation"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountRelationResponse>();
}

/**
 * @summary Queries the details of a financial relationship.
 *
 * @param request GetAccountRelationRequest
 * @return GetAccountRelationResponse
 */
GetAccountRelationResponse Client::getAccountRelation(const GetAccountRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountRelationWithOptions(request, runtime);
}

/**
 * @summary Queries the account information about a customer of a virtual network operator (VNO).
 *
 * @param request GetCustomerAccountInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomerAccountInfoResponse
 */
GetCustomerAccountInfoResponse Client::getCustomerAccountInfoWithOptions(const GetCustomerAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomerAccountInfo"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomerAccountInfoResponse>();
}

/**
 * @summary Queries the account information about a customer of a virtual network operator (VNO).
 *
 * @param request GetCustomerAccountInfoRequest
 * @return GetCustomerAccountInfoResponse
 */
GetCustomerAccountInfoResponse Client::getCustomerAccountInfo(const GetCustomerAccountInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomerAccountInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the IDs of customers of a virtual network operator (VNO).
 *
 * @description The system queries the IDs of customers of a VNO based on the AccessKey pair used in the request.
 *
 * @param request GetCustomerListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomerListResponse
 */
GetCustomerListResponse Client::getCustomerListWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetCustomerList"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomerListResponse>();
}

/**
 * @summary Queries the IDs of customers of a virtual network operator (VNO).
 *
 * @description The system queries the IDs of customers of a VNO based on the AccessKey pair used in the request.
 *
 * @return GetCustomerListResponse
 */
GetCustomerListResponse Client::getCustomerList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomerListWithOptions(runtime);
}

/**
 * @summary Queries the details of an order that belongs to your Alibaba Cloud account or distributors.
 *
 * @param request GetOrderDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrderDetailResponse
 */
GetOrderDetailResponse Client::getOrderDetailWithOptions(const GetOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOrderDetail"},
    {"version" , "2017-12-14"},
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
 * @summary Queries the details of an order that belongs to your Alibaba Cloud account or distributors.
 *
 * @param request GetOrderDetailRequest
 * @return GetOrderDetailResponse
 */
GetOrderDetailResponse Client::getOrderDetail(const GetOrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOrderDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the pay-as-you-go price of an Alibaba Cloud service.
 *
 * @description ### Usage notes
 * 1.  Call the QueryProductList operation to obtain the code of the service. For more information, see [QueryProductList](https://help.aliyun.com/document_detail/95984.html).
 * 2.  Call the DescribePricingModule operation to obtain the configuration parameters of the service. For more information, see [DescribePricingModule](https://help.aliyun.com/document_detail/96469.html).
 * 3.  Call the GetPayAsYouGoPrice operation to obtain the pay-as-you-go price of the service based on the returned configuration parameters.
 *
 * @param request GetPayAsYouGoPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPayAsYouGoPriceResponse
 */
GetPayAsYouGoPriceResponse Client::getPayAsYouGoPriceWithOptions(const GetPayAsYouGoPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModuleList()) {
    query["ModuleList"] = request.moduleList();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPayAsYouGoPrice"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPayAsYouGoPriceResponse>();
}

/**
 * @summary Queries the pay-as-you-go price of an Alibaba Cloud service.
 *
 * @description ### Usage notes
 * 1.  Call the QueryProductList operation to obtain the code of the service. For more information, see [QueryProductList](https://help.aliyun.com/document_detail/95984.html).
 * 2.  Call the DescribePricingModule operation to obtain the configuration parameters of the service. For more information, see [DescribePricingModule](https://help.aliyun.com/document_detail/96469.html).
 * 3.  Call the GetPayAsYouGoPrice operation to obtain the pay-as-you-go price of the service based on the returned configuration parameters.
 *
 * @param request GetPayAsYouGoPriceRequest
 * @return GetPayAsYouGoPriceResponse
 */
GetPayAsYouGoPriceResponse Client::getPayAsYouGoPrice(const GetPayAsYouGoPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPayAsYouGoPriceWithOptions(request, runtime);
}

/**
 * @summary Queries the price of a resource plan.
 *
 * @param request GetResourcePackagePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourcePackagePriceResponse
 */
GetResourcePackagePriceResponse Client::getResourcePackagePriceWithOptions(const GetResourcePackagePriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasEffectiveDate()) {
    query["EffectiveDate"] = request.effectiveDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPackageType()) {
    query["PackageType"] = request.packageType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.specification();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourcePackagePrice"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourcePackagePriceResponse>();
}

/**
 * @summary Queries the price of a resource plan.
 *
 * @param request GetResourcePackagePriceRequest
 * @return GetResourcePackagePriceResponse
 */
GetResourcePackagePriceResponse Client::getResourcePackagePrice(const GetResourcePackagePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourcePackagePriceWithOptions(request, runtime);
}

/**
 * @summary Queries the subscription price of an Alibaba Cloud service.
 *
 * @description 1.  Call the QueryProductList operation to obtain the code of the service. For more information, see [QueryProductList](https://help.aliyun.com/document_detail/95984.html).
 * 2.  Call the DescribePricingModule operation to obtain the configuration parameters of the service. For more information, see [DescribePricingModule](https://help.aliyun.com/document_detail/96469.html).
 * 3.  Call the GetSubscriptionPrice operation to obtain the pricing of the service based on the returned configuration parameters.
 *
 * @param request GetSubscriptionPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubscriptionPriceResponse
 */
GetSubscriptionPriceResponse Client::getSubscriptionPriceWithOptions(const GetSubscriptionPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasModuleList()) {
    query["ModuleList"] = request.moduleList();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasQuantity()) {
    query["Quantity"] = request.quantity();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasServicePeriodQuantity()) {
    query["ServicePeriodQuantity"] = request.servicePeriodQuantity();
  }

  if (!!request.hasServicePeriodUnit()) {
    query["ServicePeriodUnit"] = request.servicePeriodUnit();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSubscriptionPrice"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubscriptionPriceResponse>();
}

/**
 * @summary Queries the subscription price of an Alibaba Cloud service.
 *
 * @description 1.  Call the QueryProductList operation to obtain the code of the service. For more information, see [QueryProductList](https://help.aliyun.com/document_detail/95984.html).
 * 2.  Call the DescribePricingModule operation to obtain the configuration parameters of the service. For more information, see [DescribePricingModule](https://help.aliyun.com/document_detail/96469.html).
 * 3.  Call the GetSubscriptionPrice operation to obtain the pricing of the service based on the returned configuration parameters.
 *
 * @param request GetSubscriptionPriceRequest
 * @return GetSubscriptionPriceResponse
 */
GetSubscriptionPriceResponse Client::getSubscriptionPrice(const GetSubscriptionPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSubscriptionPriceWithOptions(request, runtime);
}

/**
 * @summary Queries the refundable amount for an instance from which you want to unsubscribe.
 *
 * @description 1.  **Check the information about unsubscription and confirm the unsubscription terms and refundable amount. The resource that is unsubscribed cannot be restored.**
 * 2.  Refunds are applicable only for the actual paid amount. Vouchers used for the purchase are non-refundable.
 * 3.  For more information, see [Rules for unsubscribing from resources](https://www.alibabacloud.com/help/en/user-center/user-guide/refund-rules).
 *
 * @param request InquiryPriceRefundInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InquiryPriceRefundInstanceResponse
 */
InquiryPriceRefundInstanceResponse Client::inquiryPriceRefundInstanceWithOptions(const InquiryPriceRefundInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InquiryPriceRefundInstance"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InquiryPriceRefundInstanceResponse>();
}

/**
 * @summary Queries the refundable amount for an instance from which you want to unsubscribe.
 *
 * @description 1.  **Check the information about unsubscription and confirm the unsubscription terms and refundable amount. The resource that is unsubscribed cannot be restored.**
 * 2.  Refunds are applicable only for the actual paid amount. Vouchers used for the purchase are non-refundable.
 * 3.  For more information, see [Rules for unsubscribing from resources](https://www.alibabacloud.com/help/en/user-center/user-guide/refund-rules).
 *
 * @param request InquiryPriceRefundInstanceRequest
 * @return InquiryPriceRefundInstanceResponse
 */
InquiryPriceRefundInstanceResponse Client::inquiryPriceRefundInstance(const InquiryPriceRefundInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return inquiryPriceRefundInstanceWithOptions(request, runtime);
}

/**
 * @summary Adds or removes permissions granted to a member in a financial relationship.
 *
 * @param request ModifyAccountRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountRelationResponse
 */
ModifyAccountRelationResponse Client::modifyAccountRelationWithOptions(const ModifyAccountRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChildNick()) {
    query["ChildNick"] = request.childNick();
  }

  if (!!request.hasChildUserId()) {
    query["ChildUserId"] = request.childUserId();
  }

  if (!!request.hasParentUserId()) {
    query["ParentUserId"] = request.parentUserId();
  }

  if (!!request.hasPermissionCodes()) {
    query["PermissionCodes"] = request.permissionCodes();
  }

  if (!!request.hasRelationId()) {
    query["RelationId"] = request.relationId();
  }

  if (!!request.hasRelationOperation()) {
    query["RelationOperation"] = request.relationOperation();
  }

  if (!!request.hasRelationType()) {
    query["RelationType"] = request.relationType();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.requestId();
  }

  if (!!request.hasRoleCodes()) {
    query["RoleCodes"] = request.roleCodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountRelation"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountRelationResponse>();
}

/**
 * @summary Adds or removes permissions granted to a member in a financial relationship.
 *
 * @param request ModifyAccountRelationRequest
 * @return ModifyAccountRelationResponse
 */
ModifyAccountRelationResponse Client::modifyAccountRelation(const ModifyAccountRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountRelationWithOptions(request, runtime);
}

/**
 * @summary Modifies one or more cost centers.
 *
 * @param request ModifyCostUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCostUnitResponse
 */
ModifyCostUnitResponse Client::modifyCostUnitWithOptions(const ModifyCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUnitEntityList()) {
    query["UnitEntityList"] = request.unitEntityList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCostUnit"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCostUnitResponse>();
}

/**
 * @summary Modifies one or more cost centers.
 *
 * @param request ModifyCostUnitRequest
 * @return ModifyCostUnitResponse
 */
ModifyCostUnitResponse Client::modifyCostUnit(const ModifyCostUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCostUnitWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of an instance. When you call this operation, the system generates a modification order and automatically completes the payment. You cannot call this operation to modify the configurations of an Elastic Compute Service (ECS) instance or ApsaraDB RDS instance. To modify the configurations of an ECS or ApsaraDB RDS instance, call the dedicated operation of the corresponding service.
 *
 * @param request ModifyInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstanceWithOptions(const ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasModifyType()) {
    query["ModifyType"] = request.modifyType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParameter()) {
    query["Parameter"] = request.parameter();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstance"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceResponse>();
}

/**
 * @summary Modifies the configurations of an instance. When you call this operation, the system generates a modification order and automatically completes the payment. You cannot call this operation to modify the configurations of an Elastic Compute Service (ECS) instance or ApsaraDB RDS instance. To modify the configurations of an ECS or ApsaraDB RDS instance, call the dedicated operation of the corresponding service.
 *
 * @param request ModifyInstanceRequest
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstance(const ModifyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceWithOptions(request, runtime);
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
    query["BuyerId"] = request.buyerId();
  }

  if (!!request.hasEcIdAccountIds()) {
    query["EcIdAccountIds"] = request.ecIdAccountIds();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.nbid();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasPaySubmitUid()) {
    query["PaySubmitUid"] = request.paySubmitUid();
  }

  if (!!request.hasPayerId()) {
    query["PayerId"] = request.payerId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PayOrder"},
    {"version" , "2017-12-14"},
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
 * @summary Queries the balance of your account.
 *
 * @param request QueryAccountBalanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAccountBalanceResponse
 */
QueryAccountBalanceResponse Client::queryAccountBalanceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "QueryAccountBalance"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAccountBalanceResponse>();
}

/**
 * @summary Queries the balance of your account.
 *
 * @return QueryAccountBalanceResponse
 */
QueryAccountBalanceResponse Client::queryAccountBalance() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountBalanceWithOptions(runtime);
}

/**
 * @summary Queries the bills of your Alibaba Cloud account within a billing cycle. You can summarize the bills by resource owner.
 *
 * @description Before you call this operation, take note of the following items:
 * *   Account bills are summarized based on instance bills. In most cases, the account bills do not include the data generated on the last day of the specified period.
 * *   You can query the data generated in June 2020 or later for Cloud Communications services. However, the query results do not include the data of Alibaba Cloud Domains.
 *
 * @param request QueryAccountBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAccountBillResponse
 */
QueryAccountBillResponse Client::queryAccountBillWithOptions(const QueryAccountBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasBillingDate()) {
    query["BillingDate"] = request.billingDate();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.granularity();
  }

  if (!!request.hasIsGroupByProduct()) {
    query["IsGroupByProduct"] = request.isGroupByProduct();
  }

  if (!!request.hasOwnerID()) {
    query["OwnerID"] = request.ownerID();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAccountBill"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAccountBillResponse>();
}

/**
 * @summary Queries the bills of your Alibaba Cloud account within a billing cycle. You can summarize the bills by resource owner.
 *
 * @description Before you call this operation, take note of the following items:
 * *   Account bills are summarized based on instance bills. In most cases, the account bills do not include the data generated on the last day of the specified period.
 * *   You can query the data generated in June 2020 or later for Cloud Communications services. However, the query results do not include the data of Alibaba Cloud Domains.
 *
 * @param request QueryAccountBillRequest
 * @return QueryAccountBillResponse
 */
QueryAccountBillResponse Client::queryAccountBill(const QueryAccountBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountBillWithOptions(request, runtime);
}

/**
 * @summary Queries the details of transactions within your account.
 *
 * @param request QueryAccountTransactionDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAccountTransactionDetailsResponse
 */
QueryAccountTransactionDetailsResponse Client::queryAccountTransactionDetailsWithOptions(const QueryAccountTransactionDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.createTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.createTimeStart();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRecordID()) {
    query["RecordID"] = request.recordID();
  }

  if (!!request.hasTransactionChannel()) {
    query["TransactionChannel"] = request.transactionChannel();
  }

  if (!!request.hasTransactionChannelSN()) {
    query["TransactionChannelSN"] = request.transactionChannelSN();
  }

  if (!!request.hasTransactionNumber()) {
    query["TransactionNumber"] = request.transactionNumber();
  }

  if (!!request.hasTransactionType()) {
    query["TransactionType"] = request.transactionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAccountTransactionDetails"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAccountTransactionDetailsResponse>();
}

/**
 * @summary Queries the details of transactions within your account.
 *
 * @param request QueryAccountTransactionDetailsRequest
 * @return QueryAccountTransactionDetailsResponse
 */
QueryAccountTransactionDetailsResponse Client::queryAccountTransactionDetails(const QueryAccountTransactionDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountTransactionDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries transactions within your Alibaba Cloud account.
 *
 * @param request QueryAccountTransactionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAccountTransactionsResponse
 */
QueryAccountTransactionsResponse Client::queryAccountTransactionsWithOptions(const QueryAccountTransactionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.createTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.createTimeStart();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRecordID()) {
    query["RecordID"] = request.recordID();
  }

  if (!!request.hasTransactionChannel()) {
    query["TransactionChannel"] = request.transactionChannel();
  }

  if (!!request.hasTransactionChannelSN()) {
    query["TransactionChannelSN"] = request.transactionChannelSN();
  }

  if (!!request.hasTransactionFlow()) {
    query["TransactionFlow"] = request.transactionFlow();
  }

  if (!!request.hasTransactionNumber()) {
    query["TransactionNumber"] = request.transactionNumber();
  }

  if (!!request.hasTransactionType()) {
    query["TransactionType"] = request.transactionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAccountTransactions"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAccountTransactionsResponse>();
}

/**
 * @summary Queries transactions within your Alibaba Cloud account.
 *
 * @param request QueryAccountTransactionsRequest
 * @return QueryAccountTransactionsResponse
 */
QueryAccountTransactionsResponse Client::queryAccountTransactions(const QueryAccountTransactionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountTransactionsWithOptions(request, runtime);
}

/**
 * @summary Queries available instances.
 *
 * @param request QueryAvailableInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAvailableInstancesResponse
 */
QueryAvailableInstancesResponse Client::queryAvailableInstancesWithOptions(const QueryAvailableInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.createTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.createTimeStart();
  }

  if (!!request.hasEndTimeEnd()) {
    query["EndTimeEnd"] = request.endTimeEnd();
  }

  if (!!request.hasEndTimeStart()) {
    query["EndTimeStart"] = request.endTimeStart();
  }

  if (!!request.hasInstanceIDs()) {
    query["InstanceIDs"] = request.instanceIDs();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasRenewStatus()) {
    query["RenewStatus"] = request.renewStatus();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAvailableInstances"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAvailableInstancesResponse>();
}

/**
 * @summary Queries available instances.
 *
 * @param request QueryAvailableInstancesRequest
 * @return QueryAvailableInstancesResponse
 */
QueryAvailableInstancesResponse Client::queryAvailableInstances(const QueryAvailableInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAvailableInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the bills in a billing cycle.
 *
 * @param request QueryBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBillResponse
 */
QueryBillResponse Client::queryBillWithOptions(const QueryBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasIsDisplayLocalCurrency()) {
    query["IsDisplayLocalCurrency"] = request.isDisplayLocalCurrency();
  }

  if (!!request.hasIsHideZeroCharge()) {
    query["IsHideZeroCharge"] = request.isHideZeroCharge();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryBill"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBillResponse>();
}

/**
 * @summary Queries the bills in a billing cycle.
 *
 * @param request QueryBillRequest
 * @return QueryBillResponse
 */
QueryBillResponse Client::queryBill(const QueryBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBillWithOptions(request, runtime);
}

/**
 * @summary Queries the bill overview information in a billing cycle.
 *
 * @param request QueryBillOverviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBillOverviewResponse
 */
QueryBillOverviewResponse Client::queryBillOverviewWithOptions(const QueryBillOverviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryBillOverview"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBillOverviewResponse>();
}

/**
 * @summary Queries the bill overview information in a billing cycle.
 *
 * @param request QueryBillOverviewRequest
 * @return QueryBillOverviewResponse
 */
QueryBillOverviewResponse Client::queryBillOverview(const QueryBillOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBillOverviewWithOptions(request, runtime);
}

/**
 * @summary Queries the subscribed bills that are stored in Object Storage Service (OSS) bucket.
 *
 * @param request QueryBillToOSSSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBillToOSSSubscriptionResponse
 */
QueryBillToOSSSubscriptionResponse Client::queryBillToOSSSubscriptionWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "QueryBillToOSSSubscription"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBillToOSSSubscriptionResponse>();
}

/**
 * @summary Queries the subscribed bills that are stored in Object Storage Service (OSS) bucket.
 *
 * @return QueryBillToOSSSubscriptionResponse
 */
QueryBillToOSSSubscriptionResponse Client::queryBillToOSSSubscription() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBillToOSSSubscriptionWithOptions(runtime);
}

/**
 * @summary Queries the information about vouchers.
 *
 * @param request QueryCashCouponsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCashCouponsResponse
 */
QueryCashCouponsResponse Client::queryCashCouponsWithOptions(const QueryCashCouponsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveOrNot()) {
    query["EffectiveOrNot"] = request.effectiveOrNot();
  }

  if (!!request.hasExpiryTimeEnd()) {
    query["ExpiryTimeEnd"] = request.expiryTimeEnd();
  }

  if (!!request.hasExpiryTimeStart()) {
    query["ExpiryTimeStart"] = request.expiryTimeStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCashCoupons"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCashCouponsResponse>();
}

/**
 * @summary Queries the information about vouchers.
 *
 * @param request QueryCashCouponsRequest
 * @return QueryCashCouponsResponse
 */
QueryCashCouponsResponse Client::queryCashCoupons(const QueryCashCouponsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCashCouponsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a service based on the service code.
 *
 * @description You can call this operation to query the information about a service based on the service code.
 *
 * @param request QueryCommodityListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCommodityListResponse
 */
QueryCommodityListResponse Client::queryCommodityListWithOptions(const QueryCommodityListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCommodityList"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCommodityListResponse>();
}

/**
 * @summary Queries the information about a service based on the service code.
 *
 * @description You can call this operation to query the information about a service based on the service code.
 *
 * @param request QueryCommodityListRequest
 * @return QueryCommodityListResponse
 */
QueryCommodityListResponse Client::queryCommodityList(const QueryCommodityListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCommodityListWithOptions(request, runtime);
}

/**
 * @summary Queries all cost centers within the current node of the cost center tree. If the ParentUnitId parameter is set to -1, all cost centers are queried.
 *
 * @param request QueryCostUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCostUnitResponse
 */
QueryCostUnitResponse Client::queryCostUnitWithOptions(const QueryCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerUid()) {
    query["OwnerUid"] = request.ownerUid();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentUnitId()) {
    query["ParentUnitId"] = request.parentUnitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCostUnit"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCostUnitResponse>();
}

/**
 * @summary Queries all cost centers within the current node of the cost center tree. If the ParentUnitId parameter is set to -1, all cost centers are queried.
 *
 * @param request QueryCostUnitRequest
 * @return QueryCostUnitResponse
 */
QueryCostUnitResponse Client::queryCostUnit(const QueryCostUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCostUnitWithOptions(request, runtime);
}

/**
 * @summary Queries the resource instances that are allocated to a cost center. If the unitId parameter is set to 0, the unallocated primary resource instances and sub-resource instances are queried.
 *
 * @param request QueryCostUnitResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCostUnitResourceResponse
 */
QueryCostUnitResourceResponse Client::queryCostUnitResourceWithOptions(const QueryCostUnitResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerUid()) {
    query["OwnerUid"] = request.ownerUid();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasUnitId()) {
    query["UnitId"] = request.unitId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCostUnitResource"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCostUnitResourceResponse>();
}

/**
 * @summary Queries the resource instances that are allocated to a cost center. If the unitId parameter is set to 0, the unallocated primary resource instances and sub-resource instances are queried.
 *
 * @param request QueryCostUnitResourceRequest
 * @return QueryCostUnitResourceResponse
 */
QueryCostUnitResourceResponse Client::queryCostUnitResource(const QueryCostUnitResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCostUnitResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the addresses to which invoices are mailed.
 *
 * @param request QueryCustomerAddressListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCustomerAddressListResponse
 */
QueryCustomerAddressListResponse Client::queryCustomerAddressListWithOptions(const QueryCustomerAddressListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCustomerAddressList"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCustomerAddressListResponse>();
}

/**
 * @summary Queries the addresses to which invoices are mailed.
 *
 * @param request QueryCustomerAddressListRequest
 * @return QueryCustomerAddressListResponse
 */
QueryCustomerAddressListResponse Client::queryCustomerAddressList(const QueryCustomerAddressListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCustomerAddressListWithOptions(request, runtime);
}

/**
 * @summary Queries the usage of resource plans, including reserved instances (RIs) and storage capacity units (SCUs).
 *
 * @description Limits:
 * *   Only the usage records within the past year can be queried.
 *
 * @param request QueryDPUtilizationDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDPUtilizationDetailResponse
 */
QueryDPUtilizationDetailResponse Client::queryDPUtilizationDetailWithOptions(const QueryDPUtilizationDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.commodityCode();
  }

  if (!!request.hasDeductedInstanceId()) {
    query["DeductedInstanceId"] = request.deductedInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIncludeShare()) {
    query["IncludeShare"] = request.includeShare();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceSpec()) {
    query["InstanceSpec"] = request.instanceSpec();
  }

  if (!!request.hasLastToken()) {
    query["LastToken"] = request.lastToken();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.prodCode();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDPUtilizationDetail"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDPUtilizationDetailResponse>();
}

/**
 * @summary Queries the usage of resource plans, including reserved instances (RIs) and storage capacity units (SCUs).
 *
 * @description Limits:
 * *   Only the usage records within the past year can be queried.
 *
 * @param request QueryDPUtilizationDetailRequest
 * @return QueryDPUtilizationDetailResponse
 */
QueryDPUtilizationDetailResponse Client::queryDPUtilizationDetail(const QueryDPUtilizationDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDPUtilizationDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the orders for which you want to apply for invoices.
 *
 * @param request QueryEvaluateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEvaluateListResponse
 */
QueryEvaluateListResponse Client::queryEvaluateListWithOptions(const QueryEvaluateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillCycle()) {
    query["BillCycle"] = request.billCycle();
  }

  if (!!request.hasBizTypeList()) {
    query["BizTypeList"] = request.bizTypeList();
  }

  if (!!request.hasEndAmount()) {
    query["EndAmount"] = request.endAmount();
  }

  if (!!request.hasEndBizTime()) {
    query["EndBizTime"] = request.endBizTime();
  }

  if (!!request.hasEndSearchTime()) {
    query["EndSearchTime"] = request.endSearchTime();
  }

  if (!!request.hasOutBizId()) {
    query["OutBizId"] = request.outBizId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.sortType();
  }

  if (!!request.hasStartAmount()) {
    query["StartAmount"] = request.startAmount();
  }

  if (!!request.hasStartBizTime()) {
    query["StartBizTime"] = request.startBizTime();
  }

  if (!!request.hasStartSearchTime()) {
    query["StartSearchTime"] = request.startSearchTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryEvaluateList"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryEvaluateListResponse>();
}

/**
 * @summary Queries the information about the orders for which you want to apply for invoices.
 *
 * @param request QueryEvaluateListRequest
 * @return QueryEvaluateListResponse
 */
QueryEvaluateListResponse Client::queryEvaluateList(const QueryEvaluateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEvaluateListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a financial account.
 *
 * @param request QueryFinancialAccountInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFinancialAccountInfoResponse
 */
QueryFinancialAccountInfoResponse Client::queryFinancialAccountInfoWithOptions(const QueryFinancialAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFinancialAccountInfo"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFinancialAccountInfoResponse>();
}

/**
 * @summary Queries the information about a financial account.
 *
 * @param request QueryFinancialAccountInfoRequest
 * @return QueryFinancialAccountInfoResponse
 */
QueryFinancialAccountInfoResponse Client::queryFinancialAccountInfo(const QueryFinancialAccountInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFinancialAccountInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the bills of instances or billable items in a billing cycle.
 *
 * @description ##
 * *   This API operation has been upgraded to DescribeInstanceBill. We recommend that you call the [DescribeInstanceBill](https://help.aliyun.com/document_detail/209402.html) operation to query the bills of instances or billable items in a billing cycle. You can call the QueryInstanceBill operation to query a maximum of 50,000 data rows in a bill.
 * *   Instance bills are generated after bills are split. In most cases, the instance bills do not include data generated on the last day of the specified period.
 * *   The instance information changes within a billing cycle. The instance configurations and specifications and the time when the instance was used in the billing cycle are all recorded. For more information, see the corresponding bill details.
 * *   You can query the data generated in June 2020 or later for Cloud Communications services, and the data generated in November 2020 or later for Alibaba Cloud Domains.
 *
 * @param request QueryInstanceBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInstanceBillResponse
 */
QueryInstanceBillResponse Client::queryInstanceBillWithOptions(const QueryInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasBillingDate()) {
    query["BillingDate"] = request.billingDate();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.granularity();
  }

  if (!!request.hasIsBillingItem()) {
    query["IsBillingItem"] = request.isBillingItem();
  }

  if (!!request.hasIsHideZeroCharge()) {
    query["IsHideZeroCharge"] = request.isHideZeroCharge();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryInstanceBill"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInstanceBillResponse>();
}

/**
 * @summary Queries the bills of instances or billable items in a billing cycle.
 *
 * @description ##
 * *   This API operation has been upgraded to DescribeInstanceBill. We recommend that you call the [DescribeInstanceBill](https://help.aliyun.com/document_detail/209402.html) operation to query the bills of instances or billable items in a billing cycle. You can call the QueryInstanceBill operation to query a maximum of 50,000 data rows in a bill.
 * *   Instance bills are generated after bills are split. In most cases, the instance bills do not include data generated on the last day of the specified period.
 * *   The instance information changes within a billing cycle. The instance configurations and specifications and the time when the instance was used in the billing cycle are all recorded. For more information, see the corresponding bill details.
 * *   You can query the data generated in June 2020 or later for Cloud Communications services, and the data generated in November 2020 or later for Alibaba Cloud Domains.
 *
 * @param request QueryInstanceBillRequest
 * @return QueryInstanceBillResponse
 */
QueryInstanceBillResponse Client::queryInstanceBill(const QueryInstanceBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInstanceBillWithOptions(request, runtime);
}

/**
 * @summary Queries instances by tag.
 *
 * @param request QueryInstanceByTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInstanceByTagResponse
 */
QueryInstanceByTagResponse Client::queryInstanceByTagWithOptions(const QueryInstanceByTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryInstanceByTag"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInstanceByTagResponse>();
}

/**
 * @summary Queries instances by tag.
 *
 * @param request QueryInstanceByTagRequest
 * @return QueryInstanceByTagResponse
 */
QueryInstanceByTagResponse Client::queryInstanceByTag(const QueryInstanceByTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInstanceByTagWithOptions(request, runtime);
}

/**
 * @summary The code of the service.
 *
 * @param request QueryInstanceGaapCostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInstanceGaapCostResponse
 */
QueryInstanceGaapCostResponse Client::queryInstanceGaapCostWithOptions(const QueryInstanceGaapCostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryInstanceGaapCost"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInstanceGaapCostResponse>();
}

/**
 * @summary The code of the service.
 *
 * @param request QueryInstanceGaapCostRequest
 * @return QueryInstanceGaapCostResponse
 */
QueryInstanceGaapCostResponse Client::queryInstanceGaapCost(const QueryInstanceGaapCostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInstanceGaapCostWithOptions(request, runtime);
}

/**
 * @summary Queries the information about invoice titles.
 *
 * @param request QueryInvoicingCustomerListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInvoicingCustomerListResponse
 */
QueryInvoicingCustomerListResponse Client::queryInvoicingCustomerListWithOptions(const QueryInvoicingCustomerListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryInvoicingCustomerList"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryInvoicingCustomerListResponse>();
}

/**
 * @summary Queries the information about invoice titles.
 *
 * @param request QueryInvoicingCustomerListRequest
 * @return QueryInvoicingCustomerListResponse
 */
QueryInvoicingCustomerListResponse Client::queryInvoicingCustomerList(const QueryInvoicingCustomerListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInvoicingCustomerListWithOptions(request, runtime);
}

/**
 * @summary Queries the orders of your Alibaba Cloud account or distributors. By default, orders within the last hour are queried. To query earlier orders, specify the CreateTimeStart and CreateTimeEnd parameters.
 *
 * @param request QueryOrdersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryOrdersResponse
 */
QueryOrdersResponse Client::queryOrdersWithOptions(const QueryOrdersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.createTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.createTimeStart();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPaymentStatus()) {
    query["PaymentStatus"] = request.paymentStatus();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryOrders"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryOrdersResponse>();
}

/**
 * @summary Queries the orders of your Alibaba Cloud account or distributors. By default, orders within the last hour are queried. To query earlier orders, specify the CreateTimeStart and CreateTimeEnd parameters.
 *
 * @param request QueryOrdersRequest
 * @return QueryOrdersResponse
 */
QueryOrdersResponse Client::queryOrders(const QueryOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryOrdersWithOptions(request, runtime);
}

/**
 * @summary Queries, by relationship ID, permissions granted to accounts between which a management-member relationship is established.
 *
 * @param request QueryPermissionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPermissionListResponse
 */
QueryPermissionListResponse Client::queryPermissionListWithOptions(const QueryPermissionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRelationId()) {
    query["RelationId"] = request.relationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPermissionList"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPermissionListResponse>();
}

/**
 * @summary Queries, by relationship ID, permissions granted to accounts between which a management-member relationship is established.
 *
 * @param request QueryPermissionListRequest
 * @return QueryPermissionListResponse
 */
QueryPermissionListResponse Client::queryPermissionList(const QueryPermissionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPermissionListWithOptions(request, runtime);
}

/**
 * @summary Queries prepaid cards.
 *
 * @param request QueryPrepaidCardsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPrepaidCardsResponse
 */
QueryPrepaidCardsResponse Client::queryPrepaidCardsWithOptions(const QueryPrepaidCardsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveOrNot()) {
    query["EffectiveOrNot"] = request.effectiveOrNot();
  }

  if (!!request.hasExpiryTimeEnd()) {
    query["ExpiryTimeEnd"] = request.expiryTimeEnd();
  }

  if (!!request.hasExpiryTimeStart()) {
    query["ExpiryTimeStart"] = request.expiryTimeStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPrepaidCards"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPrepaidCardsResponse>();
}

/**
 * @summary Queries prepaid cards.
 *
 * @param request QueryPrepaidCardsRequest
 * @return QueryPrepaidCardsResponse
 */
QueryPrepaidCardsResponse Client::queryPrepaidCards(const QueryPrepaidCardsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPrepaidCardsWithOptions(request, runtime);
}

/**
 * @summary Queries the billable items of a service.
 *
 * @description You can call this operation to query the billable items of a service. A billable item is the minimum unit used to calculate costs.
 *
 * @param request QueryPriceEntityListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPriceEntityListResponse
 */
QueryPriceEntityListResponse Client::queryPriceEntityListWithOptions(const QueryPriceEntityListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPriceEntityList"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPriceEntityListResponse>();
}

/**
 * @summary Queries the billable items of a service.
 *
 * @description You can call this operation to query the billable items of a service. A billable item is the minimum unit used to calculate costs.
 *
 * @param request QueryPriceEntityListRequest
 * @return QueryPriceEntityListResponse
 */
QueryPriceEntityListResponse Client::queryPriceEntityList(const QueryPriceEntityListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPriceEntityListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about all Alibaba Cloud services.
 *
 * @param request QueryProductListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryProductListResponse
 */
QueryProductListResponse Client::queryProductListWithOptions(const QueryProductListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryTotalCount()) {
    query["QueryTotalCount"] = request.queryTotalCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryProductList"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryProductListResponse>();
}

/**
 * @summary Queries the information about all Alibaba Cloud services.
 *
 * @param request QueryProductListRequest
 * @return QueryProductListResponse
 */
QueryProductListResponse Client::queryProductList(const QueryProductListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryProductListWithOptions(request, runtime);
}

/**
 * @summary Queries the usage details of a reserved instance (RI).
 *
 * @param request QueryRIUtilizationDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRIUtilizationDetailResponse
 */
QueryRIUtilizationDetailResponse Client::queryRIUtilizationDetailWithOptions(const QueryRIUtilizationDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeductedInstanceId()) {
    query["DeductedInstanceId"] = request.deductedInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceSpec()) {
    query["InstanceSpec"] = request.instanceSpec();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRICommodityCode()) {
    query["RICommodityCode"] = request.RICommodityCode();
  }

  if (!!request.hasRIInstanceId()) {
    query["RIInstanceId"] = request.RIInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRIUtilizationDetail"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRIUtilizationDetailResponse>();
}

/**
 * @summary Queries the usage details of a reserved instance (RI).
 *
 * @param request QueryRIUtilizationDetailRequest
 * @return QueryRIUtilizationDetailResponse
 */
QueryRIUtilizationDetailResponse Client::queryRIUtilizationDetail(const QueryRIUtilizationDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRIUtilizationDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a redemption coupon.
 *
 * @param request QueryRedeemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRedeemResponse
 */
QueryRedeemResponse Client::queryRedeemWithOptions(const QueryRedeemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRedeem"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRedeemResponse>();
}

/**
 * @summary Queries the information about a redemption coupon.
 *
 * @param request QueryRedeemRequest
 * @return QueryRedeemResponse
 */
QueryRedeemResponse Client::queryRedeem(const QueryRedeemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRedeemWithOptions(request, runtime);
}

/**
 * @summary Queries the members of a management account.
 *
 * @param request QueryRelationListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRelationListResponse
 */
QueryRelationListResponse Client::queryRelationListWithOptions(const QueryRelationListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatusList()) {
    query["StatusList"] = request.statusList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRelationList"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRelationListResponse>();
}

/**
 * @summary Queries the members of a management account.
 *
 * @param request QueryRelationListRequest
 * @return QueryRelationListResponse
 */
QueryRelationListResponse Client::queryRelationList(const QueryRelationListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRelationListWithOptions(request, runtime);
}

/**
 * @summary Indicates whether the call is successful. A value of true indicates that the call is successful. A value of false indicates that the call failed.
 *
 * @param request QueryResellerAvailableQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryResellerAvailableQuotaResponse
 */
QueryResellerAvailableQuotaResponse Client::queryResellerAvailableQuotaWithOptions(const QueryResellerAvailableQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasItemCodes()) {
    query["ItemCodes"] = request.itemCodes();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryResellerAvailableQuota"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryResellerAvailableQuotaResponse>();
}

/**
 * @summary Indicates whether the call is successful. A value of true indicates that the call is successful. A value of false indicates that the call failed.
 *
 * @param request QueryResellerAvailableQuotaRequest
 * @return QueryResellerAvailableQuotaResponse
 */
QueryResellerAvailableQuotaResponse Client::queryResellerAvailableQuota(const QueryResellerAvailableQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryResellerAvailableQuotaWithOptions(request, runtime);
}

/**
 * @summary 查询用户的信控预警阀值,该接口暂未测试启用
 *
 * @param request QueryResellerUserAlarmThresholdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryResellerUserAlarmThresholdResponse
 */
QueryResellerUserAlarmThresholdResponse Client::queryResellerUserAlarmThresholdWithOptions(const QueryResellerUserAlarmThresholdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmType()) {
    query["AlarmType"] = request.alarmType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryResellerUserAlarmThreshold"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryResellerUserAlarmThresholdResponse>();
}

/**
 * @summary 查询用户的信控预警阀值,该接口暂未测试启用
 *
 * @param request QueryResellerUserAlarmThresholdRequest
 * @return QueryResellerUserAlarmThresholdResponse
 */
QueryResellerUserAlarmThresholdResponse Client::queryResellerUserAlarmThreshold(const QueryResellerUserAlarmThresholdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryResellerUserAlarmThresholdWithOptions(request, runtime);
}

/**
 * @summary Queries the instances of a resource plan. You can query the resource plans that are expired within one year.
 *
 * @param request QueryResourcePackageInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryResourcePackageInstancesResponse
 */
QueryResourcePackageInstancesResponse Client::queryResourcePackageInstancesWithOptions(const QueryResourcePackageInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpiryTimeEnd()) {
    query["ExpiryTimeEnd"] = request.expiryTimeEnd();
  }

  if (!!request.hasExpiryTimeStart()) {
    query["ExpiryTimeStart"] = request.expiryTimeStart();
  }

  if (!!request.hasIncludePartner()) {
    query["IncludePartner"] = request.includePartner();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryResourcePackageInstances"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryResourcePackageInstancesResponse>();
}

/**
 * @summary Queries the instances of a resource plan. You can query the resource plans that are expired within one year.
 *
 * @param request QueryResourcePackageInstancesRequest
 * @return QueryResourcePackageInstancesResponse
 */
QueryResourcePackageInstancesResponse Client::queryResourcePackageInstances(const QueryResourcePackageInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryResourcePackageInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the deduction details of savings plans.
 *
 * @param request QuerySavingsPlansDeductLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySavingsPlansDeductLogResponse
 */
QuerySavingsPlansDeductLogResponse Client::querySavingsPlansDeductLogWithOptions(const QuerySavingsPlansDeductLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasLocale()) {
    query["Locale"] = request.locale();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySavingsPlansDeductLog"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySavingsPlansDeductLogResponse>();
}

/**
 * @summary Queries the deduction details of savings plans.
 *
 * @param request QuerySavingsPlansDeductLogRequest
 * @return QuerySavingsPlansDeductLogResponse
 */
QuerySavingsPlansDeductLogResponse Client::querySavingsPlansDeductLog(const QuerySavingsPlansDeductLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySavingsPlansDeductLogWithOptions(request, runtime);
}

/**
 * @summary Queries discounts on savings plans.
 *
 * @param request QuerySavingsPlansDiscountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySavingsPlansDiscountResponse
 */
QuerySavingsPlansDiscountResponse Client::querySavingsPlansDiscountWithOptions(const QuerySavingsPlansDiscountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySavingsPlansDiscount"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySavingsPlansDiscountResponse>();
}

/**
 * @summary Queries discounts on savings plans.
 *
 * @param request QuerySavingsPlansDiscountRequest
 * @return QuerySavingsPlansDiscountResponse
 */
QuerySavingsPlansDiscountResponse Client::querySavingsPlansDiscount(const QuerySavingsPlansDiscountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySavingsPlansDiscountWithOptions(request, runtime);
}

/**
 * @summary Queries the information about savings plan instances of the current user.
 *
 * @param request QuerySavingsPlansInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySavingsPlansInstanceResponse
 */
QuerySavingsPlansInstanceResponse Client::querySavingsPlansInstanceWithOptions(const QuerySavingsPlansInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.commodityCode();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLocale()) {
    query["Locale"] = request.locale();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySavingsPlansInstance"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySavingsPlansInstanceResponse>();
}

/**
 * @summary Queries the information about savings plan instances of the current user.
 *
 * @param request QuerySavingsPlansInstanceRequest
 * @return QuerySavingsPlansInstanceResponse
 */
QuerySavingsPlansInstanceResponse Client::querySavingsPlansInstance(const QuerySavingsPlansInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySavingsPlansInstanceWithOptions(request, runtime);
}

/**
 * @summary The code of the service.
 *
 * @param request QuerySettleBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySettleBillResponse
 */
QuerySettleBillResponse Client::querySettleBillWithOptions(const QuerySettleBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasIsDisplayLocalCurrency()) {
    query["IsDisplayLocalCurrency"] = request.isDisplayLocalCurrency();
  }

  if (!!request.hasIsHideZeroCharge()) {
    query["IsHideZeroCharge"] = request.isHideZeroCharge();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRecordID()) {
    query["RecordID"] = request.recordID();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySettleBill"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySettleBillResponse>();
}

/**
 * @summary The code of the service.
 *
 * @param request QuerySettleBillRequest
 * @return QuerySettleBillResponse
 */
QuerySettleBillResponse Client::querySettleBill(const QuerySettleBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySettleBillWithOptions(request, runtime);
}

/**
 * @summary Queries the stock keeping units (SKUs) of a service. In most cases, a service has one or more SKUs. A service may even have tens of thousands of SKUs. You can call this operation to query the SKUs of a specific service and the prices of the SKUs. You can configure request parameters to query the specified SKUs based on the configurations of the SKUs.
 *
 * @param tmpReq QuerySkuPriceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySkuPriceListResponse
 */
QuerySkuPriceListResponse Client::querySkuPriceListWithOptions(const QuerySkuPriceListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QuerySkuPriceListShrinkRequest request = QuerySkuPriceListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPriceFactorConditionMap()) {
    request.setPriceFactorConditionMapShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.priceFactorConditionMap(), "PriceFactorConditionMap", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySkuPriceList"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySkuPriceListResponse>();
}

/**
 * @summary Queries the stock keeping units (SKUs) of a service. In most cases, a service has one or more SKUs. A service may even have tens of thousands of SKUs. You can call this operation to query the SKUs of a specific service and the prices of the SKUs. You can configure request parameters to query the specified SKUs based on the configurations of the SKUs.
 *
 * @param request QuerySkuPriceListRequest
 * @return QuerySkuPriceListResponse
 */
QuerySkuPriceListResponse Client::querySkuPriceList(const QuerySkuPriceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySkuPriceListWithOptions(request, runtime);
}

/**
 * @summary Queries split bills.
 *
 * @description *   This API operation has been upgraded to DescribeSplitItemBill. We recommend that you call the [DescribeSplitItemBill](https://help.aliyun.com/document_detail/208169.html) operation to query split bills. You can call the QuerySplitItemBill operation to query a maximum of 50,000 data rows in a bill.
 * *   The data queried by calling the QuerySplitItemBill operation is consistent with the data that is displayed for the specified billing cycle on the Split Bill page in User Center.
 * *   You can call this operation to query split bills generated within the last 12 months.
 * *   This operation returns split bills only after you activate the [Split Bill](https://usercenter2.aliyun.com/finance/split-bill) service in User Center.
 *
 * @param request QuerySplitItemBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySplitItemBillResponse
 */
QuerySplitItemBillResponse Client::querySplitItemBillWithOptions(const QuerySplitItemBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.billOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySplitItemBill"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySplitItemBillResponse>();
}

/**
 * @summary Queries split bills.
 *
 * @description *   This API operation has been upgraded to DescribeSplitItemBill. We recommend that you call the [DescribeSplitItemBill](https://help.aliyun.com/document_detail/208169.html) operation to query split bills. You can call the QuerySplitItemBill operation to query a maximum of 50,000 data rows in a bill.
 * *   The data queried by calling the QuerySplitItemBill operation is consistent with the data that is displayed for the specified billing cycle on the Split Bill page in User Center.
 * *   You can call this operation to query split bills generated within the last 12 months.
 * *   This operation returns split bills only after you activate the [Split Bill](https://usercenter2.aliyun.com/finance/split-bill) service in User Center.
 *
 * @param request QuerySplitItemBillRequest
 * @return QuerySplitItemBillResponse
 */
QuerySplitItemBillResponse Client::querySplitItemBill(const QuerySplitItemBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySplitItemBillWithOptions(request, runtime);
}

/**
 * @summary Queries the usage data of an Alibaba Cloud service.
 *
 * @description You can call this operation to query the usage data of an Alibaba Cloud service. Take note of the following items:
 * *   The service code that you specify for querying the usage data of a specific Alibaba Cloud service must be valid. You can query the usage data by hour or by day.
 * *   The time that you specify must follow the ISO8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
 *     *   Latency exists in data pushes. Therefore, if you set the DataType parameter to Hour, the integrity of usage data recorded in the last 24 hours can be ensured. If you set the DataType parameter to Day, the integrity of usage data recorded in the last two days can be ensured.
 *     *   You can query the usage data that is recorded in the last quarter.
 *
 * @param request QueryUserOmsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUserOmsDataResponse
 */
QueryUserOmsDataResponse Client::queryUserOmsDataWithOptions(const QueryUserOmsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataType()) {
    query["DataType"] = request.dataType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasMarker()) {
    query["Marker"] = request.marker();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTable()) {
    query["Table"] = request.table();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUserOmsData"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUserOmsDataResponse>();
}

/**
 * @summary Queries the usage data of an Alibaba Cloud service.
 *
 * @description You can call this operation to query the usage data of an Alibaba Cloud service. Take note of the following items:
 * *   The service code that you specify for querying the usage data of a specific Alibaba Cloud service must be valid. You can query the usage data by hour or by day.
 * *   The time that you specify must follow the ISO8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
 *     *   Latency exists in data pushes. Therefore, if you set the DataType parameter to Hour, the integrity of usage data recorded in the last 24 hours can be ensured. If you set the DataType parameter to Day, the integrity of usage data recorded in the last two days can be ensured.
 *     *   You can query the usage data that is recorded in the last quarter.
 *
 * @param request QueryUserOmsDataRequest
 * @return QueryUserOmsDataResponse
 */
QueryUserOmsDataResponse Client::queryUserOmsData(const QueryUserOmsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUserOmsDataWithOptions(request, runtime);
}

/**
 * @summary Unsubscribes from an instance that is no longer needed.
 *
 * @description 1.  Refunds are applicable only for the actual paid amount. Vouchers used for the purchase are non-refundable.
 * 2.  Check the information about unsubscription and confirm the unsubscription terms and refundable amount. The resource that is unsubscribed cannot be restored.
 * 3.  For more information, see [Rules for unsubscribing from resources](https://www.alibabacloud.com/help/en/user-center/refund-rules).
 *
 * @param request RefundInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefundInstanceResponse
 */
RefundInstanceResponse Client::refundInstanceWithOptions(const RefundInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasImmediatelyRelease()) {
    query["ImmediatelyRelease"] = request.immediatelyRelease();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefundInstance"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefundInstanceResponse>();
}

/**
 * @summary Unsubscribes from an instance that is no longer needed.
 *
 * @description 1.  Refunds are applicable only for the actual paid amount. Vouchers used for the purchase are non-refundable.
 * 2.  Check the information about unsubscription and confirm the unsubscription terms and refundable amount. The resource that is unsubscribed cannot be restored.
 * 3.  For more information, see [Rules for unsubscribing from resources](https://www.alibabacloud.com/help/en/user-center/refund-rules).
 *
 * @param request RefundInstanceRequest
 * @return RefundInstanceResponse
 */
RefundInstanceResponse Client::refundInstance(const RefundInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refundInstanceWithOptions(request, runtime);
}

/**
 * @summary Releases instances by Virtual Network Operators (VNOs).
 *
 * @description This operation is provided for only VNOs to release instances. If a non-specific VNO calls this operation, the request is blocked.
 *
 * @param request ReleaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstanceWithOptions(const ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasRenewStatus()) {
    query["RenewStatus"] = request.renewStatus();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstance"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseInstanceResponse>();
}

/**
 * @summary Releases instances by Virtual Network Operators (VNOs).
 *
 * @description This operation is provided for only VNOs to release instances. If a non-specific VNO calls this operation, the request is blocked.
 *
 * @param request ReleaseInstanceRequest
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstance(const ReleaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstanceWithOptions(request, runtime);
}

/**
 * @summary Terminates a financial relationship between the management account and a member.
 *
 * @param request RelieveAccountRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RelieveAccountRelationResponse
 */
RelieveAccountRelationResponse Client::relieveAccountRelationWithOptions(const RelieveAccountRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChildUserId()) {
    query["ChildUserId"] = request.childUserId();
  }

  if (!!request.hasParentUserId()) {
    query["ParentUserId"] = request.parentUserId();
  }

  if (!!request.hasRelationId()) {
    query["RelationId"] = request.relationId();
  }

  if (!!request.hasRelationType()) {
    query["RelationType"] = request.relationType();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.requestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RelieveAccountRelation"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RelieveAccountRelationResponse>();
}

/**
 * @summary Terminates a financial relationship between the management account and a member.
 *
 * @param request RelieveAccountRelationRequest
 * @return RelieveAccountRelationResponse
 */
RelieveAccountRelationResponse Client::relieveAccountRelation(const RelieveAccountRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return relieveAccountRelationWithOptions(request, runtime);
}

/**
 * @summary 续费变配接口
 *
 * @param request RenewChangeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewChangeInstanceResponse
 */
RenewChangeInstanceResponse Client::renewChangeInstanceWithOptions(const RenewChangeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParameter()) {
    query["Parameter"] = request.parameter();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRenewPeriod()) {
    query["RenewPeriod"] = request.renewPeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewChangeInstance"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewChangeInstanceResponse>();
}

/**
 * @summary 续费变配接口
 *
 * @param request RenewChangeInstanceRequest
 * @return RenewChangeInstanceResponse
 */
RenewChangeInstanceResponse Client::renewChangeInstance(const RenewChangeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewChangeInstanceWithOptions(request, runtime);
}

/**
 * @summary Renews a specified instance. You cannot call this operation to renew Elastic Compute Service (ECS) instances, ApsaraDB RDS instances, or ApsaraDB for Redis instances. To renew these types of instances, call the dedicated operation of the corresponding service.
 *
 * @param request RenewInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstanceWithOptions(const RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRenewPeriod()) {
    query["RenewPeriod"] = request.renewPeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewInstance"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewInstanceResponse>();
}

/**
 * @summary Renews a specified instance. You cannot call this operation to renew Elastic Compute Service (ECS) instances, ApsaraDB RDS instances, or ApsaraDB for Redis instances. To renew these types of instances, call the dedicated operation of the corresponding service.
 *
 * @param request RenewInstanceRequest
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstance(const RenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewInstanceWithOptions(request, runtime);
}

/**
 * @summary Renews a resource plan.
 *
 * @param request RenewResourcePackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewResourcePackageResponse
 */
RenewResourcePackageResponse Client::renewResourcePackageWithOptions(const RenewResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasEffectiveDate()) {
    query["EffectiveDate"] = request.effectiveDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.pricingCycle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewResourcePackage"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewResourcePackageResponse>();
}

/**
 * @summary Renews a resource plan.
 *
 * @param request RenewResourcePackageRequest
 * @return RenewResourcePackageResponse
 */
RenewResourcePackageResponse Client::renewResourcePackage(const RenewResourcePackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewResourcePackageWithOptions(request, runtime);
}

/**
 * @summary Sets an expiration date for all Elastic Compute Service (ECS) instances.
 *
 * @param request SetAllExpirationDayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAllExpirationDayResponse
 */
SetAllExpirationDayResponse Client::setAllExpirationDayWithOptions(const SetAllExpirationDayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasUnifyExpireDay()) {
    query["UnifyExpireDay"] = request.unifyExpireDay();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAllExpirationDay"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAllExpirationDayResponse>();
}

/**
 * @summary Sets an expiration date for all Elastic Compute Service (ECS) instances.
 *
 * @param request SetAllExpirationDayRequest
 * @return SetAllExpirationDayResponse
 */
SetAllExpirationDayResponse Client::setAllExpirationDay(const SetAllExpirationDayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAllExpirationDayWithOptions(request, runtime);
}

/**
 * @summary Enables auto-renewal for an instance.
 *
 * @param request SetRenewalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetRenewalResponse
 */
SetRenewalResponse Client::setRenewalWithOptions(const SetRenewalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIDs()) {
    query["InstanceIDs"] = request.instanceIDs();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasRenewalPeriod()) {
    query["RenewalPeriod"] = request.renewalPeriod();
  }

  if (!!request.hasRenewalPeriodUnit()) {
    query["RenewalPeriodUnit"] = request.renewalPeriodUnit();
  }

  if (!!request.hasRenewalStatus()) {
    query["RenewalStatus"] = request.renewalStatus();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.subscriptionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetRenewal"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetRenewalResponse>();
}

/**
 * @summary Enables auto-renewal for an instance.
 *
 * @param request SetRenewalRequest
 * @return SetRenewalResponse
 */
SetRenewalResponse Client::setRenewal(const SetRenewalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setRenewalWithOptions(request, runtime);
}

/**
 * @param request SetResellerUserAlarmThresholdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetResellerUserAlarmThresholdResponse
 */
SetResellerUserAlarmThresholdResponse Client::setResellerUserAlarmThresholdWithOptions(const SetResellerUserAlarmThresholdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmThresholds()) {
    query["AlarmThresholds"] = request.alarmThresholds();
  }

  if (!!request.hasAlarmType()) {
    query["AlarmType"] = request.alarmType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetResellerUserAlarmThreshold"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetResellerUserAlarmThresholdResponse>();
}

/**
 * @param request SetResellerUserAlarmThresholdRequest
 * @return SetResellerUserAlarmThresholdResponse
 */
SetResellerUserAlarmThresholdResponse Client::setResellerUserAlarmThreshold(const SetResellerUserAlarmThresholdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setResellerUserAlarmThresholdWithOptions(request, runtime);
}

/**
 * @summary Modify the quota ledger and consumption ledger.
 *
 * @param request SetResellerUserQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetResellerUserQuotaResponse
 */
SetResellerUserQuotaResponse Client::setResellerUserQuotaWithOptions(const SetResellerUserQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.amount();
  }

  if (!!request.hasCurrency()) {
    query["Currency"] = request.currency();
  }

  if (!!request.hasOutBizId()) {
    query["OutBizId"] = request.outBizId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetResellerUserQuota"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetResellerUserQuotaResponse>();
}

/**
 * @summary Modify the quota ledger and consumption ledger.
 *
 * @param request SetResellerUserQuotaRequest
 * @return SetResellerUserQuotaResponse
 */
SetResellerUserQuotaResponse Client::setResellerUserQuota(const SetResellerUserQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setResellerUserQuotaWithOptions(request, runtime);
}

/**
 * @param request SetResellerUserStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetResellerUserStatusResponse
 */
SetResellerUserStatusResponse Client::setResellerUserStatusWithOptions(const SetResellerUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.businessType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasStopMode()) {
    query["StopMode"] = request.stopMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetResellerUserStatus"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetResellerUserStatusResponse>();
}

/**
 * @param request SetResellerUserStatusRequest
 * @return SetResellerUserStatusResponse
 */
SetResellerUserStatusResponse Client::setResellerUserStatus(const SetResellerUserStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setResellerUserStatusWithOptions(request, runtime);
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
    request.setEcIdAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ecIdAccountIds(), "EcIdAccountIds", "json"));
  }

  if (!!tmpReq.hasUserDeductRules()) {
    request.setUserDeductRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userDeductRules(), "UserDeductRules", "json"));
  }

  json query = {};
  if (!!request.hasEcIdAccountIdsShrink()) {
    query["EcIdAccountIds"] = request.ecIdAccountIdsShrink();
  }

  if (!!request.hasNbid()) {
    query["Nbid"] = request.nbid();
  }

  json body = {};
  if (!!request.hasSpnInstanceCode()) {
    body["SpnInstanceCode"] = request.spnInstanceCode();
  }

  if (!!request.hasUserDeductRulesShrink()) {
    body["UserDeductRules"] = request.userDeductRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetSavingPlanUserDeductRule"},
    {"version" , "2017-12-14"},
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

/**
 * @summary Subscribes to the bills that are stored in Object Storage Service (OSS) buckets.
 *
 * @description Before you call this operation, take note of the following items:
 * *   You can subscribe to only one type of bill at a time.
 * *   The bills generated on the previous day are pushed on a daily basis the next day after you subscribe to the bills. The full-data bills for the previous month are pushed on the fourth day of each month. The monthly bills in the PDF format for the previous month are pushed on the fourth day of each month.
 * *   The daily bills may be delayed. The delayed bills are pushed the next day after they are generated. The delayed bills may include the bills that should have been pushed on the previous day. We recommend that you query the full-data bills for the previous month at the beginning of each month.
 * *   The bill subscriber must have the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission.
 * *   The SubscribeBillToOSS operation has the same functionality as the Save Expense Details to OSS Bucket feature in User Center.
 * *   To subscribe to the bills stored in an OSS bucket, make sure that the directory name specified for the OSS bucket conforms to the following naming rules:
 * 1.  1.  The directory name can contain only UTF-8 characters and cannot contain emoticons.
 * 2.  2.  Forward slashes (/) are used to separate paths and can be used to create subdirectories with ease. The directory name cannot start with a forward slash (/), a backslash (\\\\), or consecutive forward slashes (/).
 * 3.  3.  The name of a subdirectory cannot be set to two consecutive periods (..).
 * 4.  4.  The directory name must be 1 to 254 characters in length.
 * *   File names:
 *     *   **BillingItemDetailForBillingPeriod** (Detailed bills of billable items)
 *         *   File name format for a daily push: `UID_BillingItemDetail_YYYYMMDD`. Example: `169**_BillingItemDetail_20190310`.
 *         *   File name format for a full-data push at the beginning of the next month: `UID_BillingItemDetail_YYYYMM`. Example: `169**_BillingItemDetail_201903`.
 *     *   **InstanceDetailForBillingPeriod** (Detailed bills of instances)
 *         *   File name format for a daily push: `UID_InstanceDetail_YYYYMMDD`. Example: `169**_InstanceDetail_20190310`.
 *         *   File name format for a full-data push at the beginning of the next month: `UID_InstanceDetail_YYYYMM`. Example: `169**_InstanceDetail_201903`.
 *     *   **InstanceDetailMonthly** (Instance-based bills summarized by billing cycle)
 *         *   File name format for a daily push: `UID_InstanceDetailMonthly_YYYYMM`. Example: `169**_InstanceDetailMonthly_201903`. A bill of this type contains the full data generated from the beginning of the month to the current day, and is updated every day until the fourth day of the next month.
 *     *   **BillingItemDetailMonthly** (Billable item-based bills summarized by billing cycle)
 *         *   File name format for a daily push: `UID_BillingItemDetailMonthly_YYYYMM`. Example: `169**_BillingItemDetailMonthly_201903`. A bill of this type contains the full data generated from the beginning of the month to the current day, and is updated every day until the fourth day of the next month.
 *     *   **SplitItemDetailDaily** (Split bills summarized by day)
 *         *   File name format for a daily push: `UID_SplitItemDetailDaily_YYYYMM`. Example: `169**_SplitItemDetailDaily_201903`. A bill of this type contains the full data generated from the beginning of the month to the current day, and is updated every day until the fourth day of the next month.
 *     *   **MonthBill** (Monthly bill in the PDF format)
 *         *   File name format for a monthly push: `UID_MonthBill_YYYYMM`. Example: `169**_MonthBill_201903`. The bill for the previous month is pushed on the fourth day of each month.
 * *   The bills of the MonthBill type are PDF files, whereas the bills of other types are CSV files. If the number of data rows in a bill exceeds a threshold, the bill is automatically split into multiple CSV files. Then, the multiple CSV files are automatically merged and compressed into a ZIP file that has the same name format as the original file.
 *
 * @param request SubscribeBillToOSSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubscribeBillToOSSResponse
 */
SubscribeBillToOSSResponse Client::subscribeBillToOSSWithOptions(const SubscribeBillToOSSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginBillingCycle()) {
    query["BeginBillingCycle"] = request.beginBillingCycle();
  }

  if (!!request.hasBucketOwnerId()) {
    query["BucketOwnerId"] = request.bucketOwnerId();
  }

  if (!!request.hasBucketPath()) {
    query["BucketPath"] = request.bucketPath();
  }

  if (!!request.hasMultAccountRelSubscribe()) {
    query["MultAccountRelSubscribe"] = request.multAccountRelSubscribe();
  }

  if (!!request.hasRowLimitPerFile()) {
    query["RowLimitPerFile"] = request.rowLimitPerFile();
  }

  if (!!request.hasSubscribeBucket()) {
    query["SubscribeBucket"] = request.subscribeBucket();
  }

  if (!!request.hasSubscribeType()) {
    query["SubscribeType"] = request.subscribeType();
  }

  if (!!request.hasUsingSsl()) {
    query["UsingSsl"] = request.usingSsl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubscribeBillToOSS"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubscribeBillToOSSResponse>();
}

/**
 * @summary Subscribes to the bills that are stored in Object Storage Service (OSS) buckets.
 *
 * @description Before you call this operation, take note of the following items:
 * *   You can subscribe to only one type of bill at a time.
 * *   The bills generated on the previous day are pushed on a daily basis the next day after you subscribe to the bills. The full-data bills for the previous month are pushed on the fourth day of each month. The monthly bills in the PDF format for the previous month are pushed on the fourth day of each month.
 * *   The daily bills may be delayed. The delayed bills are pushed the next day after they are generated. The delayed bills may include the bills that should have been pushed on the previous day. We recommend that you query the full-data bills for the previous month at the beginning of each month.
 * *   The bill subscriber must have the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission.
 * *   The SubscribeBillToOSS operation has the same functionality as the Save Expense Details to OSS Bucket feature in User Center.
 * *   To subscribe to the bills stored in an OSS bucket, make sure that the directory name specified for the OSS bucket conforms to the following naming rules:
 * 1.  1.  The directory name can contain only UTF-8 characters and cannot contain emoticons.
 * 2.  2.  Forward slashes (/) are used to separate paths and can be used to create subdirectories with ease. The directory name cannot start with a forward slash (/), a backslash (\\\\), or consecutive forward slashes (/).
 * 3.  3.  The name of a subdirectory cannot be set to two consecutive periods (..).
 * 4.  4.  The directory name must be 1 to 254 characters in length.
 * *   File names:
 *     *   **BillingItemDetailForBillingPeriod** (Detailed bills of billable items)
 *         *   File name format for a daily push: `UID_BillingItemDetail_YYYYMMDD`. Example: `169**_BillingItemDetail_20190310`.
 *         *   File name format for a full-data push at the beginning of the next month: `UID_BillingItemDetail_YYYYMM`. Example: `169**_BillingItemDetail_201903`.
 *     *   **InstanceDetailForBillingPeriod** (Detailed bills of instances)
 *         *   File name format for a daily push: `UID_InstanceDetail_YYYYMMDD`. Example: `169**_InstanceDetail_20190310`.
 *         *   File name format for a full-data push at the beginning of the next month: `UID_InstanceDetail_YYYYMM`. Example: `169**_InstanceDetail_201903`.
 *     *   **InstanceDetailMonthly** (Instance-based bills summarized by billing cycle)
 *         *   File name format for a daily push: `UID_InstanceDetailMonthly_YYYYMM`. Example: `169**_InstanceDetailMonthly_201903`. A bill of this type contains the full data generated from the beginning of the month to the current day, and is updated every day until the fourth day of the next month.
 *     *   **BillingItemDetailMonthly** (Billable item-based bills summarized by billing cycle)
 *         *   File name format for a daily push: `UID_BillingItemDetailMonthly_YYYYMM`. Example: `169**_BillingItemDetailMonthly_201903`. A bill of this type contains the full data generated from the beginning of the month to the current day, and is updated every day until the fourth day of the next month.
 *     *   **SplitItemDetailDaily** (Split bills summarized by day)
 *         *   File name format for a daily push: `UID_SplitItemDetailDaily_YYYYMM`. Example: `169**_SplitItemDetailDaily_201903`. A bill of this type contains the full data generated from the beginning of the month to the current day, and is updated every day until the fourth day of the next month.
 *     *   **MonthBill** (Monthly bill in the PDF format)
 *         *   File name format for a monthly push: `UID_MonthBill_YYYYMM`. Example: `169**_MonthBill_201903`. The bill for the previous month is pushed on the fourth day of each month.
 * *   The bills of the MonthBill type are PDF files, whereas the bills of other types are CSV files. If the number of data rows in a bill exceeds a threshold, the bill is automatically split into multiple CSV files. Then, the multiple CSV files are automatically merged and compressed into a ZIP file that has the same name format as the original file.
 *
 * @param request SubscribeBillToOSSRequest
 * @return SubscribeBillToOSSResponse
 */
SubscribeBillToOSSResponse Client::subscribeBillToOSS(const SubscribeBillToOSSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return subscribeBillToOSSWithOptions(request, runtime);
}

/**
 * @summary Add tags to resources.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Add tags to resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Unsubscribes from the bills that are stored in Object Storage Service (OSS) buckets.
 *
 * @param request UnsubscribeBillToOSSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnsubscribeBillToOSSResponse
 */
UnsubscribeBillToOSSResponse Client::unsubscribeBillToOSSWithOptions(const UnsubscribeBillToOSSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMultAccountRelSubscribe()) {
    query["MultAccountRelSubscribe"] = request.multAccountRelSubscribe();
  }

  if (!!request.hasSubscribeType()) {
    query["SubscribeType"] = request.subscribeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnsubscribeBillToOSS"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnsubscribeBillToOSSResponse>();
}

/**
 * @summary Unsubscribes from the bills that are stored in Object Storage Service (OSS) buckets.
 *
 * @param request UnsubscribeBillToOSSRequest
 * @return UnsubscribeBillToOSSResponse
 */
UnsubscribeBillToOSSResponse Client::unsubscribeBillToOSS(const UnsubscribeBillToOSSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unsubscribeBillToOSSWithOptions(request, runtime);
}

/**
 * @summary Removes tags from resources.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes tags from resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Upgrades a resource plan.
 *
 * @param request UpgradeResourcePackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeResourcePackageResponse
 */
UpgradeResourcePackageResponse Client::upgradeResourcePackageWithOptions(const UpgradeResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveDate()) {
    query["EffectiveDate"] = request.effectiveDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.specification();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeResourcePackage"},
    {"version" , "2017-12-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeResourcePackageResponse>();
}

/**
 * @summary Upgrades a resource plan.
 *
 * @param request UpgradeResourcePackageRequest
 * @return UpgradeResourcePackageResponse
 */
UpgradeResourcePackageResponse Client::upgradeResourcePackage(const UpgradeResourcePackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeResourcePackageWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214