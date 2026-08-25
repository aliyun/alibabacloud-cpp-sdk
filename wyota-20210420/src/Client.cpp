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
  this->_endpointRule = "regional";
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
 * @summary Removes managed terminal devices by UUID.
 *
 * @param request DeleteClientsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClientsResponse
 */
DeleteClientsResponse Client::deleteClientsWithOptions(const DeleteClientsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallerAliUid()) {
    query["CallerAliUid"] = request.getCallerAliUid();
  }

  json body = {};
  if (!!request.hasInManage()) {
    body["InManage"] = request.getInManage();
  }

  json bodyFlat = {};
  if (!!request.hasUuids()) {
    bodyFlat["Uuids"] = request.getUuids();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteClients"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClientsResponse>();
}

/**
 * @summary Removes managed terminal devices by UUID.
 *
 * @param request DeleteClientsRequest
 * @return DeleteClientsResponse
 */
DeleteClientsResponse Client::deleteClients(const DeleteClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClientsWithOptions(request, runtime);
}

/**
 * @summary Queries information about all managed clients.
 *
 * @param request DescribeClientsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClientsResponse
 */
DescribeClientsResponse Client::describeClientsWithOptions(const DescribeClientsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallerAliUid()) {
    query["CallerAliUid"] = request.getCallerAliUid();
  }

  json body = {};
  if (!!request.hasClientType()) {
    body["ClientType"] = request.getClientType();
  }

  if (!!request.hasCustomResourceId()) {
    body["CustomResourceId"] = request.getCustomResourceId();
  }

  if (!!request.hasCustomResourceStatus()) {
    body["CustomResourceStatus"] = request.getCustomResourceStatus();
  }

  if (!!request.hasInManage()) {
    body["InManage"] = request.getInManage();
  }

  if (!!request.hasIncludeSubGroups()) {
    body["IncludeSubGroups"] = request.getIncludeSubGroups();
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

  if (!!request.hasOnlineStatus()) {
    body["OnlineStatus"] = request.getOnlineStatus();
  }

  if (!!request.hasPlatform()) {
    body["Platform"] = request.getPlatform();
  }

  if (!!request.hasSearchKeyword()) {
    body["SearchKeyword"] = request.getSearchKeyword();
  }

  if (!!request.hasTerminalGroupId()) {
    body["TerminalGroupId"] = request.getTerminalGroupId();
  }

  json bodyFlat = {};
  if (!!request.hasUuids()) {
    bodyFlat["Uuids"] = request.getUuids();
  }

  if (!!request.hasWithBindUser()) {
    body["WithBindUser"] = request.getWithBindUser();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeClients"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClientsResponse>();
}

/**
 * @summary Queries information about all managed clients.
 *
 * @param request DescribeClientsRequest
 * @return DescribeClientsResponse
 */
DescribeClientsResponse Client::describeClients(const DescribeClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClientsWithOptions(request, runtime);
}

/**
 * @summary Retrieves custom resource statistics information.
 *
 * @param request GetCustomResourceStatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomResourceStatsResponse
 */
GetCustomResourceStatsResponse Client::getCustomResourceStatsWithOptions(const GetCustomResourceStatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMainBizType()) {
    body["MainBizType"] = request.getMainBizType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetCustomResourceStats"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomResourceStatsResponse>();
}

/**
 * @summary Retrieves custom resource statistics information.
 *
 * @param request GetCustomResourceStatsRequest
 * @return GetCustomResourceStatsResponse
 */
GetCustomResourceStatsResponse Client::getCustomResourceStats(const GetCustomResourceStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomResourceStatsWithOptions(request, runtime);
}

/**
 * @summary Retrieves or creates an invitation code for desktop device enrollment.
 * Query mode: Pass only terminalGroupId to return the current invitation code and its expiration status in read-only mode.
 * Creation mode: Pass terminalGroupId along with an expiration duration (expireDays or expireMinutes) to generate a new code that overwrites the existing invitation code.
 *
 * @param request GetOrCreateInvitationCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrCreateInvitationCodeResponse
 */
GetOrCreateInvitationCodeResponse Client::getOrCreateInvitationCodeWithOptions(const GetOrCreateInvitationCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExpireDays()) {
    body["ExpireDays"] = request.getExpireDays();
  }

  if (!!request.hasExpireMinutes()) {
    body["ExpireMinutes"] = request.getExpireMinutes();
  }

  if (!!request.hasTerminalGroupId()) {
    body["TerminalGroupId"] = request.getTerminalGroupId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetOrCreateInvitationCode"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOrCreateInvitationCodeResponse>();
}

/**
 * @summary Retrieves or creates an invitation code for desktop device enrollment.
 * Query mode: Pass only terminalGroupId to return the current invitation code and its expiration status in read-only mode.
 * Creation mode: Pass terminalGroupId along with an expiration duration (expireDays or expireMinutes) to generate a new code that overwrites the existing invitation code.
 *
 * @param request GetOrCreateInvitationCodeRequest
 * @return GetOrCreateInvitationCodeResponse
 */
GetOrCreateInvitationCodeResponse Client::getOrCreateInvitationCode(const GetOrCreateInvitationCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOrCreateInvitationCodeWithOptions(request, runtime);
}

/**
 * @summary Retrieves the number of terminals.
 *
 * @param request GetTerminalCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTerminalCountResponse
 */
GetTerminalCountResponse Client::getTerminalCountWithOptions(const GetTerminalCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientType()) {
    body["ClientType"] = request.getClientType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTerminalCount"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTerminalCountResponse>();
}

/**
 * @summary Retrieves the number of terminals.
 *
 * @param request GetTerminalCountRequest
 * @return GetTerminalCountResponse
 */
GetTerminalCountResponse Client::getTerminalCount(const GetTerminalCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTerminalCountWithOptions(request, runtime);
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
 * @summary Queries the version distribution of terminals.
 *
 * @param request ListVersionDistributionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVersionDistributionResponse
 */
ListVersionDistributionResponse Client::listVersionDistributionWithOptions(const ListVersionDistributionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientType()) {
    body["ClientType"] = request.getClientType();
  }

  if (!!request.hasInManage()) {
    body["InManage"] = request.getInManage();
  }

  if (!!request.hasMainBizType()) {
    body["MainBizType"] = request.getMainBizType();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  if (!!request.hasVersionType()) {
    body["VersionType"] = request.getVersionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVersionDistribution"},
    {"version" , "2021-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVersionDistributionResponse>();
}

/**
 * @summary Queries the version distribution of terminals.
 *
 * @param request ListVersionDistributionRequest
 * @return ListVersionDistributionResponse
 */
ListVersionDistributionResponse Client::listVersionDistribution(const ListVersionDistributionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVersionDistributionWithOptions(request, runtime);
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

  if (!!request.hasOpDomain()) {
    body["OpDomain"] = request.getOpDomain();
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