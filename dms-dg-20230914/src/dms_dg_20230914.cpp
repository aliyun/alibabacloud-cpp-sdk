// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dms_dg_20230914.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Dms-dg20230914;

Alibabacloud_Dms-dg20230914::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dms-dg"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dms-dg20230914::Client::getEndpoint(shared_ptr<string> productId,
                                                        shared_ptr<string> regionId,
                                                        shared_ptr<string> endpointRule,
                                                        shared_ptr<string> network,
                                                        shared_ptr<string> suffix,
                                                        shared_ptr<map<string, string>> endpointMap,
                                                        shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AddDatabaseResponse Alibabacloud_Dms-dg20230914::Client::addDatabaseWithOptions(shared_ptr<AddDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbDescription)) {
    body->insert(pair<string, string>("DbDescription", *request->dbDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbPassword)) {
    body->insert(pair<string, string>("DbPassword", *request->dbPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbType)) {
    body->insert(pair<string, string>("DbType", *request->dbType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbUserName)) {
    body->insert(pair<string, string>("DbUserName", *request->dbUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    body->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    body->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDatabase"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDatabaseResponse(callApi(params, req, runtime));
}

AddDatabaseResponse Alibabacloud_Dms-dg20230914::Client::addDatabase(shared_ptr<AddDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDatabaseWithOptions(request, runtime);
}

AddDatabaseListResponse Alibabacloud_Dms-dg20230914::Client::addDatabaseListWithOptions(shared_ptr<AddDatabaseListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseString)) {
    body->insert(pair<string, string>("DatabaseString", *request->databaseString));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDatabaseList"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDatabaseListResponse(callApi(params, req, runtime));
}

AddDatabaseListResponse Alibabacloud_Dms-dg20230914::Client::addDatabaseList(shared_ptr<AddDatabaseListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDatabaseListWithOptions(request, runtime);
}

CheckDGEnabledResponse Alibabacloud_Dms-dg20230914::Client::checkDGEnabledWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDGEnabled"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckDGEnabledResponse(callApi(params, req, runtime));
}

CheckDGEnabledResponse Alibabacloud_Dms-dg20230914::Client::checkDGEnabled() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDGEnabledWithOptions(runtime);
}

ConnectDatabaseResponse Alibabacloud_Dms-dg20230914::Client::connectDatabaseWithOptions(shared_ptr<ConnectDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbPassword)) {
    body->insert(pair<string, string>("DbPassword", *request->dbPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbType)) {
    body->insert(pair<string, string>("DbType", *request->dbType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbUserName)) {
    body->insert(pair<string, string>("DbUserName", *request->dbUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    body->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    body->insert(pair<string, long>("Port", *request->port));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConnectDatabase"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConnectDatabaseResponse(callApi(params, req, runtime));
}

ConnectDatabaseResponse Alibabacloud_Dms-dg20230914::Client::connectDatabase(shared_ptr<ConnectDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return connectDatabaseWithOptions(request, runtime);
}

CreateGatewayResponse Alibabacloud_Dms-dg20230914::Client::createGatewayWithOptions(shared_ptr<CreateGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayDesc)) {
    body->insert(pair<string, string>("GatewayDesc", *request->gatewayDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayName)) {
    body->insert(pair<string, string>("GatewayName", *request->gatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGateway"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewayResponse(callApi(params, req, runtime));
}

CreateGatewayResponse Alibabacloud_Dms-dg20230914::Client::createGateway(shared_ptr<CreateGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGatewayWithOptions(request, runtime);
}

CreateGatewayVerifyCodeResponse Alibabacloud_Dms-dg20230914::Client::createGatewayVerifyCodeWithOptions(shared_ptr<CreateGatewayVerifyCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGatewayVerifyCode"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGatewayVerifyCodeResponse(callApi(params, req, runtime));
}

CreateGatewayVerifyCodeResponse Alibabacloud_Dms-dg20230914::Client::createGatewayVerifyCode(shared_ptr<CreateGatewayVerifyCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGatewayVerifyCodeWithOptions(request, runtime);
}

DeleteDatabaseResponse Alibabacloud_Dms-dg20230914::Client::deleteDatabaseWithOptions(shared_ptr<DeleteDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDatabase"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDatabaseResponse(callApi(params, req, runtime));
}

DeleteDatabaseResponse Alibabacloud_Dms-dg20230914::Client::deleteDatabase(shared_ptr<DeleteDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDatabaseWithOptions(request, runtime);
}

DeleteGatewayResponse Alibabacloud_Dms-dg20230914::Client::deleteGatewayWithOptions(shared_ptr<DeleteGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGateway"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayResponse(callApi(params, req, runtime));
}

DeleteGatewayResponse Alibabacloud_Dms-dg20230914::Client::deleteGateway(shared_ptr<DeleteGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayWithOptions(request, runtime);
}

DeleteGatewayInstanceResponse Alibabacloud_Dms-dg20230914::Client::deleteGatewayInstanceWithOptions(shared_ptr<DeleteGatewayInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayInstanceId)) {
    body->insert(pair<string, string>("GatewayInstanceId", *request->gatewayInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayInstance"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGatewayInstanceResponse(callApi(params, req, runtime));
}

DeleteGatewayInstanceResponse Alibabacloud_Dms-dg20230914::Client::deleteGatewayInstance(shared_ptr<DeleteGatewayInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGatewayInstanceWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Dms-dg20230914::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Dms-dg20230914::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DownloadGatewayProgramResponse Alibabacloud_Dms-dg20230914::Client::downloadGatewayProgramWithOptions(shared_ptr<DownloadGatewayProgramRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dgVersion)) {
    body->insert(pair<string, string>("DgVersion", *request->dgVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userOS)) {
    body->insert(pair<string, string>("UserOS", *request->userOS));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadGatewayProgram"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadGatewayProgramResponse(callApi(params, req, runtime));
}

DownloadGatewayProgramResponse Alibabacloud_Dms-dg20230914::Client::downloadGatewayProgram(shared_ptr<DownloadGatewayProgramRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadGatewayProgramWithOptions(request, runtime);
}

FindUserGatewayByIdResponse Alibabacloud_Dms-dg20230914::Client::findUserGatewayByIdWithOptions(shared_ptr<FindUserGatewayByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FindUserGatewayById"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FindUserGatewayByIdResponse(callApi(params, req, runtime));
}

FindUserGatewayByIdResponse Alibabacloud_Dms-dg20230914::Client::findUserGatewayById(shared_ptr<FindUserGatewayByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return findUserGatewayByIdWithOptions(request, runtime);
}

GetUserDatabasesResponse Alibabacloud_Dms-dg20230914::Client::getUserDatabasesWithOptions(shared_ptr<GetUserDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbType)) {
    body->insert(pair<string, string>("DbType", *request->dbType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    body->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    body->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    body->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    body->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    body->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserDatabases"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserDatabasesResponse(callApi(params, req, runtime));
}

GetUserDatabasesResponse Alibabacloud_Dms-dg20230914::Client::getUserDatabases(shared_ptr<GetUserDatabasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserDatabasesWithOptions(request, runtime);
}

GetUserGatewayInstancesResponse Alibabacloud_Dms-dg20230914::Client::getUserGatewayInstancesWithOptions(shared_ptr<GetUserGatewayInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserGatewayInstances"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserGatewayInstancesResponse(callApi(params, req, runtime));
}

GetUserGatewayInstancesResponse Alibabacloud_Dms-dg20230914::Client::getUserGatewayInstances(shared_ptr<GetUserGatewayInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserGatewayInstancesWithOptions(request, runtime);
}

GetUserGatewaysResponse Alibabacloud_Dms-dg20230914::Client::getUserGatewaysWithOptions(shared_ptr<GetUserGatewaysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    body->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserGateways"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserGatewaysResponse(callApi(params, req, runtime));
}

GetUserGatewaysResponse Alibabacloud_Dms-dg20230914::Client::getUserGateways(shared_ptr<GetUserGatewaysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserGatewaysWithOptions(request, runtime);
}

ListDatabaseAccessPointResponse Alibabacloud_Dms-dg20230914::Client::listDatabaseAccessPointWithOptions(shared_ptr<ListDatabaseAccessPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbInstanceId)) {
    body->insert(pair<string, string>("DbInstanceId", *request->dbInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    body->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    body->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    body->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    body->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    body->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDatabaseAccessPoint"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDatabaseAccessPointResponse(callApi(params, req, runtime));
}

ListDatabaseAccessPointResponse Alibabacloud_Dms-dg20230914::Client::listDatabaseAccessPoint(shared_ptr<ListDatabaseAccessPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDatabaseAccessPointWithOptions(request, runtime);
}

ModifyDatabaseResponse Alibabacloud_Dms-dg20230914::Client::modifyDatabaseWithOptions(shared_ptr<ModifyDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbDescription)) {
    body->insert(pair<string, string>("DbDescription", *request->dbDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbPassword)) {
    body->insert(pair<string, string>("DbPassword", *request->dbPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbType)) {
    body->insert(pair<string, string>("DbType", *request->dbType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbUserName)) {
    body->insert(pair<string, string>("DbUserName", *request->dbUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    body->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    body->insert(pair<string, long>("Port", *request->port));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDatabase"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDatabaseResponse(callApi(params, req, runtime));
}

ModifyDatabaseResponse Alibabacloud_Dms-dg20230914::Client::modifyDatabase(shared_ptr<ModifyDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDatabaseWithOptions(request, runtime);
}

ModifyGatewayResponse Alibabacloud_Dms-dg20230914::Client::modifyGatewayWithOptions(shared_ptr<ModifyGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayDesc)) {
    body->insert(pair<string, string>("GatewayDesc", *request->gatewayDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayName)) {
    body->insert(pair<string, string>("GatewayName", *request->gatewayName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyGateway"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyGatewayResponse(callApi(params, req, runtime));
}

ModifyGatewayResponse Alibabacloud_Dms-dg20230914::Client::modifyGateway(shared_ptr<ModifyGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyGatewayWithOptions(request, runtime);
}

RetryDatabaseResponse Alibabacloud_Dms-dg20230914::Client::retryDatabaseWithOptions(shared_ptr<RetryDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbDescription)) {
    body->insert(pair<string, string>("DbDescription", *request->dbDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    body->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbPassword)) {
    body->insert(pair<string, string>("DbPassword", *request->dbPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbType)) {
    body->insert(pair<string, string>("DbType", *request->dbType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbUserName)) {
    body->insert(pair<string, string>("DbUserName", *request->dbUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    body->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->port)) {
    body->insert(pair<string, long>("Port", *request->port));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RetryDatabase"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RetryDatabaseResponse(callApi(params, req, runtime));
}

RetryDatabaseResponse Alibabacloud_Dms-dg20230914::Client::retryDatabase(shared_ptr<RetryDatabaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return retryDatabaseWithOptions(request, runtime);
}

StopGatewayResponse Alibabacloud_Dms-dg20230914::Client::stopGatewayWithOptions(shared_ptr<StopGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    body->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayInstanceId)) {
    body->insert(pair<string, string>("GatewayInstanceId", *request->gatewayInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopGateway"))},
    {"version", boost::any(string("2023-09-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopGatewayResponse(callApi(params, req, runtime));
}

StopGatewayResponse Alibabacloud_Dms-dg20230914::Client::stopGateway(shared_ptr<StopGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopGatewayWithOptions(request, runtime);
}

