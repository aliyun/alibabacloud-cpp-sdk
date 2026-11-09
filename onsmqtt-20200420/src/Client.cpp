#include <darabonba/Core.hpp>
#include <alibabacloud/OnsMqtt20200420.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::OnsMqtt20200420::Models;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{

AlibabaCloud::OnsMqtt20200420::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "OnsMqtt";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("onsmqtt", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary ApsaraMQ for MQTT supports X.509 certificate authentication, which allows clients to authenticate by using device certificates. A CA certificate is used to issue device certificates for clients and verify the validity of the device certificates. A CA certificate must be active to be used. By default, a CA certificate is active after registration. If a CA certificate is changed to the inactive state, you can invoke this operation to reactivate it.
 *
 * @description - Only Platinum<props="china"> and Professional instances support the ActiveCaCertificate operation.
 * - The request frequency limit for a single user is 500 requests per second. For special requirements, contact ApsaraMQ for MQTT technical support. DingTalk group ID: 35228338.
 * - The ActiveCaCertificate operation only supports CA certificates that are registered on the ApsaraMQ for MQTT server. You can invoke the [ListCaCertificate](https://help.aliyun.com/document_detail/2604958.html) operation to query the registered CA certificates under a specified instance.
 *
 * @param request ActiveCaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActiveCaCertificateResponse
 */
ActiveCaCertificateResponse Client::activeCaCertificateWithOptions(const ActiveCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMqttInstanceId()) {
    query["MqttInstanceId"] = request.getMqttInstanceId();
  }

  if (!!request.hasSn()) {
    query["Sn"] = request.getSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ActiveCaCertificate"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActiveCaCertificateResponse>();
}

/**
 * @summary ApsaraMQ for MQTT supports X.509 certificate authentication, which allows clients to authenticate by using device certificates. A CA certificate is used to issue device certificates for clients and verify the validity of the device certificates. A CA certificate must be active to be used. By default, a CA certificate is active after registration. If a CA certificate is changed to the inactive state, you can invoke this operation to reactivate it.
 *
 * @description - Only Platinum<props="china"> and Professional instances support the ActiveCaCertificate operation.
 * - The request frequency limit for a single user is 500 requests per second. For special requirements, contact ApsaraMQ for MQTT technical support. DingTalk group ID: 35228338.
 * - The ActiveCaCertificate operation only supports CA certificates that are registered on the ApsaraMQ for MQTT server. You can invoke the [ListCaCertificate](https://help.aliyun.com/document_detail/2604958.html) operation to query the registered CA certificates under a specified instance.
 *
 * @param request ActiveCaCertificateRequest
 * @return ActiveCaCertificateResponse
 */
ActiveCaCertificateResponse Client::activeCaCertificate(const ActiveCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activeCaCertificateWithOptions(request, runtime);
}

/**
 * @summary Activates a device certificate. A device certificate is a digital certificate issued by a CA root certificate to a client device for security authentication when the client connects to the server. When a client device uses a device certificate for access authentication, the server verifies the device certificate based on the registered CA certificate. If the CA certificate and the device certificate match, the client authentication succeeds, and the system automatically registers the device certificate on the server. By default, a device certificate is in the activated state after it is registered on the server. If a device certificate that you want to use is deactivated, you can call this operation to reactivate it.
 *
 * @description - Only Platinum<props="china"> and Professional edition instances support the ActiveDeviceCertificate operation.
 * - The request frequency limit for a single user is 500 calls per second. If you have special requirements, contact the technical support team of MSMQ for MQTT. DingTalk group ID: 35228338.
 *
 * @param request ActiveDeviceCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActiveDeviceCertificateResponse
 */
ActiveDeviceCertificateResponse Client::activeDeviceCertificateWithOptions(const ActiveDeviceCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaSn()) {
    query["CaSn"] = request.getCaSn();
  }

  if (!!request.hasDeviceSn()) {
    query["DeviceSn"] = request.getDeviceSn();
  }

  if (!!request.hasMqttInstanceId()) {
    query["MqttInstanceId"] = request.getMqttInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ActiveDeviceCertificate"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActiveDeviceCertificateResponse>();
}

/**
 * @summary Activates a device certificate. A device certificate is a digital certificate issued by a CA root certificate to a client device for security authentication when the client connects to the server. When a client device uses a device certificate for access authentication, the server verifies the device certificate based on the registered CA certificate. If the CA certificate and the device certificate match, the client authentication succeeds, and the system automatically registers the device certificate on the server. By default, a device certificate is in the activated state after it is registered on the server. If a device certificate that you want to use is deactivated, you can call this operation to reactivate it.
 *
 * @description - Only Platinum<props="china"> and Professional edition instances support the ActiveDeviceCertificate operation.
 * - The request frequency limit for a single user is 500 calls per second. If you have special requirements, contact the technical support team of MSMQ for MQTT. DingTalk group ID: 35228338.
 *
 * @param request ActiveDeviceCertificateRequest
 * @return ActiveDeviceCertificateResponse
 */
ActiveDeviceCertificateResponse Client::activeDeviceCertificate(const ActiveDeviceCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activeDeviceCertificateWithOptions(request, runtime);
}

/**
 * @summary Adds a connection blacklist to disable connections from a specific device.
 *
 * @param request AddCustomAuthConnectBlackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCustomAuthConnectBlackResponse
 */
AddCustomAuthConnectBlackResponse Client::addCustomAuthConnectBlackWithOptions(const AddCustomAuthConnectBlackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddCustomAuthConnectBlack"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCustomAuthConnectBlackResponse>();
}

/**
 * @summary Adds a connection blacklist to disable connections from a specific device.
 *
 * @param request AddCustomAuthConnectBlackRequest
 * @return AddCustomAuthConnectBlackResponse
 */
AddCustomAuthConnectBlackResponse Client::addCustomAuthConnectBlack(const AddCustomAuthConnectBlackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCustomAuthConnectBlackWithOptions(request, runtime);
}

/**
 * @summary Adds account authentication information, which can be specified at the client level.
 *
 * @param request AddCustomAuthIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCustomAuthIdentityResponse
 */
AddCustomAuthIdentityResponse Client::addCustomAuthIdentityWithOptions(const AddCustomAuthIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasIdentityType()) {
    body["IdentityType"] = request.getIdentityType();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecret()) {
    body["Secret"] = request.getSecret();
  }

  if (!!request.hasSignMode()) {
    body["SignMode"] = request.getSignMode();
  }

  if (!!request.hasUsername()) {
    body["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddCustomAuthIdentity"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCustomAuthIdentityResponse>();
}

/**
 * @summary Adds account authentication information, which can be specified at the client level.
 *
 * @param request AddCustomAuthIdentityRequest
 * @return AddCustomAuthIdentityResponse
 */
AddCustomAuthIdentityResponse Client::addCustomAuthIdentity(const AddCustomAuthIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCustomAuthIdentityWithOptions(request, runtime);
}

/**
 * @summary Adds authorization information for a topic resource. A first-level topic must be created in the console in advance.
 *
 * @param request AddCustomAuthPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCustomAuthPermissionResponse
 */
AddCustomAuthPermissionResponse Client::addCustomAuthPermissionWithOptions(const AddCustomAuthPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEffect()) {
    body["Effect"] = request.getEffect();
  }

  if (!!request.hasIdentity()) {
    body["Identity"] = request.getIdentity();
  }

  if (!!request.hasIdentityType()) {
    body["IdentityType"] = request.getIdentityType();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPermitAction()) {
    body["PermitAction"] = request.getPermitAction();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddCustomAuthPermission"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCustomAuthPermissionResponse>();
}

/**
 * @summary Adds authorization information for a topic resource. A first-level topic must be created in the console in advance.
 *
 * @param request AddCustomAuthPermissionRequest
 * @return AddCustomAuthPermissionResponse
 */
AddCustomAuthPermissionResponse Client::addCustomAuthPermission(const AddCustomAuthPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCustomAuthPermissionWithOptions(request, runtime);
}

/**
 * @summary When token-based authentication is used, the ApsaraMQ for MQTT broker issues a token (temporary credential) to the client, and the client must include the token when accessing the ApsaraMQ for MQTT broker to authenticate permissions. This API operation is used to apply for a temporary token from ApsaraMQ for MQTT.
 *
 * @description - The request frequency limit for a single user is 100 calls per second. If you have special requirements, contact the technical support team of ApsaraMQ for MQTT. DingTalk group ID: 35228338.
 * - Each time you successfully call the **ApplyToken** API operation, it is counted as one message TPS, which affects your billing. For billing details, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request ApplyTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyTokenResponse
 */
ApplyTokenResponse Client::applyTokenWithOptions(const ApplyTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActions()) {
    query["Actions"] = request.getActions();
  }

  if (!!request.hasExpireTime()) {
    query["ExpireTime"] = request.getExpireTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.getResources();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyToken"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyTokenResponse>();
}

/**
 * @summary When token-based authentication is used, the ApsaraMQ for MQTT broker issues a token (temporary credential) to the client, and the client must include the token when accessing the ApsaraMQ for MQTT broker to authenticate permissions. This API operation is used to apply for a temporary token from ApsaraMQ for MQTT.
 *
 * @description - The request frequency limit for a single user is 100 calls per second. If you have special requirements, contact the technical support team of ApsaraMQ for MQTT. DingTalk group ID: 35228338.
 * - Each time you successfully call the **ApplyToken** API operation, it is counted as one message TPS, which affects your billing. For billing details, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request ApplyTokenRequest
 * @return ApplyTokenResponse
 */
ApplyTokenResponse Client::applyToken(const ApplyTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyTokenWithOptions(request, runtime);
}

/**
 * @summary Queries the online status of clients in batches by client ID.
 *
 * @description - The QPS limit for the **BatchQuerySessionByClientIds** operation is 100. For more information, see [QPS limits](https://help.aliyun.com/document_detail/163047.html).
 * - You can query the online status of up to 10 client IDs each time you call the **BatchQuerySessionByClientIds** operation.
 * - Each successful call to the **BatchQuerySessionByClientIds** operation is counted as one message TPS, which affects your billing. For billing details, see [Billing](https://help.aliyun.com/document_detail/52819.html).
 * - Considering the performance impact, the **BatchQuerySessionByClientIds** operation uses an internal cache for queries, which may result in data inconsistency. For exact queries, use the [QuerySessionByClientId](https://help.aliyun.com/document_detail/2603924.html) operation.
 *
 * @param request BatchQuerySessionByClientIdsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchQuerySessionByClientIdsResponse
 */
BatchQuerySessionByClientIdsResponse Client::batchQuerySessionByClientIdsWithOptions(const BatchQuerySessionByClientIdsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIdList()) {
    query["ClientIdList"] = request.getClientIdList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchQuerySessionByClientIds"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchQuerySessionByClientIdsResponse>();
}

/**
 * @summary Queries the online status of clients in batches by client ID.
 *
 * @description - The QPS limit for the **BatchQuerySessionByClientIds** operation is 100. For more information, see [QPS limits](https://help.aliyun.com/document_detail/163047.html).
 * - You can query the online status of up to 10 client IDs each time you call the **BatchQuerySessionByClientIds** operation.
 * - Each successful call to the **BatchQuerySessionByClientIds** operation is counted as one message TPS, which affects your billing. For billing details, see [Billing](https://help.aliyun.com/document_detail/52819.html).
 * - Considering the performance impact, the **BatchQuerySessionByClientIds** operation uses an internal cache for queries, which may result in data inconsistency. For exact queries, use the [QuerySessionByClientId](https://help.aliyun.com/document_detail/2603924.html) operation.
 *
 * @param request BatchQuerySessionByClientIdsRequest
 * @return BatchQuerySessionByClientIdsResponse
 */
BatchQuerySessionByClientIdsResponse Client::batchQuerySessionByClientIds(const BatchQuerySessionByClientIdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchQuerySessionByClientIdsWithOptions(request, runtime);
}

/**
 * @summary Closes an active connection. However, the device may reconnect depending on the client reconnection mechanism.
 *
 * @param request CloseConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseConnectionResponse
 */
CloseConnectionResponse Client::closeConnectionWithOptions(const CloseConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseConnection"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseConnectionResponse>();
}

/**
 * @summary Closes an active connection. However, the device may reconnect depending on the client reconnection mechanism.
 *
 * @param request CloseConnectionRequest
 * @return CloseConnectionResponse
 */
CloseConnectionResponse Client::closeConnection(const CloseConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeConnectionWithOptions(request, runtime);
}

/**
 * @summary When message producers and consumers connect to the ApsaraMQ for MQTT server to send and receive messages, they must specify a client ID as the unique identity of a client. A client ID consists of two parts in the <GroupID>@@@<DeviceID> format. The DeviceID is defined by the client, and the GroupID must be created in advance in the ApsaraMQ for MQTT server.
 *
 * @description Each successful call to the **CreateGroupId** operation is counted as one message TPS, which affects your billing. For more information, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request CreateGroupIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupIdResponse
 */
CreateGroupIdResponse Client::createGroupIdWithOptions(const CreateGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGroupId"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupIdResponse>();
}

/**
 * @summary When message producers and consumers connect to the ApsaraMQ for MQTT server to send and receive messages, they must specify a client ID as the unique identity of a client. A client ID consists of two parts in the <GroupID>@@@<DeviceID> format. The DeviceID is defined by the client, and the GroupID must be created in advance in the ApsaraMQ for MQTT server.
 *
 * @description Each successful call to the **CreateGroupId** operation is counted as one message TPS, which affects your billing. For more information, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request CreateGroupIdRequest
 * @return CreateGroupIdResponse
 */
CreateGroupIdResponse Client::createGroupId(const CreateGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGroupIdWithOptions(request, runtime);
}

/**
 * @summary ApsaraMQ for MQTT supports X.509 certificate authentication, allowing clients to use device certificates for access authentication. CA certificates are used to issue device certificates for clients and verify the validity of device certificates. Before you use a CA certificate, you must register it with the ApsaraMQ for MQTT server. If you no longer need a CA certificate, you can invoke the DeleteCaCertificate operation to delete it from the server records.
 *
 * @description - Only Platinum<props="china"> and Professional instances support the DeleteCaCertificate operation.
 * - The request frequency limit for a single user is 500 requests per second. For special requirements, contact ApsaraMQ for MQTT technical support. DingTalk group ID: 35228338.
 * - The DeleteCaCertificate operation only supports CA certificates that are already registered with the ApsaraMQ for MQTT server. You can invoke the [ListCaCertificate](https://help.aliyun.com/document_detail/2604958.html) operation to query registered CA certificates under a specific instance.
 * - When you delete a specified CA certificate, all device certificates issued by this CA certificate and registered with the ApsaraMQ for MQTT server are also automatically deleted.
 *
 * @param request DeleteCaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCaCertificateResponse
 */
DeleteCaCertificateResponse Client::deleteCaCertificateWithOptions(const DeleteCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMqttInstanceId()) {
    query["MqttInstanceId"] = request.getMqttInstanceId();
  }

  if (!!request.hasSn()) {
    query["Sn"] = request.getSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCaCertificate"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCaCertificateResponse>();
}

/**
 * @summary ApsaraMQ for MQTT supports X.509 certificate authentication, allowing clients to use device certificates for access authentication. CA certificates are used to issue device certificates for clients and verify the validity of device certificates. Before you use a CA certificate, you must register it with the ApsaraMQ for MQTT server. If you no longer need a CA certificate, you can invoke the DeleteCaCertificate operation to delete it from the server records.
 *
 * @description - Only Platinum<props="china"> and Professional instances support the DeleteCaCertificate operation.
 * - The request frequency limit for a single user is 500 requests per second. For special requirements, contact ApsaraMQ for MQTT technical support. DingTalk group ID: 35228338.
 * - The DeleteCaCertificate operation only supports CA certificates that are already registered with the ApsaraMQ for MQTT server. You can invoke the [ListCaCertificate](https://help.aliyun.com/document_detail/2604958.html) operation to query registered CA certificates under a specific instance.
 * - When you delete a specified CA certificate, all device certificates issued by this CA certificate and registered with the ApsaraMQ for MQTT server are also automatically deleted.
 *
 * @param request DeleteCaCertificateRequest
 * @return DeleteCaCertificateResponse
 */
DeleteCaCertificateResponse Client::deleteCaCertificate(const DeleteCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCaCertificateWithOptions(request, runtime);
}

/**
 * @summary Deletes a connection blacklist.
 *
 * @param request DeleteCustomAuthConnectBlackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomAuthConnectBlackResponse
 */
DeleteCustomAuthConnectBlackResponse Client::deleteCustomAuthConnectBlackWithOptions(const DeleteCustomAuthConnectBlackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCustomAuthConnectBlack"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomAuthConnectBlackResponse>();
}

/**
 * @summary Deletes a connection blacklist.
 *
 * @param request DeleteCustomAuthConnectBlackRequest
 * @return DeleteCustomAuthConnectBlackResponse
 */
DeleteCustomAuthConnectBlackResponse Client::deleteCustomAuthConnectBlack(const DeleteCustomAuthConnectBlackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomAuthConnectBlackWithOptions(request, runtime);
}

/**
 * @summary Deletes custom authentication.
 *
 * @param request DeleteCustomAuthIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomAuthIdentityResponse
 */
DeleteCustomAuthIdentityResponse Client::deleteCustomAuthIdentityWithOptions(const DeleteCustomAuthIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasIdentityType()) {
    body["IdentityType"] = request.getIdentityType();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUsername()) {
    body["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCustomAuthIdentity"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomAuthIdentityResponse>();
}

/**
 * @summary Deletes custom authentication.
 *
 * @param request DeleteCustomAuthIdentityRequest
 * @return DeleteCustomAuthIdentityResponse
 */
DeleteCustomAuthIdentityResponse Client::deleteCustomAuthIdentity(const DeleteCustomAuthIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomAuthIdentityWithOptions(request, runtime);
}

/**
 * @summary Deletes topic authorization.
 *
 * @param request DeleteCustomAuthPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomAuthPermissionResponse
 */
DeleteCustomAuthPermissionResponse Client::deleteCustomAuthPermissionWithOptions(const DeleteCustomAuthPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentity()) {
    body["Identity"] = request.getIdentity();
  }

  if (!!request.hasIdentityType()) {
    body["IdentityType"] = request.getIdentityType();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCustomAuthPermission"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomAuthPermissionResponse>();
}

/**
 * @summary Deletes topic authorization.
 *
 * @param request DeleteCustomAuthPermissionRequest
 * @return DeleteCustomAuthPermissionResponse
 */
DeleteCustomAuthPermissionResponse Client::deleteCustomAuthPermission(const DeleteCustomAuthPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomAuthPermissionWithOptions(request, runtime);
}

/**
 * @summary Deletes the registration information of a specified device certificate from the server storage. A device certificate is a digital certificate issued by a certification authority (CA) root certificate to a client device. It is used for security authentication when the client connects to the server. After authentication, the server and the client can communicate securely by using the encryption key in the certificate. If the authentication fails, the server rejects the client connection.
 *
 * @description - Only Platinum<props="china"> and Professional edition instances support the DeleteDeviceCertificate operation.
 * - The request frequency limit for a single user is 500 calls per second. If you have special requirements, contact the technical support team of ApsaraMQ for MQTT. DingTalk group ID: 35228338.
 *
 * @param request DeleteDeviceCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeviceCertificateResponse
 */
DeleteDeviceCertificateResponse Client::deleteDeviceCertificateWithOptions(const DeleteDeviceCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaSn()) {
    query["CaSn"] = request.getCaSn();
  }

  if (!!request.hasDeviceSn()) {
    query["DeviceSn"] = request.getDeviceSn();
  }

  if (!!request.hasMqttInstanceId()) {
    query["MqttInstanceId"] = request.getMqttInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDeviceCertificate"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDeviceCertificateResponse>();
}

/**
 * @summary Deletes the registration information of a specified device certificate from the server storage. A device certificate is a digital certificate issued by a certification authority (CA) root certificate to a client device. It is used for security authentication when the client connects to the server. After authentication, the server and the client can communicate securely by using the encryption key in the certificate. If the authentication fails, the server rejects the client connection.
 *
 * @description - Only Platinum<props="china"> and Professional edition instances support the DeleteDeviceCertificate operation.
 * - The request frequency limit for a single user is 500 calls per second. If you have special requirements, contact the technical support team of ApsaraMQ for MQTT. DingTalk group ID: 35228338.
 *
 * @param request DeleteDeviceCertificateRequest
 * @return DeleteDeviceCertificateResponse
 */
DeleteDeviceCertificateResponse Client::deleteDeviceCertificate(const DeleteDeviceCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDeviceCertificateWithOptions(request, runtime);
}

/**
 * @summary Deletes a group ID.
 *
 * @description Each successful call to the **DeleteGroupId** operation is counted as one message TPS, which affects your billing. For more information about billing, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request DeleteGroupIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupIdResponse
 */
DeleteGroupIdResponse Client::deleteGroupIdWithOptions(const DeleteGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGroupId"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGroupIdResponse>();
}

/**
 * @summary Deletes a group ID.
 *
 * @description Each successful call to the **DeleteGroupId** operation is counted as one message TPS, which affects your billing. For more information about billing, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request DeleteGroupIdRequest
 * @return DeleteGroupIdResponse
 */
DeleteGroupIdResponse Client::deleteGroupId(const DeleteGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGroupIdWithOptions(request, runtime);
}

/**
 * @summary Deletes wildcard subscriptions in batches.
 *
 * @description > Each successful call to the **DeleteTopic** operation counts as one message TPS, which affects your billing. For more information, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request DeleteWildcardByTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWildcardByTopicResponse
 */
DeleteWildcardByTopicResponse Client::deleteWildcardByTopicWithOptions(const DeleteWildcardByTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirstTopic()) {
    query["FirstTopic"] = request.getFirstTopic();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasWildcards()) {
    query["Wildcards"] = request.getWildcards();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWildcardByTopic"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWildcardByTopicResponse>();
}

/**
 * @summary Deletes wildcard subscriptions in batches.
 *
 * @description > Each successful call to the **DeleteTopic** operation counts as one message TPS, which affects your billing. For more information, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request DeleteWildcardByTopicRequest
 * @return DeleteWildcardByTopicResponse
 */
DeleteWildcardByTopicResponse Client::deleteWildcardByTopic(const DeleteWildcardByTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWildcardByTopicWithOptions(request, runtime);
}

/**
 * @summary Downgrades the public VIP access of a specific instance for multi-instance disaster recovery. This operation is supported only for Platinum instances and requires you to submit a ticket.
 *
 * @param request DisasterDowngradeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisasterDowngradeResponse
 */
DisasterDowngradeResponse Client::disasterDowngradeWithOptions(const DisasterDowngradeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDowngradeInstanceId()) {
    body["DowngradeInstanceId"] = request.getDowngradeInstanceId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisasterDowngrade"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisasterDowngradeResponse>();
}

/**
 * @summary Downgrades the public VIP access of a specific instance for multi-instance disaster recovery. This operation is supported only for Platinum instances and requires you to submit a ticket.
 *
 * @param request DisasterDowngradeRequest
 * @return DisasterDowngradeResponse
 */
DisasterDowngradeResponse Client::disasterDowngrade(const DisasterDowngradeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disasterDowngradeWithOptions(request, runtime);
}

/**
 * @summary Restores Internet access for an instance using its virtual IP address (VIP) for graceful recovery in a multi-instance disaster recovery architecture. This operation is available only for Platinum Edition instances. To use this operation, submit a ticket.
 *
 * @param request DisasterRecoveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisasterRecoveryResponse
 */
DisasterRecoveryResponse Client::disasterRecoveryWithOptions(const DisasterRecoveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRecoveryInstanceId()) {
    body["RecoveryInstanceId"] = request.getRecoveryInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisasterRecovery"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisasterRecoveryResponse>();
}

/**
 * @summary Restores Internet access for an instance using its virtual IP address (VIP) for graceful recovery in a multi-instance disaster recovery architecture. This operation is available only for Platinum Edition instances. To use this operation, submit a ticket.
 *
 * @param request DisasterRecoveryRequest
 * @return DisasterRecoveryResponse
 */
DisasterRecoveryResponse Client::disasterRecovery(const DisasterRecoveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disasterRecoveryWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a certificate authority (CA) certificate, such as the content and status of the certificate. ApsaraMQ for MQTT allows you to use X.509 certificates for authentication. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, you can use the device certificate to implement authentication. CA certificates are used to issue device certificates to clients and validate the device certificates.
 *
 * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
 * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request GetCaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCaCertificateResponse
 */
GetCaCertificateResponse Client::getCaCertificateWithOptions(const GetCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCaCertificate"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCaCertificateResponse>();
}

/**
 * @summary Queries the details of a certificate authority (CA) certificate, such as the content and status of the certificate. ApsaraMQ for MQTT allows you to use X.509 certificates for authentication. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, you can use the device certificate to implement authentication. CA certificates are used to issue device certificates to clients and validate the device certificates.
 *
 * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
 * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request GetCaCertificateRequest
 * @return GetCaCertificateResponse
 */
GetCaCertificateResponse Client::getCaCertificate(const GetCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCaCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a device certificate. Device certificates are digital certificates issued to clients by certificate authority (CA) root certificates. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, the broker uses the device certificate to authenticate the client. If the client passes the authentication, the client and the broker can communicate with each other based on the encrypted private key in the device certificate. If the client fails the authentication, access requests from the client are denied by the client.
 *
 * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
 * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request GetDeviceCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeviceCertificateResponse
 */
GetDeviceCertificateResponse Client::getDeviceCertificateWithOptions(const GetDeviceCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeviceCertificate"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeviceCertificateResponse>();
}

/**
 * @summary Queries the details of a device certificate. Device certificates are digital certificates issued to clients by certificate authority (CA) root certificates. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, the broker uses the device certificate to authenticate the client. If the client passes the authentication, the client and the broker can communicate with each other based on the encrypted private key in the device certificate. If the client fails the authentication, access requests from the client are denied by the client.
 *
 * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
 * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request GetDeviceCertificateRequest
 * @return GetDeviceCertificateResponse
 */
GetDeviceCertificateResponse Client::getDeviceCertificate(const GetDeviceCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeviceCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries the access credential of a device. If unique-certificate-per-device authentication is used as the authentication method on an ApsaraMQ for MQTT broker, an access credential that you apply for in advance is required for authentication when you connect your device to the broker. The connection can be established only after the authentication is passed.
 *
 * @description - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 * - Each successful call to the **GetDeviceCredential** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request GetDeviceCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeviceCredentialResponse
 */
GetDeviceCredentialResponse Client::getDeviceCredentialWithOptions(const GetDeviceCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeviceCredential"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeviceCredentialResponse>();
}

/**
 * @summary Queries the access credential of a device. If unique-certificate-per-device authentication is used as the authentication method on an ApsaraMQ for MQTT broker, an access credential that you apply for in advance is required for authentication when you connect your device to the broker. The connection can be established only after the authentication is passed.
 *
 * @description - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 * - Each successful call to the **GetDeviceCredential** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request GetDeviceCredentialRequest
 * @return GetDeviceCredentialResponse
 */
GetDeviceCredentialResponse Client::getDeviceCredential(const GetDeviceCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeviceCredentialWithOptions(request, runtime);
}

/**
 * @summary Obtains the registration code of a specific certificate authority (CA) certificate. When you register a CA certificate with an ApsaraMQ for MQTT broker, you must upload the validation certificate of the CA certificate to verify whether you have the private key of the CA certificate. The validation certificate of a CA certificate must be generated by using the registration code of the CA certificate.
 *
 * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
 * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request GetRegisterCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRegisterCodeResponse
 */
GetRegisterCodeResponse Client::getRegisterCodeWithOptions(const GetRegisterCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRegisterCode"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRegisterCodeResponse>();
}

/**
 * @summary Obtains the registration code of a specific certificate authority (CA) certificate. When you register a CA certificate with an ApsaraMQ for MQTT broker, you must upload the validation certificate of the CA certificate to verify whether you have the private key of the CA certificate. The validation certificate of a CA certificate must be generated by using the registration code of the CA certificate.
 *
 * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
 * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request GetRegisterCodeRequest
 * @return GetRegisterCodeResponse
 */
GetRegisterCodeResponse Client::getRegisterCode(const GetRegisterCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRegisterCodeWithOptions(request, runtime);
}

/**
 * @summary ApsaraMQ for MQTT supports X.509 certificate-based device verification. Clients use device certificates for connection authentication. A Certificate Authority (CA) certificate is used to issue device certificates to clients and to verify the validity of those certificates. If you do not need to use a CA certificate for a period of time, call this operation to unregister it. This changes the status of the CA certificate to inactive. When you need to use the CA certificate again, you can call the ActiveCaCertificate operation to reactivate it.
 *
 * @description - Only Platinum Edition<props="china"> and Professional Edition instances support the InactivateCaCertificate operation.
 * - The request rate for a single user is limited to 500 per second. If you have special requirements, contact ApsaraMQ for MQTT technical support. The DingTalk group number is 35228338.
 * - You can call this operation only for CA certificates that are registered with ApsaraMQ for MQTT. To query the registered CA certificates for an instance, call the [ListCaCertificate](https://help.aliyun.com/document_detail/2604958.html) operation.
 *
 * @param request InactivateCaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InactivateCaCertificateResponse
 */
InactivateCaCertificateResponse Client::inactivateCaCertificateWithOptions(const InactivateCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMqttInstanceId()) {
    query["MqttInstanceId"] = request.getMqttInstanceId();
  }

  if (!!request.hasSn()) {
    query["Sn"] = request.getSn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InactivateCaCertificate"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InactivateCaCertificateResponse>();
}

/**
 * @summary ApsaraMQ for MQTT supports X.509 certificate-based device verification. Clients use device certificates for connection authentication. A Certificate Authority (CA) certificate is used to issue device certificates to clients and to verify the validity of those certificates. If you do not need to use a CA certificate for a period of time, call this operation to unregister it. This changes the status of the CA certificate to inactive. When you need to use the CA certificate again, you can call the ActiveCaCertificate operation to reactivate it.
 *
 * @description - Only Platinum Edition<props="china"> and Professional Edition instances support the InactivateCaCertificate operation.
 * - The request rate for a single user is limited to 500 per second. If you have special requirements, contact ApsaraMQ for MQTT technical support. The DingTalk group number is 35228338.
 * - You can call this operation only for CA certificates that are registered with ApsaraMQ for MQTT. To query the registered CA certificates for an instance, call the [ListCaCertificate](https://help.aliyun.com/document_detail/2604958.html) operation.
 *
 * @param request InactivateCaCertificateRequest
 * @return InactivateCaCertificateResponse
 */
InactivateCaCertificateResponse Client::inactivateCaCertificate(const InactivateCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return inactivateCaCertificateWithOptions(request, runtime);
}

/**
 * @summary A device certificate is a digital certificate that a root Certificate Authority (CA) issues to a client device. The service uses this certificate to authenticate the client during connection. If authentication is successful, the service and the client can communicate securely using the encryption key in the certificate. If authentication fails, the service denies the client\\"s connection. Should you need to temporarily disable a device certificate, you can call this operation to inactivate it, setting its status to inactive.
 *
 * @description - Only Platinum Edition<props="china">and Professional Edition instances support the InactivateDeviceCertificate operation.
 * - The request frequency for a single user is limited to 500 calls per second. For special requirements, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request InactivateDeviceCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InactivateDeviceCertificateResponse
 */
InactivateDeviceCertificateResponse Client::inactivateDeviceCertificateWithOptions(const InactivateDeviceCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaSn()) {
    query["CaSn"] = request.getCaSn();
  }

  if (!!request.hasDeviceSn()) {
    query["DeviceSn"] = request.getDeviceSn();
  }

  if (!!request.hasMqttInstanceId()) {
    query["MqttInstanceId"] = request.getMqttInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InactivateDeviceCertificate"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InactivateDeviceCertificateResponse>();
}

/**
 * @summary A device certificate is a digital certificate that a root Certificate Authority (CA) issues to a client device. The service uses this certificate to authenticate the client during connection. If authentication is successful, the service and the client can communicate securely using the encryption key in the certificate. If authentication fails, the service denies the client\\"s connection. Should you need to temporarily disable a device certificate, you can call this operation to inactivate it, setting its status to inactive.
 *
 * @description - Only Platinum Edition<props="china">and Professional Edition instances support the InactivateDeviceCertificate operation.
 * - The request frequency for a single user is limited to 500 calls per second. For special requirements, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request InactivateDeviceCertificateRequest
 * @return InactivateDeviceCertificateResponse
 */
InactivateDeviceCertificateResponse Client::inactivateDeviceCertificate(const InactivateDeviceCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return inactivateDeviceCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries all certificate authority (CA) certificates that are registered with an ApsaraMQ for MQTT instance. ApsaraMQ for MQTT allows you to use X.509 certificates for authentication. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, you can use the device certificate to implement authentication. CA certificates are used to issue device certificates to clients and validate the device certificates.
 *
 * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
 * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request ListCaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCaCertificateResponse
 */
ListCaCertificateResponse Client::listCaCertificateWithOptions(const ListCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCaCertificate"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCaCertificateResponse>();
}

/**
 * @summary Queries all certificate authority (CA) certificates that are registered with an ApsaraMQ for MQTT instance. ApsaraMQ for MQTT allows you to use X.509 certificates for authentication. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, you can use the device certificate to implement authentication. CA certificates are used to issue device certificates to clients and validate the device certificates.
 *
 * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
 * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request ListCaCertificateRequest
 * @return ListCaCertificateResponse
 */
ListCaCertificateResponse Client::listCaCertificate(const ListCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCaCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries all device certificates that are registered with an ApsaraMQ for MQTT instance. Device certificates are digital certificates issued to clients by certificate authority (CA) root certificates. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, the broker uses the device certificate to authenticate the client. If the client passes the authentication, the client and the broker can communicate with each other based on the encrypted private key in the device certificate. If the client fails the authentication, access requests from the client are denied by the client.
 *
 * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
 * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request ListDeviceCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeviceCertificateResponse
 */
ListDeviceCertificateResponse Client::listDeviceCertificateWithOptions(const ListDeviceCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeviceCertificate"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeviceCertificateResponse>();
}

/**
 * @summary Queries all device certificates that are registered with an ApsaraMQ for MQTT instance. Device certificates are digital certificates issued to clients by certificate authority (CA) root certificates. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, the broker uses the device certificate to authenticate the client. If the client passes the authentication, the client and the broker can communicate with each other based on the encrypted private key in the device certificate. If the client fails the authentication, access requests from the client are denied by the client.
 *
 * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
 * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request ListDeviceCertificateRequest
 * @return ListDeviceCertificateResponse
 */
ListDeviceCertificateResponse Client::listDeviceCertificate(const ListDeviceCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeviceCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries all device certificates that are issued by a certificate authority (CA) certificate and registered with ApsaraMQ for MQTT brokers. Device certificates are digital certificates issued to clients by CA root certificates. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, the broker uses the device certificate to authenticate the client. If the client passes the authentication, the client and the broker can communicate with each other based on the encrypted private key in the device certificate. If the client fails the authentication, access requests from the client are denied by the client.
 *
 * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
 * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request ListDeviceCertificateByCaSnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeviceCertificateByCaSnResponse
 */
ListDeviceCertificateByCaSnResponse Client::listDeviceCertificateByCaSnWithOptions(const ListDeviceCertificateByCaSnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeviceCertificateByCaSn"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeviceCertificateByCaSnResponse>();
}

/**
 * @summary Queries all device certificates that are issued by a certificate authority (CA) certificate and registered with ApsaraMQ for MQTT brokers. Device certificates are digital certificates issued to clients by CA root certificates. When you connect an ApsaraMQ for MQTT client to an ApsaraMQ for MQTT broker, the broker uses the device certificate to authenticate the client. If the client passes the authentication, the client and the broker can communicate with each other based on the encrypted private key in the device certificate. If the client fails the authentication, access requests from the client are denied by the client.
 *
 * @description *   Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
 * *   You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request ListDeviceCertificateByCaSnRequest
 * @return ListDeviceCertificateByCaSnResponse
 */
ListDeviceCertificateByCaSnResponse Client::listDeviceCertificateByCaSn(const ListDeviceCertificateByCaSnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeviceCertificateByCaSnWithOptions(request, runtime);
}

/**
 * @summary Queries clients that have applied for access credentials in unique-certificate-per-device authentication mode in an ApsaraMQ for MQTT instance.
 *
 * @param request ListDeviceCredentialClientIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeviceCredentialClientIdResponse
 */
ListDeviceCredentialClientIdResponse Client::listDeviceCredentialClientIdWithOptions(const ListDeviceCredentialClientIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
    {"action" , "ListDeviceCredentialClientId"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeviceCredentialClientIdResponse>();
}

/**
 * @summary Queries clients that have applied for access credentials in unique-certificate-per-device authentication mode in an ApsaraMQ for MQTT instance.
 *
 * @param request ListDeviceCredentialClientIdRequest
 * @return ListDeviceCredentialClientIdResponse
 */
ListDeviceCredentialClientIdResponse Client::listDeviceCredentialClientId(const ListDeviceCredentialClientIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeviceCredentialClientIdWithOptions(request, runtime);
}

/**
 * @summary You can call the ListGroupId operation to query all Group IDs in an instance.
 *
 * @description Each successful call to the **ListGroupId** operation is counted as one message transaction and is billed based on transactions per second (TPS). For more information, see [billing details](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request ListGroupIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupIdResponse
 */
ListGroupIdResponse Client::listGroupIdWithOptions(const ListGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroupId"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupIdResponse>();
}

/**
 * @summary You can call the ListGroupId operation to query all Group IDs in an instance.
 *
 * @description Each successful call to the **ListGroupId** operation is counted as one message transaction and is billed based on transactions per second (TPS). For more information, see [billing details](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request ListGroupIdRequest
 * @return ListGroupIdResponse
 */
ListGroupIdResponse Client::listGroupId(const ListGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupIdWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to query a list of instances.
 *
 * @param request ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary You can call this operation to query a list of instances.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary Lists the tags that are attached to one or more resources.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

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
    {"action" , "ListTagResources"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Lists the tags that are attached to one or more resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a client ID in a connection blacklist.
 *
 * @param request QueryCustomAuthConnectBlackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCustomAuthConnectBlackResponse
 */
QueryCustomAuthConnectBlackResponse Client::queryCustomAuthConnectBlackWithOptions(const QueryCustomAuthConnectBlackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCustomAuthConnectBlack"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCustomAuthConnectBlackResponse>();
}

/**
 * @summary Queries a client ID in a connection blacklist.
 *
 * @param request QueryCustomAuthConnectBlackRequest
 * @return QueryCustomAuthConnectBlackResponse
 */
QueryCustomAuthConnectBlackResponse Client::queryCustomAuthConnectBlack(const QueryCustomAuthConnectBlackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCustomAuthConnectBlackWithOptions(request, runtime);
}

/**
 * @summary Queries custom identity authentication.
 *
 * @param request QueryCustomAuthIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCustomAuthIdentityResponse
 */
QueryCustomAuthIdentityResponse Client::queryCustomAuthIdentityWithOptions(const QueryCustomAuthIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCustomAuthIdentity"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCustomAuthIdentityResponse>();
}

/**
 * @summary Queries custom identity authentication.
 *
 * @param request QueryCustomAuthIdentityRequest
 * @return QueryCustomAuthIdentityResponse
 */
QueryCustomAuthIdentityResponse Client::queryCustomAuthIdentity(const QueryCustomAuthIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCustomAuthIdentityWithOptions(request, runtime);
}

/**
 * @summary Queries the authorization information about a topic.
 *
 * @param request QueryCustomAuthPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCustomAuthPermissionResponse
 */
QueryCustomAuthPermissionResponse Client::queryCustomAuthPermissionWithOptions(const QueryCustomAuthPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCustomAuthPermission"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCustomAuthPermissionResponse>();
}

/**
 * @summary Queries the authorization information about a topic.
 *
 * @param request QueryCustomAuthPermissionRequest
 * @return QueryCustomAuthPermissionResponse
 */
QueryCustomAuthPermissionResponse Client::queryCustomAuthPermission(const QueryCustomAuthPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCustomAuthPermissionWithOptions(request, runtime);
}

/**
 * @summary Queries the device trace of an ApsaraMQ for MQTT client by paging. When a device encounters an exception, you can call this operation to query the connection history of the specified device to help you quickly identify the cause of the exception.
 *
 * @description - Each successful call to the **QueryMqttTraceDevice** operation counts as one message TPS, which affects your billing. For more information about billing, see [Billing](https://help.aliyun.com/document_detail/52819.html).
 * - The queries per second (QPS) limit for a single user on this operation is 500. Exceeding this limit will trigger throttling, which may affect your business. Call this operation appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/163047.html).
 *
 * @param request QueryMqttTraceDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMqttTraceDeviceResponse
 */
QueryMqttTraceDeviceResponse Client::queryMqttTraceDeviceWithOptions(const QueryMqttTraceDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMqttRegionId()) {
    query["MqttRegionId"] = request.getMqttRegionId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.getReverse();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMqttTraceDevice"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMqttTraceDeviceResponse>();
}

/**
 * @summary Queries the device trace of an ApsaraMQ for MQTT client by paging. When a device encounters an exception, you can call this operation to query the connection history of the specified device to help you quickly identify the cause of the exception.
 *
 * @description - Each successful call to the **QueryMqttTraceDevice** operation counts as one message TPS, which affects your billing. For more information about billing, see [Billing](https://help.aliyun.com/document_detail/52819.html).
 * - The queries per second (QPS) limit for a single user on this operation is 500. Exceeding this limit will trigger throttling, which may affect your business. Call this operation appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/163047.html).
 *
 * @param request QueryMqttTraceDeviceRequest
 * @return QueryMqttTraceDeviceResponse
 */
QueryMqttTraceDeviceResponse Client::queryMqttTraceDevice(const QueryMqttTraceDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMqttTraceDeviceWithOptions(request, runtime);
}

/**
 * @summary Queries messages on a device within a specific period of time. If a message is not sent or received as expected, you can call this operation to query the messaging status of the message to efficiently troubleshoot issues.
 *
 * @description *   Each successful call to the **QueryMqttTraceMessageOfClient** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 * *   You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 *
 * @param request QueryMqttTraceMessageOfClientRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMqttTraceMessageOfClientResponse
 */
QueryMqttTraceMessageOfClientResponse Client::queryMqttTraceMessageOfClientWithOptions(const QueryMqttTraceMessageOfClientRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMqttRegionId()) {
    query["MqttRegionId"] = request.getMqttRegionId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.getReverse();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMqttTraceMessageOfClient"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMqttTraceMessageOfClientResponse>();
}

/**
 * @summary Queries messages on a device within a specific period of time. If a message is not sent or received as expected, you can call this operation to query the messaging status of the message to efficiently troubleshoot issues.
 *
 * @description *   Each successful call to the **QueryMqttTraceMessageOfClient** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 * *   You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 *
 * @param request QueryMqttTraceMessageOfClientRequest
 * @return QueryMqttTraceMessageOfClientResponse
 */
QueryMqttTraceMessageOfClientResponse Client::queryMqttTraceMessageOfClient(const QueryMqttTraceMessageOfClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMqttTraceMessageOfClientWithOptions(request, runtime);
}

/**
 * @summary Queries the trace of a message. If a message is not sent or received as expected, you can call this operation to view the message details to troubleshoot the issue. For example, you can query the time when the message is published and the client that publishes the message.
 *
 * @description *   Each successful call to the **QueryMqttTraceMessagePublish** operation increases the messaging transactions per second (TPS). This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 * *   You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 *
 * @param request QueryMqttTraceMessagePublishRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMqttTraceMessagePublishResponse
 */
QueryMqttTraceMessagePublishResponse Client::queryMqttTraceMessagePublishWithOptions(const QueryMqttTraceMessagePublishRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMqttRegionId()) {
    query["MqttRegionId"] = request.getMqttRegionId();
  }

  if (!!request.hasMsgId()) {
    query["MsgId"] = request.getMsgId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMqttTraceMessagePublish"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMqttTraceMessagePublishResponse>();
}

/**
 * @summary Queries the trace of a message. If a message is not sent or received as expected, you can call this operation to view the message details to troubleshoot the issue. For example, you can query the time when the message is published and the client that publishes the message.
 *
 * @description *   Each successful call to the **QueryMqttTraceMessagePublish** operation increases the messaging transactions per second (TPS). This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 * *   You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 *
 * @param request QueryMqttTraceMessagePublishRequest
 * @return QueryMqttTraceMessagePublishResponse
 */
QueryMqttTraceMessagePublishResponse Client::queryMqttTraceMessagePublish(const QueryMqttTraceMessagePublishRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMqttTraceMessagePublishWithOptions(request, runtime);
}

/**
 * @summary Queries the delivery trace of a message. If a message is not sent or received as expected, you can call this operation to view the details about the message. For example, you can query the clients that subscribe to the message and the time when the message is delivered. This operation helps you locate the problem and identify the cause of the problem.
 *
 * @description - Each successful call to the **QueryMqttTraceMessageSubscribe** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 * - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 *
 * @param request QueryMqttTraceMessageSubscribeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMqttTraceMessageSubscribeResponse
 */
QueryMqttTraceMessageSubscribeResponse Client::queryMqttTraceMessageSubscribeWithOptions(const QueryMqttTraceMessageSubscribeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMqttRegionId()) {
    query["MqttRegionId"] = request.getMqttRegionId();
  }

  if (!!request.hasMsgId()) {
    query["MsgId"] = request.getMsgId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.getReverse();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMqttTraceMessageSubscribe"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMqttTraceMessageSubscribeResponse>();
}

/**
 * @summary Queries the delivery trace of a message. If a message is not sent or received as expected, you can call this operation to view the details about the message. For example, you can query the clients that subscribe to the message and the time when the message is delivered. This operation helps you locate the problem and identify the cause of the problem.
 *
 * @description - Each successful call to the **QueryMqttTraceMessageSubscribe** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 * - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 *
 * @param request QueryMqttTraceMessageSubscribeRequest
 * @return QueryMqttTraceMessageSubscribeResponse
 */
QueryMqttTraceMessageSubscribeResponse Client::queryMqttTraceMessageSubscribe(const QueryMqttTraceMessageSubscribeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMqttTraceMessageSubscribeWithOptions(request, runtime);
}

/**
 * @summary Queries the running status of an ApsaraMQ for MQTT client. You can troubleshoot issues based on the queried results. You can enter the ID of an ApsaraMQ for MQTT client to check the connection status and IP address of the device.
 *
 * @description - You can call this operation up to 500 times per second.\\*\\*\\*\\* For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 * - Each successful call to the **QuerySessionByClientId** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request QuerySessionByClientIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySessionByClientIdResponse
 */
QuerySessionByClientIdResponse Client::querySessionByClientIdWithOptions(const QuerySessionByClientIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySessionByClientId"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySessionByClientIdResponse>();
}

/**
 * @summary Queries the running status of an ApsaraMQ for MQTT client. You can troubleshoot issues based on the queried results. You can enter the ID of an ApsaraMQ for MQTT client to check the connection status and IP address of the device.
 *
 * @description - You can call this operation up to 500 times per second.\\*\\*\\*\\* For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 * - Each successful call to the **QuerySessionByClientId** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request QuerySessionByClientIdRequest
 * @return QuerySessionByClientIdResponse
 */
QuerySessionByClientIdResponse Client::querySessionByClientId(const QuerySessionByClientIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySessionByClientIdWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a token. If token-based authentication is used for permission authentication on an ApsaraMQ for MQTT broker, a token that is issued by the broker is required for authentication each time a client is connected to the broker. A token is a temporary credential and is valid only within a specific period of time. You can call this operation to query whether a token expires.
 *
 * @description *   You can call this operation up to 100 times per second per account. If you want to increase the limit, join the DingTalk group 35228338 to contact ApsaraMQ for MQTT technical support.
 * *   Each successful call to the **QueryToken** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request QueryTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTokenResponse
 */
QueryTokenResponse Client::queryTokenWithOptions(const QueryTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryToken"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTokenResponse>();
}

/**
 * @summary Queries the status of a token. If token-based authentication is used for permission authentication on an ApsaraMQ for MQTT broker, a token that is issued by the broker is required for authentication each time a client is connected to the broker. A token is a temporary credential and is valid only within a specific period of time. You can call this operation to query whether a token expires.
 *
 * @description *   You can call this operation up to 100 times per second per account. If you want to increase the limit, join the DingTalk group 35228338 to contact ApsaraMQ for MQTT technical support.
 * *   Each successful call to the **QueryToken** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request QueryTokenRequest
 * @return QueryTokenResponse
 */
QueryTokenResponse Client::queryToken(const QueryTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTokenWithOptions(request, runtime);
}

/**
 * @summary Queries all wildcards and the upper limit under a specific topic.
 *
 * @description > Each successful call to the **DeleteTopic** operation counts as one message TPS, which affects your billing. For more information, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request QueryWildcardByTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryWildcardByTopicResponse
 */
QueryWildcardByTopicResponse Client::queryWildcardByTopicWithOptions(const QueryWildcardByTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryWildcardByTopic"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryWildcardByTopicResponse>();
}

/**
 * @summary Queries all wildcards and the upper limit under a specific topic.
 *
 * @description > Each successful call to the **DeleteTopic** operation counts as one message TPS, which affects your billing. For more information, see [Billing overview](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request QueryWildcardByTopicRequest
 * @return QueryWildcardByTopicResponse
 */
QueryWildcardByTopicResponse Client::queryWildcardByTopic(const QueryWildcardByTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryWildcardByTopicWithOptions(request, runtime);
}

/**
 * @summary Updates the access credential of a device.
 *
 * @description ## [](#)Limits
 * You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 * > Each successful call to the **RefreshDeviceCredential** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request RefreshDeviceCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshDeviceCredentialResponse
 */
RefreshDeviceCredentialResponse Client::refreshDeviceCredentialWithOptions(const RefreshDeviceCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshDeviceCredential"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshDeviceCredentialResponse>();
}

/**
 * @summary Updates the access credential of a device.
 *
 * @description ## [](#)Limits
 * You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 * > Each successful call to the **RefreshDeviceCredential** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request RefreshDeviceCredentialRequest
 * @return RefreshDeviceCredentialResponse
 */
RefreshDeviceCredentialResponse Client::refreshDeviceCredential(const RefreshDeviceCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshDeviceCredentialWithOptions(request, runtime);
}

/**
 * @summary RegisterCaCertificate
 *
 * @description - Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
 * - You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request RegisterCaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterCaCertificateResponse
 */
RegisterCaCertificateResponse Client::registerCaCertificateWithOptions(const RegisterCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaContent()) {
    query["CaContent"] = request.getCaContent();
  }

  if (!!request.hasCaName()) {
    query["CaName"] = request.getCaName();
  }

  if (!!request.hasMqttInstanceId()) {
    query["MqttInstanceId"] = request.getMqttInstanceId();
  }

  if (!!request.hasVerificationContent()) {
    query["VerificationContent"] = request.getVerificationContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterCaCertificate"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterCaCertificateResponse>();
}

/**
 * @summary RegisterCaCertificate
 *
 * @description - Only ApsaraMQ for MQTT Enterprise Platinum Edition instances support this operation.
 * - You can call this operation up to 500 times per second per Alibaba Cloud account. If you want to increase the limit, join the DingTalk group (ID: 35228338) to contact ApsaraMQ for MQTT technical support.
 *
 * @param request RegisterCaCertificateRequest
 * @return RegisterCaCertificateResponse
 */
RegisterCaCertificateResponse Client::registerCaCertificate(const RegisterCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerCaCertificateWithOptions(request, runtime);
}

/**
 * @summary Registers an access credential for a device. In unique-certificate-per-device authentication mode, an application server applies a unique access credential for each device from the corresponding ApsaraMQ for MQTT broker. The access credential of a device consists of the client ID, AccessKey ID, and AccessKey secret of the device. When you connect a device to ApsaraMQ for MQTT, you must configure Username and Password based on the access credential of the device for authentication. You can activate the device and transfer data between the device and ApsaraMQ for MQTT only after the authentication is passed.
 *
 * @description - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 * - Each successful call to the **RegisterDeviceCredential** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request RegisterDeviceCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterDeviceCredentialResponse
 */
RegisterDeviceCredentialResponse Client::registerDeviceCredentialWithOptions(const RegisterDeviceCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterDeviceCredential"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterDeviceCredentialResponse>();
}

/**
 * @summary Registers an access credential for a device. In unique-certificate-per-device authentication mode, an application server applies a unique access credential for each device from the corresponding ApsaraMQ for MQTT broker. The access credential of a device consists of the client ID, AccessKey ID, and AccessKey secret of the device. When you connect a device to ApsaraMQ for MQTT, you must configure Username and Password based on the access credential of the device for authentication. You can activate the device and transfer data between the device and ApsaraMQ for MQTT only after the authentication is passed.
 *
 * @description - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 * - Each successful call to the **RegisterDeviceCredential** operation increases the messaging transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request RegisterDeviceCredentialRequest
 * @return RegisterDeviceCredentialResponse
 */
RegisterDeviceCredentialResponse Client::registerDeviceCredential(const RegisterDeviceCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerDeviceCredentialWithOptions(request, runtime);
}

/**
 * @summary Revokes a token.
 *
 * @description *   You can call this operation up to 5 times per second per account. If you want to increase the limit, join the DingTalk group 35228338 to contact ApsaraMQ for MQTT technical support.
 * *   Each successful call to the **RevokeToken** operation increases the messaging transactions per second (TPS). This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request RevokeTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeTokenResponse
 */
RevokeTokenResponse Client::revokeTokenWithOptions(const RevokeTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeToken"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeTokenResponse>();
}

/**
 * @summary Revokes a token.
 *
 * @description *   You can call this operation up to 5 times per second per account. If you want to increase the limit, join the DingTalk group 35228338 to contact ApsaraMQ for MQTT technical support.
 * *   Each successful call to the **RevokeToken** operation increases the messaging transactions per second (TPS). This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request RevokeTokenRequest
 * @return RevokeTokenResponse
 */
RevokeTokenResponse Client::revokeToken(const RevokeTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeTokenWithOptions(request, runtime);
}

/**
 * @summary Sends a single message from an application on a cloud server to ApsaraMQ for MQTT.
 *
 * @description *   The **SendMessage** operation is called by an application on a cloud server. This operation is complementary to the operation that is called to send a message from an ApsaraMQ for MQTT client. For information about the differences between the scenarios of sending messages from applications on cloud servers and the scenarios of sending messages from ApsaraMQ for MQTT clients, see [Developer guide](https://help.aliyun.com/document_detail/179160.html).
 * *   Messages that are sent by calling the **SendMessage** operation cannot be forwarded to ApsaraMQ for RocketMQ. If you want to use an ApsaraMQ for MQTT broker to forward messages to ApsaraMQ for RocketMQ, use [an SDK to send the messages](https://help.aliyun.com/document_detail/174527.html). The **SendMessage** operation supports up to 1,000 queries per second (QPS). For more information, see [QPS limits](https://help.aliyun.com/document_detail/163047.html).
 * *   Each successful call to the **SendMessage** operation is calculated as a message transaction per second (TPS). This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request SendMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendMessageResponse
 */
SendMessageResponse Client::sendMessageWithOptions(const SendMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMqttTopic()) {
    query["MqttTopic"] = request.getMqttTopic();
  }

  if (!!request.hasPayload()) {
    query["Payload"] = request.getPayload();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendMessage"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendMessageResponse>();
}

/**
 * @summary Sends a single message from an application on a cloud server to ApsaraMQ for MQTT.
 *
 * @description *   The **SendMessage** operation is called by an application on a cloud server. This operation is complementary to the operation that is called to send a message from an ApsaraMQ for MQTT client. For information about the differences between the scenarios of sending messages from applications on cloud servers and the scenarios of sending messages from ApsaraMQ for MQTT clients, see [Developer guide](https://help.aliyun.com/document_detail/179160.html).
 * *   Messages that are sent by calling the **SendMessage** operation cannot be forwarded to ApsaraMQ for RocketMQ. If you want to use an ApsaraMQ for MQTT broker to forward messages to ApsaraMQ for RocketMQ, use [an SDK to send the messages](https://help.aliyun.com/document_detail/174527.html). The **SendMessage** operation supports up to 1,000 queries per second (QPS). For more information, see [QPS limits](https://help.aliyun.com/document_detail/163047.html).
 * *   Each successful call to the **SendMessage** operation is calculated as a message transaction per second (TPS). This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request SendMessageRequest
 * @return SendMessageResponse
 */
SendMessageResponse Client::sendMessage(const SendMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendMessageWithOptions(request, runtime);
}

/**
 * @summary Configures a multi-domain certificate.
 *
 * @param request SetSniConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetSniConfigResponse
 */
SetSniConfigResponse Client::setSniConfigWithOptions(const SetSniConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultCertificate()) {
    query["DefaultCertificate"] = request.getDefaultCertificate();
  }

  if (!!request.hasMqttInstanceId()) {
    query["MqttInstanceId"] = request.getMqttInstanceId();
  }

  if (!!request.hasSniConfig()) {
    query["SniConfig"] = request.getSniConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetSniConfig"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetSniConfigResponse>();
}

/**
 * @summary Configures a multi-domain certificate.
 *
 * @param request SetSniConfigRequest
 * @return SetSniConfigResponse
 */
SetSniConfigResponse Client::setSniConfig(const SetSniConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSniConfigWithOptions(request, runtime);
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
    {"version" , "2020-04-20"},
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
 * @summary Deregisters the access credential of a device. After the access credential of a device is deregistered, you can no longer use the access credential to authenticate the device on the ApsaraMQ for MQTT broker.
 *
 * @description - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 * - Each successful call to the **UnRegisterDeviceCredential** operation increases the number of transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request UnRegisterDeviceCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnRegisterDeviceCredentialResponse
 */
UnRegisterDeviceCredentialResponse Client::unRegisterDeviceCredentialWithOptions(const UnRegisterDeviceCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnRegisterDeviceCredential"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnRegisterDeviceCredentialResponse>();
}

/**
 * @summary Deregisters the access credential of a device. After the access credential of a device is deregistered, you can no longer use the access credential to authenticate the device on the ApsaraMQ for MQTT broker.
 *
 * @description - You can call this operation up to 500 times per second per account. If the limit is exceeded, throttling is triggered. This may affect your business. We recommend that you take note of this limit when you call this operation. For more information, see [Limits on QPS](https://help.aliyun.com/document_detail/163047.html).
 * - Each successful call to the **UnRegisterDeviceCredential** operation increases the number of transactions per second (TPS) by one. This affects the billing of your instance. For more information, see [Billing rules](https://help.aliyun.com/document_detail/52819.html).
 *
 * @param request UnRegisterDeviceCredentialRequest
 * @return UnRegisterDeviceCredentialResponse
 */
UnRegisterDeviceCredentialResponse Client::unRegisterDeviceCredential(const UnRegisterDeviceCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unRegisterDeviceCredentialWithOptions(request, runtime);
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
    {"version" , "2020-04-20"},
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
 * @summary Updates custom authentication.
 *
 * @param request UpdateCustomAuthIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomAuthIdentityResponse
 */
UpdateCustomAuthIdentityResponse Client::updateCustomAuthIdentityWithOptions(const UpdateCustomAuthIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasIdentityType()) {
    body["IdentityType"] = request.getIdentityType();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSecret()) {
    body["Secret"] = request.getSecret();
  }

  if (!!request.hasSignMode()) {
    body["SignMode"] = request.getSignMode();
  }

  if (!!request.hasUsername()) {
    body["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateCustomAuthIdentity"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomAuthIdentityResponse>();
}

/**
 * @summary Updates custom authentication.
 *
 * @param request UpdateCustomAuthIdentityRequest
 * @return UpdateCustomAuthIdentityResponse
 */
UpdateCustomAuthIdentityResponse Client::updateCustomAuthIdentity(const UpdateCustomAuthIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomAuthIdentityWithOptions(request, runtime);
}

/**
 * @summary Updates the permissions on a topic.
 *
 * @param request UpdateCustomAuthPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomAuthPermissionResponse
 */
UpdateCustomAuthPermissionResponse Client::updateCustomAuthPermissionWithOptions(const UpdateCustomAuthPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEffect()) {
    body["Effect"] = request.getEffect();
  }

  if (!!request.hasIdentity()) {
    body["Identity"] = request.getIdentity();
  }

  if (!!request.hasIdentityType()) {
    body["IdentityType"] = request.getIdentityType();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPermitAction()) {
    body["PermitAction"] = request.getPermitAction();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateCustomAuthPermission"},
    {"version" , "2020-04-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomAuthPermissionResponse>();
}

/**
 * @summary Updates the permissions on a topic.
 *
 * @param request UpdateCustomAuthPermissionRequest
 * @return UpdateCustomAuthPermissionResponse
 */
UpdateCustomAuthPermissionResponse Client::updateCustomAuthPermission(const UpdateCustomAuthPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomAuthPermissionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420