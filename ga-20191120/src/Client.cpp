#include <darabonba/Core.hpp>
#include <alibabacloud/Ga20191120.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Ga20191120::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Ga20191120
{

AlibabaCloud::Ga20191120::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("ga", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds IP addresses or CIDR blocks to an access control list (ACL). You can add IP addresses or CIDR blocks to an ACL and configure a whitelist or blacklist to allow or deny requests from clients.
 *
 * @description *   **AddEntriesToAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetAcl](https://help.aliyun.com/document_detail/258292.html) or [ListAcls](https://help.aliyun.com/document_detail/258291.html) operation to query the status of the ACL to which you want to add IP entries.
 *     *   If the ACL is in the **configuring** state, it indicates that IP entries are added to the ACL. In this case, you can perform only query operations.
 *     *   If the ACL is in the **active** state, it indicates that IP entries are added to the ACL.
 * *   The **AddEntriesToAcl** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request AddEntriesToAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddEntriesToAclResponse
 */
AddEntriesToAclResponse Client::addEntriesToAclWithOptions(const AddEntriesToAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclEntries()) {
    query["AclEntries"] = request.getAclEntries();
  }

  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddEntriesToAcl"},
    {"version" , "2019-11-20"},
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
 * @summary Adds IP addresses or CIDR blocks to an access control list (ACL). You can add IP addresses or CIDR blocks to an ACL and configure a whitelist or blacklist to allow or deny requests from clients.
 *
 * @description *   **AddEntriesToAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetAcl](https://help.aliyun.com/document_detail/258292.html) or [ListAcls](https://help.aliyun.com/document_detail/258291.html) operation to query the status of the ACL to which you want to add IP entries.
 *     *   If the ACL is in the **configuring** state, it indicates that IP entries are added to the ACL. In this case, you can perform only query operations.
 *     *   If the ACL is in the **active** state, it indicates that IP entries are added to the ACL.
 * *   The **AddEntriesToAcl** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request AddEntriesToAclRequest
 * @return AddEntriesToAclResponse
 */
AddEntriesToAclResponse Client::addEntriesToAcl(const AddEntriesToAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addEntriesToAclWithOptions(request, runtime);
}

/**
 * @summary Associates access control lists (ACLs) with a listener.
 *
 * @description ## Description
 * *   **AssociateAclsWithListener** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the state of the listener with which you attempt to associate an ACL.
 *     *   If the listener is in the **updating** state, it indicates that the ACL is being associated. In this case, you can perform only query operations.
 *     *   If the listener is in the **active** state, it indicates that the ACL is associated.
 * *   The **AssociateAclsWithListener** operation cannot be called repeatedly for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request AssociateAclsWithListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateAclsWithListenerResponse
 */
AssociateAclsWithListenerResponse Client::associateAclsWithListenerWithOptions(const AssociateAclsWithListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclIds()) {
    query["AclIds"] = request.getAclIds();
  }

  if (!!request.hasAclType()) {
    query["AclType"] = request.getAclType();
  }

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
    {"action" , "AssociateAclsWithListener"},
    {"version" , "2019-11-20"},
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
 * @description ## Description
 * *   **AssociateAclsWithListener** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the state of the listener with which you attempt to associate an ACL.
 *     *   If the listener is in the **updating** state, it indicates that the ACL is being associated. In this case, you can perform only query operations.
 *     *   If the listener is in the **active** state, it indicates that the ACL is associated.
 * *   The **AssociateAclsWithListener** operation cannot be called repeatedly for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request AssociateAclsWithListenerRequest
 * @return AssociateAclsWithListenerResponse
 */
AssociateAclsWithListenerResponse Client::associateAclsWithListener(const AssociateAclsWithListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateAclsWithListenerWithOptions(request, runtime);
}

/**
 * @summary Associates additional certificates with an HTTPS listener. You can associate multiple certificates with an HTTPS listener and configure virtual endpoint groups and forwarding rules to accelerate access to multiple HTTPS-capable domain names.
 *
 * @description *   Only HTTPS listeners can be associated with additional certificates.
 * *   **AssociateAdditionalCertificatesWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the status of the listener with which you want to associate an additional certificate.
 *     *   If the listener is in the **updating** state, it indicates that the additional certificate is being associated. In this case, you can perform only query operations.
 *     *   If the listener is in the **active** state, it indicates that the additional certificate is associated.
 * *   The **AssociateAdditionalCertificatesWithListener** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request AssociateAdditionalCertificatesWithListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateAdditionalCertificatesWithListenerResponse
 */
AssociateAdditionalCertificatesWithListenerResponse Client::associateAdditionalCertificatesWithListenerWithOptions(const AssociateAdditionalCertificatesWithListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasCertificates()) {
    query["Certificates"] = request.getCertificates();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
    {"action" , "AssociateAdditionalCertificatesWithListener"},
    {"version" , "2019-11-20"},
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
 * @summary Associates additional certificates with an HTTPS listener. You can associate multiple certificates with an HTTPS listener and configure virtual endpoint groups and forwarding rules to accelerate access to multiple HTTPS-capable domain names.
 *
 * @description *   Only HTTPS listeners can be associated with additional certificates.
 * *   **AssociateAdditionalCertificatesWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the status of the listener with which you want to associate an additional certificate.
 *     *   If the listener is in the **updating** state, it indicates that the additional certificate is being associated. In this case, you can perform only query operations.
 *     *   If the listener is in the **active** state, it indicates that the additional certificate is associated.
 * *   The **AssociateAdditionalCertificatesWithListener** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request AssociateAdditionalCertificatesWithListenerRequest
 * @return AssociateAdditionalCertificatesWithListenerResponse
 */
AssociateAdditionalCertificatesWithListenerResponse Client::associateAdditionalCertificatesWithListener(const AssociateAdditionalCertificatesWithListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateAdditionalCertificatesWithListenerWithOptions(request, runtime);
}

/**
 * @summary GA集成云产品
 *
 * @param request AssociateResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateResourcesResponse
 */
AssociateResourcesResponse Client::associateResourcesWithOptions(const AssociateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasAssociatedMode()) {
    query["AssociatedMode"] = request.getAssociatedMode();
  }

  if (!!request.hasAssociatedResourceId()) {
    query["AssociatedResourceId"] = request.getAssociatedResourceId();
  }

  if (!!request.hasAssociatedResourceRegionId()) {
    query["AssociatedResourceRegionId"] = request.getAssociatedResourceRegionId();
  }

  if (!!request.hasAssociatedResourceType()) {
    query["AssociatedResourceType"] = request.getAssociatedResourceType();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateResources"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateResourcesResponse>();
}

/**
 * @summary GA集成云产品
 *
 * @param request AssociateResourcesRequest
 * @return AssociateResourcesResponse
 */
AssociateResourcesResponse Client::associateResources(const AssociateResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateResourcesWithOptions(request, runtime);
}

/**
 * @summary Associates an Anti-DDoS Pro or Anti-DDoS Premium instance with a Global Accelerator (GA) instance.
 *
 * @description When you call this operation, take note of the following items:
 * *   **AttachDdosToAccelerator** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) or [ListAccelerators](https://help.aliyun.com/document_detail/153236.html) operation to query the status of the GA instance.
 *     *   If the GA instance is in the **configuring** state, the Anti-DDoS Pro or Anti-DDoS Premium instance is being associated with the GA instance. In this case, you can perform only query operations.
 *     *   If the GA instance is in the **active** state, the Anti-DDoS Pro or Anti-DDoS Premium instance is associated with the GA instance.
 * *   You cannot repeatedly call the **AttachDdosToAccelerator** operation for the same GA instance within a specific period of time.
 *
 * @param request AttachDdosToAcceleratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachDdosToAcceleratorResponse
 */
AttachDdosToAcceleratorResponse Client::attachDdosToAcceleratorWithOptions(const AttachDdosToAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasDdosConfigList()) {
    query["DdosConfigList"] = request.getDdosConfigList();
  }

  if (!!request.hasDdosId()) {
    query["DdosId"] = request.getDdosId();
  }

  if (!!request.hasDdosRegionId()) {
    query["DdosRegionId"] = request.getDdosRegionId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachDdosToAccelerator"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachDdosToAcceleratorResponse>();
}

/**
 * @summary Associates an Anti-DDoS Pro or Anti-DDoS Premium instance with a Global Accelerator (GA) instance.
 *
 * @description When you call this operation, take note of the following items:
 * *   **AttachDdosToAccelerator** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) or [ListAccelerators](https://help.aliyun.com/document_detail/153236.html) operation to query the status of the GA instance.
 *     *   If the GA instance is in the **configuring** state, the Anti-DDoS Pro or Anti-DDoS Premium instance is being associated with the GA instance. In this case, you can perform only query operations.
 *     *   If the GA instance is in the **active** state, the Anti-DDoS Pro or Anti-DDoS Premium instance is associated with the GA instance.
 * *   You cannot repeatedly call the **AttachDdosToAccelerator** operation for the same GA instance within a specific period of time.
 *
 * @param request AttachDdosToAcceleratorRequest
 * @return AttachDdosToAcceleratorResponse
 */
AttachDdosToAcceleratorResponse Client::attachDdosToAccelerator(const AttachDdosToAcceleratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachDdosToAcceleratorWithOptions(request, runtime);
}

/**
 * @summary Associates a Log Service Logstore with an endpoint group.
 *
 * @description *   **AttachLogStoreToEndpointGroup** is an asynchronous operation. After you send a request, the system returns a request ID, but this operation is still being performed in the system background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the state of an endpoint group.
 *     *   If the endpoint group is in the **updating** state, it indicates that a Logstore is being associated with the group. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, it indicates that a Logstore is associated with the group.
 * *   The **AttachLogStoreToEndpointGroup** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request AttachLogStoreToEndpointGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachLogStoreToEndpointGroupResponse
 */
AttachLogStoreToEndpointGroupResponse Client::attachLogStoreToEndpointGroupWithOptions(const AttachLogStoreToEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasAccessLogRecordCustomizedHeaderList()) {
    query["AccessLogRecordCustomizedHeaderList"] = request.getAccessLogRecordCustomizedHeaderList();
  }

  if (!!request.hasAccessLogRecordCustomizedHeadersEnabled()) {
    query["AccessLogRecordCustomizedHeadersEnabled"] = request.getAccessLogRecordCustomizedHeadersEnabled();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointGroupIds()) {
    query["EndpointGroupIds"] = request.getEndpointGroupIds();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSlsLogStoreName()) {
    query["SlsLogStoreName"] = request.getSlsLogStoreName();
  }

  if (!!request.hasSlsProjectName()) {
    query["SlsProjectName"] = request.getSlsProjectName();
  }

  if (!!request.hasSlsRegionId()) {
    query["SlsRegionId"] = request.getSlsRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachLogStoreToEndpointGroup"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachLogStoreToEndpointGroupResponse>();
}

/**
 * @summary Associates a Log Service Logstore with an endpoint group.
 *
 * @description *   **AttachLogStoreToEndpointGroup** is an asynchronous operation. After you send a request, the system returns a request ID, but this operation is still being performed in the system background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the state of an endpoint group.
 *     *   If the endpoint group is in the **updating** state, it indicates that a Logstore is being associated with the group. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, it indicates that a Logstore is associated with the group.
 * *   The **AttachLogStoreToEndpointGroup** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request AttachLogStoreToEndpointGroupRequest
 * @return AttachLogStoreToEndpointGroupResponse
 */
AttachLogStoreToEndpointGroupResponse Client::attachLogStoreToEndpointGroup(const AttachLogStoreToEndpointGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachLogStoreToEndpointGroupWithOptions(request, runtime);
}

/**
 * @summary Associates a bandwidth plan with a Global Accelerator (GA) instance.
 *
 * @description *   **BandwidthPackageAddAccelerator** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query the status of the bandwidth plan that you want to associate.
 *     *   If the bandwidth plan is in the **binding** state, it indicates that the bandwidth plan is being associated. In this case, you can perform only query operations.
 *     *   If the bandwidth plan is in the **active** state, it indicates that the bandwidth plan is associated.
 * *   The **BandwidthPackageAddAccelerator** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request BandwidthPackageAddAcceleratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BandwidthPackageAddAcceleratorResponse
 */
BandwidthPackageAddAcceleratorResponse Client::bandwidthPackageAddAcceleratorWithOptions(const BandwidthPackageAddAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasBandwidthPackageId()) {
    query["BandwidthPackageId"] = request.getBandwidthPackageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BandwidthPackageAddAccelerator"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BandwidthPackageAddAcceleratorResponse>();
}

/**
 * @summary Associates a bandwidth plan with a Global Accelerator (GA) instance.
 *
 * @description *   **BandwidthPackageAddAccelerator** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query the status of the bandwidth plan that you want to associate.
 *     *   If the bandwidth plan is in the **binding** state, it indicates that the bandwidth plan is being associated. In this case, you can perform only query operations.
 *     *   If the bandwidth plan is in the **active** state, it indicates that the bandwidth plan is associated.
 * *   The **BandwidthPackageAddAccelerator** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request BandwidthPackageAddAcceleratorRequest
 * @return BandwidthPackageAddAcceleratorResponse
 */
BandwidthPackageAddAcceleratorResponse Client::bandwidthPackageAddAccelerator(const BandwidthPackageAddAcceleratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bandwidthPackageAddAcceleratorWithOptions(request, runtime);
}

/**
 * @summary Disassociates a bandwidth plan from a Global Accelerator (GA) instance.
 *
 * @description *   **BandwidthPackageRemoveAccelerator** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query the status of the bandwidth plan that you attempt to disassociate.
 *     *   If the bandwidth plan is in the **unbinding** state, it indicates that the bandwidth plan is being disassociated. In this case, you can perform only query operations.
 *     *   If the bandwidth plan is in the **active** state, it indicates that the bandwidth plan is disassociated.
 * *   The **BandwidthPackageRemoveAccelerator** cannot be called repeatedly for the same GA instance.
 *
 * @param request BandwidthPackageRemoveAcceleratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BandwidthPackageRemoveAcceleratorResponse
 */
BandwidthPackageRemoveAcceleratorResponse Client::bandwidthPackageRemoveAcceleratorWithOptions(const BandwidthPackageRemoveAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasBandwidthPackageId()) {
    query["BandwidthPackageId"] = request.getBandwidthPackageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BandwidthPackageRemoveAccelerator"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BandwidthPackageRemoveAcceleratorResponse>();
}

/**
 * @summary Disassociates a bandwidth plan from a Global Accelerator (GA) instance.
 *
 * @description *   **BandwidthPackageRemoveAccelerator** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query the status of the bandwidth plan that you attempt to disassociate.
 *     *   If the bandwidth plan is in the **unbinding** state, it indicates that the bandwidth plan is being disassociated. In this case, you can perform only query operations.
 *     *   If the bandwidth plan is in the **active** state, it indicates that the bandwidth plan is disassociated.
 * *   The **BandwidthPackageRemoveAccelerator** cannot be called repeatedly for the same GA instance.
 *
 * @param request BandwidthPackageRemoveAcceleratorRequest
 * @return BandwidthPackageRemoveAcceleratorResponse
 */
BandwidthPackageRemoveAcceleratorResponse Client::bandwidthPackageRemoveAccelerator(const BandwidthPackageRemoveAcceleratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bandwidthPackageRemoveAcceleratorWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group to which a Global Accelerator (GA) resource belongs.
 *
 * @description The **ChangeResourceGroup** operation cannot be repeatedly called for the same GA instance within a specific period of time.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Changes the resource group to which a Global Accelerator (GA) resource belongs.
 *
 * @description The **ChangeResourceGroup** operation cannot be repeatedly called for the same GA instance within a specific period of time.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Configures latency monitoring for an endpoint.
 *
 * @description *   **ConfigEndpointProbe** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the status of the endpoint group to which an endpoint belongs and determine whether latency monitoring is configured for the endpoint.
 *     *   If the endpoint group is in the **updating** state, it indicates that latency monitoring is being configured for the endpoint. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, it indicates that latency monitoring is configured for the endpoint.
 * *   The **ConfigEndpointProbe** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request ConfigEndpointProbeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigEndpointProbeResponse
 */
ConfigEndpointProbeResponse Client::configEndpointProbeWithOptions(const ConfigEndpointProbeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasEndpoint()) {
    query["Endpoint"] = request.getEndpoint();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.getEndpointType();
  }

  if (!!request.hasProbePort()) {
    query["ProbePort"] = request.getProbePort();
  }

  if (!!request.hasProbeProtocol()) {
    query["ProbeProtocol"] = request.getProbeProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigEndpointProbe"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigEndpointProbeResponse>();
}

/**
 * @summary Configures latency monitoring for an endpoint.
 *
 * @description *   **ConfigEndpointProbe** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the status of the endpoint group to which an endpoint belongs and determine whether latency monitoring is configured for the endpoint.
 *     *   If the endpoint group is in the **updating** state, it indicates that latency monitoring is being configured for the endpoint. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, it indicates that latency monitoring is configured for the endpoint.
 * *   The **ConfigEndpointProbe** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request ConfigEndpointProbeRequest
 * @return ConfigEndpointProbeResponse
 */
ConfigEndpointProbeResponse Client::configEndpointProbe(const ConfigEndpointProbeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configEndpointProbeWithOptions(request, runtime);
}

/**
 * @summary Creates a Global Accelerator (GA) instance. GA is a high-availability and high-performance network acceleration service for global users. By leveraging the high-quality BGP bandwidth and global network of Alibaba Cloud, GA allows service providers to deploy applications across regions and users to connect to the nearest access points for content delivery acceleration. This reduces network issues, such as network latency, network jitters, and packet loss.
 *
 * @description ## Description
 * **CreateAccelerator** is an asynchronous operation. After you send a request, the system returns the ID of a GA instance, but the operation is still being performed in the system background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the state of a GA instance.
 * *   If the GA instance is in the **init** state, it indicates that the GA instance is being created. In this case, you can perform only query operations.
 * *   If the GA instance is in the **active** state, it indicates that the GA instance is created.
 *
 * @param request CreateAcceleratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAcceleratorResponse
 */
CreateAcceleratorResponse Client::createAcceleratorWithOptions(const CreateAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewDuration()) {
    query["AutoRenewDuration"] = request.getAutoRenewDuration();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasBandwidthBillingType()) {
    query["BandwidthBillingType"] = request.getBandwidthBillingType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.getInstanceChargeType();
  }

  if (!!request.hasIpSetConfig()) {
    query["IpSetConfig"] = request.getIpSetConfig();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.getPromotionOptionNo();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSpec()) {
    query["Spec"] = request.getSpec();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccelerator"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAcceleratorResponse>();
}

/**
 * @summary Creates a Global Accelerator (GA) instance. GA is a high-availability and high-performance network acceleration service for global users. By leveraging the high-quality BGP bandwidth and global network of Alibaba Cloud, GA allows service providers to deploy applications across regions and users to connect to the nearest access points for content delivery acceleration. This reduces network issues, such as network latency, network jitters, and packet loss.
 *
 * @description ## Description
 * **CreateAccelerator** is an asynchronous operation. After you send a request, the system returns the ID of a GA instance, but the operation is still being performed in the system background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the state of a GA instance.
 * *   If the GA instance is in the **init** state, it indicates that the GA instance is being created. In this case, you can perform only query operations.
 * *   If the GA instance is in the **active** state, it indicates that the GA instance is created.
 *
 * @param request CreateAcceleratorRequest
 * @return CreateAcceleratorResponse
 */
CreateAcceleratorResponse Client::createAccelerator(const CreateAcceleratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAcceleratorWithOptions(request, runtime);
}

/**
 * @summary Creates an access control list (ACL).
 *
 * @description **CreateAcl** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [GetAcl](https://help.aliyun.com/document_detail/258292.html) or [ListAcls](https://help.aliyun.com/document_detail/258291.html) operation to query the state of an ACL.
 * *   If the ACL is in the **init** state, the ACL is being created. In this case, you can only perform only query operations.
 * *   If the ACL is in the **active** state, the ACL is created.
 *
 * @param request CreateAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAclResponse
 */
CreateAclResponse Client::createAclWithOptions(const CreateAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclEntries()) {
    query["AclEntries"] = request.getAclEntries();
  }

  if (!!request.hasAclName()) {
    query["AclName"] = request.getAclName();
  }

  if (!!request.hasAddressIPVersion()) {
    query["AddressIPVersion"] = request.getAddressIPVersion();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAcl"},
    {"version" , "2019-11-20"},
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
 * @summary Creates an access control list (ACL).
 *
 * @description **CreateAcl** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [GetAcl](https://help.aliyun.com/document_detail/258292.html) or [ListAcls](https://help.aliyun.com/document_detail/258291.html) operation to query the state of an ACL.
 * *   If the ACL is in the **init** state, the ACL is being created. In this case, you can only perform only query operations.
 * *   If the ACL is in the **active** state, the ACL is created.
 *
 * @param request CreateAclRequest
 * @return CreateAclResponse
 */
CreateAclResponse Client::createAcl(const CreateAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAclWithOptions(request, runtime);
}

/**
 * @summary Creates an origin probing task.
 *
 * @description You can call the **CreateApplicationMonitor** operation to create an origin probing task. An origin probing task monitors the network quality between a client and an origin server and checks the availability of the origin server.
 * Before you call this operation, take note of the following items:
 * *   You can create origin detection tasks only for subscription Standard Global Accelerator (GA) instances whose specification is Medium Ⅰ.
 * *   You cannot create an origin probe task for a UDP listener.
 * *   The service port of the URL or IP address that is probed must be within the listening port range.
 * *   **CreateApplicationMonitor** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeApplicationMonitor](https://help.aliyun.com/document_detail/408463.html) or [ListApplicationMonitor](https://help.aliyun.com/document_detail/408462.html) operation to query the status of the origin probing task.
 *     *   If the origin probing task is in the **init** state, it indicates that the task is being created. You can perform only query operations.
 *     *   If the origin probing task is in the **active** state, it indicates that the task is created.
 * *   The **CreateApplicationMonitor** operation cannot be called repeatedly for the same GA instance within a specific period of time.
 *
 * @param request CreateApplicationMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationMonitorResponse
 */
CreateApplicationMonitorResponse Client::createApplicationMonitorWithOptions(const CreateApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDetectEnable()) {
    query["DetectEnable"] = request.getDetectEnable();
  }

  if (!!request.hasDetectThreshold()) {
    query["DetectThreshold"] = request.getDetectThreshold();
  }

  if (!!request.hasDetectTimes()) {
    query["DetectTimes"] = request.getDetectTimes();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasOptionsJson()) {
    query["OptionsJson"] = request.getOptionsJson();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.getSilenceTime();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplicationMonitor"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationMonitorResponse>();
}

/**
 * @summary Creates an origin probing task.
 *
 * @description You can call the **CreateApplicationMonitor** operation to create an origin probing task. An origin probing task monitors the network quality between a client and an origin server and checks the availability of the origin server.
 * Before you call this operation, take note of the following items:
 * *   You can create origin detection tasks only for subscription Standard Global Accelerator (GA) instances whose specification is Medium Ⅰ.
 * *   You cannot create an origin probe task for a UDP listener.
 * *   The service port of the URL or IP address that is probed must be within the listening port range.
 * *   **CreateApplicationMonitor** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeApplicationMonitor](https://help.aliyun.com/document_detail/408463.html) or [ListApplicationMonitor](https://help.aliyun.com/document_detail/408462.html) operation to query the status of the origin probing task.
 *     *   If the origin probing task is in the **init** state, it indicates that the task is being created. You can perform only query operations.
 *     *   If the origin probing task is in the **active** state, it indicates that the task is created.
 * *   The **CreateApplicationMonitor** operation cannot be called repeatedly for the same GA instance within a specific period of time.
 *
 * @param request CreateApplicationMonitorRequest
 * @return CreateApplicationMonitorResponse
 */
CreateApplicationMonitorResponse Client::createApplicationMonitor(const CreateApplicationMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationMonitorWithOptions(request, runtime);
}

/**
 * @summary Creates a bandwidth plan.
 *
 * @description To use Global Accelerator (GA) for acceleration, you must purchase a basic bandwidth plan. A basic bandwidth plan supports the following bandwidth types:
 * *   **Basic**: Both the default acceleration region and the default service region are in the Chinese mainland. The accelerated service is deployed on Alibaba Cloud.
 * *   **Enhanced**: Both the default acceleration region and the default service region are in the Chinese mainland. The accelerated service can be deployed on and off Alibaba Cloud.
 * *   **Premium**: Both the default acceleration region and the default service region are outside the Chinese mainland. The accelerated service can be deployed on and off Alibaba Cloud. If you want to accelerate data transfer for clients in the Chinese mainland, you must select China (Hong Kong) as the acceleration region.
 * When you call this operation, take note of the following items:
 * *   **CreateBandwidthPackage** is an asynchronous operation. After you send a request, the system returns the ID of a bandwidth plan, but the bandwidth plan is still being created in the system background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query the status of the bandwidth plan.
 *     *   If the bandwidth plan is in the **init** state, it indicates that the bandwidth plan is being created. In this case, you can perform only query operations.
 *     *   If the bandwidth plan is in the **active** state, it indicates that the bandwidth plan is created.
 * *   The **CreateBandwidthPackage** operation cannot be repeatedly called for the same GA instance within a specific period of time.
 *
 * @param request CreateBandwidthPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBandwidthPackageResponse
 */
CreateBandwidthPackageResponse Client::createBandwidthPackageWithOptions(const CreateBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewDuration()) {
    query["AutoRenewDuration"] = request.getAutoRenewDuration();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasBandwidthType()) {
    query["BandwidthType"] = request.getBandwidthType();
  }

  if (!!request.hasBillingType()) {
    query["BillingType"] = request.getBillingType();
  }

  if (!!request.hasCbnGeographicRegionIdA()) {
    query["CbnGeographicRegionIdA"] = request.getCbnGeographicRegionIdA();
  }

  if (!!request.hasCbnGeographicRegionIdB()) {
    query["CbnGeographicRegionIdB"] = request.getCbnGeographicRegionIdB();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.getPromotionOptionNo();
  }

  if (!!request.hasRatio()) {
    query["Ratio"] = request.getRatio();
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

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBandwidthPackage"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBandwidthPackageResponse>();
}

/**
 * @summary Creates a bandwidth plan.
 *
 * @description To use Global Accelerator (GA) for acceleration, you must purchase a basic bandwidth plan. A basic bandwidth plan supports the following bandwidth types:
 * *   **Basic**: Both the default acceleration region and the default service region are in the Chinese mainland. The accelerated service is deployed on Alibaba Cloud.
 * *   **Enhanced**: Both the default acceleration region and the default service region are in the Chinese mainland. The accelerated service can be deployed on and off Alibaba Cloud.
 * *   **Premium**: Both the default acceleration region and the default service region are outside the Chinese mainland. The accelerated service can be deployed on and off Alibaba Cloud. If you want to accelerate data transfer for clients in the Chinese mainland, you must select China (Hong Kong) as the acceleration region.
 * When you call this operation, take note of the following items:
 * *   **CreateBandwidthPackage** is an asynchronous operation. After you send a request, the system returns the ID of a bandwidth plan, but the bandwidth plan is still being created in the system background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query the status of the bandwidth plan.
 *     *   If the bandwidth plan is in the **init** state, it indicates that the bandwidth plan is being created. In this case, you can perform only query operations.
 *     *   If the bandwidth plan is in the **active** state, it indicates that the bandwidth plan is created.
 * *   The **CreateBandwidthPackage** operation cannot be repeatedly called for the same GA instance within a specific period of time.
 *
 * @param request CreateBandwidthPackageRequest
 * @return CreateBandwidthPackageResponse
 */
CreateBandwidthPackageResponse Client::createBandwidthPackage(const CreateBandwidthPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBandwidthPackageWithOptions(request, runtime);
}

/**
 * @summary Creates an accelerated IP address for a basic Global Accelerator (GA) instance.
 *
 * @description *   **CreateBasicAccelerateIp** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) operation to query the status of an accelerated IP address:
 *     *   If no status information is returned, the accelerated IP address is being created. In this case, you can perform only query operations.
 *     *   If the accelerated IP address is in the **active** state, the accelerated IP address is created.
 * *   The **CreateBasicAccelerateIp** operation cannot be repeatedly called for the same GA instance within a specific period of time.
 *
 * @param request CreateBasicAccelerateIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBasicAccelerateIpResponse
 */
CreateBasicAccelerateIpResponse Client::createBasicAccelerateIpWithOptions(const CreateBasicAccelerateIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasIpSetId()) {
    query["IpSetId"] = request.getIpSetId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBasicAccelerateIp"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBasicAccelerateIpResponse>();
}

/**
 * @summary Creates an accelerated IP address for a basic Global Accelerator (GA) instance.
 *
 * @description *   **CreateBasicAccelerateIp** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) operation to query the status of an accelerated IP address:
 *     *   If no status information is returned, the accelerated IP address is being created. In this case, you can perform only query operations.
 *     *   If the accelerated IP address is in the **active** state, the accelerated IP address is created.
 * *   The **CreateBasicAccelerateIp** operation cannot be repeatedly called for the same GA instance within a specific period of time.
 *
 * @param request CreateBasicAccelerateIpRequest
 * @return CreateBasicAccelerateIpResponse
 */
CreateBasicAccelerateIpResponse Client::createBasicAccelerateIp(const CreateBasicAccelerateIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBasicAccelerateIpWithOptions(request, runtime);
}

/**
 * @summary Creates a mapping between an accelerated IP address and an endpoint for a basic Global Accelerator (GA) instance.
 *
 * @description *   **CreateBasicAccelerateIpEndpointRelation** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) or [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) API operation to query the status of an accelerated IP address or an endpoint to determine the association status between the accelerated IP address and endpoint.
 *     *   If the status of the accelerated IP address and endpoint is **binding**, the accelerated IP address is being associated with the endpoint. In this case, you can query the accelerated IP address and endpoint but cannot perform other operations.
 *     *   If the status of the accelerated IP address and endpoint is **bound** and the status returned by the [ListBasicAccelerateIpEndpointRelations](https://help.aliyun.com/document_detail/466803.html) API operation is **active**, the accelerated IP address is associated with the endpoint.
 * *   The **CreateBasicAccelerateIpEndpointRelation** API operation cannot be repeatedly called for the same basic GA instance within a period of time.
 *
 * @param request CreateBasicAccelerateIpEndpointRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBasicAccelerateIpEndpointRelationResponse
 */
CreateBasicAccelerateIpEndpointRelationResponse Client::createBasicAccelerateIpEndpointRelationWithOptions(const CreateBasicAccelerateIpEndpointRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccelerateIpId()) {
    query["AccelerateIpId"] = request.getAccelerateIpId();
  }

  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBasicAccelerateIpEndpointRelation"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBasicAccelerateIpEndpointRelationResponse>();
}

/**
 * @summary Creates a mapping between an accelerated IP address and an endpoint for a basic Global Accelerator (GA) instance.
 *
 * @description *   **CreateBasicAccelerateIpEndpointRelation** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) or [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) API operation to query the status of an accelerated IP address or an endpoint to determine the association status between the accelerated IP address and endpoint.
 *     *   If the status of the accelerated IP address and endpoint is **binding**, the accelerated IP address is being associated with the endpoint. In this case, you can query the accelerated IP address and endpoint but cannot perform other operations.
 *     *   If the status of the accelerated IP address and endpoint is **bound** and the status returned by the [ListBasicAccelerateIpEndpointRelations](https://help.aliyun.com/document_detail/466803.html) API operation is **active**, the accelerated IP address is associated with the endpoint.
 * *   The **CreateBasicAccelerateIpEndpointRelation** API operation cannot be repeatedly called for the same basic GA instance within a period of time.
 *
 * @param request CreateBasicAccelerateIpEndpointRelationRequest
 * @return CreateBasicAccelerateIpEndpointRelationResponse
 */
CreateBasicAccelerateIpEndpointRelationResponse Client::createBasicAccelerateIpEndpointRelation(const CreateBasicAccelerateIpEndpointRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBasicAccelerateIpEndpointRelationWithOptions(request, runtime);
}

/**
 * @summary Creates mappings between accelerated IP addresses and endpoints for a basic Global Accelerator (GA) instance.
 *
 * @description *   The **CreateBasicAccelerateIpEndpointRelations** is asynchronous. After you send a request, the system returns a request ID and runs the task in the system background. You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) or [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) API operation to query the status of an accelerated IP address or an endpoint to determine the association status.
 *     *   If an accelerated IP address and the endpoint are in the **binding** state, the accelerated IP address is being associated with the endpoint. In this case, you can only query the accelerated IP address and endpoint, but cannot perform other operations.
 *     *   If all the accelerated IP addresses and the endpoint are in the **bound** state, and the association status returned by the [ListBasicAccelerateIpEndpointRelations](https://help.aliyun.com/document_detail/466803.html) API operation is **active**, the accelerated IP addresses are associated with the endpoints.
 * *   The **CreateBasicAccelerateIpEndpointRelations** API operation cannot be repeatedly called for the same basic GA instance within a period of time.
 *
 * @param request CreateBasicAccelerateIpEndpointRelationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBasicAccelerateIpEndpointRelationsResponse
 */
CreateBasicAccelerateIpEndpointRelationsResponse Client::createBasicAccelerateIpEndpointRelationsWithOptions(const CreateBasicAccelerateIpEndpointRelationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccelerateIpEndpointRelations()) {
    query["AccelerateIpEndpointRelations"] = request.getAccelerateIpEndpointRelations();
  }

  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBasicAccelerateIpEndpointRelations"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBasicAccelerateIpEndpointRelationsResponse>();
}

/**
 * @summary Creates mappings between accelerated IP addresses and endpoints for a basic Global Accelerator (GA) instance.
 *
 * @description *   The **CreateBasicAccelerateIpEndpointRelations** is asynchronous. After you send a request, the system returns a request ID and runs the task in the system background. You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) or [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) API operation to query the status of an accelerated IP address or an endpoint to determine the association status.
 *     *   If an accelerated IP address and the endpoint are in the **binding** state, the accelerated IP address is being associated with the endpoint. In this case, you can only query the accelerated IP address and endpoint, but cannot perform other operations.
 *     *   If all the accelerated IP addresses and the endpoint are in the **bound** state, and the association status returned by the [ListBasicAccelerateIpEndpointRelations](https://help.aliyun.com/document_detail/466803.html) API operation is **active**, the accelerated IP addresses are associated with the endpoints.
 * *   The **CreateBasicAccelerateIpEndpointRelations** API operation cannot be repeatedly called for the same basic GA instance within a period of time.
 *
 * @param request CreateBasicAccelerateIpEndpointRelationsRequest
 * @return CreateBasicAccelerateIpEndpointRelationsResponse
 */
CreateBasicAccelerateIpEndpointRelationsResponse Client::createBasicAccelerateIpEndpointRelations(const CreateBasicAccelerateIpEndpointRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBasicAccelerateIpEndpointRelationsWithOptions(request, runtime);
}

/**
 * @summary Basic Global Accelerator (GA) instances leverage the immense bandwidth of the high-quality global network of Alibaba Cloud to provide end-to-end acceleration services. You can use basic GA instances to accelerate content delivery at Layer 3 (IP). You can call the CreateBasicAccelerator operation to create a basic GA instance.
 *
 * @description **CreateBasicAccelerator** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicAccelerator](https://help.aliyun.com/document_detail/353188.html) or [ListBasicAccelerators](https://help.aliyun.com/document_detail/353189.html) operation to query the status of the task.
 * *   If the basic GA instance is in the **init** state, it indicates that the basic GA instance is being created. In this case, you can perform only query operations.
 * *   If the basic GA instance is in the **active** state, it indicates that the basic GA instance is created.
 *
 * @param request CreateBasicAcceleratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBasicAcceleratorResponse
 */
CreateBasicAcceleratorResponse Client::createBasicAcceleratorWithOptions(const CreateBasicAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewDuration()) {
    query["AutoRenewDuration"] = request.getAutoRenewDuration();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBandwidthBillingType()) {
    query["BandwidthBillingType"] = request.getBandwidthBillingType();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.getPricingCycle();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.getPromotionOptionNo();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBasicAccelerator"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBasicAcceleratorResponse>();
}

/**
 * @summary Basic Global Accelerator (GA) instances leverage the immense bandwidth of the high-quality global network of Alibaba Cloud to provide end-to-end acceleration services. You can use basic GA instances to accelerate content delivery at Layer 3 (IP). You can call the CreateBasicAccelerator operation to create a basic GA instance.
 *
 * @description **CreateBasicAccelerator** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicAccelerator](https://help.aliyun.com/document_detail/353188.html) or [ListBasicAccelerators](https://help.aliyun.com/document_detail/353189.html) operation to query the status of the task.
 * *   If the basic GA instance is in the **init** state, it indicates that the basic GA instance is being created. In this case, you can perform only query operations.
 * *   If the basic GA instance is in the **active** state, it indicates that the basic GA instance is created.
 *
 * @param request CreateBasicAcceleratorRequest
 * @return CreateBasicAcceleratorResponse
 */
CreateBasicAcceleratorResponse Client::createBasicAccelerator(const CreateBasicAcceleratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBasicAcceleratorWithOptions(request, runtime);
}

/**
 * @summary Creates an endpoint for a basic Global Accelerator (GA) instance.
 *
 * @description *   **CreateBasicEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) API operation to query the status of an endpoint.
 *     *   If the endpoint is in the **init** state, the endpoint is being created. In this case, you can perform only query operations.
 *     *   If the endpoint is in the **active** state, the endpoint is created.
 * *   The **CreateBasicEndpoint** API operation cannot be repeatedly called for the same basic GA instance within a specific period of time.
 *
 * @param request CreateBasicEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBasicEndpointResponse
 */
CreateBasicEndpointResponse Client::createBasicEndpointWithOptions(const CreateBasicEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointAddress()) {
    query["EndpointAddress"] = request.getEndpointAddress();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasEndpointSubAddress()) {
    query["EndpointSubAddress"] = request.getEndpointSubAddress();
  }

  if (!!request.hasEndpointSubAddressType()) {
    query["EndpointSubAddressType"] = request.getEndpointSubAddressType();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.getEndpointType();
  }

  if (!!request.hasEndpointZoneId()) {
    query["EndpointZoneId"] = request.getEndpointZoneId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBasicEndpoint"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBasicEndpointResponse>();
}

/**
 * @summary Creates an endpoint for a basic Global Accelerator (GA) instance.
 *
 * @description *   **CreateBasicEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) API operation to query the status of an endpoint.
 *     *   If the endpoint is in the **init** state, the endpoint is being created. In this case, you can perform only query operations.
 *     *   If the endpoint is in the **active** state, the endpoint is created.
 * *   The **CreateBasicEndpoint** API operation cannot be repeatedly called for the same basic GA instance within a specific period of time.
 *
 * @param request CreateBasicEndpointRequest
 * @return CreateBasicEndpointResponse
 */
CreateBasicEndpointResponse Client::createBasicEndpoint(const CreateBasicEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBasicEndpointWithOptions(request, runtime);
}

/**
 * @summary Creates an endpoint group for a basic Global Accelerator (GA) instance.
 *
 * @description *   **CreateBasicEndpointGroup** is an asynchronous operation. After a request is sent, the system returns an endpoint group ID and runs the task in the background. You can call the [GetBasicEndpointGroup](https://help.aliyun.com/document_detail/362984.html) operation to query the status of the task.
 *     *   If the endpoint group is in the **init** state, the endpoint is being created. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, the endpoint group is created.
 * *   You cannot call the **CreateBasicEndpointGroup** operation again on the same GA instance before the previous request is completed.
 *
 * @param request CreateBasicEndpointGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBasicEndpointGroupResponse
 */
CreateBasicEndpointGroupResponse Client::createBasicEndpointGroupWithOptions(const CreateBasicEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEndpointAddress()) {
    query["EndpointAddress"] = request.getEndpointAddress();
  }

  if (!!request.hasEndpointGroupRegion()) {
    query["EndpointGroupRegion"] = request.getEndpointGroupRegion();
  }

  if (!!request.hasEndpointSubAddress()) {
    query["EndpointSubAddress"] = request.getEndpointSubAddress();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.getEndpointType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBasicEndpointGroup"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBasicEndpointGroupResponse>();
}

/**
 * @summary Creates an endpoint group for a basic Global Accelerator (GA) instance.
 *
 * @description *   **CreateBasicEndpointGroup** is an asynchronous operation. After a request is sent, the system returns an endpoint group ID and runs the task in the background. You can call the [GetBasicEndpointGroup](https://help.aliyun.com/document_detail/362984.html) operation to query the status of the task.
 *     *   If the endpoint group is in the **init** state, the endpoint is being created. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, the endpoint group is created.
 * *   You cannot call the **CreateBasicEndpointGroup** operation again on the same GA instance before the previous request is completed.
 *
 * @param request CreateBasicEndpointGroupRequest
 * @return CreateBasicEndpointGroupResponse
 */
CreateBasicEndpointGroupResponse Client::createBasicEndpointGroup(const CreateBasicEndpointGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBasicEndpointGroupWithOptions(request, runtime);
}

/**
 * @summary Creates multiple endpoints for a basic Global Accelerator (GA) instance.
 *
 * @description *   **CreateBasicEndpoints** is an asynchronous operation. After you call this operation, the system returns a request ID and runs the task in the background. You can call the [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) operation to query the status of endpoints. - If one or more endpoints are in the **init** state, it indicates that the endpoints are being created. In this case, you can continue to perform query operations on the endpoints. If all endpoints are in the **active** state, it indicates that the endpoints are created.
 * *   You cannot call the **CreateBasicEndpoints** operation again on the same GA instance before the previous operation is complete.
 *
 * @param request CreateBasicEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBasicEndpointsResponse
 */
CreateBasicEndpointsResponse Client::createBasicEndpointsWithOptions(const CreateBasicEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasEndpoints()) {
    query["Endpoints"] = request.getEndpoints();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBasicEndpoints"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBasicEndpointsResponse>();
}

/**
 * @summary Creates multiple endpoints for a basic Global Accelerator (GA) instance.
 *
 * @description *   **CreateBasicEndpoints** is an asynchronous operation. After you call this operation, the system returns a request ID and runs the task in the background. You can call the [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) operation to query the status of endpoints. - If one or more endpoints are in the **init** state, it indicates that the endpoints are being created. In this case, you can continue to perform query operations on the endpoints. If all endpoints are in the **active** state, it indicates that the endpoints are created.
 * *   You cannot call the **CreateBasicEndpoints** operation again on the same GA instance before the previous operation is complete.
 *
 * @param request CreateBasicEndpointsRequest
 * @return CreateBasicEndpointsResponse
 */
CreateBasicEndpointsResponse Client::createBasicEndpoints(const CreateBasicEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBasicEndpointsWithOptions(request, runtime);
}

/**
 * @summary Creates an acceleration region for a basic Global Accelerator (GA) instance.
 *
 * @description Take note of the following limits:
 * *   You can specify only one acceleration region for each basic GA instance, and only IPv4 clients can connect to basic GA instances.
 * *   **CreateBasicIpSet** is an asynchronous operation. After you send a request, the system returns an acceleration region ID and runs the task in the background. You can call the [GetBasicIpSet](https://help.aliyun.com/document_detail/362987.html) operation to query the status of the task.
 *     *   If the acceleration region is in the **init** state, the acceleration region is being created. In this case, you can perform only query operations.
 *     *   If the acceleration region is in the **active** state, the acceleration region is created.
 * *   You cannot call the **CreateBasicIpSet** operation again on the same GA instance before the previous task is completed.
 *
 * @param request CreateBasicIpSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBasicIpSetResponse
 */
CreateBasicIpSetResponse Client::createBasicIpSetWithOptions(const CreateBasicIpSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccelerateRegionId()) {
    query["AccelerateRegionId"] = request.getAccelerateRegionId();
  }

  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasIspType()) {
    query["IspType"] = request.getIspType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBasicIpSet"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBasicIpSetResponse>();
}

/**
 * @summary Creates an acceleration region for a basic Global Accelerator (GA) instance.
 *
 * @description Take note of the following limits:
 * *   You can specify only one acceleration region for each basic GA instance, and only IPv4 clients can connect to basic GA instances.
 * *   **CreateBasicIpSet** is an asynchronous operation. After you send a request, the system returns an acceleration region ID and runs the task in the background. You can call the [GetBasicIpSet](https://help.aliyun.com/document_detail/362987.html) operation to query the status of the task.
 *     *   If the acceleration region is in the **init** state, the acceleration region is being created. In this case, you can perform only query operations.
 *     *   If the acceleration region is in the **active** state, the acceleration region is created.
 * *   You cannot call the **CreateBasicIpSet** operation again on the same GA instance before the previous task is completed.
 *
 * @param request CreateBasicIpSetRequest
 * @return CreateBasicIpSetResponse
 */
CreateBasicIpSetResponse Client::createBasicIpSet(const CreateBasicIpSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBasicIpSetWithOptions(request, runtime);
}

/**
 * @summary After you configure a custom routing listener for a Global Accelerator (GA) instance, the GA instance generates a port mapping table based on the listener port range, mapping information (protocols and port ranges) of the associated endpoint groups, and IP addresses of endpoints (vSwitches), and forwards client requests to the specified IP addresses and ports in the vSwitches.
 * You can call this operation to create mappings for an endpoint group of a custom routing listener. Take note of the following items:
 * *   **CreateCustomRoutingEndpointGroupDestinations** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of the task.
 *     *   If the endpoint group is in the **updating** state, it indicates that the mappings are being created for the endpoint group. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, it indicates that the mappings are created for the endpoint group.
 * *   You cannot call the **CreateCustomRoutingEndpointGroupDestinations** operation again on the same GA instance before the previous task is completed.
 * ### Prerequisites
 * Make sure that the following prerequisites are met before you call this operation:
 * *   A standard GA instance is created. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
 * *   A bandwidth plan is associated with the standard GA instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
 * *   An application is deployed as an endpoint to receive requests that are forwarded from GA. You can specify only vSwitches as endpoints for custom routing listeners.
 * *   The permissions to use custom routing listeners are acquired and a custom routing listener is created for the GA instance. The custom routing listener feature is in invitational preview. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.11182188.console-base-top.dworkorder.18ae4882n3v6ZW#/ticket/createIndex). For information about how to create a custom routing listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
 * *   An endpoint group is created for the custom routing listener. For more information, see [CreateCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449363.html).
 *
 * @description readAndWrite
 *
 * @param request CreateCustomRoutingEndpointGroupDestinationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomRoutingEndpointGroupDestinationsResponse
 */
CreateCustomRoutingEndpointGroupDestinationsResponse Client::createCustomRoutingEndpointGroupDestinationsWithOptions(const CreateCustomRoutingEndpointGroupDestinationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDestinationConfigurations()) {
    query["DestinationConfigurations"] = request.getDestinationConfigurations();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomRoutingEndpointGroupDestinations"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomRoutingEndpointGroupDestinationsResponse>();
}

/**
 * @summary After you configure a custom routing listener for a Global Accelerator (GA) instance, the GA instance generates a port mapping table based on the listener port range, mapping information (protocols and port ranges) of the associated endpoint groups, and IP addresses of endpoints (vSwitches), and forwards client requests to the specified IP addresses and ports in the vSwitches.
 * You can call this operation to create mappings for an endpoint group of a custom routing listener. Take note of the following items:
 * *   **CreateCustomRoutingEndpointGroupDestinations** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of the task.
 *     *   If the endpoint group is in the **updating** state, it indicates that the mappings are being created for the endpoint group. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, it indicates that the mappings are created for the endpoint group.
 * *   You cannot call the **CreateCustomRoutingEndpointGroupDestinations** operation again on the same GA instance before the previous task is completed.
 * ### Prerequisites
 * Make sure that the following prerequisites are met before you call this operation:
 * *   A standard GA instance is created. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
 * *   A bandwidth plan is associated with the standard GA instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
 * *   An application is deployed as an endpoint to receive requests that are forwarded from GA. You can specify only vSwitches as endpoints for custom routing listeners.
 * *   The permissions to use custom routing listeners are acquired and a custom routing listener is created for the GA instance. The custom routing listener feature is in invitational preview. To use the feature, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.11182188.console-base-top.dworkorder.18ae4882n3v6ZW#/ticket/createIndex). For information about how to create a custom routing listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
 * *   An endpoint group is created for the custom routing listener. For more information, see [CreateCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449363.html).
 *
 * @description readAndWrite
 *
 * @param request CreateCustomRoutingEndpointGroupDestinationsRequest
 * @return CreateCustomRoutingEndpointGroupDestinationsResponse
 */
CreateCustomRoutingEndpointGroupDestinationsResponse Client::createCustomRoutingEndpointGroupDestinations(const CreateCustomRoutingEndpointGroupDestinationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomRoutingEndpointGroupDestinationsWithOptions(request, runtime);
}

/**
 * @summary Creates endpoint groups for a custom routing listener.
 *
 * @description Global Accelerator (GA) forwards client requests to endpoints in an endpoint group based on the routing type of the listener that is associated with the endpoint group.
 * *   After you configure an intelligent routing listener for a GA instance, the GA instance selects a nearby and healthy endpoint group and forwards client requests to a healthy endpoint in the endpoint group.
 * *   After you configure a custom routing listener for a GA instance, the instance generates a port mapping table based on the listener port range, protocols and port ranges of the associated endpoint groups, and IP addresses of endpoints (vSwitches), and forwards client requests to specified IP addresses and ports in the vSwitches.
 * You can call this operation to create endpoint groups for custom routing listeners. For information about how to create endpoint groups for intelligent routing listeners, see [CreateEndpointGroup](https://help.aliyun.com/document_detail/153259.html).
 * When you call this operation, take note of the following items:
 * *   **CreateCustomRoutingEndpointGroups** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) or [ListCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449374.html) operation to query the status of the endpoint groups that are associated with custom routing listeners.
 *     *   If one or more endpoint groups are in the **init** state, it indicates that the endpoint groups are being created. In this case, you can perform only query operations.
 *     *   If all endpoint groups are in the **active** state, it indicates that the endpoint groups are created.
 * *   The **CreateCustomRoutingEndpointGroups** operation cannot be called repeatedly for the same GA instance within a specific period of time.
 * ### Prerequisites
 * Make sure that the following requirements are met before you call this operation:
 * *   A standard GA instance is created. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
 * *   A bandwidth plan is associated with the standard GA instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
 * *   An application is deployed to receive requests that are forwarded from GA. You can specify only vSwitches as endpoints for custom routing listeners.
 * *   The permissions to use custom routing listeners are acquired and a custom routing listener is created for the GA instance. Custom routing listeners are in invitational preview. To use custom routing listeners, contact your account manager. For more information about how to create a custom routing listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
 *
 * @param request CreateCustomRoutingEndpointGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomRoutingEndpointGroupsResponse
 */
CreateCustomRoutingEndpointGroupsResponse Client::createCustomRoutingEndpointGroupsWithOptions(const CreateCustomRoutingEndpointGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEndpointGroupConfigurations()) {
    query["EndpointGroupConfigurations"] = request.getEndpointGroupConfigurations();
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
    {"action" , "CreateCustomRoutingEndpointGroups"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomRoutingEndpointGroupsResponse>();
}

/**
 * @summary Creates endpoint groups for a custom routing listener.
 *
 * @description Global Accelerator (GA) forwards client requests to endpoints in an endpoint group based on the routing type of the listener that is associated with the endpoint group.
 * *   After you configure an intelligent routing listener for a GA instance, the GA instance selects a nearby and healthy endpoint group and forwards client requests to a healthy endpoint in the endpoint group.
 * *   After you configure a custom routing listener for a GA instance, the instance generates a port mapping table based on the listener port range, protocols and port ranges of the associated endpoint groups, and IP addresses of endpoints (vSwitches), and forwards client requests to specified IP addresses and ports in the vSwitches.
 * You can call this operation to create endpoint groups for custom routing listeners. For information about how to create endpoint groups for intelligent routing listeners, see [CreateEndpointGroup](https://help.aliyun.com/document_detail/153259.html).
 * When you call this operation, take note of the following items:
 * *   **CreateCustomRoutingEndpointGroups** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) or [ListCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449374.html) operation to query the status of the endpoint groups that are associated with custom routing listeners.
 *     *   If one or more endpoint groups are in the **init** state, it indicates that the endpoint groups are being created. In this case, you can perform only query operations.
 *     *   If all endpoint groups are in the **active** state, it indicates that the endpoint groups are created.
 * *   The **CreateCustomRoutingEndpointGroups** operation cannot be called repeatedly for the same GA instance within a specific period of time.
 * ### Prerequisites
 * Make sure that the following requirements are met before you call this operation:
 * *   A standard GA instance is created. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
 * *   A bandwidth plan is associated with the standard GA instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
 * *   An application is deployed to receive requests that are forwarded from GA. You can specify only vSwitches as endpoints for custom routing listeners.
 * *   The permissions to use custom routing listeners are acquired and a custom routing listener is created for the GA instance. Custom routing listeners are in invitational preview. To use custom routing listeners, contact your account manager. For more information about how to create a custom routing listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
 *
 * @param request CreateCustomRoutingEndpointGroupsRequest
 * @return CreateCustomRoutingEndpointGroupsResponse
 */
CreateCustomRoutingEndpointGroupsResponse Client::createCustomRoutingEndpointGroups(const CreateCustomRoutingEndpointGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomRoutingEndpointGroupsWithOptions(request, runtime);
}

/**
 * @summary Creates traffic destinations for an endpoint that is associated with a custom routing listener.
 *
 * @description This operation takes effect only when the traffic access policy of an endpoint allows traffic to specified destinations. You can call the [DescribeCustomRoutingEndpoint](https://help.aliyun.com/document_detail/449386.html) operation to query the traffic access policy of an endpoint. This operation takes effect only if the value of **TrafficToEndpointPolicy** is set to **AllowCustom**, which allows traffic to specific destinations.
 * When you call this operation, take note of the following items:
 * *   **CreateCustomRoutingEndpointTrafficPolicies** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of the task.
 *     *   If the endpoint group is in the **updating** state, the traffic destinations are being created. In this state, you can only query the traffic destinations.
 *     *   If the endpoint group is in the **active** state, the traffic destinations are created.
 * *   You cannot call the **CreateCustomRoutingEndpointTrafficPolicies** operation repeatedly for the same GA instance in a specific period of time.
 * ### [](#)Prerequisites
 * Before you call this operation, make sure that the following requirements are met:
 * *   A standard GA instance is created. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
 * *   If the bandwidth metering method of the standard GA instance is **pay-by-bandwidth**, a bandwidth plan must be associated with the standard GA instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
 * *   An application that serves as the endpoint of the standard GA instance is deployed to receive requests that are forwarded from GA. You can specify only vSwitches as endpoints for custom routing listeners.
 * *   The permissions to use custom routing listeners are acquired, and a custom routing listener is created. Custom routing listeners are in invitational preview. To use custom routing listeners, contact your account manager. For more information about how to create a custom routing listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
 * *   Endpoint groups are created for the custom routing listener. For more information, see [CreateCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449363.html).
 * *   Endpoints are created for the custom routing listener. For more information, see [CreateCustomRoutingEndpoints](https://help.aliyun.com/document_detail/449382.html).
 *
 * @param request CreateCustomRoutingEndpointTrafficPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomRoutingEndpointTrafficPoliciesResponse
 */
CreateCustomRoutingEndpointTrafficPoliciesResponse Client::createCustomRoutingEndpointTrafficPoliciesWithOptions(const CreateCustomRoutingEndpointTrafficPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasPolicyConfigurations()) {
    query["PolicyConfigurations"] = request.getPolicyConfigurations();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomRoutingEndpointTrafficPolicies"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomRoutingEndpointTrafficPoliciesResponse>();
}

/**
 * @summary Creates traffic destinations for an endpoint that is associated with a custom routing listener.
 *
 * @description This operation takes effect only when the traffic access policy of an endpoint allows traffic to specified destinations. You can call the [DescribeCustomRoutingEndpoint](https://help.aliyun.com/document_detail/449386.html) operation to query the traffic access policy of an endpoint. This operation takes effect only if the value of **TrafficToEndpointPolicy** is set to **AllowCustom**, which allows traffic to specific destinations.
 * When you call this operation, take note of the following items:
 * *   **CreateCustomRoutingEndpointTrafficPolicies** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of the task.
 *     *   If the endpoint group is in the **updating** state, the traffic destinations are being created. In this state, you can only query the traffic destinations.
 *     *   If the endpoint group is in the **active** state, the traffic destinations are created.
 * *   You cannot call the **CreateCustomRoutingEndpointTrafficPolicies** operation repeatedly for the same GA instance in a specific period of time.
 * ### [](#)Prerequisites
 * Before you call this operation, make sure that the following requirements are met:
 * *   A standard GA instance is created. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
 * *   If the bandwidth metering method of the standard GA instance is **pay-by-bandwidth**, a bandwidth plan must be associated with the standard GA instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
 * *   An application that serves as the endpoint of the standard GA instance is deployed to receive requests that are forwarded from GA. You can specify only vSwitches as endpoints for custom routing listeners.
 * *   The permissions to use custom routing listeners are acquired, and a custom routing listener is created. Custom routing listeners are in invitational preview. To use custom routing listeners, contact your account manager. For more information about how to create a custom routing listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
 * *   Endpoint groups are created for the custom routing listener. For more information, see [CreateCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449363.html).
 * *   Endpoints are created for the custom routing listener. For more information, see [CreateCustomRoutingEndpoints](https://help.aliyun.com/document_detail/449382.html).
 *
 * @param request CreateCustomRoutingEndpointTrafficPoliciesRequest
 * @return CreateCustomRoutingEndpointTrafficPoliciesResponse
 */
CreateCustomRoutingEndpointTrafficPoliciesResponse Client::createCustomRoutingEndpointTrafficPolicies(const CreateCustomRoutingEndpointTrafficPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomRoutingEndpointTrafficPoliciesWithOptions(request, runtime);
}

/**
 * @summary Creates endpoints for a custom routing listener.
 *
 * @description After you configure a custom routing listener for a Global Accelerator (GA) instance, the instance generates a port mapping table based on the listener port range, the protocols and port ranges of the associated endpoint groups, and the IP addresses of endpoints (vSwitches), and forwards client requests to specified IP addresses and ports in the vSwitches.
 * This operation is used to create endpoints for custom routing listeners. When you call this operation, take note of the following items:
 * *   **CreateCustomRoutingEndpoints** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of an endpoint group and determine whether endpoints are created in the endpoint group.
 *     *   If the endpoint group is in the **updating** state, it indicates that endpoints are being created. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, it indicates that endpoints are created.
 * *   The **CreateCustomRoutingEndpoints** operation cannot be called repeatedly for the same GA instance within a specific period of time.
 * ### Prerequisites
 * The following operations are complete before you call this operation:
 * *   Create a standard GA instance. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
 * *   Associate a bandwidth plan with the standard GA instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
 * *   Deploy an application that serves as the endpoint of the GA instance. The application is used to receive requests that are forwarded from GA. You can specify only vSwitches as endpoints for custom routing listeners.
 * *   Apply for permissions to use custom routing listeners and create a custom routing listener for the standard GA instance. Custom routing listeners are in invitational preview. To use custom routing listeners, contact your account manager. For more information about how to create a custom routing listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
 * *   Create an endpoint group for the custom routing listener. For more information, see [CreateCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449363.html).
 *
 * @param request CreateCustomRoutingEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomRoutingEndpointsResponse
 */
CreateCustomRoutingEndpointsResponse Client::createCustomRoutingEndpointsWithOptions(const CreateCustomRoutingEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointConfigurations()) {
    query["EndpointConfigurations"] = request.getEndpointConfigurations();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomRoutingEndpoints"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomRoutingEndpointsResponse>();
}

/**
 * @summary Creates endpoints for a custom routing listener.
 *
 * @description After you configure a custom routing listener for a Global Accelerator (GA) instance, the instance generates a port mapping table based on the listener port range, the protocols and port ranges of the associated endpoint groups, and the IP addresses of endpoints (vSwitches), and forwards client requests to specified IP addresses and ports in the vSwitches.
 * This operation is used to create endpoints for custom routing listeners. When you call this operation, take note of the following items:
 * *   **CreateCustomRoutingEndpoints** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of an endpoint group and determine whether endpoints are created in the endpoint group.
 *     *   If the endpoint group is in the **updating** state, it indicates that endpoints are being created. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, it indicates that endpoints are created.
 * *   The **CreateCustomRoutingEndpoints** operation cannot be called repeatedly for the same GA instance within a specific period of time.
 * ### Prerequisites
 * The following operations are complete before you call this operation:
 * *   Create a standard GA instance. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
 * *   Associate a bandwidth plan with the standard GA instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
 * *   Deploy an application that serves as the endpoint of the GA instance. The application is used to receive requests that are forwarded from GA. You can specify only vSwitches as endpoints for custom routing listeners.
 * *   Apply for permissions to use custom routing listeners and create a custom routing listener for the standard GA instance. Custom routing listeners are in invitational preview. To use custom routing listeners, contact your account manager. For more information about how to create a custom routing listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
 * *   Create an endpoint group for the custom routing listener. For more information, see [CreateCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449363.html).
 *
 * @param request CreateCustomRoutingEndpointsRequest
 * @return CreateCustomRoutingEndpointsResponse
 */
CreateCustomRoutingEndpointsResponse Client::createCustomRoutingEndpoints(const CreateCustomRoutingEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomRoutingEndpointsWithOptions(request, runtime);
}

/**
 * @summary Creates a domain name and associates the domain name with Global Accelerator (GA) instances.
 *
 * @description After you associate an accelerated domain name that has obtained an ICP number with a Global Accelerator (GA) instance, you do not need to complete filing for the accelerated domain name or its subdomains on Alibaba Cloud.
 * You can call this operation to add an accelerated domain name and associate the accelerated domain name with GA instances. When you call this operation, take note of the following items:
 * *   If your accelerated domain name is hosted in the Chinese mainland, you must obtain an ICP number for the domain name.
 * *   The same accelerated domain name cannot be repeatedly associated with the same GA instance.
 * *   You cannot repeatedly call the **CreateDomain** operation by using the same Alibaba Cloud account within a specific period of time.
 *
 * @param request CreateDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDomainResponse
 */
CreateDomainResponse Client::createDomainWithOptions(const CreateDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorIds()) {
    query["AcceleratorIds"] = request.getAcceleratorIds();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDomain"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDomainResponse>();
}

/**
 * @summary Creates a domain name and associates the domain name with Global Accelerator (GA) instances.
 *
 * @description After you associate an accelerated domain name that has obtained an ICP number with a Global Accelerator (GA) instance, you do not need to complete filing for the accelerated domain name or its subdomains on Alibaba Cloud.
 * You can call this operation to add an accelerated domain name and associate the accelerated domain name with GA instances. When you call this operation, take note of the following items:
 * *   If your accelerated domain name is hosted in the Chinese mainland, you must obtain an ICP number for the domain name.
 * *   The same accelerated domain name cannot be repeatedly associated with the same GA instance.
 * *   You cannot repeatedly call the **CreateDomain** operation by using the same Alibaba Cloud account within a specific period of time.
 *
 * @param request CreateDomainRequest
 * @return CreateDomainResponse
 */
CreateDomainResponse Client::createDomain(const CreateDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDomainWithOptions(request, runtime);
}

/**
 * @summary Creates an endpoint group.
 *
 * @description *   When you call this operation to create a virtual endpoint group for a Layer 4 listener, make sure that a default endpoint group is created.
 * *   **CreateEndpointGroup** is an asynchronous operation. After you send a request, the system returns the ID of an endpoint group, but the endpoint group is still being created in the system background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the state of the endpoint group.
 *     *   If the endpoint group is in the **init** state, it indicates that the endpoint group is being created. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, it indicates that the endpoint group is created.
 * *   The **CreateEndpointGroup** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request CreateEndpointGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEndpointGroupResponse
 */
CreateEndpointGroupResponse Client::createEndpointGroupWithOptions(const CreateEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEndpointConfigurations()) {
    query["EndpointConfigurations"] = request.getEndpointConfigurations();
  }

  if (!!request.hasEndpointGroupRegion()) {
    query["EndpointGroupRegion"] = request.getEndpointGroupRegion();
  }

  if (!!request.hasEndpointGroupType()) {
    query["EndpointGroupType"] = request.getEndpointGroupType();
  }

  if (!!request.hasEndpointIpVersion()) {
    query["EndpointIpVersion"] = request.getEndpointIpVersion();
  }

  if (!!request.hasEndpointProtocolVersion()) {
    query["EndpointProtocolVersion"] = request.getEndpointProtocolVersion();
  }

  if (!!request.hasEndpointRequestProtocol()) {
    query["EndpointRequestProtocol"] = request.getEndpointRequestProtocol();
  }

  if (!!request.hasHealthCheckEnabled()) {
    query["HealthCheckEnabled"] = request.getHealthCheckEnabled();
  }

  if (!!request.hasHealthCheckHost()) {
    query["HealthCheckHost"] = request.getHealthCheckHost();
  }

  if (!!request.hasHealthCheckIntervalSeconds()) {
    query["HealthCheckIntervalSeconds"] = request.getHealthCheckIntervalSeconds();
  }

  if (!!request.hasHealthCheckPath()) {
    query["HealthCheckPath"] = request.getHealthCheckPath();
  }

  if (!!request.hasHealthCheckPort()) {
    query["HealthCheckPort"] = request.getHealthCheckPort();
  }

  if (!!request.hasHealthCheckProtocol()) {
    query["HealthCheckProtocol"] = request.getHealthCheckProtocol();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPortOverrides()) {
    query["PortOverrides"] = request.getPortOverrides();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasThresholdCount()) {
    query["ThresholdCount"] = request.getThresholdCount();
  }

  if (!!request.hasTrafficPercentage()) {
    query["TrafficPercentage"] = request.getTrafficPercentage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEndpointGroup"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEndpointGroupResponse>();
}

/**
 * @summary Creates an endpoint group.
 *
 * @description *   When you call this operation to create a virtual endpoint group for a Layer 4 listener, make sure that a default endpoint group is created.
 * *   **CreateEndpointGroup** is an asynchronous operation. After you send a request, the system returns the ID of an endpoint group, but the endpoint group is still being created in the system background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the state of the endpoint group.
 *     *   If the endpoint group is in the **init** state, it indicates that the endpoint group is being created. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, it indicates that the endpoint group is created.
 * *   The **CreateEndpointGroup** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request CreateEndpointGroupRequest
 * @return CreateEndpointGroupResponse
 */
CreateEndpointGroupResponse Client::createEndpointGroup(const CreateEndpointGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEndpointGroupWithOptions(request, runtime);
}

/**
 * @summary Creates multiple endpoint groups at a time.
 *
 * @description *   You can call this operation to create multiple endpoint groups at a time. However, you cannot create a default endpoint group and a virtual endpoint group at the same time.
 * *   You cannot create a virtual endpoint group for a Layer 4 listener. To create a virtual endpoint group for a Layer 4 listener, call the [CreateEndpointGroup](https://help.aliyun.com/document_detail/2302394.html) operation.
 * *   **CreateEndpointGroups** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) or [ListEndpointGroups](https://help.aliyun.com/document_detail/153261.html) operation to query the status of endpoint groups.
 *     *   If the endpoint groups are in the **init** state, the endpoint groups are being created. In this case, you can perform only query operations.
 *     *   If all endpoint groups are in the **active** state, the endpoint groups are created.
 * *   The **CreateEndpointGroups** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request CreateEndpointGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEndpointGroupsResponse
 */
CreateEndpointGroupsResponse Client::createEndpointGroupsWithOptions(const CreateEndpointGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

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

  json body = {};
  json bodyFlat = {};
  if (!!request.hasEndpointGroupConfigurations()) {
    bodyFlat["EndpointGroupConfigurations"] = request.getEndpointGroupConfigurations();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEndpointGroups"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEndpointGroupsResponse>();
}

/**
 * @summary Creates multiple endpoint groups at a time.
 *
 * @description *   You can call this operation to create multiple endpoint groups at a time. However, you cannot create a default endpoint group and a virtual endpoint group at the same time.
 * *   You cannot create a virtual endpoint group for a Layer 4 listener. To create a virtual endpoint group for a Layer 4 listener, call the [CreateEndpointGroup](https://help.aliyun.com/document_detail/2302394.html) operation.
 * *   **CreateEndpointGroups** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) or [ListEndpointGroups](https://help.aliyun.com/document_detail/153261.html) operation to query the status of endpoint groups.
 *     *   If the endpoint groups are in the **init** state, the endpoint groups are being created. In this case, you can perform only query operations.
 *     *   If all endpoint groups are in the **active** state, the endpoint groups are created.
 * *   The **CreateEndpointGroups** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request CreateEndpointGroupsRequest
 * @return CreateEndpointGroupsResponse
 */
CreateEndpointGroupsResponse Client::createEndpointGroups(const CreateEndpointGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEndpointGroupsWithOptions(request, runtime);
}

/**
 * @summary If you want to distribute and process traffic based on request attributes, such as domain names and paths, or information in requests, such as HTTP headers and cookies, you can create custom forwarding rules for a listener. The listener forwards requests based on the forwarding rules. You can call the CreateForwardingRules operation to create forwarding rules.
 *
 * @description Before you call this operation to create forwarding rules, we recommend that you learn how forwarding rules work and how requests are matched against forwarding rules. For more information, see [Configure forwarding rules](https://help.aliyun.com/document_detail/204224.html).
 * When you call this operation, take note of the following items:
 * *   **CreateForwardingRules** is an asynchronous operation. After you send a request, the system returns a forwarding rule ID and runs the task in the background. You can call the [ListForwardingRules](https://help.aliyun.com/document_detail/205817.html) operation to query the status of a forwarding rule.
 *     *   If the forwarding rule is in the **configuring** state, the rule is being created. In this case, you can only perform query operations.
 *     *   If the forwarding rule is in the **active** state, the rule is created.
 * *   The **CreateForwardingRules** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request CreateForwardingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateForwardingRulesResponse
 */
CreateForwardingRulesResponse Client::createForwardingRulesWithOptions(const CreateForwardingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  json bodyFlat = {};
  if (!!request.hasForwardingRules()) {
    bodyFlat["ForwardingRules"] = request.getForwardingRules();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateForwardingRules"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateForwardingRulesResponse>();
}

/**
 * @summary If you want to distribute and process traffic based on request attributes, such as domain names and paths, or information in requests, such as HTTP headers and cookies, you can create custom forwarding rules for a listener. The listener forwards requests based on the forwarding rules. You can call the CreateForwardingRules operation to create forwarding rules.
 *
 * @description Before you call this operation to create forwarding rules, we recommend that you learn how forwarding rules work and how requests are matched against forwarding rules. For more information, see [Configure forwarding rules](https://help.aliyun.com/document_detail/204224.html).
 * When you call this operation, take note of the following items:
 * *   **CreateForwardingRules** is an asynchronous operation. After you send a request, the system returns a forwarding rule ID and runs the task in the background. You can call the [ListForwardingRules](https://help.aliyun.com/document_detail/205817.html) operation to query the status of a forwarding rule.
 *     *   If the forwarding rule is in the **configuring** state, the rule is being created. In this case, you can only perform query operations.
 *     *   If the forwarding rule is in the **active** state, the rule is created.
 * *   The **CreateForwardingRules** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request CreateForwardingRulesRequest
 * @return CreateForwardingRulesResponse
 */
CreateForwardingRulesResponse Client::createForwardingRules(const CreateForwardingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createForwardingRulesWithOptions(request, runtime);
}

/**
 * @summary Creates acceleration regions.
 *
 * @description *   **CreateIpSets** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of the task.
 *     *   If acceleration regions are in the **init** state, it indicates that the acceleration regions are being created. In this case, you can perform only query operations.
 *     *   If acceleration regions are in the **active** state, it indicates that the acceleration regions are created.
 * *   You cannot call the **CreateIpSets** operation again on the same GA instance before the previous operation is completed.
 *
 * @param request CreateIpSetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIpSetsResponse
 */
CreateIpSetsResponse Client::createIpSetsWithOptions(const CreateIpSetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccelerateRegion()) {
    query["AccelerateRegion"] = request.getAccelerateRegion();
  }

  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIpSets"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIpSetsResponse>();
}

/**
 * @summary Creates acceleration regions.
 *
 * @description *   **CreateIpSets** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of the task.
 *     *   If acceleration regions are in the **init** state, it indicates that the acceleration regions are being created. In this case, you can perform only query operations.
 *     *   If acceleration regions are in the **active** state, it indicates that the acceleration regions are created.
 * *   You cannot call the **CreateIpSets** operation again on the same GA instance before the previous operation is completed.
 *
 * @param request CreateIpSetsRequest
 * @return CreateIpSetsResponse
 */
CreateIpSetsResponse Client::createIpSets(const CreateIpSetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIpSetsWithOptions(request, runtime);
}

/**
 * @summary A listener checks connection requests and distributes the requests to endpoints based on forwarding rules that are defined by the scheduling algorithm. You can call the CreateListener operation to create a listener for a GA instance.
 *
 * @description When you call this operation, take note of the following items:
 * *   **CreateListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the status of the task.
 *     *   If the listener is in the **init** state, the listener is being created. In this state, you can perform only query operations.
 *     *   If the listener is in the **active** state, the listener is created.
 * *   You cannot repeatedly call the **CreateListener** operation for the same GA instance within the specified period of time.
 *
 * @param request CreateListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateListenerResponse
 */
CreateListenerResponse Client::createListenerWithOptions(const CreateListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasCertificates()) {
    query["Certificates"] = request.getCertificates();
  }

  if (!!request.hasClientAffinity()) {
    query["ClientAffinity"] = request.getClientAffinity();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCustomRoutingEndpointGroupConfigurations()) {
    query["CustomRoutingEndpointGroupConfigurations"] = request.getCustomRoutingEndpointGroupConfigurations();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEndpointGroupConfigurations()) {
    query["EndpointGroupConfigurations"] = request.getEndpointGroupConfigurations();
  }

  if (!!request.hasHttpVersion()) {
    query["HttpVersion"] = request.getHttpVersion();
  }

  if (!!request.hasIdleTimeout()) {
    query["IdleTimeout"] = request.getIdleTimeout();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPortRanges()) {
    query["PortRanges"] = request.getPortRanges();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestTimeout()) {
    query["RequestTimeout"] = request.getRequestTimeout();
  }

  if (!!request.hasSecurityPolicyId()) {
    query["SecurityPolicyId"] = request.getSecurityPolicyId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasXForwardedForConfig()) {
    query["XForwardedForConfig"] = request.getXForwardedForConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateListener"},
    {"version" , "2019-11-20"},
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
 * @summary A listener checks connection requests and distributes the requests to endpoints based on forwarding rules that are defined by the scheduling algorithm. You can call the CreateListener operation to create a listener for a GA instance.
 *
 * @description When you call this operation, take note of the following items:
 * *   **CreateListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the status of the task.
 *     *   If the listener is in the **init** state, the listener is being created. In this state, you can perform only query operations.
 *     *   If the listener is in the **active** state, the listener is created.
 * *   You cannot repeatedly call the **CreateListener** operation for the same GA instance within the specified period of time.
 *
 * @param request CreateListenerRequest
 * @return CreateListenerResponse
 */
CreateListenerResponse Client::createListener(const CreateListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createListenerWithOptions(request, runtime);
}

/**
 * @summary Creates secondary IP addresses for a CNAME that is assigned to a Global Accelerator (GA) instance. If an acceleration area of the GA instance becomes unavailable, access traffic is redirected to the secondary IP addresses.
 *
 * @description *   **CreateSpareIps** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of a GA instance.
 *     *   If the GA instance is in the **configuring** state, it indicates that secondary IP addresses are being created for the CNAME that is assigned to the GA instance. In this case, you can only perform query operations.
 *     *   If the GA instance is in the **active** state, it indicates that secondary IP addresses are created for the CNAME that is assigned to the GA instance.
 * *   The **CreateSpareIps** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request CreateSpareIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSpareIpsResponse
 */
CreateSpareIpsResponse Client::createSpareIpsWithOptions(const CreateSpareIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSpareIps()) {
    query["SpareIps"] = request.getSpareIps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSpareIps"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSpareIpsResponse>();
}

/**
 * @summary Creates secondary IP addresses for a CNAME that is assigned to a Global Accelerator (GA) instance. If an acceleration area of the GA instance becomes unavailable, access traffic is redirected to the secondary IP addresses.
 *
 * @description *   **CreateSpareIps** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of a GA instance.
 *     *   If the GA instance is in the **configuring** state, it indicates that secondary IP addresses are being created for the CNAME that is assigned to the GA instance. In this case, you can only perform query operations.
 *     *   If the GA instance is in the **active** state, it indicates that secondary IP addresses are created for the CNAME that is assigned to the GA instance.
 * *   The **CreateSpareIps** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request CreateSpareIpsRequest
 * @return CreateSpareIpsResponse
 */
CreateSpareIpsResponse Client::createSpareIps(const CreateSpareIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSpareIpsWithOptions(request, runtime);
}

/**
 * @summary Deletes a Global Accelerator (GA) instance.
 *
 * @description *   You cannot delete subscription GA instances.
 * *   **DeleteAccelerator** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of the task.
 *     *   If the GA instance is in the **deleting** state, the GA instance is being deleted. In this case, you can perform only query operations.
 *     *   If the GA instance cannot be queried, the GA instance is deleted.
 *
 * @param request DeleteAcceleratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAcceleratorResponse
 */
DeleteAcceleratorResponse Client::deleteAcceleratorWithOptions(const DeleteAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccelerator"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAcceleratorResponse>();
}

/**
 * @summary Deletes a Global Accelerator (GA) instance.
 *
 * @description *   You cannot delete subscription GA instances.
 * *   **DeleteAccelerator** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of the task.
 *     *   If the GA instance is in the **deleting** state, the GA instance is being deleted. In this case, you can perform only query operations.
 *     *   If the GA instance cannot be queried, the GA instance is deleted.
 *
 * @param request DeleteAcceleratorRequest
 * @return DeleteAcceleratorResponse
 */
DeleteAcceleratorResponse Client::deleteAccelerator(const DeleteAcceleratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAcceleratorWithOptions(request, runtime);
}

/**
 * @summary Deletes a access control list (ACL) of a Global Accelerator (GA) instance.
 *
 * @description **DeleteAcl** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [GetAcl](https://help.aliyun.com/document_detail/258292.html) operation to query the status of an ACL.
 * *   If the ACL is in the **deleting** state, it indicates that the ACL is being deleted. In this case, you can perform only query operations.
 * *   If the ACL cannot be queried, it indicates that the ACL is deleted.
 *
 * @param request DeleteAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAclResponse
 */
DeleteAclResponse Client::deleteAclWithOptions(const DeleteAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAcl"},
    {"version" , "2019-11-20"},
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
 * @summary Deletes a access control list (ACL) of a Global Accelerator (GA) instance.
 *
 * @description **DeleteAcl** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [GetAcl](https://help.aliyun.com/document_detail/258292.html) operation to query the status of an ACL.
 * *   If the ACL is in the **deleting** state, it indicates that the ACL is being deleted. In this case, you can perform only query operations.
 * *   If the ACL cannot be queried, it indicates that the ACL is deleted.
 *
 * @param request DeleteAclRequest
 * @return DeleteAclResponse
 */
DeleteAclResponse Client::deleteAcl(const DeleteAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAclWithOptions(request, runtime);
}

/**
 * @summary Deletes an origin probing task.
 *
 * @description *   **DeleteApplicationMonitor** is an asynchronous operation. After you call this operation, the system returns a request ID, but the operation is still being performed in the system background. You can call the [ListApplicationMonitor](https://help.aliyun.com/document_detail/408462.html) operation to query the state of an origin probing task.
 *     *   If the origin probing task is in the **deleting** state, it indicates that the task is being deleted. In this case, you can perform only query operations.
 *     *   If the origin probing task cannot be queried, it indicates that the task is deleted.
 * *   The **DeleteApplicationMonitor** operation cannot be called repeatedly for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DeleteApplicationMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationMonitorResponse
 */
DeleteApplicationMonitorResponse Client::deleteApplicationMonitorWithOptions(const DeleteApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplicationMonitor"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationMonitorResponse>();
}

/**
 * @summary Deletes an origin probing task.
 *
 * @description *   **DeleteApplicationMonitor** is an asynchronous operation. After you call this operation, the system returns a request ID, but the operation is still being performed in the system background. You can call the [ListApplicationMonitor](https://help.aliyun.com/document_detail/408462.html) operation to query the state of an origin probing task.
 *     *   If the origin probing task is in the **deleting** state, it indicates that the task is being deleted. In this case, you can perform only query operations.
 *     *   If the origin probing task cannot be queried, it indicates that the task is deleted.
 * *   The **DeleteApplicationMonitor** operation cannot be called repeatedly for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DeleteApplicationMonitorRequest
 * @return DeleteApplicationMonitorResponse
 */
DeleteApplicationMonitorResponse Client::deleteApplicationMonitor(const DeleteApplicationMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationMonitorWithOptions(request, runtime);
}

/**
 * @summary Deletes a bandwidth plan.
 *
 * @description *   By default, subscription bandwidth plans cannot be deleted. If you want to unsubscribe from subscription bandwidth plans, go to the [Unsubscribe](https://usercenter2-intl.aliyun.com/refund/refund) page. Before you can unsubscribe from a subscription bandwidth plan that is associated with a Global Accelerator (GA) instance, you must disassociate the bandwidth plan from the GA instance. For information about how to disassociate a bandwidth plan from a GA instance, see [BandwidthPackageRemoveAccelerator](https://help.aliyun.com/document_detail/153240.html).
 * *   Bandwidth plans that are associated with GA instances cannot be deleted. Before you can delete a bandwidth plan that is associated with a GA instance, you must disassociate the bandwidth plan from the GA instance. For information about how to disassociate a bandwidth plan from a GA instance, see [BandwidthPackageRemoveAccelerator](https://help.aliyun.com/document_detail/153240.html).
 * *   **DeleteBandwidthPackage** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query the status of the task.
 *     *   If the bandwidth plan is in the **deleting** state, the bandwidth plan is being deleted. In this case, you can perform only query operations.
 *     *   If the bandwidth plan cannot be found, the bandwidth plan is deleted.
 * *   The **DeleteBandwidthPackage** operation cannot be repeatedly called for the same bandwidth plan within a specific period of time.
 *
 * @param request DeleteBandwidthPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBandwidthPackageResponse
 */
DeleteBandwidthPackageResponse Client::deleteBandwidthPackageWithOptions(const DeleteBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidthPackageId()) {
    query["BandwidthPackageId"] = request.getBandwidthPackageId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBandwidthPackage"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBandwidthPackageResponse>();
}

/**
 * @summary Deletes a bandwidth plan.
 *
 * @description *   By default, subscription bandwidth plans cannot be deleted. If you want to unsubscribe from subscription bandwidth plans, go to the [Unsubscribe](https://usercenter2-intl.aliyun.com/refund/refund) page. Before you can unsubscribe from a subscription bandwidth plan that is associated with a Global Accelerator (GA) instance, you must disassociate the bandwidth plan from the GA instance. For information about how to disassociate a bandwidth plan from a GA instance, see [BandwidthPackageRemoveAccelerator](https://help.aliyun.com/document_detail/153240.html).
 * *   Bandwidth plans that are associated with GA instances cannot be deleted. Before you can delete a bandwidth plan that is associated with a GA instance, you must disassociate the bandwidth plan from the GA instance. For information about how to disassociate a bandwidth plan from a GA instance, see [BandwidthPackageRemoveAccelerator](https://help.aliyun.com/document_detail/153240.html).
 * *   **DeleteBandwidthPackage** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query the status of the task.
 *     *   If the bandwidth plan is in the **deleting** state, the bandwidth plan is being deleted. In this case, you can perform only query operations.
 *     *   If the bandwidth plan cannot be found, the bandwidth plan is deleted.
 * *   The **DeleteBandwidthPackage** operation cannot be repeatedly called for the same bandwidth plan within a specific period of time.
 *
 * @param request DeleteBandwidthPackageRequest
 * @return DeleteBandwidthPackageResponse
 */
DeleteBandwidthPackageResponse Client::deleteBandwidthPackage(const DeleteBandwidthPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBandwidthPackageWithOptions(request, runtime);
}

/**
 * @summary Deletes an accelerated IP address of a basic Global Accelerator (GA) instance.
 *
 * @description *   **DeleteBasicAccelerateIp** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) operation to query the status of an accelerated IP address.
 *     *   If an accelerated IP address is in the **deleting** state, the accelerated IP address is being deleted. In this case, you can perform only query operations.
 *     *   If the system fails to return information about an accelerated IP address, the accelerated IP address is deleted.
 * *   You cannot repeatedly call the **DeleteBasicAccelerateIp** operation for the same basic GA instance within a specific period of time.
 *
 * @param request DeleteBasicAccelerateIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBasicAccelerateIpResponse
 */
DeleteBasicAccelerateIpResponse Client::deleteBasicAccelerateIpWithOptions(const DeleteBasicAccelerateIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccelerateIpId()) {
    query["AccelerateIpId"] = request.getAccelerateIpId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBasicAccelerateIp"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBasicAccelerateIpResponse>();
}

/**
 * @summary Deletes an accelerated IP address of a basic Global Accelerator (GA) instance.
 *
 * @description *   **DeleteBasicAccelerateIp** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) operation to query the status of an accelerated IP address.
 *     *   If an accelerated IP address is in the **deleting** state, the accelerated IP address is being deleted. In this case, you can perform only query operations.
 *     *   If the system fails to return information about an accelerated IP address, the accelerated IP address is deleted.
 * *   You cannot repeatedly call the **DeleteBasicAccelerateIp** operation for the same basic GA instance within a specific period of time.
 *
 * @param request DeleteBasicAccelerateIpRequest
 * @return DeleteBasicAccelerateIpResponse
 */
DeleteBasicAccelerateIpResponse Client::deleteBasicAccelerateIp(const DeleteBasicAccelerateIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBasicAccelerateIpWithOptions(request, runtime);
}

/**
 * @summary Deletes a mapping between an accelerated IP address and an endpoint for a basic Global Accelerator (GA) instance.
 *
 * @description *   **DeleteBasicAccelerateIpEndpointRelation** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the following operations to check whether an accelerated IP address is disassociated from an endpoint:
 *     *   You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) and [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) operations to query the status of an accelerated IP address and an endpoint. If the accelerated IP address and the endpoint are in the **unbinding** state, the accelerated IP address is being disassociated from the endpoint. In this case, you can query the IP address and endpoint but cannot perform other operations.
 *     *   If the association status between the accelerated IP address and the endpoint cannot be queried by calling the [ListBasicAccelerateIpEndpointRelations](https://help.aliyun.com/document_detail/466803.html) operation, the accelerated IP address is disassociated from the endpoint.
 * *   The **DeleteBasicAccelerateIpEndpointRelation** API operation cannot be repeatedly called for the same basic GA instance within a period of time.
 *
 * @param request DeleteBasicAccelerateIpEndpointRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBasicAccelerateIpEndpointRelationResponse
 */
DeleteBasicAccelerateIpEndpointRelationResponse Client::deleteBasicAccelerateIpEndpointRelationWithOptions(const DeleteBasicAccelerateIpEndpointRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccelerateIpId()) {
    query["AccelerateIpId"] = request.getAccelerateIpId();
  }

  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBasicAccelerateIpEndpointRelation"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBasicAccelerateIpEndpointRelationResponse>();
}

/**
 * @summary Deletes a mapping between an accelerated IP address and an endpoint for a basic Global Accelerator (GA) instance.
 *
 * @description *   **DeleteBasicAccelerateIpEndpointRelation** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the following operations to check whether an accelerated IP address is disassociated from an endpoint:
 *     *   You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) and [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) operations to query the status of an accelerated IP address and an endpoint. If the accelerated IP address and the endpoint are in the **unbinding** state, the accelerated IP address is being disassociated from the endpoint. In this case, you can query the IP address and endpoint but cannot perform other operations.
 *     *   If the association status between the accelerated IP address and the endpoint cannot be queried by calling the [ListBasicAccelerateIpEndpointRelations](https://help.aliyun.com/document_detail/466803.html) operation, the accelerated IP address is disassociated from the endpoint.
 * *   The **DeleteBasicAccelerateIpEndpointRelation** API operation cannot be repeatedly called for the same basic GA instance within a period of time.
 *
 * @param request DeleteBasicAccelerateIpEndpointRelationRequest
 * @return DeleteBasicAccelerateIpEndpointRelationResponse
 */
DeleteBasicAccelerateIpEndpointRelationResponse Client::deleteBasicAccelerateIpEndpointRelation(const DeleteBasicAccelerateIpEndpointRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBasicAccelerateIpEndpointRelationWithOptions(request, runtime);
}

/**
 * @summary Deletes a basic Global Accelerator (GA) instance.
 *
 * @description *   You cannot delete subscription basic GA instances. You can unsubscribe from a basic GA instance on the [Unsubscribe](https://usercenter2-intl.aliyun.com/refund/refund) page. Before you unsubscribe from a basic GA instance, make sure that the acceleration areas and endpoint groups of the GA instance are deleted and no bandwidth plans are associated with the GA instance.
 *     *   For information about how to delete an acceleration area, see [DeleteBasicIpSet](https://help.aliyun.com/document_detail/2253388.html).
 *     *   For information about how to delete an endpoint group, see [DeleteBasicEndpointGroup](https://help.aliyun.com/document_detail/2253399.html).
 *     *   For information about how to disassociate a bandwidth plan from a basic GA instance, see [BandwidthPackageRemoveAccelerator](https://help.aliyun.com/document_detail/153240.html).
 * *   Before you call this operation to delete a pay-as-you-go basic GA instance, make sure that all data is migrated and the acceleration areas and endpoint groups of the instance are deleted.
 *     *   For information about how to delete an acceleration area, see [DeleteBasicIpSet](https://help.aliyun.com/document_detail/2253388.html).
 *     *   For information about how to delete an endpoint group, see [DeleteBasicEndpointGroup](https://help.aliyun.com/document_detail/2253399.html).
 * *   **DeleteBasicAccelerator** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicAccelerator](https://help.aliyun.com/document_detail/353188.html) operation to query the status of the task.
 *     *   If the basic GA instance is in the **deleting** state, it indicates that the instance is being deleted. In this case, you can perform only query operations.
 *     *   If the information about the basic GA instance is not displayed in the response, it indicates that the instance is deleted.
 *
 * @param request DeleteBasicAcceleratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBasicAcceleratorResponse
 */
DeleteBasicAcceleratorResponse Client::deleteBasicAcceleratorWithOptions(const DeleteBasicAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBasicAccelerator"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBasicAcceleratorResponse>();
}

/**
 * @summary Deletes a basic Global Accelerator (GA) instance.
 *
 * @description *   You cannot delete subscription basic GA instances. You can unsubscribe from a basic GA instance on the [Unsubscribe](https://usercenter2-intl.aliyun.com/refund/refund) page. Before you unsubscribe from a basic GA instance, make sure that the acceleration areas and endpoint groups of the GA instance are deleted and no bandwidth plans are associated with the GA instance.
 *     *   For information about how to delete an acceleration area, see [DeleteBasicIpSet](https://help.aliyun.com/document_detail/2253388.html).
 *     *   For information about how to delete an endpoint group, see [DeleteBasicEndpointGroup](https://help.aliyun.com/document_detail/2253399.html).
 *     *   For information about how to disassociate a bandwidth plan from a basic GA instance, see [BandwidthPackageRemoveAccelerator](https://help.aliyun.com/document_detail/153240.html).
 * *   Before you call this operation to delete a pay-as-you-go basic GA instance, make sure that all data is migrated and the acceleration areas and endpoint groups of the instance are deleted.
 *     *   For information about how to delete an acceleration area, see [DeleteBasicIpSet](https://help.aliyun.com/document_detail/2253388.html).
 *     *   For information about how to delete an endpoint group, see [DeleteBasicEndpointGroup](https://help.aliyun.com/document_detail/2253399.html).
 * *   **DeleteBasicAccelerator** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicAccelerator](https://help.aliyun.com/document_detail/353188.html) operation to query the status of the task.
 *     *   If the basic GA instance is in the **deleting** state, it indicates that the instance is being deleted. In this case, you can perform only query operations.
 *     *   If the information about the basic GA instance is not displayed in the response, it indicates that the instance is deleted.
 *
 * @param request DeleteBasicAcceleratorRequest
 * @return DeleteBasicAcceleratorResponse
 */
DeleteBasicAcceleratorResponse Client::deleteBasicAccelerator(const DeleteBasicAcceleratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBasicAcceleratorWithOptions(request, runtime);
}

/**
 * @summary Deletes an endpoint that is associated with a basic Global Accelerator (GA) instance.
 *
 * @description *   **DeleteBasicEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) operation to query the status of endpoints.
 *     *   If the endpoint is in the **deleting** state, it indicates that the endpoint is being deleted. In this case, you can perform only query operations.
 *     *   If the endpoint cannot be found, it indicates that the endpoint is deleted.
 * *   The **DeleteBasicEndpoint** API operation cannot be repeatedly called for the same basic GA instance within a period of time.
 *
 * @param request DeleteBasicEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBasicEndpointResponse
 */
DeleteBasicEndpointResponse Client::deleteBasicEndpointWithOptions(const DeleteBasicEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBasicEndpoint"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBasicEndpointResponse>();
}

/**
 * @summary Deletes an endpoint that is associated with a basic Global Accelerator (GA) instance.
 *
 * @description *   **DeleteBasicEndpoint** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) operation to query the status of endpoints.
 *     *   If the endpoint is in the **deleting** state, it indicates that the endpoint is being deleted. In this case, you can perform only query operations.
 *     *   If the endpoint cannot be found, it indicates that the endpoint is deleted.
 * *   The **DeleteBasicEndpoint** API operation cannot be repeatedly called for the same basic GA instance within a period of time.
 *
 * @param request DeleteBasicEndpointRequest
 * @return DeleteBasicEndpointResponse
 */
DeleteBasicEndpointResponse Client::deleteBasicEndpoint(const DeleteBasicEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBasicEndpointWithOptions(request, runtime);
}

/**
 * @summary Deletes an endpoint group that is associated with a basic Global Accelerator (GA) instance.
 *
 * @description Before you delete an endpoint group, take note of the following items:
 * *   If an endpoint in the endpoint group is associated with an accelerated IP address, you cannot delete the endpoint group. You can call the [DeleteBasicAccelerateIpEndpointRelation](https://help.aliyun.com/document_detail/2253413.html) operation to disassociate the endpoint from the accelerated IP address.
 * *   If no endpoint in the endpoint group is associated with an accelerated IP address, you can delete the endpoint group. When you delete an endpoint group, all endpoints in the endpoint group are deleted.
 * *   **DeleteBasicEndpointGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicEndpointGroup](https://help.aliyun.com/document_detail/362984.html) operation to query the status of the task.
 *     *   If the endpoint group is in the **deleting** state, the endpoint group is being deleted. In this case, you can perform only query operations.
 *     *   If the endpoint group cannot be queried, the endpoint group is deleted.
 * *   The **DeleteBasicEndpointGroup** operation cannot be repeatedly called for the same GA instance within a specific period of time.
 *
 * @param request DeleteBasicEndpointGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBasicEndpointGroupResponse
 */
DeleteBasicEndpointGroupResponse Client::deleteBasicEndpointGroupWithOptions(const DeleteBasicEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBasicEndpointGroup"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBasicEndpointGroupResponse>();
}

/**
 * @summary Deletes an endpoint group that is associated with a basic Global Accelerator (GA) instance.
 *
 * @description Before you delete an endpoint group, take note of the following items:
 * *   If an endpoint in the endpoint group is associated with an accelerated IP address, you cannot delete the endpoint group. You can call the [DeleteBasicAccelerateIpEndpointRelation](https://help.aliyun.com/document_detail/2253413.html) operation to disassociate the endpoint from the accelerated IP address.
 * *   If no endpoint in the endpoint group is associated with an accelerated IP address, you can delete the endpoint group. When you delete an endpoint group, all endpoints in the endpoint group are deleted.
 * *   **DeleteBasicEndpointGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicEndpointGroup](https://help.aliyun.com/document_detail/362984.html) operation to query the status of the task.
 *     *   If the endpoint group is in the **deleting** state, the endpoint group is being deleted. In this case, you can perform only query operations.
 *     *   If the endpoint group cannot be queried, the endpoint group is deleted.
 * *   The **DeleteBasicEndpointGroup** operation cannot be repeatedly called for the same GA instance within a specific period of time.
 *
 * @param request DeleteBasicEndpointGroupRequest
 * @return DeleteBasicEndpointGroupResponse
 */
DeleteBasicEndpointGroupResponse Client::deleteBasicEndpointGroup(const DeleteBasicEndpointGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBasicEndpointGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes the acceleration region of a basic Global Accelerator (GA) instance.
 *
 * @description *   If an accelerated IP address is associated with an endpoint, you cannot delete the acceleration region. You can call the [DeleteBasicAccelerateIpEndpointRelation](https://help.aliyun.com/document_detail/2253413.html) operation to disassociate the accelerated IP address from the endpoint.
 * *   \\*\\*DeleteBasicIpSet\\*\\* is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicIpSet](https://help.aliyun.com/document_detail/362987.html) operation to query the status of the task.
 *     *   If the acceleration region is in the **deleting** state, it indicates that the acceleration region is being deleted. In this case, you can perform only query operations.
 *     *   If the acceleration region cannot be queried, it indicates that the acceleration region is deleted.
 * *   The \\*\\*DeleteBasicIpSet\\*\\* operation cannot be repeatedly called for the same basic GA instance within a specific period of time.
 *
 * @param request DeleteBasicIpSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBasicIpSetResponse
 */
DeleteBasicIpSetResponse Client::deleteBasicIpSetWithOptions(const DeleteBasicIpSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasIpSetId()) {
    query["IpSetId"] = request.getIpSetId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBasicIpSet"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBasicIpSetResponse>();
}

/**
 * @summary Deletes the acceleration region of a basic Global Accelerator (GA) instance.
 *
 * @description *   If an accelerated IP address is associated with an endpoint, you cannot delete the acceleration region. You can call the [DeleteBasicAccelerateIpEndpointRelation](https://help.aliyun.com/document_detail/2253413.html) operation to disassociate the accelerated IP address from the endpoint.
 * *   \\*\\*DeleteBasicIpSet\\*\\* is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicIpSet](https://help.aliyun.com/document_detail/362987.html) operation to query the status of the task.
 *     *   If the acceleration region is in the **deleting** state, it indicates that the acceleration region is being deleted. In this case, you can perform only query operations.
 *     *   If the acceleration region cannot be queried, it indicates that the acceleration region is deleted.
 * *   The \\*\\*DeleteBasicIpSet\\*\\* operation cannot be repeatedly called for the same basic GA instance within a specific period of time.
 *
 * @param request DeleteBasicIpSetRequest
 * @return DeleteBasicIpSetResponse
 */
DeleteBasicIpSetResponse Client::deleteBasicIpSet(const DeleteBasicIpSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBasicIpSetWithOptions(request, runtime);
}

/**
 * @summary Deletes mappings from an endpoint group that is associated with a custom routing listener.
 *
 * @description *   **DeleteCustomRoutingEndpointGroupDestinations** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) to query the status of the task.
 *     *   If the endpoint group is in the **updating** state, it indicates that mappings are being deleted from the endpoint group. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state and no information about the mappings that you want to delete is found in the response when you call the [DescribeCustomRoutingEndpointGroupDestinations](https://help.aliyun.com/document_detail/449378.html) operation, it indicates the mappings are deleted from the endpoint group.
 * *   You cannot call the **DeleteCustomRoutingEndpointGroupDestinations** operation again on the same Global Accelerator (GA) instance before the previous request is completed.
 *
 * @param request DeleteCustomRoutingEndpointGroupDestinationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomRoutingEndpointGroupDestinationsResponse
 */
DeleteCustomRoutingEndpointGroupDestinationsResponse Client::deleteCustomRoutingEndpointGroupDestinationsWithOptions(const DeleteCustomRoutingEndpointGroupDestinationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDestinationIds()) {
    query["DestinationIds"] = request.getDestinationIds();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomRoutingEndpointGroupDestinations"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomRoutingEndpointGroupDestinationsResponse>();
}

/**
 * @summary Deletes mappings from an endpoint group that is associated with a custom routing listener.
 *
 * @description *   **DeleteCustomRoutingEndpointGroupDestinations** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) to query the status of the task.
 *     *   If the endpoint group is in the **updating** state, it indicates that mappings are being deleted from the endpoint group. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state and no information about the mappings that you want to delete is found in the response when you call the [DescribeCustomRoutingEndpointGroupDestinations](https://help.aliyun.com/document_detail/449378.html) operation, it indicates the mappings are deleted from the endpoint group.
 * *   You cannot call the **DeleteCustomRoutingEndpointGroupDestinations** operation again on the same Global Accelerator (GA) instance before the previous request is completed.
 *
 * @param request DeleteCustomRoutingEndpointGroupDestinationsRequest
 * @return DeleteCustomRoutingEndpointGroupDestinationsResponse
 */
DeleteCustomRoutingEndpointGroupDestinationsResponse Client::deleteCustomRoutingEndpointGroupDestinations(const DeleteCustomRoutingEndpointGroupDestinationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomRoutingEndpointGroupDestinationsWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple endpoint groups that are associated with a custom routing listener.
 *
 * @description *   **DeleteCustomRoutingEndpointGroups** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the state of the endpoint groups associated with a custom routing listener that you attempt to delete.
 *     *   If the endpoint groups are in the **deleting** state, the endpoint groups are being deleted. In this case, you can perform only query operations.
 *     *   If the endpoint groups cannot be queried, the endpoint groups are deleted.
 * *   You cannot use the **DeleteCustomRoutingEndpointGroups** operation on the same Global Accelerator (GA) instance before the previous operation is complete.
 *
 * @param request DeleteCustomRoutingEndpointGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomRoutingEndpointGroupsResponse
 */
DeleteCustomRoutingEndpointGroupsResponse Client::deleteCustomRoutingEndpointGroupsWithOptions(const DeleteCustomRoutingEndpointGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEndpointGroupIds()) {
    query["EndpointGroupIds"] = request.getEndpointGroupIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomRoutingEndpointGroups"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomRoutingEndpointGroupsResponse>();
}

/**
 * @summary Deletes multiple endpoint groups that are associated with a custom routing listener.
 *
 * @description *   **DeleteCustomRoutingEndpointGroups** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the state of the endpoint groups associated with a custom routing listener that you attempt to delete.
 *     *   If the endpoint groups are in the **deleting** state, the endpoint groups are being deleted. In this case, you can perform only query operations.
 *     *   If the endpoint groups cannot be queried, the endpoint groups are deleted.
 * *   You cannot use the **DeleteCustomRoutingEndpointGroups** operation on the same Global Accelerator (GA) instance before the previous operation is complete.
 *
 * @param request DeleteCustomRoutingEndpointGroupsRequest
 * @return DeleteCustomRoutingEndpointGroupsResponse
 */
DeleteCustomRoutingEndpointGroupsResponse Client::deleteCustomRoutingEndpointGroups(const DeleteCustomRoutingEndpointGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomRoutingEndpointGroupsWithOptions(request, runtime);
}

/**
 * @summary Deletes traffic destinations from an endpoint.
 *
 * @description *   **DeleteCustomRoutingEndpointTrafficPolicies** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of an endpoint group to check whether the traffic destinations are deleted.
 *     *   If the endpoint group is in the **updating** state, the traffic destinations are being deleted. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state and the traffic destinations that you want to delete cannot be queried by calling the [DescribeCustomRoutingEndPointTrafficPolicy](https://help.aliyun.com/document_detail/449392.html) operation, the traffic destinations are deleted.
 * *   The **DeleteCustomRoutingEndpointTrafficPolicies** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DeleteCustomRoutingEndpointTrafficPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomRoutingEndpointTrafficPoliciesResponse
 */
DeleteCustomRoutingEndpointTrafficPoliciesResponse Client::deleteCustomRoutingEndpointTrafficPoliciesWithOptions(const DeleteCustomRoutingEndpointTrafficPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasPolicyIds()) {
    query["PolicyIds"] = request.getPolicyIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomRoutingEndpointTrafficPolicies"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomRoutingEndpointTrafficPoliciesResponse>();
}

/**
 * @summary Deletes traffic destinations from an endpoint.
 *
 * @description *   **DeleteCustomRoutingEndpointTrafficPolicies** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of an endpoint group to check whether the traffic destinations are deleted.
 *     *   If the endpoint group is in the **updating** state, the traffic destinations are being deleted. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state and the traffic destinations that you want to delete cannot be queried by calling the [DescribeCustomRoutingEndPointTrafficPolicy](https://help.aliyun.com/document_detail/449392.html) operation, the traffic destinations are deleted.
 * *   The **DeleteCustomRoutingEndpointTrafficPolicies** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DeleteCustomRoutingEndpointTrafficPoliciesRequest
 * @return DeleteCustomRoutingEndpointTrafficPoliciesResponse
 */
DeleteCustomRoutingEndpointTrafficPoliciesResponse Client::deleteCustomRoutingEndpointTrafficPolicies(const DeleteCustomRoutingEndpointTrafficPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomRoutingEndpointTrafficPoliciesWithOptions(request, runtime);
}

/**
 * @summary Deletes endpoints from a custom routing listener.
 *
 * @description *   **DeleteCustomRoutingEndpoints** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) to query the status of the task.
 *     *   If an endpoint group is in the **updating** state, the endpoint is being deleted. In this case, you can perform only query operations.
 *     *   If an endpoint group is in the **active** state and the endpoint cannot be found after you call the [DescribeCustomRoutingEndpoint](https://help.aliyun.com/document_detail/449386.html) operation, the endpoint is deleted.
 * *   You cannot call the **DeleteCustomRoutingEndpoints** operation again on the same Global Accelerator (GA) instance before the previous task is completed.
 *
 * @param request DeleteCustomRoutingEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomRoutingEndpointsResponse
 */
DeleteCustomRoutingEndpointsResponse Client::deleteCustomRoutingEndpointsWithOptions(const DeleteCustomRoutingEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasEndpointIds()) {
    query["EndpointIds"] = request.getEndpointIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomRoutingEndpoints"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomRoutingEndpointsResponse>();
}

/**
 * @summary Deletes endpoints from a custom routing listener.
 *
 * @description *   **DeleteCustomRoutingEndpoints** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) to query the status of the task.
 *     *   If an endpoint group is in the **updating** state, the endpoint is being deleted. In this case, you can perform only query operations.
 *     *   If an endpoint group is in the **active** state and the endpoint cannot be found after you call the [DescribeCustomRoutingEndpoint](https://help.aliyun.com/document_detail/449386.html) operation, the endpoint is deleted.
 * *   You cannot call the **DeleteCustomRoutingEndpoints** operation again on the same Global Accelerator (GA) instance before the previous task is completed.
 *
 * @param request DeleteCustomRoutingEndpointsRequest
 * @return DeleteCustomRoutingEndpointsResponse
 */
DeleteCustomRoutingEndpointsResponse Client::deleteCustomRoutingEndpoints(const DeleteCustomRoutingEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomRoutingEndpointsWithOptions(request, runtime);
}

/**
 * @summary Disassociates a domain name from Global Accelerator (GA) instances.
 *
 * @description You cannot call the **DeleteDomainAcceleratorRelation** operation again by using the same Alibaba Cloud account before the previous operation is complete.
 *
 * @param request DeleteDomainAcceleratorRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainAcceleratorRelationResponse
 */
DeleteDomainAcceleratorRelationResponse Client::deleteDomainAcceleratorRelationWithOptions(const DeleteDomainAcceleratorRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorIds()) {
    query["AcceleratorIds"] = request.getAcceleratorIds();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDomainAcceleratorRelation"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDomainAcceleratorRelationResponse>();
}

/**
 * @summary Disassociates a domain name from Global Accelerator (GA) instances.
 *
 * @description You cannot call the **DeleteDomainAcceleratorRelation** operation again by using the same Alibaba Cloud account before the previous operation is complete.
 *
 * @param request DeleteDomainAcceleratorRelationRequest
 * @return DeleteDomainAcceleratorRelationResponse
 */
DeleteDomainAcceleratorRelationResponse Client::deleteDomainAcceleratorRelation(const DeleteDomainAcceleratorRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainAcceleratorRelationWithOptions(request, runtime);
}

/**
 * @summary Deletes an endpoint group.
 *
 * @description *   **DeleteEndpointGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the status of the endpoint group.
 *     *   If the endpoint group is in the **deleting** state, it indicates that the endpoint group is being deleted. In this case, you can perform only query operations.
 *     *   If the endpoint group cannot be queried, it indicates that the endpoint group is deleted.
 * *   The **DeleteEndpointGroup** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request DeleteEndpointGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEndpointGroupResponse
 */
DeleteEndpointGroupResponse Client::deleteEndpointGroupWithOptions(const DeleteEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEndpointGroup"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEndpointGroupResponse>();
}

/**
 * @summary Deletes an endpoint group.
 *
 * @description *   **DeleteEndpointGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the status of the endpoint group.
 *     *   If the endpoint group is in the **deleting** state, it indicates that the endpoint group is being deleted. In this case, you can perform only query operations.
 *     *   If the endpoint group cannot be queried, it indicates that the endpoint group is deleted.
 * *   The **DeleteEndpointGroup** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request DeleteEndpointGroupRequest
 * @return DeleteEndpointGroupResponse
 */
DeleteEndpointGroupResponse Client::deleteEndpointGroup(const DeleteEndpointGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEndpointGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes endpoint groups.
 *
 * @description *   **DeleteEndpointGroups** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the status of the task.
 *     *   If an endpoint group is in the **deleting** state, the endpoint group is being deleted. In this case, you can perform only query operations.
 *     *   If an endpoint group cannot be queried, the endpoint group is deleted.
 * *   The **DeleteEndpointGroups** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DeleteEndpointGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEndpointGroupsResponse
 */
DeleteEndpointGroupsResponse Client::deleteEndpointGroupsWithOptions(const DeleteEndpointGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEndpointGroupIds()) {
    query["EndpointGroupIds"] = request.getEndpointGroupIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEndpointGroups"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEndpointGroupsResponse>();
}

/**
 * @summary Deletes endpoint groups.
 *
 * @description *   **DeleteEndpointGroups** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the status of the task.
 *     *   If an endpoint group is in the **deleting** state, the endpoint group is being deleted. In this case, you can perform only query operations.
 *     *   If an endpoint group cannot be queried, the endpoint group is deleted.
 * *   The **DeleteEndpointGroups** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DeleteEndpointGroupsRequest
 * @return DeleteEndpointGroupsResponse
 */
DeleteEndpointGroupsResponse Client::deleteEndpointGroups(const DeleteEndpointGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEndpointGroupsWithOptions(request, runtime);
}

/**
 * @summary Deletes forwarding rules.
 *
 * @description *   **DeleteForwardingRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListForwardingRules](https://help.aliyun.com/document_detail/205817.html) operation to query the status of the task.
 *     *   If a forwarding rule is in the **deleting** state, the forwarding rule is being deleted. In this case, you can perform only query operations.
 *     *   If a forwarding rule cannot be queried, the forwarding rule is deleted.
 * *   The **DeleteForwardingRules** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DeleteForwardingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteForwardingRulesResponse
 */
DeleteForwardingRulesResponse Client::deleteForwardingRulesWithOptions(const DeleteForwardingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasForwardingRuleIds()) {
    query["ForwardingRuleIds"] = request.getForwardingRuleIds();
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
    {"action" , "DeleteForwardingRules"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteForwardingRulesResponse>();
}

/**
 * @summary Deletes forwarding rules.
 *
 * @description *   **DeleteForwardingRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListForwardingRules](https://help.aliyun.com/document_detail/205817.html) operation to query the status of the task.
 *     *   If a forwarding rule is in the **deleting** state, the forwarding rule is being deleted. In this case, you can perform only query operations.
 *     *   If a forwarding rule cannot be queried, the forwarding rule is deleted.
 * *   The **DeleteForwardingRules** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DeleteForwardingRulesRequest
 * @return DeleteForwardingRulesResponse
 */
DeleteForwardingRulesResponse Client::deleteForwardingRules(const DeleteForwardingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteForwardingRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes an acceleration region.
 *
 * @description *   **DeleteIpSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of an acceleration region.
 *     *   If the acceleration region is in the **deleting** state, it indicates that the acceleration region is being deleted. In this case, you can perform only query operations.
 *     *   If the acceleration region cannot be queried, it indicates that the acceleration region is deleted.
 * *   The **DeleteIpSet** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request DeleteIpSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpSetResponse
 */
DeleteIpSetResponse Client::deleteIpSetWithOptions(const DeleteIpSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasIpSetId()) {
    query["IpSetId"] = request.getIpSetId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIpSet"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIpSetResponse>();
}

/**
 * @summary Deletes an acceleration region.
 *
 * @description *   **DeleteIpSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of an acceleration region.
 *     *   If the acceleration region is in the **deleting** state, it indicates that the acceleration region is being deleted. In this case, you can perform only query operations.
 *     *   If the acceleration region cannot be queried, it indicates that the acceleration region is deleted.
 * *   The **DeleteIpSet** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request DeleteIpSetRequest
 * @return DeleteIpSetResponse
 */
DeleteIpSetResponse Client::deleteIpSet(const DeleteIpSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpSetWithOptions(request, runtime);
}

/**
 * @summary Deletes acceleration regions.
 *
 * @description *   **DeleteIpSets** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of the task.
 *     *   If the acceleration region is in the **deleting** state, the acceleration region is being deleted. In this case, you can perform only query operations.
 *     *   If you cannot query the acceleration region, the acceleration region is deleted.
 * *   You cannot repeatedly call the **DeleteIpSets** operation for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DeleteIpSetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpSetsResponse
 */
DeleteIpSetsResponse Client::deleteIpSetsWithOptions(const DeleteIpSetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpSetIds()) {
    query["IpSetIds"] = request.getIpSetIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIpSets"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIpSetsResponse>();
}

/**
 * @summary Deletes acceleration regions.
 *
 * @description *   **DeleteIpSets** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of the task.
 *     *   If the acceleration region is in the **deleting** state, the acceleration region is being deleted. In this case, you can perform only query operations.
 *     *   If you cannot query the acceleration region, the acceleration region is deleted.
 * *   You cannot repeatedly call the **DeleteIpSets** operation for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DeleteIpSetsRequest
 * @return DeleteIpSetsResponse
 */
DeleteIpSetsResponse Client::deleteIpSets(const DeleteIpSetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpSetsWithOptions(request, runtime);
}

/**
 * @summary Deletes a listener.
 *
 * @description *   Before you call the **DeleteListener** operation, make sure that no endpoint groups are associated with the listener that you want to delete. For information about how to delete an endpoint group, see the following topics:
 *     *   [DeleteEndpointGroup](https://help.aliyun.com/document_detail/2253305.html): deletes an endpoint group that is associated with an intelligent routing listener.
 *     *   [DeleteEndpointGroups](https://help.aliyun.com/document_detail/2253311.html): deletes multiple endpoint groups that are associated with intelligent routing listeners at the same time.
 *     *   [DeleteCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/2303183.html): deletes multiple endpoint groups that are associated with custom routing listeners at the same time.
 * *   **DeleteListener** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the status of the listener.
 *     *   If the listener is in the **deleting** state, the listener is being deleted. In this case, you can perform only query operations.
 *     *   If the listener cannot be queried, the listener is deleted.
 * *   You cannot repeatedly call the **DeleteListener** operation to delete the listeners of the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DeleteListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteListenerResponse
 */
DeleteListenerResponse Client::deleteListenerWithOptions(const DeleteListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteListener"},
    {"version" , "2019-11-20"},
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
 * @description *   Before you call the **DeleteListener** operation, make sure that no endpoint groups are associated with the listener that you want to delete. For information about how to delete an endpoint group, see the following topics:
 *     *   [DeleteEndpointGroup](https://help.aliyun.com/document_detail/2253305.html): deletes an endpoint group that is associated with an intelligent routing listener.
 *     *   [DeleteEndpointGroups](https://help.aliyun.com/document_detail/2253311.html): deletes multiple endpoint groups that are associated with intelligent routing listeners at the same time.
 *     *   [DeleteCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/2303183.html): deletes multiple endpoint groups that are associated with custom routing listeners at the same time.
 * *   **DeleteListener** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the status of the listener.
 *     *   If the listener is in the **deleting** state, the listener is being deleted. In this case, you can perform only query operations.
 *     *   If the listener cannot be queried, the listener is deleted.
 * *   You cannot repeatedly call the **DeleteListener** operation to delete the listeners of the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DeleteListenerRequest
 * @return DeleteListenerResponse
 */
DeleteListenerResponse Client::deleteListener(const DeleteListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteListenerWithOptions(request, runtime);
}

/**
 * @summary Deletes the secondary IP addresses that are associated with a CNAME.
 *
 * @description *   **DeleteSpareIps** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of a GA instance.
 *     *   If the GA instance is in the **configuring** state, it indicates that the secondary IP addresses for the CNAME are being deleted. In this case, you can perform only query operations.
 *     *   If the GA instance is in the **active** state and the secondary IP addresses for the CNAME cannot be queried by calling the [ListSpareIps](https://help.aliyun.com/document_detail/262121.html) operation, it indicates that the IP addresses are deleted.
 * *   The **DeleteSpareIps** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request DeleteSpareIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSpareIpsResponse
 */
DeleteSpareIpsResponse Client::deleteSpareIpsWithOptions(const DeleteSpareIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSpareIps()) {
    query["SpareIps"] = request.getSpareIps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSpareIps"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSpareIpsResponse>();
}

/**
 * @summary Deletes the secondary IP addresses that are associated with a CNAME.
 *
 * @description *   **DeleteSpareIps** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of a GA instance.
 *     *   If the GA instance is in the **configuring** state, it indicates that the secondary IP addresses for the CNAME are being deleted. In this case, you can perform only query operations.
 *     *   If the GA instance is in the **active** state and the secondary IP addresses for the CNAME cannot be queried by calling the [ListSpareIps](https://help.aliyun.com/document_detail/262121.html) operation, it indicates that the IP addresses are deleted.
 * *   The **DeleteSpareIps** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request DeleteSpareIpsRequest
 * @return DeleteSpareIpsResponse
 */
DeleteSpareIpsResponse Client::deleteSpareIps(const DeleteSpareIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSpareIpsWithOptions(request, runtime);
}

/**
 * @summary Queries information about a Global Accelerator (GA) instance.
 *
 * @param request DescribeAcceleratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAcceleratorResponse
 */
DescribeAcceleratorResponse Client::describeAcceleratorWithOptions(const DescribeAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccelerator"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAcceleratorResponse>();
}

/**
 * @summary Queries information about a Global Accelerator (GA) instance.
 *
 * @param request DescribeAcceleratorRequest
 * @return DescribeAcceleratorResponse
 */
DescribeAcceleratorResponse Client::describeAccelerator(const DescribeAcceleratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAcceleratorWithOptions(request, runtime);
}

/**
 * @summary Queries the auto-renewal status of a Global Accelerator (GA) instance.
 *
 * @param request DescribeAcceleratorAutoRenewAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAcceleratorAutoRenewAttributeResponse
 */
DescribeAcceleratorAutoRenewAttributeResponse Client::describeAcceleratorAutoRenewAttributeWithOptions(const DescribeAcceleratorAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAcceleratorAutoRenewAttribute"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAcceleratorAutoRenewAttributeResponse>();
}

/**
 * @summary Queries the auto-renewal status of a Global Accelerator (GA) instance.
 *
 * @param request DescribeAcceleratorAutoRenewAttributeRequest
 * @return DescribeAcceleratorAutoRenewAttributeResponse
 */
DescribeAcceleratorAutoRenewAttributeResponse Client::describeAcceleratorAutoRenewAttribute(const DescribeAcceleratorAutoRenewAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAcceleratorAutoRenewAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a pay-as-you-go Global Accelerator (GA) instance.
 *
 * @param request DescribeAcceleratorServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAcceleratorServiceStatusResponse
 */
DescribeAcceleratorServiceStatusResponse Client::describeAcceleratorServiceStatusWithOptions(const DescribeAcceleratorServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAcceleratorServiceStatus"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAcceleratorServiceStatusResponse>();
}

/**
 * @summary Queries the status of a pay-as-you-go Global Accelerator (GA) instance.
 *
 * @param request DescribeAcceleratorServiceStatusRequest
 * @return DescribeAcceleratorServiceStatusResponse
 */
DescribeAcceleratorServiceStatusResponse Client::describeAcceleratorServiceStatus(const DescribeAcceleratorServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAcceleratorServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about an origin probing task.
 *
 * @param request DescribeApplicationMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationMonitorResponse
 */
DescribeApplicationMonitorResponse Client::describeApplicationMonitorWithOptions(const DescribeApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationMonitor"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationMonitorResponse>();
}

/**
 * @summary Queries the detailed information about an origin probing task.
 *
 * @param request DescribeApplicationMonitorRequest
 * @return DescribeApplicationMonitorResponse
 */
DescribeApplicationMonitorResponse Client::describeApplicationMonitor(const DescribeApplicationMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApplicationMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries information about a bandwidth plan.
 *
 * @param request DescribeBandwidthPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBandwidthPackageResponse
 */
DescribeBandwidthPackageResponse Client::describeBandwidthPackageWithOptions(const DescribeBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidthPackageId()) {
    query["BandwidthPackageId"] = request.getBandwidthPackageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBandwidthPackage"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBandwidthPackageResponse>();
}

/**
 * @summary Queries information about a bandwidth plan.
 *
 * @param request DescribeBandwidthPackageRequest
 * @return DescribeBandwidthPackageResponse
 */
DescribeBandwidthPackageResponse Client::describeBandwidthPackage(const DescribeBandwidthPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBandwidthPackageWithOptions(request, runtime);
}

/**
 * @summary Queries the auto-renewal status of a bandwidth plan.
 *
 * @param request DescribeBandwidthPackageAutoRenewAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBandwidthPackageAutoRenewAttributeResponse
 */
DescribeBandwidthPackageAutoRenewAttributeResponse Client::describeBandwidthPackageAutoRenewAttributeWithOptions(const DescribeBandwidthPackageAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBandwidthPackageAutoRenewAttribute"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBandwidthPackageAutoRenewAttributeResponse>();
}

/**
 * @summary Queries the auto-renewal status of a bandwidth plan.
 *
 * @param request DescribeBandwidthPackageAutoRenewAttributeRequest
 * @return DescribeBandwidthPackageAutoRenewAttributeResponse
 */
DescribeBandwidthPackageAutoRenewAttributeResponse Client::describeBandwidthPackageAutoRenewAttribute(const DescribeBandwidthPackageAutoRenewAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBandwidthPackageAutoRenewAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries information about commodities.
 *
 * @param request DescribeCommodityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCommodityResponse
 */
DescribeCommodityResponse Client::describeCommodityWithOptions(const DescribeCommodityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.getCommodityCode();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCommodity"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCommodityResponse>();
}

/**
 * @summary Queries information about commodities.
 *
 * @param request DescribeCommodityRequest
 * @return DescribeCommodityResponse
 */
DescribeCommodityResponse Client::describeCommodity(const DescribeCommodityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCommodityWithOptions(request, runtime);
}

/**
 * @summary Queries the prices of commodities.
 *
 * @description You can call the [DescribeCommodity](https://help.aliyun.com/document_detail/2253233.html) operation to query information about the commodity modules.
 *
 * @param request DescribeCommodityPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCommodityPriceResponse
 */
DescribeCommodityPriceResponse Client::describeCommodityPriceWithOptions(const DescribeCommodityPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrders()) {
    query["Orders"] = request.getOrders();
  }

  if (!!request.hasPromotionOptionNo()) {
    query["PromotionOptionNo"] = request.getPromotionOptionNo();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCommodityPrice"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCommodityPriceResponse>();
}

/**
 * @summary Queries the prices of commodities.
 *
 * @description You can call the [DescribeCommodity](https://help.aliyun.com/document_detail/2253233.html) operation to query information about the commodity modules.
 *
 * @param request DescribeCommodityPriceRequest
 * @return DescribeCommodityPriceResponse
 */
DescribeCommodityPriceResponse Client::describeCommodityPrice(const DescribeCommodityPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCommodityPriceWithOptions(request, runtime);
}

/**
 * @summary Queries a traffic destination of an endpoint.
 *
 * @param request DescribeCustomRoutingEndPointTrafficPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomRoutingEndPointTrafficPolicyResponse
 */
DescribeCustomRoutingEndPointTrafficPolicyResponse Client::describeCustomRoutingEndPointTrafficPolicyWithOptions(const DescribeCustomRoutingEndPointTrafficPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomRoutingEndPointTrafficPolicy"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomRoutingEndPointTrafficPolicyResponse>();
}

/**
 * @summary Queries a traffic destination of an endpoint.
 *
 * @param request DescribeCustomRoutingEndPointTrafficPolicyRequest
 * @return DescribeCustomRoutingEndPointTrafficPolicyResponse
 */
DescribeCustomRoutingEndPointTrafficPolicyResponse Client::describeCustomRoutingEndPointTrafficPolicy(const DescribeCustomRoutingEndPointTrafficPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomRoutingEndPointTrafficPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries a specified endpoint that is associated with a custom routing listener.
 *
 * @param request DescribeCustomRoutingEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomRoutingEndpointResponse
 */
DescribeCustomRoutingEndpointResponse Client::describeCustomRoutingEndpointWithOptions(const DescribeCustomRoutingEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointGroup()) {
    query["EndpointGroup"] = request.getEndpointGroup();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomRoutingEndpoint"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomRoutingEndpointResponse>();
}

/**
 * @summary Queries a specified endpoint that is associated with a custom routing listener.
 *
 * @param request DescribeCustomRoutingEndpointRequest
 * @return DescribeCustomRoutingEndpointResponse
 */
DescribeCustomRoutingEndpointResponse Client::describeCustomRoutingEndpoint(const DescribeCustomRoutingEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomRoutingEndpointWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a specific endpoint group that is associated with a custom routing listener.
 *
 * @param request DescribeCustomRoutingEndpointGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomRoutingEndpointGroupResponse
 */
DescribeCustomRoutingEndpointGroupResponse Client::describeCustomRoutingEndpointGroupWithOptions(const DescribeCustomRoutingEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomRoutingEndpointGroup"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomRoutingEndpointGroupResponse>();
}

/**
 * @summary Queries the information about a specific endpoint group that is associated with a custom routing listener.
 *
 * @param request DescribeCustomRoutingEndpointGroupRequest
 * @return DescribeCustomRoutingEndpointGroupResponse
 */
DescribeCustomRoutingEndpointGroupResponse Client::describeCustomRoutingEndpointGroup(const DescribeCustomRoutingEndpointGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomRoutingEndpointGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the mapping configuration of a specified endpoint group that is associated with a custom routing listener.
 *
 * @param request DescribeCustomRoutingEndpointGroupDestinationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomRoutingEndpointGroupDestinationsResponse
 */
DescribeCustomRoutingEndpointGroupDestinationsResponse Client::describeCustomRoutingEndpointGroupDestinationsWithOptions(const DescribeCustomRoutingEndpointGroupDestinationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestinationId()) {
    query["DestinationId"] = request.getDestinationId();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomRoutingEndpointGroupDestinations"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomRoutingEndpointGroupDestinationsResponse>();
}

/**
 * @summary Queries the mapping configuration of a specified endpoint group that is associated with a custom routing listener.
 *
 * @param request DescribeCustomRoutingEndpointGroupDestinationsRequest
 * @return DescribeCustomRoutingEndpointGroupDestinationsResponse
 */
DescribeCustomRoutingEndpointGroupDestinationsResponse Client::describeCustomRoutingEndpointGroupDestinations(const DescribeCustomRoutingEndpointGroupDestinationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomRoutingEndpointGroupDestinationsWithOptions(request, runtime);
}

/**
 * @summary Queries information about an endpoint group.
 *
 * @param request DescribeEndpointGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEndpointGroupResponse
 */
DescribeEndpointGroupResponse Client::describeEndpointGroupWithOptions(const DescribeEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEndpointGroup"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEndpointGroupResponse>();
}

/**
 * @summary Queries information about an endpoint group.
 *
 * @param request DescribeEndpointGroupRequest
 * @return DescribeEndpointGroupResponse
 */
DescribeEndpointGroupResponse Client::describeEndpointGroup(const DescribeEndpointGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEndpointGroupWithOptions(request, runtime);
}

/**
 * @summary Queries information about an acceleration region.
 *
 * @param request DescribeIpSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIpSetResponse
 */
DescribeIpSetResponse Client::describeIpSetWithOptions(const DescribeIpSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpSetId()) {
    query["IpSetId"] = request.getIpSetId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIpSet"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIpSetResponse>();
}

/**
 * @summary Queries information about an acceleration region.
 *
 * @param request DescribeIpSetRequest
 * @return DescribeIpSetResponse
 */
DescribeIpSetResponse Client::describeIpSet(const DescribeIpSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIpSetWithOptions(request, runtime);
}

/**
 * @summary Queries configuration information about a listener of a Global Accelerator (GA) instance.
 *
 * @description This operation is used to query configuration information about a listener of a GA instance. The information includes the routing type of the listener, the status of the listener, the timestamp that indicates when the listener was created, and the listener ports.
 *
 * @param request DescribeListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeListenerResponse
 */
DescribeListenerResponse Client::describeListenerWithOptions(const DescribeListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeListener"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeListenerResponse>();
}

/**
 * @summary Queries configuration information about a listener of a Global Accelerator (GA) instance.
 *
 * @description This operation is used to query configuration information about a listener of a GA instance. The information includes the routing type of the listener, the status of the listener, the timestamp that indicates when the listener was created, and the listener ports.
 *
 * @param request DescribeListenerRequest
 * @return DescribeListenerResponse
 */
DescribeListenerResponse Client::describeListener(const DescribeListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeListenerWithOptions(request, runtime);
}

/**
 * @summary Queries the Simple Log Service project and Logstore associated with an endpoint group.
 *
 * @param request DescribeLogStoreOfEndpointGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogStoreOfEndpointGroupResponse
 */
DescribeLogStoreOfEndpointGroupResponse Client::describeLogStoreOfEndpointGroupWithOptions(const DescribeLogStoreOfEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
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
    {"action" , "DescribeLogStoreOfEndpointGroup"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogStoreOfEndpointGroupResponse>();
}

/**
 * @summary Queries the Simple Log Service project and Logstore associated with an endpoint group.
 *
 * @param request DescribeLogStoreOfEndpointGroupRequest
 * @return DescribeLogStoreOfEndpointGroupResponse
 */
DescribeLogStoreOfEndpointGroupResponse Client::describeLogStoreOfEndpointGroup(const DescribeLogStoreOfEndpointGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogStoreOfEndpointGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the regions where Global Accelerator (GA) instances are deployed.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2019-11-20"},
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
 * @summary Queries the regions where Global Accelerator (GA) instances are deployed.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Disassociates a Global Accelerator (GA) instance from an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @description *   The **DetachDdosFromAccelerator** operation is asynchronous. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) or [ListAccelerators](https://help.aliyun.com/document_detail/153236.html) operation to query the status of the GA instance.
 *     *   If the GA instance is in the **configuring** state, the Anti-DDoS Pro/Premium instance is being disassociated from the GA instance. In this case, you can perform only query operations.
 *     *   If the GA instance is in the **active** state, the Anti-DDoS Pro/Premium instance is disassociated from the GA instance.
 * *   **DetachDdosFromAccelerator** cannot be repeatedly called for the same GA instance within a specific period of time.
 *
 * @param request DetachDdosFromAcceleratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachDdosFromAcceleratorResponse
 */
DetachDdosFromAcceleratorResponse Client::detachDdosFromAcceleratorWithOptions(const DetachDdosFromAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasDdosConfigList()) {
    query["DdosConfigList"] = request.getDdosConfigList();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachDdosFromAccelerator"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachDdosFromAcceleratorResponse>();
}

/**
 * @summary Disassociates a Global Accelerator (GA) instance from an Anti-DDoS Pro or Anti-DDoS Premium instance.
 *
 * @description *   The **DetachDdosFromAccelerator** operation is asynchronous. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) or [ListAccelerators](https://help.aliyun.com/document_detail/153236.html) operation to query the status of the GA instance.
 *     *   If the GA instance is in the **configuring** state, the Anti-DDoS Pro/Premium instance is being disassociated from the GA instance. In this case, you can perform only query operations.
 *     *   If the GA instance is in the **active** state, the Anti-DDoS Pro/Premium instance is disassociated from the GA instance.
 * *   **DetachDdosFromAccelerator** cannot be repeatedly called for the same GA instance within a specific period of time.
 *
 * @param request DetachDdosFromAcceleratorRequest
 * @return DetachDdosFromAcceleratorResponse
 */
DetachDdosFromAcceleratorResponse Client::detachDdosFromAccelerator(const DetachDdosFromAcceleratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachDdosFromAcceleratorWithOptions(request, runtime);
}

/**
 * @summary Disassociates a Log Service Logstore from an endpoint group.
 *
 * @description ## Description
 * *   **DetachLogStoreFromEndpointGroup** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the state of an endpoint group.
 *     *   If the endpoint group is in the **updating** state, the Log Service Logstore is being disassociated from the endpoint group. In this case, you can perform only query operations.
 *     <!---->
 *     *   If the endpoint group is in the **active** state, the Log Service Logstore is disassociated from the endpoint group.
 * *   The **DetachLogStoreFromEndpointGroup** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DetachLogStoreFromEndpointGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachLogStoreFromEndpointGroupResponse
 */
DetachLogStoreFromEndpointGroupResponse Client::detachLogStoreFromEndpointGroupWithOptions(const DetachLogStoreFromEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointGroupIds()) {
    query["EndpointGroupIds"] = request.getEndpointGroupIds();
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
    {"action" , "DetachLogStoreFromEndpointGroup"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachLogStoreFromEndpointGroupResponse>();
}

/**
 * @summary Disassociates a Log Service Logstore from an endpoint group.
 *
 * @description ## Description
 * *   **DetachLogStoreFromEndpointGroup** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the state of an endpoint group.
 *     *   If the endpoint group is in the **updating** state, the Log Service Logstore is being disassociated from the endpoint group. In this case, you can perform only query operations.
 *     <!---->
 *     *   If the endpoint group is in the **active** state, the Log Service Logstore is disassociated from the endpoint group.
 * *   The **DetachLogStoreFromEndpointGroup** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DetachLogStoreFromEndpointGroupRequest
 * @return DetachLogStoreFromEndpointGroupResponse
 */
DetachLogStoreFromEndpointGroupResponse Client::detachLogStoreFromEndpointGroup(const DetachLogStoreFromEndpointGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachLogStoreFromEndpointGroupWithOptions(request, runtime);
}

/**
 * @summary Enables the diagnostic feature for an origin probing task.
 *
 * @param request DetectApplicationMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectApplicationMonitorResponse
 */
DetectApplicationMonitorResponse Client::detectApplicationMonitorWithOptions(const DetectApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectApplicationMonitor"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectApplicationMonitorResponse>();
}

/**
 * @summary Enables the diagnostic feature for an origin probing task.
 *
 * @param request DetectApplicationMonitorRequest
 * @return DetectApplicationMonitorResponse
 */
DetectApplicationMonitorResponse Client::detectApplicationMonitor(const DetectApplicationMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectApplicationMonitorWithOptions(request, runtime);
}

/**
 * @summary Disables an origin probing task.
 *
 * @param request DisableApplicationMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableApplicationMonitorResponse
 */
DisableApplicationMonitorResponse Client::disableApplicationMonitorWithOptions(const DisableApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableApplicationMonitor"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableApplicationMonitorResponse>();
}

/**
 * @summary Disables an origin probing task.
 *
 * @param request DisableApplicationMonitorRequest
 * @return DisableApplicationMonitorResponse
 */
DisableApplicationMonitorResponse Client::disableApplicationMonitor(const DisableApplicationMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableApplicationMonitorWithOptions(request, runtime);
}

/**
 * @summary 解绑GA集成云产品
 *
 * @param request DisassociateResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisassociateResourcesResponse
 */
DisassociateResourcesResponse Client::disassociateResourcesWithOptions(const DisassociateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasAssociatedResourceId()) {
    query["AssociatedResourceId"] = request.getAssociatedResourceId();
  }

  if (!!request.hasAssociatedResourceRegionId()) {
    query["AssociatedResourceRegionId"] = request.getAssociatedResourceRegionId();
  }

  if (!!request.hasAssociatedResourceType()) {
    query["AssociatedResourceType"] = request.getAssociatedResourceType();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisassociateResources"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisassociateResourcesResponse>();
}

/**
 * @summary 解绑GA集成云产品
 *
 * @param request DisassociateResourcesRequest
 * @return DisassociateResourcesResponse
 */
DisassociateResourcesResponse Client::disassociateResources(const DisassociateResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disassociateResourcesWithOptions(request, runtime);
}

/**
 * @summary Disassociates access control lists (ACLs) from a listener.
 *
 * @description ## Description
 * *   **DissociateAclsFromListener** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the state of a listener:
 *     *   If the listener is in the **updating** state, ACLs are being disassociated from the listener. In this case, you can perform only query operations.
 *     *   If the listener is in the **active** state, ACLs are disassociated from the listener.
 * *   The **DissociateAclsFromListener** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DissociateAclsFromListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateAclsFromListenerResponse
 */
DissociateAclsFromListenerResponse Client::dissociateAclsFromListenerWithOptions(const DissociateAclsFromListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclIds()) {
    query["AclIds"] = request.getAclIds();
  }

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
    {"action" , "DissociateAclsFromListener"},
    {"version" , "2019-11-20"},
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
 * @description ## Description
 * *   **DissociateAclsFromListener** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the state of a listener:
 *     *   If the listener is in the **updating** state, ACLs are being disassociated from the listener. In this case, you can perform only query operations.
 *     *   If the listener is in the **active** state, ACLs are disassociated from the listener.
 * *   The **DissociateAclsFromListener** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request DissociateAclsFromListenerRequest
 * @return DissociateAclsFromListenerResponse
 */
DissociateAclsFromListenerResponse Client::dissociateAclsFromListener(const DissociateAclsFromListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dissociateAclsFromListenerWithOptions(request, runtime);
}

/**
 * @summary Disassociates an additional certificate from an HTTPS listener.
 *
 * @description ## Description
 * *   **DissociateAdditionalCertificatesFromListener** is an asynchronous operation. After you send a request, the system returns a request ID, but this operation is still being performed in the system background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the state of an HTTPS listener.
 *     *   If the listener is in the **updating** state, it indicates that the additional certificate is being dissociated from the listener. In this case, you can perform only query operations.
 *     *   If the listener is in the **active** state, it indicates that the additional certificate is dissociated from the listener.
 * *   The **DissociateAdditionalCertificatesFromListener** operation cannot be repeatedly called for the same Global Accelerator (GA) instance with a specific period of time.
 *
 * @param request DissociateAdditionalCertificatesFromListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateAdditionalCertificatesFromListenerResponse
 */
DissociateAdditionalCertificatesFromListenerResponse Client::dissociateAdditionalCertificatesFromListenerWithOptions(const DissociateAdditionalCertificatesFromListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDomains()) {
    query["Domains"] = request.getDomains();
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
    {"action" , "DissociateAdditionalCertificatesFromListener"},
    {"version" , "2019-11-20"},
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
 * @summary Disassociates an additional certificate from an HTTPS listener.
 *
 * @description ## Description
 * *   **DissociateAdditionalCertificatesFromListener** is an asynchronous operation. After you send a request, the system returns a request ID, but this operation is still being performed in the system background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the state of an HTTPS listener.
 *     *   If the listener is in the **updating** state, it indicates that the additional certificate is being dissociated from the listener. In this case, you can perform only query operations.
 *     *   If the listener is in the **active** state, it indicates that the additional certificate is dissociated from the listener.
 * *   The **DissociateAdditionalCertificatesFromListener** operation cannot be repeatedly called for the same Global Accelerator (GA) instance with a specific period of time.
 *
 * @param request DissociateAdditionalCertificatesFromListenerRequest
 * @return DissociateAdditionalCertificatesFromListenerResponse
 */
DissociateAdditionalCertificatesFromListenerResponse Client::dissociateAdditionalCertificatesFromListener(const DissociateAdditionalCertificatesFromListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dissociateAdditionalCertificatesFromListenerWithOptions(request, runtime);
}

/**
 * @summary Enables an origin probing task.
 *
 * @param request EnableApplicationMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableApplicationMonitorResponse
 */
EnableApplicationMonitorResponse Client::enableApplicationMonitorWithOptions(const EnableApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableApplicationMonitor"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableApplicationMonitorResponse>();
}

/**
 * @summary Enables an origin probing task.
 *
 * @param request EnableApplicationMonitorRequest
 * @return EnableApplicationMonitorResponse
 */
EnableApplicationMonitorResponse Client::enableApplicationMonitor(const EnableApplicationMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableApplicationMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries an access control list (ACL).
 *
 * @param request GetAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAclResponse
 */
GetAclResponse Client::getAclWithOptions(const GetAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAcl"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAclResponse>();
}

/**
 * @summary Queries an access control list (ACL).
 *
 * @param request GetAclRequest
 * @return GetAclResponse
 */
GetAclResponse Client::getAcl(const GetAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAclWithOptions(request, runtime);
}

/**
 * @summary Queries the status of an accelerated IP address of a basic Global Accelerator (GA) instance.
 *
 * @param request GetBasicAccelerateIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBasicAccelerateIpResponse
 */
GetBasicAccelerateIpResponse Client::getBasicAccelerateIpWithOptions(const GetBasicAccelerateIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccelerateIpId()) {
    query["AccelerateIpId"] = request.getAccelerateIpId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBasicAccelerateIp"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBasicAccelerateIpResponse>();
}

/**
 * @summary Queries the status of an accelerated IP address of a basic Global Accelerator (GA) instance.
 *
 * @param request GetBasicAccelerateIpRequest
 * @return GetBasicAccelerateIpResponse
 */
GetBasicAccelerateIpResponse Client::getBasicAccelerateIp(const GetBasicAccelerateIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBasicAccelerateIpWithOptions(request, runtime);
}

/**
 * @summary Queries whether the accelerated IP address of a basic Global Accelerator (GA) instance is associated with an endpoint.
 *
 * @param request GetBasicAccelerateIpEndpointRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBasicAccelerateIpEndpointRelationResponse
 */
GetBasicAccelerateIpEndpointRelationResponse Client::getBasicAccelerateIpEndpointRelationWithOptions(const GetBasicAccelerateIpEndpointRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccelerateIpId()) {
    query["AccelerateIpId"] = request.getAccelerateIpId();
  }

  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBasicAccelerateIpEndpointRelation"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBasicAccelerateIpEndpointRelationResponse>();
}

/**
 * @summary Queries whether the accelerated IP address of a basic Global Accelerator (GA) instance is associated with an endpoint.
 *
 * @param request GetBasicAccelerateIpEndpointRelationRequest
 * @return GetBasicAccelerateIpEndpointRelationResponse
 */
GetBasicAccelerateIpEndpointRelationResponse Client::getBasicAccelerateIpEndpointRelation(const GetBasicAccelerateIpEndpointRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBasicAccelerateIpEndpointRelationWithOptions(request, runtime);
}

/**
 * @summary Queries the number of idle accelerated IP addresses of a Global Accelerator (GA) instance.
 *
 * @param request GetBasicAccelerateIpIdleCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBasicAccelerateIpIdleCountResponse
 */
GetBasicAccelerateIpIdleCountResponse Client::getBasicAccelerateIpIdleCountWithOptions(const GetBasicAccelerateIpIdleCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasIpSetId()) {
    query["IpSetId"] = request.getIpSetId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBasicAccelerateIpIdleCount"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBasicAccelerateIpIdleCountResponse>();
}

/**
 * @summary Queries the number of idle accelerated IP addresses of a Global Accelerator (GA) instance.
 *
 * @param request GetBasicAccelerateIpIdleCountRequest
 * @return GetBasicAccelerateIpIdleCountResponse
 */
GetBasicAccelerateIpIdleCountResponse Client::getBasicAccelerateIpIdleCount(const GetBasicAccelerateIpIdleCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBasicAccelerateIpIdleCountWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a basic Global Accelerator (GA) instance.
 *
 * @param request GetBasicAcceleratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBasicAcceleratorResponse
 */
GetBasicAcceleratorResponse Client::getBasicAcceleratorWithOptions(const GetBasicAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBasicAccelerator"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBasicAcceleratorResponse>();
}

/**
 * @summary Queries the information about a basic Global Accelerator (GA) instance.
 *
 * @param request GetBasicAcceleratorRequest
 * @return GetBasicAcceleratorResponse
 */
GetBasicAcceleratorResponse Client::getBasicAccelerator(const GetBasicAcceleratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBasicAcceleratorWithOptions(request, runtime);
}

/**
 * @summary Queries detailed information about an endpoint that is associated with a basic Global Accelerator (GA) instance.
 *
 * @param request GetBasicEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBasicEndpointResponse
 */
GetBasicEndpointResponse Client::getBasicEndpointWithOptions(const GetBasicEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBasicEndpoint"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBasicEndpointResponse>();
}

/**
 * @summary Queries detailed information about an endpoint that is associated with a basic Global Accelerator (GA) instance.
 *
 * @param request GetBasicEndpointRequest
 * @return GetBasicEndpointResponse
 */
GetBasicEndpointResponse Client::getBasicEndpoint(const GetBasicEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBasicEndpointWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the endpoint group of a basic GA instance.
 *
 * @param request GetBasicEndpointGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBasicEndpointGroupResponse
 */
GetBasicEndpointGroupResponse Client::getBasicEndpointGroupWithOptions(const GetBasicEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBasicEndpointGroup"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBasicEndpointGroupResponse>();
}

/**
 * @summary Queries the information about the endpoint group of a basic GA instance.
 *
 * @param request GetBasicEndpointGroupRequest
 * @return GetBasicEndpointGroupResponse
 */
GetBasicEndpointGroupResponse Client::getBasicEndpointGroup(const GetBasicEndpointGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBasicEndpointGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the acceleration region of a basic Global Accelerator (GA) instance.
 *
 * @param request GetBasicIpSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBasicIpSetResponse
 */
GetBasicIpSetResponse Client::getBasicIpSetWithOptions(const GetBasicIpSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasIpSetId()) {
    query["IpSetId"] = request.getIpSetId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBasicIpSet"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBasicIpSetResponse>();
}

/**
 * @summary Queries the information about the acceleration region of a basic Global Accelerator (GA) instance.
 *
 * @param request GetBasicIpSetRequest
 * @return GetBasicIpSetResponse
 */
GetBasicIpSetResponse Client::getBasicIpSet(const GetBasicIpSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBasicIpSetWithOptions(request, runtime);
}

/**
 * @summary 获取GA实例关联的云产品
 *
 * @param request GetGlobalAcceleratorResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGlobalAcceleratorResourcesResponse
 */
GetGlobalAcceleratorResourcesResponse Client::getGlobalAcceleratorResourcesWithOptions(const GetGlobalAcceleratorResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasAssociatedResourceId()) {
    query["AssociatedResourceId"] = request.getAssociatedResourceId();
  }

  if (!!request.hasAssociatedResourceRegionId()) {
    query["AssociatedResourceRegionId"] = request.getAssociatedResourceRegionId();
  }

  if (!!request.hasAssociatedResourceType()) {
    query["AssociatedResourceType"] = request.getAssociatedResourceType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGlobalAcceleratorResources"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGlobalAcceleratorResourcesResponse>();
}

/**
 * @summary 获取GA实例关联的云产品
 *
 * @param request GetGlobalAcceleratorResourcesRequest
 * @return GetGlobalAcceleratorResourcesResponse
 */
GetGlobalAcceleratorResourcesResponse Client::getGlobalAcceleratorResources(const GetGlobalAcceleratorResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGlobalAcceleratorResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the health status of the endpoints and endpoint groups of a listener.
 *
 * @param request GetHealthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHealthStatusResponse
 */
GetHealthStatusResponse Client::getHealthStatusWithOptions(const GetHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

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
    {"action" , "GetHealthStatus"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHealthStatusResponse>();
}

/**
 * @summary Queries the health status of the endpoints and endpoint groups of a listener.
 *
 * @param request GetHealthStatusRequest
 * @return GetHealthStatusResponse
 */
GetHealthStatusResponse Client::getHealthStatus(const GetHealthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHealthStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the number of invalid domain names.
 *
 * @param request GetInvalidDomainCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInvalidDomainCountResponse
 */
GetInvalidDomainCountResponse Client::getInvalidDomainCountWithOptions(const GetInvalidDomainCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInvalidDomainCount"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInvalidDomainCountResponse>();
}

/**
 * @summary Queries the number of invalid domain names.
 *
 * @param request GetInvalidDomainCountRequest
 * @return GetInvalidDomainCountResponse
 */
GetInvalidDomainCountResponse Client::getInvalidDomainCount(const GetInvalidDomainCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInvalidDomainCountWithOptions(request, runtime);
}

/**
 * @summary Queries the maximum bandwidth of an acceleration area.
 *
 * @param request GetIpsetsBandwidthLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIpsetsBandwidthLimitResponse
 */
GetIpsetsBandwidthLimitResponse Client::getIpsetsBandwidthLimitWithOptions(const GetIpsetsBandwidthLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIpsetsBandwidthLimit"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIpsetsBandwidthLimitResponse>();
}

/**
 * @summary Queries the maximum bandwidth of an acceleration area.
 *
 * @param request GetIpsetsBandwidthLimitRequest
 * @return GetIpsetsBandwidthLimitResponse
 */
GetIpsetsBandwidthLimitResponse Client::getIpsetsBandwidthLimit(const GetIpsetsBandwidthLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIpsetsBandwidthLimitWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a secondary IP address that is associated with a CNAME.
 *
 * @param request GetSpareIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSpareIpResponse
 */
GetSpareIpResponse Client::getSpareIpWithOptions(const GetSpareIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSpareIp()) {
    query["SpareIp"] = request.getSpareIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSpareIp"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSpareIpResponse>();
}

/**
 * @summary Queries the status of a secondary IP address that is associated with a CNAME.
 *
 * @param request GetSpareIpRequest
 * @return GetSpareIpResponse
 */
GetSpareIpResponse Client::getSpareIp(const GetSpareIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSpareIpWithOptions(request, runtime);
}

/**
 * @summary Queries available acceleration areas and regions.
 *
 * @param request ListAccelerateAreasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccelerateAreasResponse
 */
ListAccelerateAreasResponse Client::listAccelerateAreasWithOptions(const ListAccelerateAreasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccelerateAreas"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccelerateAreasResponse>();
}

/**
 * @summary Queries available acceleration areas and regions.
 *
 * @param request ListAccelerateAreasRequest
 * @return ListAccelerateAreasResponse
 */
ListAccelerateAreasResponse Client::listAccelerateAreas(const ListAccelerateAreasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccelerateAreasWithOptions(request, runtime);
}

/**
 * @summary Queries Global Accelerator (GA) instances.
 *
 * @param request ListAcceleratorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAcceleratorsResponse
 */
ListAcceleratorsResponse Client::listAcceleratorsWithOptions(const ListAcceleratorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccelerators"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAcceleratorsResponse>();
}

/**
 * @summary Queries Global Accelerator (GA) instances.
 *
 * @param request ListAcceleratorsRequest
 * @return ListAcceleratorsResponse
 */
ListAcceleratorsResponse Client::listAccelerators(const ListAcceleratorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAcceleratorsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of access control lists (ACLs).
 *
 * @param request ListAclsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAclsResponse
 */
ListAclsResponse Client::listAclsWithOptions(const ListAclsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclIds()) {
    query["AclIds"] = request.getAclIds();
  }

  if (!!request.hasAclName()) {
    query["AclName"] = request.getAclName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAcls"},
    {"version" , "2019-11-20"},
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
 * @summary Queries a list of access control lists (ACLs).
 *
 * @param request ListAclsRequest
 * @return ListAclsResponse
 */
ListAclsResponse Client::listAcls(const ListAclsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAclsWithOptions(request, runtime);
}

/**
 * @summary Queries origin probing tasks.
 *
 * @param request ListApplicationMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationMonitorResponse
 */
ListApplicationMonitorResponse Client::listApplicationMonitorWithOptions(const ListApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSearchValue()) {
    query["SearchValue"] = request.getSearchValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationMonitor"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationMonitorResponse>();
}

/**
 * @summary Queries origin probing tasks.
 *
 * @param request ListApplicationMonitorRequest
 * @return ListApplicationMonitorResponse
 */
ListApplicationMonitorResponse Client::listApplicationMonitor(const ListApplicationMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries the diagnostic results of origin probing tasks.
 *
 * @param request ListApplicationMonitorDetectResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationMonitorDetectResultResponse
 */
ListApplicationMonitorDetectResultResponse Client::listApplicationMonitorDetectResultWithOptions(const ListApplicationMonitorDetectResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationMonitorDetectResult"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationMonitorDetectResultResponse>();
}

/**
 * @summary Queries the diagnostic results of origin probing tasks.
 *
 * @param request ListApplicationMonitorDetectResultRequest
 * @return ListApplicationMonitorDetectResultResponse
 */
ListApplicationMonitorDetectResultResponse Client::listApplicationMonitorDetectResult(const ListApplicationMonitorDetectResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationMonitorDetectResultWithOptions(request, runtime);
}

/**
 * @summary Queries available acceleration regions.
 *
 * @param request ListAvailableAccelerateAreasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAvailableAccelerateAreasResponse
 */
ListAvailableAccelerateAreasResponse Client::listAvailableAccelerateAreasWithOptions(const ListAvailableAccelerateAreasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasAccessMode()) {
    query["AccessMode"] = request.getAccessMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAvailableAccelerateAreas"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAvailableAccelerateAreasResponse>();
}

/**
 * @summary Queries available acceleration regions.
 *
 * @param request ListAvailableAccelerateAreasRequest
 * @return ListAvailableAccelerateAreasResponse
 */
ListAvailableAccelerateAreasResponse Client::listAvailableAccelerateAreas(const ListAvailableAccelerateAreasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAvailableAccelerateAreasWithOptions(request, runtime);
}

/**
 * @summary Queries the available acceleration regions of a Global Accelerator (GA) instance.
 *
 * @param request ListAvailableBusiRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAvailableBusiRegionsResponse
 */
ListAvailableBusiRegionsResponse Client::listAvailableBusiRegionsWithOptions(const ListAvailableBusiRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAvailableBusiRegions"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAvailableBusiRegionsResponse>();
}

/**
 * @summary Queries the available acceleration regions of a Global Accelerator (GA) instance.
 *
 * @param request ListAvailableBusiRegionsRequest
 * @return ListAvailableBusiRegionsResponse
 */
ListAvailableBusiRegionsResponse Client::listAvailableBusiRegions(const ListAvailableBusiRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAvailableBusiRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries bandwidth plans.
 *
 * @param request ListBandwidthPackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBandwidthPackagesResponse
 */
ListBandwidthPackagesResponse Client::listBandwidthPackagesWithOptions(const ListBandwidthPackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidthPackageId()) {
    query["BandwidthPackageId"] = request.getBandwidthPackageId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBandwidthPackages"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBandwidthPackagesResponse>();
}

/**
 * @summary Queries bandwidth plans.
 *
 * @param request ListBandwidthPackagesRequest
 * @return ListBandwidthPackagesResponse
 */
ListBandwidthPackagesResponse Client::listBandwidthPackages(const ListBandwidthPackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBandwidthPackagesWithOptions(request, runtime);
}

/**
 * @summary Queries bandwidth plans.
 *
 * @description To query the detailed information about a bandwidth plan, call the **ListBandwidthPackages** operation. For more information, see [ListBandwidthPackages](https://help.aliyun.com/document_detail/2253239.html).
 *
 * @param request ListBandwidthackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBandwidthackagesResponse
 */
ListBandwidthackagesResponse Client::listBandwidthackagesWithOptions(const ListBandwidthackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBandwidthackages"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBandwidthackagesResponse>();
}

/**
 * @summary Queries bandwidth plans.
 *
 * @description To query the detailed information about a bandwidth plan, call the **ListBandwidthPackages** operation. For more information, see [ListBandwidthPackages](https://help.aliyun.com/document_detail/2253239.html).
 *
 * @param request ListBandwidthackagesRequest
 * @return ListBandwidthackagesResponse
 */
ListBandwidthackagesResponse Client::listBandwidthackages(const ListBandwidthackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBandwidthackagesWithOptions(request, runtime);
}

/**
 * @summary Queries whether the accelerated IP address of a basic Global Accelerator (GA) instance is associated with an endpoint.
 *
 * @param request ListBasicAccelerateIpEndpointRelationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBasicAccelerateIpEndpointRelationsResponse
 */
ListBasicAccelerateIpEndpointRelationsResponse Client::listBasicAccelerateIpEndpointRelationsWithOptions(const ListBasicAccelerateIpEndpointRelationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccelerateIpId()) {
    query["AccelerateIpId"] = request.getAccelerateIpId();
  }

  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBasicAccelerateIpEndpointRelations"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBasicAccelerateIpEndpointRelationsResponse>();
}

/**
 * @summary Queries whether the accelerated IP address of a basic Global Accelerator (GA) instance is associated with an endpoint.
 *
 * @param request ListBasicAccelerateIpEndpointRelationsRequest
 * @return ListBasicAccelerateIpEndpointRelationsResponse
 */
ListBasicAccelerateIpEndpointRelationsResponse Client::listBasicAccelerateIpEndpointRelations(const ListBasicAccelerateIpEndpointRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBasicAccelerateIpEndpointRelationsWithOptions(request, runtime);
}

/**
 * @summary Queries the accelerated IP addresses in the acceleration region of a basic Global Accelerator (GA) instance.
 *
 * @param request ListBasicAccelerateIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBasicAccelerateIpsResponse
 */
ListBasicAccelerateIpsResponse Client::listBasicAccelerateIpsWithOptions(const ListBasicAccelerateIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccelerateIpAddress()) {
    query["AccelerateIpAddress"] = request.getAccelerateIpAddress();
  }

  if (!!request.hasAccelerateIpId()) {
    query["AccelerateIpId"] = request.getAccelerateIpId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasIpSetId()) {
    query["IpSetId"] = request.getIpSetId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBasicAccelerateIps"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBasicAccelerateIpsResponse>();
}

/**
 * @summary Queries the accelerated IP addresses in the acceleration region of a basic Global Accelerator (GA) instance.
 *
 * @param request ListBasicAccelerateIpsRequest
 * @return ListBasicAccelerateIpsResponse
 */
ListBasicAccelerateIpsResponse Client::listBasicAccelerateIps(const ListBasicAccelerateIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBasicAccelerateIpsWithOptions(request, runtime);
}

/**
 * @summary Queries basic Global Accelerator (GA) instances.
 *
 * @param request ListBasicAcceleratorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBasicAcceleratorsResponse
 */
ListBasicAcceleratorsResponse Client::listBasicAcceleratorsWithOptions(const ListBasicAcceleratorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBasicAccelerators"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBasicAcceleratorsResponse>();
}

/**
 * @summary Queries basic Global Accelerator (GA) instances.
 *
 * @param request ListBasicAcceleratorsRequest
 * @return ListBasicAcceleratorsResponse
 */
ListBasicAcceleratorsResponse Client::listBasicAccelerators(const ListBasicAcceleratorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBasicAcceleratorsWithOptions(request, runtime);
}

/**
 * @summary Queries the endpoints that are associated with a basic Global Accelerator (GA) instance.
 *
 * @param request ListBasicEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBasicEndpointsResponse
 */
ListBasicEndpointsResponse Client::listBasicEndpointsWithOptions(const ListBasicEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.getEndpointType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBasicEndpoints"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBasicEndpointsResponse>();
}

/**
 * @summary Queries the endpoints that are associated with a basic Global Accelerator (GA) instance.
 *
 * @param request ListBasicEndpointsRequest
 * @return ListBasicEndpointsResponse
 */
ListBasicEndpointsResponse Client::listBasicEndpoints(const ListBasicEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBasicEndpointsWithOptions(request, runtime);
}

/**
 * @summary Queries the acceleration regions that are supported by Global Accelerator (GA).
 *
 * @param request ListBusiRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBusiRegionsResponse
 */
ListBusiRegionsResponse Client::listBusiRegionsWithOptions(const ListBusiRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBusiRegions"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBusiRegionsResponse>();
}

/**
 * @summary Queries the acceleration regions that are supported by Global Accelerator (GA).
 *
 * @param request ListBusiRegionsRequest
 * @return ListBusiRegionsResponse
 */
ListBusiRegionsResponse Client::listBusiRegions(const ListBusiRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBusiRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries available acceleration areas and regions.
 *
 * @description You can call this operation to query the acceleration areas and regions that you can specify on the wizard page of Global Accelerator (GA) and for free-trial GA instances. You can filter acceleration areas and regions based on specified conditions.
 *
 * @param request ListCommonAreasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCommonAreasResponse
 */
ListCommonAreasResponse Client::listCommonAreasWithOptions(const ListCommonAreasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasIsEpg()) {
    query["IsEpg"] = request.getIsEpg();
  }

  if (!!request.hasIsIpSet()) {
    query["IsIpSet"] = request.getIsIpSet();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCommonAreas"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCommonAreasResponse>();
}

/**
 * @summary Queries available acceleration areas and regions.
 *
 * @description You can call this operation to query the acceleration areas and regions that you can specify on the wizard page of Global Accelerator (GA) and for free-trial GA instances. You can filter acceleration areas and regions based on specified conditions.
 *
 * @param request ListCommonAreasRequest
 * @return ListCommonAreasResponse
 */
ListCommonAreasResponse Client::listCommonAreas(const ListCommonAreasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCommonAreasWithOptions(request, runtime);
}

/**
 * @summary Queries endpoint group mapping configurations of a custom routing listener of a Global Accelerator (GA) instance.
 *
 * @param request ListCustomRoutingEndpointGroupDestinationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomRoutingEndpointGroupDestinationsResponse
 */
ListCustomRoutingEndpointGroupDestinationsResponse Client::listCustomRoutingEndpointGroupDestinationsWithOptions(const ListCustomRoutingEndpointGroupDestinationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasFromPort()) {
    query["FromPort"] = request.getFromPort();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProtocols()) {
    query["Protocols"] = request.getProtocols();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasToPort()) {
    query["ToPort"] = request.getToPort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomRoutingEndpointGroupDestinations"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomRoutingEndpointGroupDestinationsResponse>();
}

/**
 * @summary Queries endpoint group mapping configurations of a custom routing listener of a Global Accelerator (GA) instance.
 *
 * @param request ListCustomRoutingEndpointGroupDestinationsRequest
 * @return ListCustomRoutingEndpointGroupDestinationsResponse
 */
ListCustomRoutingEndpointGroupDestinationsResponse Client::listCustomRoutingEndpointGroupDestinations(const ListCustomRoutingEndpointGroupDestinationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomRoutingEndpointGroupDestinationsWithOptions(request, runtime);
}

/**
 * @summary Queries the endpoint groups that are associated with a custom routing listener.
 *
 * @description ## Debugging
 * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code for different SDKs.](https://api.aliyun.com/#product=Ga\\&api=ListCustomRoutingEndpointGroups\\&type=RPC\\&version=2019-11-20)
 *
 * @param request ListCustomRoutingEndpointGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomRoutingEndpointGroupsResponse
 */
ListCustomRoutingEndpointGroupsResponse Client::listCustomRoutingEndpointGroupsWithOptions(const ListCustomRoutingEndpointGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasAccessLogSwitch()) {
    query["AccessLogSwitch"] = request.getAccessLogSwitch();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomRoutingEndpointGroups"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomRoutingEndpointGroupsResponse>();
}

/**
 * @summary Queries the endpoint groups that are associated with a custom routing listener.
 *
 * @description ## Debugging
 * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code for different SDKs.](https://api.aliyun.com/#product=Ga\\&api=ListCustomRoutingEndpointGroups\\&type=RPC\\&version=2019-11-20)
 *
 * @param request ListCustomRoutingEndpointGroupsRequest
 * @return ListCustomRoutingEndpointGroupsResponse
 */
ListCustomRoutingEndpointGroupsResponse Client::listCustomRoutingEndpointGroups(const ListCustomRoutingEndpointGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomRoutingEndpointGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic policies of an endpoint that belongs to a custom routing listener.
 *
 * @param request ListCustomRoutingEndpointTrafficPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomRoutingEndpointTrafficPoliciesResponse
 */
ListCustomRoutingEndpointTrafficPoliciesResponse Client::listCustomRoutingEndpointTrafficPoliciesWithOptions(const ListCustomRoutingEndpointTrafficPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomRoutingEndpointTrafficPolicies"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomRoutingEndpointTrafficPoliciesResponse>();
}

/**
 * @summary Queries the traffic policies of an endpoint that belongs to a custom routing listener.
 *
 * @param request ListCustomRoutingEndpointTrafficPoliciesRequest
 * @return ListCustomRoutingEndpointTrafficPoliciesResponse
 */
ListCustomRoutingEndpointTrafficPoliciesResponse Client::listCustomRoutingEndpointTrafficPolicies(const ListCustomRoutingEndpointTrafficPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomRoutingEndpointTrafficPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of an endpoint.
 *
 * @param request ListCustomRoutingEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomRoutingEndpointsResponse
 */
ListCustomRoutingEndpointsResponse Client::listCustomRoutingEndpointsWithOptions(const ListCustomRoutingEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomRoutingEndpoints"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomRoutingEndpointsResponse>();
}

/**
 * @summary Queries the configurations of an endpoint.
 *
 * @param request ListCustomRoutingEndpointsRequest
 * @return ListCustomRoutingEndpointsResponse
 */
ListCustomRoutingEndpointsResponse Client::listCustomRoutingEndpoints(const ListCustomRoutingEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomRoutingEndpointsWithOptions(request, runtime);
}

/**
 * @summary Queries the port mapping table of a custom routing listener.
 *
 * @description After you configure a custom routing listener for a Global Accelerator (GA) instance, the instance generates a port mapping table based on the listener port range, backend service protocols and port ranges of the associated endpoint groups, and IP addresses of endpoints (vSwitches). The custom routing listener forwards client requests to specified IP addresses and ports in the vSwitches based on the port mapping table. This operation is used to query the generated port mapping table.
 *
 * @param request ListCustomRoutingPortMappingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomRoutingPortMappingsResponse
 */
ListCustomRoutingPortMappingsResponse Client::listCustomRoutingPortMappingsWithOptions(const ListCustomRoutingPortMappingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomRoutingPortMappings"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomRoutingPortMappingsResponse>();
}

/**
 * @summary Queries the port mapping table of a custom routing listener.
 *
 * @description After you configure a custom routing listener for a Global Accelerator (GA) instance, the instance generates a port mapping table based on the listener port range, backend service protocols and port ranges of the associated endpoint groups, and IP addresses of endpoints (vSwitches). The custom routing listener forwards client requests to specified IP addresses and ports in the vSwitches based on the port mapping table. This operation is used to query the generated port mapping table.
 *
 * @param request ListCustomRoutingPortMappingsRequest
 * @return ListCustomRoutingPortMappingsResponse
 */
ListCustomRoutingPortMappingsResponse Client::listCustomRoutingPortMappings(const ListCustomRoutingPortMappingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomRoutingPortMappingsWithOptions(request, runtime);
}

/**
 * @summary Queries the port mapping table of a specified backend instance that is associated with a custom routing listener.
 *
 * @param request ListCustomRoutingPortMappingsByDestinationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomRoutingPortMappingsByDestinationResponse
 */
ListCustomRoutingPortMappingsByDestinationResponse Client::listCustomRoutingPortMappingsByDestinationWithOptions(const ListCustomRoutingPortMappingsByDestinationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestinationAddress()) {
    query["DestinationAddress"] = request.getDestinationAddress();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomRoutingPortMappingsByDestination"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomRoutingPortMappingsByDestinationResponse>();
}

/**
 * @summary Queries the port mapping table of a specified backend instance that is associated with a custom routing listener.
 *
 * @param request ListCustomRoutingPortMappingsByDestinationRequest
 * @return ListCustomRoutingPortMappingsByDestinationResponse
 */
ListCustomRoutingPortMappingsByDestinationResponse Client::listCustomRoutingPortMappingsByDestination(const ListCustomRoutingPortMappingsByDestinationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomRoutingPortMappingsByDestinationWithOptions(request, runtime);
}

/**
 * @summary Queries accelerated domain names.
 *
 * @param request ListDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDomainsResponse
 */
ListDomainsResponse Client::listDomainsWithOptions(const ListDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDomains"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDomainsResponse>();
}

/**
 * @summary Queries accelerated domain names.
 *
 * @param request ListDomainsRequest
 * @return ListDomainsResponse
 */
ListDomainsResponse Client::listDomains(const ListDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the public CIDR blocks to which the endpoint group IP addresses belong. The CIDR blocks can be used to configure ACLs in terminals.
 *
 * @param request ListEndpointGroupIpAddressCidrBlocksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEndpointGroupIpAddressCidrBlocksResponse
 */
ListEndpointGroupIpAddressCidrBlocksResponse Client::listEndpointGroupIpAddressCidrBlocksWithOptions(const ListEndpointGroupIpAddressCidrBlocksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasEndpointGroupRegion()) {
    query["EndpointGroupRegion"] = request.getEndpointGroupRegion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEndpointGroupIpAddressCidrBlocks"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEndpointGroupIpAddressCidrBlocksResponse>();
}

/**
 * @summary Queries the public CIDR blocks to which the endpoint group IP addresses belong. The CIDR blocks can be used to configure ACLs in terminals.
 *
 * @param request ListEndpointGroupIpAddressCidrBlocksRequest
 * @return ListEndpointGroupIpAddressCidrBlocksResponse
 */
ListEndpointGroupIpAddressCidrBlocksResponse Client::listEndpointGroupIpAddressCidrBlocks(const ListEndpointGroupIpAddressCidrBlocksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEndpointGroupIpAddressCidrBlocksWithOptions(request, runtime);
}

/**
 * @summary Queries a list of endpoint groups.
 *
 * @param request ListEndpointGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEndpointGroupsResponse
 */
ListEndpointGroupsResponse Client::listEndpointGroupsWithOptions(const ListEndpointGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasAccessLogSwitch()) {
    query["AccessLogSwitch"] = request.getAccessLogSwitch();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasEndpointGroupType()) {
    query["EndpointGroupType"] = request.getEndpointGroupType();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEndpointGroups"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEndpointGroupsResponse>();
}

/**
 * @summary Queries a list of endpoint groups.
 *
 * @param request ListEndpointGroupsRequest
 * @return ListEndpointGroupsResponse
 */
ListEndpointGroupsResponse Client::listEndpointGroups(const ListEndpointGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEndpointGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries forwarding rules.
 *
 * @description >  This operation is used to query only custom forwarding rules, not the default forwarding rule.
 *
 * @param request ListForwardingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListForwardingRulesResponse
 */
ListForwardingRulesResponse Client::listForwardingRulesWithOptions(const ListForwardingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasForwardingRuleId()) {
    query["ForwardingRuleId"] = request.getForwardingRuleId();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListForwardingRules"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListForwardingRulesResponse>();
}

/**
 * @summary Queries forwarding rules.
 *
 * @description >  This operation is used to query only custom forwarding rules, not the default forwarding rule.
 *
 * @param request ListForwardingRulesRequest
 * @return ListForwardingRulesResponse
 */
ListForwardingRulesResponse Client::listForwardingRules(const ListForwardingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listForwardingRulesWithOptions(request, runtime);
}

/**
 * @summary Queries acceleration regions.
 *
 * @param request ListIpSetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIpSetsResponse
 */
ListIpSetsResponse Client::listIpSetsWithOptions(const ListIpSetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIpSets"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIpSetsResponse>();
}

/**
 * @summary Queries acceleration regions.
 *
 * @param request ListIpSetsRequest
 * @return ListIpSetsResponse
 */
ListIpSetsResponse Client::listIpSets(const ListIpSetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIpSetsWithOptions(request, runtime);
}

/**
 * @summary Queries the line types of elastic IP addresses (EIPs) that are supported in an acceleration region.
 *
 * @param request ListIspTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIspTypesResponse
 */
ListIspTypesResponse Client::listIspTypesWithOptions(const ListIspTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasAcceleratorType()) {
    query["AcceleratorType"] = request.getAcceleratorType();
  }

  if (!!request.hasBusinessRegionId()) {
    query["BusinessRegionId"] = request.getBusinessRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIspTypes"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIspTypesResponse>();
}

/**
 * @summary Queries the line types of elastic IP addresses (EIPs) that are supported in an acceleration region.
 *
 * @param request ListIspTypesRequest
 * @return ListIspTypesResponse
 */
ListIspTypesResponse Client::listIspTypes(const ListIspTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIspTypesWithOptions(request, runtime);
}

/**
 * @summary Queries the certificates associated with a listener.
 *
 * @param request ListListenerCertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListListenerCertificatesResponse
 */
ListListenerCertificatesResponse Client::listListenerCertificatesWithOptions(const ListListenerCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
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

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListListenerCertificates"},
    {"version" , "2019-11-20"},
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
 * @summary Queries the certificates associated with a listener.
 *
 * @param request ListListenerCertificatesRequest
 * @return ListListenerCertificatesResponse
 */
ListListenerCertificatesResponse Client::listListenerCertificates(const ListListenerCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listListenerCertificatesWithOptions(request, runtime);
}

/**
 * @summary Queries the listeners of a Global Accelerator (GA) instance.
 *
 * @description This operation is used to query information about the listeners of a GA instance, including the status of each listener, the timestamp that indicates when each listener was created, and the listener ports.
 *
 * @param request ListListenersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListListenersResponse
 */
ListListenersResponse Client::listListenersWithOptions(const ListListenersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListListeners"},
    {"version" , "2019-11-20"},
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
 * @summary Queries the listeners of a Global Accelerator (GA) instance.
 *
 * @description This operation is used to query information about the listeners of a GA instance, including the status of each listener, the timestamp that indicates when each listener was created, and the listener ports.
 *
 * @param request ListListenersRequest
 * @return ListListenersResponse
 */
ListListenersResponse Client::listListeners(const ListListenersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listListenersWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the secondary IP addresses that are associated with a CNAME.
 *
 * @param request ListSpareIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSpareIpsResponse
 */
ListSpareIpsResponse Client::listSpareIpsWithOptions(const ListSpareIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSpareIps"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSpareIpsResponse>();
}

/**
 * @summary Queries the information about the secondary IP addresses that are associated with a CNAME.
 *
 * @param request ListSpareIpsRequest
 * @return ListSpareIpsResponse
 */
ListSpareIpsResponse Client::listSpareIps(const ListSpareIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSpareIpsWithOptions(request, runtime);
}

/**
 * @summary Queries the TLS security policies that are supported by HTTPS listeners.
 *
 * @description You can select a TLS security policy when you create an HTTPS listener. This API operation is used to query the TLS security policies that are supported by HTTPS listeners.
 *
 * @param request ListSystemSecurityPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSystemSecurityPoliciesResponse
 */
ListSystemSecurityPoliciesResponse Client::listSystemSecurityPoliciesWithOptions(const ListSystemSecurityPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSystemSecurityPolicies"},
    {"version" , "2019-11-20"},
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
 * @summary Queries the TLS security policies that are supported by HTTPS listeners.
 *
 * @description You can select a TLS security policy when you create an HTTPS listener. This API operation is used to query the TLS security policies that are supported by HTTPS listeners.
 *
 * @param request ListSystemSecurityPoliciesRequest
 * @return ListSystemSecurityPoliciesResponse
 */
ListSystemSecurityPoliciesResponse Client::listSystemSecurityPolicies(const ListSystemSecurityPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSystemSecurityPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to Global Accelerator (GA) resources.
 *
 * @description *   You must specify **ResourceId** or **Tag** in the request to specify the object that you want to query.********
 * *   **Tag** is a resource tag that consists of a key-value pair (Key and Value). If you specify only **Key**, all tag values that are associated with the specified tag key are returned. If you specify only **Value**, an error message is returned.
 * *   If you specify **Tag** and **ResourceId** to filter tags, **ResourceId** must match all specified key-value pairs.
 * *   If you specify multiple key-value pairs, resources that contain the key-value pairs are returned.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    {"version" , "2019-11-20"},
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
 * @summary Queries the tags that are added to Global Accelerator (GA) resources.
 *
 * @description *   You must specify **ResourceId** or **Tag** in the request to specify the object that you want to query.********
 * *   **Tag** is a resource tag that consists of a key-value pair (Key and Value). If you specify only **Key**, all tag values that are associated with the specified tag key are returned. If you specify only **Value**, an error message is returned.
 * *   If you specify **Tag** and **ResourceId** to filter tags, **ResourceId** must match all specified key-value pairs.
 * *   If you specify multiple key-value pairs, resources that contain the key-value pairs are returned.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Activates the pay-as-you-go Global Accelerator (GA) service. If you want to use pay-as-you-go GA instances, you must activate the pay-as-you-go GA service first.
 *
 * @param request OpenAcceleratorServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenAcceleratorServiceResponse
 */
OpenAcceleratorServiceResponse Client::openAcceleratorServiceWithOptions(const OpenAcceleratorServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenAcceleratorService"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenAcceleratorServiceResponse>();
}

/**
 * @summary Activates the pay-as-you-go Global Accelerator (GA) service. If you want to use pay-as-you-go GA instances, you must activate the pay-as-you-go GA service first.
 *
 * @param request OpenAcceleratorServiceRequest
 * @return OpenAcceleratorServiceResponse
 */
OpenAcceleratorServiceResponse Client::openAcceleratorService(const OpenAcceleratorServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openAcceleratorServiceWithOptions(request, runtime);
}

/**
 * @summary Inquire about the approval status of cross-border permissions for an Alibaba Cloud account (main account).
 *
 * @param request QueryCrossBorderApprovalStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCrossBorderApprovalStatusResponse
 */
QueryCrossBorderApprovalStatusResponse Client::queryCrossBorderApprovalStatusWithOptions(const QueryCrossBorderApprovalStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCrossBorderApprovalStatus"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCrossBorderApprovalStatusResponse>();
}

/**
 * @summary Inquire about the approval status of cross-border permissions for an Alibaba Cloud account (main account).
 *
 * @param request QueryCrossBorderApprovalStatusRequest
 * @return QueryCrossBorderApprovalStatusResponse
 */
QueryCrossBorderApprovalStatusResponse Client::queryCrossBorderApprovalStatus(const QueryCrossBorderApprovalStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCrossBorderApprovalStatusWithOptions(request, runtime);
}

/**
 * @summary Deletes IP entries from an access control list (ACL).
 *
 * @description *   **RemoveEntriesFromAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetAcl](https://help.aliyun.com/document_detail/258292.html) or [ListAcls](https://help.aliyun.com/document_detail/258291.html) operation to query the status of the ACL from which you want to delete IP entries.
 *     *   If the ACL is in the **configuring** state, it indicates that the IP entries are being deleted. In this case, you can perform only query operations.
 *     *   If the ACL is in the **active** state, it indicates that the IP entries are deleted.
 * *   The **RemoveEntriesFromAcl** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request RemoveEntriesFromAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveEntriesFromAclResponse
 */
RemoveEntriesFromAclResponse Client::removeEntriesFromAclWithOptions(const RemoveEntriesFromAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclEntries()) {
    query["AclEntries"] = request.getAclEntries();
  }

  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveEntriesFromAcl"},
    {"version" , "2019-11-20"},
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
 * @summary Deletes IP entries from an access control list (ACL).
 *
 * @description *   **RemoveEntriesFromAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetAcl](https://help.aliyun.com/document_detail/258292.html) or [ListAcls](https://help.aliyun.com/document_detail/258291.html) operation to query the status of the ACL from which you want to delete IP entries.
 *     *   If the ACL is in the **configuring** state, it indicates that the IP entries are being deleted. In this case, you can perform only query operations.
 *     *   If the ACL is in the **active** state, it indicates that the IP entries are deleted.
 * *   The **RemoveEntriesFromAcl** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request RemoveEntriesFromAclRequest
 * @return RemoveEntriesFromAclResponse
 */
RemoveEntriesFromAclResponse Client::removeEntriesFromAcl(const RemoveEntriesFromAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeEntriesFromAclWithOptions(request, runtime);
}

/**
 * @summary Replaces the bandwidth plans of Global Accelerator (GA) instances.
 *
 * @description When you call this operation, take note of the following items:
 * *   The GA instance continues to forward network traffic.
 * *   **ReplaceBandwidthPackage** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) or [ListAccelerators](https://help.aliyun.com/document_detail/153236.html) operation to query the status of the GA instance.
 *     *   If the GA instance is in the **configuring** state, it indicates that the associated bandwidth plan is being replaced. In this case, you can perform only query operations.
 *     *   If the GA instance is in the **active** state, it indicates that the associated bandwidth plan is replaced.
 * *   The **ReplaceBandwidthPackage** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request ReplaceBandwidthPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceBandwidthPackageResponse
 */
ReplaceBandwidthPackageResponse Client::replaceBandwidthPackageWithOptions(const ReplaceBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasBandwidthPackageId()) {
    query["BandwidthPackageId"] = request.getBandwidthPackageId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTargetBandwidthPackageId()) {
    query["TargetBandwidthPackageId"] = request.getTargetBandwidthPackageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReplaceBandwidthPackage"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceBandwidthPackageResponse>();
}

/**
 * @summary Replaces the bandwidth plans of Global Accelerator (GA) instances.
 *
 * @description When you call this operation, take note of the following items:
 * *   The GA instance continues to forward network traffic.
 * *   **ReplaceBandwidthPackage** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) or [ListAccelerators](https://help.aliyun.com/document_detail/153236.html) operation to query the status of the GA instance.
 *     *   If the GA instance is in the **configuring** state, it indicates that the associated bandwidth plan is being replaced. In this case, you can perform only query operations.
 *     *   If the GA instance is in the **active** state, it indicates that the associated bandwidth plan is replaced.
 * *   The **ReplaceBandwidthPackage** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request ReplaceBandwidthPackageRequest
 * @return ReplaceBandwidthPackageResponse
 */
ReplaceBandwidthPackageResponse Client::replaceBandwidthPackage(const ReplaceBandwidthPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return replaceBandwidthPackageWithOptions(request, runtime);
}

/**
 * @summary Adds tags to Global Accelerator (GA) resources.
 *
 * @description You can add up to 20 tags to each GA resource. When you call this operation, Alibaba Cloud first checks the number of existing tags attached to the resource. If the quota is reached, an error message is returned.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    {"action" , "TagResources"},
    {"version" , "2019-11-20"},
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
 * @summary Adds tags to Global Accelerator (GA) resources.
 *
 * @description You can add up to 20 tags to each GA resource. When you call this operation, Alibaba Cloud first checks the number of existing tags attached to the resource. If the quota is reached, an error message is returned.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from Global Accelerator (GA) resources.
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

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    {"version" , "2019-11-20"},
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
 * @summary Removes tags from Global Accelerator (GA) resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies a Global Accelerator (GA) instance.
 *
 * @description *   **UpdateAccelerator** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of a GA instance.
 *     *   If the GA instance is in the **configuring** state, the GA instance is being modified. In this case, you can perform only query operations.
 *     *   If the GA instance is in the **active** state, the GA instance is modified.
 * *   The **UpdateAccelerator** operation cannot be repeatedly called for the same GA instance within a specific period of time.
 *
 * @param request UpdateAcceleratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAcceleratorResponse
 */
UpdateAcceleratorResponse Client::updateAcceleratorWithOptions(const UpdateAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSpec()) {
    query["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAccelerator"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAcceleratorResponse>();
}

/**
 * @summary Modifies a Global Accelerator (GA) instance.
 *
 * @description *   **UpdateAccelerator** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of a GA instance.
 *     *   If the GA instance is in the **configuring** state, the GA instance is being modified. In this case, you can perform only query operations.
 *     *   If the GA instance is in the **active** state, the GA instance is modified.
 * *   The **UpdateAccelerator** operation cannot be repeatedly called for the same GA instance within a specific period of time.
 *
 * @param request UpdateAcceleratorRequest
 * @return UpdateAcceleratorResponse
 */
UpdateAcceleratorResponse Client::updateAccelerator(const UpdateAcceleratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAcceleratorWithOptions(request, runtime);
}

/**
 * @summary Modifies the auto-renewal settings of a Global Accelerator (GA) instance.
 *
 * @description You cannot repeatedly call the **UpdateAcceleratorAutoRenewAttribute** operation for the same GA instance within a specific period of time.
 *
 * @param request UpdateAcceleratorAutoRenewAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAcceleratorAutoRenewAttributeResponse
 */
UpdateAcceleratorAutoRenewAttributeResponse Client::updateAcceleratorAutoRenewAttributeWithOptions(const UpdateAcceleratorAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewDuration()) {
    query["AutoRenewDuration"] = request.getAutoRenewDuration();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRenewalStatus()) {
    query["RenewalStatus"] = request.getRenewalStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAcceleratorAutoRenewAttribute"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAcceleratorAutoRenewAttributeResponse>();
}

/**
 * @summary Modifies the auto-renewal settings of a Global Accelerator (GA) instance.
 *
 * @description You cannot repeatedly call the **UpdateAcceleratorAutoRenewAttribute** operation for the same GA instance within a specific period of time.
 *
 * @param request UpdateAcceleratorAutoRenewAttributeRequest
 * @return UpdateAcceleratorAutoRenewAttributeResponse
 */
UpdateAcceleratorAutoRenewAttributeResponse Client::updateAcceleratorAutoRenewAttribute(const UpdateAcceleratorAutoRenewAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAcceleratorAutoRenewAttributeWithOptions(request, runtime);
}

/**
 * @summary Confirms the updated specification of a Global Accelerator (GA) instance.
 *
 * @description After you modify the specification of a GA instance, you must confirm the modification. The **UpdateAcceleratorConfirm** operation is used to confirm the specification of a GA instance that is modified. When you call this operation to confirm the specification of a GA instance, take note of the following items:
 * *   **UpdateAcceleratorConfirm** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of a GA instance.
 *     *   If the GA instance is in the **configuring** state, it indicates that the specification of the instance is being modified. In this case, you can perform only query operations.
 *     *   If the GA instance is in the **active** state, it indicates that the specification of the instance is modified.
 * *   The **UpdateAcceleratorConfirm** operation cannot be called repeatedly for the same GA instance within a specific period of time.
 *
 * @param request UpdateAcceleratorConfirmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAcceleratorConfirmResponse
 */
UpdateAcceleratorConfirmResponse Client::updateAcceleratorConfirmWithOptions(const UpdateAcceleratorConfirmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAcceleratorConfirm"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAcceleratorConfirmResponse>();
}

/**
 * @summary Confirms the updated specification of a Global Accelerator (GA) instance.
 *
 * @description After you modify the specification of a GA instance, you must confirm the modification. The **UpdateAcceleratorConfirm** operation is used to confirm the specification of a GA instance that is modified. When you call this operation to confirm the specification of a GA instance, take note of the following items:
 * *   **UpdateAcceleratorConfirm** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of a GA instance.
 *     *   If the GA instance is in the **configuring** state, it indicates that the specification of the instance is being modified. In this case, you can perform only query operations.
 *     *   If the GA instance is in the **active** state, it indicates that the specification of the instance is modified.
 * *   The **UpdateAcceleratorConfirm** operation cannot be called repeatedly for the same GA instance within a specific period of time.
 *
 * @param request UpdateAcceleratorConfirmRequest
 * @return UpdateAcceleratorConfirmResponse
 */
UpdateAcceleratorConfirmResponse Client::updateAcceleratorConfirm(const UpdateAcceleratorConfirmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAcceleratorConfirmWithOptions(request, runtime);
}

/**
 * @summary Changes the type of transmission network for a Global Accelerator (GA) instance.
 *
 * @description You can call this operation to change the type of transmission network for a **standard** GA instance whose bandwidth metering method is **pay-by-data-transfer**. Before you call this operation, make sure that the following requirements are met:
 * *   Cloud Data Transfer (CDT) is activated. When you call the [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html) operation and set **BandwidthBillingType** to **CDT** to create a **standard** GA instance whose bandwidth metering method is **pay-by-data-transfer**, CDT is automatically activated. The data transfer fees are managed by CDT.
 * *   If you want to set **CrossBorderMode** to **private**, which specifies cross-border Express Connect circuit as the type of transmission network, make sure that real-name verification is complete for your enterprise account. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/52595.html).
 *
 * @param request UpdateAcceleratorCrossBorderModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAcceleratorCrossBorderModeResponse
 */
UpdateAcceleratorCrossBorderModeResponse Client::updateAcceleratorCrossBorderModeWithOptions(const UpdateAcceleratorCrossBorderModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCrossBorderMode()) {
    query["CrossBorderMode"] = request.getCrossBorderMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAcceleratorCrossBorderMode"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAcceleratorCrossBorderModeResponse>();
}

/**
 * @summary Changes the type of transmission network for a Global Accelerator (GA) instance.
 *
 * @description You can call this operation to change the type of transmission network for a **standard** GA instance whose bandwidth metering method is **pay-by-data-transfer**. Before you call this operation, make sure that the following requirements are met:
 * *   Cloud Data Transfer (CDT) is activated. When you call the [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html) operation and set **BandwidthBillingType** to **CDT** to create a **standard** GA instance whose bandwidth metering method is **pay-by-data-transfer**, CDT is automatically activated. The data transfer fees are managed by CDT.
 * *   If you want to set **CrossBorderMode** to **private**, which specifies cross-border Express Connect circuit as the type of transmission network, make sure that real-name verification is complete for your enterprise account. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/52595.html).
 *
 * @param request UpdateAcceleratorCrossBorderModeRequest
 * @return UpdateAcceleratorCrossBorderModeResponse
 */
UpdateAcceleratorCrossBorderModeResponse Client::updateAcceleratorCrossBorderMode(const UpdateAcceleratorCrossBorderModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAcceleratorCrossBorderModeWithOptions(request, runtime);
}

/**
 * @summary Enables cross-border data transmission for a Global Accelerator (GA) instance.
 *
 * @description You can call this operation to enable or disable cross-border data transmission for basic or standard GA instances that use Cloud Data Transfer (CDT) to bill data transfers.
 *
 * @param request UpdateAcceleratorCrossBorderStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAcceleratorCrossBorderStatusResponse
 */
UpdateAcceleratorCrossBorderStatusResponse Client::updateAcceleratorCrossBorderStatusWithOptions(const UpdateAcceleratorCrossBorderStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCrossBorderStatus()) {
    query["CrossBorderStatus"] = request.getCrossBorderStatus();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAcceleratorCrossBorderStatus"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAcceleratorCrossBorderStatusResponse>();
}

/**
 * @summary Enables cross-border data transmission for a Global Accelerator (GA) instance.
 *
 * @description You can call this operation to enable or disable cross-border data transmission for basic or standard GA instances that use Cloud Data Transfer (CDT) to bill data transfers.
 *
 * @param request UpdateAcceleratorCrossBorderStatusRequest
 * @return UpdateAcceleratorCrossBorderStatusResponse
 */
UpdateAcceleratorCrossBorderStatusResponse Client::updateAcceleratorCrossBorderStatus(const UpdateAcceleratorCrossBorderStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAcceleratorCrossBorderStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of an access control list (ACL) of a Global Accelerator (GA) instance.
 *
 * @param request UpdateAclAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAclAttributeResponse
 */
UpdateAclAttributeResponse Client::updateAclAttributeWithOptions(const UpdateAclAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.getAclId();
  }

  if (!!request.hasAclName()) {
    query["AclName"] = request.getAclName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAclAttribute"},
    {"version" , "2019-11-20"},
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
 * @summary Modifies the attributes of an access control list (ACL) of a Global Accelerator (GA) instance.
 *
 * @param request UpdateAclAttributeRequest
 * @return UpdateAclAttributeResponse
 */
UpdateAclAttributeResponse Client::updateAclAttribute(const UpdateAclAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAclAttributeWithOptions(request, runtime);
}

/**
 * @summary Replaces an expired additional certificate for an HTTPS listener.
 *
 * @description The UpdateAdditionalCertificateWithListener operation is used to replace an additional certificate. This operation is suitable for scenarios in which the original certificate expires and needs to be replaced with a new certificate and the associated domain name remains unchanged.
 * *   **UpdateAdditionalCertificateWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListListenerCertificates](https://help.aliyun.com/document_detail/307743.html) to query the status of the task:
 *     *   If the certificate to be replaced is in the **updating** state, the certificate is being replaced. In this case, you can only query the certificate.
 *     *   If the new certificate is in the **active** state, the new certificate is in effect.
 * *   You cannot repeatedly call the **UpdateAdditionalCertificateWithListener** operation for the same GA instance within a specific period of time.
 *
 * @param request UpdateAdditionalCertificateWithListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAdditionalCertificateWithListenerResponse
 */
UpdateAdditionalCertificateWithListenerResponse Client::updateAdditionalCertificateWithListenerWithOptions(const UpdateAdditionalCertificateWithListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasCertificateId()) {
    query["CertificateId"] = request.getCertificateId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
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
    {"action" , "UpdateAdditionalCertificateWithListener"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAdditionalCertificateWithListenerResponse>();
}

/**
 * @summary Replaces an expired additional certificate for an HTTPS listener.
 *
 * @description The UpdateAdditionalCertificateWithListener operation is used to replace an additional certificate. This operation is suitable for scenarios in which the original certificate expires and needs to be replaced with a new certificate and the associated domain name remains unchanged.
 * *   **UpdateAdditionalCertificateWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListListenerCertificates](https://help.aliyun.com/document_detail/307743.html) to query the status of the task:
 *     *   If the certificate to be replaced is in the **updating** state, the certificate is being replaced. In this case, you can only query the certificate.
 *     *   If the new certificate is in the **active** state, the new certificate is in effect.
 * *   You cannot repeatedly call the **UpdateAdditionalCertificateWithListener** operation for the same GA instance within a specific period of time.
 *
 * @param request UpdateAdditionalCertificateWithListenerRequest
 * @return UpdateAdditionalCertificateWithListenerResponse
 */
UpdateAdditionalCertificateWithListenerResponse Client::updateAdditionalCertificateWithListener(const UpdateAdditionalCertificateWithListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAdditionalCertificateWithListenerWithOptions(request, runtime);
}

/**
 * @summary Modifies an origin probing task.
 *
 * @description **UpdateApplicationMonitor** is an asynchronous operation. After you send a request, the system returns a request ID, but this operation is still being performed in the system background. You can call the [DescribeApplicationMonitor](https://help.aliyun.com/document_detail/408463.html) or [ListApplicationMonitor](https://help.aliyun.com/document_detail/408462.html) operation to check whether the configurations of an origin probing task are modified.
 * *   If the values of modified parameters remain unchanged, it indicates that the origin probing task is being modified. In this case, you can perform only query operations.
 * *   If the values of modified parameters change, it indicates that the origin probing task is modified.
 *
 * @param request UpdateApplicationMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationMonitorResponse
 */
UpdateApplicationMonitorResponse Client::updateApplicationMonitorWithOptions(const UpdateApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDetectEnable()) {
    query["DetectEnable"] = request.getDetectEnable();
  }

  if (!!request.hasDetectThreshold()) {
    query["DetectThreshold"] = request.getDetectThreshold();
  }

  if (!!request.hasDetectTimes()) {
    query["DetectTimes"] = request.getDetectTimes();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasOptionsJson()) {
    query["OptionsJson"] = request.getOptionsJson();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSilenceTime()) {
    query["SilenceTime"] = request.getSilenceTime();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationMonitor"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationMonitorResponse>();
}

/**
 * @summary Modifies an origin probing task.
 *
 * @description **UpdateApplicationMonitor** is an asynchronous operation. After you send a request, the system returns a request ID, but this operation is still being performed in the system background. You can call the [DescribeApplicationMonitor](https://help.aliyun.com/document_detail/408463.html) or [ListApplicationMonitor](https://help.aliyun.com/document_detail/408462.html) operation to check whether the configurations of an origin probing task are modified.
 * *   If the values of modified parameters remain unchanged, it indicates that the origin probing task is being modified. In this case, you can perform only query operations.
 * *   If the values of modified parameters change, it indicates that the origin probing task is modified.
 *
 * @param request UpdateApplicationMonitorRequest
 * @return UpdateApplicationMonitorResponse
 */
UpdateApplicationMonitorResponse Client::updateApplicationMonitor(const UpdateApplicationMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationMonitorWithOptions(request, runtime);
}

/**
 * @summary Changes the auto-renewal status of a bandwidth plan.
 *
 * @description You cannot repeatedly call the **UpdateBandwidthPackagaAutoRenewAttribute** operation to modify the auto-renewal settings of a bandwidth plan.
 *
 * @param request UpdateBandwidthPackagaAutoRenewAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBandwidthPackagaAutoRenewAttributeResponse
 */
UpdateBandwidthPackagaAutoRenewAttributeResponse Client::updateBandwidthPackagaAutoRenewAttributeWithOptions(const UpdateBandwidthPackagaAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasAutoRenewDuration()) {
    query["AutoRenewDuration"] = request.getAutoRenewDuration();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRenewalStatus()) {
    query["RenewalStatus"] = request.getRenewalStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateBandwidthPackagaAutoRenewAttribute"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBandwidthPackagaAutoRenewAttributeResponse>();
}

/**
 * @summary Changes the auto-renewal status of a bandwidth plan.
 *
 * @description You cannot repeatedly call the **UpdateBandwidthPackagaAutoRenewAttribute** operation to modify the auto-renewal settings of a bandwidth plan.
 *
 * @param request UpdateBandwidthPackagaAutoRenewAttributeRequest
 * @return UpdateBandwidthPackagaAutoRenewAttributeResponse
 */
UpdateBandwidthPackagaAutoRenewAttributeResponse Client::updateBandwidthPackagaAutoRenewAttribute(const UpdateBandwidthPackagaAutoRenewAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBandwidthPackagaAutoRenewAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a bandwidth plan.
 *
 * @description Take note of the following items:
 * *   **UpdateBandwidthPackage** is a synchronous operation when you call the operation to modify the configuration excluding the bandwidth value of a bandwidth plan. The new configuration immediately takes effect after the operation is performed.
 * *   **UpdateBandwidthPackage** is an asynchronous operation when you call the operation to modify the configuration including the bandwidth value of a bandwidth plan that is not associated with a Global Accelerator (GA) instance. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query the status of the task.
 *     *   If the parameter values of the bandwidth plan remain unchanged, the bandwidth plan is being modified. In this case, you can perform only query operations.
 *     *   If the parameter values of the bandwidth plan are changed, the bandwidth plan is modified.
 * *   **UpdateBandwidthPackage** is an asynchronous operation when you call the operation to modify the configuration including the bandwidth value of a bandwidth plan that is associated with a GA instance. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of the task.
 *     *   If the GA instance is in the **configuring** state, the bandwidth plan is being modified. In this case, you can perform only query operations.
 *     *   If the GA instance is in the **active** state, the bandwidth plan is modified.
 * *   You cannot repeatedly call the **UpdateBandwidthPackage** operation for the same bandwidth plan within a specific period of time.
 *
 * @param request UpdateBandwidthPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBandwidthPackageResponse
 */
UpdateBandwidthPackageResponse Client::updateBandwidthPackageWithOptions(const UpdateBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoUseCoupon()) {
    query["AutoUseCoupon"] = request.getAutoUseCoupon();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasBandwidthPackageId()) {
    query["BandwidthPackageId"] = request.getBandwidthPackageId();
  }

  if (!!request.hasBandwidthType()) {
    query["BandwidthType"] = request.getBandwidthType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateBandwidthPackage"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBandwidthPackageResponse>();
}

/**
 * @summary Modifies the configurations of a bandwidth plan.
 *
 * @description Take note of the following items:
 * *   **UpdateBandwidthPackage** is a synchronous operation when you call the operation to modify the configuration excluding the bandwidth value of a bandwidth plan. The new configuration immediately takes effect after the operation is performed.
 * *   **UpdateBandwidthPackage** is an asynchronous operation when you call the operation to modify the configuration including the bandwidth value of a bandwidth plan that is not associated with a Global Accelerator (GA) instance. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query the status of the task.
 *     *   If the parameter values of the bandwidth plan remain unchanged, the bandwidth plan is being modified. In this case, you can perform only query operations.
 *     *   If the parameter values of the bandwidth plan are changed, the bandwidth plan is modified.
 * *   **UpdateBandwidthPackage** is an asynchronous operation when you call the operation to modify the configuration including the bandwidth value of a bandwidth plan that is associated with a GA instance. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of the task.
 *     *   If the GA instance is in the **configuring** state, the bandwidth plan is being modified. In this case, you can perform only query operations.
 *     *   If the GA instance is in the **active** state, the bandwidth plan is modified.
 * *   You cannot repeatedly call the **UpdateBandwidthPackage** operation for the same bandwidth plan within a specific period of time.
 *
 * @param request UpdateBandwidthPackageRequest
 * @return UpdateBandwidthPackageResponse
 */
UpdateBandwidthPackageResponse Client::updateBandwidthPackage(const UpdateBandwidthPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBandwidthPackageWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of a basic Global Accelerator (GA) instance.
 *
 * @param request UpdateBasicAcceleratorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBasicAcceleratorResponse
 */
UpdateBasicAcceleratorResponse Client::updateBasicAcceleratorWithOptions(const UpdateBasicAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateBasicAccelerator"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBasicAcceleratorResponse>();
}

/**
 * @summary Modifies the name and description of a basic Global Accelerator (GA) instance.
 *
 * @param request UpdateBasicAcceleratorRequest
 * @return UpdateBasicAcceleratorResponse
 */
UpdateBasicAcceleratorResponse Client::updateBasicAccelerator(const UpdateBasicAcceleratorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBasicAcceleratorWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of an endpoint that is associated with a basic Global Accelerator (GA) instance.
 *
 * @param request UpdateBasicEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBasicEndpointResponse
 */
UpdateBasicEndpointResponse Client::updateBasicEndpointWithOptions(const UpdateBasicEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateBasicEndpoint"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBasicEndpointResponse>();
}

/**
 * @summary Modifies the name of an endpoint that is associated with a basic Global Accelerator (GA) instance.
 *
 * @param request UpdateBasicEndpointRequest
 * @return UpdateBasicEndpointResponse
 */
UpdateBasicEndpointResponse Client::updateBasicEndpoint(const UpdateBasicEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBasicEndpointWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of an endpoint group that is associated with a basic Global Accelerator (GA) instance.
 *
 * @description *   **UpdateBasicEndpointGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. The system modifies the configurations of an endpoint group that is associated with a basic GA instance by deleting the endpoint group and creating a new endpoint group. You can call the [GetBasicAccelerator](https://help.aliyun.com/document_detail/353188.html) operation to query the status of the task.
 *     *   If the basic GA instance is in the **configuring** state, the configurations of the endpoint group are being modified. In this case, you can perform only query operations.
 *     *   If the basic GA instance is in the **active** state, the configurations of the endpoint group are modified.
 * *   The **UpdateBasicEndpointGroup** operation cannot be repeatedly called for the same basic GA instance within a specific period of time.
 *
 * @param request UpdateBasicEndpointGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBasicEndpointGroupResponse
 */
UpdateBasicEndpointGroupResponse Client::updateBasicEndpointGroupWithOptions(const UpdateBasicEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEndpointAddress()) {
    query["EndpointAddress"] = request.getEndpointAddress();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasEndpointSubAddress()) {
    query["EndpointSubAddress"] = request.getEndpointSubAddress();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.getEndpointType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateBasicEndpointGroup"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBasicEndpointGroupResponse>();
}

/**
 * @summary Modifies the configurations of an endpoint group that is associated with a basic Global Accelerator (GA) instance.
 *
 * @description *   **UpdateBasicEndpointGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. The system modifies the configurations of an endpoint group that is associated with a basic GA instance by deleting the endpoint group and creating a new endpoint group. You can call the [GetBasicAccelerator](https://help.aliyun.com/document_detail/353188.html) operation to query the status of the task.
 *     *   If the basic GA instance is in the **configuring** state, the configurations of the endpoint group are being modified. In this case, you can perform only query operations.
 *     *   If the basic GA instance is in the **active** state, the configurations of the endpoint group are modified.
 * *   The **UpdateBasicEndpointGroup** operation cannot be repeatedly called for the same basic GA instance within a specific period of time.
 *
 * @param request UpdateBasicEndpointGroupRequest
 * @return UpdateBasicEndpointGroupResponse
 */
UpdateBasicEndpointGroupResponse Client::updateBasicEndpointGroup(const UpdateBasicEndpointGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBasicEndpointGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the bandwidth of an acceleration region of a basic Global Accelerator (GA) instance.
 *
 * @description Before you call this operation, take note of the following limits:
 * *   You can modify the bandwidth of an acceleration region of a basic GA instance only if the bandwidth metering method of the basic GA instance is **pay-by-data-transfer**.
 * *   **UpdateBasicIpSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicIpSet](https://help.aliyun.com/document_detail/362987.html) operation to query the status of the task.
 *     *   If the acceleration region is in the **updating** state, it indicates that the bandwidth of the acceleration region is being modified. In this case, you can perform only query operations.
 *     *   If the acceleration region is in the **active** state, it indicates that the bandwidth of the acceleration region is modified.
 * *   You cannot repeatedly call the **UpdateBasicIpSet** operation for the same basic GA instance within a specific period of time.
 *
 * @param request UpdateBasicIpSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBasicIpSetResponse
 */
UpdateBasicIpSetResponse Client::updateBasicIpSetWithOptions(const UpdateBasicIpSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasIpSetId()) {
    query["IpSetId"] = request.getIpSetId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateBasicIpSet"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBasicIpSetResponse>();
}

/**
 * @summary Modifies the bandwidth of an acceleration region of a basic Global Accelerator (GA) instance.
 *
 * @description Before you call this operation, take note of the following limits:
 * *   You can modify the bandwidth of an acceleration region of a basic GA instance only if the bandwidth metering method of the basic GA instance is **pay-by-data-transfer**.
 * *   **UpdateBasicIpSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicIpSet](https://help.aliyun.com/document_detail/362987.html) operation to query the status of the task.
 *     *   If the acceleration region is in the **updating** state, it indicates that the bandwidth of the acceleration region is being modified. In this case, you can perform only query operations.
 *     *   If the acceleration region is in the **active** state, it indicates that the bandwidth of the acceleration region is modified.
 * *   You cannot repeatedly call the **UpdateBasicIpSet** operation for the same basic GA instance within a specific period of time.
 *
 * @param request UpdateBasicIpSetRequest
 * @return UpdateBasicIpSetResponse
 */
UpdateBasicIpSetResponse Client::updateBasicIpSet(const UpdateBasicIpSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBasicIpSetWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of an endpoint group that is associated with a custom routing listener.
 *
 * @param request UpdateCustomRoutingEndpointGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomRoutingEndpointGroupAttributeResponse
 */
UpdateCustomRoutingEndpointGroupAttributeResponse Client::updateCustomRoutingEndpointGroupAttributeWithOptions(const UpdateCustomRoutingEndpointGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustomRoutingEndpointGroupAttribute"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomRoutingEndpointGroupAttributeResponse>();
}

/**
 * @summary Modifies the name and description of an endpoint group that is associated with a custom routing listener.
 *
 * @param request UpdateCustomRoutingEndpointGroupAttributeRequest
 * @return UpdateCustomRoutingEndpointGroupAttributeResponse
 */
UpdateCustomRoutingEndpointGroupAttributeResponse Client::updateCustomRoutingEndpointGroupAttribute(const UpdateCustomRoutingEndpointGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomRoutingEndpointGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the mapping configurations of an endpoint group that is associated with a custom routing listener.
 *
 * @description *   **UpdateCustomRoutingEndpointGroupDestinations** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of an endpoint group associated with a custom routing listener to check whether the mapping configurations of the endpoint group are modified.
 *     *   If the endpoint group is in the **updating** state, the mapping configurations of the endpoint group are being modified. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, the mapping configurations of the endpoint group are modified.
 * *   The **UpdateCustomRoutingEndpointGroupDestinations** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request UpdateCustomRoutingEndpointGroupDestinationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomRoutingEndpointGroupDestinationsResponse
 */
UpdateCustomRoutingEndpointGroupDestinationsResponse Client::updateCustomRoutingEndpointGroupDestinationsWithOptions(const UpdateCustomRoutingEndpointGroupDestinationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDestinationConfigurations()) {
    query["DestinationConfigurations"] = request.getDestinationConfigurations();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustomRoutingEndpointGroupDestinations"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomRoutingEndpointGroupDestinationsResponse>();
}

/**
 * @summary Modifies the mapping configurations of an endpoint group that is associated with a custom routing listener.
 *
 * @description *   **UpdateCustomRoutingEndpointGroupDestinations** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of an endpoint group associated with a custom routing listener to check whether the mapping configurations of the endpoint group are modified.
 *     *   If the endpoint group is in the **updating** state, the mapping configurations of the endpoint group are being modified. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, the mapping configurations of the endpoint group are modified.
 * *   The **UpdateCustomRoutingEndpointGroupDestinations** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request UpdateCustomRoutingEndpointGroupDestinationsRequest
 * @return UpdateCustomRoutingEndpointGroupDestinationsResponse
 */
UpdateCustomRoutingEndpointGroupDestinationsResponse Client::updateCustomRoutingEndpointGroupDestinations(const UpdateCustomRoutingEndpointGroupDestinationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomRoutingEndpointGroupDestinationsWithOptions(request, runtime);
}

/**
 * @summary Modifies the traffic policies for an endpoint that is associated with a custom routing listener.
 *
 * @description *   **UpdateCustomRoutingEndpointTrafficPolicies** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of the task.
 *     *   If the endpoint group is in the **updating** state, traffic policies are being modified for endpoints in the endpoint group. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, traffic policies are modified for endpoints in the endpoint group.
 * *   The **UpdateCustomRoutingEndpointTrafficPolicies** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request UpdateCustomRoutingEndpointTrafficPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomRoutingEndpointTrafficPoliciesResponse
 */
UpdateCustomRoutingEndpointTrafficPoliciesResponse Client::updateCustomRoutingEndpointTrafficPoliciesWithOptions(const UpdateCustomRoutingEndpointTrafficPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasPolicyConfigurations()) {
    query["PolicyConfigurations"] = request.getPolicyConfigurations();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustomRoutingEndpointTrafficPolicies"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomRoutingEndpointTrafficPoliciesResponse>();
}

/**
 * @summary Modifies the traffic policies for an endpoint that is associated with a custom routing listener.
 *
 * @description *   **UpdateCustomRoutingEndpointTrafficPolicies** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of the task.
 *     *   If the endpoint group is in the **updating** state, traffic policies are being modified for endpoints in the endpoint group. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, traffic policies are modified for endpoints in the endpoint group.
 * *   The **UpdateCustomRoutingEndpointTrafficPolicies** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request UpdateCustomRoutingEndpointTrafficPoliciesRequest
 * @return UpdateCustomRoutingEndpointTrafficPoliciesResponse
 */
UpdateCustomRoutingEndpointTrafficPoliciesResponse Client::updateCustomRoutingEndpointTrafficPolicies(const UpdateCustomRoutingEndpointTrafficPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomRoutingEndpointTrafficPoliciesWithOptions(request, runtime);
}

/**
 * @summary Modifies the endpoints of a custom routing listener.
 *
 * @description ## Description
 * *   **UpdateCustomRoutingEndpoints** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the state of the endpoint groups associated with a custom routing listener to check whether the endpoints in the endpoint groups are modified.
 *     *   If an endpoint group is in the **updating** state, the endpoints in the endpoint group are being modified. In this case, you can perform only query operations.
 *     *   If an endpoint group is in the **active** state, the endpoints in the endpoint group are modified.
 * *   The **UpdateCustomRoutingEndpoints** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request UpdateCustomRoutingEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomRoutingEndpointsResponse
 */
UpdateCustomRoutingEndpointsResponse Client::updateCustomRoutingEndpointsWithOptions(const UpdateCustomRoutingEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointConfigurations()) {
    query["EndpointConfigurations"] = request.getEndpointConfigurations();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustomRoutingEndpoints"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomRoutingEndpointsResponse>();
}

/**
 * @summary Modifies the endpoints of a custom routing listener.
 *
 * @description ## Description
 * *   **UpdateCustomRoutingEndpoints** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the state of the endpoint groups associated with a custom routing listener to check whether the endpoints in the endpoint groups are modified.
 *     *   If an endpoint group is in the **updating** state, the endpoints in the endpoint group are being modified. In this case, you can perform only query operations.
 *     *   If an endpoint group is in the **active** state, the endpoints in the endpoint group are modified.
 * *   The **UpdateCustomRoutingEndpoints** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request UpdateCustomRoutingEndpointsRequest
 * @return UpdateCustomRoutingEndpointsResponse
 */
UpdateCustomRoutingEndpointsResponse Client::updateCustomRoutingEndpoints(const UpdateCustomRoutingEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomRoutingEndpointsWithOptions(request, runtime);
}

/**
 * @summary Modifies an accelerated domain name.
 *
 * @description You can call this operation to modify an accelerated domain name. If the new accelerated domain name is hosted in the Chinese mainland, you must obtain an Internet content provider (ICP) number for the domain name.
 * You cannot call the **UpdateDomain** operation again by using the same Alibaba Cloud account before the previous request is completed.
 *
 * @param request UpdateDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDomainResponse
 */
UpdateDomainResponse Client::updateDomainWithOptions(const UpdateDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTargetDomain()) {
    query["TargetDomain"] = request.getTargetDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDomain"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDomainResponse>();
}

/**
 * @summary Modifies an accelerated domain name.
 *
 * @description You can call this operation to modify an accelerated domain name. If the new accelerated domain name is hosted in the Chinese mainland, you must obtain an Internet content provider (ICP) number for the domain name.
 * You cannot call the **UpdateDomain** operation again by using the same Alibaba Cloud account before the previous request is completed.
 *
 * @param request UpdateDomainRequest
 * @return UpdateDomainResponse
 */
UpdateDomainResponse Client::updateDomain(const UpdateDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDomainWithOptions(request, runtime);
}

/**
 * @summary Updates the ICP filing status of an accelerated domain name.
 *
 * @description You can call this operation to query and update the ICP filing status of an accelerated domain name.
 * The **UpdateDomainState** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation with the same Alibaba Cloud account.
 *
 * @param request UpdateDomainStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDomainStateResponse
 */
UpdateDomainStateResponse Client::updateDomainStateWithOptions(const UpdateDomainStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDomainState"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDomainStateResponse>();
}

/**
 * @summary Updates the ICP filing status of an accelerated domain name.
 *
 * @description You can call this operation to query and update the ICP filing status of an accelerated domain name.
 * The **UpdateDomainState** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation with the same Alibaba Cloud account.
 *
 * @param request UpdateDomainStateRequest
 * @return UpdateDomainStateResponse
 */
UpdateDomainStateResponse Client::updateDomainState(const UpdateDomainStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDomainStateWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of an endpoint group.
 *
 * @description *   **UpdateEndpointGroup** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the state of an endpoint group.
 *     *   If the endpoint group is in the **updating** state, it indicates that the configurations of the endpoint group are being modified. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, it indicates that the configurations of the endpoint group are modified.
 * *   The **UpdateEndpointGroup** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request UpdateEndpointGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEndpointGroupResponse
 */
UpdateEndpointGroupResponse Client::updateEndpointGroupWithOptions(const UpdateEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEndpointConfigurations()) {
    query["EndpointConfigurations"] = request.getEndpointConfigurations();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasEndpointGroupRegion()) {
    query["EndpointGroupRegion"] = request.getEndpointGroupRegion();
  }

  if (!!request.hasEndpointIpVersion()) {
    query["EndpointIpVersion"] = request.getEndpointIpVersion();
  }

  if (!!request.hasEndpointProtocolVersion()) {
    query["EndpointProtocolVersion"] = request.getEndpointProtocolVersion();
  }

  if (!!request.hasEndpointRequestProtocol()) {
    query["EndpointRequestProtocol"] = request.getEndpointRequestProtocol();
  }

  if (!!request.hasHealthCheckEnabled()) {
    query["HealthCheckEnabled"] = request.getHealthCheckEnabled();
  }

  if (!!request.hasHealthCheckHost()) {
    query["HealthCheckHost"] = request.getHealthCheckHost();
  }

  if (!!request.hasHealthCheckIntervalSeconds()) {
    query["HealthCheckIntervalSeconds"] = request.getHealthCheckIntervalSeconds();
  }

  if (!!request.hasHealthCheckPath()) {
    query["HealthCheckPath"] = request.getHealthCheckPath();
  }

  if (!!request.hasHealthCheckPort()) {
    query["HealthCheckPort"] = request.getHealthCheckPort();
  }

  if (!!request.hasHealthCheckProtocol()) {
    query["HealthCheckProtocol"] = request.getHealthCheckProtocol();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPortOverrides()) {
    query["PortOverrides"] = request.getPortOverrides();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasThresholdCount()) {
    query["ThresholdCount"] = request.getThresholdCount();
  }

  if (!!request.hasTrafficPercentage()) {
    query["TrafficPercentage"] = request.getTrafficPercentage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateEndpointGroup"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEndpointGroupResponse>();
}

/**
 * @summary Modifies the configurations of an endpoint group.
 *
 * @description *   **UpdateEndpointGroup** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the state of an endpoint group.
 *     *   If the endpoint group is in the **updating** state, it indicates that the configurations of the endpoint group are being modified. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, it indicates that the configurations of the endpoint group are modified.
 * *   The **UpdateEndpointGroup** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
 *
 * @param request UpdateEndpointGroupRequest
 * @return UpdateEndpointGroupResponse
 */
UpdateEndpointGroupResponse Client::updateEndpointGroup(const UpdateEndpointGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEndpointGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and description of an endpoint group.
 *
 * @param request UpdateEndpointGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEndpointGroupAttributeResponse
 */
UpdateEndpointGroupAttributeResponse Client::updateEndpointGroupAttributeWithOptions(const UpdateEndpointGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateEndpointGroupAttribute"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEndpointGroupAttributeResponse>();
}

/**
 * @summary Modifies the name and description of an endpoint group.
 *
 * @param request UpdateEndpointGroupAttributeRequest
 * @return UpdateEndpointGroupAttributeResponse
 */
UpdateEndpointGroupAttributeResponse Client::updateEndpointGroupAttribute(const UpdateEndpointGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEndpointGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the endpoint groups that are associated with a listener.
 *
 * @description ### Description
 * *   **UpdateEndpointGroups** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) or [ListEndpointGroups](https://help.aliyun.com/document_detail/153261.html) operation to query the status of an endpoint group.
 *     *   If the endpoint group is in the **updating** state, it indicates that the configuration of the endpoint group is being modified. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, it indicates that the configuration of the endpoint group is modified.
 * *   The **UpdateEndpointGroups** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request UpdateEndpointGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEndpointGroupsResponse
 */
UpdateEndpointGroupsResponse Client::updateEndpointGroupsWithOptions(const UpdateEndpointGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEndpointGroupConfigurations()) {
    query["EndpointGroupConfigurations"] = request.getEndpointGroupConfigurations();
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
    {"action" , "UpdateEndpointGroups"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEndpointGroupsResponse>();
}

/**
 * @summary Modifies the endpoint groups that are associated with a listener.
 *
 * @description ### Description
 * *   **UpdateEndpointGroups** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) or [ListEndpointGroups](https://help.aliyun.com/document_detail/153261.html) operation to query the status of an endpoint group.
 *     *   If the endpoint group is in the **updating** state, it indicates that the configuration of the endpoint group is being modified. In this case, you can perform only query operations.
 *     *   If the endpoint group is in the **active** state, it indicates that the configuration of the endpoint group is modified.
 * *   The **UpdateEndpointGroups** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request UpdateEndpointGroupsRequest
 * @return UpdateEndpointGroupsResponse
 */
UpdateEndpointGroupsResponse Client::updateEndpointGroups(const UpdateEndpointGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEndpointGroupsWithOptions(request, runtime);
}

/**
 * @summary Updates a forwarding rule.
 *
 * @description *   **UpdateForwardingRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListForwardingRules](https://help.aliyun.com/document_detail/205817.html) operation to query the status of a forwarding rule.
 *     *   If the forwarding rule is in the **configuring** state, it indicates that the forwarding rule is being modified. In this case, you can perform only query operations.
 *     *   If the forwarding rule is in the **active** state, it indicates that the forwarding rule is modified.
 * *   The **UpdateForwardingRules** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request UpdateForwardingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateForwardingRulesResponse
 */
UpdateForwardingRulesResponse Client::updateForwardingRulesWithOptions(const UpdateForwardingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasForwardingRules()) {
    query["ForwardingRules"] = request.getForwardingRules();
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
    {"action" , "UpdateForwardingRules"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateForwardingRulesResponse>();
}

/**
 * @summary Updates a forwarding rule.
 *
 * @description *   **UpdateForwardingRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListForwardingRules](https://help.aliyun.com/document_detail/205817.html) operation to query the status of a forwarding rule.
 *     *   If the forwarding rule is in the **configuring** state, it indicates that the forwarding rule is being modified. In this case, you can perform only query operations.
 *     *   If the forwarding rule is in the **active** state, it indicates that the forwarding rule is modified.
 * *   The **UpdateForwardingRules** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
 *
 * @param request UpdateForwardingRulesRequest
 * @return UpdateForwardingRulesResponse
 */
UpdateForwardingRulesResponse Client::updateForwardingRules(const UpdateForwardingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateForwardingRulesWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of an acceleration region in an acceleration area for a Global Accelerator (GA) instance.
 *
 * @description *   **UpdateIpSet** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of an acceleration region.
 *     *   If the acceleration region is in the **updating** state, it indicates that the acceleration region is being modified. In this case, you can continue to perform query operations on the acceleration regions.
 *     *   If the acceleration region is in the **active** state, it indicates that the acceleration region is modified.
 * *   You cannot call the **UpdateIpSet** operation again on the same GA instance before the previous operation is complete.
 *
 * @param request UpdateIpSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIpSetResponse
 */
UpdateIpSetResponse Client::updateIpSetWithOptions(const UpdateIpSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasIpSetId()) {
    query["IpSetId"] = request.getIpSetId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateIpSet"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIpSetResponse>();
}

/**
 * @summary Modifies the attributes of an acceleration region in an acceleration area for a Global Accelerator (GA) instance.
 *
 * @description *   **UpdateIpSet** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of an acceleration region.
 *     *   If the acceleration region is in the **updating** state, it indicates that the acceleration region is being modified. In this case, you can continue to perform query operations on the acceleration regions.
 *     *   If the acceleration region is in the **active** state, it indicates that the acceleration region is modified.
 * *   You cannot call the **UpdateIpSet** operation again on the same GA instance before the previous operation is complete.
 *
 * @param request UpdateIpSetRequest
 * @return UpdateIpSetResponse
 */
UpdateIpSetResponse Client::updateIpSet(const UpdateIpSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIpSetWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of acceleration regions in an acceleration area for a Global Accelerator (GA) instance.
 *
 * @description *   **UpdateIpSets** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of the task.
 *     *   If an acceleration region is in the **updating** state, the acceleration region is being modified. In this case, you can perform only query operations.
 *     *   If an acceleration region is in the **active** state, the acceleration region is modified.
 * *   You cannot repeatedly call the **UpdateIpSets** operation for the same GA instance within a specific period of time.
 *
 * @param request UpdateIpSetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIpSetsResponse
 */
UpdateIpSetsResponse Client::updateIpSetsWithOptions(const UpdateIpSetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpSets()) {
    query["IpSets"] = request.getIpSets();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateIpSets"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIpSetsResponse>();
}

/**
 * @summary Modifies the attributes of acceleration regions in an acceleration area for a Global Accelerator (GA) instance.
 *
 * @description *   **UpdateIpSets** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of the task.
 *     *   If an acceleration region is in the **updating** state, the acceleration region is being modified. In this case, you can perform only query operations.
 *     *   If an acceleration region is in the **active** state, the acceleration region is modified.
 * *   You cannot repeatedly call the **UpdateIpSets** operation for the same GA instance within a specific period of time.
 *
 * @param request UpdateIpSetsRequest
 * @return UpdateIpSetsResponse
 */
UpdateIpSetsResponse Client::updateIpSets(const UpdateIpSetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIpSetsWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a listener for a Global Accelerator (GA) instance.
 *
 * @description This operation can be called to modify the configurations such as the protocol and ports of a listener to meet your business requirements.
 * When you call this operation, take note of the following items:
 * *   **UpdateListener** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the status of a listener.
 *     *   If the listener is in the **updating** state, it indicates that its configurations are being modified. In this case, you can perform only query operations.
 *     *   If the listener is in the **active** state, it indicates that its configurations are modified.
 * *   The **UpdateListener** operation cannot be repeatedly called to modify listener configurations for the same GA instance within a specific period of time.
 *
 * @param request UpdateListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateListenerResponse
 */
UpdateListenerResponse Client::updateListenerWithOptions(const UpdateListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendPorts()) {
    query["BackendPorts"] = request.getBackendPorts();
  }

  if (!!request.hasCertificates()) {
    query["Certificates"] = request.getCertificates();
  }

  if (!!request.hasClientAffinity()) {
    query["ClientAffinity"] = request.getClientAffinity();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasHttpVersion()) {
    query["HttpVersion"] = request.getHttpVersion();
  }

  if (!!request.hasIdleTimeout()) {
    query["IdleTimeout"] = request.getIdleTimeout();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPortRanges()) {
    query["PortRanges"] = request.getPortRanges();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasProxyProtocol()) {
    query["ProxyProtocol"] = request.getProxyProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRequestTimeout()) {
    query["RequestTimeout"] = request.getRequestTimeout();
  }

  if (!!request.hasSecurityPolicyId()) {
    query["SecurityPolicyId"] = request.getSecurityPolicyId();
  }

  if (!!request.hasXForwardedForConfig()) {
    query["XForwardedForConfig"] = request.getXForwardedForConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateListener"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateListenerResponse>();
}

/**
 * @summary Modifies the configurations of a listener for a Global Accelerator (GA) instance.
 *
 * @description This operation can be called to modify the configurations such as the protocol and ports of a listener to meet your business requirements.
 * When you call this operation, take note of the following items:
 * *   **UpdateListener** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the status of a listener.
 *     *   If the listener is in the **updating** state, it indicates that its configurations are being modified. In this case, you can perform only query operations.
 *     *   If the listener is in the **active** state, it indicates that its configurations are modified.
 * *   The **UpdateListener** operation cannot be repeatedly called to modify listener configurations for the same GA instance within a specific period of time.
 *
 * @param request UpdateListenerRequest
 * @return UpdateListenerResponse
 */
UpdateListenerResponse Client::updateListener(const UpdateListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateListenerWithOptions(request, runtime);
}

/**
 * @summary 修改SLS日志配置
 *
 * @param request UpdateLogStoreConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLogStoreConfigResponse
 */
UpdateLogStoreConfigResponse Client::updateLogStoreConfigWithOptions(const UpdateLogStoreConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceleratorId()) {
    query["AcceleratorId"] = request.getAcceleratorId();
  }

  if (!!request.hasAccessLogRecordCustomizedHeaderList()) {
    query["AccessLogRecordCustomizedHeaderList"] = request.getAccessLogRecordCustomizedHeaderList();
  }

  if (!!request.hasAccessLogRecordCustomizedHeadersEnabled()) {
    query["AccessLogRecordCustomizedHeadersEnabled"] = request.getAccessLogRecordCustomizedHeadersEnabled();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointGroupId()) {
    query["EndpointGroupId"] = request.getEndpointGroupId();
  }

  if (!!request.hasListenerId()) {
    query["ListenerId"] = request.getListenerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSlsLogStoreName()) {
    query["SlsLogStoreName"] = request.getSlsLogStoreName();
  }

  if (!!request.hasSlsProjectName()) {
    query["SlsProjectName"] = request.getSlsProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLogStoreConfig"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLogStoreConfigResponse>();
}

/**
 * @summary 修改SLS日志配置
 *
 * @param request UpdateLogStoreConfigRequest
 * @return UpdateLogStoreConfigResponse
 */
UpdateLogStoreConfigResponse Client::updateLogStoreConfig(const UpdateLogStoreConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLogStoreConfigWithOptions(request, runtime);
}

/**
 * @summary Changes the control mode of a resource from managed mode to unmanaged mode.
 *
 * @description *   This operation is applicable only to **managed** Global Accelerator (GA) instances.
 * *   After you change the control mode of a GA instance from managed mode to unmanaged mode, you cannot change the mode of the instance to managed mode.
 * *   After you change the control mode of a GA instance from managed mode to unmanaged mode, you can obtain all operation permissions on the instance.
 *   <warning>If you change or delete a configuration of a GA instance whose control mode is changed from managed mode to unmanaged mode, the cloud services that depend on the instance may not work as expected. Proceed with caution.
 *
 * @param request UpdateServiceManagedControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceManagedControlResponse
 */
UpdateServiceManagedControlResponse Client::updateServiceManagedControlWithOptions(const UpdateServiceManagedControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasServiceManaged()) {
    query["ServiceManaged"] = request.getServiceManaged();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateServiceManagedControl"},
    {"version" , "2019-11-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceManagedControlResponse>();
}

/**
 * @summary Changes the control mode of a resource from managed mode to unmanaged mode.
 *
 * @description *   This operation is applicable only to **managed** Global Accelerator (GA) instances.
 * *   After you change the control mode of a GA instance from managed mode to unmanaged mode, you cannot change the mode of the instance to managed mode.
 * *   After you change the control mode of a GA instance from managed mode to unmanaged mode, you can obtain all operation permissions on the instance.
 *   <warning>If you change or delete a configuration of a GA instance whose control mode is changed from managed mode to unmanaged mode, the cloud services that depend on the instance may not work as expected. Proceed with caution.
 *
 * @param request UpdateServiceManagedControlRequest
 * @return UpdateServiceManagedControlResponse
 */
UpdateServiceManagedControlResponse Client::updateServiceManagedControl(const UpdateServiceManagedControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceManagedControlWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Ga20191120