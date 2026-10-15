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
    query["ChildNick"] = request.getChildNick();
  }

  if (!!request.hasChildUserId()) {
    query["ChildUserId"] = request.getChildUserId();
  }

  if (!!request.hasParentUserId()) {
    query["ParentUserId"] = request.getParentUserId();
  }

  if (!!request.hasPermissionCodes()) {
    query["PermissionCodes"] = request.getPermissionCodes();
  }

  if (!!request.hasRelationType()) {
    query["RelationType"] = request.getRelationType();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  if (!!request.hasRoleCodes()) {
    query["RoleCodes"] = request.getRoleCodes();
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
 * @summary Allocates resource instances (instance-based and attached-resource-based) from a source financial unit to a destination financial unit.
 *
 * @param request AllocateCostUnitResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateCostUnitResourceResponse
 */
AllocateCostUnitResourceResponse Client::allocateCostUnitResourceWithOptions(const AllocateCostUnitResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFromUnitId()) {
    query["FromUnitId"] = request.getFromUnitId();
  }

  if (!!request.hasFromUnitUserId()) {
    query["FromUnitUserId"] = request.getFromUnitUserId();
  }

  if (!!request.hasResourceInstanceList()) {
    query["ResourceInstanceList"] = request.getResourceInstanceList();
  }

  if (!!request.hasToUnitId()) {
    query["ToUnitId"] = request.getToUnitId();
  }

  if (!!request.hasToUnitUserId()) {
    query["ToUnitUserId"] = request.getToUnitUserId();
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
 * @summary Allocates resource instances (instance-based and attached-resource-based) from a source financial unit to a destination financial unit.
 *
 * @param request AllocateCostUnitResourceRequest
 * @return AllocateCostUnitResourceResponse
 */
AllocateCostUnitResourceResponse Client::allocateCostUnitResource(const AllocateCostUnitResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateCostUnitResourceWithOptions(request, runtime);
}

/**
 * @summary Submits an invoice application.
 *
 * @param request ApplyInvoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyInvoiceResponse
 */
ApplyInvoiceResponse Client::applyInvoiceWithOptions(const ApplyInvoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressId()) {
    query["AddressId"] = request.getAddressId();
  }

  if (!!request.hasApplyUserNick()) {
    query["ApplyUserNick"] = request.getApplyUserNick();
  }

  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.getCustomerId();
  }

  if (!!request.hasInvoiceAmount()) {
    query["InvoiceAmount"] = request.getInvoiceAmount();
  }

  if (!!request.hasInvoiceByAmount()) {
    query["InvoiceByAmount"] = request.getInvoiceByAmount();
  }

  if (!!request.hasInvoicingType()) {
    query["InvoicingType"] = request.getInvoicingType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProcessWay()) {
    query["ProcessWay"] = request.getProcessWay();
  }

  if (!!request.hasSelectedIds()) {
    query["SelectedIds"] = request.getSelectedIds();
  }

  if (!!request.hasUserRemark()) {
    query["UserRemark"] = request.getUserRemark();
  }

  if (!!request.hasEmails()) {
    query["emails"] = request.getEmails();
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
 * @summary Submits an invoice application.
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
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Deducts user quota consumption.
 *
 * @description Deducts user quota consumption.
 *
 * @param request ChangeResellerConsumeAmountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResellerConsumeAmountResponse
 */
ChangeResellerConsumeAmountResponse Client::changeResellerConsumeAmountWithOptions(const ChangeResellerConsumeAmountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdjustType()) {
    query["AdjustType"] = request.getAdjustType();
  }

  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasCurrency()) {
    query["Currency"] = request.getCurrency();
  }

  if (!!request.hasExtendMap()) {
    query["ExtendMap"] = request.getExtendMap();
  }

  if (!!request.hasOutBizId()) {
    query["OutBizId"] = request.getOutBizId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
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
 * @summary Deducts user quota consumption.
 *
 * @description Deducts user quota consumption.
 *
 * @param request ChangeResellerConsumeAmountRequest
 * @return ChangeResellerConsumeAmountResponse
 */
ChangeResellerConsumeAmountResponse Client::changeResellerConsumeAmount(const ChangeResellerConsumeAmountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResellerConsumeAmountWithOptions(request, runtime);
}

/**
 * @summary Confirms an invitation initiated by the main account for a linked account.
 *
 * @description 1. Currently, only financial management linking is supported. The linked account needs to confirm the invitation only when the real-name verification information of the main account and the linked account is inconsistent.
 * 2. The permissions to be confirmed must be exactly the same as the permissions specified in the invitation initiated by the main account for the confirmation to succeed.
 *
 * @param request ConfirmRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmRelationResponse
 */
ConfirmRelationResponse Client::confirmRelationWithOptions(const ConfirmRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChildUserId()) {
    query["ChildUserId"] = request.getChildUserId();
  }

  if (!!request.hasConfirmCode()) {
    query["ConfirmCode"] = request.getConfirmCode();
  }

  if (!!request.hasParentUserId()) {
    query["ParentUserId"] = request.getParentUserId();
  }

  if (!!request.hasPermissionCodes()) {
    query["PermissionCodes"] = request.getPermissionCodes();
  }

  if (!!request.hasRelationId()) {
    query["RelationId"] = request.getRelationId();
  }

  if (!!request.hasRelationType()) {
    query["RelationType"] = request.getRelationType();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
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
 * @summary Confirms an invitation initiated by the main account for a linked account.
 *
 * @description 1. Currently, only financial management linking is supported. The linked account needs to confirm the invitation only when the real-name verification information of the main account and the linked account is inconsistent.
 * 2. The permissions to be confirmed must be exactly the same as the permissions specified in the invitation initiated by the main account for the confirmation to succeed.
 *
 * @param request ConfirmRelationRequest
 * @return ConfirmRelationResponse
 */
ConfirmRelationResponse Client::confirmRelation(const ConfirmRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return confirmRelationWithOptions(request, runtime);
}

/**
 * @summary Changes the subscription type for an instance. Currently, this operation supports converting pay-as-you-go instances of SLB, EIP, and NAT Gateway to subscription instances, and converting subscription instances of SLB and EIP to pay-as-you-go instances.
 *
 * @param request ConvertChargeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertChargeTypeResponse
 */
ConvertChargeTypeResponse Client::convertChargeTypeWithOptions(const ConvertChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
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
 * @summary Changes the subscription type for an instance. Currently, this operation supports converting pay-as-you-go instances of SLB, EIP, and NAT Gateway to subscription instances, and converting subscription instances of SLB and EIP to pay-as-you-go instances.
 *
 * @param request ConvertChargeTypeRequest
 * @return ConvertChargeTypeResponse
 */
ConvertChargeTypeResponse Client::convertChargeType(const ConvertChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertChargeTypeWithOptions(request, runtime);
}

/**
 * @summary Creates an account linking relationship.
 *
 * @description Creates a master-member relationship for financial management.
 *
 * @param request CreateAgAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgAccountResponse
 */
CreateAgAccountResponse Client::createAgAccountWithOptions(const CreateAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountAttr()) {
    query["AccountAttr"] = request.getAccountAttr();
  }

  if (!!request.hasCityName()) {
    query["CityName"] = request.getCityName();
  }

  if (!!request.hasEnterpriseName()) {
    query["EnterpriseName"] = request.getEnterpriseName();
  }

  if (!!request.hasFirstName()) {
    query["FirstName"] = request.getFirstName();
  }

  if (!!request.hasLastName()) {
    query["LastName"] = request.getLastName();
  }

  if (!!request.hasLoginEmail()) {
    query["LoginEmail"] = request.getLoginEmail();
  }

  if (!!request.hasNationCode()) {
    query["NationCode"] = request.getNationCode();
  }

  if (!!request.hasPostcode()) {
    query["Postcode"] = request.getPostcode();
  }

  if (!!request.hasProvinceName()) {
    query["ProvinceName"] = request.getProvinceName();
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
 * @summary Creates an account linking relationship.
 *
 * @description Creates a master-member relationship for financial management.
 *
 * @param request CreateAgAccountRequest
 * @return CreateAgAccountResponse
 */
CreateAgAccountResponse Client::createAgAccount(const CreateAgAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgAccountWithOptions(request, runtime);
}

/**
 * @summary Creates financial units. Batch creation is supported.
 *
 * @param request CreateCostUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCostUnitResponse
 */
CreateCostUnitResponse Client::createCostUnitWithOptions(const CreateCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUnitEntityList()) {
    query["UnitEntityList"] = request.getUnitEntityList();
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
 * @summary Creates financial units. Batch creation is supported.
 *
 * @param request CreateCostUnitRequest
 * @return CreateCostUnitResponse
 */
CreateCostUnitResponse Client::createCostUnit(const CreateCostUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCostUnitWithOptions(request, runtime);
}

/**
 * @summary Creates an instance resource. This operation creates an order for a new instance resource and completes automatic payment. ECS and RDS product series are not supported.
 *
 * @param request CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLogistics()) {
    query["Logistics"] = request.getLogistics();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameter()) {
    query["Parameter"] = request.getParameter();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRenewPeriod()) {
    query["RenewPeriod"] = request.getRenewPeriod();
  }

  if (!!request.hasRenewalStatus()) {
    query["RenewalStatus"] = request.getRenewalStatus();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.getSubscriptionType();
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
 * @summary Creates an instance resource. This operation creates an order for a new instance resource and completes automatic payment. ECS and RDS product series are not supported.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a user quota ledger and a quota consumption ledger.
 *
 * @param request CreateResellerUserQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResellerUserQuotaResponse
 */
CreateResellerUserQuotaResponse Client::createResellerUserQuotaWithOptions(const CreateResellerUserQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasCurrency()) {
    query["Currency"] = request.getCurrency();
  }

  if (!!request.hasOutBizId()) {
    query["OutBizId"] = request.getOutBizId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Creates a user quota ledger and a quota consumption ledger.
 *
 * @param request CreateResellerUserQuotaRequest
 * @return CreateResellerUserQuotaResponse
 */
CreateResellerUserQuotaResponse Client::createResellerUserQuota(const CreateResellerUserQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResellerUserQuotaWithOptions(request, runtime);
}

/**
 * @summary 创建资源包
 *
 * @param request CreateResourcePackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourcePackageResponse
 */
CreateResourcePackageResponse Client::createResourcePackageWithOptions(const CreateResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasEffectiveDate()) {
    query["EffectiveDate"] = request.getEffectiveDate();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPackageType()) {
    query["PackageType"] = request.getPackageType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.getSpecification();
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
 * @summary 创建资源包
 *
 * @param request CreateResourcePackageRequest
 * @return CreateResourcePackageResponse
 */
CreateResourcePackageResponse Client::createResourcePackage(const CreateResourcePackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResourcePackageWithOptions(request, runtime);
}

/**
 * @summary 创建节省计划实例
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
    request.setExtendMapShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtendMap(), "ExtendMap", "json"));
  }

  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasEffectiveDate()) {
    query["EffectiveDate"] = request.getEffectiveDate();
  }

  if (!!request.hasExtendMapShrink()) {
    query["ExtendMap"] = request.getExtendMapShrink();
  }

  if (!!request.hasPayMode()) {
    query["PayMode"] = request.getPayMode();
  }

  if (!!request.hasPoolValue()) {
    query["PoolValue"] = request.getPoolValue();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSpecType()) {
    query["SpecType"] = request.getSpecType();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.getSpecification();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary 创建节省计划实例
 *
 * @param request CreateSavingsPlansInstanceRequest
 * @return CreateSavingsPlansInstanceResponse
 */
CreateSavingsPlansInstanceResponse Client::createSavingsPlansInstance(const CreateSavingsPlansInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSavingsPlansInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a financial unit.
 *
 * @param request DeleteCostUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCostUnitResponse
 */
DeleteCostUnitResponse Client::deleteCostUnitWithOptions(const DeleteCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerUid()) {
    query["OwnerUid"] = request.getOwnerUid();
  }

  if (!!request.hasUnitId()) {
    query["UnitId"] = request.getUnitId();
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
 * @summary Deletes a financial unit.
 *
 * @param request DeleteCostUnitRequest
 * @return DeleteCostUnitResponse
 */
DeleteCostUnitResponse Client::deleteCostUnit(const DeleteCostUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCostUnitWithOptions(request, runtime);
}

/**
 * @summary Queries a summary of cost budgets.
 *
 * @description This OpenAPI is in beta and available only to whitelisted users. Excessive calls may cause performance issues, such as response timeouts.
 *
 * @param request DescribeCostBudgetsSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCostBudgetsSummaryResponse
 */
DescribeCostBudgetsSummaryResponse Client::describeCostBudgetsSummaryWithOptions(const DescribeCostBudgetsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBudgetName()) {
    query["BudgetName"] = request.getBudgetName();
  }

  if (!!request.hasBudgetStatus()) {
    query["BudgetStatus"] = request.getBudgetStatus();
  }

  if (!!request.hasBudgetType()) {
    query["BudgetType"] = request.getBudgetType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
 * @summary Queries a summary of cost budgets.
 *
 * @description This OpenAPI is in beta and available only to whitelisted users. Excessive calls may cause performance issues, such as response timeouts.
 *
 * @param request DescribeCostBudgetsSummaryRequest
 * @return DescribeCostBudgetsSummaryResponse
 */
DescribeCostBudgetsSummaryResponse Client::describeCostBudgetsSummary(const DescribeCostBudgetsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCostBudgetsSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the monthly amortized costs of instances for a specified amortization month.
 *
 * @description - Amortized costs cannot be used for settlement or reconciliation. They are used to allocate your subscription and pay-as-you-go fees based on specified allocation rules.
 * - The final data for a month is available after 12:00 on the sixth day of the following month. The reason for this delay is that scenarios such as delayed billing, refunds, bill adjustments, and overdue payment write-offs can occur during the month. The data for the current month does not include unsettled pay-as-you-go fees for which bills have not yet been generated.
 * - Amortized cost data from the last 12 months is available.
 * - Data for attached resources is reflected in the amortized costs 48 hours after the split bill is generated. To use this feature, you must first enable [split bills](https://usercenter2.aliyun.com/finance/split-bill). Data for items that are not attached resources is updated 48 hours after the detailed bill is generated.
 * - For months before August 2021, amortized costs are not updated intra-month. They are updated only after 12:00 on the sixth day of the following month. Consequently, specific costs for attached resources, such as domain names, buckets, and EIPs, for products such as CDN, OSS, and Internet Shared Bandwidth are not available for these months.
 * - Amortized cost data is available for querying 48 hours after you enable the [Amortized Cost](https://usercenter2.aliyun.com/finance/amortized-costs) feature.
 *
 * @param request DescribeInstanceAmortizedCostByAmortizationPeriodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAmortizedCostByAmortizationPeriodResponse
 */
DescribeInstanceAmortizedCostByAmortizationPeriodResponse Client::describeInstanceAmortizedCostByAmortizationPeriodWithOptions(const DescribeInstanceAmortizedCostByAmortizationPeriodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBillOwnerIdList()) {
    body["BillOwnerIdList"] = request.getBillOwnerIdList();
  }

  if (!!request.hasBillUserIdList()) {
    body["BillUserIdList"] = request.getBillUserIdList();
  }

  if (!!request.hasBillingCycle()) {
    body["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasConsumePeriodFilter()) {
    body["ConsumePeriodFilter"] = request.getConsumePeriodFilter();
  }

  if (!!request.hasCostUnitCode()) {
    body["CostUnitCode"] = request.getCostUnitCode();
  }

  if (!!request.hasInstanceIdList()) {
    body["InstanceIdList"] = request.getInstanceIdList();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductDetail()) {
    body["ProductDetail"] = request.getProductDetail();
  }

  if (!!request.hasSubscriptionType()) {
    body["SubscriptionType"] = request.getSubscriptionType();
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
 * @summary Queries the monthly amortized costs of instances for a specified amortization month.
 *
 * @description - Amortized costs cannot be used for settlement or reconciliation. They are used to allocate your subscription and pay-as-you-go fees based on specified allocation rules.
 * - The final data for a month is available after 12:00 on the sixth day of the following month. The reason for this delay is that scenarios such as delayed billing, refunds, bill adjustments, and overdue payment write-offs can occur during the month. The data for the current month does not include unsettled pay-as-you-go fees for which bills have not yet been generated.
 * - Amortized cost data from the last 12 months is available.
 * - Data for attached resources is reflected in the amortized costs 48 hours after the split bill is generated. To use this feature, you must first enable [split bills](https://usercenter2.aliyun.com/finance/split-bill). Data for items that are not attached resources is updated 48 hours after the detailed bill is generated.
 * - For months before August 2021, amortized costs are not updated intra-month. They are updated only after 12:00 on the sixth day of the following month. Consequently, specific costs for attached resources, such as domain names, buckets, and EIPs, for products such as CDN, OSS, and Internet Shared Bandwidth are not available for these months.
 * - Amortized cost data is available for querying 48 hours after you enable the [Amortized Cost](https://usercenter2.aliyun.com/finance/amortized-costs) feature.
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
    body["AmortizationDateEnd"] = request.getAmortizationDateEnd();
  }

  if (!!request.hasAmortizationDateStart()) {
    body["AmortizationDateStart"] = request.getAmortizationDateStart();
  }

  if (!!request.hasBillOwnerIdList()) {
    body["BillOwnerIdList"] = request.getBillOwnerIdList();
  }

  if (!!request.hasBillUserIdList()) {
    body["BillUserIdList"] = request.getBillUserIdList();
  }

  if (!!request.hasBillingCycle()) {
    body["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasCostUnitCode()) {
    body["CostUnitCode"] = request.getCostUnitCode();
  }

  if (!!request.hasInstanceIdList()) {
    body["InstanceIdList"] = request.getInstanceIdList();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductDetail()) {
    body["ProductDetail"] = request.getProductDetail();
  }

  if (!!request.hasSubscriptionType()) {
    body["SubscriptionType"] = request.getSubscriptionType();
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
 * @summary Queries the monthly amortized cost of an instance by billing cycle.
 *
 * @description - Amortized costs are not used for settlement or reconciliation. They are used to allocate your cloud expenses, including both subscription and pay-as-you-go fees, based on specified allocation rules.
 * - The final data for a month is available after 12:00 on the sixth day of the following month. This delay accounts for events such as delayed billing, refunds, bill adjustments, and overdue payment write-offs. Data for the current month does not include unsettled pay-as-you-go fees.
 * - Amortized cost data is available for the past 12 months.
 * - Data for attached resources in the amortized costs is updated 48 hours after the split bill is generated. To view the costs of attached resources, you must first enable [split bills](https://usercenter2.aliyun.com/finance/split-bill). Data for other resources is updated 48 hours after the detailed bill is generated.
 * - For months before August 2021, amortized costs are not updated mid-month. They are updated only after 12:00 on the sixth day of the following month. In addition, specific costs for attached resources, such as domain names, buckets, and EIPs, of products such as CDN, OSS, and Internet Shared Bandwidth, are not provided for this period.
 * - Amortized cost data is available only after you enable the [Amortized Costs](https://usercenter2.aliyun.com/finance/amortized-costs) feature. The data becomes available 48 hours after enablement.
 *
 * @param request DescribeInstanceAmortizedCostByConsumePeriodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAmortizedCostByConsumePeriodResponse
 */
DescribeInstanceAmortizedCostByConsumePeriodResponse Client::describeInstanceAmortizedCostByConsumePeriodWithOptions(const DescribeInstanceAmortizedCostByConsumePeriodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAmortizationPeriodFilter()) {
    body["AmortizationPeriodFilter"] = request.getAmortizationPeriodFilter();
  }

  if (!!request.hasBillOwnerIdList()) {
    body["BillOwnerIdList"] = request.getBillOwnerIdList();
  }

  if (!!request.hasBillUserIdList()) {
    body["BillUserIdList"] = request.getBillUserIdList();
  }

  if (!!request.hasBillingCycle()) {
    body["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasCostUnitCode()) {
    body["CostUnitCode"] = request.getCostUnitCode();
  }

  if (!!request.hasInstanceIdList()) {
    body["InstanceIdList"] = request.getInstanceIdList();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductDetail()) {
    body["ProductDetail"] = request.getProductDetail();
  }

  if (!!request.hasSubscriptionType()) {
    body["SubscriptionType"] = request.getSubscriptionType();
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
 * @summary Queries the monthly amortized cost of an instance by billing cycle.
 *
 * @description - Amortized costs are not used for settlement or reconciliation. They are used to allocate your cloud expenses, including both subscription and pay-as-you-go fees, based on specified allocation rules.
 * - The final data for a month is available after 12:00 on the sixth day of the following month. This delay accounts for events such as delayed billing, refunds, bill adjustments, and overdue payment write-offs. Data for the current month does not include unsettled pay-as-you-go fees.
 * - Amortized cost data is available for the past 12 months.
 * - Data for attached resources in the amortized costs is updated 48 hours after the split bill is generated. To view the costs of attached resources, you must first enable [split bills](https://usercenter2.aliyun.com/finance/split-bill). Data for other resources is updated 48 hours after the detailed bill is generated.
 * - For months before August 2021, amortized costs are not updated mid-month. They are updated only after 12:00 on the sixth day of the following month. In addition, specific costs for attached resources, such as domain names, buckets, and EIPs, of products such as CDN, OSS, and Internet Shared Bandwidth, are not provided for this period.
 * - Amortized cost data is available only after you enable the [Amortized Costs](https://usercenter2.aliyun.com/finance/amortized-costs) feature. The data becomes available 48 hours after enablement.
 *
 * @param request DescribeInstanceAmortizedCostByConsumePeriodRequest
 * @return DescribeInstanceAmortizedCostByConsumePeriodResponse
 */
DescribeInstanceAmortizedCostByConsumePeriodResponse Client::describeInstanceAmortizedCostByConsumePeriod(const DescribeInstanceAmortizedCostByConsumePeriodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAmortizedCostByConsumePeriodWithOptions(request, runtime);
}

/**
 * @summary Queries the consumption summary of all product instances or billable items for a user within a specific billing cycle.
 *
 * @description - The query results for the current month are for reference only and cannot be used as the basis for reconciliation. The final bill for the current month can be viewed or exported after 12:00 on the 3rd day of the next month. During the month, a few scenarios may occur, including but not limited to delayed billing, refunds, bill adjustments, and overdue payment write-offs.
 * - The bill data for the current month does not include unsettled pay-as-you-go data that is unbilled or accumulating.
 * - Data for the last 18 months is supported. 
 * - Bill data is updated with a 24-hour delay compared to actual consumption. Information related to the instance ID, such as instance configuration, instance type, instance alias, resource group, public IP address, private IP address, and zone, is updated with a 48-hour delay.  
 * - Bill data does not provide the specific costs of individual split items, such as domain names, buckets, and EIPs, for split-type cloud services, such as CDN, OSS, and Internet Shared Bandwidth. To view data that includes split items, go to the split bill page.
 * - For cloud communication products, only detail data from June 2020 onwards is supported. For HiChina products, including domain names and trademarks, only detail data from November 2020 onwards is supported.
 * - The rate limit is 10 requests per second per user. If a timeout occurs, retry the request.
 *
 * @param request DescribeInstanceBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceBillResponse
 */
DescribeInstanceBillResponse Client::describeInstanceBillWithOptions(const DescribeInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasBillingDate()) {
    query["BillingDate"] = request.getBillingDate();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.getGranularity();
  }

  if (!!request.hasInstanceID()) {
    query["InstanceID"] = request.getInstanceID();
  }

  if (!!request.hasIsBillingItem()) {
    query["IsBillingItem"] = request.getIsBillingItem();
  }

  if (!!request.hasIsHideZeroCharge()) {
    query["IsHideZeroCharge"] = request.getIsHideZeroCharge();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPipCode()) {
    query["PipCode"] = request.getPipCode();
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
 * @summary Queries the consumption summary of all product instances or billable items for a user within a specific billing cycle.
 *
 * @description - The query results for the current month are for reference only and cannot be used as the basis for reconciliation. The final bill for the current month can be viewed or exported after 12:00 on the 3rd day of the next month. During the month, a few scenarios may occur, including but not limited to delayed billing, refunds, bill adjustments, and overdue payment write-offs.
 * - The bill data for the current month does not include unsettled pay-as-you-go data that is unbilled or accumulating.
 * - Data for the last 18 months is supported. 
 * - Bill data is updated with a 24-hour delay compared to actual consumption. Information related to the instance ID, such as instance configuration, instance type, instance alias, resource group, public IP address, private IP address, and zone, is updated with a 48-hour delay.  
 * - Bill data does not provide the specific costs of individual split items, such as domain names, buckets, and EIPs, for split-type cloud services, such as CDN, OSS, and Internet Shared Bandwidth. To view data that includes split items, go to the split bill page.
 * - For cloud communication products, only detail data from June 2020 onwards is supported. For HiChina products, including domain names and trademarks, only detail data from November 2020 onwards is supported.
 * - The rate limit is 10 requests per second per user. If a timeout occurs, retry the request.
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
    body["BillOwnerIdList"] = request.getBillOwnerIdList();
  }

  if (!!request.hasBillUserIdList()) {
    body["BillUserIdList"] = request.getBillUserIdList();
  }

  if (!!request.hasBillingCycle()) {
    body["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasCostUnitCode()) {
    body["CostUnitCode"] = request.getCostUnitCode();
  }

  if (!!request.hasInstanceIdList()) {
    body["InstanceIdList"] = request.getInstanceIdList();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductDetail()) {
    body["ProductDetail"] = request.getProductDetail();
  }

  if (!!request.hasSubscriptionType()) {
    body["SubscriptionType"] = request.getSubscriptionType();
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
 * @summary Queries the module information of a specific Alibaba Cloud product.
 *
 * @param request DescribePricingModuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePricingModuleResponse
 */
DescribePricingModuleResponse Client::describePricingModuleWithOptions(const DescribePricingModuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries the module information of a specific Alibaba Cloud product.
 *
 * @param request DescribePricingModuleRequest
 * @return DescribePricingModuleResponse
 */
DescribePricingModuleResponse Client::describePricingModule(const DescribePricingModuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePricingModuleWithOptions(request, runtime);
}

/**
 * @summary Queries the monthly amortized cost of products for a specified month.
 *
 * @description - Amortized costs are for cost allocation purposes only and cannot be used for settlement or reconciliation. This feature allocates your cloud expenses, including both subscription and pay-as-you-go fees, based on specified allocation rules.
 * - The final data for a month is available after 12:00 on the sixth day of the following month. Data for the current month is not final. This is because it does not include unsettled pay-as-you-go fees and may change due to events such as delayed billing, refunds, bill adjustments, and overdue payment write-offs.
 * - Amortized cost data for the past 12 months is available.
 * - Data for attached resources, which requires you to enable [split bills](https://usercenter2.aliyun.com/finance/split-bill), is updated 48 hours after the split bill is generated. Data for other resources is updated 48 hours after the detailed bill is generated.
 * - For months before August 2021, amortized costs were not updated during the month. They were updated only after 12:00 on the sixth day of the following month. In addition, cost details for attached resources, such as domain names, buckets, and EIPs, for products such as CDN, OSS, and Internet Shared Bandwidth are not available for this period.
 * - Amortized cost data becomes available 48 hours after you enable the [Amortized Cost](https://usercenter2.aliyun.com/finance/amortized-costs) feature.
 *
 * @param request DescribeProductAmortizedCostByAmortizationPeriodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductAmortizedCostByAmortizationPeriodResponse
 */
DescribeProductAmortizedCostByAmortizationPeriodResponse Client::describeProductAmortizedCostByAmortizationPeriodWithOptions(const DescribeProductAmortizedCostByAmortizationPeriodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBillOwnerIdList()) {
    body["BillOwnerIdList"] = request.getBillOwnerIdList();
  }

  if (!!request.hasBillUserIdList()) {
    body["BillUserIdList"] = request.getBillUserIdList();
  }

  if (!!request.hasBillingCycle()) {
    body["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasConsumePeriodFilter()) {
    body["ConsumePeriodFilter"] = request.getConsumePeriodFilter();
  }

  if (!!request.hasCostUnitCode()) {
    body["CostUnitCode"] = request.getCostUnitCode();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductDetail()) {
    body["ProductDetail"] = request.getProductDetail();
  }

  if (!!request.hasSubscriptionType()) {
    body["SubscriptionType"] = request.getSubscriptionType();
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
 * @summary Queries the monthly amortized cost of products for a specified month.
 *
 * @description - Amortized costs are for cost allocation purposes only and cannot be used for settlement or reconciliation. This feature allocates your cloud expenses, including both subscription and pay-as-you-go fees, based on specified allocation rules.
 * - The final data for a month is available after 12:00 on the sixth day of the following month. Data for the current month is not final. This is because it does not include unsettled pay-as-you-go fees and may change due to events such as delayed billing, refunds, bill adjustments, and overdue payment write-offs.
 * - Amortized cost data for the past 12 months is available.
 * - Data for attached resources, which requires you to enable [split bills](https://usercenter2.aliyun.com/finance/split-bill), is updated 48 hours after the split bill is generated. Data for other resources is updated 48 hours after the detailed bill is generated.
 * - For months before August 2021, amortized costs were not updated during the month. They were updated only after 12:00 on the sixth day of the following month. In addition, cost details for attached resources, such as domain names, buckets, and EIPs, for products such as CDN, OSS, and Internet Shared Bandwidth are not available for this period.
 * - Amortized cost data becomes available 48 hours after you enable the [Amortized Cost](https://usercenter2.aliyun.com/finance/amortized-costs) feature.
 *
 * @param request DescribeProductAmortizedCostByAmortizationPeriodRequest
 * @return DescribeProductAmortizedCostByAmortizationPeriodResponse
 */
DescribeProductAmortizedCostByAmortizationPeriodResponse Client::describeProductAmortizedCostByAmortizationPeriod(const DescribeProductAmortizedCostByAmortizationPeriodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProductAmortizedCostByAmortizationPeriodWithOptions(request, runtime);
}

/**
 * @summary Queries the monthly amortized cost of a product for a specific billing cycle.
 *
 * @description - Amortized costs are used for cost allocation and cannot be used for settlement or reconciliation. This feature allocates your cloud expenses, including both subscription and pay-as-you-go fees, based on specified rules.
 * - The final data for a given month is available after 12:00 on the sixth day of the following month. This delay ensures that potential mid-month events, such as delayed billing, refunds, bill adjustments, and overdue payment write-offs, are included. Data for the current month does not include unsettled pay-as-you-go fees that have not yet been billed or are still accumulating.
 * - Amortized cost data for the past 12 months is available.
 * - Data related to attached resources is updated in the amortized costs 48 hours after the corresponding split bill is generated. To view the costs of attached resources, you must first enable [split bills](https://usercenter2.aliyun.com/finance/split-bill). Data that is not related to attached resources is updated 48 hours after the detailed bill is generated.
 * - For months before August 2021, amortized costs were not updated mid-month and were only updated after 12:00 on the sixth day of the following month. Additionally, for this period, specific costs for attached resources, such as domain names, buckets, and EIPs, for products such as CDN, OSS, and Internet Shared Bandwidth are not available.
 * - Amortized cost data is provided only after you enable the [Amortized Cost](https://usercenter2.aliyun.com/finance/amortized-costs) feature. The data is available 48 hours after you enable it.
 *
 * @param request DescribeProductAmortizedCostByConsumePeriodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProductAmortizedCostByConsumePeriodResponse
 */
DescribeProductAmortizedCostByConsumePeriodResponse Client::describeProductAmortizedCostByConsumePeriodWithOptions(const DescribeProductAmortizedCostByConsumePeriodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAmortizationPeriodFilter()) {
    body["AmortizationPeriodFilter"] = request.getAmortizationPeriodFilter();
  }

  if (!!request.hasBillOwnerIdList()) {
    body["BillOwnerIdList"] = request.getBillOwnerIdList();
  }

  if (!!request.hasBillUserIdList()) {
    body["BillUserIdList"] = request.getBillUserIdList();
  }

  if (!!request.hasBillingCycle()) {
    body["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasCostUnitCode()) {
    body["CostUnitCode"] = request.getCostUnitCode();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProductCode()) {
    body["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductDetail()) {
    body["ProductDetail"] = request.getProductDetail();
  }

  if (!!request.hasSubscriptionType()) {
    body["SubscriptionType"] = request.getSubscriptionType();
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
 * @summary Queries the monthly amortized cost of a product for a specific billing cycle.
 *
 * @description - Amortized costs are used for cost allocation and cannot be used for settlement or reconciliation. This feature allocates your cloud expenses, including both subscription and pay-as-you-go fees, based on specified rules.
 * - The final data for a given month is available after 12:00 on the sixth day of the following month. This delay ensures that potential mid-month events, such as delayed billing, refunds, bill adjustments, and overdue payment write-offs, are included. Data for the current month does not include unsettled pay-as-you-go fees that have not yet been billed or are still accumulating.
 * - Amortized cost data for the past 12 months is available.
 * - Data related to attached resources is updated in the amortized costs 48 hours after the corresponding split bill is generated. To view the costs of attached resources, you must first enable [split bills](https://usercenter2.aliyun.com/finance/split-bill). Data that is not related to attached resources is updated 48 hours after the detailed bill is generated.
 * - For months before August 2021, amortized costs were not updated mid-month and were only updated after 12:00 on the sixth day of the following month. Additionally, for this period, specific costs for attached resources, such as domain names, buckets, and EIPs, for products such as CDN, OSS, and Internet Shared Bandwidth are not available.
 * - Amortized cost data is provided only after you enable the [Amortized Cost](https://usercenter2.aliyun.com/finance/amortized-costs) feature. The data is available 48 hours after you enable it.
 *
 * @param request DescribeProductAmortizedCostByConsumePeriodRequest
 * @return DescribeProductAmortizedCostByConsumePeriodResponse
 */
DescribeProductAmortizedCostByConsumePeriodResponse Client::describeProductAmortizedCostByConsumePeriod(const DescribeProductAmortizedCostByConsumePeriodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProductAmortizedCostByConsumePeriodWithOptions(request, runtime);
}

/**
 * @summary Queries the coverage details of reserved instances and storage capacity units (SCUs).
 *
 * @description 1. The data is consistent with the list data in the Coverage Overview section of the Resource Instance Management menu in the User Center.
 * 2. Currently, coverage queries are supported for reserved instances (RIs) and storage capacity units (SCUs).
 * 3. Coverage queries are provided in three dimensions: hour, day, and month.
 *
 * @param request DescribeResourceCoverageDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceCoverageDetailResponse
 */
DescribeResourceCoverageDetailResponse Client::describeResourceCoverageDetailWithOptions(const DescribeResourceCoverageDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.getEndPeriod();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.getPeriodType();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.getStartPeriod();
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
 * @summary Queries the coverage details of reserved instances and storage capacity units (SCUs).
 *
 * @description 1. The data is consistent with the list data in the Coverage Overview section of the Resource Instance Management menu in the User Center.
 * 2. Currently, coverage queries are supported for reserved instances (RIs) and storage capacity units (SCUs).
 * 3. Coverage queries are provided in three dimensions: hour, day, and month.
 *
 * @param request DescribeResourceCoverageDetailRequest
 * @return DescribeResourceCoverageDetailResponse
 */
DescribeResourceCoverageDetailResponse Client::describeResourceCoverageDetail(const DescribeResourceCoverageDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceCoverageDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the coverage summary of reserved instances and storage capacity units (SCUs).
 *
 * @description Returns the same summary data as the Coverage Overview in the Resource Instance Management menu of the User Center.
 * Currently, coverage queries are supported for two resource types: reserved instances (RIs) and storage capacity units (SCUs).
 *
 * @param request DescribeResourceCoverageTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceCoverageTotalResponse
 */
DescribeResourceCoverageTotalResponse Client::describeResourceCoverageTotalWithOptions(const DescribeResourceCoverageTotalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.getEndPeriod();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.getPeriodType();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.getStartPeriod();
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
 * @summary Queries the coverage summary of reserved instances and storage capacity units (SCUs).
 *
 * @description Returns the same summary data as the Coverage Overview in the Resource Instance Management menu of the User Center.
 * Currently, coverage queries are supported for two resource types: reserved instances (RIs) and storage capacity units (SCUs).
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
    query["ProductCode"] = request.getProductCode();
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
 * @summary Queries the usage details of reserved instances and storage capacity units (SCUs).
 *
 * @param request DescribeResourceUsageDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceUsageDetailResponse
 */
DescribeResourceUsageDetailResponse Client::describeResourceUsageDetailWithOptions(const DescribeResourceUsageDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.getEndPeriod();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.getPeriodType();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.getStartPeriod();
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
 * @summary Queries the usage details of reserved instances and storage capacity units (SCUs).
 *
 * @param request DescribeResourceUsageDetailRequest
 * @return DescribeResourceUsageDetailResponse
 */
DescribeResourceUsageDetailResponse Client::describeResourceUsageDetail(const DescribeResourceUsageDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceUsageDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the usage summary of reserved instances and storage capacity units (SCUs).
 *
 * @param request DescribeResourceUsageTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceUsageTotalResponse
 */
DescribeResourceUsageTotalResponse Client::describeResourceUsageTotalWithOptions(const DescribeResourceUsageTotalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.getEndPeriod();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.getPeriodType();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.getStartPeriod();
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
 * @summary Queries the usage summary of reserved instances and storage capacity units (SCUs).
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
 * @param tmpReq DescribeSavingsPlansCoverageDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSavingsPlansCoverageDetailResponse
 */
DescribeSavingsPlansCoverageDetailResponse Client::describeSavingsPlansCoverageDetailWithOptions(const DescribeSavingsPlansCoverageDetailRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeSavingsPlansCoverageDetailShrinkRequest request = DescribeSavingsPlansCoverageDetailShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterParam()) {
    request.setFilterParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterParam(), "FilterParam", "json"));
  }

  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.getEndPeriod();
  }

  if (!!request.hasFilterParamShrink()) {
    query["FilterParam"] = request.getFilterParamShrink();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.getPeriodType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.getStartPeriod();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
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
 * @summary Queries the summary of savings plan coverage.
 *
 * @param tmpReq DescribeSavingsPlansCoverageTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSavingsPlansCoverageTotalResponse
 */
DescribeSavingsPlansCoverageTotalResponse Client::describeSavingsPlansCoverageTotalWithOptions(const DescribeSavingsPlansCoverageTotalRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeSavingsPlansCoverageTotalShrinkRequest request = DescribeSavingsPlansCoverageTotalShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterParam()) {
    request.setFilterParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterParam(), "FilterParam", "json"));
  }

  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.getEndPeriod();
  }

  if (!!request.hasFilterParamShrink()) {
    query["FilterParam"] = request.getFilterParamShrink();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.getPeriodType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.getStartPeriod();
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
 * @summary Queries the summary of savings plan coverage.
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
 * @param tmpReq DescribeSavingsPlansUsageDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSavingsPlansUsageDetailResponse
 */
DescribeSavingsPlansUsageDetailResponse Client::describeSavingsPlansUsageDetailWithOptions(const DescribeSavingsPlansUsageDetailRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeSavingsPlansUsageDetailShrinkRequest request = DescribeSavingsPlansUsageDetailShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterParam()) {
    request.setFilterParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterParam(), "FilterParam", "json"));
  }

  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.getEndPeriod();
  }

  if (!!request.hasFilterParamShrink()) {
    query["FilterParam"] = request.getFilterParamShrink();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.getPeriodType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.getStartPeriod();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
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
 * @param tmpReq DescribeSavingsPlansUsageTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSavingsPlansUsageTotalResponse
 */
DescribeSavingsPlansUsageTotalResponse Client::describeSavingsPlansUsageTotalWithOptions(const DescribeSavingsPlansUsageTotalRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeSavingsPlansUsageTotalShrinkRequest request = DescribeSavingsPlansUsageTotalShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterParam()) {
    request.setFilterParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterParam(), "FilterParam", "json"));
  }

  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasEndPeriod()) {
    query["EndPeriod"] = request.getEndPeriod();
  }

  if (!!request.hasFilterParamShrink()) {
    query["FilterParam"] = request.getFilterParamShrink();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.getPeriodType();
  }

  if (!!request.hasStartPeriod()) {
    query["StartPeriod"] = request.getStartPeriod();
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
 * @description - The query results for the current month\\"s split bills are for reference only and cannot be used as the basis for reconciliation. The final bill for the current month can be queried after 12:00 on the 4th day of the next month. The split bill data for the current month does not include unsettled pay-as-you-go data (unbilled or being accumulated).
 * - Split bill data is available for the last 12 months.
 * - Split bill data is updated with a 48-hour delay compared to actual expenses. For split cloud services (such as CDN, OSS, and Internet Shared Bandwidth), the specific expenses for each attached resource (such as domain names, buckets, and EIPs) are updated with a 72-hour delay.
 * - Split bill data is available only after you enable the feature on the <props="china">[Split Bill](https://usercenter2.aliyun.com/finance/split-bill)<props="intl">[Split Bill](https://usercenter2-intl.aliyun.com/finance/split-bill) page in the console. The data becomes available 24 hours after you enable the feature.
 * - The rate limit is 10 requests per second per user. If a timeout occurs, retry the request.
 *
 * @param request DescribeSplitItemBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSplitItemBillResponse
 */
DescribeSplitItemBillResponse Client::describeSplitItemBillWithOptions(const DescribeSplitItemBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasBillingDate()) {
    query["BillingDate"] = request.getBillingDate();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.getGranularity();
  }

  if (!!request.hasInstanceID()) {
    query["InstanceID"] = request.getInstanceID();
  }

  if (!!request.hasIsHideZeroCharge()) {
    query["IsHideZeroCharge"] = request.getIsHideZeroCharge();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPipCode()) {
    query["PipCode"] = request.getPipCode();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasSplitItemID()) {
    query["SplitItemID"] = request.getSplitItemID();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.getSubscriptionType();
  }

  if (!!request.hasTagFilter()) {
    query["TagFilter"] = request.getTagFilter();
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
 * @description - The query results for the current month\\"s split bills are for reference only and cannot be used as the basis for reconciliation. The final bill for the current month can be queried after 12:00 on the 4th day of the next month. The split bill data for the current month does not include unsettled pay-as-you-go data (unbilled or being accumulated).
 * - Split bill data is available for the last 12 months.
 * - Split bill data is updated with a 48-hour delay compared to actual expenses. For split cloud services (such as CDN, OSS, and Internet Shared Bandwidth), the specific expenses for each attached resource (such as domain names, buckets, and EIPs) are updated with a 72-hour delay.
 * - Split bill data is available only after you enable the feature on the <props="china">[Split Bill](https://usercenter2.aliyun.com/finance/split-bill)<props="intl">[Split Bill](https://usercenter2-intl.aliyun.com/finance/split-bill) page in the console. The data becomes available 24 hours after you enable the feature.
 * - The rate limit is 10 requests per second per user. If a timeout occurs, retry the request.
 *
 * @param request DescribeSplitItemBillRequest
 * @return DescribeSplitItemBillResponse
 */
DescribeSplitItemBillResponse Client::describeSplitItemBill(const DescribeSplitItemBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSplitItemBillWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an account linking.
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
 * @summary Queries the details of an account linking.
 *
 * @param request GetAccountRelationRequest
 * @return GetAccountRelationResponse
 */
GetAccountRelationResponse Client::getAccountRelation(const GetAccountRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountRelationWithOptions(request, runtime);
}

/**
 * @summary Queries the account information of an end customer under a partner.
 *
 * @param request GetCustomerAccountInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomerAccountInfoResponse
 */
GetCustomerAccountInfoResponse Client::getCustomerAccountInfoWithOptions(const GetCustomerAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries the account information of an end customer under a partner.
 *
 * @param request GetCustomerAccountInfoRequest
 * @return GetCustomerAccountInfoResponse
 */
GetCustomerAccountInfoResponse Client::getCustomerAccountInfo(const GetCustomerAccountInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomerAccountInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the list of end customer UIDs under a partner.
 *
 * @description The system queries the list of associated end customer UIDs based on the AccessKey pair in the request.
 *
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
 * @summary Queries the list of end customer UIDs under a partner.
 *
 * @description The system queries the list of associated end customer UIDs based on the AccessKey pair in the request.
 *
 * @return GetCustomerListResponse
 */
GetCustomerListResponse Client::getCustomerList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomerListWithOptions(runtime);
}

/**
 * @summary Queries the details of a specific order for a user or a distribution customer.
 *
 * @param request GetOrderDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrderDetailResponse
 */
GetOrderDetailResponse Client::getOrderDetailWithOptions(const GetOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
 * @summary Queries the details of a specific order for a user or a distribution customer.
 *
 * @param request GetOrderDetailRequest
 * @return GetOrderDetailResponse
 */
GetOrderDetailResponse Client::getOrderDetail(const GetOrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOrderDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the price of a pay-as-you-go product.
 *
 * @description ### Operation description
 * 1. Call QueryProductList to obtain the product code. For more information, see [Query product information](https://help.aliyun.com/document_detail/95984.html).
 * 2. Call the DescribePricingModule operation to obtain the configuration parameters of a product. For more information, see [Query pricing module information](https://help.aliyun.com/document_detail/96469.html).
 * 3. Call this operation with the obtained product configuration parameters to query the price of a pay-as-you-go product.
 *
 * @param request GetPayAsYouGoPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPayAsYouGoPriceResponse
 */
GetPayAsYouGoPriceResponse Client::getPayAsYouGoPriceWithOptions(const GetPayAsYouGoPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModuleList()) {
    query["ModuleList"] = request.getModuleList();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.getSubscriptionType();
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
 * @summary Queries the price of a pay-as-you-go product.
 *
 * @description ### Operation description
 * 1. Call QueryProductList to obtain the product code. For more information, see [Query product information](https://help.aliyun.com/document_detail/95984.html).
 * 2. Call the DescribePricingModule operation to obtain the configuration parameters of a product. For more information, see [Query pricing module information](https://help.aliyun.com/document_detail/96469.html).
 * 3. Call this operation with the obtained product configuration parameters to query the price of a pay-as-you-go product.
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
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasEffectiveDate()) {
    query["EffectiveDate"] = request.getEffectiveDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPackageType()) {
    query["PackageType"] = request.getPackageType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.getSpecification();
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
 * @summary Queries the prices of subscription products.
 *
 * @description 1. Call QueryProductList to obtain the product code. For more information, see [Query product information](https://help.aliyun.com/document_detail/95984.html).
 * 2. Call the DescribePricingModule operation to obtain the configuration parameters of the product. For more information, see [Query product module information](https://help.aliyun.com/document_detail/96469.html).
 * 3. Call this operation to query the prices of subscription products based on the obtained product configuration parameters.
 * 4. Concatenate the Config parameter under ModuleList based on the config parameter returned by the DescribePricingModule operation. Do not omit any parameters. Otherwise, an error occurs during the price inquiry.
 *
 * @param request GetSubscriptionPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubscriptionPriceResponse
 */
GetSubscriptionPriceResponse Client::getSubscriptionPriceWithOptions(const GetSubscriptionPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModuleList()) {
    query["ModuleList"] = request.getModuleList();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasQuantity()) {
    query["Quantity"] = request.getQuantity();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasServicePeriodQuantity()) {
    query["ServicePeriodQuantity"] = request.getServicePeriodQuantity();
  }

  if (!!request.hasServicePeriodUnit()) {
    query["ServicePeriodUnit"] = request.getServicePeriodUnit();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.getSubscriptionType();
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
 * @summary Queries the prices of subscription products.
 *
 * @description 1. Call QueryProductList to obtain the product code. For more information, see [Query product information](https://help.aliyun.com/document_detail/95984.html).
 * 2. Call the DescribePricingModule operation to obtain the configuration parameters of the product. For more information, see [Query product module information](https://help.aliyun.com/document_detail/96469.html).
 * 3. Call this operation to query the prices of subscription products based on the obtained product configuration parameters.
 * 4. Concatenate the Config parameter under ModuleList based on the config parameter returned by the DescribePricingModule operation. Do not omit any parameters. Otherwise, an error occurs during the price inquiry.
 *
 * @param request GetSubscriptionPriceRequest
 * @return GetSubscriptionPriceResponse
 */
GetSubscriptionPriceResponse Client::getSubscriptionPrice(const GetSubscriptionPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSubscriptionPriceWithOptions(request, runtime);
}

/**
 * @summary Queries the refund amount for an instance that you want to unsubscribe from.
 *
 * @description 1. **Carefully verify the information about the resource to be unsubscribed, and confirm the unsubscription terms and refund amount. Resources cannot be recovered after unsubscription.**
 * 2. Only the actual paid amount is refunded. Used vouchers are not refunded.
 * 3. For other questions, refer to: <props="china">[Refund rules](https://help.aliyun.com/knowledge_detail/116043.html?spm=a2c81.e1d666e.app.2.62ae11271Kd6iM)<props="intl">[Refund rules for Alibaba Cloud International Website](https://www.alibabacloud.com/help/zh/user-center/user-guide/refund-rules)
 *
 * @param request InquiryPriceRefundInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InquiryPriceRefundInstanceResponse
 */
InquiryPriceRefundInstanceResponse Client::inquiryPriceRefundInstanceWithOptions(const InquiryPriceRefundInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
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
 * @summary Queries the refund amount for an instance that you want to unsubscribe from.
 *
 * @description 1. **Carefully verify the information about the resource to be unsubscribed, and confirm the unsubscription terms and refund amount. Resources cannot be recovered after unsubscription.**
 * 2. Only the actual paid amount is refunded. Used vouchers are not refunded.
 * 3. For other questions, refer to: <props="china">[Refund rules](https://help.aliyun.com/knowledge_detail/116043.html?spm=a2c81.e1d666e.app.2.62ae11271Kd6iM)<props="intl">[Refund rules for Alibaba Cloud International Website](https://www.alibabacloud.com/help/zh/user-center/user-guide/refund-rules)
 *
 * @param request InquiryPriceRefundInstanceRequest
 * @return InquiryPriceRefundInstanceResponse
 */
InquiryPriceRefundInstanceResponse Client::inquiryPriceRefundInstance(const InquiryPriceRefundInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return inquiryPriceRefundInstanceWithOptions(request, runtime);
}

/**
 * @summary Adds or deletes permissions for an account linking relationship.
 *
 * @param request ModifyAccountRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountRelationResponse
 */
ModifyAccountRelationResponse Client::modifyAccountRelationWithOptions(const ModifyAccountRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChildNick()) {
    query["ChildNick"] = request.getChildNick();
  }

  if (!!request.hasChildUserId()) {
    query["ChildUserId"] = request.getChildUserId();
  }

  if (!!request.hasParentUserId()) {
    query["ParentUserId"] = request.getParentUserId();
  }

  if (!!request.hasPermissionCodes()) {
    query["PermissionCodes"] = request.getPermissionCodes();
  }

  if (!!request.hasRelationId()) {
    query["RelationId"] = request.getRelationId();
  }

  if (!!request.hasRelationOperation()) {
    query["RelationOperation"] = request.getRelationOperation();
  }

  if (!!request.hasRelationType()) {
    query["RelationType"] = request.getRelationType();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  if (!!request.hasRoleCodes()) {
    query["RoleCodes"] = request.getRoleCodes();
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
 * @summary Adds or deletes permissions for an account linking relationship.
 *
 * @param request ModifyAccountRelationRequest
 * @return ModifyAccountRelationResponse
 */
ModifyAccountRelationResponse Client::modifyAccountRelation(const ModifyAccountRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountRelationWithOptions(request, runtime);
}

/**
 * @summary Modifies financial units. Batch modification is supported.
 *
 * @param request ModifyCostUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCostUnitResponse
 */
ModifyCostUnitResponse Client::modifyCostUnitWithOptions(const ModifyCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUnitEntityList()) {
    query["UnitEntityList"] = request.getUnitEntityList();
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
 * @summary Modifies financial units. Batch modification is supported.
 *
 * @param request ModifyCostUnitRequest
 * @return ModifyCostUnitResponse
 */
ModifyCostUnitResponse Client::modifyCostUnit(const ModifyCostUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCostUnitWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource configuration of an instance. Invoking this operation creates an order for the Upgrade/Downgrade of instance resources and processes automatic payment. This operation does not support configuration changes for ECS or RDS products. Use the dedicated API of the corresponding product to execute the Upgrade/Downgrade.
 *
 * @param request ModifyInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstanceWithOptions(const ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModifyType()) {
    query["ModifyType"] = request.getModifyType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameter()) {
    query["Parameter"] = request.getParameter();
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
 * @summary Modifies the resource configuration of an instance. Invoking this operation creates an order for the Upgrade/Downgrade of instance resources and processes automatic payment. This operation does not support configuration changes for ECS or RDS products. Use the dedicated API of the corresponding product to execute the Upgrade/Downgrade.
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
 * @summary Queries the user\\"s account balance.
 *
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
 * @summary Queries the user\\"s account balance.
 *
 * @return QueryAccountBalanceResponse
 */
QueryAccountBalanceResponse Client::queryAccountBalance() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountBalanceWithOptions(runtime);
}

/**
 * @summary Queries account spending within a billing cycle and aggregates the data by resource owner.
 *
 * @description - Data for the current month is for reference only. Do not use it for reconciliation. The final bill for the current month is available to view or export after 12:00 on the third day of the next month. This delay accounts for mid-month events such as delayed billing, refunds, bill adjustments, and overdue payment write-offs.
 * - Data from the last 18 months is available.
 * - Billing data is updated 24 hours after actual resource consumption. Information related to instance IDs, such as instance configurations, instance types, instance nicknames, resource groups, public IP addresses, private IP addresses, and zones, is updated with a 48-hour delay.
 * - Billing data does not include the costs of attached resources, such as domain names, buckets, and elastic IP addresses (EIPs), for products such as CDN, OSS, and Internet Shared Bandwidth. To view statistics that include data for attached resources, go to Split Bill.
 * - For Alibaba Cloud Communications products, detailed data is available only from June 2020 onwards. For HiChina products, such as Domain Names and trademarks, detailed data is available only from November 2020 onwards.
 * - Each account is limited to 10 queries per second. If a timeout occurs, retry the request.
 *
 * @param request QueryAccountBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAccountBillResponse
 */
QueryAccountBillResponse Client::queryAccountBillWithOptions(const QueryAccountBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasBillingDate()) {
    query["BillingDate"] = request.getBillingDate();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.getGranularity();
  }

  if (!!request.hasIsGroupByProduct()) {
    query["IsGroupByProduct"] = request.getIsGroupByProduct();
  }

  if (!!request.hasOwnerID()) {
    query["OwnerID"] = request.getOwnerID();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
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
 * @summary Queries account spending within a billing cycle and aggregates the data by resource owner.
 *
 * @description - Data for the current month is for reference only. Do not use it for reconciliation. The final bill for the current month is available to view or export after 12:00 on the third day of the next month. This delay accounts for mid-month events such as delayed billing, refunds, bill adjustments, and overdue payment write-offs.
 * - Data from the last 18 months is available.
 * - Billing data is updated 24 hours after actual resource consumption. Information related to instance IDs, such as instance configurations, instance types, instance nicknames, resource groups, public IP addresses, private IP addresses, and zones, is updated with a 48-hour delay.
 * - Billing data does not include the costs of attached resources, such as domain names, buckets, and elastic IP addresses (EIPs), for products such as CDN, OSS, and Internet Shared Bandwidth. To view statistics that include data for attached resources, go to Split Bill.
 * - For Alibaba Cloud Communications products, detailed data is available only from June 2020 onwards. For HiChina products, such as Domain Names and trademarks, detailed data is available only from November 2020 onwards.
 * - Each account is limited to 10 queries per second. If a timeout occurs, retry the request.
 *
 * @param request QueryAccountBillRequest
 * @return QueryAccountBillResponse
 */
QueryAccountBillResponse Client::queryAccountBill(const QueryAccountBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountBillWithOptions(request, runtime);
}

/**
 * @summary Queries the income and expenditure details of account transactions.
 *
 * @param request QueryAccountTransactionDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAccountTransactionDetailsResponse
 */
QueryAccountTransactionDetailsResponse Client::queryAccountTransactionDetailsWithOptions(const QueryAccountTransactionDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.getCreateTimeStart();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRecordID()) {
    query["RecordID"] = request.getRecordID();
  }

  if (!!request.hasTransactionChannel()) {
    query["TransactionChannel"] = request.getTransactionChannel();
  }

  if (!!request.hasTransactionChannelSN()) {
    query["TransactionChannelSN"] = request.getTransactionChannelSN();
  }

  if (!!request.hasTransactionNumber()) {
    query["TransactionNumber"] = request.getTransactionNumber();
  }

  if (!!request.hasTransactionType()) {
    query["TransactionType"] = request.getTransactionType();
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
 * @summary Queries the income and expenditure details of account transactions.
 *
 * @param request QueryAccountTransactionDetailsRequest
 * @return QueryAccountTransactionDetailsResponse
 */
QueryAccountTransactionDetailsResponse Client::queryAccountTransactionDetails(const QueryAccountTransactionDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountTransactionDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries the transaction records of a user account.
 *
 * @param request QueryAccountTransactionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAccountTransactionsResponse
 */
QueryAccountTransactionsResponse Client::queryAccountTransactionsWithOptions(const QueryAccountTransactionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.getCreateTimeStart();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRecordID()) {
    query["RecordID"] = request.getRecordID();
  }

  if (!!request.hasTransactionChannel()) {
    query["TransactionChannel"] = request.getTransactionChannel();
  }

  if (!!request.hasTransactionChannelSN()) {
    query["TransactionChannelSN"] = request.getTransactionChannelSN();
  }

  if (!!request.hasTransactionFlow()) {
    query["TransactionFlow"] = request.getTransactionFlow();
  }

  if (!!request.hasTransactionNumber()) {
    query["TransactionNumber"] = request.getTransactionNumber();
  }

  if (!!request.hasTransactionType()) {
    query["TransactionType"] = request.getTransactionType();
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
 * @summary Queries the transaction records of a user account.
 *
 * @param request QueryAccountTransactionsRequest
 * @return QueryAccountTransactionsResponse
 */
QueryAccountTransactionsResponse Client::queryAccountTransactions(const QueryAccountTransactionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountTransactionsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of available instances for the user.
 *
 * @param request QueryAvailableInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAvailableInstancesResponse
 */
QueryAvailableInstancesResponse Client::queryAvailableInstancesWithOptions(const QueryAvailableInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.getCreateTimeStart();
  }

  if (!!request.hasEndTimeEnd()) {
    query["EndTimeEnd"] = request.getEndTimeEnd();
  }

  if (!!request.hasEndTimeStart()) {
    query["EndTimeStart"] = request.getEndTimeStart();
  }

  if (!!request.hasInstanceIDs()) {
    query["InstanceIDs"] = request.getInstanceIDs();
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

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRenewStatus()) {
    query["RenewStatus"] = request.getRenewStatus();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.getSubscriptionType();
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
 * @summary Queries the list of available instances for the user.
 *
 * @param request QueryAvailableInstancesRequest
 * @return QueryAvailableInstancesResponse
 */
QueryAvailableInstancesResponse Client::queryAvailableInstances(const QueryAvailableInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAvailableInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the settlement bills of a user within a specific billing cycle.
 *
 * @param request QueryBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBillResponse
 */
QueryBillResponse Client::queryBillWithOptions(const QueryBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasIsDisplayLocalCurrency()) {
    query["IsDisplayLocalCurrency"] = request.getIsDisplayLocalCurrency();
  }

  if (!!request.hasIsHideZeroCharge()) {
    query["IsHideZeroCharge"] = request.getIsHideZeroCharge();
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

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.getSubscriptionType();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Queries the settlement bills of a user within a specific billing cycle.
 *
 * @param request QueryBillRequest
 * @return QueryBillResponse
 */
QueryBillResponse Client::queryBill(const QueryBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBillWithOptions(request, runtime);
}

/**
 * @summary Queries the bill overview of a user for a specific billing cycle.
 *
 * @param request QueryBillOverviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBillOverviewResponse
 */
QueryBillOverviewResponse Client::queryBillOverviewWithOptions(const QueryBillOverviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.getBillingCycle();
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
 * @summary Queries the bill overview of a user for a specific billing cycle.
 *
 * @param request QueryBillOverviewRequest
 * @return QueryBillOverviewResponse
 */
QueryBillOverviewResponse Client::queryBillOverview(const QueryBillOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBillOverviewWithOptions(request, runtime);
}

/**
 * @summary Queries the records of bill subscriptions to OSS buckets.
 *
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
 * @summary Queries the records of bill subscriptions to OSS buckets.
 *
 * @return QueryBillToOSSSubscriptionResponse
 */
QueryBillToOSSSubscriptionResponse Client::queryBillToOSSSubscription() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBillToOSSSubscriptionWithOptions(runtime);
}

/**
 * @summary Queries user voucher information.
 *
 * @param request QueryCashCouponsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCashCouponsResponse
 */
QueryCashCouponsResponse Client::queryCashCouponsWithOptions(const QueryCashCouponsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveOrNot()) {
    query["EffectiveOrNot"] = request.getEffectiveOrNot();
  }

  if (!!request.hasExpiryTimeEnd()) {
    query["ExpiryTimeEnd"] = request.getExpiryTimeEnd();
  }

  if (!!request.hasExpiryTimeStart()) {
    query["ExpiryTimeStart"] = request.getExpiryTimeStart();
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
 * @summary Queries user voucher information.
 *
 * @param request QueryCashCouponsRequest
 * @return QueryCashCouponsResponse
 */
QueryCashCouponsResponse Client::queryCashCoupons(const QueryCashCouponsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCashCouponsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of commodity information based on a product code.
 *
 * @description Retrieves a list of commodity information based on a product code.
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
 * @summary Retrieves a list of commodity information based on a product code.
 *
 * @description Retrieves a list of commodity information based on a product code.
 *
 * @param request QueryCommodityListRequest
 * @return QueryCommodityListResponse
 */
QueryCommodityListResponse Client::queryCommodityList(const QueryCommodityListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCommodityListWithOptions(request, runtime);
}

/**
 * @summary Queries all financial unit nodes under the current node of the financial unit tree. If ParentUnitId is set to -1, all financial units are queried.
 *
 * @param request QueryCostUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCostUnitResponse
 */
QueryCostUnitResponse Client::queryCostUnitWithOptions(const QueryCostUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerUid()) {
    query["OwnerUid"] = request.getOwnerUid();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentUnitId()) {
    query["ParentUnitId"] = request.getParentUnitId();
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
 * @summary Queries all financial unit nodes under the current node of the financial unit tree. If ParentUnitId is set to -1, all financial units are queried.
 *
 * @param request QueryCostUnitRequest
 * @return QueryCostUnitResponse
 */
QueryCostUnitResponse Client::queryCostUnit(const QueryCostUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCostUnitWithOptions(request, runtime);
}

/**
 * @summary Queries the list of resource instances that belong to a financial unit of a user. When UnitId is set to 0, the query returns unallocated primary and sub-resource instances.
 *
 * @param request QueryCostUnitResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCostUnitResourceResponse
 */
QueryCostUnitResourceResponse Client::queryCostUnitResourceWithOptions(const QueryCostUnitResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerUid()) {
    query["OwnerUid"] = request.getOwnerUid();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUnitId()) {
    query["UnitId"] = request.getUnitId();
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
 * @summary Queries the list of resource instances that belong to a financial unit of a user. When UnitId is set to 0, the query returns unallocated primary and sub-resource instances.
 *
 * @param request QueryCostUnitResourceRequest
 * @return QueryCostUnitResourceResponse
 */
QueryCostUnitResourceResponse Client::queryCostUnitResource(const QueryCostUnitResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCostUnitResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the Alibaba Cloud invoice mailing address information service.
 *
 * @param request QueryCustomerAddressListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCustomerAddressListResponse
 */
QueryCustomerAddressListResponse Client::queryCustomerAddressListWithOptions(const QueryCustomerAddressListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries the Alibaba Cloud invoice mailing address information service.
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
 * - Only usage records from the past year are supported.
 *
 * @param request QueryDPUtilizationDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDPUtilizationDetailResponse
 */
QueryDPUtilizationDetailResponse Client::queryDPUtilizationDetailWithOptions(const QueryDPUtilizationDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasDeductedInstanceId()) {
    query["DeductedInstanceId"] = request.getDeductedInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIncludeShare()) {
    query["IncludeShare"] = request.getIncludeShare();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceSpec()) {
    query["InstanceSpec"] = request.getInstanceSpec();
  }

  if (!!request.hasLastToken()) {
    query["LastToken"] = request.getLastToken();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * - Only usage records from the past year are supported.
 *
 * @param request QueryDPUtilizationDetailRequest
 * @return QueryDPUtilizationDetailResponse
 */
QueryDPUtilizationDetailResponse Client::queryDPUtilizationDetail(const QueryDPUtilizationDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDPUtilizationDetailWithOptions(request, runtime);
}

/**
 * @summary Queries a list of objects that are eligible for invoicing.
 *
 * @param request QueryEvaluateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEvaluateListResponse
 */
QueryEvaluateListResponse Client::queryEvaluateListWithOptions(const QueryEvaluateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillCycle()) {
    query["BillCycle"] = request.getBillCycle();
  }

  if (!!request.hasBizTypeList()) {
    query["BizTypeList"] = request.getBizTypeList();
  }

  if (!!request.hasEndAmount()) {
    query["EndAmount"] = request.getEndAmount();
  }

  if (!!request.hasEndBizTime()) {
    query["EndBizTime"] = request.getEndBizTime();
  }

  if (!!request.hasEndSearchTime()) {
    query["EndSearchTime"] = request.getEndSearchTime();
  }

  if (!!request.hasOutBizId()) {
    query["OutBizId"] = request.getOutBizId();
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

  if (!!request.hasSortType()) {
    query["SortType"] = request.getSortType();
  }

  if (!!request.hasStartAmount()) {
    query["StartAmount"] = request.getStartAmount();
  }

  if (!!request.hasStartBizTime()) {
    query["StartBizTime"] = request.getStartBizTime();
  }

  if (!!request.hasStartSearchTime()) {
    query["StartSearchTime"] = request.getStartSearchTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Queries a list of objects that are eligible for invoicing.
 *
 * @param request QueryEvaluateListRequest
 * @return QueryEvaluateListResponse
 */
QueryEvaluateListResponse Client::queryEvaluateList(const QueryEvaluateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEvaluateListWithOptions(request, runtime);
}

/**
 * @summary Queries the enterprise financial account information of an account that has primary-subsidiary relationship permissions.
 *
 * @param request QueryFinancialAccountInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFinancialAccountInfoResponse
 */
QueryFinancialAccountInfoResponse Client::queryFinancialAccountInfoWithOptions(const QueryFinancialAccountInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Queries the enterprise financial account information of an account that has primary-subsidiary relationship permissions.
 *
 * @param request QueryFinancialAccountInfoRequest
 * @return QueryFinancialAccountInfoResponse
 */
QueryFinancialAccountInfoResponse Client::queryFinancialAccountInfo(const QueryFinancialAccountInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFinancialAccountInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the usage summary of all product instances or billable items for an account in a billing cycle. This operation has been upgraded to DescribeInstanceBill. This operation no longer queries data beyond the 50,000th row.
 *
 * @description ## API description
 * Note the following when you call this operation:
 * - The API for instance bills has been upgraded. We recommend that you use the new operation [DescribeInstanceBill](https://help.aliyun.com/document_detail/209402.html). This operation no longer supports querying data beyond the 50,000th row.
 * - Instance bills are generated based on split billing data. A delay of about one day may occur.
 * - Instance information may change within a billing cycle. The instance Config and Spec in the monthly summary reflect the information at the time the record was generated. For more information, see the corresponding detailed bill.
 * - Data for Alibaba Cloud Communications products is available from June 2020. Data for HiChina products is available from November 2020.
 * <props="intl">
 * - For the international site (alibabacloud.com), select Singapore as the endpoint.
 *
 * @param request QueryInstanceBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInstanceBillResponse
 */
QueryInstanceBillResponse Client::queryInstanceBillWithOptions(const QueryInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasBillingDate()) {
    query["BillingDate"] = request.getBillingDate();
  }

  if (!!request.hasGranularity()) {
    query["Granularity"] = request.getGranularity();
  }

  if (!!request.hasIsBillingItem()) {
    query["IsBillingItem"] = request.getIsBillingItem();
  }

  if (!!request.hasIsHideZeroCharge()) {
    query["IsHideZeroCharge"] = request.getIsHideZeroCharge();
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
 * @summary Queries the usage summary of all product instances or billable items for an account in a billing cycle. This operation has been upgraded to DescribeInstanceBill. This operation no longer queries data beyond the 50,000th row.
 *
 * @description ## API description
 * Note the following when you call this operation:
 * - The API for instance bills has been upgraded. We recommend that you use the new operation [DescribeInstanceBill](https://help.aliyun.com/document_detail/209402.html). This operation no longer supports querying data beyond the 50,000th row.
 * - Instance bills are generated based on split billing data. A delay of about one day may occur.
 * - Instance information may change within a billing cycle. The instance Config and Spec in the monthly summary reflect the information at the time the record was generated. For more information, see the corresponding detailed bill.
 * - Data for Alibaba Cloud Communications products is available from June 2020. Data for HiChina products is available from November 2020.
 * <props="intl">
 * - For the international site (alibabacloud.com), select Singapore as the endpoint.
 *
 * @param request QueryInstanceBillRequest
 * @return QueryInstanceBillResponse
 */
QueryInstanceBillResponse Client::queryInstanceBill(const QueryInstanceBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInstanceBillWithOptions(request, runtime);
}

/**
 * @summary Queries a list of instances by tags.
 *
 * @param request QueryInstanceByTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInstanceByTagResponse
 */
QueryInstanceByTagResponse Client::queryInstanceByTagWithOptions(const QueryInstanceByTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Queries a list of instances by tags.
 *
 * @param request QueryInstanceByTagRequest
 * @return QueryInstanceByTagResponse
 */
QueryInstanceByTagResponse Client::queryInstanceByTag(const QueryInstanceByTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInstanceByTagWithOptions(request, runtime);
}

/**
 * @summary This API is deprecated. Use the following APIs to retrieve the amortized cost: `DescribeInstanceAmortizedCostByAmortizationPeriod` - retrieves instance costs by amortization period; `DescribeProductAmortizedCostByAmortizationPeriod` - retrieves product costs by amortization period; `DescribeInstanceAmortizedCostByConsumePeriod` - retrieves instance costs by consume period; `DescribeProductAmortizedCostByConsumePeriod` - retrieves product costs by consume period.
 *
 * @param request QueryInstanceGaapCostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInstanceGaapCostResponse
 */
QueryInstanceGaapCostResponse Client::queryInstanceGaapCostWithOptions(const QueryInstanceGaapCostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary This API is deprecated. Use the following APIs to retrieve the amortized cost: `DescribeInstanceAmortizedCostByAmortizationPeriod` - retrieves instance costs by amortization period; `DescribeProductAmortizedCostByAmortizationPeriod` - retrieves product costs by amortization period; `DescribeInstanceAmortizedCostByConsumePeriod` - retrieves instance costs by consume period; `DescribeProductAmortizedCostByConsumePeriod` - retrieves product costs by consume period.
 *
 * @param request QueryInstanceGaapCostRequest
 * @return QueryInstanceGaapCostResponse
 */
QueryInstanceGaapCostResponse Client::queryInstanceGaapCost(const QueryInstanceGaapCostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInstanceGaapCostWithOptions(request, runtime);
}

/**
 * @summary Queries the invoicing information of an Alibaba Cloud user.
 *
 * @param request QueryInvoicingCustomerListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryInvoicingCustomerListResponse
 */
QueryInvoicingCustomerListResponse Client::queryInvoicingCustomerListWithOptions(const QueryInvoicingCustomerListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries the invoicing information of an Alibaba Cloud user.
 *
 * @param request QueryInvoicingCustomerListRequest
 * @return QueryInvoicingCustomerListResponse
 */
QueryInvoicingCustomerListResponse Client::queryInvoicingCustomerList(const QueryInvoicingCustomerListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryInvoicingCustomerListWithOptions(request, runtime);
}

/**
 * @summary Queries the orders of users or distribution customers. By default, this operation queries orders created within the last hour. To query orders over a longer period, specify the CreateTimeStart and CreateTimeEnd parameters.
 *
 * @param request QueryOrdersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryOrdersResponse
 */
QueryOrdersResponse Client::queryOrdersWithOptions(const QueryOrdersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.getCreateTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.getCreateTimeStart();
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
 * @summary Queries the orders of users or distribution customers. By default, this operation queries orders created within the last hour. To query orders over a longer period, specify the CreateTimeStart and CreateTimeEnd parameters.
 *
 * @param request QueryOrdersRequest
 * @return QueryOrdersResponse
 */
QueryOrdersResponse Client::queryOrders(const QueryOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryOrdersWithOptions(request, runtime);
}

/**
 * @summary Queries the permissions for a master-member relationship based on the relationship ID.
 *
 * @param request QueryPermissionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPermissionListResponse
 */
QueryPermissionListResponse Client::queryPermissionListWithOptions(const QueryPermissionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRelationId()) {
    query["RelationId"] = request.getRelationId();
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
 * @summary Queries the permissions for a master-member relationship based on the relationship ID.
 *
 * @param request QueryPermissionListRequest
 * @return QueryPermissionListResponse
 */
QueryPermissionListResponse Client::queryPermissionList(const QueryPermissionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPermissionListWithOptions(request, runtime);
}

/**
 * @summary Queries user card package information.
 *
 * @param request QueryPrepaidCardsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPrepaidCardsResponse
 */
QueryPrepaidCardsResponse Client::queryPrepaidCardsWithOptions(const QueryPrepaidCardsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveOrNot()) {
    query["EffectiveOrNot"] = request.getEffectiveOrNot();
  }

  if (!!request.hasExpiryTimeEnd()) {
    query["ExpiryTimeEnd"] = request.getExpiryTimeEnd();
  }

  if (!!request.hasExpiryTimeStart()) {
    query["ExpiryTimeStart"] = request.getExpiryTimeStart();
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
 * @summary Queries user card package information.
 *
 * @param request QueryPrepaidCardsRequest
 * @return QueryPrepaidCardsResponse
 */
QueryPrepaidCardsResponse Client::queryPrepaidCards(const QueryPrepaidCardsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPrepaidCardsWithOptions(request, runtime);
}

/**
 * @summary Queries the pricing entities under a commodity. A pricing entity is the smallest product capability used for metering and cost calculation.
 *
 * @description Queries the pricing entities under a commodity. A pricing entity is the smallest product capability used for metering and cost calculation.
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
 * @summary Queries the pricing entities under a commodity. A pricing entity is the smallest product capability used for metering and cost calculation.
 *
 * @description Queries the pricing entities under a commodity. A pricing entity is the smallest product capability used for metering and cost calculation.
 *
 * @param request QueryPriceEntityListRequest
 * @return QueryPriceEntityListResponse
 */
QueryPriceEntityListResponse Client::queryPriceEntityList(const QueryPriceEntityListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPriceEntityListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of products available for the current account to order. The response includes the product code, product name, and subscription type (subscription or pay-as-you-go).
 *
 * @param request QueryProductListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryProductListResponse
 */
QueryProductListResponse Client::queryProductListWithOptions(const QueryProductListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryTotalCount()) {
    query["QueryTotalCount"] = request.getQueryTotalCount();
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
 * @summary Queries the list of products available for the current account to order. The response includes the product code, product name, and subscription type (subscription or pay-as-you-go).
 *
 * @param request QueryProductListRequest
 * @return QueryProductListResponse
 */
QueryProductListResponse Client::queryProductList(const QueryProductListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryProductListWithOptions(request, runtime);
}

/**
 * @summary Queries the usage of reserved instances (RIs).
 *
 * @param request QueryRIUtilizationDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRIUtilizationDetailResponse
 */
QueryRIUtilizationDetailResponse Client::queryRIUtilizationDetailWithOptions(const QueryRIUtilizationDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeductedInstanceId()) {
    query["DeductedInstanceId"] = request.getDeductedInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceSpec()) {
    query["InstanceSpec"] = request.getInstanceSpec();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRICommodityCode()) {
    query["RICommodityCode"] = request.getRICommodityCode();
  }

  if (!!request.hasRIInstanceId()) {
    query["RIInstanceId"] = request.getRIInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the usage of reserved instances (RIs).
 *
 * @param request QueryRIUtilizationDetailRequest
 * @return QueryRIUtilizationDetailResponse
 */
QueryRIUtilizationDetailResponse Client::queryRIUtilizationDetail(const QueryRIUtilizationDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRIUtilizationDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the redemption ticket information of a user.
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
 * @summary Queries the redemption ticket information of a user.
 *
 * @param request QueryRedeemRequest
 * @return QueryRedeemResponse
 */
QueryRedeemResponse Client::queryRedeem(const QueryRedeemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRedeemWithOptions(request, runtime);
}

/**
 * @summary Queries a list of the relationships of member accounts.
 *
 * @param request QueryRelationListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRelationListResponse
 */
QueryRelationListResponse Client::queryRelationListWithOptions(const QueryRelationListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatusList()) {
    query["StatusList"] = request.getStatusList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Queries a list of the relationships of member accounts.
 *
 * @param request QueryRelationListRequest
 * @return QueryRelationListResponse
 */
QueryRelationListResponse Client::queryRelationList(const QueryRelationListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRelationListWithOptions(request, runtime);
}

/**
 * @summary Queries the available quota for a user in a reseller payment scenario.
 *
 * @param request QueryResellerAvailableQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryResellerAvailableQuotaResponse
 */
QueryResellerAvailableQuotaResponse Client::queryResellerAvailableQuotaWithOptions(const QueryResellerAvailableQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasItemCodes()) {
    query["ItemCodes"] = request.getItemCodes();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries the available quota for a user in a reseller payment scenario.
 *
 * @param request QueryResellerAvailableQuotaRequest
 * @return QueryResellerAvailableQuotaResponse
 */
QueryResellerAvailableQuotaResponse Client::queryResellerAvailableQuota(const QueryResellerAvailableQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryResellerAvailableQuotaWithOptions(request, runtime);
}

/**
 * @description Queries the alarm thresholds for low quotas.
 *
 * @param request QueryResellerUserAlarmThresholdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryResellerUserAlarmThresholdResponse
 */
QueryResellerUserAlarmThresholdResponse Client::queryResellerUserAlarmThresholdWithOptions(const QueryResellerUserAlarmThresholdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmType()) {
    query["AlarmType"] = request.getAlarmType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @description Queries the alarm thresholds for low quotas.
 *
 * @param request QueryResellerUserAlarmThresholdRequest
 * @return QueryResellerUserAlarmThresholdResponse
 */
QueryResellerUserAlarmThresholdResponse Client::queryResellerUserAlarmThreshold(const QueryResellerUserAlarmThresholdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryResellerUserAlarmThresholdWithOptions(request, runtime);
}

/**
 * @summary Queries the instances of a specific resource plan for a user. Only valid resource plans are supported.
 *
 * @param request QueryResourcePackageInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryResourcePackageInstancesResponse
 */
QueryResourcePackageInstancesResponse Client::queryResourcePackageInstancesWithOptions(const QueryResourcePackageInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpiryTimeEnd()) {
    query["ExpiryTimeEnd"] = request.getExpiryTimeEnd();
  }

  if (!!request.hasExpiryTimeStart()) {
    query["ExpiryTimeStart"] = request.getExpiryTimeStart();
  }

  if (!!request.hasIncludePartner()) {
    query["IncludePartner"] = request.getIncludePartner();
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

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
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
 * @summary Queries the instances of a specific resource plan for a user. Only valid resource plans are supported.
 *
 * @param request QueryResourcePackageInstancesRequest
 * @return QueryResourcePackageInstancesResponse
 */
QueryResourcePackageInstancesResponse Client::queryResourcePackageInstances(const QueryResourcePackageInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryResourcePackageInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of savings plan deductions.
 *
 * @param request QuerySavingsPlansDeductLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySavingsPlansDeductLogResponse
 */
QuerySavingsPlansDeductLogResponse Client::querySavingsPlansDeductLogWithOptions(const QuerySavingsPlansDeductLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasLocale()) {
    query["Locale"] = request.getLocale();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the details of savings plan deductions.
 *
 * @param request QuerySavingsPlansDeductLogRequest
 * @return QuerySavingsPlansDeductLogResponse
 */
QuerySavingsPlansDeductLogResponse Client::querySavingsPlansDeductLog(const QuerySavingsPlansDeductLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySavingsPlansDeductLogWithOptions(request, runtime);
}

/**
 * @summary Queries the discount information for savings plans.
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
 * @summary Queries the discount information for savings plans.
 *
 * @param request QuerySavingsPlansDiscountRequest
 * @return QuerySavingsPlansDiscountResponse
 */
QuerySavingsPlansDiscountResponse Client::querySavingsPlansDiscount(const QuerySavingsPlansDiscountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySavingsPlansDiscountWithOptions(request, runtime);
}

/**
 * @summary Queries information about your savings plan instances.
 *
 * @param request QuerySavingsPlansInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySavingsPlansInstanceResponse
 */
QuerySavingsPlansInstanceResponse Client::querySavingsPlansInstanceWithOptions(const QuerySavingsPlansInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLocale()) {
    query["Locale"] = request.getLocale();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Queries information about your savings plan instances.
 *
 * @param request QuerySavingsPlansInstanceRequest
 * @return QuerySavingsPlansInstanceResponse
 */
QuerySavingsPlansInstanceResponse Client::querySavingsPlansInstance(const QuerySavingsPlansInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySavingsPlansInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the settlement bills of a user for a specific billing cycle. Supports domestic accounts with more than 50,000 bill entries.
 *
 * @description - The query results for the current month are for reference only and cannot be used for reconciliation. The final bill for the current month is available for viewing or export after 12:00 on the 2nd of the following month. During the month, a few scenarios may occur, including but not limited to delayed billing, refunds, adjustments, and overdue payment write-offs.
 * - Bill data is updated with a 5-hour delay relative to actual cost consumption.
 * - For bills in the "Unsettled" state in historical billing cycles, the status is updated to settled 5 hours after payment. For bills in the "Unsettled" state in the current month, the status is updated to settled when the bill is generated at 12:00 on the 2nd of the following month.
 * - This API supports graceful backoff with a request rate of 600/60(s).
 * - The rate limit per user is 10 requests per second. If a timeout occurs, retry the request.
 *
 * @param request QuerySettleBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySettleBillResponse
 */
QuerySettleBillResponse Client::querySettleBillWithOptions(const QuerySettleBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.getBillingCycle();
  }

  if (!!request.hasIsDisplayLocalCurrency()) {
    query["IsDisplayLocalCurrency"] = request.getIsDisplayLocalCurrency();
  }

  if (!!request.hasIsHideZeroCharge()) {
    query["IsHideZeroCharge"] = request.getIsHideZeroCharge();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRecordID()) {
    query["RecordID"] = request.getRecordID();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.getSubscriptionType();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Queries the settlement bills of a user for a specific billing cycle. Supports domestic accounts with more than 50,000 bill entries.
 *
 * @description - The query results for the current month are for reference only and cannot be used for reconciliation. The final bill for the current month is available for viewing or export after 12:00 on the 2nd of the following month. During the month, a few scenarios may occur, including but not limited to delayed billing, refunds, adjustments, and overdue payment write-offs.
 * - Bill data is updated with a 5-hour delay relative to actual cost consumption.
 * - For bills in the "Unsettled" state in historical billing cycles, the status is updated to settled 5 hours after payment. For bills in the "Unsettled" state in the current month, the status is updated to settled when the bill is generated at 12:00 on the 2nd of the following month.
 * - This API supports graceful backoff with a request rate of 600/60(s).
 * - The rate limit per user is 10 requests per second. If a timeout occurs, retry the request.
 *
 * @param request QuerySettleBillRequest
 * @return QuerySettleBillResponse
 */
QuerySettleBillResponse Client::querySettleBill(const QuerySettleBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySettleBillWithOptions(request, runtime);
}

/**
 * @summary Queries the list of SKUs and their list prices under a specified pricing entity of a commodity. A product feature typically has 1 to multiple SKUs, and some products can have tens of thousands of SKUs. The request parameters support filtered queries based on specific SKU configuration conditions.
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
    request.setPriceFactorConditionMapShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPriceFactorConditionMap(), "PriceFactorConditionMap", "json"));
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
 * @summary Queries the list of SKUs and their list prices under a specified pricing entity of a commodity. A product feature typically has 1 to multiple SKUs, and some products can have tens of thousands of SKUs. The request parameters support filtered queries based on specific SKU configuration conditions.
 *
 * @param request QuerySkuPriceListRequest
 * @return QuerySkuPriceListResponse
 */
QuerySkuPriceListResponse Client::querySkuPriceList(const QuerySkuPriceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySkuPriceListWithOptions(request, runtime);
}

/**
 * @summary Queries split bills. This API has been upgraded. We recommend that you use the new DescribeSplitItemBill operation.
 *
 * @description - The API for split bills is upgraded. We recommend that you use the new [DescribeSplitItemBill](https://help.aliyun.com/document_detail/208169.html) operation. This operation no longer supports querying more than 50,000 rows of data.
 * - The data is consistent with the split bill data for the specified billing cycle in the User Center.
 * - You can query split bills that were generated within the last 12 months.
 * - To use this feature, you must first enable it on the [Split Bill](https://usercenter2.aliyun.com/finance/split-bill) page in the console.
 *
 * @param request QuerySplitItemBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySplitItemBillResponse
 */
QuerySplitItemBillResponse Client::querySplitItemBillWithOptions(const QuerySplitItemBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillOwnerId()) {
    query["BillOwnerId"] = request.getBillOwnerId();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.getBillingCycle();
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
 * @summary Queries split bills. This API has been upgraded. We recommend that you use the new DescribeSplitItemBill operation.
 *
 * @description - The API for split bills is upgraded. We recommend that you use the new [DescribeSplitItemBill](https://help.aliyun.com/document_detail/208169.html) operation. This operation no longer supports querying more than 50,000 rows of data.
 * - The data is consistent with the split bill data for the specified billing cycle in the User Center.
 * - You can query split bills that were generated within the last 12 months.
 * - To use this feature, you must first enable it on the [Split Bill](https://usercenter2.aliyun.com/finance/split-bill) page in the console.
 *
 * @param request QuerySplitItemBillRequest
 * @return QuerySplitItemBillResponse
 */
QuerySplitItemBillResponse Client::querySplitItemBill(const QuerySplitItemBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySplitItemBillWithOptions(request, runtime);
}

/**
 * @summary Queries the metering records for the specified cloud service.
 *
 * @description ## API description
 * - The specified cloud service parameter must be one of the following cloud service codes. The metering data types include hourly and daily.
 * - The time format must comply with the ISO 8601 standard. Time specification constraints:
 * 	-	Due to delays in data push, the data integrity of hourly metering data is guaranteed for the past 24 hours, and the data integrity of daily metering data is guaranteed for the past 2 days.
 * 	-	The time span can cover the metering data of the most recent quarter.
 *
 * @param request QueryUserOmsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUserOmsDataResponse
 */
QueryUserOmsDataResponse Client::queryUserOmsDataWithOptions(const QueryUserOmsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataType()) {
    query["DataType"] = request.getDataType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTable()) {
    query["Table"] = request.getTable();
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
 * @summary Queries the metering records for the specified cloud service.
 *
 * @description ## API description
 * - The specified cloud service parameter must be one of the following cloud service codes. The metering data types include hourly and daily.
 * - The time format must comply with the ISO 8601 standard. Time specification constraints:
 * 	-	Due to delays in data push, the data integrity of hourly metering data is guaranteed for the past 24 hours, and the data integrity of daily metering data is guaranteed for the past 2 days.
 * 	-	The time span can cover the metering data of the most recent quarter.
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
 * @description 1. Only the actual paid amount is refunded. Used vouchers are not refunded.
 * 2. Carefully verify the information about the resource to be unsubscribed, and confirm the unsubscription terms and refund amount. Resources cannot be recovered after unsubscription.
 * 1. This operation can be called only by direct customers. Reseller customers cannot use this operation.
 * 4. For other questions, refer to: <props="china">[Refund policy](https://help.aliyun.com/knowledge_detail/116043.html?spm=a2c81.e1d666e.app.2.62ae11271Kd6iM)<props="intl">[Refund rules for Alibaba Cloud International site](https://www.alibabacloud.com/help/zh/user-center/user-guide/refund-rules)
 *
 * @param request RefundInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefundInstanceResponse
 */
RefundInstanceResponse Client::refundInstanceWithOptions(const RefundInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasImmediatelyRelease()) {
    query["ImmediatelyRelease"] = request.getImmediatelyRelease();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
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
 * @description 1. Only the actual paid amount is refunded. Used vouchers are not refunded.
 * 2. Carefully verify the information about the resource to be unsubscribed, and confirm the unsubscription terms and refund amount. Resources cannot be recovered after unsubscription.
 * 1. This operation can be called only by direct customers. Reseller customers cannot use this operation.
 * 4. For other questions, refer to: <props="china">[Refund policy](https://help.aliyun.com/knowledge_detail/116043.html?spm=a2c81.e1d666e.app.2.62ae11271Kd6iM)<props="intl">[Refund rules for Alibaba Cloud International site](https://www.alibabacloud.com/help/zh/user-center/user-guide/refund-rules)
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
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRenewStatus()) {
    query["RenewStatus"] = request.getRenewStatus();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.getSubscriptionType();
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
 * @summary Disassociates a RAM user from an Alibaba Cloud account.
 *
 * @param request RelieveAccountRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RelieveAccountRelationResponse
 */
RelieveAccountRelationResponse Client::relieveAccountRelationWithOptions(const RelieveAccountRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChildUserId()) {
    query["ChildUserId"] = request.getChildUserId();
  }

  if (!!request.hasParentUserId()) {
    query["ParentUserId"] = request.getParentUserId();
  }

  if (!!request.hasRelationId()) {
    query["RelationId"] = request.getRelationId();
  }

  if (!!request.hasRelationType()) {
    query["RelationType"] = request.getRelationType();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
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
 * @summary Disassociates a RAM user from an Alibaba Cloud account.
 *
 * @param request RelieveAccountRelationRequest
 * @return RelieveAccountRelationResponse
 */
RelieveAccountRelationResponse Client::relieveAccountRelation(const RelieveAccountRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return relieveAccountRelationWithOptions(request, runtime);
}

/**
 * @summary Renews an instance and changes its configuration. The configuration change is applied after the renewal order takes effect. Payment is processed automatically. This operation cannot be used to create ECS or RDS instances.
 *
 * @param request RenewChangeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewChangeInstanceResponse
 */
RenewChangeInstanceResponse Client::renewChangeInstanceWithOptions(const RenewChangeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParameter()) {
    query["Parameter"] = request.getParameter();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRenewPeriod()) {
    query["RenewPeriod"] = request.getRenewPeriod();
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
 * @summary Renews an instance and changes its configuration. The configuration change is applied after the renewal order takes effect. Payment is processed automatically. This operation cannot be used to create ECS or RDS instances.
 *
 * @param request RenewChangeInstanceRequest
 * @return RenewChangeInstanceResponse
 */
RenewChangeInstanceResponse Client::renewChangeInstance(const RenewChangeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewChangeInstanceWithOptions(request, runtime);
}

/**
 * @summary Renews a specified instance. This operation does not support renewing ECS, RDS, or Redis instances. To renew these instances, call the dedicated renewal API of the corresponding service.
 *
 * @param request RenewInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstanceWithOptions(const RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRenewPeriod()) {
    query["RenewPeriod"] = request.getRenewPeriod();
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
 * @summary Renews a specified instance. This operation does not support renewing ECS, RDS, or Redis instances. To renew these instances, call the dedicated renewal API of the corresponding service.
 *
 * @param request RenewInstanceRequest
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstance(const RenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewInstanceWithOptions(request, runtime);
}

/**
 * @summary Renews a resource package instance.
 *
 * @param request RenewResourcePackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewResourcePackageResponse
 */
RenewResourcePackageResponse Client::renewResourcePackageWithOptions(const RenewResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasEffectiveDate()) {
    query["EffectiveDate"] = request.getEffectiveDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
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
 * @summary Renews a resource package instance.
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
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasUnifyExpireDay()) {
    query["UnifyExpireDay"] = request.getUnifyExpireDay();
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
    query["InstanceIDs"] = request.getInstanceIDs();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasRenewalPeriod()) {
    query["RenewalPeriod"] = request.getRenewalPeriod();
  }

  if (!!request.hasRenewalPeriodUnit()) {
    query["RenewalPeriodUnit"] = request.getRenewalPeriodUnit();
  }

  if (!!request.hasRenewalStatus()) {
    query["RenewalStatus"] = request.getRenewalStatus();
  }

  if (!!request.hasSubscriptionType()) {
    query["SubscriptionType"] = request.getSubscriptionType();
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
 * @summary Configures low-balance alert rules for quotas.
 *
 * @description Configures low-balance alert rules for quotas.
 *
 * @param request SetResellerUserAlarmThresholdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetResellerUserAlarmThresholdResponse
 */
SetResellerUserAlarmThresholdResponse Client::setResellerUserAlarmThresholdWithOptions(const SetResellerUserAlarmThresholdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmThresholds()) {
    query["AlarmThresholds"] = request.getAlarmThresholds();
  }

  if (!!request.hasAlarmType()) {
    query["AlarmType"] = request.getAlarmType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Configures low-balance alert rules for quotas.
 *
 * @description Configures low-balance alert rules for quotas.
 *
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
 * @description 设置用户配额账本的Quota额度
 *
 * @param request SetResellerUserQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetResellerUserQuotaResponse
 */
SetResellerUserQuotaResponse Client::setResellerUserQuotaWithOptions(const SetResellerUserQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasCurrency()) {
    query["Currency"] = request.getCurrency();
  }

  if (!!request.hasOutBizId()) {
    query["OutBizId"] = request.getOutBizId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @description 设置用户配额账本的Quota额度
 *
 * @param request SetResellerUserQuotaRequest
 * @return SetResellerUserQuotaResponse
 */
SetResellerUserQuotaResponse Client::setResellerUserQuota(const SetResellerUserQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setResellerUserQuotaWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the SQL audit feature for users.
 *
 * @description Sets the status of a reseller\\"s user account, such as frozen or hosted.
 *
 * @param request SetResellerUserStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetResellerUserStatusResponse
 */
SetResellerUserStatusResponse Client::setResellerUserStatusWithOptions(const SetResellerUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasStopMode()) {
    query["StopMode"] = request.getStopMode();
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
 * @summary Enables or disables the SQL audit feature for users.
 *
 * @description Sets the status of a reseller\\"s user account, such as frozen or hosted.
 *
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
 * @summary Subscribes to bill files by using Object Storage Service (OSS), which stores billing data in a specified OSS bucket.
 *
 * @description Before calling this operation, note the following information:
 * - You can subscribe to one type of bill file at a time.
 * - After subscription, the bill file generated on the previous day is pushed daily starting from the next day. On the 4th of each month, the full bill files for the entire billing cycle of the previous month are pushed. The monthly bill PDF is pushed on the 4th of each month for the previous month.
 * - Bill files generated on a daily basis may be delayed. Delayed bills are pushed the day after they are generated and may include bills from earlier days that were delayed until the previous day. Pull the full files for the previous month at the beginning of each month.
 * > To use OSS subscription for the first time, grant the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission to the subscribing user. If the authorization is revoked, the system stops pushing files, and the user must re-authorize.
 * - This subscription is the same feature as "Bill Data Storage" in the Expenses and Costs console. Subscriptions are synchronized between the two.
 * - When subscribing to a directory under a bucket, follow the directory naming conventions:
 *     - Emojis are not allowed. Use valid UTF-8 characters.
 *     - Use / to separate paths and quickly create subdirectories. Do not start with / or \\, and do not use consecutive / characters.
 *     - A subdirectory named .. is not allowed.
 *     - The total length must be 1 to 254 characters.
 * - File names:
 *     - **BillingItemDetailForBillingPeriod** (billing item details)
 *     
 *         - Daily push file name format: `UID_BillingItemDetail_YYYYMMDD`, for example, `169**_BillingItemDetail_20190310`.
 *     
 *         - Full file name format at the beginning of the next month: `UID_BillingItemDetail_YYYYMM`, for example, `169**_BillingItemDetail_201903`.
 *     
 *     - **InstanceDetailForBillingPeriod** (instance bill details)
 *     
 *         - Daily push file name format: `UID_InstanceDetail_YYYYMMDD`, for example, `169**_InstanceDetail_20190310`.
 *     
 *         - Full file name format at the beginning of the next month: `UID_InstanceDetail_YYYYMM`, for example, `169**_InstanceDetail_201903`.
 *     - **InstanceDetailMonthly** (instance bill summary by billing cycle)
 *     
 *         - Daily push file name format: `UID_InstanceDetailMonthly_YYYYMM`, for example, `169**_InstanceDetailMonthly_201903`. This file is updated daily with full data from the beginning of the month to the current day, until the 4th of the next month.
 *     - **BillingItemDetailMonthly** (billing item summary by billing cycle)
 *     
 *         - Daily push file name format: `UID_BillingItemDetailMonthly_YYYYMM`, for example, `169**_BillingItemDetailMonthly_201903`. This file is updated daily with full data from the beginning of the month to the current day, until the 4th of the next month.
 *     - **SplitItemDetailDaily** (split bill daily summary)
 *     
 *         - Daily push file name format: `UID_SplitItemDetailDaily_YYYYMM`, for example, `169**_SplitItemDetailDaily_201903`. This file is updated daily with full data from the beginning of the month to the current day, until the 4th of the next month.
 *     - **MonthBill** (monthly bill PDF)
 *     
 *         - Monthly push file name format: `UID_MonthBill_YYYYMM`, for example, `169**_MonthBill_201903`. The file for the previous month is pushed on the 4th of each month.
 * - Except for MonthBill, which is a PDF file, all other file types are CSV files. If the number of rows in a bill file exceeds a certain threshold, the file is automatically split into multiple CSV files, which are then compressed into a single ZIP file. The ZIP file name follows the same format.
 *
 * @param request SubscribeBillToOSSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubscribeBillToOSSResponse
 */
SubscribeBillToOSSResponse Client::subscribeBillToOSSWithOptions(const SubscribeBillToOSSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginBillingCycle()) {
    query["BeginBillingCycle"] = request.getBeginBillingCycle();
  }

  if (!!request.hasBucketOwnerId()) {
    query["BucketOwnerId"] = request.getBucketOwnerId();
  }

  if (!!request.hasBucketPath()) {
    query["BucketPath"] = request.getBucketPath();
  }

  if (!!request.hasMultAccountRelSubscribe()) {
    query["MultAccountRelSubscribe"] = request.getMultAccountRelSubscribe();
  }

  if (!!request.hasRowLimitPerFile()) {
    query["RowLimitPerFile"] = request.getRowLimitPerFile();
  }

  if (!!request.hasSubscribeBucket()) {
    query["SubscribeBucket"] = request.getSubscribeBucket();
  }

  if (!!request.hasSubscribeType()) {
    query["SubscribeType"] = request.getSubscribeType();
  }

  if (!!request.hasUsingSsl()) {
    query["UsingSsl"] = request.getUsingSsl();
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
 * @summary Subscribes to bill files by using Object Storage Service (OSS), which stores billing data in a specified OSS bucket.
 *
 * @description Before calling this operation, note the following information:
 * - You can subscribe to one type of bill file at a time.
 * - After subscription, the bill file generated on the previous day is pushed daily starting from the next day. On the 4th of each month, the full bill files for the entire billing cycle of the previous month are pushed. The monthly bill PDF is pushed on the 4th of each month for the previous month.
 * - Bill files generated on a daily basis may be delayed. Delayed bills are pushed the day after they are generated and may include bills from earlier days that were delayed until the previous day. Pull the full files for the previous month at the beginning of each month.
 * > To use OSS subscription for the first time, grant the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission to the subscribing user. If the authorization is revoked, the system stops pushing files, and the user must re-authorize.
 * - This subscription is the same feature as "Bill Data Storage" in the Expenses and Costs console. Subscriptions are synchronized between the two.
 * - When subscribing to a directory under a bucket, follow the directory naming conventions:
 *     - Emojis are not allowed. Use valid UTF-8 characters.
 *     - Use / to separate paths and quickly create subdirectories. Do not start with / or \\, and do not use consecutive / characters.
 *     - A subdirectory named .. is not allowed.
 *     - The total length must be 1 to 254 characters.
 * - File names:
 *     - **BillingItemDetailForBillingPeriod** (billing item details)
 *     
 *         - Daily push file name format: `UID_BillingItemDetail_YYYYMMDD`, for example, `169**_BillingItemDetail_20190310`.
 *     
 *         - Full file name format at the beginning of the next month: `UID_BillingItemDetail_YYYYMM`, for example, `169**_BillingItemDetail_201903`.
 *     
 *     - **InstanceDetailForBillingPeriod** (instance bill details)
 *     
 *         - Daily push file name format: `UID_InstanceDetail_YYYYMMDD`, for example, `169**_InstanceDetail_20190310`.
 *     
 *         - Full file name format at the beginning of the next month: `UID_InstanceDetail_YYYYMM`, for example, `169**_InstanceDetail_201903`.
 *     - **InstanceDetailMonthly** (instance bill summary by billing cycle)
 *     
 *         - Daily push file name format: `UID_InstanceDetailMonthly_YYYYMM`, for example, `169**_InstanceDetailMonthly_201903`. This file is updated daily with full data from the beginning of the month to the current day, until the 4th of the next month.
 *     - **BillingItemDetailMonthly** (billing item summary by billing cycle)
 *     
 *         - Daily push file name format: `UID_BillingItemDetailMonthly_YYYYMM`, for example, `169**_BillingItemDetailMonthly_201903`. This file is updated daily with full data from the beginning of the month to the current day, until the 4th of the next month.
 *     - **SplitItemDetailDaily** (split bill daily summary)
 *     
 *         - Daily push file name format: `UID_SplitItemDetailDaily_YYYYMM`, for example, `169**_SplitItemDetailDaily_201903`. This file is updated daily with full data from the beginning of the month to the current day, until the 4th of the next month.
 *     - **MonthBill** (monthly bill PDF)
 *     
 *         - Monthly push file name format: `UID_MonthBill_YYYYMM`, for example, `169**_MonthBill_201903`. The file for the previous month is pushed on the 4th of each month.
 * - Except for MonthBill, which is a PDF file, all other file types are CSV files. If the number of rows in a bill file exceeds a certain threshold, the file is automatically split into multiple CSV files, which are then compressed into a single ZIP file. The ZIP file name follows the same format.
 *
 * @param request SubscribeBillToOSSRequest
 * @return SubscribeBillToOSSResponse
 */
SubscribeBillToOSSResponse Client::subscribeBillToOSS(const SubscribeBillToOSSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return subscribeBillToOSSWithOptions(request, runtime);
}

/**
 * @summary Adds tags to resources.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Adds tags to resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Cancels a detailed list export subscription.
 *
 * @param request UnsubscribeBillToOSSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnsubscribeBillToOSSResponse
 */
UnsubscribeBillToOSSResponse Client::unsubscribeBillToOSSWithOptions(const UnsubscribeBillToOSSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMultAccountRelSubscribe()) {
    query["MultAccountRelSubscribe"] = request.getMultAccountRelSubscribe();
  }

  if (!!request.hasSubscribeType()) {
    query["SubscribeType"] = request.getSubscribeType();
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
 * @summary Cancels a detailed list export subscription.
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
    query["All"] = request.getAll();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
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
    query["EffectiveDate"] = request.getEffectiveDate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.getSpecification();
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