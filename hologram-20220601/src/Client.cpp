#include <darabonba/Core.hpp>
#include <alibabacloud/Hologram20220601.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Hologram20220601::Models;
namespace AlibabaCloud
{
namespace Hologram20220601
{

AlibabaCloud::Hologram20220601::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("hologram", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Updates a resource group.
 *
 * @param request ChangeResourceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["instanceId"] = request.instanceId();
  }

  if (!!request.hasNewResourceGroupId()) {
    body["newResourceGroupId"] = request.newResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/tag/changeResourceGroup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Updates a resource group.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return changeResourceGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a virtual warehouse.
 *
 * @param request CreateHoloWarehouseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHoloWarehouseResponse
 */
CreateHoloWarehouseResponse Client::createHoloWarehouseWithOptions(const string &instanceId, const CreateHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterCount()) {
    body["clusterCount"] = request.clusterCount();
  }

  if (!!request.hasCpu()) {
    body["cpu"] = request.cpu();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateHoloWarehouse"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/createHoloWarehouse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHoloWarehouseResponse>();
}

/**
 * @summary Creates a virtual warehouse.
 *
 * @param request CreateHoloWarehouseRequest
 * @return CreateHoloWarehouseResponse
 */
CreateHoloWarehouseResponse Client::createHoloWarehouse(const string &instanceId, const CreateHoloWarehouseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Creates a Hologres instance.
 *
 * @description > Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
 * *   For more information about the billing details of Hologres, see [Pricing](https://www.alibabacloud.com/help/en/hologres/developer-reference/api-hologram-2022-06-01-createinstance).
 * *   When you purchase a Hologres instance, you must specify the region and zone in which the Hologres instance resides. A region may correspond to multiple zones. Example:
 * <!---->
 *     cn-hangzhou: cn-hangzhou-h, cn-hangzhou-j
 *        cn-shanghai: cn-shanghai-e, cn-shanghai-f
 *        cn-beijing: cn-beijing-i, cn-beijing-g
 *        cn-zhangjiakou: cn-zhangjiakou-b
 *        cn-shenzhen: cn-shenzhen-e
 *        cn-hongkong: cn-hongkong-b
 *        cn-shanghai-finance-1: cn-shanghai-finance-1z
 *        ap-northeast-1: ap-northeast-1a
 *        ap-southeast-1: ap-southeast-1c
 *        ap-southeast-3: ap-southeast-3b
 *        ap-southeast-5: ap-southeast-5b
 *        ap-south-1: ap-south-1b
 *        eu-central-1: eu-central-1a
 *        us-east-1: us-east-1a
 *        us-west-1: us-west-1b
 *
 * @param request CreateInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoPay()) {
    body["autoPay"] = request.autoPay();
  }

  if (!!request.hasAutoRenew()) {
    body["autoRenew"] = request.autoRenew();
  }

  if (!!request.hasChargeType()) {
    body["chargeType"] = request.chargeType();
  }

  if (!!request.hasColdStorageSize()) {
    body["coldStorageSize"] = request.coldStorageSize();
  }

  if (!!request.hasCpu()) {
    body["cpu"] = request.cpu();
  }

  if (!!request.hasDuration()) {
    body["duration"] = request.duration();
  }

  if (!!request.hasEnableServerlessComputing()) {
    body["enableServerlessComputing"] = request.enableServerlessComputing();
  }

  if (!!request.hasGatewayCount()) {
    body["gatewayCount"] = request.gatewayCount();
  }

  if (!!request.hasInitialDatabases()) {
    body["initialDatabases"] = request.initialDatabases();
  }

  if (!!request.hasInstanceName()) {
    body["instanceName"] = request.instanceName();
  }

  if (!!request.hasInstanceType()) {
    body["instanceType"] = request.instanceType();
  }

  if (!!request.hasLeaderInstanceId()) {
    body["leaderInstanceId"] = request.leaderInstanceId();
  }

  if (!!request.hasPricingCycle()) {
    body["pricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasRegionId()) {
    body["regionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStorageSize()) {
    body["storageSize"] = request.storageSize();
  }

  if (!!request.hasStorageType()) {
    body["storageType"] = request.storageType();
  }

  if (!!request.hasVSwitchId()) {
    body["vSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    body["vpcId"] = request.vpcId();
  }

  if (!!request.hasZoneId()) {
    body["zoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Creates a Hologres instance.
 *
 * @description > Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
 * *   For more information about the billing details of Hologres, see [Pricing](https://www.alibabacloud.com/help/en/hologres/developer-reference/api-hologram-2022-06-01-createinstance).
 * *   When you purchase a Hologres instance, you must specify the region and zone in which the Hologres instance resides. A region may correspond to multiple zones. Example:
 * <!---->
 *     cn-hangzhou: cn-hangzhou-h, cn-hangzhou-j
 *        cn-shanghai: cn-shanghai-e, cn-shanghai-f
 *        cn-beijing: cn-beijing-i, cn-beijing-g
 *        cn-zhangjiakou: cn-zhangjiakou-b
 *        cn-shenzhen: cn-shenzhen-e
 *        cn-hongkong: cn-hongkong-b
 *        cn-shanghai-finance-1: cn-shanghai-finance-1z
 *        ap-northeast-1: ap-northeast-1a
 *        ap-southeast-1: ap-southeast-1c
 *        ap-southeast-3: ap-southeast-3b
 *        ap-southeast-5: ap-southeast-5b
 *        ap-south-1: ap-south-1b
 *        eu-central-1: eu-central-1a
 *        us-east-1: us-east-1a
 *        us-west-1: us-west-1b
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a virtual warehouse.
 *
 * @param request DeleteHoloWarehouseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHoloWarehouseResponse
 */
DeleteHoloWarehouseResponse Client::deleteHoloWarehouseWithOptions(const string &instanceId, const DeleteHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteHoloWarehouse"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/deleteHoloWarehouse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHoloWarehouseResponse>();
}

/**
 * @summary Deletes a virtual warehouse.
 *
 * @param request DeleteHoloWarehouseRequest
 * @return DeleteHoloWarehouseResponse
 */
DeleteHoloWarehouseResponse Client::deleteHoloWarehouse(const string &instanceId, const DeleteHoloWarehouseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Deletes a Hologres instance.
 *
 * @description > Before you call this operation, read the documentation and make sure that you understand the prerequisites and impacts of this operation.
 * *   After you delete a Hologres instance, data and objects in the instance cannot be restored. Proceed with caution. For more information, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview?spm=a2c63.p38356.0.0.efc33b87i5pDl7).
 * *   You can delete only pay-as-you-go instances.
 *
 * @param request DeleteInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const string &instanceId, const DeleteInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Deletes a Hologres instance.
 *
 * @description > Before you call this operation, read the documentation and make sure that you understand the prerequisites and impacts of this operation.
 * *   After you delete a Hologres instance, data and objects in the instance cannot be restored. Proceed with caution. For more information, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview?spm=a2c63.p38356.0.0.efc33b87i5pDl7).
 * *   You can delete only pay-as-you-go instances.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const string &instanceId, const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteInstanceWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Disables data lake acceleration.
 *
 * @param request DisableHiveAccessRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableHiveAccessResponse
 */
DisableHiveAccessResponse Client::disableHiveAccessWithOptions(const string &instanceId, const DisableHiveAccessRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableHiveAccess"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/disableHiveAccess")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableHiveAccessResponse>();
}

/**
 * @summary Disables data lake acceleration.
 *
 * @param request DisableHiveAccessRequest
 * @return DisableHiveAccessResponse
 */
DisableHiveAccessResponse Client::disableHiveAccess(const string &instanceId, const DisableHiveAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableHiveAccessWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 关闭SSL
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSSLResponse
 */
DisableSSLResponse Client::disableSSLWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableSSL"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/disableSSL")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableSSLResponse>();
}

/**
 * @summary 关闭SSL
 *
 * @return DisableSSLResponse
 */
DisableSSLResponse Client::disableSSL(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableSSLWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Enables data lake acceleration.
 *
 * @param request EnableHiveAccessRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableHiveAccessResponse
 */
EnableHiveAccessResponse Client::enableHiveAccessWithOptions(const string &instanceId, const EnableHiveAccessRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableHiveAccess"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/enableHiveAccess")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableHiveAccessResponse>();
}

/**
 * @summary Enables data lake acceleration.
 *
 * @param request EnableHiveAccessRequest
 * @return EnableHiveAccessResponse
 */
EnableHiveAccessResponse Client::enableHiveAccess(const string &instanceId, const EnableHiveAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableHiveAccessWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 打开SSL
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSSLResponse
 */
EnableSSLResponse Client::enableSSLWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableSSL"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/enableSSL")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableSSLResponse>();
}

/**
 * @summary 打开SSL
 *
 * @return EnableSSLResponse
 */
EnableSSLResponse Client::enableSSL(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableSSLWithOptions(instanceId, headers, runtime);
}

/**
 * @summary 获得证书信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCertificateAttributeResponse
 */
GetCertificateAttributeResponse Client::getCertificateAttributeWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCertificateAttribute"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/certificateAttribute")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCertificateAttributeResponse>();
}

/**
 * @summary 获得证书信息
 *
 * @return GetCertificateAttributeResponse
 */
GetCertificateAttributeResponse Client::getCertificateAttribute(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCertificateAttributeWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Obtains the details of an instance.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary Obtains the details of an instance.
 *
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getInstanceWithOptions(instanceId, headers, runtime);
}

/**
 * @summary 获得根证书
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRootCertificateResponse
 */
GetRootCertificateResponse Client::getRootCertificateWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRootCertificate"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/rootCertificate")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRootCertificateResponse>();
}

/**
 * @summary 获得根证书
 *
 * @return GetRootCertificateResponse
 */
GetRootCertificateResponse Client::getRootCertificate(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRootCertificateWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Queries details of a virtual warehouse instance.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWarehouseDetailResponse
 */
GetWarehouseDetailResponse Client::getWarehouseDetailWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWarehouseDetail"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/getWarehouseDetail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWarehouseDetailResponse>();
}

/**
 * @summary Queries details of a virtual warehouse instance.
 *
 * @return GetWarehouseDetailResponse
 */
GetWarehouseDetailResponse Client::getWarehouseDetail(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWarehouseDetailWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Queries a list of backups. A backup is a full data snapshot of an instance at the end of the snapshot time. You can purchase another instance to completely restore the original data.
 *
 * @param request ListBackupDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBackupDataResponse
 */
ListBackupDataResponse Client::listBackupDataWithOptions(const ListBackupDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupType()) {
    query["backupType"] = request.backupType();
  }

  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBackupData"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/backups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBackupDataResponse>();
}

/**
 * @summary Queries a list of backups. A backup is a full data snapshot of an instance at the end of the snapshot time. You can purchase another instance to completely restore the original data.
 *
 * @param request ListBackupDataRequest
 * @return ListBackupDataResponse
 */
ListBackupDataResponse Client::listBackupData(const ListBackupDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listBackupDataWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of instances.
 *
 * @param request ListInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCmsInstanceType()) {
    body["cmsInstanceType"] = request.cmsInstanceType();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    body["tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Queries a list of instances.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the list of virtual warehouse instances.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWarehousesResponse
 */
ListWarehousesResponse Client::listWarehousesWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWarehouses"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/listWarehouses")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWarehousesResponse>();
}

/**
 * @summary Queries the list of virtual warehouse instances.
 *
 * @return ListWarehousesResponse
 */
ListWarehousesResponse Client::listWarehouses(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWarehousesWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Triggers shard rebalancing for a virtual warehouse.
 *
 * @param request RebalanceHoloWarehouseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebalanceHoloWarehouseResponse
 */
RebalanceHoloWarehouseResponse Client::rebalanceHoloWarehouseWithOptions(const string &instanceId, const RebalanceHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RebalanceHoloWarehouse"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/rebalanceHoloWarehouse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebalanceHoloWarehouseResponse>();
}

/**
 * @summary Triggers shard rebalancing for a virtual warehouse.
 *
 * @param request RebalanceHoloWarehouseRequest
 * @return RebalanceHoloWarehouseResponse
 */
RebalanceHoloWarehouseResponse Client::rebalanceHoloWarehouse(const string &instanceId, const RebalanceHoloWarehouseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rebalanceHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Renames a virtual warehouse.
 *
 * @param request RenameHoloWarehouseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenameHoloWarehouseResponse
 */
RenameHoloWarehouseResponse Client::renameHoloWarehouseWithOptions(const string &instanceId, const RenameHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasNewWarehouseName()) {
    body["newWarehouseName"] = request.newWarehouseName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RenameHoloWarehouse"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/renameHoloWarehouse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenameHoloWarehouseResponse>();
}

/**
 * @summary Renames a virtual warehouse.
 *
 * @param request RenameHoloWarehouseRequest
 * @return RenameHoloWarehouseResponse
 */
RenameHoloWarehouseResponse Client::renameHoloWarehouse(const string &instanceId, const RenameHoloWarehouseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renameHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Manually renews a Hologres instance. You can enable monthly auto-renewal when you renew a Hologres instance.
 *
 * @description >  Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
 * *   For more information about the billing of Hologres, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview).
 * *   For more information about how to renew a Hologres instance, see [Manage renewals](https://www.alibabacloud.com/help/zh/hologres/product-overview/manage-renewals?spm=a2c63.p38356.0.0.38e731c9VAwtDP).
 * *   You can renew only subscription instances.
 *
 * @param request RenewInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstanceWithOptions(const string &instanceId, const RenewInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoRenew()) {
    body["autoRenew"] = request.autoRenew();
  }

  if (!!request.hasDuration()) {
    body["duration"] = request.duration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RenewInstance"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/renew")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewInstanceResponse>();
}

/**
 * @summary Manually renews a Hologres instance. You can enable monthly auto-renewal when you renew a Hologres instance.
 *
 * @description >  Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
 * *   For more information about the billing of Hologres, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview).
 * *   For more information about how to renew a Hologres instance, see [Manage renewals](https://www.alibabacloud.com/help/zh/hologres/product-overview/manage-renewals?spm=a2c63.p38356.0.0.38e731c9VAwtDP).
 * *   You can renew only subscription instances.
 *
 * @param request RenewInstanceRequest
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstance(const string &instanceId, const RenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renewInstanceWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 更新证书
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewSSLCertificateResponse
 */
RenewSSLCertificateResponse Client::renewSSLCertificateWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewSSLCertificate"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/renewSSLCertificate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewSSLCertificateResponse>();
}

/**
 * @summary 更新证书
 *
 * @return RenewSSLCertificateResponse
 */
RenewSSLCertificateResponse Client::renewSSLCertificate(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renewSSLCertificateWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Restarts a virtual warehouse.
 *
 * @param request RestartHoloWarehouseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartHoloWarehouseResponse
 */
RestartHoloWarehouseResponse Client::restartHoloWarehouseWithOptions(const string &instanceId, const RestartHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RestartHoloWarehouse"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/restartHoloWarehouse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartHoloWarehouseResponse>();
}

/**
 * @summary Restarts a virtual warehouse.
 *
 * @param request RestartHoloWarehouseRequest
 * @return RestartHoloWarehouseResponse
 */
RestartHoloWarehouseResponse Client::restartHoloWarehouse(const string &instanceId, const RestartHoloWarehouseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restartHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Restarts an instance.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartInstance"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/restart")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartInstanceResponse>();
}

/**
 * @summary Restarts an instance.
 *
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstance(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return restartInstanceWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Resumes a virtual warehouse.
 *
 * @param request ResumeHoloWarehouseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeHoloWarehouseResponse
 */
ResumeHoloWarehouseResponse Client::resumeHoloWarehouseWithOptions(const string &instanceId, const ResumeHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ResumeHoloWarehouse"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/resumeHoloWarehouse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeHoloWarehouseResponse>();
}

/**
 * @summary Resumes a virtual warehouse.
 *
 * @param request ResumeHoloWarehouseRequest
 * @return ResumeHoloWarehouseResponse
 */
ResumeHoloWarehouseResponse Client::resumeHoloWarehouse(const string &instanceId, const ResumeHoloWarehouseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Resumes an instance.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeInstanceResponse
 */
ResumeInstanceResponse Client::resumeInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeInstance"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/resume")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeInstanceResponse>();
}

/**
 * @summary Resumes an instance.
 *
 * @return ResumeInstanceResponse
 */
ResumeInstanceResponse Client::resumeInstance(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeInstanceWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Scales in or out a virtual warehouse.
 *
 * @param request ScaleHoloWarehouseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScaleHoloWarehouseResponse
 */
ScaleHoloWarehouseResponse Client::scaleHoloWarehouseWithOptions(const string &instanceId, const ScaleHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClusterCount()) {
    body["clusterCount"] = request.clusterCount();
  }

  if (!!request.hasCpu()) {
    body["cpu"] = request.cpu();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ScaleHoloWarehouse"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/scaleHoloWarehouse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScaleHoloWarehouseResponse>();
}

/**
 * @summary Scales in or out a virtual warehouse.
 *
 * @param request ScaleHoloWarehouseRequest
 * @return ScaleHoloWarehouseResponse
 */
ScaleHoloWarehouseResponse Client::scaleHoloWarehouse(const string &instanceId, const ScaleHoloWarehouseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return scaleHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Changes the specifications and storage space of a Hologres instance.
 *
 * @description > Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
 * *   For more information about the billing of Hologres, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview).
 * *   During the change of computing resource specifications of a Hologres instance, the instance is unavailable. During the change of storage resource specifications of a Hologres instance, the instance can work normally. Do not frequently change instance specifications. For more information, see [Upgrade or downgrade instance specifications](https://www.alibabacloud.com/help/en/hologres/product-overview/upgrade-or-downgrade-instance-specifications).
 *
 * @param request ScaleInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScaleInstanceResponse
 */
ScaleInstanceResponse Client::scaleInstanceWithOptions(const string &instanceId, const ScaleInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasColdStorageSize()) {
    body["coldStorageSize"] = request.coldStorageSize();
  }

  if (!!request.hasCpu()) {
    body["cpu"] = request.cpu();
  }

  if (!!request.hasEnableServerlessComputing()) {
    body["enableServerlessComputing"] = request.enableServerlessComputing();
  }

  if (!!request.hasGatewayCount()) {
    body["gatewayCount"] = request.gatewayCount();
  }

  if (!!request.hasScaleType()) {
    body["scaleType"] = request.scaleType();
  }

  if (!!request.hasStorageSize()) {
    body["storageSize"] = request.storageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ScaleInstance"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/scale")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScaleInstanceResponse>();
}

/**
 * @summary Changes the specifications and storage space of a Hologres instance.
 *
 * @description > Before you call this operation, make sure that you understand the billing method and pricing of Hologres because this operation is charged.
 * *   For more information about the billing of Hologres, see [Billing overview](https://www.alibabacloud.com/help/zh/hologres/product-overview/billing-overview).
 * *   During the change of computing resource specifications of a Hologres instance, the instance is unavailable. During the change of storage resource specifications of a Hologres instance, the instance can work normally. Do not frequently change instance specifications. For more information, see [Upgrade or downgrade instance specifications](https://www.alibabacloud.com/help/en/hologres/product-overview/upgrade-or-downgrade-instance-specifications).
 *
 * @param request ScaleInstanceRequest
 * @return ScaleInstanceResponse
 */
ScaleInstanceResponse Client::scaleInstance(const string &instanceId, const ScaleInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return scaleInstanceWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Stops an instance.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstanceWithOptions(const string &instanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopInstance"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInstanceResponse>();
}

/**
 * @summary Stops an instance.
 *
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstance(const string &instanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopInstanceWithOptions(instanceId, headers, runtime);
}

/**
 * @summary Suspends a virtual warehouse.
 *
 * @param request SuspendHoloWarehouseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendHoloWarehouseResponse
 */
SuspendHoloWarehouseResponse Client::suspendHoloWarehouseWithOptions(const string &instanceId, const SuspendHoloWarehouseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SuspendHoloWarehouse"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/suspendHoloWarehouse")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendHoloWarehouseResponse>();
}

/**
 * @summary Suspends a virtual warehouse.
 *
 * @param request SuspendHoloWarehouseRequest
 * @return SuspendHoloWarehouseResponse
 */
SuspendHoloWarehouseResponse Client::suspendHoloWarehouse(const string &instanceId, const SuspendHoloWarehouseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return suspendHoloWarehouseWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Changes the name of an instance.
 *
 * @param request UpdateInstanceNameRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceNameResponse
 */
UpdateInstanceNameResponse Client::updateInstanceNameWithOptions(const string &instanceId, const UpdateInstanceNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceName()) {
    body["instanceName"] = request.instanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstanceName"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/instanceName")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceNameResponse>();
}

/**
 * @summary Changes the name of an instance.
 *
 * @param request UpdateInstanceNameRequest
 * @return UpdateInstanceNameResponse
 */
UpdateInstanceNameResponse Client::updateInstanceName(const string &instanceId, const UpdateInstanceNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceNameWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Modifies the network configuration of an instance.
 *
 * @param request UpdateInstanceNetworkTypeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceNetworkTypeResponse
 */
UpdateInstanceNetworkTypeResponse Client::updateInstanceNetworkTypeWithOptions(const string &instanceId, const UpdateInstanceNetworkTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAnyTunnelToSingleTunnel()) {
    body["anyTunnelToSingleTunnel"] = request.anyTunnelToSingleTunnel();
  }

  if (!!request.hasNetworkTypes()) {
    body["networkTypes"] = request.networkTypes();
  }

  if (!!request.hasVSwitchId()) {
    body["vSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    body["vpcId"] = request.vpcId();
  }

  if (!!request.hasVpcOwnerId()) {
    body["vpcOwnerId"] = request.vpcOwnerId();
  }

  if (!!request.hasVpcRegionId()) {
    body["vpcRegionId"] = request.vpcRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstanceNetworkType"},
    {"version" , "2022-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/network")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceNetworkTypeResponse>();
}

/**
 * @summary Modifies the network configuration of an instance.
 *
 * @param request UpdateInstanceNetworkTypeRequest
 * @return UpdateInstanceNetworkTypeResponse
 */
UpdateInstanceNetworkTypeResponse Client::updateInstanceNetworkType(const string &instanceId, const UpdateInstanceNetworkTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateInstanceNetworkTypeWithOptions(instanceId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Hologram20220601