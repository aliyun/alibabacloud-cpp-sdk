#include <darabonba/Core.hpp>
#include <alibabacloud/Nlb20220430.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Nlb20220430::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Nlb20220430
{

AlibabaCloud::Nlb20220430::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("nlb", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds backend servers to a specified server group.
 *
 * @param request AddServersToServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddServersToServerGroupResponse
 */
AddServersToServerGroupResponse Client::addServersToServerGroupWithOptions(const AddServersToServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServerGroupId()) {
    body["ServerGroupId"] = request.getServerGroupId();
  }

  json bodyFlat = {};
  if (!!request.hasServers()) {
    bodyFlat["Servers"] = request.getServers();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddServersToServerGroup"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddServersToServerGroupResponse>();
}

/**
 * @summary Adds backend servers to a specified server group.
 *
 * @param request AddServersToServerGroupRequest
 * @return AddServersToServerGroupResponse
 */
AddServersToServerGroupResponse Client::addServersToServerGroup(const AddServersToServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addServersToServerGroupWithOptions(request, runtime);
}

/**
 * @summary Associates additional certificates with a listener that uses SSL over TCP.
 *
 * @description **AssociateAdditionalCertificatesWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListListenerCertificates](https://help.aliyun.com/document_detail/615175.html) operation to query the status of the task:
 * *   If the listener is in the **Associating** state, the additional certificates are being associated.
 * *   If the listener is in the **Associated** state, the additional certificates are associated.
 *
 * @param request AssociateAdditionalCertificatesWithListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateAdditionalCertificatesWithListenerResponse
 */
AssociateAdditionalCertificatesWithListenerResponse Client::associateAdditionalCertificatesWithListenerWithOptions(const AssociateAdditionalCertificatesWithListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdditionalCertificateIds()) {
    body["AdditionalCertificateIds"] = request.getAdditionalCertificateIds();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasListenerId()) {
    body["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AssociateAdditionalCertificatesWithListener"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateAdditionalCertificatesWithListenerResponse>();
}

/**
 * @summary Associates additional certificates with a listener that uses SSL over TCP.
 *
 * @description **AssociateAdditionalCertificatesWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListListenerCertificates](https://help.aliyun.com/document_detail/615175.html) operation to query the status of the task:
 * *   If the listener is in the **Associating** state, the additional certificates are being associated.
 * *   If the listener is in the **Associated** state, the additional certificates are associated.
 *
 * @param request AssociateAdditionalCertificatesWithListenerRequest
 * @return AssociateAdditionalCertificatesWithListenerResponse
 */
AssociateAdditionalCertificatesWithListenerResponse Client::associateAdditionalCertificatesWithListener(const AssociateAdditionalCertificatesWithListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateAdditionalCertificatesWithListenerWithOptions(request, runtime);
}

/**
 * @summary Associates an Internet Shared Bandwidth instance with a Network Load Balancer (NLB) instance.
 *
 * @param request AttachCommonBandwidthPackageToLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachCommonBandwidthPackageToLoadBalancerResponse
 */
AttachCommonBandwidthPackageToLoadBalancerResponse Client::attachCommonBandwidthPackageToLoadBalancerWithOptions(const AttachCommonBandwidthPackageToLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBandwidthPackageId()) {
    body["BandwidthPackageId"] = request.getBandwidthPackageId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AttachCommonBandwidthPackageToLoadBalancer"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachCommonBandwidthPackageToLoadBalancerResponse>();
}

/**
 * @summary Associates an Internet Shared Bandwidth instance with a Network Load Balancer (NLB) instance.
 *
 * @param request AttachCommonBandwidthPackageToLoadBalancerRequest
 * @return AttachCommonBandwidthPackageToLoadBalancerResponse
 */
AttachCommonBandwidthPackageToLoadBalancerResponse Client::attachCommonBandwidthPackageToLoadBalancer(const AttachCommonBandwidthPackageToLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachCommonBandwidthPackageToLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Adds the elastic IP address (EIP) and virtual IP address (VIP) of a zone to the DNS record.
 *
 * @description Before you call this operation, the zone of the Network Load Balancer (NLB) instance is removed from the DNS record by using the console or calling the [StartShiftLoadBalancerZones](https://help.aliyun.com/document_detail/2411999.html) API operation.
 *
 * @param request CancelShiftLoadBalancerZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelShiftLoadBalancerZonesResponse
 */
CancelShiftLoadBalancerZonesResponse Client::cancelShiftLoadBalancerZonesWithOptions(const CancelShiftLoadBalancerZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasZoneMappings()) {
    body["ZoneMappings"] = request.getZoneMappings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CancelShiftLoadBalancerZones"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelShiftLoadBalancerZonesResponse>();
}

/**
 * @summary Adds the elastic IP address (EIP) and virtual IP address (VIP) of a zone to the DNS record.
 *
 * @description Before you call this operation, the zone of the Network Load Balancer (NLB) instance is removed from the DNS record by using the console or calling the [StartShiftLoadBalancerZones](https://help.aliyun.com/document_detail/2411999.html) API operation.
 *
 * @param request CancelShiftLoadBalancerZonesRequest
 * @return CancelShiftLoadBalancerZonesResponse
 */
CancelShiftLoadBalancerZonesResponse Client::cancelShiftLoadBalancerZones(const CancelShiftLoadBalancerZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelShiftLoadBalancerZonesWithOptions(request, runtime);
}

/**
 * @summary Creates a TCP or UDP listener, or a listener that uses SSL over TCP for a Network Load Balancer (NLB) instance.
 *
 * @param tmpReq CreateListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateListenerResponse
 */
CreateListenerResponse Client::createListenerWithOptions(const CreateListenerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateListenerShrinkRequest request = CreateListenerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProxyProtocolV2Config()) {
    request.setProxyProtocolV2ConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProxyProtocolV2Config(), "ProxyProtocolV2Config", "json"));
  }

  json body = {};
  if (!!request.hasAlpnEnabled()) {
    body["AlpnEnabled"] = request.getAlpnEnabled();
  }

  if (!!request.hasAlpnPolicy()) {
    body["AlpnPolicy"] = request.getAlpnPolicy();
  }

  if (!!request.hasCaCertificateIds()) {
    body["CaCertificateIds"] = request.getCaCertificateIds();
  }

  if (!!request.hasCaEnabled()) {
    body["CaEnabled"] = request.getCaEnabled();
  }

  if (!!request.hasCertificateIds()) {
    body["CertificateIds"] = request.getCertificateIds();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCps()) {
    body["Cps"] = request.getCps();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEndPort()) {
    body["EndPort"] = request.getEndPort();
  }

  if (!!request.hasIdleTimeout()) {
    body["IdleTimeout"] = request.getIdleTimeout();
  }

  if (!!request.hasListenerDescription()) {
    body["ListenerDescription"] = request.getListenerDescription();
  }

  if (!!request.hasListenerPort()) {
    body["ListenerPort"] = request.getListenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    body["ListenerProtocol"] = request.getListenerProtocol();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasMss()) {
    body["Mss"] = request.getMss();
  }

  if (!!request.hasProxyProtocolEnabled()) {
    body["ProxyProtocolEnabled"] = request.getProxyProtocolEnabled();
  }

  if (!!request.hasProxyProtocolV2ConfigShrink()) {
    body["ProxyProtocolV2Config"] = request.getProxyProtocolV2ConfigShrink();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecSensorEnabled()) {
    body["SecSensorEnabled"] = request.getSecSensorEnabled();
  }

  if (!!request.hasSecurityPolicyId()) {
    body["SecurityPolicyId"] = request.getSecurityPolicyId();
  }

  if (!!request.hasServerGroupId()) {
    body["ServerGroupId"] = request.getServerGroupId();
  }

  if (!!request.hasStartPort()) {
    body["StartPort"] = request.getStartPort();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateListener"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateListenerResponse>();
}

/**
 * @summary Creates a TCP or UDP listener, or a listener that uses SSL over TCP for a Network Load Balancer (NLB) instance.
 *
 * @param request CreateListenerRequest
 * @return CreateListenerResponse
 */
CreateListenerResponse Client::createListener(const CreateListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createListenerWithOptions(request, runtime);
}

/**
 * @summary Creates a Network Load Balancer (NLB) instance in a specified region.
 *
 * @description *   When you create an NLB instance, the service-linked role AliyunServiceRoleForNlb is automatically created and assigned to you.
 * *   **CreateLoadBalancer** is an asynchronous operation. After you send a request, the system returns an instance ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/445873.html) to query the status of an NLB instance.
 *     *   If an NLB instance is in the **Provisioning** state, the NLB instance is being created.
 *     *   If an NLB instance is in the **Active** state, the NLB instance is created.
 *
 * @param request CreateLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerResponse
 */
CreateLoadBalancerResponse Client::createLoadBalancerWithOptions(const CreateLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddressIpVersion()) {
    body["AddressIpVersion"] = request.getAddressIpVersion();
  }

  if (!!request.hasAddressType()) {
    body["AddressType"] = request.getAddressType();
  }

  if (!!request.hasBandwidthPackageId()) {
    body["BandwidthPackageId"] = request.getBandwidthPackageId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  json bodyFlat = {};
  if (!!request.hasDeletionProtectionConfig()) {
    bodyFlat["DeletionProtectionConfig"] = request.getDeletionProtectionConfig();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerBillingConfig()) {
    bodyFlat["LoadBalancerBillingConfig"] = request.getLoadBalancerBillingConfig();
  }

  if (!!request.hasLoadBalancerName()) {
    body["LoadBalancerName"] = request.getLoadBalancerName();
  }

  if (!!request.hasLoadBalancerType()) {
    body["LoadBalancerType"] = request.getLoadBalancerType();
  }

  if (!!request.hasModificationProtectionConfig()) {
    bodyFlat["ModificationProtectionConfig"] = request.getModificationProtectionConfig();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneMappings()) {
    bodyFlat["ZoneMappings"] = request.getZoneMappings();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancer"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadBalancerResponse>();
}

/**
 * @summary Creates a Network Load Balancer (NLB) instance in a specified region.
 *
 * @description *   When you create an NLB instance, the service-linked role AliyunServiceRoleForNlb is automatically created and assigned to you.
 * *   **CreateLoadBalancer** is an asynchronous operation. After you send a request, the system returns an instance ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/445873.html) to query the status of an NLB instance.
 *     *   If an NLB instance is in the **Provisioning** state, the NLB instance is being created.
 *     *   If an NLB instance is in the **Active** state, the NLB instance is created.
 *
 * @param request CreateLoadBalancerRequest
 * @return CreateLoadBalancerResponse
 */
CreateLoadBalancerResponse Client::createLoadBalancer(const CreateLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Creates a custom security policy for a TCP/SSL listener.
 *
 * @param request CreateSecurityPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecurityPolicyResponse
 */
CreateSecurityPolicyResponse Client::createSecurityPolicyWithOptions(const CreateSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCiphers()) {
    body["Ciphers"] = request.getCiphers();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSecurityPolicyName()) {
    body["SecurityPolicyName"] = request.getSecurityPolicyName();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  if (!!request.hasTlsVersions()) {
    body["TlsVersions"] = request.getTlsVersions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSecurityPolicy"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecurityPolicyResponse>();
}

/**
 * @summary Creates a custom security policy for a TCP/SSL listener.
 *
 * @param request CreateSecurityPolicyRequest
 * @return CreateSecurityPolicyResponse
 */
CreateSecurityPolicyResponse Client::createSecurityPolicy(const CreateSecurityPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSecurityPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a server group in a region.
 *
 * @description **CreateServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the creation status of the task.
 *    - If the task is in the **Succeeded** status, the server group is created.
 * -    If the task is in the **Processing** status, the server group is being created.
 *
 * @param request CreateServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServerGroupResponse
 */
CreateServerGroupResponse Client::createServerGroupWithOptions(const CreateServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddressIPVersion()) {
    body["AddressIPVersion"] = request.getAddressIPVersion();
  }

  if (!!request.hasAnyPortEnabled()) {
    body["AnyPortEnabled"] = request.getAnyPortEnabled();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionDrainEnabled()) {
    body["ConnectionDrainEnabled"] = request.getConnectionDrainEnabled();
  }

  if (!!request.hasConnectionDrainTimeout()) {
    body["ConnectionDrainTimeout"] = request.getConnectionDrainTimeout();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  json bodyFlat = {};
  if (!!request.hasHealthCheckConfig()) {
    bodyFlat["HealthCheckConfig"] = request.getHealthCheckConfig();
  }

  if (!!request.hasPreserveClientIpEnabled()) {
    body["PreserveClientIpEnabled"] = request.getPreserveClientIpEnabled();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasScheduler()) {
    body["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasServerGroupName()) {
    body["ServerGroupName"] = request.getServerGroupName();
  }

  if (!!request.hasServerGroupType()) {
    body["ServerGroupType"] = request.getServerGroupType();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateServerGroup"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServerGroupResponse>();
}

/**
 * @summary Creates a server group in a region.
 *
 * @description **CreateServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the creation status of the task.
 *    - If the task is in the **Succeeded** status, the server group is created.
 * -    If the task is in the **Processing** status, the server group is being created.
 *
 * @param request CreateServerGroupRequest
 * @return CreateServerGroupResponse
 */
CreateServerGroupResponse Client::createServerGroup(const CreateServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServerGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a Network Load Balancer (NLB) listener.
 *
 * @param request DeleteListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteListenerResponse
 */
DeleteListenerResponse Client::deleteListenerWithOptions(const DeleteListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasListenerId()) {
    body["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteListener"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteListenerResponse>();
}

/**
 * @summary Deletes a Network Load Balancer (NLB) listener.
 *
 * @param request DeleteListenerRequest
 * @return DeleteListenerResponse
 */
DeleteListenerResponse Client::deleteListener(const DeleteListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteListenerWithOptions(request, runtime);
}

/**
 * @summary Deletes a Network Load Balancer (NLB) instance.
 *
 * @param request DeleteLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLoadBalancerResponse
 */
DeleteLoadBalancerResponse Client::deleteLoadBalancerWithOptions(const DeleteLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteLoadBalancer"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLoadBalancerResponse>();
}

/**
 * @summary Deletes a Network Load Balancer (NLB) instance.
 *
 * @param request DeleteLoadBalancerRequest
 * @return DeleteLoadBalancerResponse
 */
DeleteLoadBalancerResponse Client::deleteLoadBalancer(const DeleteLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom TLS security policy from a Network Load Balancer (NLB) instance.
 *
 * @param request DeleteSecurityPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecurityPolicyResponse
 */
DeleteSecurityPolicyResponse Client::deleteSecurityPolicyWithOptions(const DeleteSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityPolicyId()) {
    body["SecurityPolicyId"] = request.getSecurityPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSecurityPolicy"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecurityPolicyResponse>();
}

/**
 * @summary Deletes a custom TLS security policy from a Network Load Balancer (NLB) instance.
 *
 * @param request DeleteSecurityPolicyRequest
 * @return DeleteSecurityPolicyResponse
 */
DeleteSecurityPolicyResponse Client::deleteSecurityPolicy(const DeleteSecurityPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecurityPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a Network Load Balancer (NLB) server group.
 *
 * @description You can delete server groups that are not associated with listeners.
 *
 * @param request DeleteServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServerGroupResponse
 */
DeleteServerGroupResponse Client::deleteServerGroupWithOptions(const DeleteServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServerGroupId()) {
    body["ServerGroupId"] = request.getServerGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteServerGroup"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServerGroupResponse>();
}

/**
 * @summary Deletes a Network Load Balancer (NLB) server group.
 *
 * @description You can delete server groups that are not associated with listeners.
 *
 * @param request DeleteServerGroupRequest
 * @return DeleteServerGroupResponse
 */
DeleteServerGroupResponse Client::deleteServerGroup(const DeleteServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServerGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the storage configurations of fine-grained monitoring.
 *
 * @param request DescribeHdMonitorRegionConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHdMonitorRegionConfigResponse
 */
DescribeHdMonitorRegionConfigResponse Client::describeHdMonitorRegionConfigWithOptions(const DescribeHdMonitorRegionConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHdMonitorRegionConfig"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHdMonitorRegionConfigResponse>();
}

/**
 * @summary Queries the storage configurations of fine-grained monitoring.
 *
 * @param request DescribeHdMonitorRegionConfigRequest
 * @return DescribeHdMonitorRegionConfigResponse
 */
DescribeHdMonitorRegionConfigResponse Client::describeHdMonitorRegionConfig(const DescribeHdMonitorRegionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHdMonitorRegionConfigWithOptions(request, runtime);
}

/**
 * @summary Queries regions that support Network Load Balancer (NLB) instances.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries regions that support Network Load Balancer (NLB) instances.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the zones of a region in which a Network Load Balancer (NLB) instance is deployed.
 *
 * @param request DescribeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZonesWithOptions(const DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZones"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeZonesResponse>();
}

/**
 * @summary Queries the zones of a region in which a Network Load Balancer (NLB) instance is deployed.
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Disassociates a Network Load Balancer (NLB) instance from an Internet Shared Bandwidth instance.
 *
 * @param request DetachCommonBandwidthPackageFromLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachCommonBandwidthPackageFromLoadBalancerResponse
 */
DetachCommonBandwidthPackageFromLoadBalancerResponse Client::detachCommonBandwidthPackageFromLoadBalancerWithOptions(const DetachCommonBandwidthPackageFromLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBandwidthPackageId()) {
    body["BandwidthPackageId"] = request.getBandwidthPackageId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DetachCommonBandwidthPackageFromLoadBalancer"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachCommonBandwidthPackageFromLoadBalancerResponse>();
}

/**
 * @summary Disassociates a Network Load Balancer (NLB) instance from an Internet Shared Bandwidth instance.
 *
 * @param request DetachCommonBandwidthPackageFromLoadBalancerRequest
 * @return DetachCommonBandwidthPackageFromLoadBalancerResponse
 */
DetachCommonBandwidthPackageFromLoadBalancerResponse Client::detachCommonBandwidthPackageFromLoadBalancer(const DetachCommonBandwidthPackageFromLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachCommonBandwidthPackageFromLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Changes the public IPv6 address of a dual-stack Network Load Balancer (NLB) instance to a private IPv6 address.
 *
 * @param request DisableLoadBalancerIpv6InternetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableLoadBalancerIpv6InternetResponse
 */
DisableLoadBalancerIpv6InternetResponse Client::disableLoadBalancerIpv6InternetWithOptions(const DisableLoadBalancerIpv6InternetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisableLoadBalancerIpv6Internet"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableLoadBalancerIpv6InternetResponse>();
}

/**
 * @summary Changes the public IPv6 address of a dual-stack Network Load Balancer (NLB) instance to a private IPv6 address.
 *
 * @param request DisableLoadBalancerIpv6InternetRequest
 * @return DisableLoadBalancerIpv6InternetResponse
 */
DisableLoadBalancerIpv6InternetResponse Client::disableLoadBalancerIpv6Internet(const DisableLoadBalancerIpv6InternetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableLoadBalancerIpv6InternetWithOptions(request, runtime);
}

/**
 * @summary Disassociates additional certificates from a listener that uses SSL over TCP.
 *
 * @description **DisassociateAdditionalCertificatesWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListListenerCertificates](https://help.aliyun.com/document_detail/615175.html) operation to query the status of the task:
 * *   If an additional certificate is in the **Dissociating** state, the additional certificate is being disassociated.
 * *   If an additional certificate is in the **Dissociated** state, the additional certificate is disassociated.
 *
 * @param request DisassociateAdditionalCertificatesWithListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisassociateAdditionalCertificatesWithListenerResponse
 */
DisassociateAdditionalCertificatesWithListenerResponse Client::disassociateAdditionalCertificatesWithListenerWithOptions(const DisassociateAdditionalCertificatesWithListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdditionalCertificateIds()) {
    body["AdditionalCertificateIds"] = request.getAdditionalCertificateIds();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasListenerId()) {
    body["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisassociateAdditionalCertificatesWithListener"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisassociateAdditionalCertificatesWithListenerResponse>();
}

/**
 * @summary Disassociates additional certificates from a listener that uses SSL over TCP.
 *
 * @description **DisassociateAdditionalCertificatesWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListListenerCertificates](https://help.aliyun.com/document_detail/615175.html) operation to query the status of the task:
 * *   If an additional certificate is in the **Dissociating** state, the additional certificate is being disassociated.
 * *   If an additional certificate is in the **Dissociated** state, the additional certificate is disassociated.
 *
 * @param request DisassociateAdditionalCertificatesWithListenerRequest
 * @return DisassociateAdditionalCertificatesWithListenerResponse
 */
DisassociateAdditionalCertificatesWithListenerResponse Client::disassociateAdditionalCertificatesWithListener(const DisassociateAdditionalCertificatesWithListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociateAdditionalCertificatesWithListenerWithOptions(request, runtime);
}

/**
 * @summary Changes the network type of the IPv6 address of a dual-stack Network Load Balancer (NLB) instance from internal-facing to Internet-facing.
 *
 * @param request EnableLoadBalancerIpv6InternetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableLoadBalancerIpv6InternetResponse
 */
EnableLoadBalancerIpv6InternetResponse Client::enableLoadBalancerIpv6InternetWithOptions(const EnableLoadBalancerIpv6InternetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EnableLoadBalancerIpv6Internet"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableLoadBalancerIpv6InternetResponse>();
}

/**
 * @summary Changes the network type of the IPv6 address of a dual-stack Network Load Balancer (NLB) instance from internal-facing to Internet-facing.
 *
 * @param request EnableLoadBalancerIpv6InternetRequest
 * @return EnableLoadBalancerIpv6InternetResponse
 */
EnableLoadBalancerIpv6InternetResponse Client::enableLoadBalancerIpv6Internet(const EnableLoadBalancerIpv6InternetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableLoadBalancerIpv6InternetWithOptions(request, runtime);
}

/**
 * @summary Queries the result of an asynchronous operation performed on a Network Load Balancer (NLB) instance.
 *
 * @param request GetJobStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobStatusResponse
 */
GetJobStatusResponse Client::getJobStatusWithOptions(const GetJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobStatus"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobStatusResponse>();
}

/**
 * @summary Queries the result of an asynchronous operation performed on a Network Load Balancer (NLB) instance.
 *
 * @param request GetJobStatusRequest
 * @return GetJobStatusResponse
 */
GetJobStatusResponse Client::getJobStatus(const GetJobStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a Network Load Balancer (NLB) listener.
 *
 * @param request GetListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetListenerAttributeResponse
 */
GetListenerAttributeResponse Client::getListenerAttributeWithOptions(const GetListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetListenerAttribute"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetListenerAttributeResponse>();
}

/**
 * @summary Queries the details of a Network Load Balancer (NLB) listener.
 *
 * @param request GetListenerAttributeRequest
 * @return GetListenerAttributeResponse
 */
GetListenerAttributeResponse Client::getListenerAttribute(const GetListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the health check status of a Network Load Balancer (NLB) listener.
 *
 * @param request GetListenerHealthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetListenerHealthStatusResponse
 */
GetListenerHealthStatusResponse Client::getListenerHealthStatusWithOptions(const GetListenerHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetListenerHealthStatus"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetListenerHealthStatusResponse>();
}

/**
 * @summary Queries the health check status of a Network Load Balancer (NLB) listener.
 *
 * @param request GetListenerHealthStatusRequest
 * @return GetListenerHealthStatusResponse
 */
GetListenerHealthStatusResponse Client::getListenerHealthStatus(const GetListenerHealthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getListenerHealthStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details about a Network Load Balancer (NLB) instance.
 *
 * @param request GetLoadBalancerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoadBalancerAttributeResponse
 */
GetLoadBalancerAttributeResponse Client::getLoadBalancerAttributeWithOptions(const GetLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLoadBalancerAttribute"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLoadBalancerAttributeResponse>();
}

/**
 * @summary Queries the details about a Network Load Balancer (NLB) instance.
 *
 * @param request GetLoadBalancerAttributeRequest
 * @return GetLoadBalancerAttributeResponse
 */
GetLoadBalancerAttributeResponse Client::getLoadBalancerAttribute(const GetLoadBalancerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoadBalancerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the results of multiple asynchronous operations performed on a Network Load Balancer (NLB) instance.
 *
 * @param request ListAsynJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAsynJobsResponse
 */
ListAsynJobsResponse Client::listAsynJobsWithOptions(const ListAsynJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.getJobIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAsynJobs"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAsynJobsResponse>();
}

/**
 * @summary Queries the results of multiple asynchronous operations performed on a Network Load Balancer (NLB) instance.
 *
 * @param request ListAsynJobsRequest
 * @return ListAsynJobsResponse
 */
ListAsynJobsResponse Client::listAsynJobs(const ListAsynJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAsynJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the server certificate of a TCP/SSL listener.
 *
 * @param request ListListenerCertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListListenerCertificatesResponse
 */
ListListenerCertificatesResponse Client::listListenerCertificatesWithOptions(const ListListenerCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCertType()) {
    body["CertType"] = request.getCertType();
  }

  if (!!request.hasCertificateIds()) {
    body["CertificateIds"] = request.getCertificateIds();
  }

  if (!!request.hasListenerId()) {
    body["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListListenerCertificates"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListListenerCertificatesResponse>();
}

/**
 * @summary Queries the server certificate of a TCP/SSL listener.
 *
 * @param request ListListenerCertificatesRequest
 * @return ListListenerCertificatesResponse
 */
ListListenerCertificatesResponse Client::listListenerCertificates(const ListListenerCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listListenerCertificatesWithOptions(request, runtime);
}

/**
 * @summary Queries listeners added to a Network Load Balancer (NLB) instance.
 *
 * @param request ListListenersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListListenersResponse
 */
ListListenersResponse Client::listListenersWithOptions(const ListListenersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerIds()) {
    query["ListenerIds"] = request.getListenerIds();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.getListenerProtocol();
  }

  if (!!request.hasLoadBalancerIds()) {
    query["LoadBalancerIds"] = request.getLoadBalancerIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecSensorEnabled()) {
    query["SecSensorEnabled"] = request.getSecSensorEnabled();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListListeners"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListListenersResponse>();
}

/**
 * @summary Queries listeners added to a Network Load Balancer (NLB) instance.
 *
 * @param request ListListenersRequest
 * @return ListListenersResponse
 */
ListListenersResponse Client::listListeners(const ListListenersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listListenersWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information about Network Load Balancer (NLB) instances.
 *
 * @param request ListLoadBalancersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLoadBalancersResponse
 */
ListLoadBalancersResponse Client::listLoadBalancersWithOptions(const ListLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressIpVersion()) {
    query["AddressIpVersion"] = request.getAddressIpVersion();
  }

  if (!!request.hasAddressType()) {
    query["AddressType"] = request.getAddressType();
  }

  if (!!request.hasDNSName()) {
    query["DNSName"] = request.getDNSName();
  }

  if (!!request.hasIpv6AddressType()) {
    query["Ipv6AddressType"] = request.getIpv6AddressType();
  }

  if (!!request.hasLoadBalancerBusinessStatus()) {
    query["LoadBalancerBusinessStatus"] = request.getLoadBalancerBusinessStatus();
  }

  if (!!request.hasLoadBalancerIds()) {
    query["LoadBalancerIds"] = request.getLoadBalancerIds();
  }

  if (!!request.hasLoadBalancerNames()) {
    query["LoadBalancerNames"] = request.getLoadBalancerNames();
  }

  if (!!request.hasLoadBalancerStatus()) {
    query["LoadBalancerStatus"] = request.getLoadBalancerStatus();
  }

  if (!!request.hasLoadBalancerType()) {
    query["LoadBalancerType"] = request.getLoadBalancerType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVpcIds()) {
    query["VpcIds"] = request.getVpcIds();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLoadBalancers"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLoadBalancersResponse>();
}

/**
 * @summary Queries the basic information about Network Load Balancer (NLB) instances.
 *
 * @param request ListLoadBalancersRequest
 * @return ListLoadBalancersResponse
 */
ListLoadBalancersResponse Client::listLoadBalancers(const ListLoadBalancersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLoadBalancersWithOptions(request, runtime);
}

/**
 * @summary Queries the TLS security policies set for a Network Load Balancer (NLB) instance.
 *
 * @param request ListSecurityPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecurityPolicyResponse
 */
ListSecurityPolicyResponse Client::listSecurityPolicyWithOptions(const ListSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSecurityPolicyIds()) {
    body["SecurityPolicyIds"] = request.getSecurityPolicyIds();
  }

  if (!!request.hasSecurityPolicyNames()) {
    body["SecurityPolicyNames"] = request.getSecurityPolicyNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListSecurityPolicy"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecurityPolicyResponse>();
}

/**
 * @summary Queries the TLS security policies set for a Network Load Balancer (NLB) instance.
 *
 * @param request ListSecurityPolicyRequest
 * @return ListSecurityPolicyResponse
 */
ListSecurityPolicyResponse Client::listSecurityPolicy(const ListSecurityPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSecurityPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries servers in a server group of a Network Load Balancer (NLB) instance.
 *
 * @param request ListServerGroupServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServerGroupServersResponse
 */
ListServerGroupServersResponse Client::listServerGroupServersWithOptions(const ListServerGroupServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServerGroupId()) {
    body["ServerGroupId"] = request.getServerGroupId();
  }

  if (!!request.hasServerIds()) {
    body["ServerIds"] = request.getServerIds();
  }

  if (!!request.hasServerIps()) {
    body["ServerIps"] = request.getServerIps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListServerGroupServers"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServerGroupServersResponse>();
}

/**
 * @summary Queries servers in a server group of a Network Load Balancer (NLB) instance.
 *
 * @param request ListServerGroupServersRequest
 * @return ListServerGroupServersResponse
 */
ListServerGroupServersResponse Client::listServerGroupServers(const ListServerGroupServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServerGroupServersWithOptions(request, runtime);
}

/**
 * @summary Queries the server groups of a Network Load Balancer (NLB) instance.
 *
 * @param request ListServerGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServerGroupsResponse
 */
ListServerGroupsResponse Client::listServerGroupsWithOptions(const ListServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasServerGroupIds()) {
    body["ServerGroupIds"] = request.getServerGroupIds();
  }

  if (!!request.hasServerGroupNames()) {
    body["ServerGroupNames"] = request.getServerGroupNames();
  }

  if (!!request.hasServerGroupType()) {
    body["ServerGroupType"] = request.getServerGroupType();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListServerGroups"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServerGroupsResponse>();
}

/**
 * @summary Queries the server groups of a Network Load Balancer (NLB) instance.
 *
 * @param request ListServerGroupsRequest
 * @return ListServerGroupsResponse
 */
ListServerGroupsResponse Client::listServerGroups(const ListServerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServerGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the default TLS policy.
 *
 * @param request ListSystemSecurityPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSystemSecurityPolicyResponse
 */
ListSystemSecurityPolicyResponse Client::listSystemSecurityPolicyWithOptions(const ListSystemSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListSystemSecurityPolicy"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSystemSecurityPolicyResponse>();
}

/**
 * @summary Queries the default TLS policy.
 *
 * @param request ListSystemSecurityPolicyRequest
 * @return ListSystemSecurityPolicyResponse
 */
ListSystemSecurityPolicyResponse Client::listSystemSecurityPolicy(const ListSystemSecurityPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSystemSecurityPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the tags of a resource.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  json bodyFlat = {};
  if (!!request.hasResourceId()) {
    bodyFlat["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2022-04-30"},
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
 * @summary Queries the tags of a resource.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Associates a security group with a Network Load Balancer (NLB) instance.
 *
 * @description *   Make sure that you have created a security group. For more information about how to create a security group, see [CreateSecurityGroup](https://help.aliyun.com/document_detail/25553.html).
 * *   An NLB instance can be associated with up to four security groups.
 * *   You can query the security groups that are associated with an NLB instance by calling the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation.
 * *   LoadBalancerJoinSecurityGroup is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the status of a task.
 *     *   If the task is in the **Succeeded** state, the security group is associated.
 *     *   If the task is in the **Processing** state, the security group is being associated. In this case, you can perform only query operations.
 *
 * @param request LoadBalancerJoinSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LoadBalancerJoinSecurityGroupResponse
 */
LoadBalancerJoinSecurityGroupResponse Client::loadBalancerJoinSecurityGroupWithOptions(const LoadBalancerJoinSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityGroupIds()) {
    body["SecurityGroupIds"] = request.getSecurityGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "LoadBalancerJoinSecurityGroup"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LoadBalancerJoinSecurityGroupResponse>();
}

/**
 * @summary Associates a security group with a Network Load Balancer (NLB) instance.
 *
 * @description *   Make sure that you have created a security group. For more information about how to create a security group, see [CreateSecurityGroup](https://help.aliyun.com/document_detail/25553.html).
 * *   An NLB instance can be associated with up to four security groups.
 * *   You can query the security groups that are associated with an NLB instance by calling the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation.
 * *   LoadBalancerJoinSecurityGroup is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the status of a task.
 *     *   If the task is in the **Succeeded** state, the security group is associated.
 *     *   If the task is in the **Processing** state, the security group is being associated. In this case, you can perform only query operations.
 *
 * @param request LoadBalancerJoinSecurityGroupRequest
 * @return LoadBalancerJoinSecurityGroupResponse
 */
LoadBalancerJoinSecurityGroupResponse Client::loadBalancerJoinSecurityGroup(const LoadBalancerJoinSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return loadBalancerJoinSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary Disassociates a Network Load Balancer (NLB) instance from a security group.
 *
 * @description LoadBalancerLeaveSecurityGroup is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the status of a task.
 * *   If the task is in the **Succeeded** state, the security group is disassociated.
 * *   If the task is in the **Processing** state, the security group is being disassociated. In this case, you can perform only query operations.
 *
 * @param request LoadBalancerLeaveSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LoadBalancerLeaveSecurityGroupResponse
 */
LoadBalancerLeaveSecurityGroupResponse Client::loadBalancerLeaveSecurityGroupWithOptions(const LoadBalancerLeaveSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityGroupIds()) {
    body["SecurityGroupIds"] = request.getSecurityGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "LoadBalancerLeaveSecurityGroup"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LoadBalancerLeaveSecurityGroupResponse>();
}

/**
 * @summary Disassociates a Network Load Balancer (NLB) instance from a security group.
 *
 * @description LoadBalancerLeaveSecurityGroup is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the status of a task.
 * *   If the task is in the **Succeeded** state, the security group is disassociated.
 * *   If the task is in the **Processing** state, the security group is being disassociated. In this case, you can perform only query operations.
 *
 * @param request LoadBalancerLeaveSecurityGroupRequest
 * @return LoadBalancerLeaveSecurityGroupResponse
 */
LoadBalancerLeaveSecurityGroupResponse Client::loadBalancerLeaveSecurityGroup(const LoadBalancerLeaveSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return loadBalancerLeaveSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary Modify the group of resource.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNewResourceGroupId()) {
    body["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourceGroupResponse>();
}

/**
 * @summary Modify the group of resource.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes server groups from a Network Load Balancer (NLB) instance.
 *
 * @param request RemoveServersFromServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveServersFromServerGroupResponse
 */
RemoveServersFromServerGroupResponse Client::removeServersFromServerGroupWithOptions(const RemoveServersFromServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServerGroupId()) {
    body["ServerGroupId"] = request.getServerGroupId();
  }

  if (!!request.hasServers()) {
    body["Servers"] = request.getServers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RemoveServersFromServerGroup"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveServersFromServerGroupResponse>();
}

/**
 * @summary Deletes server groups from a Network Load Balancer (NLB) instance.
 *
 * @param request RemoveServersFromServerGroupRequest
 * @return RemoveServersFromServerGroupResponse
 */
RemoveServersFromServerGroupResponse Client::removeServersFromServerGroup(const RemoveServersFromServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeServersFromServerGroupWithOptions(request, runtime);
}

/**
 * @summary Configures storage for fine-grained monitoring.
 *
 * @description This operation is used to configure a data warehouse for the fine-grained monitoring feature. If a listener in the current region has fine-grained monitoring enabled, you must disable fine-grained monitoring before you can configure a warehouse.
 *
 * @param request SetHdMonitorRegionConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetHdMonitorRegionConfigResponse
 */
SetHdMonitorRegionConfigResponse Client::setHdMonitorRegionConfigWithOptions(const SetHdMonitorRegionConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogProject()) {
    query["LogProject"] = request.getLogProject();
  }

  if (!!request.hasMetricStore()) {
    query["MetricStore"] = request.getMetricStore();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetHdMonitorRegionConfig"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetHdMonitorRegionConfigResponse>();
}

/**
 * @summary Configures storage for fine-grained monitoring.
 *
 * @description This operation is used to configure a data warehouse for the fine-grained monitoring feature. If a listener in the current region has fine-grained monitoring enabled, you must disable fine-grained monitoring before you can configure a warehouse.
 *
 * @param request SetHdMonitorRegionConfigRequest
 * @return SetHdMonitorRegionConfigResponse
 */
SetHdMonitorRegionConfigResponse Client::setHdMonitorRegionConfig(const SetHdMonitorRegionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setHdMonitorRegionConfigWithOptions(request, runtime);
}

/**
 * @summary Enables a Network Load Balancer (NLB) listener.
 *
 * @param request StartListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartListenerResponse
 */
StartListenerResponse Client::startListenerWithOptions(const StartListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasListenerId()) {
    body["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartListener"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartListenerResponse>();
}

/**
 * @summary Enables a Network Load Balancer (NLB) listener.
 *
 * @param request StartListenerRequest
 * @return StartListenerResponse
 */
StartListenerResponse Client::startListener(const StartListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startListenerWithOptions(request, runtime);
}

/**
 * @summary Removes the elastic IP address (EIP) or virtual IP address (VIP) used in a zone from the DNS record.
 *
 * @description >  If the NLB instance is deployed in only one zone, you cannot remove the EIP or VIP from the DNS record.
 *
 * @param request StartShiftLoadBalancerZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartShiftLoadBalancerZonesResponse
 */
StartShiftLoadBalancerZonesResponse Client::startShiftLoadBalancerZonesWithOptions(const StartShiftLoadBalancerZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasZoneMappings()) {
    body["ZoneMappings"] = request.getZoneMappings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartShiftLoadBalancerZones"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartShiftLoadBalancerZonesResponse>();
}

/**
 * @summary Removes the elastic IP address (EIP) or virtual IP address (VIP) used in a zone from the DNS record.
 *
 * @description >  If the NLB instance is deployed in only one zone, you cannot remove the EIP or VIP from the DNS record.
 *
 * @param request StartShiftLoadBalancerZonesRequest
 * @return StartShiftLoadBalancerZonesResponse
 */
StartShiftLoadBalancerZonesResponse Client::startShiftLoadBalancerZones(const StartShiftLoadBalancerZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startShiftLoadBalancerZonesWithOptions(request, runtime);
}

/**
 * @summary Stops a listener of a Network Load Balancer (NLB) instance.
 *
 * @param request StopListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopListenerResponse
 */
StopListenerResponse Client::stopListenerWithOptions(const StopListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasListenerId()) {
    body["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StopListener"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopListenerResponse>();
}

/**
 * @summary Stops a listener of a Network Load Balancer (NLB) instance.
 *
 * @param request StopListenerRequest
 * @return StopListenerResponse
 */
StopListenerResponse Client::stopListener(const StopListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopListenerWithOptions(request, runtime);
}

/**
 * @summary Adds tags to specified resources.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  json bodyFlat = {};
  if (!!request.hasResourceId()) {
    bodyFlat["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    bodyFlat["Tag"] = request.getTag();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2022-04-30"},
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
 * @summary Adds tags to specified resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
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
  json body = {};
  if (!!request.hasAll()) {
    body["All"] = request.getAll();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  json bodyFlat = {};
  if (!!request.hasResourceId()) {
    bodyFlat["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    bodyFlat["TagKey"] = request.getTagKey();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2022-04-30"},
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
 * @summary Updates the attributes of a listener, such as the name and the idle connection timeout period.
 *
 * @param tmpReq UpdateListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateListenerAttributeResponse
 */
UpdateListenerAttributeResponse Client::updateListenerAttributeWithOptions(const UpdateListenerAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateListenerAttributeShrinkRequest request = UpdateListenerAttributeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProxyProtocolV2Config()) {
    request.setProxyProtocolV2ConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProxyProtocolV2Config(), "ProxyProtocolV2Config", "json"));
  }

  json body = {};
  if (!!request.hasAlpnEnabled()) {
    body["AlpnEnabled"] = request.getAlpnEnabled();
  }

  if (!!request.hasAlpnPolicy()) {
    body["AlpnPolicy"] = request.getAlpnPolicy();
  }

  if (!!request.hasCaCertificateIds()) {
    body["CaCertificateIds"] = request.getCaCertificateIds();
  }

  if (!!request.hasCaEnabled()) {
    body["CaEnabled"] = request.getCaEnabled();
  }

  if (!!request.hasCertificateIds()) {
    body["CertificateIds"] = request.getCertificateIds();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCps()) {
    body["Cps"] = request.getCps();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIdleTimeout()) {
    body["IdleTimeout"] = request.getIdleTimeout();
  }

  if (!!request.hasListenerDescription()) {
    body["ListenerDescription"] = request.getListenerDescription();
  }

  if (!!request.hasListenerId()) {
    body["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasMss()) {
    body["Mss"] = request.getMss();
  }

  if (!!request.hasProxyProtocolEnabled()) {
    body["ProxyProtocolEnabled"] = request.getProxyProtocolEnabled();
  }

  if (!!request.hasProxyProtocolV2ConfigShrink()) {
    body["ProxyProtocolV2Config"] = request.getProxyProtocolV2ConfigShrink();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecSensorEnabled()) {
    body["SecSensorEnabled"] = request.getSecSensorEnabled();
  }

  if (!!request.hasSecurityPolicyId()) {
    body["SecurityPolicyId"] = request.getSecurityPolicyId();
  }

  if (!!request.hasServerGroupId()) {
    body["ServerGroupId"] = request.getServerGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateListenerAttribute"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateListenerAttributeResponse>();
}

/**
 * @summary Updates the attributes of a listener, such as the name and the idle connection timeout period.
 *
 * @param request UpdateListenerAttributeRequest
 * @return UpdateListenerAttributeResponse
 */
UpdateListenerAttributeResponse Client::updateListenerAttribute(const UpdateListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Changes the network type of the IPv4 address for a Network Load Balancer (NLB) instance.
 *
 * @description *   Make sure that an NLB instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/445868.html).
 * *   You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/445873.html) operation to query the **AddressType** value of an NLB instance after you change the network type.
 * *   **UpdateLoadBalancerAddressTypeConfig** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the task status:
 *     *   If the task is in the **Succeeded** state, the network type of the IPv4 address of the NLB instance is changed.
 *     *   If the task is in the **Processing** state, the network type of the IPv4 address of the NLB instance is being changed. In this case, you can perform only query operations.
 *
 * @param request UpdateLoadBalancerAddressTypeConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoadBalancerAddressTypeConfigResponse
 */
UpdateLoadBalancerAddressTypeConfigResponse Client::updateLoadBalancerAddressTypeConfigWithOptions(const UpdateLoadBalancerAddressTypeConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddressType()) {
    body["AddressType"] = request.getAddressType();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasZoneMappings()) {
    body["ZoneMappings"] = request.getZoneMappings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLoadBalancerAddressTypeConfig"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLoadBalancerAddressTypeConfigResponse>();
}

/**
 * @summary Changes the network type of the IPv4 address for a Network Load Balancer (NLB) instance.
 *
 * @description *   Make sure that an NLB instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/445868.html).
 * *   You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/445873.html) operation to query the **AddressType** value of an NLB instance after you change the network type.
 * *   **UpdateLoadBalancerAddressTypeConfig** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the task status:
 *     *   If the task is in the **Succeeded** state, the network type of the IPv4 address of the NLB instance is changed.
 *     *   If the task is in the **Processing** state, the network type of the IPv4 address of the NLB instance is being changed. In this case, you can perform only query operations.
 *
 * @param request UpdateLoadBalancerAddressTypeConfigRequest
 * @return UpdateLoadBalancerAddressTypeConfigResponse
 */
UpdateLoadBalancerAddressTypeConfigResponse Client::updateLoadBalancerAddressTypeConfig(const UpdateLoadBalancerAddressTypeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoadBalancerAddressTypeConfigWithOptions(request, runtime);
}

/**
 * @summary Updates the attributes, including the name, of a Network Load Balancer (NLB) instance.
 *
 * @param request UpdateLoadBalancerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoadBalancerAttributeResponse
 */
UpdateLoadBalancerAttributeResponse Client::updateLoadBalancerAttributeWithOptions(const UpdateLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCps()) {
    body["Cps"] = request.getCps();
  }

  if (!!request.hasCrossZoneEnabled()) {
    body["CrossZoneEnabled"] = request.getCrossZoneEnabled();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasLoadBalancerName()) {
    body["LoadBalancerName"] = request.getLoadBalancerName();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLoadBalancerAttribute"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLoadBalancerAttributeResponse>();
}

/**
 * @summary Updates the attributes, including the name, of a Network Load Balancer (NLB) instance.
 *
 * @param request UpdateLoadBalancerAttributeRequest
 * @return UpdateLoadBalancerAttributeResponse
 */
UpdateLoadBalancerAttributeResponse Client::updateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoadBalancerAttributeWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the deletion protection feature.
 *
 * @description > You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/445873.html) operation to query the details about deletion protection and the configuration read-only mode.
 *
 * @param request UpdateLoadBalancerProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoadBalancerProtectionResponse
 */
UpdateLoadBalancerProtectionResponse Client::updateLoadBalancerProtectionWithOptions(const UpdateLoadBalancerProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDeletionProtectionEnabled()) {
    body["DeletionProtectionEnabled"] = request.getDeletionProtectionEnabled();
  }

  if (!!request.hasDeletionProtectionReason()) {
    body["DeletionProtectionReason"] = request.getDeletionProtectionReason();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasModificationProtectionReason()) {
    body["ModificationProtectionReason"] = request.getModificationProtectionReason();
  }

  if (!!request.hasModificationProtectionStatus()) {
    body["ModificationProtectionStatus"] = request.getModificationProtectionStatus();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLoadBalancerProtection"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLoadBalancerProtectionResponse>();
}

/**
 * @summary Enables or disables the deletion protection feature.
 *
 * @description > You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/445873.html) operation to query the details about deletion protection and the configuration read-only mode.
 *
 * @param request UpdateLoadBalancerProtectionRequest
 * @return UpdateLoadBalancerProtectionResponse
 */
UpdateLoadBalancerProtectionResponse Client::updateLoadBalancerProtection(const UpdateLoadBalancerProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoadBalancerProtectionWithOptions(request, runtime);
}

/**
 * @summary Modifies the zones and zone attributes of a Network Load Balancer (NLB) instance.
 *
 * @description When you call this operation, make sure that you specify all the zones of the NLB instance, including the existing zones and new zones. If you do not specify the existing zones, the existing zones are removed.
 * Prerequisites
 * *   An NLB instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/445868.html).
 * *   You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/445873.html) operation to query the zones and zone attributes of an NLB instance.
 * *   **UpdateLoadBalancerZones** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation query to query the status of a task:
 *     *   If the task is in the **Succeeded** state, the zones and zone attributes are modified.
 *     *   If the task is in the **Processing** state, the zones and zone attributes are being modified. In this case, you can perform only query operations.
 *
 * @param request UpdateLoadBalancerZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoadBalancerZonesResponse
 */
UpdateLoadBalancerZonesResponse Client::updateLoadBalancerZonesWithOptions(const UpdateLoadBalancerZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    body["LoadBalancerId"] = request.getLoadBalancerId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasZoneMappings()) {
    body["ZoneMappings"] = request.getZoneMappings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLoadBalancerZones"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLoadBalancerZonesResponse>();
}

/**
 * @summary Modifies the zones and zone attributes of a Network Load Balancer (NLB) instance.
 *
 * @description When you call this operation, make sure that you specify all the zones of the NLB instance, including the existing zones and new zones. If you do not specify the existing zones, the existing zones are removed.
 * Prerequisites
 * *   An NLB instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/445868.html).
 * *   You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/445873.html) operation to query the zones and zone attributes of an NLB instance.
 * *   **UpdateLoadBalancerZones** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation query to query the status of a task:
 *     *   If the task is in the **Succeeded** state, the zones and zone attributes are modified.
 *     *   If the task is in the **Processing** state, the zones and zone attributes are being modified. In this case, you can perform only query operations.
 *
 * @param request UpdateLoadBalancerZonesRequest
 * @return UpdateLoadBalancerZonesResponse
 */
UpdateLoadBalancerZonesResponse Client::updateLoadBalancerZones(const UpdateLoadBalancerZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoadBalancerZonesWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a security policy for a Network Load Balancer (NLB) instance.
 *
 * @param request UpdateSecurityPolicyAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSecurityPolicyAttributeResponse
 */
UpdateSecurityPolicyAttributeResponse Client::updateSecurityPolicyAttributeWithOptions(const UpdateSecurityPolicyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCiphers()) {
    body["Ciphers"] = request.getCiphers();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityPolicyId()) {
    body["SecurityPolicyId"] = request.getSecurityPolicyId();
  }

  if (!!request.hasSecurityPolicyName()) {
    body["SecurityPolicyName"] = request.getSecurityPolicyName();
  }

  if (!!request.hasTlsVersions()) {
    body["TlsVersions"] = request.getTlsVersions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSecurityPolicyAttribute"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSecurityPolicyAttributeResponse>();
}

/**
 * @summary Modifies the configurations of a security policy for a Network Load Balancer (NLB) instance.
 *
 * @param request UpdateSecurityPolicyAttributeRequest
 * @return UpdateSecurityPolicyAttributeResponse
 */
UpdateSecurityPolicyAttributeResponse Client::updateSecurityPolicyAttribute(const UpdateSecurityPolicyAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSecurityPolicyAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a Network Load Balancer (NLB) server group.
 *
 * @param request UpdateServerGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServerGroupAttributeResponse
 */
UpdateServerGroupAttributeResponse Client::updateServerGroupAttributeWithOptions(const UpdateServerGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionDrainEnabled()) {
    body["ConnectionDrainEnabled"] = request.getConnectionDrainEnabled();
  }

  if (!!request.hasConnectionDrainTimeout()) {
    body["ConnectionDrainTimeout"] = request.getConnectionDrainTimeout();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  json bodyFlat = {};
  if (!!request.hasHealthCheckConfig()) {
    bodyFlat["HealthCheckConfig"] = request.getHealthCheckConfig();
  }

  if (!!request.hasPreserveClientIpEnabled()) {
    body["PreserveClientIpEnabled"] = request.getPreserveClientIpEnabled();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScheduler()) {
    body["Scheduler"] = request.getScheduler();
  }

  if (!!request.hasServerGroupId()) {
    body["ServerGroupId"] = request.getServerGroupId();
  }

  if (!!request.hasServerGroupName()) {
    body["ServerGroupName"] = request.getServerGroupName();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateServerGroupAttribute"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServerGroupAttributeResponse>();
}

/**
 * @summary Modifies the configurations of a Network Load Balancer (NLB) server group.
 *
 * @param request UpdateServerGroupAttributeRequest
 * @return UpdateServerGroupAttributeResponse
 */
UpdateServerGroupAttributeResponse Client::updateServerGroupAttribute(const UpdateServerGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServerGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the weights and descriptions of backend servers in a server group of a Network Load Balancer (NLB) instance.
 *
 * @description **UpdateServerGroupServersAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
 * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/445895.html) operation to query the status of a server group.
 *     *   If a server group is in the **Configuring** state, the server group is being modified.
 *     *   If a server group is in the **Available** state, the server group is running.
 * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/445896.html) operation to query the status of a backend server.
 *     *   If a backend server is in the **Configuring** state, it indicates that the backend server is being modified.
 *     *   If a backend server is in the **Available** state, it indicates that the backend server is running.
 *
 * @param request UpdateServerGroupServersAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServerGroupServersAttributeResponse
 */
UpdateServerGroupServersAttributeResponse Client::updateServerGroupServersAttributeWithOptions(const UpdateServerGroupServersAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.getRegionId();
  }

  if (!!request.hasServerGroupId()) {
    body["ServerGroupId"] = request.getServerGroupId();
  }

  if (!!request.hasServers()) {
    body["Servers"] = request.getServers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateServerGroupServersAttribute"},
    {"version" , "2022-04-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServerGroupServersAttributeResponse>();
}

/**
 * @summary Modifies the weights and descriptions of backend servers in a server group of a Network Load Balancer (NLB) instance.
 *
 * @description **UpdateServerGroupServersAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
 * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/445895.html) operation to query the status of a server group.
 *     *   If a server group is in the **Configuring** state, the server group is being modified.
 *     *   If a server group is in the **Available** state, the server group is running.
 * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/445896.html) operation to query the status of a backend server.
 *     *   If a backend server is in the **Configuring** state, it indicates that the backend server is being modified.
 *     *   If a backend server is in the **Available** state, it indicates that the backend server is running.
 *
 * @param request UpdateServerGroupServersAttributeRequest
 * @return UpdateServerGroupServersAttributeResponse
 */
UpdateServerGroupServersAttributeResponse Client::updateServerGroupServersAttribute(const UpdateServerGroupServersAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServerGroupServersAttributeWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Nlb20220430