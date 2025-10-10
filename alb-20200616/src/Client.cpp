#include <darabonba/Core.hpp>
#include <alibabacloud/Alb20200616.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Alb20200616::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Alb20200616
{

AlibabaCloud::Alb20200616::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("alb", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds IP entries to an access control list (ACL).
 *
 * @description *   Each ACL can contain IP addresses or CIDR blocks. Take note of the following limits on ACLs:
 *     *   The maximum number of IP entries that can be added to an ACL with each Alibaba Cloud account at a time: 20
 *     *   The maximum number of IP entries that each ACL can contain: 1,000
 * *   **AddEntriesToAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAclEntries](https://help.aliyun.com/document_detail/213616.html) operation to query the status of the task.
 *     *   If the ACL is in the **Adding** state, the IP entries are being added.
 *     *   If the ACL is in the **Available** state, the IP entries are added.
 *
 * @param request AddEntriesToAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddEntriesToAclResponse
 */
AddEntriesToAclResponse Client::addEntriesToAclWithOptions(const AddEntriesToAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclEntries()) {
    query["AclEntries"] = request.aclEntries();
  }

  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddEntriesToAcl"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddEntriesToAclResponse>();
}

/**
 * @summary Adds IP entries to an access control list (ACL).
 *
 * @description *   Each ACL can contain IP addresses or CIDR blocks. Take note of the following limits on ACLs:
 *     *   The maximum number of IP entries that can be added to an ACL with each Alibaba Cloud account at a time: 20
 *     *   The maximum number of IP entries that each ACL can contain: 1,000
 * *   **AddEntriesToAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAclEntries](https://help.aliyun.com/document_detail/213616.html) operation to query the status of the task.
 *     *   If the ACL is in the **Adding** state, the IP entries are being added.
 *     *   If the ACL is in the **Available** state, the IP entries are added.
 *
 * @param request AddEntriesToAclRequest
 * @return AddEntriesToAclResponse
 */
AddEntriesToAclResponse Client::addEntriesToAcl(const AddEntriesToAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addEntriesToAclWithOptions(request, runtime);
}

/**
 * @summary Adds backend servers to a server group.
 *
 * @description **AddServersToServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
 * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group.
 * *   If a server group is in the **Configuring** state, it indicates that the server group is being modified.
 * *   If a server group is in the **Available** state, it indicates that the server group is running.
 * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/213628.html) operation to query the status of a backend server.
 * *   If a backend server is in the **Adding** state, it indicates that the backend server is being added to a server group.
 * *   If a backend server is in the **Available** state, it indicates that the server is running.
 *
 * @param request AddServersToServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddServersToServerGroupResponse
 */
AddServersToServerGroupResponse Client::addServersToServerGroupWithOptions(const AddServersToServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasServerGroupId()) {
    query["ServerGroupId"] = request.serverGroupId();
  }

  if (!!request.hasServers()) {
    query["Servers"] = request.servers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddServersToServerGroup"},
    {"version" , "2020-06-16"},
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
 * @summary Adds backend servers to a server group.
 *
 * @description **AddServersToServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
 * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group.
 * *   If a server group is in the **Configuring** state, it indicates that the server group is being modified.
 * *   If a server group is in the **Available** state, it indicates that the server group is running.
 * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/213628.html) operation to query the status of a backend server.
 * *   If a backend server is in the **Adding** state, it indicates that the backend server is being added to a server group.
 * *   If a backend server is in the **Available** state, it indicates that the server is running.
 *
 * @param request AddServersToServerGroupRequest
 * @return AddServersToServerGroupResponse
 */
AddServersToServerGroupResponse Client::addServersToServerGroup(const AddServersToServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addServersToServerGroupWithOptions(request, runtime);
}

/**
 * @summary Applies a health check template to a server group.
 *
 * @param request ApplyHealthCheckTemplateToServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyHealthCheckTemplateToServerGroupResponse
 */
ApplyHealthCheckTemplateToServerGroupResponse Client::applyHealthCheckTemplateToServerGroupWithOptions(const ApplyHealthCheckTemplateToServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasHealthCheckTemplateId()) {
    query["HealthCheckTemplateId"] = request.healthCheckTemplateId();
  }

  if (!!request.hasServerGroupId()) {
    query["ServerGroupId"] = request.serverGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyHealthCheckTemplateToServerGroup"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyHealthCheckTemplateToServerGroupResponse>();
}

/**
 * @summary Applies a health check template to a server group.
 *
 * @param request ApplyHealthCheckTemplateToServerGroupRequest
 * @return ApplyHealthCheckTemplateToServerGroupResponse
 */
ApplyHealthCheckTemplateToServerGroupResponse Client::applyHealthCheckTemplateToServerGroup(const ApplyHealthCheckTemplateToServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyHealthCheckTemplateToServerGroupWithOptions(request, runtime);
}

/**
 * @summary Associates access control lists (ACLs) with a listener.
 *
 * @description **DeleteDhcpOptionsSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAclRelations](https://help.aliyun.com/document_detail/213618.html) operation to query the status of the task.
 * *   If an ACL is in the **Associating** state, the ACL is being associated with a listener.
 * *   If an ACL is in the **Associated** state, the ACL is associated with a listener.
 *
 * @param request AssociateAclsWithListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateAclsWithListenerResponse
 */
AssociateAclsWithListenerResponse Client::associateAclsWithListenerWithOptions(const AssociateAclsWithListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclIds()) {
    query["AclIds"] = request.aclIds();
  }

  if (!!request.hasAclType()) {
    query["AclType"] = request.aclType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.listenerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateAclsWithListener"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateAclsWithListenerResponse>();
}

/**
 * @summary Associates access control lists (ACLs) with a listener.
 *
 * @description **DeleteDhcpOptionsSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAclRelations](https://help.aliyun.com/document_detail/213618.html) operation to query the status of the task.
 * *   If an ACL is in the **Associating** state, the ACL is being associated with a listener.
 * *   If an ACL is in the **Associated** state, the ACL is associated with a listener.
 *
 * @param request AssociateAclsWithListenerRequest
 * @return AssociateAclsWithListenerResponse
 */
AssociateAclsWithListenerResponse Client::associateAclsWithListener(const AssociateAclsWithListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateAclsWithListenerWithOptions(request, runtime);
}

/**
 * @summary Associates additional certificates with a listener.
 *
 * @description **AssociateAdditionalCertificatesWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) operation to query the status of the task:
 * *   If the HTTPS or QUIC listener is in the **Associating** state, the additional certificates are being associated.
 * *   If the HTTPS or QUIC listener is in the **Associated** state, the additional certificates are associated.
 *
 * @param request AssociateAdditionalCertificatesWithListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateAdditionalCertificatesWithListenerResponse
 */
AssociateAdditionalCertificatesWithListenerResponse Client::associateAdditionalCertificatesWithListenerWithOptions(const AssociateAdditionalCertificatesWithListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertificates()) {
    query["Certificates"] = request.certificates();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.listenerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateAdditionalCertificatesWithListener"},
    {"version" , "2020-06-16"},
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
 * @summary Associates additional certificates with a listener.
 *
 * @description **AssociateAdditionalCertificatesWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) operation to query the status of the task:
 * *   If the HTTPS or QUIC listener is in the **Associating** state, the additional certificates are being associated.
 * *   If the HTTPS or QUIC listener is in the **Associated** state, the additional certificates are associated.
 *
 * @param request AssociateAdditionalCertificatesWithListenerRequest
 * @return AssociateAdditionalCertificatesWithListenerResponse
 */
AssociateAdditionalCertificatesWithListenerResponse Client::associateAdditionalCertificatesWithListener(const AssociateAdditionalCertificatesWithListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateAdditionalCertificatesWithListenerWithOptions(request, runtime);
}

/**
 * @summary Associates an EIP bandwidth plan with an Application Load Balancer (ALB) instance.
 *
 * @description **AttachCommonBandwidthPackageToLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
 * *   If the ALB instance is in the **Configuring** state, the EIP bandwidth plan is being associated with the ALB instance.
 * *   If the ALB instance is in the **Active** state, the EIP bandwidth plan is associated with the ALB instance.
 *
 * @param request AttachCommonBandwidthPackageToLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachCommonBandwidthPackageToLoadBalancerResponse
 */
AttachCommonBandwidthPackageToLoadBalancerResponse Client::attachCommonBandwidthPackageToLoadBalancerWithOptions(const AttachCommonBandwidthPackageToLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidthPackageId()) {
    query["BandwidthPackageId"] = request.bandwidthPackageId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachCommonBandwidthPackageToLoadBalancer"},
    {"version" , "2020-06-16"},
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
 * @summary Associates an EIP bandwidth plan with an Application Load Balancer (ALB) instance.
 *
 * @description **AttachCommonBandwidthPackageToLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
 * *   If the ALB instance is in the **Configuring** state, the EIP bandwidth plan is being associated with the ALB instance.
 * *   If the ALB instance is in the **Active** state, the EIP bandwidth plan is associated with the ALB instance.
 *
 * @param request AttachCommonBandwidthPackageToLoadBalancerRequest
 * @return AttachCommonBandwidthPackageToLoadBalancerResponse
 */
AttachCommonBandwidthPackageToLoadBalancerResponse Client::attachCommonBandwidthPackageToLoadBalancer(const AttachCommonBandwidthPackageToLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachCommonBandwidthPackageToLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Adds the elastic IP address (EIP) and virtual IP address (VIP) of a zone to a DNS record.
 *
 * @description This operation is supported only by Application Load Balancer (ALB) instances that use static IP addresses. Before you call this operation, you must call the StartShiftLoadBalancerZones operation to remove the zone from the ALB instance.
 *
 * @param request CancelShiftLoadBalancerZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelShiftLoadBalancerZonesResponse
 */
CancelShiftLoadBalancerZonesResponse Client::cancelShiftLoadBalancerZonesWithOptions(const CancelShiftLoadBalancerZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasZoneMappings()) {
    query["ZoneMappings"] = request.zoneMappings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelShiftLoadBalancerZones"},
    {"version" , "2020-06-16"},
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
 * @summary Adds the elastic IP address (EIP) and virtual IP address (VIP) of a zone to a DNS record.
 *
 * @description This operation is supported only by Application Load Balancer (ALB) instances that use static IP addresses. Before you call this operation, you must call the StartShiftLoadBalancerZones operation to remove the zone from the ALB instance.
 *
 * @param request CancelShiftLoadBalancerZonesRequest
 * @return CancelShiftLoadBalancerZonesResponse
 */
CancelShiftLoadBalancerZonesResponse Client::cancelShiftLoadBalancerZones(const CancelShiftLoadBalancerZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelShiftLoadBalancerZonesWithOptions(request, runtime);
}

/**
 * @summary Creates AScript rules.
 *
 * @description ### [](#)Prerequisites
 * *   A standard or WAF-enabled Application Load Balancer (ALB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html).
 * ### [](#)Usage notes
 * **CreateAScripts** an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAScripts](https://help.aliyun.com/document_detail/472574.html) operation to query the status of a script.
 * *   If the script is in the **Creating** state, the script is being created.
 * *   If the script is in the **Available**, the script is created.
 *
 * @param request CreateAScriptsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAScriptsResponse
 */
CreateAScriptsResponse Client::createAScriptsWithOptions(const CreateAScriptsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAScripts()) {
    query["AScripts"] = request.AScripts();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.listenerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAScripts"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAScriptsResponse>();
}

/**
 * @summary Creates AScript rules.
 *
 * @description ### [](#)Prerequisites
 * *   A standard or WAF-enabled Application Load Balancer (ALB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html).
 * ### [](#)Usage notes
 * **CreateAScripts** an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAScripts](https://help.aliyun.com/document_detail/472574.html) operation to query the status of a script.
 * *   If the script is in the **Creating** state, the script is being created.
 * *   If the script is in the **Available**, the script is created.
 *
 * @param request CreateAScriptsRequest
 * @return CreateAScriptsResponse
 */
CreateAScriptsResponse Client::createAScripts(const CreateAScriptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAScriptsWithOptions(request, runtime);
}

/**
 * @summary Creates an access control list (ACL) in a region.
 *
 * @description ## Usage notes
 * The **CreateAcl** operation is asynchronous. After you send a request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [ListAcls](https://help.aliyun.com/document_detail/213617.html) operation to query the status of an ACL:
 * *   If an ACL is in the **Creating** state, the ACL is being created.
 * *   If an ACL is in the **Available** state, the ACL is created.
 *
 * @param request CreateAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAclResponse
 */
CreateAclResponse Client::createAclWithOptions(const CreateAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclName()) {
    query["AclName"] = request.aclName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAcl"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAclResponse>();
}

/**
 * @summary Creates an access control list (ACL) in a region.
 *
 * @description ## Usage notes
 * The **CreateAcl** operation is asynchronous. After you send a request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [ListAcls](https://help.aliyun.com/document_detail/213617.html) operation to query the status of an ACL:
 * *   If an ACL is in the **Creating** state, the ACL is being created.
 * *   If an ACL is in the **Available** state, the ACL is created.
 *
 * @param request CreateAclRequest
 * @return CreateAclResponse
 */
CreateAclResponse Client::createAcl(const CreateAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAclWithOptions(request, runtime);
}

/**
 * @summary Creates a health check template in a region.
 *
 * @param request CreateHealthCheckTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHealthCheckTemplateResponse
 */
CreateHealthCheckTemplateResponse Client::createHealthCheckTemplateWithOptions(const CreateHealthCheckTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasHealthCheckCodes()) {
    query["HealthCheckCodes"] = request.healthCheckCodes();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.healthCheckConnectPort();
  }

  if (!!request.hasHealthCheckHost()) {
    query["HealthCheckHost"] = request.healthCheckHost();
  }

  if (!!request.hasHealthCheckHttpVersion()) {
    query["HealthCheckHttpVersion"] = request.healthCheckHttpVersion();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.healthCheckInterval();
  }

  if (!!request.hasHealthCheckMethod()) {
    query["HealthCheckMethod"] = request.healthCheckMethod();
  }

  if (!!request.hasHealthCheckPath()) {
    query["HealthCheckPath"] = request.healthCheckPath();
  }

  if (!!request.hasHealthCheckProtocol()) {
    query["HealthCheckProtocol"] = request.healthCheckProtocol();
  }

  if (!!request.hasHealthCheckTemplateName()) {
    query["HealthCheckTemplateName"] = request.healthCheckTemplateName();
  }

  if (!!request.hasHealthCheckTimeout()) {
    query["HealthCheckTimeout"] = request.healthCheckTimeout();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.healthyThreshold();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.unhealthyThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHealthCheckTemplate"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHealthCheckTemplateResponse>();
}

/**
 * @summary Creates a health check template in a region.
 *
 * @param request CreateHealthCheckTemplateRequest
 * @return CreateHealthCheckTemplateResponse
 */
CreateHealthCheckTemplateResponse Client::createHealthCheckTemplate(const CreateHealthCheckTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHealthCheckTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a listener.
 *
 * @description ## Usage notes
 * **CreateListener** is an asynchronous operation. After you call this operation, the system returns a request ID. However, the operation is still being performed in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/214353.html) operation to query the status of the HTTP, HTTPS, or QUIC listener.
 * *   If the HTTP, HTTPS, or QUIC listener is in the **Provisioning** state, it indicates that the listener is being created.
 * *   If the HTTP, HTTPS, or QUIC listener is in the **Running** state, it indicates that the listener has been created successfully.
 *
 * @param request CreateListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateListenerResponse
 */
CreateListenerResponse Client::createListenerWithOptions(const CreateListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaCertificates()) {
    query["CaCertificates"] = request.caCertificates();
  }

  if (!!request.hasCaEnabled()) {
    query["CaEnabled"] = request.caEnabled();
  }

  if (!!request.hasCertificates()) {
    query["Certificates"] = request.certificates();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDefaultActions()) {
    query["DefaultActions"] = request.defaultActions();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasGzipEnabled()) {
    query["GzipEnabled"] = request.gzipEnabled();
  }

  if (!!request.hasHttp2Enabled()) {
    query["Http2Enabled"] = request.http2Enabled();
  }

  if (!!request.hasIdleTimeout()) {
    query["IdleTimeout"] = request.idleTimeout();
  }

  if (!!request.hasListenerDescription()) {
    query["ListenerDescription"] = request.listenerDescription();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.listenerProtocol();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasQuicConfig()) {
    query["QuicConfig"] = request.quicConfig();
  }

  if (!!request.hasRequestTimeout()) {
    query["RequestTimeout"] = request.requestTimeout();
  }

  if (!!request.hasSecurityPolicyId()) {
    query["SecurityPolicyId"] = request.securityPolicyId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasXForwardedForConfig()) {
    query["XForwardedForConfig"] = request.XForwardedForConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateListener"},
    {"version" , "2020-06-16"},
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
 * @summary Creates a listener.
 *
 * @description ## Usage notes
 * **CreateListener** is an asynchronous operation. After you call this operation, the system returns a request ID. However, the operation is still being performed in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/214353.html) operation to query the status of the HTTP, HTTPS, or QUIC listener.
 * *   If the HTTP, HTTPS, or QUIC listener is in the **Provisioning** state, it indicates that the listener is being created.
 * *   If the HTTP, HTTPS, or QUIC listener is in the **Running** state, it indicates that the listener has been created successfully.
 *
 * @param request CreateListenerRequest
 * @return CreateListenerResponse
 */
CreateListenerResponse Client::createListener(const CreateListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createListenerWithOptions(request, runtime);
}

/**
 * @summary Creates an Application Load Balancer (ALB) instance in a region.
 *
 * @description **CreateLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of an ALB instance.
 * *   If an ALB instance is in the **Provisioning** state, it indicates that the ALB instance is being created.
 * *   If an ALB instance is in the **Active** state, it indicates that the ALB instance is created.
 *
 * @param request CreateLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerResponse
 */
CreateLoadBalancerResponse Client::createLoadBalancerWithOptions(const CreateLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressAllocatedMode()) {
    query["AddressAllocatedMode"] = request.addressAllocatedMode();
  }

  if (!!request.hasAddressIpVersion()) {
    query["AddressIpVersion"] = request.addressIpVersion();
  }

  if (!!request.hasAddressType()) {
    query["AddressType"] = request.addressType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDeletionProtectionEnabled()) {
    query["DeletionProtectionEnabled"] = request.deletionProtectionEnabled();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerBillingConfig()) {
    query["LoadBalancerBillingConfig"] = request.loadBalancerBillingConfig();
  }

  if (!!request.hasLoadBalancerEdition()) {
    query["LoadBalancerEdition"] = request.loadBalancerEdition();
  }

  if (!!request.hasLoadBalancerName()) {
    query["LoadBalancerName"] = request.loadBalancerName();
  }

  if (!!request.hasModificationProtectionConfig()) {
    query["ModificationProtectionConfig"] = request.modificationProtectionConfig();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasZoneMappings()) {
    query["ZoneMappings"] = request.zoneMappings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancer"},
    {"version" , "2020-06-16"},
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
 * @summary Creates an Application Load Balancer (ALB) instance in a region.
 *
 * @description **CreateLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of an ALB instance.
 * *   If an ALB instance is in the **Provisioning** state, it indicates that the ALB instance is being created.
 * *   If an ALB instance is in the **Active** state, it indicates that the ALB instance is created.
 *
 * @param request CreateLoadBalancerRequest
 * @return CreateLoadBalancerResponse
 */
CreateLoadBalancerResponse Client::createLoadBalancer(const CreateLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Creates a forwarding rule for a listener.
 *
 * @description Take note of the following limits:
 * *   When you configure the **Redirect** action, you can use the default value only for the **HttpCode** parameter. Do not use the default values for the other parameters.
 * *   If you specify the **Rewrite** action together with other actions in a forwarding rule, make sure that the **ForwardGroup** action is specified.
 * *   **CreateRule** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of a forwarding rule.
 *     *   If a forwarding rule is in the **Provisioning** state, the forwarding rule is being created.
 *     *   If a forwarding rule is in the **Available** state, the forwarding rule is created.
 * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. The limits on conditions and actions are:
 *     *   Limits on conditions: 5 for a basic Application Load Balancer (ALB) instance, 10 for a standard ALB instance, and 10 for a WAF-enabled ALB instance.
 *     *   Limits on actions: 3 for a basic ALB instance, 5 for a standard ALB instance, and 5 for a WAF-enabled ALB instance.
 *
 * @param request CreateRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRuleWithOptions(const CreateRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.listenerId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasRuleActions()) {
    query["RuleActions"] = request.ruleActions();
  }

  if (!!request.hasRuleConditions()) {
    query["RuleConditions"] = request.ruleConditions();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRule"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRuleResponse>();
}

/**
 * @summary Creates a forwarding rule for a listener.
 *
 * @description Take note of the following limits:
 * *   When you configure the **Redirect** action, you can use the default value only for the **HttpCode** parameter. Do not use the default values for the other parameters.
 * *   If you specify the **Rewrite** action together with other actions in a forwarding rule, make sure that the **ForwardGroup** action is specified.
 * *   **CreateRule** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of a forwarding rule.
 *     *   If a forwarding rule is in the **Provisioning** state, the forwarding rule is being created.
 *     *   If a forwarding rule is in the **Available** state, the forwarding rule is created.
 * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. The limits on conditions and actions are:
 *     *   Limits on conditions: 5 for a basic Application Load Balancer (ALB) instance, 10 for a standard ALB instance, and 10 for a WAF-enabled ALB instance.
 *     *   Limits on actions: 3 for a basic ALB instance, 5 for a standard ALB instance, and 5 for a WAF-enabled ALB instance.
 *
 * @param request CreateRuleRequest
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRule(const CreateRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRuleWithOptions(request, runtime);
}

/**
 * @summary Creates multiple forwarding rules at a time.
 *
 * @description When you call this operation, take note of the following limits:
 * *   When you configure the **Redirect** action, do not use the default values for parameters other than **HttpCode**.
 * *   If you specify multiple actions in a forward rule, you must specify the **ForwardGroup** parameter along with the **Rewrite** parameter.
 * *   **CreateRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of the forwarding rules.
 *     *   If the forwarding rules are in the **Provisioning** state, the forwarding rules are being created.
 *     *   If the forwarding rules are in the **Available** state, the forwarding rules are created.
 * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. Take note of the following limits on the number of conditions and the number of actions in each forwarding rule:
 *     *   Conditions: 5 for each basic ALB instance, 10 for each standard ALB instance, and 10 for each WAF-enabled ALB instance.
 *     *   Actions: 3 for each basic ALB instance, 5 for each standard ALB instance, and 5 for each WAF-enabled ALB instance.
 *
 * @param request CreateRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRulesResponse
 */
CreateRulesResponse Client::createRulesWithOptions(const CreateRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.listenerId();
  }

  json body = {};
  json bodyFlat = {};
  if (!!request.hasRules()) {
    bodyFlat["Rules"] = request.rules();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRules"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRulesResponse>();
}

/**
 * @summary Creates multiple forwarding rules at a time.
 *
 * @description When you call this operation, take note of the following limits:
 * *   When you configure the **Redirect** action, do not use the default values for parameters other than **HttpCode**.
 * *   If you specify multiple actions in a forward rule, you must specify the **ForwardGroup** parameter along with the **Rewrite** parameter.
 * *   **CreateRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of the forwarding rules.
 *     *   If the forwarding rules are in the **Provisioning** state, the forwarding rules are being created.
 *     *   If the forwarding rules are in the **Available** state, the forwarding rules are created.
 * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. Take note of the following limits on the number of conditions and the number of actions in each forwarding rule:
 *     *   Conditions: 5 for each basic ALB instance, 10 for each standard ALB instance, and 10 for each WAF-enabled ALB instance.
 *     *   Actions: 3 for each basic ALB instance, 5 for each standard ALB instance, and 5 for each WAF-enabled ALB instance.
 *
 * @param request CreateRulesRequest
 * @return CreateRulesResponse
 */
CreateRulesResponse Client::createRules(const CreateRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRulesWithOptions(request, runtime);
}

/**
 * @summary Creates a custom security policy in a region.
 *
 * @param request CreateSecurityPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecurityPolicyResponse
 */
CreateSecurityPolicyResponse Client::createSecurityPolicyWithOptions(const CreateSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCiphers()) {
    query["Ciphers"] = request.ciphers();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityPolicyName()) {
    query["SecurityPolicyName"] = request.securityPolicyName();
  }

  if (!!request.hasTLSVersions()) {
    query["TLSVersions"] = request.TLSVersions();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSecurityPolicy"},
    {"version" , "2020-06-16"},
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
 * @summary Creates a custom security policy in a region.
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
 * @description **CreateServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) to query the status of a server group.
 * *   If a server group is in the **Creating** state, it indicates that the server group is being created.
 * *   If a server group is in the **Available** state, it indicates that the server group is created.
 *
 * @param request CreateServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServerGroupResponse
 */
CreateServerGroupResponse Client::createServerGroupWithOptions(const CreateServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConnectionDrainConfig()) {
    query["ConnectionDrainConfig"] = request.connectionDrainConfig();
  }

  if (!!request.hasCrossZoneEnabled()) {
    query["CrossZoneEnabled"] = request.crossZoneEnabled();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasHealthCheckConfig()) {
    query["HealthCheckConfig"] = request.healthCheckConfig();
  }

  if (!!request.hasIpv6Enabled()) {
    query["Ipv6Enabled"] = request.ipv6Enabled();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.protocol();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.scheduler();
  }

  if (!!request.hasServerGroupName()) {
    query["ServerGroupName"] = request.serverGroupName();
  }

  if (!!request.hasServerGroupType()) {
    query["ServerGroupType"] = request.serverGroupType();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasSlowStartConfig()) {
    query["SlowStartConfig"] = request.slowStartConfig();
  }

  if (!!request.hasStickySessionConfig()) {
    query["StickySessionConfig"] = request.stickySessionConfig();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasUchConfig()) {
    query["UchConfig"] = request.uchConfig();
  }

  if (!!request.hasUpstreamKeepaliveEnabled()) {
    query["UpstreamKeepaliveEnabled"] = request.upstreamKeepaliveEnabled();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServerGroup"},
    {"version" , "2020-06-16"},
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
 * @description **CreateServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) to query the status of a server group.
 * *   If a server group is in the **Creating** state, it indicates that the server group is being created.
 * *   If a server group is in the **Available** state, it indicates that the server group is created.
 *
 * @param request CreateServerGroupRequest
 * @return CreateServerGroupResponse
 */
CreateServerGroupResponse Client::createServerGroup(const CreateServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServerGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes AScript rules.
 *
 * @description **DeleteAScripts** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAScripts](https://help.aliyun.com/document_detail/472574.html) operation to query the status of the task:
 * *   If an AScript rule is in the **Deleting** state, the AScript rule is being deleted.
 * *   If an AScript rule cannot be found, the AScript rule is deleted.
 *
 * @param request DeleteAScriptsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAScriptsResponse
 */
DeleteAScriptsResponse Client::deleteAScriptsWithOptions(const DeleteAScriptsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAScriptIds()) {
    query["AScriptIds"] = request.AScriptIds();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAScripts"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAScriptsResponse>();
}

/**
 * @summary Deletes AScript rules.
 *
 * @description **DeleteAScripts** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAScripts](https://help.aliyun.com/document_detail/472574.html) operation to query the status of the task:
 * *   If an AScript rule is in the **Deleting** state, the AScript rule is being deleted.
 * *   If an AScript rule cannot be found, the AScript rule is deleted.
 *
 * @param request DeleteAScriptsRequest
 * @return DeleteAScriptsResponse
 */
DeleteAScriptsResponse Client::deleteAScripts(const DeleteAScriptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAScriptsWithOptions(request, runtime);
}

/**
 * @summary Deletes an access control list (ACL).
 *
 * @description **DeleteAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAcls](https://help.aliyun.com/document_detail/213617.html) operation to query the status of the task.
 * *   If the ACL is in the **Deleting** state, the ACL is being deleted.
 * *   If the ACL cannot be found, the ACL is deleted.
 *
 * @param request DeleteAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAclResponse
 */
DeleteAclResponse Client::deleteAclWithOptions(const DeleteAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAcl"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAclResponse>();
}

/**
 * @summary Deletes an access control list (ACL).
 *
 * @description **DeleteAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAcls](https://help.aliyun.com/document_detail/213617.html) operation to query the status of the task.
 * *   If the ACL is in the **Deleting** state, the ACL is being deleted.
 * *   If the ACL cannot be found, the ACL is deleted.
 *
 * @param request DeleteAclRequest
 * @return DeleteAclResponse
 */
DeleteAclResponse Client::deleteAcl(const DeleteAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAclWithOptions(request, runtime);
}

/**
 * @summary Deletes health check templates.
 *
 * @param request DeleteHealthCheckTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHealthCheckTemplatesResponse
 */
DeleteHealthCheckTemplatesResponse Client::deleteHealthCheckTemplatesWithOptions(const DeleteHealthCheckTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasHealthCheckTemplateIds()) {
    query["HealthCheckTemplateIds"] = request.healthCheckTemplateIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHealthCheckTemplates"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHealthCheckTemplatesResponse>();
}

/**
 * @summary Deletes health check templates.
 *
 * @param request DeleteHealthCheckTemplatesRequest
 * @return DeleteHealthCheckTemplatesResponse
 */
DeleteHealthCheckTemplatesResponse Client::deleteHealthCheckTemplates(const DeleteHealthCheckTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHealthCheckTemplatesWithOptions(request, runtime);
}

/**
 * @summary Deletes a listener.
 *
 * @description **DeleteListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) to query the status of the task.
 * *   If the listener is in the **Deleting** state, the listener is being deleted.
 * *   If the listener cannot be found, the listener is deleted.
 *
 * @param request DeleteListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteListenerResponse
 */
DeleteListenerResponse Client::deleteListenerWithOptions(const DeleteListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.listenerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteListener"},
    {"version" , "2020-06-16"},
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
 * @summary Deletes a listener.
 *
 * @description **DeleteListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) to query the status of the task.
 * *   If the listener is in the **Deleting** state, the listener is being deleted.
 * *   If the listener cannot be found, the listener is deleted.
 *
 * @param request DeleteListenerRequest
 * @return DeleteListenerResponse
 */
DeleteListenerResponse Client::deleteListener(const DeleteListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteListenerWithOptions(request, runtime);
}

/**
 * @summary Deletes an Application Load Balancer (ALB) instance.
 *
 * @description **DeleteLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
 * *   If an ALB instance is in the **Deleting** state, the ALB instance is being deleted.
 * *   If an ALB instance cannot be found, the ALB instance is deleted.
 *
 * @param request DeleteLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLoadBalancerResponse
 */
DeleteLoadBalancerResponse Client::deleteLoadBalancerWithOptions(const DeleteLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLoadBalancer"},
    {"version" , "2020-06-16"},
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
 * @summary Deletes an Application Load Balancer (ALB) instance.
 *
 * @description **DeleteLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
 * *   If an ALB instance is in the **Deleting** state, the ALB instance is being deleted.
 * *   If an ALB instance cannot be found, the ALB instance is deleted.
 *
 * @param request DeleteLoadBalancerRequest
 * @return DeleteLoadBalancerResponse
 */
DeleteLoadBalancerResponse Client::deleteLoadBalancer(const DeleteLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Deletes a forwarding rule.
 *
 * @description **DeleteRule** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of a forwarding rule:
 * *   If the forwarding rule is in the **Deleting** state, the forwarding rule is being deleted.
 * *   If the forwarding rule cannot be found, the forwarding rule is deleted.
 *
 * @param request DeleteRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRuleWithOptions(const DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRule"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRuleResponse>();
}

/**
 * @summary Deletes a forwarding rule.
 *
 * @description **DeleteRule** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of a forwarding rule:
 * *   If the forwarding rule is in the **Deleting** state, the forwarding rule is being deleted.
 * *   If the forwarding rule cannot be found, the forwarding rule is deleted.
 *
 * @param request DeleteRuleRequest
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRule(const DeleteRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more forwarding rules from a listener at a time.
 *
 * @description **DeleteRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of forwarding rules.
 * *   If the forwarding rules are in the **Deleting** state, the forwarding rules are being deleted.
 * *   If the forwarding rules cannot be found, the forwarding rules are deleted.
 *
 * @param request DeleteRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRulesResponse
 */
DeleteRulesResponse Client::deleteRulesWithOptions(const DeleteRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasRuleIds()) {
    query["RuleIds"] = request.ruleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRules"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRulesResponse>();
}

/**
 * @summary Deletes one or more forwarding rules from a listener at a time.
 *
 * @description **DeleteRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of forwarding rules.
 * *   If the forwarding rules are in the **Deleting** state, the forwarding rules are being deleted.
 * *   If the forwarding rules cannot be found, the forwarding rules are deleted.
 *
 * @param request DeleteRulesRequest
 * @return DeleteRulesResponse
 */
DeleteRulesResponse Client::deleteRules(const DeleteRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom security policy.
 *
 * @param request DeleteSecurityPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecurityPolicyResponse
 */
DeleteSecurityPolicyResponse Client::deleteSecurityPolicyWithOptions(const DeleteSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasSecurityPolicyId()) {
    query["SecurityPolicyId"] = request.securityPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSecurityPolicy"},
    {"version" , "2020-06-16"},
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
 * @summary Deletes a custom security policy.
 *
 * @param request DeleteSecurityPolicyRequest
 * @return DeleteSecurityPolicyResponse
 */
DeleteSecurityPolicyResponse Client::deleteSecurityPolicy(const DeleteSecurityPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecurityPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a server group.
 *
 * @description **DeleteServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of the task.
 * *   If a server group is in the **Deleting** state, it indicates that the server group is being deleted.
 * *   If a specified server group cannot be found, it indicates that the server group has been deleted.
 *
 * @param request DeleteServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServerGroupResponse
 */
DeleteServerGroupResponse Client::deleteServerGroupWithOptions(const DeleteServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasServerGroupId()) {
    query["ServerGroupId"] = request.serverGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServerGroup"},
    {"version" , "2020-06-16"},
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
 * @summary Deletes a server group.
 *
 * @description **DeleteServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of the task.
 * *   If a server group is in the **Deleting** state, it indicates that the server group is being deleted.
 * *   If a specified server group cannot be found, it indicates that the server group has been deleted.
 *
 * @param request DeleteServerGroupRequest
 * @return DeleteServerGroupResponse
 */
DeleteServerGroupResponse Client::deleteServerGroup(const DeleteServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServerGroupWithOptions(request, runtime);
}

/**
 * @summary Queries available regions.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.acceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2020-06-16"},
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
 * @summary Queries available regions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries zones in a region.
 *
 * @param request DescribeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZonesWithOptions(const DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.acceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZones"},
    {"version" , "2020-06-16"},
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
 * @summary Queries zones in a region.
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Disassociates an elastic IP address (EIP) bandwidth plan from an Application Load Balancer (ALB) instance.
 *
 * @description **DetachCommonBandwidthPackageFromLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214359.html) operation to query the status of the task.
 * *   If an ALB instance is in the **Configuring** state, the EIP bandwidth plan is being disassociated from the ALB instance.
 * *   If an ALB instance is in the **Active** state, the EIP bandwidth plan is disassociated from the ALB instance.
 *
 * @param request DetachCommonBandwidthPackageFromLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachCommonBandwidthPackageFromLoadBalancerResponse
 */
DetachCommonBandwidthPackageFromLoadBalancerResponse Client::detachCommonBandwidthPackageFromLoadBalancerWithOptions(const DetachCommonBandwidthPackageFromLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidthPackageId()) {
    query["BandwidthPackageId"] = request.bandwidthPackageId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachCommonBandwidthPackageFromLoadBalancer"},
    {"version" , "2020-06-16"},
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
 * @summary Disassociates an elastic IP address (EIP) bandwidth plan from an Application Load Balancer (ALB) instance.
 *
 * @description **DetachCommonBandwidthPackageFromLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214359.html) operation to query the status of the task.
 * *   If an ALB instance is in the **Configuring** state, the EIP bandwidth plan is being disassociated from the ALB instance.
 * *   If an ALB instance is in the **Active** state, the EIP bandwidth plan is disassociated from the ALB instance.
 *
 * @param request DetachCommonBandwidthPackageFromLoadBalancerRequest
 * @return DetachCommonBandwidthPackageFromLoadBalancerResponse
 */
DetachCommonBandwidthPackageFromLoadBalancerResponse Client::detachCommonBandwidthPackageFromLoadBalancer(const DetachCommonBandwidthPackageFromLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachCommonBandwidthPackageFromLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Disables deletion protection for an Application Load Balancer (ALB) instance.
 *
 * @param request DisableDeletionProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableDeletionProtectionResponse
 */
DisableDeletionProtectionResponse Client::disableDeletionProtectionWithOptions(const DisableDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableDeletionProtection"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableDeletionProtectionResponse>();
}

/**
 * @summary Disables deletion protection for an Application Load Balancer (ALB) instance.
 *
 * @param request DisableDeletionProtectionRequest
 * @return DisableDeletionProtectionResponse
 */
DisableDeletionProtectionResponse Client::disableDeletionProtection(const DisableDeletionProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDeletionProtectionWithOptions(request, runtime);
}

/**
 * @summary Disables the access log feature for a Server Load Balancer (SLB) instance.
 *
 * @param request DisableLoadBalancerAccessLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableLoadBalancerAccessLogResponse
 */
DisableLoadBalancerAccessLogResponse Client::disableLoadBalancerAccessLogWithOptions(const DisableLoadBalancerAccessLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableLoadBalancerAccessLog"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableLoadBalancerAccessLogResponse>();
}

/**
 * @summary Disables the access log feature for a Server Load Balancer (SLB) instance.
 *
 * @param request DisableLoadBalancerAccessLogRequest
 * @return DisableLoadBalancerAccessLogResponse
 */
DisableLoadBalancerAccessLogResponse Client::disableLoadBalancerAccessLog(const DisableLoadBalancerAccessLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableLoadBalancerAccessLogWithOptions(request, runtime);
}

/**
 * @summary Changes the type of the IPv6 address that is used by a dual-stack Application Load Balancer (ALB) instance from public to private.
 *
 * @description ### Prerequisites
 * An ALB instance is created and IPv4/IPv6 dual stack is enabled for the instance. You can call the [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html) operation and set **AddressIpVersion** to **DualStack** to create a dual-stack ALB instance.
 * > If you set **AddressIpVersion** to **DualStack**:
 * *   If you set **AddressType** to **Internet**, the ALB instance uses a public IPv4 IP address and a private IPv6 address.
 * *   If you set **AddressType** to **Intranet**, the ALB instance uses a private IPv4 IP address and a private IPv6 address.
 * ### Description
 * *   After the DisableLoadBalancerIpv6Internet operation is called, the value of **Ipv6AddressType** is changed to **Intranet** and the type of the IPv6 address of the ALB instance is changed from public to private. If you upgrade the instance or the instance scales elastic network interfaces (ENIs) along with workloads, private IPv6 addresses are automatically enabled for the instance and the new ENIs. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the value of **Ipv6AddressType**.
 * *   **DisableLoadBalancerIpv6Internet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of the task.
 *     *   If the ALB instance is in the **Configuring** state, the network type of the IPv6 address that is used by the ALB instance is being changed.
 *     *   If the ALB instance is in the **Active** state, the network type of the IPv6 address that is used by the ALB instance is changed.
 *
 * @param request DisableLoadBalancerIpv6InternetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableLoadBalancerIpv6InternetResponse
 */
DisableLoadBalancerIpv6InternetResponse Client::disableLoadBalancerIpv6InternetWithOptions(const DisableLoadBalancerIpv6InternetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableLoadBalancerIpv6Internet"},
    {"version" , "2020-06-16"},
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
 * @summary Changes the type of the IPv6 address that is used by a dual-stack Application Load Balancer (ALB) instance from public to private.
 *
 * @description ### Prerequisites
 * An ALB instance is created and IPv4/IPv6 dual stack is enabled for the instance. You can call the [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html) operation and set **AddressIpVersion** to **DualStack** to create a dual-stack ALB instance.
 * > If you set **AddressIpVersion** to **DualStack**:
 * *   If you set **AddressType** to **Internet**, the ALB instance uses a public IPv4 IP address and a private IPv6 address.
 * *   If you set **AddressType** to **Intranet**, the ALB instance uses a private IPv4 IP address and a private IPv6 address.
 * ### Description
 * *   After the DisableLoadBalancerIpv6Internet operation is called, the value of **Ipv6AddressType** is changed to **Intranet** and the type of the IPv6 address of the ALB instance is changed from public to private. If you upgrade the instance or the instance scales elastic network interfaces (ENIs) along with workloads, private IPv6 addresses are automatically enabled for the instance and the new ENIs. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the value of **Ipv6AddressType**.
 * *   **DisableLoadBalancerIpv6Internet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of the task.
 *     *   If the ALB instance is in the **Configuring** state, the network type of the IPv6 address that is used by the ALB instance is being changed.
 *     *   If the ALB instance is in the **Active** state, the network type of the IPv6 address that is used by the ALB instance is changed.
 *
 * @param request DisableLoadBalancerIpv6InternetRequest
 * @return DisableLoadBalancerIpv6InternetResponse
 */
DisableLoadBalancerIpv6InternetResponse Client::disableLoadBalancerIpv6Internet(const DisableLoadBalancerIpv6InternetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableLoadBalancerIpv6InternetWithOptions(request, runtime);
}

/**
 * @summary Disassociates access control lists (ACLs) from a listener.
 *
 * @description **DissociateAclsFromListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListAclRelations](https://help.aliyun.com/document_detail/213618.html) to query the status of an ACL.
 * *   If an ACL is in the **Dissociating** state, the ACL is being disassociated from the listener.
 * *   If an ACL is in the **Dissociated** state, the ACL is disassociated from the listener.
 *
 * @param request DissociateAclsFromListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateAclsFromListenerResponse
 */
DissociateAclsFromListenerResponse Client::dissociateAclsFromListenerWithOptions(const DissociateAclsFromListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclIds()) {
    query["AclIds"] = request.aclIds();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.listenerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DissociateAclsFromListener"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DissociateAclsFromListenerResponse>();
}

/**
 * @summary Disassociates access control lists (ACLs) from a listener.
 *
 * @description **DissociateAclsFromListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListAclRelations](https://help.aliyun.com/document_detail/213618.html) to query the status of an ACL.
 * *   If an ACL is in the **Dissociating** state, the ACL is being disassociated from the listener.
 * *   If an ACL is in the **Dissociated** state, the ACL is disassociated from the listener.
 *
 * @param request DissociateAclsFromListenerRequest
 * @return DissociateAclsFromListenerResponse
 */
DissociateAclsFromListenerResponse Client::dissociateAclsFromListener(const DissociateAclsFromListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dissociateAclsFromListenerWithOptions(request, runtime);
}

/**
 * @summary Disassociates additional certificates from a listener.
 *
 * @description **DissociateAdditionalCertificatesFromListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListListenerCertificates](https://help.aliyun.com/document_detail/214354.html) operation to query the status of the task. - If an additional certificate is in the **Dissociating** state, the additional certificate is being disassociated. - If an additional certificate is in the **Dissociated** state, the additional certificate is disassociated.
 *
 * @param request DissociateAdditionalCertificatesFromListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateAdditionalCertificatesFromListenerResponse
 */
DissociateAdditionalCertificatesFromListenerResponse Client::dissociateAdditionalCertificatesFromListenerWithOptions(const DissociateAdditionalCertificatesFromListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertificates()) {
    query["Certificates"] = request.certificates();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.listenerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DissociateAdditionalCertificatesFromListener"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DissociateAdditionalCertificatesFromListenerResponse>();
}

/**
 * @summary Disassociates additional certificates from a listener.
 *
 * @description **DissociateAdditionalCertificatesFromListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListListenerCertificates](https://help.aliyun.com/document_detail/214354.html) operation to query the status of the task. - If an additional certificate is in the **Dissociating** state, the additional certificate is being disassociated. - If an additional certificate is in the **Dissociated** state, the additional certificate is disassociated.
 *
 * @param request DissociateAdditionalCertificatesFromListenerRequest
 * @return DissociateAdditionalCertificatesFromListenerResponse
 */
DissociateAdditionalCertificatesFromListenerResponse Client::dissociateAdditionalCertificatesFromListener(const DissociateAdditionalCertificatesFromListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dissociateAdditionalCertificatesFromListenerWithOptions(request, runtime);
}

/**
 * @summary Enables deletion protection for a resource.
 *
 * @param request EnableDeletionProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableDeletionProtectionResponse
 */
EnableDeletionProtectionResponse Client::enableDeletionProtectionWithOptions(const EnableDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableDeletionProtection"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableDeletionProtectionResponse>();
}

/**
 * @summary Enables deletion protection for a resource.
 *
 * @param request EnableDeletionProtectionRequest
 * @return EnableDeletionProtectionResponse
 */
EnableDeletionProtectionResponse Client::enableDeletionProtection(const EnableDeletionProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableDeletionProtectionWithOptions(request, runtime);
}

/**
 * @summary Enables the access log feature for an Application Load Balancer (ALB) instance.
 *
 * @param request EnableLoadBalancerAccessLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableLoadBalancerAccessLogResponse
 */
EnableLoadBalancerAccessLogResponse Client::enableLoadBalancerAccessLogWithOptions(const EnableLoadBalancerAccessLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasLogProject()) {
    query["LogProject"] = request.logProject();
  }

  if (!!request.hasLogStore()) {
    query["LogStore"] = request.logStore();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableLoadBalancerAccessLog"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableLoadBalancerAccessLogResponse>();
}

/**
 * @summary Enables the access log feature for an Application Load Balancer (ALB) instance.
 *
 * @param request EnableLoadBalancerAccessLogRequest
 * @return EnableLoadBalancerAccessLogResponse
 */
EnableLoadBalancerAccessLogResponse Client::enableLoadBalancerAccessLog(const EnableLoadBalancerAccessLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableLoadBalancerAccessLogWithOptions(request, runtime);
}

/**
 * @summary Changes the type of the IPv6 address that is used by a dual-stack Application Load Balancer (ALB) instance from private to public.
 *
 * @description ### Prerequisites
 * An ALB instance is created and IPv4/IPv6 dual stack is enabled for the instance. You can call the [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html) operation and set **AddressIpVersion** to **DualStack** to create a dual-stack ALB instance.
 * > If you set **AddressIpVersion** to **DualStack**:
 * *   If you set **AddressType** to **Internet**, the ALB instance uses a public IPv4 IP address and a private IPv6 address.
 * *   If you set **AddressType** to **Intranet**, the ALB instance uses a private IPv4 IP address and a private IPv6 address.
 * ### Description
 * *   After the EnableLoadBalancerIpv6Internet operation is called, the value of **Ipv6AddressType** is changed to **Internet** and the type of the IPv6 address of the ALB instance is changed from private to public. If you upgrade the instance or the instance scales elastic network interfaces (ENIs) along with workloads, public IPv6 addresses are automatically enabled for the instance and the new ENIs. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the value of **Ipv6AddressType**.
 * *   **EnableLoadBalancerIpv6Internet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of the task.
 *     *   If the ALB instance is in the **Configuring** state, the network type of the IPv6 address that is used by the ALB instance is being changed.
 *     *   If the ALB instance is in the **Active** state, the network type of the IPv6 address that is used by the ALB instance is changed.
 *
 * @param request EnableLoadBalancerIpv6InternetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableLoadBalancerIpv6InternetResponse
 */
EnableLoadBalancerIpv6InternetResponse Client::enableLoadBalancerIpv6InternetWithOptions(const EnableLoadBalancerIpv6InternetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableLoadBalancerIpv6Internet"},
    {"version" , "2020-06-16"},
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
 * @summary Changes the type of the IPv6 address that is used by a dual-stack Application Load Balancer (ALB) instance from private to public.
 *
 * @description ### Prerequisites
 * An ALB instance is created and IPv4/IPv6 dual stack is enabled for the instance. You can call the [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html) operation and set **AddressIpVersion** to **DualStack** to create a dual-stack ALB instance.
 * > If you set **AddressIpVersion** to **DualStack**:
 * *   If you set **AddressType** to **Internet**, the ALB instance uses a public IPv4 IP address and a private IPv6 address.
 * *   If you set **AddressType** to **Intranet**, the ALB instance uses a private IPv4 IP address and a private IPv6 address.
 * ### Description
 * *   After the EnableLoadBalancerIpv6Internet operation is called, the value of **Ipv6AddressType** is changed to **Internet** and the type of the IPv6 address of the ALB instance is changed from private to public. If you upgrade the instance or the instance scales elastic network interfaces (ENIs) along with workloads, public IPv6 addresses are automatically enabled for the instance and the new ENIs. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the value of **Ipv6AddressType**.
 * *   **EnableLoadBalancerIpv6Internet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of the task.
 *     *   If the ALB instance is in the **Configuring** state, the network type of the IPv6 address that is used by the ALB instance is being changed.
 *     *   If the ALB instance is in the **Active** state, the network type of the IPv6 address that is used by the ALB instance is changed.
 *
 * @param request EnableLoadBalancerIpv6InternetRequest
 * @return EnableLoadBalancerIpv6InternetResponse
 */
EnableLoadBalancerIpv6InternetResponse Client::enableLoadBalancerIpv6Internet(const EnableLoadBalancerIpv6InternetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableLoadBalancerIpv6InternetWithOptions(request, runtime);
}

/**
 * @summary Queries the details about a health check template.
 *
 * @param request GetHealthCheckTemplateAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHealthCheckTemplateAttributeResponse
 */
GetHealthCheckTemplateAttributeResponse Client::getHealthCheckTemplateAttributeWithOptions(const GetHealthCheckTemplateAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHealthCheckTemplateId()) {
    query["HealthCheckTemplateId"] = request.healthCheckTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHealthCheckTemplateAttribute"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHealthCheckTemplateAttributeResponse>();
}

/**
 * @summary Queries the details about a health check template.
 *
 * @param request GetHealthCheckTemplateAttributeRequest
 * @return GetHealthCheckTemplateAttributeResponse
 */
GetHealthCheckTemplateAttributeResponse Client::getHealthCheckTemplateAttribute(const GetHealthCheckTemplateAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHealthCheckTemplateAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the details about a listener.
 *
 * @param request GetListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetListenerAttributeResponse
 */
GetListenerAttributeResponse Client::getListenerAttributeWithOptions(const GetListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.listenerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetListenerAttribute"},
    {"version" , "2020-06-16"},
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
 * @summary Queries the details about a listener.
 *
 * @param request GetListenerAttributeRequest
 * @return GetListenerAttributeResponse
 */
GetListenerAttributeResponse Client::getListenerAttribute(const GetListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the health check status of a listener and its forwarding rules.
 *
 * @param request GetListenerHealthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetListenerHealthStatusResponse
 */
GetListenerHealthStatusResponse Client::getListenerHealthStatusWithOptions(const GetListenerHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncludeRule()) {
    query["IncludeRule"] = request.includeRule();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.listenerId();
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
    {"action" , "GetListenerHealthStatus"},
    {"version" , "2020-06-16"},
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
 * @summary Queries the health check status of a listener and its forwarding rules.
 *
 * @param request GetListenerHealthStatusRequest
 * @return GetListenerHealthStatusResponse
 */
GetListenerHealthStatusResponse Client::getListenerHealthStatus(const GetListenerHealthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getListenerHealthStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an Application Load Balancer (ALB) instance.
 *
 * @param request GetLoadBalancerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoadBalancerAttributeResponse
 */
GetLoadBalancerAttributeResponse Client::getLoadBalancerAttributeWithOptions(const GetLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLoadBalancerAttribute"},
    {"version" , "2020-06-16"},
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
 * @summary Queries the details of an Application Load Balancer (ALB) instance.
 *
 * @param request GetLoadBalancerAttributeRequest
 * @return GetLoadBalancerAttributeResponse
 */
GetLoadBalancerAttributeResponse Client::getLoadBalancerAttribute(const GetLoadBalancerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoadBalancerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries AScript rules.
 *
 * @param request ListAScriptsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAScriptsResponse
 */
ListAScriptsResponse Client::listAScriptsWithOptions(const ListAScriptsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAScriptIds()) {
    query["AScriptIds"] = request.AScriptIds();
  }

  if (!!request.hasAScriptNames()) {
    query["AScriptNames"] = request.AScriptNames();
  }

  if (!!request.hasListenerIds()) {
    query["ListenerIds"] = request.listenerIds();
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
    {"action" , "ListAScripts"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAScriptsResponse>();
}

/**
 * @summary Queries AScript rules.
 *
 * @param request ListAScriptsRequest
 * @return ListAScriptsResponse
 */
ListAScriptsResponse Client::listAScripts(const ListAScriptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAScriptsWithOptions(request, runtime);
}

/**
 * @summary Queries the entries of an access control list (ACL).
 *
 * @param request ListAclEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAclEntriesResponse
 */
ListAclEntriesResponse Client::listAclEntriesWithOptions(const ListAclEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
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
    {"action" , "ListAclEntries"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAclEntriesResponse>();
}

/**
 * @summary Queries the entries of an access control list (ACL).
 *
 * @param request ListAclEntriesRequest
 * @return ListAclEntriesResponse
 */
ListAclEntriesResponse Client::listAclEntries(const ListAclEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAclEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries the listeners that are associated with access control lists (ACLs).
 *
 * @param request ListAclRelationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAclRelationsResponse
 */
ListAclRelationsResponse Client::listAclRelationsWithOptions(const ListAclRelationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclIds()) {
    query["AclIds"] = request.aclIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAclRelations"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAclRelationsResponse>();
}

/**
 * @summary Queries the listeners that are associated with access control lists (ACLs).
 *
 * @param request ListAclRelationsRequest
 * @return ListAclRelationsResponse
 */
ListAclRelationsResponse Client::listAclRelations(const ListAclRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAclRelationsWithOptions(request, runtime);
}

/**
 * @summary Queries the access control lists (ACLs) in a region.
 *
 * @param request ListAclsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAclsResponse
 */
ListAclsResponse Client::listAclsWithOptions(const ListAclsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclIds()) {
    query["AclIds"] = request.aclIds();
  }

  if (!!request.hasAclNames()) {
    query["AclNames"] = request.aclNames();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAcls"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAclsResponse>();
}

/**
 * @summary Queries the access control lists (ACLs) in a region.
 *
 * @param request ListAclsRequest
 * @return ListAclsResponse
 */
ListAclsResponse Client::listAcls(const ListAclsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAclsWithOptions(request, runtime);
}

/**
 * @summary Queries asynchronous tasks in a region.
 *
 * @param request ListAsynJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAsynJobsResponse
 */
ListAsynJobsResponse Client::listAsynJobsWithOptions(const ListAsynJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.apiName();
  }

  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasJobIds()) {
    query["JobIds"] = request.jobIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAsynJobs"},
    {"version" , "2020-06-16"},
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
 * @summary Queries asynchronous tasks in a region.
 *
 * @param request ListAsynJobsRequest
 * @return ListAsynJobsResponse
 */
ListAsynJobsResponse Client::listAsynJobs(const ListAsynJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAsynJobsWithOptions(request, runtime);
}

/**
 * @summary Queries health check templates in a region.
 *
 * @param request ListHealthCheckTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHealthCheckTemplatesResponse
 */
ListHealthCheckTemplatesResponse Client::listHealthCheckTemplatesWithOptions(const ListHealthCheckTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHealthCheckTemplateIds()) {
    query["HealthCheckTemplateIds"] = request.healthCheckTemplateIds();
  }

  if (!!request.hasHealthCheckTemplateNames()) {
    query["HealthCheckTemplateNames"] = request.healthCheckTemplateNames();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHealthCheckTemplates"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHealthCheckTemplatesResponse>();
}

/**
 * @summary Queries health check templates in a region.
 *
 * @param request ListHealthCheckTemplatesRequest
 * @return ListHealthCheckTemplatesResponse
 */
ListHealthCheckTemplatesResponse Client::listHealthCheckTemplates(const ListHealthCheckTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHealthCheckTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the certificates that are associated with a listener, including additional certificates and the default certificate.
 *
 * @param request ListListenerCertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListListenerCertificatesResponse
 */
ListListenerCertificatesResponse Client::listListenerCertificatesWithOptions(const ListListenerCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertificateIds()) {
    query["CertificateIds"] = request.certificateIds();
  }

  if (!!request.hasCertificateType()) {
    query["CertificateType"] = request.certificateType();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.listenerId();
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
    {"action" , "ListListenerCertificates"},
    {"version" , "2020-06-16"},
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
 * @summary Queries the certificates that are associated with a listener, including additional certificates and the default certificate.
 *
 * @param request ListListenerCertificatesRequest
 * @return ListListenerCertificatesResponse
 */
ListListenerCertificatesResponse Client::listListenerCertificates(const ListListenerCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listListenerCertificatesWithOptions(request, runtime);
}

/**
 * @summary Queries the listeners in a region.
 *
 * @param request ListListenersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListListenersResponse
 */
ListListenersResponse Client::listListenersWithOptions(const ListListenersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerIds()) {
    query["ListenerIds"] = request.listenerIds();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.listenerProtocol();
  }

  if (!!request.hasLoadBalancerIds()) {
    query["LoadBalancerIds"] = request.loadBalancerIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListListeners"},
    {"version" , "2020-06-16"},
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
 * @summary Queries the listeners in a region.
 *
 * @param request ListListenersRequest
 * @return ListListenersResponse
 */
ListListenersResponse Client::listListeners(const ListListenersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listListenersWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of instances.
 *
 * @param request ListLoadBalancersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLoadBalancersResponse
 */
ListLoadBalancersResponse Client::listLoadBalancersWithOptions(const ListLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressIpVersion()) {
    query["AddressIpVersion"] = request.addressIpVersion();
  }

  if (!!request.hasAddressType()) {
    query["AddressType"] = request.addressType();
  }

  if (!!request.hasDNSName()) {
    query["DNSName"] = request.DNSName();
  }

  if (!!request.hasIpv6AddressType()) {
    query["Ipv6AddressType"] = request.ipv6AddressType();
  }

  if (!!request.hasLoadBalancerBussinessStatus()) {
    query["LoadBalancerBussinessStatus"] = request.loadBalancerBussinessStatus();
  }

  if (!!request.hasLoadBalancerIds()) {
    query["LoadBalancerIds"] = request.loadBalancerIds();
  }

  if (!!request.hasLoadBalancerNames()) {
    query["LoadBalancerNames"] = request.loadBalancerNames();
  }

  if (!!request.hasLoadBalancerStatus()) {
    query["LoadBalancerStatus"] = request.loadBalancerStatus();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVpcIds()) {
    query["VpcIds"] = request.vpcIds();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLoadBalancers"},
    {"version" , "2020-06-16"},
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
 * @summary Queries the configurations of instances.
 *
 * @param request ListLoadBalancersRequest
 * @return ListLoadBalancersResponse
 */
ListLoadBalancersResponse Client::listLoadBalancers(const ListLoadBalancersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLoadBalancersWithOptions(request, runtime);
}

/**
 * @summary Queries the forwarding rules in a region.
 *
 * @param request ListRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRulesResponse
 */
ListRulesResponse Client::listRulesWithOptions(const ListRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasListenerIds()) {
    query["ListenerIds"] = request.listenerIds();
  }

  if (!!request.hasLoadBalancerIds()) {
    query["LoadBalancerIds"] = request.loadBalancerIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRuleIds()) {
    query["RuleIds"] = request.ruleIds();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRules"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRulesResponse>();
}

/**
 * @summary Queries the forwarding rules in a region.
 *
 * @param request ListRulesRequest
 * @return ListRulesResponse
 */
ListRulesResponse Client::listRules(const ListRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRulesWithOptions(request, runtime);
}

/**
 * @summary Queries custom security policies in a region.
 *
 * @param request ListSecurityPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecurityPoliciesResponse
 */
ListSecurityPoliciesResponse Client::listSecurityPoliciesWithOptions(const ListSecurityPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityPolicyIds()) {
    query["SecurityPolicyIds"] = request.securityPolicyIds();
  }

  if (!!request.hasSecurityPolicyNames()) {
    query["SecurityPolicyNames"] = request.securityPolicyNames();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSecurityPolicies"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecurityPoliciesResponse>();
}

/**
 * @summary Queries custom security policies in a region.
 *
 * @param request ListSecurityPoliciesRequest
 * @return ListSecurityPoliciesResponse
 */
ListSecurityPoliciesResponse Client::listSecurityPolicies(const ListSecurityPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSecurityPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the listeners that are associated with security policies.
 *
 * @param request ListSecurityPolicyRelationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecurityPolicyRelationsResponse
 */
ListSecurityPolicyRelationsResponse Client::listSecurityPolicyRelationsWithOptions(const ListSecurityPolicyRelationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityPolicyIds()) {
    query["SecurityPolicyIds"] = request.securityPolicyIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSecurityPolicyRelations"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecurityPolicyRelationsResponse>();
}

/**
 * @summary Queries the listeners that are associated with security policies.
 *
 * @param request ListSecurityPolicyRelationsRequest
 * @return ListSecurityPolicyRelationsResponse
 */
ListSecurityPolicyRelationsResponse Client::listSecurityPolicyRelations(const ListSecurityPolicyRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSecurityPolicyRelationsWithOptions(request, runtime);
}

/**
 * @summary Queries servers in a server group.
 *
 * @param request ListServerGroupServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServerGroupServersResponse
 */
ListServerGroupServersResponse Client::listServerGroupServersWithOptions(const ListServerGroupServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasServerGroupId()) {
    query["ServerGroupId"] = request.serverGroupId();
  }

  if (!!request.hasServerIds()) {
    query["ServerIds"] = request.serverIds();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServerGroupServers"},
    {"version" , "2020-06-16"},
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
 * @summary Queries servers in a server group.
 *
 * @param request ListServerGroupServersRequest
 * @return ListServerGroupServersResponse
 */
ListServerGroupServersResponse Client::listServerGroupServers(const ListServerGroupServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServerGroupServersWithOptions(request, runtime);
}

/**
 * @summary Queries server groups.
 *
 * @param request ListServerGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServerGroupsResponse
 */
ListServerGroupsResponse Client::listServerGroupsWithOptions(const ListServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasServerGroupIds()) {
    query["ServerGroupIds"] = request.serverGroupIds();
  }

  if (!!request.hasServerGroupNames()) {
    query["ServerGroupNames"] = request.serverGroupNames();
  }

  if (!!request.hasServerGroupType()) {
    query["ServerGroupType"] = request.serverGroupType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServerGroups"},
    {"version" , "2020-06-16"},
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
 * @summary Queries server groups.
 *
 * @param request ListServerGroupsRequest
 * @return ListServerGroupsResponse
 */
ListServerGroupsResponse Client::listServerGroups(const ListServerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServerGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries system security policies in a region.
 *
 * @param request ListSystemSecurityPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSystemSecurityPoliciesResponse
 */
ListSystemSecurityPoliciesResponse Client::listSystemSecurityPoliciesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListSystemSecurityPolicies"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSystemSecurityPoliciesResponse>();
}

/**
 * @summary Queries system security policies in a region.
 *
 * @return ListSystemSecurityPoliciesResponse
 */
ListSystemSecurityPoliciesResponse Client::listSystemSecurityPolicies() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSystemSecurityPoliciesWithOptions(runtime);
}

/**
 * @summary Queries tag keys.
 *
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagKeys"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagKeysResponse>();
}

/**
 * @summary Queries tag keys.
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the tags of resources.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

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
    {"action" , "ListTagResources"},
    {"version" , "2020-06-16"},
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
 * @summary Queries the tags of resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries tag values.
 *
 * @param request ListTagValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValuesWithOptions(const ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
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
    {"action" , "ListTagValues"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagValuesResponse>();
}

/**
 * @summary Queries tag values.
 *
 * @param request ListTagValuesRequest
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValues(const ListTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagValuesWithOptions(request, runtime);
}

/**
 * @summary Adds an Application Load Balancer (ALB) instance to a security group.
 *
 * @description *   By default, security groups are unavailable. To use security groups, contact your account manager.
 * *   Make sure that a security group is created. For more information about how to create security groups, see [CreateSecurityGroup](https://help.aliyun.com/document_detail/2679843.html).
 * *   Each ALB instance can be added to at most four security groups.
 * *   To query the security groups of an ALB instance, call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/2254835.html) operation.
 * *   GetLoadBalancerAttribute is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAsynJobs](https://help.aliyun.com/document_detail/2254893.html) operation to query the status of the task.
 *     *   If the task is in the Succeeded state, the ALB instance is added to the security group.
 *     *   If the task is in the Processing state, the ALB instance is being added to the security group. In this case, you can query the task but cannot perform other operations.
 *
 * @param request LoadBalancerJoinSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LoadBalancerJoinSecurityGroupResponse
 */
LoadBalancerJoinSecurityGroupResponse Client::loadBalancerJoinSecurityGroupWithOptions(const LoadBalancerJoinSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasSecurityGroupIds()) {
    query["SecurityGroupIds"] = request.securityGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LoadBalancerJoinSecurityGroup"},
    {"version" , "2020-06-16"},
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
 * @summary Adds an Application Load Balancer (ALB) instance to a security group.
 *
 * @description *   By default, security groups are unavailable. To use security groups, contact your account manager.
 * *   Make sure that a security group is created. For more information about how to create security groups, see [CreateSecurityGroup](https://help.aliyun.com/document_detail/2679843.html).
 * *   Each ALB instance can be added to at most four security groups.
 * *   To query the security groups of an ALB instance, call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/2254835.html) operation.
 * *   GetLoadBalancerAttribute is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAsynJobs](https://help.aliyun.com/document_detail/2254893.html) operation to query the status of the task.
 *     *   If the task is in the Succeeded state, the ALB instance is added to the security group.
 *     *   If the task is in the Processing state, the ALB instance is being added to the security group. In this case, you can query the task but cannot perform other operations.
 *
 * @param request LoadBalancerJoinSecurityGroupRequest
 * @return LoadBalancerJoinSecurityGroupResponse
 */
LoadBalancerJoinSecurityGroupResponse Client::loadBalancerJoinSecurityGroup(const LoadBalancerJoinSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return loadBalancerJoinSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary Removes an Application Load Balancer (ALB) instance from a security group.
 *
 * @description *   LoadBalancerLeaveSecurityGroup is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAsynJobs](https://help.aliyun.com/document_detail/2254893.html) operation to query the status of the task.
 *     *   If the task is in the Succeeded state, the ALB instance is removed from the security group.
 *     *   If the task is in the Processing state, the ALB instance is being removed from the security group. In this case, you can query the task but cannot perform other operations.
 *
 * @param request LoadBalancerLeaveSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LoadBalancerLeaveSecurityGroupResponse
 */
LoadBalancerLeaveSecurityGroupResponse Client::loadBalancerLeaveSecurityGroupWithOptions(const LoadBalancerLeaveSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasSecurityGroupIds()) {
    query["SecurityGroupIds"] = request.securityGroupIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LoadBalancerLeaveSecurityGroup"},
    {"version" , "2020-06-16"},
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
 * @summary Removes an Application Load Balancer (ALB) instance from a security group.
 *
 * @description *   LoadBalancerLeaveSecurityGroup is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAsynJobs](https://help.aliyun.com/document_detail/2254893.html) operation to query the status of the task.
 *     *   If the task is in the Succeeded state, the ALB instance is removed from the security group.
 *     *   If the task is in the Processing state, the ALB instance is being removed from the security group. In this case, you can query the task but cannot perform other operations.
 *
 * @param request LoadBalancerLeaveSecurityGroupRequest
 * @return LoadBalancerLeaveSecurityGroupResponse
 */
LoadBalancerLeaveSecurityGroupResponse Client::loadBalancerLeaveSecurityGroup(const LoadBalancerLeaveSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return loadBalancerLeaveSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary Moves a resource to another resource group.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2020-06-16"},
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
 * @summary Moves a resource to another resource group.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Removes entries from an access control list (ACL).
 *
 * @description **RemoveEntriesFromAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAclEntries](https://help.aliyun.com/document_detail/213616.html) operation to query the status of the task.
 * *   If an ACL is in the **Removing** state, the entries are being removed.
 * *   If an ACL cannot be found, the entries are removed.
 *
 * @param request RemoveEntriesFromAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveEntriesFromAclResponse
 */
RemoveEntriesFromAclResponse Client::removeEntriesFromAclWithOptions(const RemoveEntriesFromAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEntries()) {
    query["Entries"] = request.entries();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveEntriesFromAcl"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveEntriesFromAclResponse>();
}

/**
 * @summary Removes entries from an access control list (ACL).
 *
 * @description **RemoveEntriesFromAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAclEntries](https://help.aliyun.com/document_detail/213616.html) operation to query the status of the task.
 * *   If an ACL is in the **Removing** state, the entries are being removed.
 * *   If an ACL cannot be found, the entries are removed.
 *
 * @param request RemoveEntriesFromAclRequest
 * @return RemoveEntriesFromAclResponse
 */
RemoveEntriesFromAclResponse Client::removeEntriesFromAcl(const RemoveEntriesFromAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeEntriesFromAclWithOptions(request, runtime);
}

/**
 * @summary Removes backend servers from a server group.
 *
 * @description **RemoveServersFromServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
 * 1.  You can call [ListServerGroups](https://help.aliyun.com/document_detail/2254862.html) to query the status of a server group.
 *     *   If the server group is in the **Configuring** state, the server group is being modified.
 *     *   If the server group is in the **Available** state, the server group is running.
 * 2.  You can call [ListServerGroupServers](https://help.aliyun.com/document_detail/2254863.html) to query the status of a backend server.
 *     *   If the backend server is in the **Removing** state, the backend server is being removed from the server group.
 *     *   If the backend server cannot be found, the backend server is no longer in the server group.
 *
 * @param request RemoveServersFromServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveServersFromServerGroupResponse
 */
RemoveServersFromServerGroupResponse Client::removeServersFromServerGroupWithOptions(const RemoveServersFromServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasServerGroupId()) {
    query["ServerGroupId"] = request.serverGroupId();
  }

  if (!!request.hasServers()) {
    query["Servers"] = request.servers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveServersFromServerGroup"},
    {"version" , "2020-06-16"},
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
 * @summary Removes backend servers from a server group.
 *
 * @description **RemoveServersFromServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
 * 1.  You can call [ListServerGroups](https://help.aliyun.com/document_detail/2254862.html) to query the status of a server group.
 *     *   If the server group is in the **Configuring** state, the server group is being modified.
 *     *   If the server group is in the **Available** state, the server group is running.
 * 2.  You can call [ListServerGroupServers](https://help.aliyun.com/document_detail/2254863.html) to query the status of a backend server.
 *     *   If the backend server is in the **Removing** state, the backend server is being removed from the server group.
 *     *   If the backend server cannot be found, the backend server is no longer in the server group.
 *
 * @param request RemoveServersFromServerGroupRequest
 * @return RemoveServersFromServerGroupResponse
 */
RemoveServersFromServerGroupResponse Client::removeServersFromServerGroup(const RemoveServersFromServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeServersFromServerGroupWithOptions(request, runtime);
}

/**
 * @summary Replaces backend servers in a server group.
 *
 * @description **ReplaceServersInServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
 * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group.
 *     *   If a server group is in the **Configuring** state, it indicates that the server group is being modified.
 *     *   If a server group is in the **Available** state, it indicates that the server group is running.
 * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/213628.html) operation to query the status of a backend server.
 *     *   If a backend server is in the **Replacing** state, it indicates that the server is being removed from the server group and a new server is added to the server group.
 *     *   If a backend server is in the \\*\\*Available\\*\\* state, it indicates that the server is running.
 *
 * @param request ReplaceServersInServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceServersInServerGroupResponse
 */
ReplaceServersInServerGroupResponse Client::replaceServersInServerGroupWithOptions(const ReplaceServersInServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddedServers()) {
    query["AddedServers"] = request.addedServers();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasRemovedServers()) {
    query["RemovedServers"] = request.removedServers();
  }

  if (!!request.hasServerGroupId()) {
    query["ServerGroupId"] = request.serverGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReplaceServersInServerGroup"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceServersInServerGroupResponse>();
}

/**
 * @summary Replaces backend servers in a server group.
 *
 * @description **ReplaceServersInServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
 * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group.
 *     *   If a server group is in the **Configuring** state, it indicates that the server group is being modified.
 *     *   If a server group is in the **Available** state, it indicates that the server group is running.
 * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/213628.html) operation to query the status of a backend server.
 *     *   If a backend server is in the **Replacing** state, it indicates that the server is being removed from the server group and a new server is added to the server group.
 *     *   If a backend server is in the \\*\\*Available\\*\\* state, it indicates that the server is running.
 *
 * @param request ReplaceServersInServerGroupRequest
 * @return ReplaceServersInServerGroupResponse
 */
ReplaceServersInServerGroupResponse Client::replaceServersInServerGroup(const ReplaceServersInServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return replaceServersInServerGroupWithOptions(request, runtime);
}

/**
 * @summary Enables a listener.
 *
 * @description **StartListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) to query the status of the task.
 * *   If a listener is in the **Configuring** state, the listener is being enabled.
 * *   If a listener is in the **Running** state, the listener is enabled.
 *
 * @param request StartListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartListenerResponse
 */
StartListenerResponse Client::startListenerWithOptions(const StartListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.listenerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartListener"},
    {"version" , "2020-06-16"},
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
 * @summary Enables a listener.
 *
 * @description **StartListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) to query the status of the task.
 * *   If a listener is in the **Configuring** state, the listener is being enabled.
 * *   If a listener is in the **Running** state, the listener is enabled.
 *
 * @param request StartListenerRequest
 * @return StartListenerResponse
 */
StartListenerResponse Client::startListener(const StartListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startListenerWithOptions(request, runtime);
}

/**
 * @summary Removes an elastic IP address (EIP) or a virtual IP address (VIP) of a zone from a DNS record.
 *
 * @description This operation is supported by Application Load Balancer (ALB) instances that use static IP addresses. The zone cannot be removed if the ALB instance has only one available zone.
 *
 * @param request StartShiftLoadBalancerZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartShiftLoadBalancerZonesResponse
 */
StartShiftLoadBalancerZonesResponse Client::startShiftLoadBalancerZonesWithOptions(const StartShiftLoadBalancerZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasZoneMappings()) {
    query["ZoneMappings"] = request.zoneMappings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartShiftLoadBalancerZones"},
    {"version" , "2020-06-16"},
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
 * @summary Removes an elastic IP address (EIP) or a virtual IP address (VIP) of a zone from a DNS record.
 *
 * @description This operation is supported by Application Load Balancer (ALB) instances that use static IP addresses. The zone cannot be removed if the ALB instance has only one available zone.
 *
 * @param request StartShiftLoadBalancerZonesRequest
 * @return StartShiftLoadBalancerZonesResponse
 */
StartShiftLoadBalancerZonesResponse Client::startShiftLoadBalancerZones(const StartShiftLoadBalancerZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startShiftLoadBalancerZonesWithOptions(request, runtime);
}

/**
 * @summary Disables a listener.
 *
 * @description **StopListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) operation to query the status of the task:
 * *   If a listener is in the **Configuring** state, the listener is being disabled.
 * *   If a listener is in the **Stopped** state, the listener is disabled.
 *
 * @param request StopListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopListenerResponse
 */
StopListenerResponse Client::stopListenerWithOptions(const StopListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.listenerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopListener"},
    {"version" , "2020-06-16"},
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
 * @summary Disables a listener.
 *
 * @description **StopListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) operation to query the status of the task:
 * *   If a listener is in the **Configuring** state, the listener is being disabled.
 * *   If a listener is in the **Stopped** state, the listener is disabled.
 *
 * @param request StopListenerRequest
 * @return StopListenerResponse
 */
StopListenerResponse Client::stopListener(const StopListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopListenerWithOptions(request, runtime);
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
    {"version" , "2020-06-16"},
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
 * @summary Removes tags from resources.
 *
 * @param request UnTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResourcesWithOptions(const UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnTagResources"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnTagResourcesResponse>();
}

/**
 * @summary Removes tags from resources.
 *
 * @param request UnTagResourcesRequest
 * @return UnTagResourcesResponse
 */
UnTagResourcesResponse Client::unTagResources(const UnTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates AScript rules.
 *
 * @description **UpdateAScripts** is an an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAScripts](https://help.aliyun.com/document_detail/472574.html) operation to query the status of an AScript rule.
 * *   If the rule is in the **Configuring** state, the rule is being updated.
 * *   If the rule is in the **Available** state, the rule is updated.
 *
 * @param request UpdateAScriptsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAScriptsResponse
 */
UpdateAScriptsResponse Client::updateAScriptsWithOptions(const UpdateAScriptsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAScripts()) {
    query["AScripts"] = request.AScripts();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAScripts"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAScriptsResponse>();
}

/**
 * @summary Updates AScript rules.
 *
 * @description **UpdateAScripts** is an an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAScripts](https://help.aliyun.com/document_detail/472574.html) operation to query the status of an AScript rule.
 * *   If the rule is in the **Configuring** state, the rule is being updated.
 * *   If the rule is in the **Available** state, the rule is updated.
 *
 * @param request UpdateAScriptsRequest
 * @return UpdateAScriptsResponse
 */
UpdateAScriptsResponse Client::updateAScripts(const UpdateAScriptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAScriptsWithOptions(request, runtime);
}

/**
 * @summary Updates the attributes of an access control list (ACL), such as the name.
 *
 * @param request UpdateAclAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAclAttributeResponse
 */
UpdateAclAttributeResponse Client::updateAclAttributeWithOptions(const UpdateAclAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasAclName()) {
    query["AclName"] = request.aclName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAclAttribute"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAclAttributeResponse>();
}

/**
 * @summary Updates the attributes of an access control list (ACL), such as the name.
 *
 * @param request UpdateAclAttributeRequest
 * @return UpdateAclAttributeResponse
 */
UpdateAclAttributeResponse Client::updateAclAttribute(const UpdateAclAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAclAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes, such as the name and protocol, of a health check template.
 *
 * @param request UpdateHealthCheckTemplateAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHealthCheckTemplateAttributeResponse
 */
UpdateHealthCheckTemplateAttributeResponse Client::updateHealthCheckTemplateAttributeWithOptions(const UpdateHealthCheckTemplateAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasHealthCheckCodes()) {
    query["HealthCheckCodes"] = request.healthCheckCodes();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.healthCheckConnectPort();
  }

  if (!!request.hasHealthCheckHost()) {
    query["HealthCheckHost"] = request.healthCheckHost();
  }

  if (!!request.hasHealthCheckHttpVersion()) {
    query["HealthCheckHttpVersion"] = request.healthCheckHttpVersion();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.healthCheckInterval();
  }

  if (!!request.hasHealthCheckMethod()) {
    query["HealthCheckMethod"] = request.healthCheckMethod();
  }

  if (!!request.hasHealthCheckPath()) {
    query["HealthCheckPath"] = request.healthCheckPath();
  }

  if (!!request.hasHealthCheckProtocol()) {
    query["HealthCheckProtocol"] = request.healthCheckProtocol();
  }

  if (!!request.hasHealthCheckTemplateId()) {
    query["HealthCheckTemplateId"] = request.healthCheckTemplateId();
  }

  if (!!request.hasHealthCheckTemplateName()) {
    query["HealthCheckTemplateName"] = request.healthCheckTemplateName();
  }

  if (!!request.hasHealthCheckTimeout()) {
    query["HealthCheckTimeout"] = request.healthCheckTimeout();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.healthyThreshold();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.unhealthyThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateHealthCheckTemplateAttribute"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHealthCheckTemplateAttributeResponse>();
}

/**
 * @summary Modifies the attributes, such as the name and protocol, of a health check template.
 *
 * @param request UpdateHealthCheckTemplateAttributeRequest
 * @return UpdateHealthCheckTemplateAttributeResponse
 */
UpdateHealthCheckTemplateAttributeResponse Client::updateHealthCheckTemplateAttribute(const UpdateHealthCheckTemplateAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHealthCheckTemplateAttributeWithOptions(request, runtime);
}

/**
 * @summary Updates the attributes of a listener, such as the name and the default action.
 *
 * @description **UpdateListenerAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) operation to query the status of the task.
 * *   If a listener is in the **Configuring** state, the configuration of the listener is being modified.
 * *   If a listener is in the **Running** state, the configuration of the listener is modified.
 *
 * @param request UpdateListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateListenerAttributeResponse
 */
UpdateListenerAttributeResponse Client::updateListenerAttributeWithOptions(const UpdateListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaCertificates()) {
    query["CaCertificates"] = request.caCertificates();
  }

  if (!!request.hasCaEnabled()) {
    query["CaEnabled"] = request.caEnabled();
  }

  if (!!request.hasCertificates()) {
    query["Certificates"] = request.certificates();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDefaultActions()) {
    query["DefaultActions"] = request.defaultActions();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasGzipEnabled()) {
    query["GzipEnabled"] = request.gzipEnabled();
  }

  if (!!request.hasHttp2Enabled()) {
    query["Http2Enabled"] = request.http2Enabled();
  }

  if (!!request.hasIdleTimeout()) {
    query["IdleTimeout"] = request.idleTimeout();
  }

  if (!!request.hasListenerDescription()) {
    query["ListenerDescription"] = request.listenerDescription();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.listenerId();
  }

  if (!!request.hasQuicConfig()) {
    query["QuicConfig"] = request.quicConfig();
  }

  if (!!request.hasRequestTimeout()) {
    query["RequestTimeout"] = request.requestTimeout();
  }

  if (!!request.hasSecurityPolicyId()) {
    query["SecurityPolicyId"] = request.securityPolicyId();
  }

  if (!!request.hasXForwardedForConfig()) {
    query["XForwardedForConfig"] = request.XForwardedForConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateListenerAttribute"},
    {"version" , "2020-06-16"},
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
 * @summary Updates the attributes of a listener, such as the name and the default action.
 *
 * @description **UpdateListenerAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) operation to query the status of the task.
 * *   If a listener is in the **Configuring** state, the configuration of the listener is being modified.
 * *   If a listener is in the **Running** state, the configuration of the listener is modified.
 *
 * @param request UpdateListenerAttributeRequest
 * @return UpdateListenerAttributeResponse
 */
UpdateListenerAttributeResponse Client::updateListenerAttribute(const UpdateListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Updates the log configuration of a listener, such as the access log configuration.
 *
 * @description **UpdateListenerLogConfig** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) to query the status of the task:
 * *   If a listener is in the **Configuring** state, the log configuration of the listener is being modified.
 * *   If a listener is in the **Running** state, the log configuration of the listener is modified.
 * > You can update the log configuration of a listener only after you enable the access log feature.
 *
 * @param request UpdateListenerLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateListenerLogConfigResponse
 */
UpdateListenerLogConfigResponse Client::updateListenerLogConfigWithOptions(const UpdateListenerLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessLogRecordCustomizedHeadersEnabled()) {
    query["AccessLogRecordCustomizedHeadersEnabled"] = request.accessLogRecordCustomizedHeadersEnabled();
  }

  if (!!request.hasAccessLogTracingConfig()) {
    query["AccessLogTracingConfig"] = request.accessLogTracingConfig();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.listenerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateListenerLogConfig"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateListenerLogConfigResponse>();
}

/**
 * @summary Updates the log configuration of a listener, such as the access log configuration.
 *
 * @description **UpdateListenerLogConfig** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) to query the status of the task:
 * *   If a listener is in the **Configuring** state, the log configuration of the listener is being modified.
 * *   If a listener is in the **Running** state, the log configuration of the listener is modified.
 * > You can update the log configuration of a listener only after you enable the access log feature.
 *
 * @param request UpdateListenerLogConfigRequest
 * @return UpdateListenerLogConfigResponse
 */
UpdateListenerLogConfigResponse Client::updateListenerLogConfig(const UpdateListenerLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateListenerLogConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the network type of an Application Load Balancer (ALB) instance.
 *
 * @description ## Prerequisites
 * *   An ALB instance is created. For more information about how to create an ALB instance, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html).
 * *   If you want to change the network type from internal-facing to Internet-facing, you must first create an elastic IP address (EIP). For more information, see [AllocateEipAddress](https://help.aliyun.com/document_detail/120192.html).
 * ## Usage notes
 * **UpdateLoadBalancerAddressTypeConfig** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of the task.
 * *   If an ALB instance is in the **Configuring** state, the network type is being changed.
 * *   If an ALB instance is in the **Active** state, the network type has been changed.
 *
 * @param request UpdateLoadBalancerAddressTypeConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoadBalancerAddressTypeConfigResponse
 */
UpdateLoadBalancerAddressTypeConfigResponse Client::updateLoadBalancerAddressTypeConfigWithOptions(const UpdateLoadBalancerAddressTypeConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressType()) {
    query["AddressType"] = request.addressType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasZoneMappings()) {
    query["ZoneMappings"] = request.zoneMappings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLoadBalancerAddressTypeConfig"},
    {"version" , "2020-06-16"},
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
 * @summary Modifies the network type of an Application Load Balancer (ALB) instance.
 *
 * @description ## Prerequisites
 * *   An ALB instance is created. For more information about how to create an ALB instance, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html).
 * *   If you want to change the network type from internal-facing to Internet-facing, you must first create an elastic IP address (EIP). For more information, see [AllocateEipAddress](https://help.aliyun.com/document_detail/120192.html).
 * ## Usage notes
 * **UpdateLoadBalancerAddressTypeConfig** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of the task.
 * *   If an ALB instance is in the **Configuring** state, the network type is being changed.
 * *   If an ALB instance is in the **Active** state, the network type has been changed.
 *
 * @param request UpdateLoadBalancerAddressTypeConfigRequest
 * @return UpdateLoadBalancerAddressTypeConfigResponse
 */
UpdateLoadBalancerAddressTypeConfigResponse Client::updateLoadBalancerAddressTypeConfig(const UpdateLoadBalancerAddressTypeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoadBalancerAddressTypeConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of an Application Load Balancer (ALB) instance, such as the name and the configuration read-only mode.
 *
 * @description **UpdateLoadBalancerAttribute** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
 * *   If the ALB instance is in the **Configuring** state, the ALB instance is being modified.
 * *   If the ALB instance is in the **Active** state, the ALB instance is modified.
 *
 * @param request UpdateLoadBalancerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoadBalancerAttributeResponse
 */
UpdateLoadBalancerAttributeResponse Client::updateLoadBalancerAttributeWithOptions(const UpdateLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasLoadBalancerName()) {
    query["LoadBalancerName"] = request.loadBalancerName();
  }

  if (!!request.hasModificationProtectionConfig()) {
    query["ModificationProtectionConfig"] = request.modificationProtectionConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLoadBalancerAttribute"},
    {"version" , "2020-06-16"},
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
 * @summary Modifies the attributes of an Application Load Balancer (ALB) instance, such as the name and the configuration read-only mode.
 *
 * @description **UpdateLoadBalancerAttribute** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
 * *   If the ALB instance is in the **Configuring** state, the ALB instance is being modified.
 * *   If the ALB instance is in the **Active** state, the ALB instance is modified.
 *
 * @param request UpdateLoadBalancerAttributeRequest
 * @return UpdateLoadBalancerAttributeResponse
 */
UpdateLoadBalancerAttributeResponse Client::updateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoadBalancerAttributeWithOptions(request, runtime);
}

/**
 * @summary Changes the edition of an Application Load Balancer (ALB) instance.
 *
 * @description *   You can only upgrade a basic ALB instance to a standard ALB instance or a WAF-enabled ALB instance. You cannot downgrade a standard ALB instance or a WAF-enabled ALB instance to a basic ALB instance. For more information, see [Upgrade an ALB instance](https://help.aliyun.com/document_detail/214654.html).
 * *   **UpdateLoadBalancerEdition** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of an ALB instance.
 *     *   If the ALB instance is in the **Configuring** state, the edition of the ALB instance is being modified.
 *     *   If the ALB instance is in the **Active** state, the edition of the ALB instance is modified.
 *
 * @param request UpdateLoadBalancerEditionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoadBalancerEditionResponse
 */
UpdateLoadBalancerEditionResponse Client::updateLoadBalancerEditionWithOptions(const UpdateLoadBalancerEditionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerEdition()) {
    query["LoadBalancerEdition"] = request.loadBalancerEdition();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLoadBalancerEdition"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLoadBalancerEditionResponse>();
}

/**
 * @summary Changes the edition of an Application Load Balancer (ALB) instance.
 *
 * @description *   You can only upgrade a basic ALB instance to a standard ALB instance or a WAF-enabled ALB instance. You cannot downgrade a standard ALB instance or a WAF-enabled ALB instance to a basic ALB instance. For more information, see [Upgrade an ALB instance](https://help.aliyun.com/document_detail/214654.html).
 * *   **UpdateLoadBalancerEdition** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of an ALB instance.
 *     *   If the ALB instance is in the **Configuring** state, the edition of the ALB instance is being modified.
 *     *   If the ALB instance is in the **Active** state, the edition of the ALB instance is modified.
 *
 * @param request UpdateLoadBalancerEditionRequest
 * @return UpdateLoadBalancerEditionResponse
 */
UpdateLoadBalancerEditionResponse Client::updateLoadBalancerEdition(const UpdateLoadBalancerEditionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoadBalancerEditionWithOptions(request, runtime);
}

/**
 * @summary Modifies the zones of an Application Load Balancer (ALB) instance.
 *
 * @description **UpdateLoadBalancerZones** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
 * *   If an ALB instance is in the **Configuring** state, the zones are being modified.
 * *   If an ALB instance is in the **Active** state, the zones are modified.
 * > You may be charged after you call UpdateLoadBalancerZones.
 *
 * @param request UpdateLoadBalancerZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoadBalancerZonesResponse
 */
UpdateLoadBalancerZonesResponse Client::updateLoadBalancerZonesWithOptions(const UpdateLoadBalancerZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasZoneMappings()) {
    query["ZoneMappings"] = request.zoneMappings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLoadBalancerZones"},
    {"version" , "2020-06-16"},
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
 * @summary Modifies the zones of an Application Load Balancer (ALB) instance.
 *
 * @description **UpdateLoadBalancerZones** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
 * *   If an ALB instance is in the **Configuring** state, the zones are being modified.
 * *   If an ALB instance is in the **Active** state, the zones are modified.
 * > You may be charged after you call UpdateLoadBalancerZones.
 *
 * @param request UpdateLoadBalancerZonesRequest
 * @return UpdateLoadBalancerZonesResponse
 */
UpdateLoadBalancerZonesResponse Client::updateLoadBalancerZones(const UpdateLoadBalancerZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoadBalancerZonesWithOptions(request, runtime);
}

/**
 * @summary Updates a forwarding rule, such as the match condition, action, and name.
 *
 * @description *   **UpdateRuleAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of a forwarding rule:
 *     *   If a forwarding rule is in the **Configuring** state, the forwarding rule is being updated.
 *     *   If a forwarding rule is in the **Available** state, the forwarding rule is updated.
 * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. Take note of the following limits on the number of conditions and the number of actions in each forwarding rule:
 *     *   Number of conditions: You can specify at most 5 for a basic Application Load Balancer (ALB) instance, at most 10 for a standard ALB instance, and at most 10 for a WAF-enabled ALB instance.
 *     *   Number of actions: You can specify at most 3 for a basic ALB instance, at most 5 for a standard ALB instance, and at most 5 for a WAF-enabled ALB instance.
 *
 * @param request UpdateRuleAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRuleAttributeResponse
 */
UpdateRuleAttributeResponse Client::updateRuleAttributeWithOptions(const UpdateRuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasRuleActions()) {
    query["RuleActions"] = request.ruleActions();
  }

  if (!!request.hasRuleConditions()) {
    query["RuleConditions"] = request.ruleConditions();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRuleAttribute"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRuleAttributeResponse>();
}

/**
 * @summary Updates a forwarding rule, such as the match condition, action, and name.
 *
 * @description *   **UpdateRuleAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of a forwarding rule:
 *     *   If a forwarding rule is in the **Configuring** state, the forwarding rule is being updated.
 *     *   If a forwarding rule is in the **Available** state, the forwarding rule is updated.
 * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. Take note of the following limits on the number of conditions and the number of actions in each forwarding rule:
 *     *   Number of conditions: You can specify at most 5 for a basic Application Load Balancer (ALB) instance, at most 10 for a standard ALB instance, and at most 10 for a WAF-enabled ALB instance.
 *     *   Number of actions: You can specify at most 3 for a basic ALB instance, at most 5 for a standard ALB instance, and at most 5 for a WAF-enabled ALB instance.
 *
 * @param request UpdateRuleAttributeRequest
 * @return UpdateRuleAttributeResponse
 */
UpdateRuleAttributeResponse Client::updateRuleAttribute(const UpdateRuleAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRuleAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of forwarding rules.
 *
 * @description **UpdateRulesAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of the task.
 * *   If a forwarding rule is in the **Configuring** state, the forwarding rule is being updated.
 * *   If a forwarding rule is in the **Available** state, the forwarding rule is updated.
 * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. Take note of the following limits on the maximum number of conditions and the maximum number of actions in each forwarding rule:
 *     *   Limits on conditions: 5 for a basic Application Load Balancer (ALB) instance, 10 for a standard ALB instance, and 10 for a WAF-enabled ALB instance.
 *     *   Limits on actions: 3 for a basic ALB instance, 5 for a standard ALB instance, and 5 for a WAF-enabled ALB instance.
 *
 * @param request UpdateRulesAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRulesAttributeResponse
 */
UpdateRulesAttributeResponse Client::updateRulesAttributeWithOptions(const UpdateRulesAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  json body = {};
  json bodyFlat = {};
  if (!!request.hasRules()) {
    bodyFlat["Rules"] = request.rules();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRulesAttribute"},
    {"version" , "2020-06-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRulesAttributeResponse>();
}

/**
 * @summary Modifies the attributes of forwarding rules.
 *
 * @description **UpdateRulesAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of the task.
 * *   If a forwarding rule is in the **Configuring** state, the forwarding rule is being updated.
 * *   If a forwarding rule is in the **Available** state, the forwarding rule is updated.
 * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. Take note of the following limits on the maximum number of conditions and the maximum number of actions in each forwarding rule:
 *     *   Limits on conditions: 5 for a basic Application Load Balancer (ALB) instance, 10 for a standard ALB instance, and 10 for a WAF-enabled ALB instance.
 *     *   Limits on actions: 3 for a basic ALB instance, 5 for a standard ALB instance, and 5 for a WAF-enabled ALB instance.
 *
 * @param request UpdateRulesAttributeRequest
 * @return UpdateRulesAttributeResponse
 */
UpdateRulesAttributeResponse Client::updateRulesAttribute(const UpdateRulesAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRulesAttributeWithOptions(request, runtime);
}

/**
 * @summary Updates the attributes of a security policy, such as the TLS protocol version and the supported cipher suites.
 *
 * @description ##
 * **UpdateSecurityPolicyAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListSecurityPolicies](https://help.aliyun.com/document_detail/213609.html) to query the status of the task.
 * *   If a security policy is in the **Configuring** state, the security policy is being updated.
 * *   If a security policy is in the **Available** state, the security policy is updated.
 *
 * @param request UpdateSecurityPolicyAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSecurityPolicyAttributeResponse
 */
UpdateSecurityPolicyAttributeResponse Client::updateSecurityPolicyAttributeWithOptions(const UpdateSecurityPolicyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCiphers()) {
    query["Ciphers"] = request.ciphers();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasSecurityPolicyId()) {
    query["SecurityPolicyId"] = request.securityPolicyId();
  }

  if (!!request.hasSecurityPolicyName()) {
    query["SecurityPolicyName"] = request.securityPolicyName();
  }

  if (!!request.hasTLSVersions()) {
    query["TLSVersions"] = request.TLSVersions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSecurityPolicyAttribute"},
    {"version" , "2020-06-16"},
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
 * @summary Updates the attributes of a security policy, such as the TLS protocol version and the supported cipher suites.
 *
 * @description ##
 * **UpdateSecurityPolicyAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListSecurityPolicies](https://help.aliyun.com/document_detail/213609.html) to query the status of the task.
 * *   If a security policy is in the **Configuring** state, the security policy is being updated.
 * *   If a security policy is in the **Available** state, the security policy is updated.
 *
 * @param request UpdateSecurityPolicyAttributeRequest
 * @return UpdateSecurityPolicyAttributeResponse
 */
UpdateSecurityPolicyAttributeResponse Client::updateSecurityPolicyAttribute(const UpdateSecurityPolicyAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSecurityPolicyAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a server group, such as health checks, session persistence, server group names, routing algorithms, and protocols.
 *
 * @description ## Description
 * **UpdateServerGroupAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group:
 * *   If a server group is in the **Configuring** state, the configuration of the server group is being modified.
 * *   If a server group is in the **Available** state, the configuration of the server group is modified.
 *
 * @param request UpdateServerGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServerGroupAttributeResponse
 */
UpdateServerGroupAttributeResponse Client::updateServerGroupAttributeWithOptions(const UpdateServerGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConnectionDrainConfig()) {
    query["ConnectionDrainConfig"] = request.connectionDrainConfig();
  }

  if (!!request.hasCrossZoneEnabled()) {
    query["CrossZoneEnabled"] = request.crossZoneEnabled();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasHealthCheckConfig()) {
    query["HealthCheckConfig"] = request.healthCheckConfig();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.scheduler();
  }

  if (!!request.hasServerGroupId()) {
    query["ServerGroupId"] = request.serverGroupId();
  }

  if (!!request.hasServerGroupName()) {
    query["ServerGroupName"] = request.serverGroupName();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasSlowStartConfig()) {
    query["SlowStartConfig"] = request.slowStartConfig();
  }

  if (!!request.hasStickySessionConfig()) {
    query["StickySessionConfig"] = request.stickySessionConfig();
  }

  if (!!request.hasUchConfig()) {
    query["UchConfig"] = request.uchConfig();
  }

  if (!!request.hasUpstreamKeepaliveEnabled()) {
    query["UpstreamKeepaliveEnabled"] = request.upstreamKeepaliveEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateServerGroupAttribute"},
    {"version" , "2020-06-16"},
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
 * @summary Modifies the configurations of a server group, such as health checks, session persistence, server group names, routing algorithms, and protocols.
 *
 * @description ## Description
 * **UpdateServerGroupAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group:
 * *   If a server group is in the **Configuring** state, the configuration of the server group is being modified.
 * *   If a server group is in the **Available** state, the configuration of the server group is modified.
 *
 * @param request UpdateServerGroupAttributeRequest
 * @return UpdateServerGroupAttributeResponse
 */
UpdateServerGroupAttributeResponse Client::updateServerGroupAttribute(const UpdateServerGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServerGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations, such as the backend server weight and description, of a server group.
 *
 * @description **UpdateServerGroupServersAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
 * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group.
 *     *   If a server group is in the **Configuring** state, it indicates that the server group is being modified.
 *     *   If a server group is in the **Available** state, it indicates that the server group is running.
 * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/213628.html) operation to query the status of a backend server.
 *     *   If a backend server is in the **Configuring** state, it indicates that the backend server is being modified.
 *     *   If a backend server is in the **Available** state, it indicates that the backend server is running.
 *
 * @param request UpdateServerGroupServersAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServerGroupServersAttributeResponse
 */
UpdateServerGroupServersAttributeResponse Client::updateServerGroupServersAttributeWithOptions(const UpdateServerGroupServersAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasServerGroupId()) {
    query["ServerGroupId"] = request.serverGroupId();
  }

  if (!!request.hasServers()) {
    query["Servers"] = request.servers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateServerGroupServersAttribute"},
    {"version" , "2020-06-16"},
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
 * @summary Modifies the configurations, such as the backend server weight and description, of a server group.
 *
 * @description **UpdateServerGroupServersAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
 * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group.
 *     *   If a server group is in the **Configuring** state, it indicates that the server group is being modified.
 *     *   If a server group is in the **Available** state, it indicates that the server group is running.
 * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/213628.html) operation to query the status of a backend server.
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
} // namespace Alb20200616