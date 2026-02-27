#include <darabonba/Core.hpp>
#include <alibabacloud/Wyota20210420.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::Wyota20210420::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Wyota20210420
{

AlibabaCloud::Wyota20210420::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("wyota", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 添加终端
 *
 * @param request AddTerminalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTerminalResponse
 */
AddTerminalResponse Client::addTerminalWithOptions(const AddTerminalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlias()) {
    body["Alias"] = request.getAlias();
  }

  if (!!request.hasClientType()) {
    body["ClientType"] = request.getClientType();
  }

  if (!!request.hasMainBizType()) {
    body["MainBizType"] = request.getMainBizType();
  }

  if (!!request.hasSerialNumber()) {
    body["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasTerminalGroupId()) {
    body["TerminalGroupId"] = request.getTerminalGroupId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddTerminal"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTerminalResponse>();
}

/**
 * @summary 添加终端
 *
 * @param request AddTerminalRequest
 * @return AddTerminalResponse
 */
AddTerminalResponse Client::addTerminal(const AddTerminalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTerminalWithOptions(request, runtime);
}

/**
 * @summary 添加终端
 *
 * @param request AddTerminalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTerminalsResponse
 */
AddTerminalsResponse Client::addTerminalsWithOptions(const AddTerminalsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  json bodyFlat = {};
  if (!!request.hasAddTerminalParams()) {
    bodyFlat["AddTerminalParams"] = request.getAddTerminalParams();
  }

  if (!!request.hasMainBizType()) {
    body["MainBizType"] = request.getMainBizType();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddTerminals"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTerminalsResponse>();
}

/**
 * @summary 添加终端
 *
 * @param request AddTerminalsRequest
 * @return AddTerminalsResponse
 */
AddTerminalsResponse Client::addTerminals(const AddTerminalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTerminalsWithOptions(request, runtime);
}

/**
 * @summary 绑定免账号登录用户
 *
 * @param request BindAccountLessLoginUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAccountLessLoginUserResponse
 */
BindAccountLessLoginUserResponse Client::bindAccountLessLoginUserWithOptions(const BindAccountLessLoginUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasSerialNumber()) {
    body["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BindAccountLessLoginUser"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindAccountLessLoginUserResponse>();
}

/**
 * @summary 绑定免账号登录用户
 *
 * @param request BindAccountLessLoginUserRequest
 * @return BindAccountLessLoginUserResponse
 */
BindAccountLessLoginUserResponse Client::bindAccountLessLoginUser(const BindAccountLessLoginUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAccountLessLoginUserWithOptions(request, runtime);
}

/**
 * @summary 绑定免账号登录用户
 *
 * @param request BindPasswordFreeLoginUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindPasswordFreeLoginUserResponse
 */
BindPasswordFreeLoginUserResponse Client::bindPasswordFreeLoginUserWithOptions(const BindPasswordFreeLoginUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndUserId()) {
    body["EndUserId"] = request.getEndUserId();
  }

  if (!!request.hasMainBizType()) {
    body["MainBizType"] = request.getMainBizType();
  }

  if (!!request.hasSerialNumber()) {
    body["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BindPasswordFreeLoginUser"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindPasswordFreeLoginUserResponse>();
}

/**
 * @summary 绑定免账号登录用户
 *
 * @param request BindPasswordFreeLoginUserRequest
 * @return BindPasswordFreeLoginUserResponse
 */
BindPasswordFreeLoginUserResponse Client::bindPasswordFreeLoginUser(const BindPasswordFreeLoginUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindPasswordFreeLoginUserWithOptions(request, runtime);
}

/**
 * @summary 查询设备座位
 *
 * @param request DescribeDeviceSeatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeviceSeatsResponse
 */
DescribeDeviceSeatsResponse Client::describeDeviceSeatsWithOptions(const DescribeDeviceSeatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSerialNo()) {
    body["SerialNo"] = request.getSerialNo();
  }

  if (!!request.hasSerialNoList()) {
    body["SerialNoList"] = request.getSerialNoList();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.getSiteId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeDeviceSeats"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<DescribeDeviceSeatsResponse>();
}

/**
 * @summary 查询设备座位
 *
 * @param request DescribeDeviceSeatsRequest
 * @return DescribeDeviceSeatsResponse
 */
DescribeDeviceSeatsResponse Client::describeDeviceSeats(const DescribeDeviceSeatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeviceSeatsWithOptions(request, runtime);
}

/**
 * @summary 查询终端列表
 *
 * @param request ListTerminalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTerminalResponse
 */
ListTerminalResponse Client::listTerminalWithOptions(const ListTerminalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlias()) {
    body["Alias"] = request.getAlias();
  }

  if (!!request.hasBuildId()) {
    body["BuildId"] = request.getBuildId();
  }

  if (!!request.hasClientType()) {
    body["ClientType"] = request.getClientType();
  }

  if (!!request.hasInManage()) {
    body["InManage"] = request.getInManage();
  }

  if (!!request.hasIpv4()) {
    body["Ipv4"] = request.getIpv4();
  }

  if (!!request.hasLocationInfo()) {
    body["LocationInfo"] = request.getLocationInfo();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSearchKeyword()) {
    body["SearchKeyword"] = request.getSearchKeyword();
  }

  if (!!request.hasSerialNumber()) {
    body["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasTerminalGroupId()) {
    body["TerminalGroupId"] = request.getTerminalGroupId();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTerminal"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTerminalResponse>();
}

/**
 * @summary 查询终端列表
 *
 * @param request ListTerminalRequest
 * @return ListTerminalResponse
 */
ListTerminalResponse Client::listTerminal(const ListTerminalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTerminalWithOptions(request, runtime);
}

/**
 * @summary 向终端发送运维命令
 *
 * @param request SendOpsMessageToTerminalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendOpsMessageToTerminalsResponse
 */
SendOpsMessageToTerminalsResponse Client::sendOpsMessageToTerminalsWithOptions(const SendOpsMessageToTerminalsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDelay()) {
    query["Delay"] = request.getDelay();
  }

  json body = {};
  if (!!request.hasMsg()) {
    body["Msg"] = request.getMsg();
  }

  if (!!request.hasOpsAction()) {
    body["OpsAction"] = request.getOpsAction();
  }

  json bodyFlat = {};
  if (!!request.hasUuids()) {
    bodyFlat["Uuids"] = request.getUuids();
  }

  if (!!request.hasWaitForAck()) {
    body["WaitForAck"] = request.getWaitForAck();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendOpsMessageToTerminals"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendOpsMessageToTerminalsResponse>();
}

/**
 * @summary 向终端发送运维命令
 *
 * @param request SendOpsMessageToTerminalsRequest
 * @return SendOpsMessageToTerminalsResponse
 */
SendOpsMessageToTerminalsResponse Client::sendOpsMessageToTerminals(const SendOpsMessageToTerminalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendOpsMessageToTerminalsWithOptions(request, runtime);
}

/**
 * @summary 解绑免账号登录用户
 *
 * @param request UnbindAccountLessLoginUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindAccountLessLoginUserResponse
 */
UnbindAccountLessLoginUserResponse Client::unbindAccountLessLoginUserWithOptions(const UnbindAccountLessLoginUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSerialNumber()) {
    body["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UnbindAccountLessLoginUser"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindAccountLessLoginUserResponse>();
}

/**
 * @summary 解绑免账号登录用户
 *
 * @param request UnbindAccountLessLoginUserRequest
 * @return UnbindAccountLessLoginUserResponse
 */
UnbindAccountLessLoginUserResponse Client::unbindAccountLessLoginUser(const UnbindAccountLessLoginUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindAccountLessLoginUserWithOptions(request, runtime);
}

/**
 * @summary 解绑设备座位
 *
 * @param tmpReq UnbindDeviceSeatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindDeviceSeatsResponse
 */
UnbindDeviceSeatsResponse Client::unbindDeviceSeatsWithOptions(const UnbindDeviceSeatsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UnbindDeviceSeatsShrinkRequest request = UnbindDeviceSeatsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSerialNoList()) {
    request.setSerialNoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSerialNoList(), "SerialNoList", "json"));
  }

  json body = {};
  if (!!request.hasSerialNoListShrink()) {
    body["SerialNoList"] = request.getSerialNoListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UnbindDeviceSeats"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindDeviceSeatsResponse>();
}

/**
 * @summary 解绑设备座位
 *
 * @param request UnbindDeviceSeatsRequest
 * @return UnbindDeviceSeatsResponse
 */
UnbindDeviceSeatsResponse Client::unbindDeviceSeats(const UnbindDeviceSeatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindDeviceSeatsWithOptions(request, runtime);
}

/**
 * @summary 解绑免密登录用户
 *
 * @param request UnbindPasswordFreeLoginUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindPasswordFreeLoginUserResponse
 */
UnbindPasswordFreeLoginUserResponse Client::unbindPasswordFreeLoginUserWithOptions(const UnbindPasswordFreeLoginUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMainBizType()) {
    body["MainBizType"] = request.getMainBizType();
  }

  if (!!request.hasSerialNumber()) {
    body["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UnbindPasswordFreeLoginUser"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindPasswordFreeLoginUserResponse>();
}

/**
 * @summary 解绑免密登录用户
 *
 * @param request UnbindPasswordFreeLoginUserRequest
 * @return UnbindPasswordFreeLoginUserResponse
 */
UnbindPasswordFreeLoginUserResponse Client::unbindPasswordFreeLoginUser(const UnbindPasswordFreeLoginUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindPasswordFreeLoginUserWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Wyota20210420