#include <darabonba/Core.hpp>
#include <alibabacloud/Agency20250227.hpp>
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
using namespace AlibabaCloud::Agency20250227::Models;
namespace AlibabaCloud
{
namespace Agency20250227
{

AlibabaCloud::Agency20250227::Client::Client(Config &config): OpenApiClient(config){
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
    {"us-west-1" , "agency.aliyuncs.com"},
    {"ap-southeast-1" , "agency.ap-southeast-1.aliyuncs.com"}
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
 * @summary 创建客户小记
 *
 * @param request CustomerNoteCreateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CustomerNoteCreateResponse
 */
CustomerNoteCreateResponse Client::customerNoteCreateWithOptions(const CustomerNoteCreateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContactInformation()) {
    body["ContactInformation"] = request.getContactInformation();
  }

  if (!!request.hasContactName()) {
    body["ContactName"] = request.getContactName();
  }

  if (!!request.hasCustomerName()) {
    body["CustomerName"] = request.getCustomerName();
  }

  if (!!request.hasCustomerUid()) {
    body["CustomerUid"] = request.getCustomerUid();
  }

  if (!!request.hasNoteContent()) {
    body["NoteContent"] = request.getNoteContent();
  }

  if (!!request.hasTouchDate()) {
    body["TouchDate"] = request.getTouchDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CustomerNoteCreate"},
    {"version" , "2025-02-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CustomerNoteCreateResponse>();
}

/**
 * @summary 创建客户小记
 *
 * @param request CustomerNoteCreateRequest
 * @return CustomerNoteCreateResponse
 */
CustomerNoteCreateResponse Client::customerNoteCreate(const CustomerNoteCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return customerNoteCreateWithOptions(request, runtime);
}

/**
 * @summary 编辑客户小记
 *
 * @param request CustomerNoteEditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CustomerNoteEditResponse
 */
CustomerNoteEditResponse Client::customerNoteEditWithOptions(const CustomerNoteEditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContactInformation()) {
    body["ContactInformation"] = request.getContactInformation();
  }

  if (!!request.hasContactName()) {
    body["ContactName"] = request.getContactName();
  }

  if (!!request.hasNoteContent()) {
    body["NoteContent"] = request.getNoteContent();
  }

  if (!!request.hasNoteId()) {
    body["NoteId"] = request.getNoteId();
  }

  if (!!request.hasTouchDate()) {
    body["TouchDate"] = request.getTouchDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CustomerNoteEdit"},
    {"version" , "2025-02-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CustomerNoteEditResponse>();
}

/**
 * @summary 编辑客户小记
 *
 * @param request CustomerNoteEditRequest
 * @return CustomerNoteEditResponse
 */
CustomerNoteEditResponse Client::customerNoteEdit(const CustomerNoteEditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return customerNoteEditWithOptions(request, runtime);
}

/**
 * @summary 分页查询客户小记列表
 *
 * @param request CustomerNoteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CustomerNoteListResponse
 */
CustomerNoteListResponse Client::customerNoteListWithOptions(const CustomerNoteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCustomerUid()) {
    body["CustomerUid"] = request.getCustomerUid();
  }

  if (!!request.hasPageNum()) {
    body["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CustomerNoteList"},
    {"version" , "2025-02-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CustomerNoteListResponse>();
}

/**
 * @summary 分页查询客户小记列表
 *
 * @param request CustomerNoteListRequest
 * @return CustomerNoteListResponse
 */
CustomerNoteListResponse Client::customerNoteList(const CustomerNoteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return customerNoteListWithOptions(request, runtime);
}

/**
 * @summary 查询客户小记详情
 *
 * @param request CustomerNoteListDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CustomerNoteListDetailResponse
 */
CustomerNoteListDetailResponse Client::customerNoteListDetailWithOptions(const CustomerNoteListDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNoteId()) {
    body["NoteId"] = request.getNoteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CustomerNoteListDetail"},
    {"version" , "2025-02-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CustomerNoteListDetailResponse>();
}

/**
 * @summary 查询客户小记详情
 *
 * @param request CustomerNoteListDetailRequest
 * @return CustomerNoteListDetailResponse
 */
CustomerNoteListDetailResponse Client::customerNoteListDetail(const CustomerNoteListDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return customerNoteListDetailWithOptions(request, runtime);
}

/**
 * @summary Queries exported bill files.
 *
 * @param request GetBillDetailFileListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBillDetailFileListResponse
 */
GetBillDetailFileListResponse Client::getBillDetailFileListWithOptions(const GetBillDetailFileListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillMonth()) {
    query["BillMonth"] = request.getBillMonth();
  }

  if (!!request.hasOssAccessKeyId()) {
    query["OssAccessKeyId"] = request.getOssAccessKeyId();
  }

  if (!!request.hasOssAccessKeySecret()) {
    query["OssAccessKeySecret"] = request.getOssAccessKeySecret();
  }

  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.getOssBucketName();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.getOssEndpoint();
  }

  if (!!request.hasOssRegion()) {
    query["OssRegion"] = request.getOssRegion();
  }

  if (!!request.hasOssSecurityToken()) {
    query["OssSecurityToken"] = request.getOssSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBillDetailFileList"},
    {"version" , "2025-02-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBillDetailFileListResponse>();
}

/**
 * @summary Queries exported bill files.
 *
 * @param request GetBillDetailFileListRequest
 * @return GetBillDetailFileListResponse
 */
GetBillDetailFileListResponse Client::getBillDetailFileList(const GetBillDetailFileListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBillDetailFileListWithOptions(request, runtime);
}

/**
 * @summary Queries the commission details of a partner.
 *
 * @param request GetCommissionDetailFileListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCommissionDetailFileListResponse
 */
GetCommissionDetailFileListResponse Client::getCommissionDetailFileListWithOptions(const GetCommissionDetailFileListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillMonth()) {
    query["BillMonth"] = request.getBillMonth();
  }

  if (!!request.hasOssAccessKeyId()) {
    query["OssAccessKeyId"] = request.getOssAccessKeyId();
  }

  if (!!request.hasOssAccessKeySecret()) {
    query["OssAccessKeySecret"] = request.getOssAccessKeySecret();
  }

  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.getOssBucketName();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.getOssEndpoint();
  }

  if (!!request.hasOssRegion()) {
    query["OssRegion"] = request.getOssRegion();
  }

  if (!!request.hasOssSecurityToken()) {
    query["OssSecurityToken"] = request.getOssSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCommissionDetailFileList"},
    {"version" , "2025-02-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCommissionDetailFileListResponse>();
}

/**
 * @summary Queries the commission details of a partner.
 *
 * @param request GetCommissionDetailFileListRequest
 * @return GetCommissionDetailFileListResponse
 */
GetCommissionDetailFileListResponse Client::getCommissionDetailFileList(const GetCommissionDetailFileListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCommissionDetailFileListWithOptions(request, runtime);
}

/**
 * @summary Queries partner customer acquisition orders.
 *
 * @param tmpReq GetCustomerOrderListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomerOrderListResponse
 */
GetCustomerOrderListResponse Client::getCustomerOrderListWithOptions(const GetCustomerOrderListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetCustomerOrderListShrinkRequest request = GetCustomerOrderListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOrderTypeList()) {
    request.setOrderTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOrderTypeList(), "OrderTypeList", "json"));
  }

  json query = {};
  if (!!request.hasCustomerAccount()) {
    query["CustomerAccount"] = request.getCustomerAccount();
  }

  if (!!request.hasCustomerUid()) {
    query["CustomerUid"] = request.getCustomerUid();
  }

  if (!!request.hasOrderCreateAfter()) {
    query["OrderCreateAfter"] = request.getOrderCreateAfter();
  }

  if (!!request.hasOrderCreateBefore()) {
    query["OrderCreateBefore"] = request.getOrderCreateBefore();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOrderPayAfter()) {
    query["OrderPayAfter"] = request.getOrderPayAfter();
  }

  if (!!request.hasOrderPayBefore()) {
    query["OrderPayBefore"] = request.getOrderPayBefore();
  }

  if (!!request.hasOrderStatus()) {
    query["OrderStatus"] = request.getOrderStatus();
  }

  if (!!request.hasOrderTypeListShrink()) {
    query["OrderTypeList"] = request.getOrderTypeListShrink();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPayAmountAfter()) {
    query["PayAmountAfter"] = request.getPayAmountAfter();
  }

  if (!!request.hasPayAmountBefore()) {
    query["PayAmountBefore"] = request.getPayAmountBefore();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductName()) {
    query["ProductName"] = request.getProductName();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRamAccountForCustomerManager()) {
    query["RamAccountForCustomerManager"] = request.getRamAccountForCustomerManager();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomerOrderList"},
    {"version" , "2025-02-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomerOrderListResponse>();
}

/**
 * @summary Queries partner customer acquisition orders.
 *
 * @param request GetCustomerOrderListRequest
 * @return GetCustomerOrderListResponse
 */
GetCustomerOrderListResponse Client::getCustomerOrderList(const GetCustomerOrderListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomerOrderListWithOptions(request, runtime);
}

/**
 * @summary Downloads the commission details of an international partner.
 *
 * @description Ensure that the current caller identity is a T1 distribution partner. 
 * <notice>Available only for international site.</notice>.
 *
 * @param request GetIntlCommissionDetailFileListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIntlCommissionDetailFileListResponse
 */
GetIntlCommissionDetailFileListResponse Client::getIntlCommissionDetailFileListWithOptions(const GetIntlCommissionDetailFileListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillMonth()) {
    query["BillMonth"] = request.getBillMonth();
  }

  if (!!request.hasOssAccessKeyId()) {
    query["OssAccessKeyId"] = request.getOssAccessKeyId();
  }

  if (!!request.hasOssAccessKeySecret()) {
    query["OssAccessKeySecret"] = request.getOssAccessKeySecret();
  }

  if (!!request.hasOssBucketName()) {
    query["OssBucketName"] = request.getOssBucketName();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.getOssEndpoint();
  }

  if (!!request.hasOssRegion()) {
    query["OssRegion"] = request.getOssRegion();
  }

  if (!!request.hasOssSecurityToken()) {
    query["OssSecurityToken"] = request.getOssSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIntlCommissionDetailFileList"},
    {"version" , "2025-02-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIntlCommissionDetailFileListResponse>();
}

/**
 * @summary Downloads the commission details of an international partner.
 *
 * @description Ensure that the current caller identity is a T1 distribution partner. 
 * <notice>Available only for international site.</notice>.
 *
 * @param request GetIntlCommissionDetailFileListRequest
 * @return GetIntlCommissionDetailFileListResponse
 */
GetIntlCommissionDetailFileListResponse Client::getIntlCommissionDetailFileList(const GetIntlCommissionDetailFileListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIntlCommissionDetailFileListWithOptions(request, runtime);
}

/**
 * @summary Queries the partner renewal rate.
 *
 * @param request GetRenewalRateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRenewalRateListResponse
 */
GetRenewalRateListResponse Client::getRenewalRateListWithOptions(const GetRenewalRateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFiscalYearAndQuarter()) {
    query["FiscalYearAndQuarter"] = request.getFiscalYearAndQuarter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRenewalRateList"},
    {"version" , "2025-02-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRenewalRateListResponse>();
}

/**
 * @summary Queries the partner renewal rate.
 *
 * @param request GetRenewalRateListRequest
 * @return GetRenewalRateListResponse
 */
GetRenewalRateListResponse Client::getRenewalRateList(const GetRenewalRateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRenewalRateListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of secondary distributors.
 *
 * @param request GetSubPartnerListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubPartnerListResponse
 */
GetSubPartnerListResponse Client::getSubPartnerListWithOptions(const GetSubPartnerListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSubPartnerCompanyName()) {
    query["SubPartnerCompanyName"] = request.getSubPartnerCompanyName();
  }

  if (!!request.hasSubPartnerPid()) {
    query["SubPartnerPid"] = request.getSubPartnerPid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSubPartnerList"},
    {"version" , "2025-02-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubPartnerListResponse>();
}

/**
 * @summary Queries the list of secondary distributors.
 *
 * @param request GetSubPartnerListRequest
 * @return GetSubPartnerListResponse
 */
GetSubPartnerListResponse Client::getSubPartnerList(const GetSubPartnerListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSubPartnerListWithOptions(request, runtime);
}

/**
 * @summary Queries channel expansion orders.
 *
 * @param tmpReq GetSubPartnerOrderListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubPartnerOrderListResponse
 */
GetSubPartnerOrderListResponse Client::getSubPartnerOrderListWithOptions(const GetSubPartnerOrderListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSubPartnerOrderListShrinkRequest request = GetSubPartnerOrderListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOrderTypeList()) {
    request.setOrderTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOrderTypeList(), "OrderTypeList", "json"));
  }

  json query = {};
  if (!!request.hasOrderCreateAfter()) {
    query["OrderCreateAfter"] = request.getOrderCreateAfter();
  }

  if (!!request.hasOrderCreateBefore()) {
    query["OrderCreateBefore"] = request.getOrderCreateBefore();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOrderPayAfter()) {
    query["OrderPayAfter"] = request.getOrderPayAfter();
  }

  if (!!request.hasOrderPayBefore()) {
    query["OrderPayBefore"] = request.getOrderPayBefore();
  }

  if (!!request.hasOrderStatus()) {
    query["OrderStatus"] = request.getOrderStatus();
  }

  if (!!request.hasOrderTypeListShrink()) {
    query["OrderTypeList"] = request.getOrderTypeListShrink();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPayAmountAfter()) {
    query["PayAmountAfter"] = request.getPayAmountAfter();
  }

  if (!!request.hasPayAmountBefore()) {
    query["PayAmountBefore"] = request.getPayAmountBefore();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.getPayType();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasProductName()) {
    query["ProductName"] = request.getProductName();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSubPartnerName()) {
    query["SubPartnerName"] = request.getSubPartnerName();
  }

  if (!!request.hasSubPartnerUid()) {
    query["SubPartnerUid"] = request.getSubPartnerUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSubPartnerOrderList"},
    {"version" , "2025-02-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubPartnerOrderListResponse>();
}

/**
 * @summary Queries channel expansion orders.
 *
 * @param request GetSubPartnerOrderListRequest
 * @return GetSubPartnerOrderListResponse
 */
GetSubPartnerOrderListResponse Client::getSubPartnerOrderList(const GetSubPartnerOrderListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSubPartnerOrderListWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Agency20250227