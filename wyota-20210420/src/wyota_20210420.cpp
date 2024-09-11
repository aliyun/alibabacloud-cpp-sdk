// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/wyota_20210420.hpp>
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

using namespace Alibabacloud_Wyota20210420;

Alibabacloud_Wyota20210420::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("wyota"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Wyota20210420::Client::getEndpoint(shared_ptr<string> productId,
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

ActivateDeviceResponse Alibabacloud_Wyota20210420::Client::activateDeviceWithOptions(shared_ptr<ActivateDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ActivateDevice"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ActivateDeviceResponse(callApi(params, req, runtime));
}

ActivateDeviceResponse Alibabacloud_Wyota20210420::Client::activateDevice(shared_ptr<ActivateDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activateDeviceWithOptions(request, runtime);
}

AddDeviceFromSNResponse Alibabacloud_Wyota20210420::Client::addDeviceFromSNWithOptions(shared_ptr<AddDeviceFromSNRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alias)) {
    body->insert(pair<string, string>("Alias", *request->alias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customProperty)) {
    body->insert(pair<string, string>("CustomProperty", *request->customProperty));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelContents)) {
    body->insert(pair<string, string>("LabelContents", *request->labelContents));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secureNetworkType)) {
    body->insert(pair<string, string>("SecureNetworkType", *request->secureNetworkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDeviceFromSN"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDeviceFromSNResponse(callApi(params, req, runtime));
}

AddDeviceFromSNResponse Alibabacloud_Wyota20210420::Client::addDeviceFromSN(shared_ptr<AddDeviceFromSNRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDeviceFromSNWithOptions(request, runtime);
}

AddDeviceSeatsAndLabelsResponse Alibabacloud_Wyota20210420::Client::addDeviceSeatsAndLabelsWithOptions(shared_ptr<AddDeviceSeatsAndLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isUnique)) {
    body->insert(pair<string, bool>("IsUnique", *request->isUnique));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    body->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->labelList)) {
    body->insert(pair<string, vector<string>>("LabelList", *request->labelList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->seatName)) {
    body->insert(pair<string, string>("SeatName", *request->seatName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDeviceSeatsAndLabels"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDeviceSeatsAndLabelsResponse(callApi(params, req, runtime));
}

AddDeviceSeatsAndLabelsResponse Alibabacloud_Wyota20210420::Client::addDeviceSeatsAndLabels(shared_ptr<AddDeviceSeatsAndLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDeviceSeatsAndLabelsWithOptions(request, runtime);
}

AddDevicesFromCSVResponse Alibabacloud_Wyota20210420::Client::addDevicesFromCSVWithOptions(shared_ptr<AddDevicesFromCSVRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileType)) {
    body->insert(pair<string, long>("FileType", *request->fileType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->seatCol)) {
    body->insert(pair<string, long>("SeatCol", *request->seatCol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->siteId)) {
    body->insert(pair<string, string>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->siteName)) {
    body->insert(pair<string, string>("SiteName", *request->siteName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDevicesFromCSV"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDevicesFromCSVResponse(callApi(params, req, runtime));
}

AddDevicesFromCSVResponse Alibabacloud_Wyota20210420::Client::addDevicesFromCSV(shared_ptr<AddDevicesFromCSVRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDevicesFromCSVWithOptions(request, runtime);
}

AddLabelsResponse Alibabacloud_Wyota20210420::Client::addLabelsWithOptions(shared_ptr<AddLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->labelContents)) {
    body->insert(pair<string, string>("LabelContents", *request->labelContents));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLabels"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLabelsResponse(callApi(params, req, runtime));
}

AddLabelsResponse Alibabacloud_Wyota20210420::Client::addLabels(shared_ptr<AddLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLabelsWithOptions(request, runtime);
}

AddOrUpdateDeviceSeatsResponse Alibabacloud_Wyota20210420::Client::addOrUpdateDeviceSeatsWithOptions(shared_ptr<AddOrUpdateDeviceSeatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    body->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCustomId)) {
    body->insert(pair<string, string>("UserCustomId", *request->userCustomId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddOrUpdateDeviceSeats"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddOrUpdateDeviceSeatsResponse(callApi(params, req, runtime));
}

AddOrUpdateDeviceSeatsResponse Alibabacloud_Wyota20210420::Client::addOrUpdateDeviceSeats(shared_ptr<AddOrUpdateDeviceSeatsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addOrUpdateDeviceSeatsWithOptions(request, runtime);
}

AddTerminalResponse Alibabacloud_Wyota20210420::Client::addTerminalWithOptions(shared_ptr<AddTerminalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alias)) {
    body->insert(pair<string, string>("Alias", *request->alias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    body->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminalGroupId)) {
    body->insert(pair<string, string>("TerminalGroupId", *request->terminalGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTerminal"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTerminalResponse(callApi(params, req, runtime));
}

AddTerminalResponse Alibabacloud_Wyota20210420::Client::addTerminal(shared_ptr<AddTerminalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTerminalWithOptions(request, runtime);
}

AttachEndUsersResponse Alibabacloud_Wyota20210420::Client::attachEndUsersWithOptions(shared_ptr<AttachEndUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserIds)) {
    body->insert(pair<string, string>("EndUserIds", *request->endUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachEndUsers"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachEndUsersResponse(callApi(params, req, runtime));
}

AttachEndUsersResponse Alibabacloud_Wyota20210420::Client::attachEndUsers(shared_ptr<AttachEndUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachEndUsersWithOptions(request, runtime);
}

AttachLabelResponse Alibabacloud_Wyota20210420::Client::attachLabelWithOptions(shared_ptr<AttachLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->labelContent)) {
    body->insert(pair<string, string>("LabelContent", *request->labelContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelId)) {
    body->insert(pair<string, string>("LabelId", *request->labelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachLabel"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachLabelResponse(callApi(params, req, runtime));
}

AttachLabelResponse Alibabacloud_Wyota20210420::Client::attachLabel(shared_ptr<AttachLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachLabelWithOptions(request, runtime);
}

AttachLabelsResponse Alibabacloud_Wyota20210420::Client::attachLabelsWithOptions(shared_ptr<AttachLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->labelIds)) {
    body->insert(pair<string, string>("LabelIds", *request->labelIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNoList)) {
    body->insert(pair<string, string>("SerialNoList", *request->serialNoList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachLabels"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachLabelsResponse(callApi(params, req, runtime));
}

AttachLabelsResponse Alibabacloud_Wyota20210420::Client::attachLabels(shared_ptr<AttachLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachLabelsWithOptions(request, runtime);
}

BindAccountLessLoginUserResponse Alibabacloud_Wyota20210420::Client::bindAccountLessLoginUserWithOptions(shared_ptr<BindAccountLessLoginUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    body->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    body->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindAccountLessLoginUser"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindAccountLessLoginUserResponse(callApi(params, req, runtime));
}

BindAccountLessLoginUserResponse Alibabacloud_Wyota20210420::Client::bindAccountLessLoginUser(shared_ptr<BindAccountLessLoginUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindAccountLessLoginUserWithOptions(request, runtime);
}

BindPasswordFreeLoginUserResponse Alibabacloud_Wyota20210420::Client::bindPasswordFreeLoginUserWithOptions(shared_ptr<BindPasswordFreeLoginUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    body->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    body->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindPasswordFreeLoginUser"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindPasswordFreeLoginUserResponse(callApi(params, req, runtime));
}

BindPasswordFreeLoginUserResponse Alibabacloud_Wyota20210420::Client::bindPasswordFreeLoginUser(shared_ptr<BindPasswordFreeLoginUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindPasswordFreeLoginUserWithOptions(request, runtime);
}

CheckUuidValidResponse Alibabacloud_Wyota20210420::Client::checkUuidValidWithOptions(shared_ptr<CheckUuidValidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bluetooth)) {
    body->insert(pair<string, string>("Bluetooth", *request->bluetooth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buildId)) {
    body->insert(pair<string, string>("BuildId", *request->buildId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chipId)) {
    body->insert(pair<string, string>("ChipId", *request->chipId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    body->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customId)) {
    body->insert(pair<string, string>("CustomId", *request->customId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->etherMac)) {
    body->insert(pair<string, string>("EtherMac", *request->etherMac));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wlan)) {
    body->insert(pair<string, string>("Wlan", *request->wlan));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckUuidValid"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckUuidValidResponse(callApi(params, req, runtime));
}

CheckUuidValidResponse Alibabacloud_Wyota20210420::Client::checkUuidValid(shared_ptr<CheckUuidValidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkUuidValidWithOptions(request, runtime);
}

CreateAppOtaTaskResponse Alibabacloud_Wyota20210420::Client::createAppOtaTaskWithOptions(shared_ptr<CreateAppOtaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersionUid)) {
    query->insert(pair<string, string>("AppVersionUid", *request->appVersionUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    query->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->clientIdList)) {
    query->insert(pair<string, vector<string>>("ClientIdList", *request->clientIdList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientType)) {
    query->insert(pair<string, long>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creator)) {
    query->insert(pair<string, string>("Creator", *request->creator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->forceUpgrade)) {
    query->insert(pair<string, long>("ForceUpgrade", *request->forceUpgrade));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    query->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->regions)) {
    query->insert(pair<string, vector<string>>("Regions", *request->regions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskType)) {
    query->insert(pair<string, long>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    query->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppOtaTask"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppOtaTaskResponse(callApi(params, req, runtime));
}

CreateAppOtaTaskResponse Alibabacloud_Wyota20210420::Client::createAppOtaTask(shared_ptr<CreateAppOtaTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppOtaTaskWithOptions(request, runtime);
}

CreateAppOtaVersionResponse Alibabacloud_Wyota20210420::Client::createAppOtaVersionWithOptions(shared_ptr<CreateAppOtaVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    query->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arch)) {
    query->insert(pair<string, string>("Arch", *request->arch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    query->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientType)) {
    query->insert(pair<string, long>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creator)) {
    query->insert(pair<string, string>("Creator", *request->creator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->downloadUrl)) {
    query->insert(pair<string, string>("DownloadUrl", *request->downloadUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->md5)) {
    query->insert(pair<string, string>("Md5", *request->md5));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    query->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    query->insert(pair<string, string>("OsType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->otaType)) {
    query->insert(pair<string, long>("OtaType", *request->otaType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseNote)) {
    query->insert(pair<string, string>("ReleaseNote", *request->releaseNote));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseNoteEn)) {
    query->insert(pair<string, string>("ReleaseNoteEn", *request->releaseNoteEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseNoteJp)) {
    query->insert(pair<string, string>("ReleaseNoteJp", *request->releaseNoteJp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotRegionId)) {
    query->insert(pair<string, string>("SnapshotRegionId", *request->snapshotRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionType)) {
    query->insert(pair<string, string>("VersionType", *request->versionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppOtaVersion"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppOtaVersionResponse(callApi(params, req, runtime));
}

CreateAppOtaVersionResponse Alibabacloud_Wyota20210420::Client::createAppOtaVersion(shared_ptr<CreateAppOtaVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppOtaVersionWithOptions(request, runtime);
}

DeleteAppOtaVersionsResponse Alibabacloud_Wyota20210420::Client::deleteAppOtaVersionsWithOptions(shared_ptr<DeleteAppOtaVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->versionUidList)) {
    query->insert(pair<string, vector<string>>("VersionUidList", *request->versionUidList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAppOtaVersions"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAppOtaVersionsResponse(callApi(params, req, runtime));
}

DeleteAppOtaVersionsResponse Alibabacloud_Wyota20210420::Client::deleteAppOtaVersions(shared_ptr<DeleteAppOtaVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppOtaVersionsWithOptions(request, runtime);
}

DeleteDevicesResponse Alibabacloud_Wyota20210420::Client::deleteDevicesWithOptions(shared_ptr<DeleteDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->uuids)) {
    query->insert(pair<string, string>("Uuids", *request->uuids));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->force)) {
    body->insert(pair<string, string>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNos)) {
    body->insert(pair<string, string>("SerialNos", *request->serialNos));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDevices"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDevicesResponse(callApi(params, req, runtime));
}

DeleteDevicesResponse Alibabacloud_Wyota20210420::Client::deleteDevices(shared_ptr<DeleteDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDevicesWithOptions(request, runtime);
}

DeleteLabelResponse Alibabacloud_Wyota20210420::Client::deleteLabelWithOptions(shared_ptr<DeleteLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->force)) {
    body->insert(pair<string, string>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelContent)) {
    body->insert(pair<string, string>("LabelContent", *request->labelContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelId)) {
    body->insert(pair<string, string>("LabelId", *request->labelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLabel"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLabelResponse(callApi(params, req, runtime));
}

DeleteLabelResponse Alibabacloud_Wyota20210420::Client::deleteLabel(shared_ptr<DeleteLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLabelWithOptions(request, runtime);
}

DescribeAppOtaVersionResponse Alibabacloud_Wyota20210420::Client::describeAppOtaVersionWithOptions(shared_ptr<DescribeAppOtaVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    query->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    query->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientType)) {
    query->insert(pair<string, long>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creator)) {
    query->insert(pair<string, string>("Creator", *request->creator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionUid)) {
    query->insert(pair<string, string>("VersionUid", *request->versionUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppOtaVersion"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppOtaVersionResponse(callApi(params, req, runtime));
}

DescribeAppOtaVersionResponse Alibabacloud_Wyota20210420::Client::describeAppOtaVersion(shared_ptr<DescribeAppOtaVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppOtaVersionWithOptions(request, runtime);
}

DescribeDeviceSeatsResponse Alibabacloud_Wyota20210420::Client::describeDeviceSeatsWithOptions(shared_ptr<DescribeDeviceSeatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serialNoList)) {
    body->insert(pair<string, vector<string>>("SerialNoList", *request->serialNoList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->siteId)) {
    body->insert(pair<string, string>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDeviceSeats"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDeviceSeatsResponse(callApi(params, req, runtime));
}

DescribeDeviceSeatsResponse Alibabacloud_Wyota20210420::Client::describeDeviceSeats(shared_ptr<DescribeDeviceSeatsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceSeatsWithOptions(request, runtime);
}

DescribeDeviceVersionDetailResponse Alibabacloud_Wyota20210420::Client::describeDeviceVersionDetailWithOptions(shared_ptr<DescribeDeviceVersionDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    body->insert(pair<string, string>("NetworkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    body->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionName)) {
    body->insert(pair<string, string>("VersionName", *request->versionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDeviceVersionDetail"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDeviceVersionDetailResponse(callApi(params, req, runtime));
}

DescribeDeviceVersionDetailResponse Alibabacloud_Wyota20210420::Client::describeDeviceVersionDetail(shared_ptr<DescribeDeviceVersionDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceVersionDetailWithOptions(request, runtime);
}

DescribeSnLabelCountsResponse Alibabacloud_Wyota20210420::Client::describeSnLabelCountsWithOptions(shared_ptr<DescribeSnLabelCountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->labelList)) {
    body->insert(pair<string, vector<string>>("LabelList", *request->labelList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneName)) {
    body->insert(pair<string, string>("ZoneName", *request->zoneName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSnLabelCounts"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSnLabelCountsResponse(callApi(params, req, runtime));
}

DescribeSnLabelCountsResponse Alibabacloud_Wyota20210420::Client::describeSnLabelCounts(shared_ptr<DescribeSnLabelCountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSnLabelCountsWithOptions(request, runtime);
}

DescribeWorkZonesResponse Alibabacloud_Wyota20210420::Client::describeWorkZonesWithOptions(shared_ptr<DescribeWorkZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->zoneIdList)) {
    body->insert(pair<string, vector<string>>("ZoneIdList", *request->zoneIdList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->zoneNameList)) {
    body->insert(pair<string, vector<string>>("ZoneNameList", *request->zoneNameList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWorkZones"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWorkZonesResponse(callApi(params, req, runtime));
}

DescribeWorkZonesResponse Alibabacloud_Wyota20210420::Client::describeWorkZones(shared_ptr<DescribeWorkZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWorkZonesWithOptions(request, runtime);
}

DetachEndUsersResponse Alibabacloud_Wyota20210420::Client::detachEndUsersWithOptions(shared_ptr<DetachEndUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserIds)) {
    body->insert(pair<string, string>("EndUserIds", *request->endUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachEndUsers"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachEndUsersResponse(callApi(params, req, runtime));
}

DetachEndUsersResponse Alibabacloud_Wyota20210420::Client::detachEndUsers(shared_ptr<DetachEndUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachEndUsersWithOptions(request, runtime);
}

DetachLabelResponse Alibabacloud_Wyota20210420::Client::detachLabelWithOptions(shared_ptr<DetachLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->labelContent)) {
    body->insert(pair<string, string>("LabelContent", *request->labelContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelId)) {
    body->insert(pair<string, string>("LabelId", *request->labelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachLabel"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachLabelResponse(callApi(params, req, runtime));
}

DetachLabelResponse Alibabacloud_Wyota20210420::Client::detachLabel(shared_ptr<DetachLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachLabelWithOptions(request, runtime);
}

DetachLabelsResponse Alibabacloud_Wyota20210420::Client::detachLabelsWithOptions(shared_ptr<DetachLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->labelIds)) {
    body->insert(pair<string, string>("LabelIds", *request->labelIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNoList)) {
    body->insert(pair<string, string>("SerialNoList", *request->serialNoList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachLabels"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachLabelsResponse(callApi(params, req, runtime));
}

DetachLabelsResponse Alibabacloud_Wyota20210420::Client::detachLabels(shared_ptr<DetachLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachLabelsWithOptions(request, runtime);
}

GenerateOssUrlResponse Alibabacloud_Wyota20210420::Client::generateOssUrlWithOptions(shared_ptr<GenerateOssUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->objectNameList)) {
    body->insert(pair<string, vector<string>>("ObjectNameList", *request->objectNameList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateOssUrl"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateOssUrlResponse(callApi(params, req, runtime));
}

GenerateOssUrlResponse Alibabacloud_Wyota20210420::Client::generateOssUrl(shared_ptr<GenerateOssUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateOssUrlWithOptions(request, runtime);
}

GetAppOtaLatestVersionResponse Alibabacloud_Wyota20210420::Client::getAppOtaLatestVersionWithOptions(shared_ptr<GetAppOtaLatestVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baseVersion)) {
    query->insert(pair<string, string>("BaseVersion", *request->baseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientType)) {
    query->insert(pair<string, long>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUid)) {
    query->insert(pair<string, string>("ClientUid", *request->clientUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    query->insert(pair<string, string>("OsType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppOtaLatestVersion"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppOtaLatestVersionResponse(callApi(params, req, runtime));
}

GetAppOtaLatestVersionResponse Alibabacloud_Wyota20210420::Client::getAppOtaLatestVersion(shared_ptr<GetAppOtaLatestVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppOtaLatestVersionWithOptions(request, runtime);
}

GetDeviceConfigsResponse Alibabacloud_Wyota20210420::Client::getDeviceConfigsWithOptions(shared_ptr<GetDeviceConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    body->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    body->insert(pair<string, string>("NetworkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    body->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->urclVersion)) {
    body->insert(pair<string, string>("UrclVersion", *request->urclVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCustomId)) {
    body->insert(pair<string, string>("UserCustomId", *request->userCustomId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceConfigs"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceConfigsResponse(callApi(params, req, runtime));
}

GetDeviceConfigsResponse Alibabacloud_Wyota20210420::Client::getDeviceConfigs(shared_ptr<GetDeviceConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceConfigsWithOptions(request, runtime);
}

GetDeviceOtaAutoStatusResponse Alibabacloud_Wyota20210420::Client::getDeviceOtaAutoStatusWithOptions(shared_ptr<GetDeviceOtaAutoStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->clientType)) {
    body->insert(pair<string, long>("ClientType", *request->clientType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceOtaAutoStatus"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceOtaAutoStatusResponse(callApi(params, req, runtime));
}

GetDeviceOtaAutoStatusResponse Alibabacloud_Wyota20210420::Client::getDeviceOtaAutoStatus(shared_ptr<GetDeviceOtaAutoStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceOtaAutoStatusWithOptions(request, runtime);
}

GetDeviceOtaInfoResponse Alibabacloud_Wyota20210420::Client::getDeviceOtaInfoWithOptions(shared_ptr<GetDeviceOtaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baseVersion)) {
    body->insert(pair<string, string>("BaseVersion", *request->baseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    body->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    body->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    body->insert(pair<string, string>("NetworkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osVersion)) {
    body->insert(pair<string, string>("OsVersion", *request->osVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    body->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetVersionType)) {
    body->insert(pair<string, string>("TargetVersionType", *request->targetVersionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceOtaInfo"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceOtaInfoResponse(callApi(params, req, runtime));
}

GetDeviceOtaInfoResponse Alibabacloud_Wyota20210420::Client::getDeviceOtaInfo(shared_ptr<GetDeviceOtaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceOtaInfoWithOptions(request, runtime);
}

GetDeviceOtaInfoTestResponse Alibabacloud_Wyota20210420::Client::getDeviceOtaInfoTestWithOptions(shared_ptr<GetDeviceOtaInfoTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baseVersion)) {
    body->insert(pair<string, string>("BaseVersion", *request->baseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    body->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceOtaInfoTest"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceOtaInfoTestResponse(callApi(params, req, runtime));
}

GetDeviceOtaInfoTestResponse Alibabacloud_Wyota20210420::Client::getDeviceOtaInfoTest(shared_ptr<GetDeviceOtaInfoTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceOtaInfoTestWithOptions(request, runtime);
}

GetDeviceOtaTaskVersionInfoResponse Alibabacloud_Wyota20210420::Client::getDeviceOtaTaskVersionInfoWithOptions(shared_ptr<GetDeviceOtaTaskVersionInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceOtaTaskVersionInfo"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceOtaTaskVersionInfoResponse(callApi(params, req, runtime));
}

GetDeviceOtaTaskVersionInfoResponse Alibabacloud_Wyota20210420::Client::getDeviceOtaTaskVersionInfo(shared_ptr<GetDeviceOtaTaskVersionInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceOtaTaskVersionInfoWithOptions(request, runtime);
}

GetDeviceUpgradeStatusResponse Alibabacloud_Wyota20210420::Client::getDeviceUpgradeStatusWithOptions(shared_ptr<GetDeviceUpgradeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    query->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUid)) {
    query->insert(pair<string, string>("ClientUid", *request->clientUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskUid)) {
    query->insert(pair<string, string>("TaskUid", *request->taskUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceUpgradeStatus"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceUpgradeStatusResponse(callApi(params, req, runtime));
}

GetDeviceUpgradeStatusResponse Alibabacloud_Wyota20210420::Client::getDeviceUpgradeStatus(shared_ptr<GetDeviceUpgradeStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceUpgradeStatusWithOptions(request, runtime);
}

GetExportDeviceInfoOssUrlResponse Alibabacloud_Wyota20210420::Client::getExportDeviceInfoOssUrlWithOptions(shared_ptr<GetExportDeviceInfoOssUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneName)) {
    body->insert(pair<string, string>("ZoneName", *request->zoneName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetExportDeviceInfoOssUrl"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetExportDeviceInfoOssUrlResponse(callApi(params, req, runtime));
}

GetExportDeviceInfoOssUrlResponse Alibabacloud_Wyota20210420::Client::getExportDeviceInfoOssUrl(shared_ptr<GetExportDeviceInfoOssUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getExportDeviceInfoOssUrlWithOptions(request, runtime);
}

GetFbOssConfigResponse Alibabacloud_Wyota20210420::Client::getFbOssConfigWithOptions(shared_ptr<GetFbOssConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dirPrefix)) {
    body->insert(pair<string, string>("DirPrefix", *request->dirPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isDedicatedLine)) {
    body->insert(pair<string, long>("IsDedicatedLine", *request->isDedicatedLine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    body->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFbOssConfig"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFbOssConfigResponse(callApi(params, req, runtime));
}

GetFbOssConfigResponse Alibabacloud_Wyota20210420::Client::getFbOssConfig(shared_ptr<GetFbOssConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFbOssConfigWithOptions(request, runtime);
}

GetOssConfigResponse Alibabacloud_Wyota20210420::Client::getOssConfigWithOptions(shared_ptr<GetOssConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOssConfig"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOssConfigResponse(callApi(params, req, runtime));
}

GetOssConfigResponse Alibabacloud_Wyota20210420::Client::getOssConfig(shared_ptr<GetOssConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOssConfigWithOptions(request, runtime);
}

GetVersionDownloadUrlResponse Alibabacloud_Wyota20210420::Client::getVersionDownloadUrlWithOptions(shared_ptr<GetVersionDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->versionName)) {
    query->insert(pair<string, string>("VersionName", *request->versionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVersionDownloadUrl"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVersionDownloadUrlResponse(callApi(params, req, runtime));
}

GetVersionDownloadUrlResponse Alibabacloud_Wyota20210420::Client::getVersionDownloadUrl(shared_ptr<GetVersionDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVersionDownloadUrlWithOptions(request, runtime);
}

ListDeviceOtaTaskByTenantResponse Alibabacloud_Wyota20210420::Client::listDeviceOtaTaskByTenantWithOptions(shared_ptr<ListDeviceOtaTaskByTenantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeviceOtaTaskByTenant"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeviceOtaTaskByTenantResponse(callApi(params, req, runtime));
}

ListDeviceOtaTaskByTenantResponse Alibabacloud_Wyota20210420::Client::listDeviceOtaTaskByTenant(shared_ptr<ListDeviceOtaTaskByTenantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceOtaTaskByTenantWithOptions(request, runtime);
}

ListDeviceSeatsResponse Alibabacloud_Wyota20210420::Client::listDeviceSeatsWithOptions(shared_ptr<ListDeviceSeatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    body->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->seatNo)) {
    body->insert(pair<string, string>("SeatNo", *request->seatNo));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serialNoList)) {
    body->insert(pair<string, vector<string>>("SerialNoList", *request->serialNoList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantId)) {
    body->insert(pair<string, string>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeviceSeats"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeviceSeatsResponse(callApi(params, req, runtime));
}

ListDeviceSeatsResponse Alibabacloud_Wyota20210420::Client::listDeviceSeats(shared_ptr<ListDeviceSeatsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceSeatsWithOptions(request, runtime);
}

ListDevicesResponse Alibabacloud_Wyota20210420::Client::listDevicesWithOptions(shared_ptr<ListDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->clientType)) {
    query->insert(pair<string, long>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceIpV4)) {
    query->insert(pair<string, string>("DeviceIpV4", *request->deviceIpV4));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceOS)) {
    query->insert(pair<string, string>("DeviceOS", *request->deviceOS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->devicePlatform)) {
    query->insert(pair<string, string>("DevicePlatform", *request->devicePlatform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationInfo)) {
    query->insert(pair<string, string>("LocationInfo", *request->locationInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    query->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alias)) {
    body->insert(pair<string, string>("Alias", *request->alias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buildId)) {
    body->insert(pair<string, string>("BuildId", *request->buildId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceGroupId)) {
    body->insert(pair<string, string>("DeviceGroupId", *request->deviceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    body->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelContent)) {
    body->insert(pair<string, string>("LabelContent", *request->labelContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelId)) {
    body->insert(pair<string, string>("LabelId", *request->labelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDevices"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDevicesResponse(callApi(params, req, runtime));
}

ListDevicesResponse Alibabacloud_Wyota20210420::Client::listDevices(shared_ptr<ListDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDevicesWithOptions(request, runtime);
}

ListFbIssueLabelsResponse Alibabacloud_Wyota20210420::Client::listFbIssueLabelsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFbIssueLabels"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFbIssueLabelsResponse(callApi(params, req, runtime));
}

ListFbIssueLabelsResponse Alibabacloud_Wyota20210420::Client::listFbIssueLabels() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFbIssueLabelsWithOptions(runtime);
}

ListFbIssueLabelsByLCResponse Alibabacloud_Wyota20210420::Client::listFbIssueLabelsByLCWithOptions(shared_ptr<ListFbIssueLabelsByLCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->caller)) {
    body->insert(pair<string, string>("Caller", *request->caller));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->languageType)) {
    body->insert(pair<string, string>("LanguageType", *request->languageType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFbIssueLabelsByLC"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFbIssueLabelsByLCResponse(callApi(params, req, runtime));
}

ListFbIssueLabelsByLCResponse Alibabacloud_Wyota20210420::Client::listFbIssueLabelsByLC(shared_ptr<ListFbIssueLabelsByLCRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFbIssueLabelsByLCWithOptions(request, runtime);
}

ListLabelsResponse Alibabacloud_Wyota20210420::Client::listLabelsWithOptions(shared_ptr<ListLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->labelContent)) {
    body->insert(pair<string, string>("LabelContent", *request->labelContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelId)) {
    body->insert(pair<string, string>("LabelId", *request->labelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLabels"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLabelsResponse(callApi(params, req, runtime));
}

ListLabelsResponse Alibabacloud_Wyota20210420::Client::listLabels(shared_ptr<ListLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLabelsWithOptions(request, runtime);
}

ListTenantDeviceOtaInfoResponse Alibabacloud_Wyota20210420::Client::listTenantDeviceOtaInfoWithOptions(shared_ptr<ListTenantDeviceOtaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    body->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTenantDeviceOtaInfo"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTenantDeviceOtaInfoResponse(callApi(params, req, runtime));
}

ListTenantDeviceOtaInfoResponse Alibabacloud_Wyota20210420::Client::listTenantDeviceOtaInfo(shared_ptr<ListTenantDeviceOtaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTenantDeviceOtaInfoWithOptions(request, runtime);
}

ListTerminalResponse Alibabacloud_Wyota20210420::Client::listTerminalWithOptions(shared_ptr<ListTerminalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alias)) {
    body->insert(pair<string, string>("Alias", *request->alias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buildId)) {
    body->insert(pair<string, string>("BuildId", *request->buildId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientType)) {
    body->insert(pair<string, long>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->inManage)) {
    body->insert(pair<string, bool>("InManage", *request->inManage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipv4)) {
    body->insert(pair<string, string>("Ipv4", *request->ipv4));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationInfo)) {
    body->insert(pair<string, string>("LocationInfo", *request->locationInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKeyword)) {
    body->insert(pair<string, string>("SearchKeyword", *request->searchKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    body->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminalGroupId)) {
    body->insert(pair<string, string>("TerminalGroupId", *request->terminalGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTerminal"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTerminalResponse(callApi(params, req, runtime));
}

ListTerminalResponse Alibabacloud_Wyota20210420::Client::listTerminal(shared_ptr<ListTerminalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTerminalWithOptions(request, runtime);
}

ListTerminalsResponse Alibabacloud_Wyota20210420::Client::listTerminalsWithOptions(shared_ptr<ListTerminalsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serialNumbers)) {
    query->insert(pair<string, vector<string>>("SerialNumbers", *request->serialNumbers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->uuids)) {
    query->insert(pair<string, vector<string>>("Uuids", *request->uuids));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKeyword)) {
    body->insert(pair<string, string>("SearchKeyword", *request->searchKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminalGroupId)) {
    body->insert(pair<string, string>("TerminalGroupId", *request->terminalGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTerminals"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTerminalsResponse(callApi(params, req, runtime));
}

ListTerminalsResponse Alibabacloud_Wyota20210420::Client::listTerminals(shared_ptr<ListTerminalsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTerminalsWithOptions(request, runtime);
}

ListTrustDevicesResponse Alibabacloud_Wyota20210420::Client::listTrustDevicesWithOptions(shared_ptr<ListTrustDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->labelContent)) {
    body->insert(pair<string, string>("LabelContent", *request->labelContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelId)) {
    body->insert(pair<string, string>("LabelId", *request->labelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userCustomId)) {
    body->insert(pair<string, string>("UserCustomId", *request->userCustomId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTrustDevices"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTrustDevicesResponse(callApi(params, req, runtime));
}

ListTrustDevicesResponse Alibabacloud_Wyota20210420::Client::listTrustDevices(shared_ptr<ListTrustDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTrustDevicesWithOptions(request, runtime);
}

ListUserFbAcIssuesResponse Alibabacloud_Wyota20210420::Client::listUserFbAcIssuesWithOptions(shared_ptr<ListUserFbAcIssuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    body->insert(pair<string, string>("Account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    body->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorMessage)) {
    body->insert(pair<string, string>("ErrorMessage", *request->errorMessage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->issueId)) {
    body->insert(pair<string, string>("IssueId", *request->issueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    body->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservedA)) {
    body->insert(pair<string, string>("ReservedA", *request->reservedA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservedB)) {
    body->insert(pair<string, string>("ReservedB", *request->reservedB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userEmail)) {
    body->insert(pair<string, string>("UserEmail", *request->userEmail));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserFbAcIssues"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserFbAcIssuesResponse(callApi(params, req, runtime));
}

ListUserFbAcIssuesResponse Alibabacloud_Wyota20210420::Client::listUserFbAcIssues(shared_ptr<ListUserFbAcIssuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserFbAcIssuesWithOptions(request, runtime);
}

ListUserFbIssuesResponse Alibabacloud_Wyota20210420::Client::listUserFbIssuesWithOptions(shared_ptr<ListUserFbIssuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    body->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientModel)) {
    body->insert(pair<string, string>("ClientModel", *request->clientModel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSn)) {
    body->insert(pair<string, string>("ClientSn", *request->clientSn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerId)) {
    body->insert(pair<string, string>("CustomerId", *request->customerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    body->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorCode)) {
    body->insert(pair<string, string>("ErrorCode", *request->errorCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorMsg)) {
    body->insert(pair<string, string>("ErrorMsg", *request->errorMsg));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fbType)) {
    body->insert(pair<string, long>("FbType", *request->fbType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->issueId)) {
    body->insert(pair<string, long>("IssueId", *request->issueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->issueLabel)) {
    body->insert(pair<string, string>("IssueLabel", *request->issueLabel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userEmail)) {
    body->insert(pair<string, string>("UserEmail", *request->userEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->wasRead)) {
    body->insert(pair<string, long>("WasRead", *request->wasRead));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserFbIssues"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserFbIssuesResponse(callApi(params, req, runtime));
}

ListUserFbIssuesResponse Alibabacloud_Wyota20210420::Client::listUserFbIssues(shared_ptr<ListUserFbIssuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserFbIssuesWithOptions(request, runtime);
}

ModifyDevicesSecureNetworkTypeResponse Alibabacloud_Wyota20210420::Client::modifyDevicesSecureNetworkTypeWithOptions(shared_ptr<ModifyDevicesSecureNetworkTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->allDevices)) {
    body->insert(pair<string, long>("AllDevices", *request->allDevices));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secureNetworkType)) {
    body->insert(pair<string, string>("SecureNetworkType", *request->secureNetworkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNos)) {
    body->insert(pair<string, string>("SerialNos", *request->serialNos));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDevicesSecureNetworkType"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDevicesSecureNetworkTypeResponse(callApi(params, req, runtime));
}

ModifyDevicesSecureNetworkTypeResponse Alibabacloud_Wyota20210420::Client::modifyDevicesSecureNetworkType(shared_ptr<ModifyDevicesSecureNetworkTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDevicesSecureNetworkTypeWithOptions(request, runtime);
}

ModifySecureNetworkTypeResponse Alibabacloud_Wyota20210420::Client::modifySecureNetworkTypeWithOptions(shared_ptr<ModifySecureNetworkTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->secureNetworkType)) {
    body->insert(pair<string, string>("SecureNetworkType", *request->secureNetworkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySecureNetworkType"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySecureNetworkTypeResponse(callApi(params, req, runtime));
}

ModifySecureNetworkTypeResponse Alibabacloud_Wyota20210420::Client::modifySecureNetworkType(shared_ptr<ModifySecureNetworkTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecureNetworkTypeWithOptions(request, runtime);
}

RegisterDeviceResponse Alibabacloud_Wyota20210420::Client::registerDeviceWithOptions(shared_ptr<RegisterDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bluetooth)) {
    body->insert(pair<string, string>("Bluetooth", *request->bluetooth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buildId)) {
    body->insert(pair<string, string>("BuildId", *request->buildId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chipId)) {
    body->insert(pair<string, string>("ChipId", *request->chipId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    body->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientType)) {
    body->insert(pair<string, long>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cpu)) {
    body->insert(pair<string, string>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customId)) {
    body->insert(pair<string, string>("CustomId", *request->customId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->etherMac)) {
    body->insert(pair<string, string>("EtherMac", *request->etherMac));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memory)) {
    body->insert(pair<string, string>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storage)) {
    body->insert(pair<string, string>("Storage", *request->storage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("Token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wlan)) {
    body->insert(pair<string, string>("Wlan", *request->wlan));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterDevice"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterDeviceResponse(callApi(params, req, runtime));
}

RegisterDeviceResponse Alibabacloud_Wyota20210420::Client::registerDevice(shared_ptr<RegisterDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerDeviceWithOptions(request, runtime);
}

ReportAppOtaInfoResponse Alibabacloud_Wyota20210420::Client::reportAppOtaInfoWithOptions(shared_ptr<ReportAppOtaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baseVersion)) {
    query->insert(pair<string, string>("BaseVersion", *request->baseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientType)) {
    query->insert(pair<string, long>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUid)) {
    query->insert(pair<string, string>("ClientUid", *request->clientUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->note)) {
    query->insert(pair<string, string>("Note", *request->note));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    query->insert(pair<string, string>("OsType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetVersion)) {
    query->insert(pair<string, string>("TargetVersion", *request->targetVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskUid)) {
    query->insert(pair<string, string>("TaskUid", *request->taskUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportAppOtaInfo"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportAppOtaInfoResponse(callApi(params, req, runtime));
}

ReportAppOtaInfoResponse Alibabacloud_Wyota20210420::Client::reportAppOtaInfo(shared_ptr<ReportAppOtaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportAppOtaInfoWithOptions(request, runtime);
}

ReportDeviceOtaInfoResponse Alibabacloud_Wyota20210420::Client::reportDeviceOtaInfoWithOptions(shared_ptr<ReportDeviceOtaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baseVersion)) {
    body->insert(pair<string, string>("BaseVersion", *request->baseVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    body->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->note)) {
    body->insert(pair<string, string>("Note", *request->note));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetVersion)) {
    body->insert(pair<string, string>("TargetVersion", *request->targetVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportDeviceOtaInfo"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportDeviceOtaInfoResponse(callApi(params, req, runtime));
}

ReportDeviceOtaInfoResponse Alibabacloud_Wyota20210420::Client::reportDeviceOtaInfo(shared_ptr<ReportDeviceOtaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportDeviceOtaInfoWithOptions(request, runtime);
}

ReportUserFbAcIssueResponse Alibabacloud_Wyota20210420::Client::reportUserFbAcIssueWithOptions(shared_ptr<ReportUserFbAcIssueRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ReportUserFbAcIssueShrinkRequest> request = make_shared<ReportUserFbAcIssueShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ReportUserFbAcIssueRequestFileList>>(tmpReq->fileList)) {
    request->fileListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->fileList, make_shared<string>("FileList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->account)) {
    body->insert(pair<string, string>("Account", *request->account));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    body->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorMsg)) {
    body->insert(pair<string, string>("ErrorMsg", *request->errorMsg));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileListShrink)) {
    body->insert(pair<string, string>("FileList", *request->fileListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    body->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservedA)) {
    body->insert(pair<string, string>("ReservedA", *request->reservedA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservedB)) {
    body->insert(pair<string, string>("ReservedB", *request->reservedB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userEmail)) {
    body->insert(pair<string, string>("UserEmail", *request->userEmail));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportUserFbAcIssue"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportUserFbAcIssueResponse(callApi(params, req, runtime));
}

ReportUserFbAcIssueResponse Alibabacloud_Wyota20210420::Client::reportUserFbAcIssue(shared_ptr<ReportUserFbAcIssueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportUserFbAcIssueWithOptions(request, runtime);
}

ReportUserFbIssueResponse Alibabacloud_Wyota20210420::Client::reportUserFbIssueWithOptions(shared_ptr<ReportUserFbIssueRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ReportUserFbIssueShrinkRequest> request = make_shared<ReportUserFbIssueShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ReportUserFbIssueRequestFileList>>(tmpReq->fileList)) {
    request->fileListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->fileList, make_shared<string>("FileList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    body->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientModel)) {
    body->insert(pair<string, string>("ClientModel", *request->clientModel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientOsName)) {
    body->insert(pair<string, string>("ClientOsName", *request->clientOsName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSn)) {
    body->insert(pair<string, string>("ClientSn", *request->clientSn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVersion)) {
    body->insert(pair<string, string>("ClientVersion", *request->clientVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerId)) {
    body->insert(pair<string, string>("CustomerId", *request->customerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desktopId)) {
    body->insert(pair<string, string>("DesktopId", *request->desktopId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->desktopType)) {
    body->insert(pair<string, long>("DesktopType", *request->desktopType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorCode)) {
    body->insert(pair<string, string>("ErrorCode", *request->errorCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorMsg)) {
    body->insert(pair<string, string>("ErrorMsg", *request->errorMsg));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fbType)) {
    body->insert(pair<string, long>("FbType", *request->fbType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileListShrink)) {
    body->insert(pair<string, string>("FileList", *request->fileListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->issueLabel)) {
    body->insert(pair<string, string>("IssueLabel", *request->issueLabel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->occurTime)) {
    body->insert(pair<string, long>("OccurTime", *request->occurTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservedA)) {
    body->insert(pair<string, string>("ReservedA", *request->reservedA));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservedB)) {
    body->insert(pair<string, string>("ReservedB", *request->reservedB));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->telNo)) {
    body->insert(pair<string, string>("TelNo", *request->telNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userEmail)) {
    body->insert(pair<string, string>("UserEmail", *request->userEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->wyId)) {
    body->insert(pair<string, string>("WyId", *request->wyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportUserFbIssue"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReportUserFbIssueResponse(callApi(params, req, runtime));
}

ReportUserFbIssueResponse Alibabacloud_Wyota20210420::Client::reportUserFbIssue(shared_ptr<ReportUserFbIssueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportUserFbIssueWithOptions(request, runtime);
}

SendOpsMessageToTerminalsResponse Alibabacloud_Wyota20210420::Client::sendOpsMessageToTerminalsWithOptions(shared_ptr<SendOpsMessageToTerminalsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->delay)) {
    query->insert(pair<string, bool>("Delay", *request->delay));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->msg)) {
    body->insert(pair<string, string>("Msg", *request->msg));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->opsAction)) {
    body->insert(pair<string, string>("OpsAction", *request->opsAction));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->uuids)) {
    bodyFlat->insert(pair<string, vector<string>>("Uuids", *request->uuids));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->waitForAck)) {
    body->insert(pair<string, bool>("WaitForAck", *request->waitForAck));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendOpsMessageToTerminals"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendOpsMessageToTerminalsResponse(callApi(params, req, runtime));
}

SendOpsMessageToTerminalsResponse Alibabacloud_Wyota20210420::Client::sendOpsMessageToTerminals(shared_ptr<SendOpsMessageToTerminalsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendOpsMessageToTerminalsWithOptions(request, runtime);
}

SetDeviceOtaAutoStatusResponse Alibabacloud_Wyota20210420::Client::setDeviceOtaAutoStatusWithOptions(shared_ptr<SetDeviceOtaAutoStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->autoUpdate)) {
    body->insert(pair<string, long>("AutoUpdate", *request->autoUpdate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoUpdateTimeSchedule)) {
    body->insert(pair<string, string>("AutoUpdateTimeSchedule", *request->autoUpdateTimeSchedule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientType)) {
    body->insert(pair<string, long>("ClientType", *request->clientType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->forceUpgrade)) {
    body->insert(pair<string, long>("ForceUpgrade", *request->forceUpgrade));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDeviceOtaAutoStatus"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDeviceOtaAutoStatusResponse(callApi(params, req, runtime));
}

SetDeviceOtaAutoStatusResponse Alibabacloud_Wyota20210420::Client::setDeviceOtaAutoStatus(shared_ptr<SetDeviceOtaAutoStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDeviceOtaAutoStatusWithOptions(request, runtime);
}

SetDeviceOtaTaskStatusResponse Alibabacloud_Wyota20210420::Client::setDeviceOtaTaskStatusWithOptions(shared_ptr<SetDeviceOtaTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->operationStatus)) {
    body->insert(pair<string, long>("OperationStatus", *request->operationStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    body->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDeviceOtaTaskStatus"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDeviceOtaTaskStatusResponse(callApi(params, req, runtime));
}

SetDeviceOtaTaskStatusResponse Alibabacloud_Wyota20210420::Client::setDeviceOtaTaskStatus(shared_ptr<SetDeviceOtaTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDeviceOtaTaskStatusWithOptions(request, runtime);
}

UnbindAccountLessLoginUserResponse Alibabacloud_Wyota20210420::Client::unbindAccountLessLoginUserWithOptions(shared_ptr<UnbindAccountLessLoginUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    body->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindAccountLessLoginUser"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindAccountLessLoginUserResponse(callApi(params, req, runtime));
}

UnbindAccountLessLoginUserResponse Alibabacloud_Wyota20210420::Client::unbindAccountLessLoginUser(shared_ptr<UnbindAccountLessLoginUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindAccountLessLoginUserWithOptions(request, runtime);
}

UnbindDeviceSeatsResponse Alibabacloud_Wyota20210420::Client::unbindDeviceSeatsWithOptions(shared_ptr<UnbindDeviceSeatsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UnbindDeviceSeatsShrinkRequest> request = make_shared<UnbindDeviceSeatsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->serialNoList)) {
    request->serialNoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->serialNoList, make_shared<string>("SerialNoList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNoListShrink)) {
    body->insert(pair<string, string>("SerialNoList", *request->serialNoListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindDeviceSeats"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindDeviceSeatsResponse(callApi(params, req, runtime));
}

UnbindDeviceSeatsResponse Alibabacloud_Wyota20210420::Client::unbindDeviceSeats(shared_ptr<UnbindDeviceSeatsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindDeviceSeatsWithOptions(request, runtime);
}

UpdateAliasResponse Alibabacloud_Wyota20210420::Client::updateAliasWithOptions(shared_ptr<UpdateAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alias)) {
    body->insert(pair<string, string>("Alias", *request->alias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAlias"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAliasResponse(callApi(params, req, runtime));
}

UpdateAliasResponse Alibabacloud_Wyota20210420::Client::updateAlias(shared_ptr<UpdateAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAliasWithOptions(request, runtime);
}

UpdateDeviceBindedEndUserResponse Alibabacloud_Wyota20210420::Client::updateDeviceBindedEndUserWithOptions(shared_ptr<UpdateDeviceBindedEndUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    body->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateDeviceBindedEndUserRequestSourceAdEndUsers>>(request->sourceAdEndUsers)) {
    body->insert(pair<string, vector<UpdateDeviceBindedEndUserRequestSourceAdEndUsers>>("SourceAdEndUsers", *request->sourceAdEndUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndUserIds)) {
    body->insert(pair<string, string>("SourceEndUserIds", *request->sourceEndUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateDeviceBindedEndUserRequestTargetAdEndUsers>>(request->targetAdEndUsers)) {
    body->insert(pair<string, vector<UpdateDeviceBindedEndUserRequestTargetAdEndUsers>>("TargetAdEndUsers", *request->targetAdEndUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetEndUserIds)) {
    body->insert(pair<string, string>("TargetEndUserIds", *request->targetEndUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userType)) {
    body->insert(pair<string, string>("UserType", *request->userType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDeviceBindedEndUser"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDeviceBindedEndUserResponse(callApi(params, req, runtime));
}

UpdateDeviceBindedEndUserResponse Alibabacloud_Wyota20210420::Client::updateDeviceBindedEndUser(shared_ptr<UpdateDeviceBindedEndUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDeviceBindedEndUserWithOptions(request, runtime);
}

UpdateLabelResponse Alibabacloud_Wyota20210420::Client::updateLabelWithOptions(shared_ptr<UpdateLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->labelContent)) {
    body->insert(pair<string, string>("LabelContent", *request->labelContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelId)) {
    body->insert(pair<string, string>("LabelId", *request->labelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLabel"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLabelResponse(callApi(params, req, runtime));
}

UpdateLabelResponse Alibabacloud_Wyota20210420::Client::updateLabel(shared_ptr<UpdateLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLabelWithOptions(request, runtime);
}

UpdateTerminalPolicyResponse Alibabacloud_Wyota20210420::Client::updateTerminalPolicyWithOptions(shared_ptr<UpdateTerminalPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backgroundModeTitle)) {
    body->insert(pair<string, string>("BackgroundModeTitle", *request->backgroundModeTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayLayout)) {
    body->insert(pair<string, string>("DisplayLayout", *request->displayLayout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayResolution)) {
    body->insert(pair<string, string>("DisplayResolution", *request->displayResolution));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayScaleRatio)) {
    body->insert(pair<string, string>("DisplayScaleRatio", *request->displayScaleRatio));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enableAutoLockScreen)) {
    body->insert(pair<string, long>("EnableAutoLockScreen", *request->enableAutoLockScreen));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enableAutoLogin)) {
    body->insert(pair<string, long>("EnableAutoLogin", *request->enableAutoLogin));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enableBackgroundMode)) {
    body->insert(pair<string, long>("EnableBackgroundMode", *request->enableBackgroundMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enableBluetooth)) {
    body->insert(pair<string, long>("EnableBluetooth", *request->enableBluetooth));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enableModifyPassword)) {
    body->insert(pair<string, long>("EnableModifyPassword", *request->enableModifyPassword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enableScheduledReboot)) {
    body->insert(pair<string, long>("EnableScheduledReboot", *request->enableScheduledReboot));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enableScheduledShutdown)) {
    body->insert(pair<string, long>("EnableScheduledShutdown", *request->enableScheduledShutdown));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enableSwitchPersonal)) {
    body->insert(pair<string, long>("EnableSwitchPersonal", *request->enableSwitchPersonal));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->enableWlan)) {
    body->insert(pair<string, long>("EnableWlan", *request->enableWlan));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeout)) {
    body->insert(pair<string, long>("IdleTimeout", *request->idleTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idleTimeoutAction)) {
    body->insert(pair<string, long>("IdleTimeoutAction", *request->idleTimeoutAction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->powerButtonDefine)) {
    body->insert(pair<string, long>("PowerButtonDefine", *request->powerButtonDefine));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->powerButtonDefineForAs)) {
    body->insert(pair<string, long>("PowerButtonDefineForAs", *request->powerButtonDefineForAs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->powerButtonDefineForNs)) {
    body->insert(pair<string, long>("PowerButtonDefineForNs", *request->powerButtonDefineForNs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->powerOnBehavior)) {
    body->insert(pair<string, long>("PowerOnBehavior", *request->powerOnBehavior));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduledReboot)) {
    body->insert(pair<string, string>("ScheduledReboot", *request->scheduledReboot));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduledShutdown)) {
    body->insert(pair<string, string>("ScheduledShutdown", *request->scheduledShutdown));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->settingLock)) {
    body->insert(pair<string, long>("SettingLock", *request->settingLock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminalPolicyId)) {
    body->insert(pair<string, string>("TerminalPolicyId", *request->terminalPolicyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTerminalPolicy"))},
    {"version", boost::any(string("2021-04-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTerminalPolicyResponse(callApi(params, req, runtime));
}

UpdateTerminalPolicyResponse Alibabacloud_Wyota20210420::Client::updateTerminalPolicy(shared_ptr<UpdateTerminalPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTerminalPolicyWithOptions(request, runtime);
}

