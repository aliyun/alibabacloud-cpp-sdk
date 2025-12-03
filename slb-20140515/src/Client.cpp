#include <darabonba/Core.hpp>
#include <alibabacloud/Slb20140515.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Slb20140515::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Slb20140515
{

AlibabaCloud::Slb20140515::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "slb.aliyuncs.com"},
    {"cn-beijing" , "slb.aliyuncs.com"},
    {"cn-hangzhou" , "slb.aliyuncs.com"},
    {"cn-shanghai" , "slb.aliyuncs.com"},
    {"cn-shenzhen" , "slb.aliyuncs.com"},
    {"cn-hongkong" , "slb.aliyuncs.com"},
    {"ap-southeast-1" , "slb.aliyuncs.com"},
    {"us-east-1" , "slb.aliyuncs.com"},
    {"us-west-1" , "slb.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "slb.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "slb.aliyuncs.com"},
    {"cn-north-2-gov-1" , "slb.aliyuncs.com"},
    {"ap-northeast-2-pop" , "slb.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "slb.aliyuncs.com"},
    {"cn-beijing-gov-1" , "slb.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "slb.aliyuncs.com"},
    {"cn-edge-1" , "slb.aliyuncs.com"},
    {"cn-fujian" , "slb.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "slb.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "slb.aliyuncs.com"},
    {"cn-hangzhou-finance" , "slb.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "slb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "slb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "slb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "slb.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "slb.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "slb.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "slb-api.cn-qingdao-nebula.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "slb.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "slb.aliyuncs.com"},
    {"cn-shanghai-inner" , "slb.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "slb.aliyuncs.com"},
    {"cn-shenzhen-inner" , "slb.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "slb.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "slb.aliyuncs.com"},
    {"cn-wuhan" , "slb.aliyuncs.com"},
    {"cn-yushanfang" , "slb.aliyuncs.com"},
    {"cn-zhangbei" , "slb.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "slb.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "slb.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "slb.aliyuncs.com"},
    {"eu-west-1-oxs" , "slb.aliyuncs.com"},
    {"rus-west-1-pop" , "slb.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("slb", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @description Each network ACL can contain one or more IP addresses or CIDR blocks. Take note of the following limits on network ACLs:
 * *   The number of IP entries that can be added to a network ACL with each Alibaba Cloud account at a time: 50
 * *   The maximum number of IP entries that each network ACL can contain: 300
 *
 * @param request AddAccessControlListEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAccessControlListEntryResponse
 */
AddAccessControlListEntryResponse Client::addAccessControlListEntryWithOptions(const AddAccessControlListEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclEntrys()) {
    query["AclEntrys"] = request.aclEntrys();
  }

  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAccessControlListEntry"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAccessControlListEntryResponse>();
}

/**
 * @summary Adds IP entries to an access control list (ACL).
 *
 * @description Each network ACL can contain one or more IP addresses or CIDR blocks. Take note of the following limits on network ACLs:
 * *   The number of IP entries that can be added to a network ACL with each Alibaba Cloud account at a time: 50
 * *   The maximum number of IP entries that each network ACL can contain: 300
 *
 * @param request AddAccessControlListEntryRequest
 * @return AddAccessControlListEntryResponse
 */
AddAccessControlListEntryResponse Client::addAccessControlListEntry(const AddAccessControlListEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAccessControlListEntryWithOptions(request, runtime);
}

/**
 * @summary Adds backend servers.
 *
 * @description >  If multiple identical Elastic Compute Service (ECS) instances are specified in a request, only the first ECS instance is added. The other ECS instances are ignored. If the backend server that you add is the same as one of the existing backend servers that are already associated with the listener, an error message is returned.
 *
 * @param request AddBackendServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddBackendServersResponse
 */
AddBackendServersResponse Client::addBackendServersWithOptions(const AddBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServers()) {
    query["BackendServers"] = request.backendServers();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddBackendServers"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddBackendServersResponse>();
}

/**
 * @summary Adds backend servers.
 *
 * @description >  If multiple identical Elastic Compute Service (ECS) instances are specified in a request, only the first ECS instance is added. The other ECS instances are ignored. If the backend server that you add is the same as one of the existing backend servers that are already associated with the listener, an error message is returned.
 *
 * @param request AddBackendServersRequest
 * @return AddBackendServersResponse
 */
AddBackendServersResponse Client::addBackendServers(const AddBackendServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addBackendServersWithOptions(request, runtime);
}

/**
 * @summary Adds IP addresses to the whitelist of a listener.
 *
 * @param request AddListenerWhiteListItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddListenerWhiteListItemResponse
 */
AddListenerWhiteListItemResponse Client::addListenerWhiteListItemWithOptions(const AddListenerWhiteListItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.listenerProtocol();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSourceItems()) {
    query["SourceItems"] = request.sourceItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddListenerWhiteListItem"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddListenerWhiteListItemResponse>();
}

/**
 * @summary Adds IP addresses to the whitelist of a listener.
 *
 * @param request AddListenerWhiteListItemRequest
 * @return AddListenerWhiteListItemResponse
 */
AddListenerWhiteListItemResponse Client::addListenerWhiteListItem(const AddListenerWhiteListItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addListenerWhiteListItemWithOptions(request, runtime);
}

/**
 * @summary Adds tags to an SLB instance.
 *
 * @description # Limits
 * Before you call this API, note the following limits:
 * *   You can add up to 10 tags to each SLB instance.
 * *   You can add up to five pairs of tags at a time.
 * *   All the tags and keys added to an SLB instance must be unique.
 * *   If you add a tag of which the key is the same as that of an existing tag, but the value is different, the new tag overwrites the existing one.
 *
 * @param request AddTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTagsResponse
 */
AddTagsResponse Client::addTagsWithOptions(const AddTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddTags"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTagsResponse>();
}

/**
 * @summary Adds tags to an SLB instance.
 *
 * @description # Limits
 * Before you call this API, note the following limits:
 * *   You can add up to 10 tags to each SLB instance.
 * *   You can add up to five pairs of tags at a time.
 * *   All the tags and keys added to an SLB instance must be unique.
 * *   If you add a tag of which the key is the same as that of an existing tag, but the value is different, the new tag overwrites the existing one.
 *
 * @param request AddTagsRequest
 * @return AddTagsResponse
 */
AddTagsResponse Client::addTags(const AddTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTagsWithOptions(request, runtime);
}

/**
 * @summary Adds backend servers to a vServer group.
 *
 * @param request AddVServerGroupBackendServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddVServerGroupBackendServersResponse
 */
AddVServerGroupBackendServersResponse Client::addVServerGroupBackendServersWithOptions(const AddVServerGroupBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServers()) {
    query["BackendServers"] = request.backendServers();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddVServerGroupBackendServers"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddVServerGroupBackendServersResponse>();
}

/**
 * @summary Adds backend servers to a vServer group.
 *
 * @param request AddVServerGroupBackendServersRequest
 * @return AddVServerGroupBackendServersResponse
 */
AddVServerGroupBackendServersResponse Client::addVServerGroupBackendServers(const AddVServerGroupBackendServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addVServerGroupBackendServersWithOptions(request, runtime);
}

/**
 * @summary Creates an access control list (ACL).
 *
 * @description You can create multiple ACLs. Each ACL can contain one or more IP addresses or CIDR blocks. Before you create an ACL, take note of the following limits:
 * *   An account can have a maximum of 50 ACLs in each region.
 * *   You can add a maximum of 50 IP addresses or CIDR blocks at a time within an account.
 * *   Each ACL can contain a maximum of 300 IP addresses or CIDR blocks.
 *
 * @param request CreateAccessControlListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccessControlListResponse
 */
CreateAccessControlListResponse Client::createAccessControlListWithOptions(const CreateAccessControlListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclName()) {
    query["AclName"] = request.aclName();
  }

  if (!!request.hasAddressIPVersion()) {
    query["AddressIPVersion"] = request.addressIPVersion();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccessControlList"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccessControlListResponse>();
}

/**
 * @summary Creates an access control list (ACL).
 *
 * @description You can create multiple ACLs. Each ACL can contain one or more IP addresses or CIDR blocks. Before you create an ACL, take note of the following limits:
 * *   An account can have a maximum of 50 ACLs in each region.
 * *   You can add a maximum of 50 IP addresses or CIDR blocks at a time within an account.
 * *   Each ACL can contain a maximum of 300 IP addresses or CIDR blocks.
 *
 * @param request CreateAccessControlListRequest
 * @return CreateAccessControlListResponse
 */
CreateAccessControlListResponse Client::createAccessControlList(const CreateAccessControlListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccessControlListWithOptions(request, runtime);
}

/**
 * @summary Adds an additional domain name.
 *
 * @param request CreateDomainExtensionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDomainExtensionResponse
 */
CreateDomainExtensionResponse Client::createDomainExtensionWithOptions(const CreateDomainExtensionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasServerCertificateId()) {
    query["ServerCertificateId"] = request.serverCertificateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDomainExtension"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDomainExtensionResponse>();
}

/**
 * @summary Adds an additional domain name.
 *
 * @param request CreateDomainExtensionRequest
 * @return CreateDomainExtensionResponse
 */
CreateDomainExtensionResponse Client::createDomainExtension(const CreateDomainExtensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDomainExtensionWithOptions(request, runtime);
}

/**
 * @summary Creates a Classic Load Balancer (CLB) instance.
 *
 * @description *   Before you create a CLB instance, call the [DescribeAvailableResource](~~DescribeAvailableResource~~) operation to query the resources available for purchase in the region where you want to create the CLB instance.
 * *   After a CLB instance is created, you are charged for using the CLB instance.
 * *   The pay-as-you-go billing method supports the pay-by-specification and pay-by-LCU metering methods.
 *
 * @param request CreateLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerResponse
 */
CreateLoadBalancerResponse Client::createLoadBalancerWithOptions(const CreateLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.address();
  }

  if (!!request.hasAddressIPVersion()) {
    query["AddressIPVersion"] = request.addressIPVersion();
  }

  if (!!request.hasAddressType()) {
    query["AddressType"] = request.addressType();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDeleteProtection()) {
    query["DeleteProtection"] = request.deleteProtection();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.instanceChargeType();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.internetChargeType();
  }

  if (!!request.hasLoadBalancerName()) {
    query["LoadBalancerName"] = request.loadBalancerName();
  }

  if (!!request.hasLoadBalancerSpec()) {
    query["LoadBalancerSpec"] = request.loadBalancerSpec();
  }

  if (!!request.hasMasterZoneId()) {
    query["MasterZoneId"] = request.masterZoneId();
  }

  if (!!request.hasModificationProtectionReason()) {
    query["ModificationProtectionReason"] = request.modificationProtectionReason();
  }

  if (!!request.hasModificationProtectionStatus()) {
    query["ModificationProtectionStatus"] = request.modificationProtectionStatus();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSlaveZoneId()) {
    query["SlaveZoneId"] = request.slaveZoneId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancer"},
    {"version" , "2014-05-15"},
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
 * @summary Creates a Classic Load Balancer (CLB) instance.
 *
 * @description *   Before you create a CLB instance, call the [DescribeAvailableResource](~~DescribeAvailableResource~~) operation to query the resources available for purchase in the region where you want to create the CLB instance.
 * *   After a CLB instance is created, you are charged for using the CLB instance.
 * *   The pay-as-you-go billing method supports the pay-by-specification and pay-by-LCU metering methods.
 *
 * @param request CreateLoadBalancerRequest
 * @return CreateLoadBalancerResponse
 */
CreateLoadBalancerResponse Client::createLoadBalancer(const CreateLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Creates an HTTP listener for a Classic Load Balancer (CLB) instance.
 *
 * @description A newly created listener is in the **stopped** state. After a listener is created, you can call the [StartLoadBalancerListener](~~StartLoadBalancerListener~~) operation to start the listener. After the listener is started, the listener can forward traffic to backend servers.
 * ## Prerequisites
 * A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](~~StartLoadBalancerListener~~).
 *
 * @param request CreateLoadBalancerHTTPListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerHTTPListenerResponse
 */
CreateLoadBalancerHTTPListenerResponse Client::createLoadBalancerHTTPListenerWithOptions(const CreateLoadBalancerHTTPListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasAclStatus()) {
    query["AclStatus"] = request.aclStatus();
  }

  if (!!request.hasAclType()) {
    query["AclType"] = request.aclType();
  }

  if (!!request.hasBackendServerPort()) {
    query["BackendServerPort"] = request.backendServerPort();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasCookie()) {
    query["Cookie"] = request.cookie();
  }

  if (!!request.hasCookieTimeout()) {
    query["CookieTimeout"] = request.cookieTimeout();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasForwardPort()) {
    query["ForwardPort"] = request.forwardPort();
  }

  if (!!request.hasGzip()) {
    query["Gzip"] = request.gzip();
  }

  if (!!request.hasHealthCheck()) {
    query["HealthCheck"] = request.healthCheck();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.healthCheckConnectPort();
  }

  if (!!request.hasHealthCheckDomain()) {
    query["HealthCheckDomain"] = request.healthCheckDomain();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    query["HealthCheckHttpCode"] = request.healthCheckHttpCode();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.healthCheckInterval();
  }

  if (!!request.hasHealthCheckMethod()) {
    query["HealthCheckMethod"] = request.healthCheckMethod();
  }

  if (!!request.hasHealthCheckTimeout()) {
    query["HealthCheckTimeout"] = request.healthCheckTimeout();
  }

  if (!!request.hasHealthCheckURI()) {
    query["HealthCheckURI"] = request.healthCheckURI();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.healthyThreshold();
  }

  if (!!request.hasIdleTimeout()) {
    query["IdleTimeout"] = request.idleTimeout();
  }

  if (!!request.hasListenerForward()) {
    query["ListenerForward"] = request.listenerForward();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRequestTimeout()) {
    query["RequestTimeout"] = request.requestTimeout();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.scheduler();
  }

  if (!!request.hasStickySession()) {
    query["StickySession"] = request.stickySession();
  }

  if (!!request.hasStickySessionType()) {
    query["StickySessionType"] = request.stickySessionType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.unhealthyThreshold();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  if (!!request.hasXForwardedFor()) {
    query["XForwardedFor"] = request.XForwardedFor();
  }

  if (!!request.hasXForwardedFor_ClientSrcPort()) {
    query["XForwardedFor_ClientSrcPort"] = request.XForwardedFor_ClientSrcPort();
  }

  if (!!request.hasXForwardedFor_SLBID()) {
    query["XForwardedFor_SLBID"] = request.XForwardedFor_SLBID();
  }

  if (!!request.hasXForwardedFor_SLBIP()) {
    query["XForwardedFor_SLBIP"] = request.XForwardedFor_SLBIP();
  }

  if (!!request.hasXForwardedFor_SLBPORT()) {
    query["XForwardedFor_SLBPORT"] = request.XForwardedFor_SLBPORT();
  }

  if (!!request.hasXForwardedFor_proto()) {
    query["XForwardedFor_proto"] = request.XForwardedFor_proto();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancerHTTPListener"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadBalancerHTTPListenerResponse>();
}

/**
 * @summary Creates an HTTP listener for a Classic Load Balancer (CLB) instance.
 *
 * @description A newly created listener is in the **stopped** state. After a listener is created, you can call the [StartLoadBalancerListener](~~StartLoadBalancerListener~~) operation to start the listener. After the listener is started, the listener can forward traffic to backend servers.
 * ## Prerequisites
 * A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](~~StartLoadBalancerListener~~).
 *
 * @param request CreateLoadBalancerHTTPListenerRequest
 * @return CreateLoadBalancerHTTPListenerResponse
 */
CreateLoadBalancerHTTPListenerResponse Client::createLoadBalancerHTTPListener(const CreateLoadBalancerHTTPListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerHTTPListenerWithOptions(request, runtime);
}

/**
 * @summary Creates an HTTPS listener.
 *
 * @description A newly created listener is in the **stopped** state. After a listener is created, you can call the [StartLoadBalancerListener](https://help.aliyun.com/document_detail/27597.html) operation to start the listener. After the listener is started, the listener can forward traffic to backend servers.
 * ## Prerequisites
 * A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://www.alibabacloud.com/help/en/server-load-balancer/latest/createloadbalancer-2).
 *
 * @param request CreateLoadBalancerHTTPSListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerHTTPSListenerResponse
 */
CreateLoadBalancerHTTPSListenerResponse Client::createLoadBalancerHTTPSListenerWithOptions(const CreateLoadBalancerHTTPSListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasAclStatus()) {
    query["AclStatus"] = request.aclStatus();
  }

  if (!!request.hasAclType()) {
    query["AclType"] = request.aclType();
  }

  if (!!request.hasBackendServerPort()) {
    query["BackendServerPort"] = request.backendServerPort();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasCACertificateId()) {
    query["CACertificateId"] = request.CACertificateId();
  }

  if (!!request.hasCookie()) {
    query["Cookie"] = request.cookie();
  }

  if (!!request.hasCookieTimeout()) {
    query["CookieTimeout"] = request.cookieTimeout();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEnableHttp2()) {
    query["EnableHttp2"] = request.enableHttp2();
  }

  if (!!request.hasGzip()) {
    query["Gzip"] = request.gzip();
  }

  if (!!request.hasHealthCheck()) {
    query["HealthCheck"] = request.healthCheck();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.healthCheckConnectPort();
  }

  if (!!request.hasHealthCheckDomain()) {
    query["HealthCheckDomain"] = request.healthCheckDomain();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    query["HealthCheckHttpCode"] = request.healthCheckHttpCode();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.healthCheckInterval();
  }

  if (!!request.hasHealthCheckMethod()) {
    query["HealthCheckMethod"] = request.healthCheckMethod();
  }

  if (!!request.hasHealthCheckTimeout()) {
    query["HealthCheckTimeout"] = request.healthCheckTimeout();
  }

  if (!!request.hasHealthCheckURI()) {
    query["HealthCheckURI"] = request.healthCheckURI();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.healthyThreshold();
  }

  if (!!request.hasIdleTimeout()) {
    query["IdleTimeout"] = request.idleTimeout();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRequestTimeout()) {
    query["RequestTimeout"] = request.requestTimeout();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.scheduler();
  }

  if (!!request.hasServerCertificateId()) {
    query["ServerCertificateId"] = request.serverCertificateId();
  }

  if (!!request.hasStickySession()) {
    query["StickySession"] = request.stickySession();
  }

  if (!!request.hasStickySessionType()) {
    query["StickySessionType"] = request.stickySessionType();
  }

  if (!!request.hasTLSCipherPolicy()) {
    query["TLSCipherPolicy"] = request.TLSCipherPolicy();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.unhealthyThreshold();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  if (!!request.hasXForwardedFor()) {
    query["XForwardedFor"] = request.XForwardedFor();
  }

  if (!!request.hasXForwardedFor_ClientSrcPort()) {
    query["XForwardedFor_ClientSrcPort"] = request.XForwardedFor_ClientSrcPort();
  }

  if (!!request.hasXForwardedFor_SLBID()) {
    query["XForwardedFor_SLBID"] = request.XForwardedFor_SLBID();
  }

  if (!!request.hasXForwardedFor_SLBIP()) {
    query["XForwardedFor_SLBIP"] = request.XForwardedFor_SLBIP();
  }

  if (!!request.hasXForwardedFor_SLBPORT()) {
    query["XForwardedFor_SLBPORT"] = request.XForwardedFor_SLBPORT();
  }

  if (!!request.hasXForwardedFor_proto()) {
    query["XForwardedFor_proto"] = request.XForwardedFor_proto();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancerHTTPSListener"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadBalancerHTTPSListenerResponse>();
}

/**
 * @summary Creates an HTTPS listener.
 *
 * @description A newly created listener is in the **stopped** state. After a listener is created, you can call the [StartLoadBalancerListener](https://help.aliyun.com/document_detail/27597.html) operation to start the listener. After the listener is started, the listener can forward traffic to backend servers.
 * ## Prerequisites
 * A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://www.alibabacloud.com/help/en/server-load-balancer/latest/createloadbalancer-2).
 *
 * @param request CreateLoadBalancerHTTPSListenerRequest
 * @return CreateLoadBalancerHTTPSListenerResponse
 */
CreateLoadBalancerHTTPSListenerResponse Client::createLoadBalancerHTTPSListener(const CreateLoadBalancerHTTPSListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerHTTPSListenerWithOptions(request, runtime);
}

/**
 * @summary Creates a TCP listener.
 *
 * @description >  Newly created listeners are in the **stopped** state. After a listener is created, call the [StartLoadBalancerListener](https://help.aliyun.com/document_detail/2401757.html) operation to enable the listener to forward network traffic.
 *
 * @param request CreateLoadBalancerTCPListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerTCPListenerResponse
 */
CreateLoadBalancerTCPListenerResponse Client::createLoadBalancerTCPListenerWithOptions(const CreateLoadBalancerTCPListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasAclStatus()) {
    query["AclStatus"] = request.aclStatus();
  }

  if (!!request.hasAclType()) {
    query["AclType"] = request.aclType();
  }

  if (!!request.hasBackendServerPort()) {
    query["BackendServerPort"] = request.backendServerPort();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasConnectionDrain()) {
    query["ConnectionDrain"] = request.connectionDrain();
  }

  if (!!request.hasConnectionDrainTimeout()) {
    query["ConnectionDrainTimeout"] = request.connectionDrainTimeout();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEstablishedTimeout()) {
    query["EstablishedTimeout"] = request.establishedTimeout();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.healthCheckConnectPort();
  }

  if (!!request.hasHealthCheckConnectTimeout()) {
    query["HealthCheckConnectTimeout"] = request.healthCheckConnectTimeout();
  }

  if (!!request.hasHealthCheckDomain()) {
    query["HealthCheckDomain"] = request.healthCheckDomain();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    query["HealthCheckHttpCode"] = request.healthCheckHttpCode();
  }

  if (!!request.hasHealthCheckSwitch()) {
    query["HealthCheckSwitch"] = request.healthCheckSwitch();
  }

  if (!!request.hasHealthCheckType()) {
    query["HealthCheckType"] = request.healthCheckType();
  }

  if (!!request.hasHealthCheckURI()) {
    query["HealthCheckURI"] = request.healthCheckURI();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.healthyThreshold();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasMasterSlaveServerGroupId()) {
    query["MasterSlaveServerGroupId"] = request.masterSlaveServerGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPersistenceTimeout()) {
    query["PersistenceTimeout"] = request.persistenceTimeout();
  }

  if (!!request.hasProxyProtocolV2Enabled()) {
    query["ProxyProtocolV2Enabled"] = request.proxyProtocolV2Enabled();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.scheduler();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.unhealthyThreshold();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["healthCheckInterval"] = request.healthCheckInterval();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancerTCPListener"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadBalancerTCPListenerResponse>();
}

/**
 * @summary Creates a TCP listener.
 *
 * @description >  Newly created listeners are in the **stopped** state. After a listener is created, call the [StartLoadBalancerListener](https://help.aliyun.com/document_detail/2401757.html) operation to enable the listener to forward network traffic.
 *
 * @param request CreateLoadBalancerTCPListenerRequest
 * @return CreateLoadBalancerTCPListenerResponse
 */
CreateLoadBalancerTCPListenerResponse Client::createLoadBalancerTCPListener(const CreateLoadBalancerTCPListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerTCPListenerWithOptions(request, runtime);
}

/**
 * @summary Creates a UDP listener.
 *
 * @description UDP listeners of Classic Load Balancer (CLB) instances in a classic network cannot pass client IP addresses to backend servers.
 * >  A newly created listener is in the **stopped** state. After a listener is created, you can call the [StartLoadBalancerListener](https://help.aliyun.com/document_detail/27597.html) operation to enable the listener to forward traffic to backend servers.
 *
 * @param request CreateLoadBalancerUDPListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerUDPListenerResponse
 */
CreateLoadBalancerUDPListenerResponse Client::createLoadBalancerUDPListenerWithOptions(const CreateLoadBalancerUDPListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasAclStatus()) {
    query["AclStatus"] = request.aclStatus();
  }

  if (!!request.hasAclType()) {
    query["AclType"] = request.aclType();
  }

  if (!!request.hasBackendServerPort()) {
    query["BackendServerPort"] = request.backendServerPort();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.healthCheckConnectPort();
  }

  if (!!request.hasHealthCheckConnectTimeout()) {
    query["HealthCheckConnectTimeout"] = request.healthCheckConnectTimeout();
  }

  if (!!request.hasHealthCheckSwitch()) {
    query["HealthCheckSwitch"] = request.healthCheckSwitch();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.healthyThreshold();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasMasterSlaveServerGroupId()) {
    query["MasterSlaveServerGroupId"] = request.masterSlaveServerGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProxyProtocolV2Enabled()) {
    query["ProxyProtocolV2Enabled"] = request.proxyProtocolV2Enabled();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.scheduler();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.unhealthyThreshold();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  if (!!request.hasHealthCheckExp()) {
    query["healthCheckExp"] = request.healthCheckExp();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["healthCheckInterval"] = request.healthCheckInterval();
  }

  if (!!request.hasHealthCheckReq()) {
    query["healthCheckReq"] = request.healthCheckReq();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancerUDPListener"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadBalancerUDPListenerResponse>();
}

/**
 * @summary Creates a UDP listener.
 *
 * @description UDP listeners of Classic Load Balancer (CLB) instances in a classic network cannot pass client IP addresses to backend servers.
 * >  A newly created listener is in the **stopped** state. After a listener is created, you can call the [StartLoadBalancerListener](https://help.aliyun.com/document_detail/27597.html) operation to enable the listener to forward traffic to backend servers.
 *
 * @param request CreateLoadBalancerUDPListenerRequest
 * @return CreateLoadBalancerUDPListenerResponse
 */
CreateLoadBalancerUDPListenerResponse Client::createLoadBalancerUDPListener(const CreateLoadBalancerUDPListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerUDPListenerWithOptions(request, runtime);
}

/**
 * @summary Creates a primary/secondary server group. Each primary/secondary server group consists of two backend servers. One backend server functions as the primary server, and the other backend server functions as the secondary backend server.
 *
 * @param request CreateMasterSlaveServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMasterSlaveServerGroupResponse
 */
CreateMasterSlaveServerGroupResponse Client::createMasterSlaveServerGroupWithOptions(const CreateMasterSlaveServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasMasterSlaveBackendServers()) {
    query["MasterSlaveBackendServers"] = request.masterSlaveBackendServers();
  }

  if (!!request.hasMasterSlaveServerGroupName()) {
    query["MasterSlaveServerGroupName"] = request.masterSlaveServerGroupName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMasterSlaveServerGroup"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMasterSlaveServerGroupResponse>();
}

/**
 * @summary Creates a primary/secondary server group. Each primary/secondary server group consists of two backend servers. One backend server functions as the primary server, and the other backend server functions as the secondary backend server.
 *
 * @param request CreateMasterSlaveServerGroupRequest
 * @return CreateMasterSlaveServerGroupResponse
 */
CreateMasterSlaveServerGroupResponse Client::createMasterSlaveServerGroup(const CreateMasterSlaveServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMasterSlaveServerGroupWithOptions(request, runtime);
}

/**
 * @summary Creates forwarding rules for an HTTP or HTTPS listener.
 *
 * @param request CreateRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRulesResponse
 */
CreateRulesResponse Client::createRulesWithOptions(const CreateRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.listenerProtocol();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRuleList()) {
    query["RuleList"] = request.ruleList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRules"},
    {"version" , "2014-05-15"},
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
 * @summary Creates forwarding rules for an HTTP or HTTPS listener.
 *
 * @param request CreateRulesRequest
 * @return CreateRulesResponse
 */
CreateRulesResponse Client::createRules(const CreateRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRulesWithOptions(request, runtime);
}

/**
 * @summary Creates a Transport Layer Security (TLS) policy.
 *
 * @param request CreateTLSCipherPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTLSCipherPolicyResponse
 */
CreateTLSCipherPolicyResponse Client::createTLSCipherPolicyWithOptions(const CreateTLSCipherPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCiphers()) {
    query["Ciphers"] = request.ciphers();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTLSVersions()) {
    query["TLSVersions"] = request.TLSVersions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTLSCipherPolicy"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTLSCipherPolicyResponse>();
}

/**
 * @summary Creates a Transport Layer Security (TLS) policy.
 *
 * @param request CreateTLSCipherPolicyRequest
 * @return CreateTLSCipherPolicyResponse
 */
CreateTLSCipherPolicyResponse Client::createTLSCipherPolicy(const CreateTLSCipherPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTLSCipherPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a vServer group and adds backend servers to the vServer group.
 *
 * @param request CreateVServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVServerGroupResponse
 */
CreateVServerGroupResponse Client::createVServerGroupWithOptions(const CreateVServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServers()) {
    query["BackendServers"] = request.backendServers();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVServerGroupName()) {
    query["VServerGroupName"] = request.VServerGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVServerGroup"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVServerGroupResponse>();
}

/**
 * @summary Creates a vServer group and adds backend servers to the vServer group.
 *
 * @param request CreateVServerGroupRequest
 * @return CreateVServerGroupResponse
 */
CreateVServerGroupResponse Client::createVServerGroup(const CreateVServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVServerGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes an access control list (ACL).
 *
 * @description You can delete an ACL only if it is not associated with a listener.
 *
 * @param request DeleteAccessControlListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessControlListResponse
 */
DeleteAccessControlListResponse Client::deleteAccessControlListWithOptions(const DeleteAccessControlListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccessControlList"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccessControlListResponse>();
}

/**
 * @summary Deletes an access control list (ACL).
 *
 * @description You can delete an ACL only if it is not associated with a listener.
 *
 * @param request DeleteAccessControlListRequest
 * @return DeleteAccessControlListResponse
 */
DeleteAccessControlListResponse Client::deleteAccessControlList(const DeleteAccessControlListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessControlListWithOptions(request, runtime);
}

/**
 * @summary Deletes the access log of a Classic Load Balancer (CLB) instance.
 *
 * @param request DeleteAccessLogsDownloadAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessLogsDownloadAttributeResponse
 */
DeleteAccessLogsDownloadAttributeResponse Client::deleteAccessLogsDownloadAttributeWithOptions(const DeleteAccessLogsDownloadAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasLogsDownloadAttributes()) {
    query["LogsDownloadAttributes"] = request.logsDownloadAttributes();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccessLogsDownloadAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccessLogsDownloadAttributeResponse>();
}

/**
 * @summary Deletes the access log of a Classic Load Balancer (CLB) instance.
 *
 * @param request DeleteAccessLogsDownloadAttributeRequest
 * @return DeleteAccessLogsDownloadAttributeResponse
 */
DeleteAccessLogsDownloadAttributeResponse Client::deleteAccessLogsDownloadAttribute(const DeleteAccessLogsDownloadAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessLogsDownloadAttributeWithOptions(request, runtime);
}

/**
 * @summary Deletes a certificate authority (CA) certificate.
 *
 * @description You cannot delete a CA certificate that is in use.
 *
 * @param request DeleteCACertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCACertificateResponse
 */
DeleteCACertificateResponse Client::deleteCACertificateWithOptions(const DeleteCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCACertificateId()) {
    query["CACertificateId"] = request.CACertificateId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCACertificate"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCACertificateResponse>();
}

/**
 * @summary Deletes a certificate authority (CA) certificate.
 *
 * @description You cannot delete a CA certificate that is in use.
 *
 * @param request DeleteCACertificateRequest
 * @return DeleteCACertificateResponse
 */
DeleteCACertificateResponse Client::deleteCACertificate(const DeleteCACertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCACertificateWithOptions(request, runtime);
}

/**
 * @summary Deletes an additional domain name.
 *
 * @param request DeleteDomainExtensionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainExtensionResponse
 */
DeleteDomainExtensionResponse Client::deleteDomainExtensionWithOptions(const DeleteDomainExtensionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainExtensionId()) {
    query["DomainExtensionId"] = request.domainExtensionId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDomainExtension"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDomainExtensionResponse>();
}

/**
 * @summary Deletes an additional domain name.
 *
 * @param request DeleteDomainExtensionRequest
 * @return DeleteDomainExtensionResponse
 */
DeleteDomainExtensionResponse Client::deleteDomainExtension(const DeleteDomainExtensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainExtensionWithOptions(request, runtime);
}

/**
 * @summary Deletes a pay-as-you-go Server Load Balancer (SLB) instance.
 *
 * @description > The listeners and tags of the SLB instance are deleted along with the SLB instance.
 *
 * @param request DeleteLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLoadBalancerResponse
 */
DeleteLoadBalancerResponse Client::deleteLoadBalancerWithOptions(const DeleteLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLoadBalancer"},
    {"version" , "2014-05-15"},
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
 * @summary Deletes a pay-as-you-go Server Load Balancer (SLB) instance.
 *
 * @description > The listeners and tags of the SLB instance are deleted along with the SLB instance.
 *
 * @param request DeleteLoadBalancerRequest
 * @return DeleteLoadBalancerResponse
 */
DeleteLoadBalancerResponse Client::deleteLoadBalancer(const DeleteLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Deletes a listener.
 *
 * @description >  You can delete only listeners that are in the **stopped** or **running** state.
 *
 * @param request DeleteLoadBalancerListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLoadBalancerListenerResponse
 */
DeleteLoadBalancerListenerResponse Client::deleteLoadBalancerListenerWithOptions(const DeleteLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.listenerProtocol();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLoadBalancerListener"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLoadBalancerListenerResponse>();
}

/**
 * @summary Deletes a listener.
 *
 * @description >  You can delete only listeners that are in the **stopped** or **running** state.
 *
 * @param request DeleteLoadBalancerListenerRequest
 * @return DeleteLoadBalancerListenerResponse
 */
DeleteLoadBalancerListenerResponse Client::deleteLoadBalancerListener(const DeleteLoadBalancerListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLoadBalancerListenerWithOptions(request, runtime);
}

/**
 * @summary Deletes a primary/secondary server group.
 *
 * @param request DeleteMasterSlaveServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMasterSlaveServerGroupResponse
 */
DeleteMasterSlaveServerGroupResponse Client::deleteMasterSlaveServerGroupWithOptions(const DeleteMasterSlaveServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMasterSlaveServerGroupId()) {
    query["MasterSlaveServerGroupId"] = request.masterSlaveServerGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMasterSlaveServerGroup"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMasterSlaveServerGroupResponse>();
}

/**
 * @summary Deletes a primary/secondary server group.
 *
 * @param request DeleteMasterSlaveServerGroupRequest
 * @return DeleteMasterSlaveServerGroupResponse
 */
DeleteMasterSlaveServerGroupResponse Client::deleteMasterSlaveServerGroup(const DeleteMasterSlaveServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMasterSlaveServerGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes forwarding rules.
 *
 * @description You must specify at least one forwarding rule that you want to delete. You can specify at most 10 forwarding rules in each call.
 *
 * @param request DeleteRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRulesResponse
 */
DeleteRulesResponse Client::deleteRulesWithOptions(const DeleteRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRuleIds()) {
    query["RuleIds"] = request.ruleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRules"},
    {"version" , "2014-05-15"},
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
 * @summary Deletes forwarding rules.
 *
 * @description You must specify at least one forwarding rule that you want to delete. You can specify at most 10 forwarding rules in each call.
 *
 * @param request DeleteRulesRequest
 * @return DeleteRulesResponse
 */
DeleteRulesResponse Client::deleteRules(const DeleteRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes a server certificate.
 *
 * @description >  You cannot delete server certificates that are in use.
 *
 * @param request DeleteServerCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServerCertificateResponse
 */
DeleteServerCertificateResponse Client::deleteServerCertificateWithOptions(const DeleteServerCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasServerCertificateId()) {
    query["ServerCertificateId"] = request.serverCertificateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServerCertificate"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServerCertificateResponse>();
}

/**
 * @summary Deletes a server certificate.
 *
 * @description >  You cannot delete server certificates that are in use.
 *
 * @param request DeleteServerCertificateRequest
 * @return DeleteServerCertificateResponse
 */
DeleteServerCertificateResponse Client::deleteServerCertificate(const DeleteServerCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServerCertificateWithOptions(request, runtime);
}

/**
 * @summary Deletes a TLS policy.
 *
 * @description ## Debugging
 * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Slb\\&api=DeleteTLSCipherPolicy\\&type=RPC\\&version=2014-05-15)
 *
 * @param request DeleteTLSCipherPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTLSCipherPolicyResponse
 */
DeleteTLSCipherPolicyResponse Client::deleteTLSCipherPolicyWithOptions(const DeleteTLSCipherPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTLSCipherPolicyId()) {
    query["TLSCipherPolicyId"] = request.TLSCipherPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTLSCipherPolicy"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTLSCipherPolicyResponse>();
}

/**
 * @summary Deletes a TLS policy.
 *
 * @description ## Debugging
 * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Slb\\&api=DeleteTLSCipherPolicy\\&type=RPC\\&version=2014-05-15)
 *
 * @param request DeleteTLSCipherPolicyRequest
 * @return DeleteTLSCipherPolicyResponse
 */
DeleteTLSCipherPolicyResponse Client::deleteTLSCipherPolicy(const DeleteTLSCipherPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTLSCipherPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a VServer group.
 *
 * @param request DeleteVServerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVServerGroupResponse
 */
DeleteVServerGroupResponse Client::deleteVServerGroupWithOptions(const DeleteVServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVServerGroup"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVServerGroupResponse>();
}

/**
 * @summary Deletes a VServer group.
 *
 * @param request DeleteVServerGroupRequest
 * @return DeleteVServerGroupResponse
 */
DeleteVServerGroupResponse Client::deleteVServerGroup(const DeleteVServerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVServerGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration of an access control list (ACL).
 *
 * @param request DescribeAccessControlListAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessControlListAttributeResponse
 */
DescribeAccessControlListAttributeResponse Client::describeAccessControlListAttributeWithOptions(const DescribeAccessControlListAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclEntryComment()) {
    query["AclEntryComment"] = request.aclEntryComment();
  }

  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessControlListAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccessControlListAttributeResponse>();
}

/**
 * @summary Queries the configuration of an access control list (ACL).
 *
 * @param request DescribeAccessControlListAttributeRequest
 * @return DescribeAccessControlListAttributeResponse
 */
DescribeAccessControlListAttributeResponse Client::describeAccessControlListAttribute(const DescribeAccessControlListAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessControlListAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries access control lists (ACLs).
 *
 * @param request DescribeAccessControlListsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessControlListsResponse
 */
DescribeAccessControlListsResponse Client::describeAccessControlListsWithOptions(const DescribeAccessControlListsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclName()) {
    query["AclName"] = request.aclName();
  }

  if (!!request.hasAddressIPVersion()) {
    query["AddressIPVersion"] = request.addressIPVersion();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessControlLists"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccessControlListsResponse>();
}

/**
 * @summary Queries access control lists (ACLs).
 *
 * @param request DescribeAccessControlListsRequest
 * @return DescribeAccessControlListsResponse
 */
DescribeAccessControlListsResponse Client::describeAccessControlLists(const DescribeAccessControlListsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessControlListsWithOptions(request, runtime);
}

/**
 * @summary Queries the access log of a Classic Load Balancer (CLB) instance.
 *
 * @param request DescribeAccessLogsDownloadAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessLogsDownloadAttributeResponse
 */
DescribeAccessLogsDownloadAttributeResponse Client::describeAccessLogsDownloadAttributeWithOptions(const DescribeAccessLogsDownloadAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasLogType()) {
    query["LogType"] = request.logType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessLogsDownloadAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccessLogsDownloadAttributeResponse>();
}

/**
 * @summary Queries the access log of a Classic Load Balancer (CLB) instance.
 *
 * @param request DescribeAccessLogsDownloadAttributeRequest
 * @return DescribeAccessLogsDownloadAttributeResponse
 */
DescribeAccessLogsDownloadAttributeResponse Client::describeAccessLogsDownloadAttribute(const DescribeAccessLogsDownloadAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessLogsDownloadAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the available resources and resources that are available for purchase in the zones of a region.
 *
 * @description > Only the available resources and zones are returned.
 *
 * @param request DescribeAvailableResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableResourceResponse
 */
DescribeAvailableResourceResponse Client::describeAvailableResourceWithOptions(const DescribeAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressIPVersion()) {
    query["AddressIPVersion"] = request.addressIPVersion();
  }

  if (!!request.hasAddressType()) {
    query["AddressType"] = request.addressType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableResource"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableResourceResponse>();
}

/**
 * @summary Queries the available resources and resources that are available for purchase in the zones of a region.
 *
 * @description > Only the available resources and zones are returned.
 *
 * @param request DescribeAvailableResourceRequest
 * @return DescribeAvailableResourceResponse
 */
DescribeAvailableResourceResponse Client::describeAvailableResource(const DescribeAvailableResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableResourceWithOptions(request, runtime);
}

/**
 * @summary Queries certificate authority (CA) certificates.
 *
 * @description > To ensure data confidentiality, only the certificate fingerprint and name are returned. The certificate content is not returned.
 *
 * @param request DescribeCACertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCACertificatesResponse
 */
DescribeCACertificatesResponse Client::describeCACertificatesWithOptions(const DescribeCACertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCACertificateId()) {
    query["CACertificateId"] = request.CACertificateId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCACertificates"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCACertificatesResponse>();
}

/**
 * @summary Queries certificate authority (CA) certificates.
 *
 * @description > To ensure data confidentiality, only the certificate fingerprint and name are returned. The certificate content is not returned.
 *
 * @param request DescribeCACertificatesRequest
 * @return DescribeCACertificatesResponse
 */
DescribeCACertificatesResponse Client::describeCACertificates(const DescribeCACertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCACertificatesWithOptions(request, runtime);
}

/**
 * @summary Queries the attributes of an additional domain name.
 *
 * @param request DescribeDomainExtensionAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainExtensionAttributeResponse
 */
DescribeDomainExtensionAttributeResponse Client::describeDomainExtensionAttributeWithOptions(const DescribeDomainExtensionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainExtensionId()) {
    query["DomainExtensionId"] = request.domainExtensionId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainExtensionAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainExtensionAttributeResponse>();
}

/**
 * @summary Queries the attributes of an additional domain name.
 *
 * @param request DescribeDomainExtensionAttributeRequest
 * @return DescribeDomainExtensionAttributeResponse
 */
DescribeDomainExtensionAttributeResponse Client::describeDomainExtensionAttribute(const DescribeDomainExtensionAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainExtensionAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries additional domain names.
 *
 * @param request DescribeDomainExtensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainExtensionsResponse
 */
DescribeDomainExtensionsResponse Client::describeDomainExtensionsWithOptions(const DescribeDomainExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainExtensionId()) {
    query["DomainExtensionId"] = request.domainExtensionId();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainExtensions"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainExtensionsResponse>();
}

/**
 * @summary Queries additional domain names.
 *
 * @param request DescribeDomainExtensionsRequest
 * @return DescribeDomainExtensionsResponse
 */
DescribeDomainExtensionsResponse Client::describeDomainExtensions(const DescribeDomainExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainExtensionsWithOptions(request, runtime);
}

/**
 * @summary Queries the health status of backend servers.
 *
 * @param request DescribeHealthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHealthStatusResponse
 */
DescribeHealthStatusResponse Client::describeHealthStatusWithOptions(const DescribeHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.listenerProtocol();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHealthStatus"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHealthStatusResponse>();
}

/**
 * @summary Queries the health status of backend servers.
 *
 * @param request DescribeHealthStatusRequest
 * @return DescribeHealthStatusResponse
 */
DescribeHealthStatusResponse Client::describeHealthStatus(const DescribeHealthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHealthStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of fine-grained monitoring in a region.
 *
 * @param request DescribeHighDefinationMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHighDefinationMonitorResponse
 */
DescribeHighDefinationMonitorResponse Client::describeHighDefinationMonitorWithOptions(const DescribeHighDefinationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHighDefinationMonitor"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHighDefinationMonitorResponse>();
}

/**
 * @summary Queries the configurations of fine-grained monitoring in a region.
 *
 * @param request DescribeHighDefinationMonitorRequest
 * @return DescribeHighDefinationMonitorResponse
 */
DescribeHighDefinationMonitorResponse Client::describeHighDefinationMonitor(const DescribeHighDefinationMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHighDefinationMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries the whitelist configurations of a listener.
 *
 * @param request DescribeListenerAccessControlAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeListenerAccessControlAttributeResponse
 */
DescribeListenerAccessControlAttributeResponse Client::describeListenerAccessControlAttributeWithOptions(const DescribeListenerAccessControlAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.listenerProtocol();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeListenerAccessControlAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeListenerAccessControlAttributeResponse>();
}

/**
 * @summary Queries the whitelist configurations of a listener.
 *
 * @param request DescribeListenerAccessControlAttributeRequest
 * @return DescribeListenerAccessControlAttributeResponse
 */
DescribeListenerAccessControlAttributeResponse Client::describeListenerAccessControlAttribute(const DescribeListenerAccessControlAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeListenerAccessControlAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the detail of a Classic Load Balancer (CLB) instance.
 *
 * @description >  If backend servers are deployed in a vServer group, you can call the [DescribeVServerGroupAttribute](https://help.aliyun.com/document_detail/35224.html) operation to query the backend servers.
 *
 * @param request DescribeLoadBalancerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerAttributeResponse
 */
DescribeLoadBalancerAttributeResponse Client::describeLoadBalancerAttributeWithOptions(const DescribeLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerAttributeResponse>();
}

/**
 * @summary Queries the detail of a Classic Load Balancer (CLB) instance.
 *
 * @description >  If backend servers are deployed in a vServer group, you can call the [DescribeVServerGroupAttribute](https://help.aliyun.com/document_detail/35224.html) operation to query the backend servers.
 *
 * @param request DescribeLoadBalancerAttributeRequest
 * @return DescribeLoadBalancerAttributeResponse
 */
DescribeLoadBalancerAttributeResponse Client::describeLoadBalancerAttribute(const DescribeLoadBalancerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of an HTTP listener.
 *
 * @description *   A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/27577.html).
 * *   An HTTP listener is created. For more information about how to create an HTTP listener, see [CreateLoadBalancerHTTPListener](https://help.aliyun.com/document_detail/27592.html).
 *
 * @param request DescribeLoadBalancerHTTPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerHTTPListenerAttributeResponse
 */
DescribeLoadBalancerHTTPListenerAttributeResponse Client::describeLoadBalancerHTTPListenerAttributeWithOptions(const DescribeLoadBalancerHTTPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerHTTPListenerAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerHTTPListenerAttributeResponse>();
}

/**
 * @summary Queries the configurations of an HTTP listener.
 *
 * @description *   A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/27577.html).
 * *   An HTTP listener is created. For more information about how to create an HTTP listener, see [CreateLoadBalancerHTTPListener](https://help.aliyun.com/document_detail/27592.html).
 *
 * @param request DescribeLoadBalancerHTTPListenerAttributeRequest
 * @return DescribeLoadBalancerHTTPListenerAttributeResponse
 */
DescribeLoadBalancerHTTPListenerAttributeResponse Client::describeLoadBalancerHTTPListenerAttribute(const DescribeLoadBalancerHTTPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerHTTPListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of an HTTPS listener.
 *
 * @description *   A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/27577.html).
 * *   An HTTPS listener is created. For more information about how to create an HTTPS listener, see [CreateLoadBalancerHTTPSListener](https://help.aliyun.com/document_detail/27593.html).
 *
 * @param request DescribeLoadBalancerHTTPSListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerHTTPSListenerAttributeResponse
 */
DescribeLoadBalancerHTTPSListenerAttributeResponse Client::describeLoadBalancerHTTPSListenerAttributeWithOptions(const DescribeLoadBalancerHTTPSListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerHTTPSListenerAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerHTTPSListenerAttributeResponse>();
}

/**
 * @summary Queries the configurations of an HTTPS listener.
 *
 * @description *   A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/27577.html).
 * *   An HTTPS listener is created. For more information about how to create an HTTPS listener, see [CreateLoadBalancerHTTPSListener](https://help.aliyun.com/document_detail/27593.html).
 *
 * @param request DescribeLoadBalancerHTTPSListenerAttributeRequest
 * @return DescribeLoadBalancerHTTPSListenerAttributeResponse
 */
DescribeLoadBalancerHTTPSListenerAttributeResponse Client::describeLoadBalancerHTTPSListenerAttribute(const DescribeLoadBalancerHTTPSListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerHTTPSListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the listeners of a Classic Load Balancer (CLB) instance.
 *
 * @description *   A CLB instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/2401685.html).
 * *   One or more listeners are added to the CLB instance. For more information, see the following topics:
 *     *   [CreateLoadBalancerUDPListener](~~CreateLoadBalancerUDPListener~~)
 *     *   [CreateLoadBalancerTCPListener](~~CreateLoadBalancerTCPListener~~)
 *     *   [CreateLoadBalancerHTTPListener](~~CreateLoadBalancerHTTPListener~~)
 *     *   [CreateLoadBalancerHTTPSListener](~~CreateLoadBalancerHTTPSListener~~)
 *
 * @param request DescribeLoadBalancerListenersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerListenersResponse
 */
DescribeLoadBalancerListenersResponse Client::describeLoadBalancerListenersWithOptions(const DescribeLoadBalancerListenersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
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

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerListeners"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerListenersResponse>();
}

/**
 * @summary Queries the listeners of a Classic Load Balancer (CLB) instance.
 *
 * @description *   A CLB instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/2401685.html).
 * *   One or more listeners are added to the CLB instance. For more information, see the following topics:
 *     *   [CreateLoadBalancerUDPListener](~~CreateLoadBalancerUDPListener~~)
 *     *   [CreateLoadBalancerTCPListener](~~CreateLoadBalancerTCPListener~~)
 *     *   [CreateLoadBalancerHTTPListener](~~CreateLoadBalancerHTTPListener~~)
 *     *   [CreateLoadBalancerHTTPSListener](~~CreateLoadBalancerHTTPSListener~~)
 *
 * @param request DescribeLoadBalancerListenersRequest
 * @return DescribeLoadBalancerListenersResponse
 */
DescribeLoadBalancerListenersResponse Client::describeLoadBalancerListeners(const DescribeLoadBalancerListenersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerListenersWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of a TCP listener of Classic Load Balancer (CLB).
 *
 * @param request DescribeLoadBalancerTCPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerTCPListenerAttributeResponse
 */
DescribeLoadBalancerTCPListenerAttributeResponse Client::describeLoadBalancerTCPListenerAttributeWithOptions(const DescribeLoadBalancerTCPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerTCPListenerAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerTCPListenerAttributeResponse>();
}

/**
 * @summary Queries the configurations of a TCP listener of Classic Load Balancer (CLB).
 *
 * @param request DescribeLoadBalancerTCPListenerAttributeRequest
 * @return DescribeLoadBalancerTCPListenerAttributeResponse
 */
DescribeLoadBalancerTCPListenerAttributeResponse Client::describeLoadBalancerTCPListenerAttribute(const DescribeLoadBalancerTCPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerTCPListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of a UDP listener.
 *
 * @param request DescribeLoadBalancerUDPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancerUDPListenerAttributeResponse
 */
DescribeLoadBalancerUDPListenerAttributeResponse Client::describeLoadBalancerUDPListenerAttributeWithOptions(const DescribeLoadBalancerUDPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancerUDPListenerAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancerUDPListenerAttributeResponse>();
}

/**
 * @summary Queries the configurations of a UDP listener.
 *
 * @param request DescribeLoadBalancerUDPListenerAttributeRequest
 * @return DescribeLoadBalancerUDPListenerAttributeResponse
 */
DescribeLoadBalancerUDPListenerAttributeResponse Client::describeLoadBalancerUDPListenerAttribute(const DescribeLoadBalancerUDPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancerUDPListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries Classic Load Balancer (CLB) instances.
 *
 * @param request DescribeLoadBalancersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoadBalancersResponse
 */
DescribeLoadBalancersResponse Client::describeLoadBalancersWithOptions(const DescribeLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.address();
  }

  if (!!request.hasAddressIPVersion()) {
    query["AddressIPVersion"] = request.addressIPVersion();
  }

  if (!!request.hasAddressType()) {
    query["AddressType"] = request.addressType();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.internetChargeType();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasLoadBalancerName()) {
    query["LoadBalancerName"] = request.loadBalancerName();
  }

  if (!!request.hasLoadBalancerStatus()) {
    query["LoadBalancerStatus"] = request.loadBalancerStatus();
  }

  if (!!request.hasMasterZoneId()) {
    query["MasterZoneId"] = request.masterZoneId();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.networkType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasServerId()) {
    query["ServerId"] = request.serverId();
  }

  if (!!request.hasServerIntranetAddress()) {
    query["ServerIntranetAddress"] = request.serverIntranetAddress();
  }

  if (!!request.hasSlaveZoneId()) {
    query["SlaveZoneId"] = request.slaveZoneId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoadBalancers"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoadBalancersResponse>();
}

/**
 * @summary Queries Classic Load Balancer (CLB) instances.
 *
 * @param request DescribeLoadBalancersRequest
 * @return DescribeLoadBalancersResponse
 */
DescribeLoadBalancersResponse Client::describeLoadBalancers(const DescribeLoadBalancersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoadBalancersWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about a primary/secondary server group.
 *
 * @param request DescribeMasterSlaveServerGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMasterSlaveServerGroupAttributeResponse
 */
DescribeMasterSlaveServerGroupAttributeResponse Client::describeMasterSlaveServerGroupAttributeWithOptions(const DescribeMasterSlaveServerGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMasterSlaveServerGroupId()) {
    query["MasterSlaveServerGroupId"] = request.masterSlaveServerGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMasterSlaveServerGroupAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMasterSlaveServerGroupAttributeResponse>();
}

/**
 * @summary Queries the detailed information about a primary/secondary server group.
 *
 * @param request DescribeMasterSlaveServerGroupAttributeRequest
 * @return DescribeMasterSlaveServerGroupAttributeResponse
 */
DescribeMasterSlaveServerGroupAttributeResponse Client::describeMasterSlaveServerGroupAttribute(const DescribeMasterSlaveServerGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMasterSlaveServerGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries primary/secondary server groups.
 *
 * @param request DescribeMasterSlaveServerGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMasterSlaveServerGroupsResponse
 */
DescribeMasterSlaveServerGroupsResponse Client::describeMasterSlaveServerGroupsWithOptions(const DescribeMasterSlaveServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasIncludeListener()) {
    query["IncludeListener"] = request.includeListener();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMasterSlaveServerGroups"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMasterSlaveServerGroupsResponse>();
}

/**
 * @summary Queries primary/secondary server groups.
 *
 * @param request DescribeMasterSlaveServerGroupsRequest
 * @return DescribeMasterSlaveServerGroupsResponse
 */
DescribeMasterSlaveServerGroupsResponse Client::describeMasterSlaveServerGroups(const DescribeMasterSlaveServerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMasterSlaveServerGroupsWithOptions(request, runtime);
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

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2014-05-15"},
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
 * @summary Queries the configurations of a specified forwarding rule.
 *
 * @param request DescribeRuleAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleAttributeResponse
 */
DescribeRuleAttributeResponse Client::describeRuleAttributeWithOptions(const DescribeRuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleAttributeResponse>();
}

/**
 * @summary Queries the configurations of a specified forwarding rule.
 *
 * @param request DescribeRuleAttributeRequest
 * @return DescribeRuleAttributeResponse
 */
DescribeRuleAttributeResponse Client::describeRuleAttribute(const DescribeRuleAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the forwarding rules that are configured for a specified listener.
 *
 * @param request DescribeRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRulesResponse
 */
DescribeRulesResponse Client::describeRulesWithOptions(const DescribeRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.listenerProtocol();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRules"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRulesResponse>();
}

/**
 * @summary Queries the forwarding rules that are configured for a specified listener.
 *
 * @param request DescribeRulesRequest
 * @return DescribeRulesResponse
 */
DescribeRulesResponse Client::describeRules(const DescribeRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the server certificates in a region.
 *
 * @description >  For security reasons, only the fingerprints and names of server certificates are returned. The content of server certificates and private keys is not returned.
 *
 * @param request DescribeServerCertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServerCertificatesResponse
 */
DescribeServerCertificatesResponse Client::describeServerCertificatesWithOptions(const DescribeServerCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasServerCertificateId()) {
    query["ServerCertificateId"] = request.serverCertificateId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServerCertificates"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServerCertificatesResponse>();
}

/**
 * @summary Queries the server certificates in a region.
 *
 * @description >  For security reasons, only the fingerprints and names of server certificates are returned. The content of server certificates and private keys is not returned.
 *
 * @param request DescribeServerCertificatesRequest
 * @return DescribeServerCertificatesResponse
 */
DescribeServerCertificatesResponse Client::describeServerCertificates(const DescribeServerCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServerCertificatesWithOptions(request, runtime);
}

/**
 * @summary Queries tags.
 *
 * @description Take note of the following items:
 * *   The system queries tags based on the instance ID, tag key, and tag value specified by you.
 * *   If the logical relationship among the specified conditions is AND, only tags that match all the specified conditions are returned.
 * *   If the Tagkey parameter is specified and but Tagvalue parameter is not specified, all tags that contain the specified tag key are returned.
 * *   If you specify the Tagvalue parameter in a request, you must also specify the Tagkey parameter in the request.
 * *   If you specify both the Tagkey and Tagvalue parameters, only tags that contain the specified keys and values are returned.
 *
 * @param request DescribeTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTagsWithOptions(const DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDistinctKey()) {
    query["DistinctKey"] = request.distinctKey();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTags"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsResponse>();
}

/**
 * @summary Queries tags.
 *
 * @description Take note of the following items:
 * *   The system queries tags based on the instance ID, tag key, and tag value specified by you.
 * *   If the logical relationship among the specified conditions is AND, only tags that match all the specified conditions are returned.
 * *   If the Tagkey parameter is specified and but Tagvalue parameter is not specified, all tags that contain the specified tag key are returned.
 * *   If you specify the Tagvalue parameter in a request, you must also specify the Tagkey parameter in the request.
 * *   If you specify both the Tagkey and Tagvalue parameters, only tags that contain the specified keys and values are returned.
 *
 * @param request DescribeTagsRequest
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTags(const DescribeTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about a vServer group.
 *
 * @param request DescribeVServerGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVServerGroupAttributeResponse
 */
DescribeVServerGroupAttributeResponse Client::describeVServerGroupAttributeWithOptions(const DescribeVServerGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVServerGroupAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVServerGroupAttributeResponse>();
}

/**
 * @summary Queries the detailed information about a vServer group.
 *
 * @param request DescribeVServerGroupAttributeRequest
 * @return DescribeVServerGroupAttributeResponse
 */
DescribeVServerGroupAttributeResponse Client::describeVServerGroupAttribute(const DescribeVServerGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVServerGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries vServer groups.
 *
 * @param request DescribeVServerGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVServerGroupsResponse
 */
DescribeVServerGroupsResponse Client::describeVServerGroupsWithOptions(const DescribeVServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasIncludeListener()) {
    query["IncludeListener"] = request.includeListener();
  }

  if (!!request.hasIncludeRule()) {
    query["IncludeRule"] = request.includeRule();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVServerGroups"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVServerGroupsResponse>();
}

/**
 * @summary Queries vServer groups.
 *
 * @param request DescribeVServerGroupsRequest
 * @return DescribeVServerGroupsResponse
 */
DescribeVServerGroupsResponse Client::describeVServerGroups(const DescribeVServerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVServerGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the zones in a region.
 *
 * @param request DescribeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZonesWithOptions(const DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZones"},
    {"version" , "2014-05-15"},
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
 * @summary Queries the zones in a region.
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Enables fine-grained monitoring for the current region.
 *
 * @param request EnableHighDefinationMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableHighDefinationMonitorResponse
 */
EnableHighDefinationMonitorResponse Client::enableHighDefinationMonitorWithOptions(const EnableHighDefinationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogProject()) {
    query["LogProject"] = request.logProject();
  }

  if (!!request.hasLogStore()) {
    query["LogStore"] = request.logStore();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableHighDefinationMonitor"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableHighDefinationMonitorResponse>();
}

/**
 * @summary Enables fine-grained monitoring for the current region.
 *
 * @param request EnableHighDefinationMonitorRequest
 * @return EnableHighDefinationMonitorResponse
 */
EnableHighDefinationMonitorResponse Client::enableHighDefinationMonitor(const EnableHighDefinationMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableHighDefinationMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries Transport Layer Security (TLS) policies.
 *
 * @param request ListTLSCipherPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTLSCipherPoliciesResponse
 */
ListTLSCipherPoliciesResponse Client::listTLSCipherPoliciesWithOptions(const ListTLSCipherPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncludeListener()) {
    query["IncludeListener"] = request.includeListener();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.maxItems();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTLSCipherPolicyId()) {
    query["TLSCipherPolicyId"] = request.TLSCipherPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTLSCipherPolicies"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTLSCipherPoliciesResponse>();
}

/**
 * @summary Queries Transport Layer Security (TLS) policies.
 *
 * @param request ListTLSCipherPoliciesRequest
 * @return ListTLSCipherPoliciesResponse
 */
ListTLSCipherPoliciesResponse Client::listTLSCipherPolicies(const ListTLSCipherPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTLSCipherPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to resources.
 *
 * @description *   Set **ResourceId.N** or **Tag.N** that consists of **Tag.N.Key** and **Tag.N.Value** in the request to specify the object to be queried.
 * *   **Tag.N** is a resource tag that consists of a key-value pair. If you set only **Tag.N.Key**, all tag values that are associated with the specified tag key are returned. If you set only **Tag.N.Value**, an error message is returned.
 * *   If you set **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified key-value pairs.
 * *   If you specify multiple key-value pairs, resources that contain these key-value pairs are returned.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
    {"version" , "2014-05-15"},
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
 * @summary Queries the tags that are added to resources.
 *
 * @description *   Set **ResourceId.N** or **Tag.N** that consists of **Tag.N.Key** and **Tag.N.Value** in the request to specify the object to be queried.
 * *   **Tag.N** is a resource tag that consists of a key-value pair. If you set only **Tag.N.Key**, all tag values that are associated with the specified tag key are returned. If you set only **Tag.N.Value**, an error message is returned.
 * *   If you set **Tag.N** and **ResourceId.N** to filter tags, **ResourceId.N** must match all specified key-value pairs.
 * *   If you specify multiple key-value pairs, resources that contain these key-value pairs are returned.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of fine-grained monitoring in a specified region.
 *
 * @param request ModifyHighDefinationMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHighDefinationMonitorResponse
 */
ModifyHighDefinationMonitorResponse Client::modifyHighDefinationMonitorWithOptions(const ModifyHighDefinationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogProject()) {
    query["LogProject"] = request.logProject();
  }

  if (!!request.hasLogStore()) {
    query["LogStore"] = request.logStore();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHighDefinationMonitor"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHighDefinationMonitorResponse>();
}

/**
 * @summary Modifies the configuration of fine-grained monitoring in a specified region.
 *
 * @param request ModifyHighDefinationMonitorRequest
 * @return ModifyHighDefinationMonitorResponse
 */
ModifyHighDefinationMonitorResponse Client::modifyHighDefinationMonitor(const ModifyHighDefinationMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHighDefinationMonitorWithOptions(request, runtime);
}

/**
 * @summary Changes the metering method of a pay-as-you-go Classic Load Balancer (CLB) instance.
 *
 * @description > *   For pay-as-you-go CLB instances, you can only change the metering method from pay-by-specification to pay-by-LCU. You cannot change the metering method from pay-by-LCU to pay-by-specification.
 * >*   This operation can change the metering method of only one instance at a time.
 *
 * @param request ModifyLoadBalancerInstanceChargeTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLoadBalancerInstanceChargeTypeResponse
 */
ModifyLoadBalancerInstanceChargeTypeResponse Client::modifyLoadBalancerInstanceChargeTypeWithOptions(const ModifyLoadBalancerInstanceChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasInstanceChargeType()) {
    query["InstanceChargeType"] = request.instanceChargeType();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.internetChargeType();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasLoadBalancerSpec()) {
    query["LoadBalancerSpec"] = request.loadBalancerSpec();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLoadBalancerInstanceChargeType"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLoadBalancerInstanceChargeTypeResponse>();
}

/**
 * @summary Changes the metering method of a pay-as-you-go Classic Load Balancer (CLB) instance.
 *
 * @description > *   For pay-as-you-go CLB instances, you can only change the metering method from pay-by-specification to pay-by-LCU. You cannot change the metering method from pay-by-LCU to pay-by-specification.
 * >*   This operation can change the metering method of only one instance at a time.
 *
 * @param request ModifyLoadBalancerInstanceChargeTypeRequest
 * @return ModifyLoadBalancerInstanceChargeTypeResponse
 */
ModifyLoadBalancerInstanceChargeTypeResponse Client::modifyLoadBalancerInstanceChargeType(const ModifyLoadBalancerInstanceChargeTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLoadBalancerInstanceChargeTypeWithOptions(request, runtime);
}

/**
 * @summary Modifies the specification of a Classic Load Balancer (CLB) instance.
 *
 * @param request ModifyLoadBalancerInstanceSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLoadBalancerInstanceSpecResponse
 */
ModifyLoadBalancerInstanceSpecResponse Client::modifyLoadBalancerInstanceSpecWithOptions(const ModifyLoadBalancerInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasLoadBalancerSpec()) {
    query["LoadBalancerSpec"] = request.loadBalancerSpec();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLoadBalancerInstanceSpec"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLoadBalancerInstanceSpecResponse>();
}

/**
 * @summary Modifies the specification of a Classic Load Balancer (CLB) instance.
 *
 * @param request ModifyLoadBalancerInstanceSpecRequest
 * @return ModifyLoadBalancerInstanceSpecResponse
 */
ModifyLoadBalancerInstanceSpecResponse Client::modifyLoadBalancerInstanceSpec(const ModifyLoadBalancerInstanceSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLoadBalancerInstanceSpecWithOptions(request, runtime);
}

/**
 * @summary Modifies the metering method of an Internet-facing Classic Load Balancer (CLB) instance.
 *
 * @description ## Description
 * *   If you modify only the maximum bandwidth of a pay-by-bandwidth CLB instance, the new bandwidth immediately takes effect.
 * *   If you modify the metering method (for example, switch from pay-by-bandwidth to pay-by-data-transfer), the new metering method and the other changes specified in the operation take effect at 00:00:00 the next day.
 *
 * @param request ModifyLoadBalancerInternetSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLoadBalancerInternetSpecResponse
 */
ModifyLoadBalancerInternetSpecResponse Client::modifyLoadBalancerInternetSpecWithOptions(const ModifyLoadBalancerInternetSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasInternetChargeType()) {
    query["InternetChargeType"] = request.internetChargeType();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLoadBalancerInternetSpec"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLoadBalancerInternetSpecResponse>();
}

/**
 * @summary Modifies the metering method of an Internet-facing Classic Load Balancer (CLB) instance.
 *
 * @description ## Description
 * *   If you modify only the maximum bandwidth of a pay-by-bandwidth CLB instance, the new bandwidth immediately takes effect.
 * *   If you modify the metering method (for example, switch from pay-by-bandwidth to pay-by-data-transfer), the new metering method and the other changes specified in the operation take effect at 00:00:00 the next day.
 *
 * @param request ModifyLoadBalancerInternetSpecRequest
 * @return ModifyLoadBalancerInternetSpecResponse
 */
ModifyLoadBalancerInternetSpecResponse Client::modifyLoadBalancerInternetSpec(const ModifyLoadBalancerInternetSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLoadBalancerInternetSpecWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ModifyLoadBalancerPayType is deprecated
 *
 * @summary Changes the billing method of a Classic Load Balancer (CLB) instance from pay-as-you-go to subscription.
 *
 * @param request ModifyLoadBalancerPayTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLoadBalancerPayTypeResponse
 */
ModifyLoadBalancerPayTypeResponse Client::modifyLoadBalancerPayTypeWithOptions(const ModifyLoadBalancerPayTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLoadBalancerPayType"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLoadBalancerPayTypeResponse>();
}

/**
 * @deprecated OpenAPI ModifyLoadBalancerPayType is deprecated
 *
 * @summary Changes the billing method of a Classic Load Balancer (CLB) instance from pay-as-you-go to subscription.
 *
 * @param request ModifyLoadBalancerPayTypeRequest
 * @return ModifyLoadBalancerPayTypeResponse
 */
ModifyLoadBalancerPayTypeResponse Client::modifyLoadBalancerPayType(const ModifyLoadBalancerPayTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLoadBalancerPayTypeWithOptions(request, runtime);
}

/**
 * @summary Replaces backend servers in a vServer group.
 *
 * @description This operation can be used only to replace backend servers in a vServer group. To modify the attributes of backend servers, such as weights, call the [SetVServerGroupAttribute](https://help.aliyun.com/document_detail/35217.html) operation.
 *
 * @param request ModifyVServerGroupBackendServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVServerGroupBackendServersResponse
 */
ModifyVServerGroupBackendServersResponse Client::modifyVServerGroupBackendServersWithOptions(const ModifyVServerGroupBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewBackendServers()) {
    query["NewBackendServers"] = request.newBackendServers();
  }

  if (!!request.hasOldBackendServers()) {
    query["OldBackendServers"] = request.oldBackendServers();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyVServerGroupBackendServers"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyVServerGroupBackendServersResponse>();
}

/**
 * @summary Replaces backend servers in a vServer group.
 *
 * @description This operation can be used only to replace backend servers in a vServer group. To modify the attributes of backend servers, such as weights, call the [SetVServerGroupAttribute](https://help.aliyun.com/document_detail/35217.html) operation.
 *
 * @param request ModifyVServerGroupBackendServersRequest
 * @return ModifyVServerGroupBackendServersResponse
 */
ModifyVServerGroupBackendServersResponse Client::modifyVServerGroupBackendServers(const ModifyVServerGroupBackendServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVServerGroupBackendServersWithOptions(request, runtime);
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

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasAccessKeyId()) {
    query["access_key_id"] = request.accessKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2014-05-15"},
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
 * @summary Removes IP entries from the network access control list (ACL) of a Classic Load Balancer (CLB) instance.
 *
 * @param request RemoveAccessControlListEntryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveAccessControlListEntryResponse
 */
RemoveAccessControlListEntryResponse Client::removeAccessControlListEntryWithOptions(const RemoveAccessControlListEntryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclEntrys()) {
    query["AclEntrys"] = request.aclEntrys();
  }

  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveAccessControlListEntry"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveAccessControlListEntryResponse>();
}

/**
 * @summary Removes IP entries from the network access control list (ACL) of a Classic Load Balancer (CLB) instance.
 *
 * @param request RemoveAccessControlListEntryRequest
 * @return RemoveAccessControlListEntryResponse
 */
RemoveAccessControlListEntryResponse Client::removeAccessControlListEntry(const RemoveAccessControlListEntryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeAccessControlListEntryWithOptions(request, runtime);
}

/**
 * @summary Removes backend servers.
 *
 * @description >  If the backend servers that you want to remove are not in the server list of the Classic Load Balancer (CLB) instance, the request fails. However, the system does not report an error.
 *
 * @param request RemoveBackendServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveBackendServersResponse
 */
RemoveBackendServersResponse Client::removeBackendServersWithOptions(const RemoveBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServers()) {
    query["BackendServers"] = request.backendServers();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveBackendServers"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveBackendServersResponse>();
}

/**
 * @summary Removes backend servers.
 *
 * @description >  If the backend servers that you want to remove are not in the server list of the Classic Load Balancer (CLB) instance, the request fails. However, the system does not report an error.
 *
 * @param request RemoveBackendServersRequest
 * @return RemoveBackendServersResponse
 */
RemoveBackendServersResponse Client::removeBackendServers(const RemoveBackendServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeBackendServersWithOptions(request, runtime);
}

/**
 * @summary Removes IP addresses or CIDR blocks from the whitelist of a listener.
 *
 * @param request RemoveListenerWhiteListItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveListenerWhiteListItemResponse
 */
RemoveListenerWhiteListItemResponse Client::removeListenerWhiteListItemWithOptions(const RemoveListenerWhiteListItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.listenerProtocol();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSourceItems()) {
    query["SourceItems"] = request.sourceItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveListenerWhiteListItem"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveListenerWhiteListItemResponse>();
}

/**
 * @summary Removes IP addresses or CIDR blocks from the whitelist of a listener.
 *
 * @param request RemoveListenerWhiteListItemRequest
 * @return RemoveListenerWhiteListItemResponse
 */
RemoveListenerWhiteListItemResponse Client::removeListenerWhiteListItem(const RemoveListenerWhiteListItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeListenerWhiteListItemWithOptions(request, runtime);
}

/**
 * @summary Removes tags from a Server Load Balancer (SLB) instance.
 *
 * @param request RemoveTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveTagsResponse
 */
RemoveTagsResponse Client::removeTagsWithOptions(const RemoveTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveTags"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveTagsResponse>();
}

/**
 * @summary Removes tags from a Server Load Balancer (SLB) instance.
 *
 * @param request RemoveTagsRequest
 * @return RemoveTagsResponse
 */
RemoveTagsResponse Client::removeTags(const RemoveTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeTagsWithOptions(request, runtime);
}

/**
 * @summary Removes backend servers from a vServer group.
 *
 * @description >  If the backend servers specified by the **BackendServers** parameter do not exist in the vServer group, the backend servers are ignored. No error message is returned.
 *
 * @param request RemoveVServerGroupBackendServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveVServerGroupBackendServersResponse
 */
RemoveVServerGroupBackendServersResponse Client::removeVServerGroupBackendServersWithOptions(const RemoveVServerGroupBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServers()) {
    query["BackendServers"] = request.backendServers();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveVServerGroupBackendServers"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveVServerGroupBackendServersResponse>();
}

/**
 * @summary Removes backend servers from a vServer group.
 *
 * @description >  If the backend servers specified by the **BackendServers** parameter do not exist in the vServer group, the backend servers are ignored. No error message is returned.
 *
 * @param request RemoveVServerGroupBackendServersRequest
 * @return RemoveVServerGroupBackendServersResponse
 */
RemoveVServerGroupBackendServersResponse Client::removeVServerGroupBackendServers(const RemoveVServerGroupBackendServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeVServerGroupBackendServersWithOptions(request, runtime);
}

/**
 * @summary Renames an access control list (ACL).
 *
 * @param request SetAccessControlListAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAccessControlListAttributeResponse
 */
SetAccessControlListAttributeResponse Client::setAccessControlListAttributeWithOptions(const SetAccessControlListAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasAclName()) {
    query["AclName"] = request.aclName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAccessControlListAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAccessControlListAttributeResponse>();
}

/**
 * @summary Renames an access control list (ACL).
 *
 * @param request SetAccessControlListAttributeRequest
 * @return SetAccessControlListAttributeResponse
 */
SetAccessControlListAttributeResponse Client::setAccessControlListAttribute(const SetAccessControlListAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAccessControlListAttributeWithOptions(request, runtime);
}

/**
 * @summary Adds an access log forwarding rule to a Classic Load Balancer (CLB) instance.
 *
 * @param request SetAccessLogsDownloadAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAccessLogsDownloadAttributeResponse
 */
SetAccessLogsDownloadAttributeResponse Client::setAccessLogsDownloadAttributeWithOptions(const SetAccessLogsDownloadAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasLogsDownloadAttributes()) {
    query["LogsDownloadAttributes"] = request.logsDownloadAttributes();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAccessLogsDownloadAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAccessLogsDownloadAttributeResponse>();
}

/**
 * @summary Adds an access log forwarding rule to a Classic Load Balancer (CLB) instance.
 *
 * @param request SetAccessLogsDownloadAttributeRequest
 * @return SetAccessLogsDownloadAttributeResponse
 */
SetAccessLogsDownloadAttributeResponse Client::setAccessLogsDownloadAttribute(const SetAccessLogsDownloadAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAccessLogsDownloadAttributeWithOptions(request, runtime);
}

/**
 * @summary Specifies weights for backend servers.
 *
 * @param request SetBackendServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetBackendServersResponse
 */
SetBackendServersResponse Client::setBackendServersWithOptions(const SetBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServers()) {
    query["BackendServers"] = request.backendServers();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetBackendServers"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetBackendServersResponse>();
}

/**
 * @summary Specifies weights for backend servers.
 *
 * @param request SetBackendServersRequest
 * @return SetBackendServersResponse
 */
SetBackendServersResponse Client::setBackendServers(const SetBackendServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setBackendServersWithOptions(request, runtime);
}

/**
 * @summary Specifies a name for a CA certificate.
 *
 * @param request SetCACertificateNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetCACertificateNameResponse
 */
SetCACertificateNameResponse Client::setCACertificateNameWithOptions(const SetCACertificateNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCACertificateId()) {
    query["CACertificateId"] = request.CACertificateId();
  }

  if (!!request.hasCACertificateName()) {
    query["CACertificateName"] = request.CACertificateName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetCACertificateName"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetCACertificateNameResponse>();
}

/**
 * @summary Specifies a name for a CA certificate.
 *
 * @param request SetCACertificateNameRequest
 * @return SetCACertificateNameResponse
 */
SetCACertificateNameResponse Client::setCACertificateName(const SetCACertificateNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCACertificateNameWithOptions(request, runtime);
}

/**
 * @summary Replaces the certificate of an additional domain name.
 *
 * @description >  You cannot replace an additional certificate for a listener that is added to a shared-resource Server Load Balancer (SLB) instance.
 *
 * @param request SetDomainExtensionAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDomainExtensionAttributeResponse
 */
SetDomainExtensionAttributeResponse Client::setDomainExtensionAttributeWithOptions(const SetDomainExtensionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainExtensionId()) {
    query["DomainExtensionId"] = request.domainExtensionId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasServerCertificateId()) {
    query["ServerCertificateId"] = request.serverCertificateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDomainExtensionAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDomainExtensionAttributeResponse>();
}

/**
 * @summary Replaces the certificate of an additional domain name.
 *
 * @description >  You cannot replace an additional certificate for a listener that is added to a shared-resource Server Load Balancer (SLB) instance.
 *
 * @param request SetDomainExtensionAttributeRequest
 * @return SetDomainExtensionAttributeResponse
 */
SetDomainExtensionAttributeResponse Client::setDomainExtensionAttribute(const SetDomainExtensionAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDomainExtensionAttributeWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the whitelist of a specified listener.
 *
 * @param request SetListenerAccessControlStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetListenerAccessControlStatusResponse
 */
SetListenerAccessControlStatusResponse Client::setListenerAccessControlStatusWithOptions(const SetListenerAccessControlStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessControlStatus()) {
    query["AccessControlStatus"] = request.accessControlStatus();
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

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetListenerAccessControlStatus"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetListenerAccessControlStatusResponse>();
}

/**
 * @summary Enables or disables the whitelist of a specified listener.
 *
 * @param request SetListenerAccessControlStatusRequest
 * @return SetListenerAccessControlStatusResponse
 */
SetListenerAccessControlStatusResponse Client::setListenerAccessControlStatus(const SetListenerAccessControlStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setListenerAccessControlStatusWithOptions(request, runtime);
}

/**
 * @summary Enables or disables deletion protection for an SLB instance.
 *
 * @param request SetLoadBalancerDeleteProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerDeleteProtectionResponse
 */
SetLoadBalancerDeleteProtectionResponse Client::setLoadBalancerDeleteProtectionWithOptions(const SetLoadBalancerDeleteProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteProtection()) {
    query["DeleteProtection"] = request.deleteProtection();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerDeleteProtection"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerDeleteProtectionResponse>();
}

/**
 * @summary Enables or disables deletion protection for an SLB instance.
 *
 * @param request SetLoadBalancerDeleteProtectionRequest
 * @return SetLoadBalancerDeleteProtectionResponse
 */
SetLoadBalancerDeleteProtectionResponse Client::setLoadBalancerDeleteProtection(const SetLoadBalancerDeleteProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerDeleteProtectionWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of an HTTP listener.
 *
 * @description ### Prerequisites
 * *   A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/27577.html).
 * *   An HTTP listener is created. For more information about how to create an HTTP listener, see [CreateLoadBalancerHTTPListener](https://help.aliyun.com/document_detail/27592.html).
 *
 * @param request SetLoadBalancerHTTPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerHTTPListenerAttributeResponse
 */
SetLoadBalancerHTTPListenerAttributeResponse Client::setLoadBalancerHTTPListenerAttributeWithOptions(const SetLoadBalancerHTTPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasAclStatus()) {
    query["AclStatus"] = request.aclStatus();
  }

  if (!!request.hasAclType()) {
    query["AclType"] = request.aclType();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasCookie()) {
    query["Cookie"] = request.cookie();
  }

  if (!!request.hasCookieTimeout()) {
    query["CookieTimeout"] = request.cookieTimeout();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGzip()) {
    query["Gzip"] = request.gzip();
  }

  if (!!request.hasHealthCheck()) {
    query["HealthCheck"] = request.healthCheck();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.healthCheckConnectPort();
  }

  if (!!request.hasHealthCheckDomain()) {
    query["HealthCheckDomain"] = request.healthCheckDomain();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    query["HealthCheckHttpCode"] = request.healthCheckHttpCode();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.healthCheckInterval();
  }

  if (!!request.hasHealthCheckMethod()) {
    query["HealthCheckMethod"] = request.healthCheckMethod();
  }

  if (!!request.hasHealthCheckTimeout()) {
    query["HealthCheckTimeout"] = request.healthCheckTimeout();
  }

  if (!!request.hasHealthCheckURI()) {
    query["HealthCheckURI"] = request.healthCheckURI();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.healthyThreshold();
  }

  if (!!request.hasIdleTimeout()) {
    query["IdleTimeout"] = request.idleTimeout();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRequestTimeout()) {
    query["RequestTimeout"] = request.requestTimeout();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.scheduler();
  }

  if (!!request.hasStickySession()) {
    query["StickySession"] = request.stickySession();
  }

  if (!!request.hasStickySessionType()) {
    query["StickySessionType"] = request.stickySessionType();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.unhealthyThreshold();
  }

  if (!!request.hasVServerGroup()) {
    query["VServerGroup"] = request.VServerGroup();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  if (!!request.hasXForwardedFor()) {
    query["XForwardedFor"] = request.XForwardedFor();
  }

  if (!!request.hasXForwardedFor_ClientSrcPort()) {
    query["XForwardedFor_ClientSrcPort"] = request.XForwardedFor_ClientSrcPort();
  }

  if (!!request.hasXForwardedFor_SLBID()) {
    query["XForwardedFor_SLBID"] = request.XForwardedFor_SLBID();
  }

  if (!!request.hasXForwardedFor_SLBIP()) {
    query["XForwardedFor_SLBIP"] = request.XForwardedFor_SLBIP();
  }

  if (!!request.hasXForwardedFor_SLBPORT()) {
    query["XForwardedFor_SLBPORT"] = request.XForwardedFor_SLBPORT();
  }

  if (!!request.hasXForwardedFor_proto()) {
    query["XForwardedFor_proto"] = request.XForwardedFor_proto();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerHTTPListenerAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerHTTPListenerAttributeResponse>();
}

/**
 * @summary Modifies the configurations of an HTTP listener.
 *
 * @description ### Prerequisites
 * *   A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/27577.html).
 * *   An HTTP listener is created. For more information about how to create an HTTP listener, see [CreateLoadBalancerHTTPListener](https://help.aliyun.com/document_detail/27592.html).
 *
 * @param request SetLoadBalancerHTTPListenerAttributeRequest
 * @return SetLoadBalancerHTTPListenerAttributeResponse
 */
SetLoadBalancerHTTPListenerAttributeResponse Client::setLoadBalancerHTTPListenerAttribute(const SetLoadBalancerHTTPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerHTTPListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of an HTTPS listener.
 *
 * @description *   A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/27577.html).
 * *   An HTTPS listener is created. For more information about how to create an HTTPS listener, see [CreateLoadBalancerHTTPSListener](https://help.aliyun.com/document_detail/27593.html).
 *
 * @param request SetLoadBalancerHTTPSListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerHTTPSListenerAttributeResponse
 */
SetLoadBalancerHTTPSListenerAttributeResponse Client::setLoadBalancerHTTPSListenerAttributeWithOptions(const SetLoadBalancerHTTPSListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasAclStatus()) {
    query["AclStatus"] = request.aclStatus();
  }

  if (!!request.hasAclType()) {
    query["AclType"] = request.aclType();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasCACertificateId()) {
    query["CACertificateId"] = request.CACertificateId();
  }

  if (!!request.hasCookie()) {
    query["Cookie"] = request.cookie();
  }

  if (!!request.hasCookieTimeout()) {
    query["CookieTimeout"] = request.cookieTimeout();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEnableHttp2()) {
    query["EnableHttp2"] = request.enableHttp2();
  }

  if (!!request.hasGzip()) {
    query["Gzip"] = request.gzip();
  }

  if (!!request.hasHealthCheck()) {
    query["HealthCheck"] = request.healthCheck();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.healthCheckConnectPort();
  }

  if (!!request.hasHealthCheckDomain()) {
    query["HealthCheckDomain"] = request.healthCheckDomain();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    query["HealthCheckHttpCode"] = request.healthCheckHttpCode();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.healthCheckInterval();
  }

  if (!!request.hasHealthCheckMethod()) {
    query["HealthCheckMethod"] = request.healthCheckMethod();
  }

  if (!!request.hasHealthCheckTimeout()) {
    query["HealthCheckTimeout"] = request.healthCheckTimeout();
  }

  if (!!request.hasHealthCheckURI()) {
    query["HealthCheckURI"] = request.healthCheckURI();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.healthyThreshold();
  }

  if (!!request.hasIdleTimeout()) {
    query["IdleTimeout"] = request.idleTimeout();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRequestTimeout()) {
    query["RequestTimeout"] = request.requestTimeout();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.scheduler();
  }

  if (!!request.hasServerCertificateId()) {
    query["ServerCertificateId"] = request.serverCertificateId();
  }

  if (!!request.hasStickySession()) {
    query["StickySession"] = request.stickySession();
  }

  if (!!request.hasStickySessionType()) {
    query["StickySessionType"] = request.stickySessionType();
  }

  if (!!request.hasTLSCipherPolicy()) {
    query["TLSCipherPolicy"] = request.TLSCipherPolicy();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.unhealthyThreshold();
  }

  if (!!request.hasVServerGroup()) {
    query["VServerGroup"] = request.VServerGroup();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  if (!!request.hasXForwardedFor()) {
    query["XForwardedFor"] = request.XForwardedFor();
  }

  if (!!request.hasXForwardedFor_ClientSrcPort()) {
    query["XForwardedFor_ClientSrcPort"] = request.XForwardedFor_ClientSrcPort();
  }

  if (!!request.hasXForwardedFor_SLBID()) {
    query["XForwardedFor_SLBID"] = request.XForwardedFor_SLBID();
  }

  if (!!request.hasXForwardedFor_SLBIP()) {
    query["XForwardedFor_SLBIP"] = request.XForwardedFor_SLBIP();
  }

  if (!!request.hasXForwardedFor_SLBPORT()) {
    query["XForwardedFor_SLBPORT"] = request.XForwardedFor_SLBPORT();
  }

  if (!!request.hasXForwardedFor_proto()) {
    query["XForwardedFor_proto"] = request.XForwardedFor_proto();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerHTTPSListenerAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerHTTPSListenerAttributeResponse>();
}

/**
 * @summary Modifies the configurations of an HTTPS listener.
 *
 * @description *   A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/27577.html).
 * *   An HTTPS listener is created. For more information about how to create an HTTPS listener, see [CreateLoadBalancerHTTPSListener](https://help.aliyun.com/document_detail/27593.html).
 *
 * @param request SetLoadBalancerHTTPSListenerAttributeRequest
 * @return SetLoadBalancerHTTPSListenerAttributeResponse
 */
SetLoadBalancerHTTPSListenerAttributeResponse Client::setLoadBalancerHTTPSListenerAttribute(const SetLoadBalancerHTTPSListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerHTTPSListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of the configuration read-only mode for a Classic Load Balancer (CLB) instance.
 *
 * @param request SetLoadBalancerModificationProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerModificationProtectionResponse
 */
SetLoadBalancerModificationProtectionResponse Client::setLoadBalancerModificationProtectionWithOptions(const SetLoadBalancerModificationProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasModificationProtectionReason()) {
    query["ModificationProtectionReason"] = request.modificationProtectionReason();
  }

  if (!!request.hasModificationProtectionStatus()) {
    query["ModificationProtectionStatus"] = request.modificationProtectionStatus();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerModificationProtection"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerModificationProtectionResponse>();
}

/**
 * @summary Modifies the configuration of the configuration read-only mode for a Classic Load Balancer (CLB) instance.
 *
 * @param request SetLoadBalancerModificationProtectionRequest
 * @return SetLoadBalancerModificationProtectionResponse
 */
SetLoadBalancerModificationProtectionResponse Client::setLoadBalancerModificationProtection(const SetLoadBalancerModificationProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerModificationProtectionWithOptions(request, runtime);
}

/**
 * @summary Changes the name of a Classic Load Balancer (CLB) instance.
 *
 * @param request SetLoadBalancerNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerNameResponse
 */
SetLoadBalancerNameResponse Client::setLoadBalancerNameWithOptions(const SetLoadBalancerNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasLoadBalancerName()) {
    query["LoadBalancerName"] = request.loadBalancerName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerName"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerNameResponse>();
}

/**
 * @summary Changes the name of a Classic Load Balancer (CLB) instance.
 *
 * @param request SetLoadBalancerNameRequest
 * @return SetLoadBalancerNameResponse
 */
SetLoadBalancerNameResponse Client::setLoadBalancerName(const SetLoadBalancerNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerNameWithOptions(request, runtime);
}

/**
 * @summary Modifies the state of a Classic Load Balancer (CLB) instance.
 *
 * @param request SetLoadBalancerStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerStatusResponse
 */
SetLoadBalancerStatusResponse Client::setLoadBalancerStatusWithOptions(const SetLoadBalancerStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasLoadBalancerStatus()) {
    query["LoadBalancerStatus"] = request.loadBalancerStatus();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerStatus"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerStatusResponse>();
}

/**
 * @summary Modifies the state of a Classic Load Balancer (CLB) instance.
 *
 * @param request SetLoadBalancerStatusRequest
 * @return SetLoadBalancerStatusResponse
 */
SetLoadBalancerStatusResponse Client::setLoadBalancerStatus(const SetLoadBalancerStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a TCP listener of Classic Load Balancer (CLB).
 *
 * @description *   A CLB instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/2401685.html).
 * *   A TCP listener is created. For more information, see [CreateLoadBalancerTCPListener](~~CreateLoadBalancerTCPListener~~).
 *
 * @param request SetLoadBalancerTCPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerTCPListenerAttributeResponse
 */
SetLoadBalancerTCPListenerAttributeResponse Client::setLoadBalancerTCPListenerAttributeWithOptions(const SetLoadBalancerTCPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasAclStatus()) {
    query["AclStatus"] = request.aclStatus();
  }

  if (!!request.hasAclType()) {
    query["AclType"] = request.aclType();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasConnectionDrain()) {
    query["ConnectionDrain"] = request.connectionDrain();
  }

  if (!!request.hasConnectionDrainTimeout()) {
    query["ConnectionDrainTimeout"] = request.connectionDrainTimeout();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEstablishedTimeout()) {
    query["EstablishedTimeout"] = request.establishedTimeout();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.healthCheckConnectPort();
  }

  if (!!request.hasHealthCheckConnectTimeout()) {
    query["HealthCheckConnectTimeout"] = request.healthCheckConnectTimeout();
  }

  if (!!request.hasHealthCheckDomain()) {
    query["HealthCheckDomain"] = request.healthCheckDomain();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    query["HealthCheckHttpCode"] = request.healthCheckHttpCode();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.healthCheckInterval();
  }

  if (!!request.hasHealthCheckSwitch()) {
    query["HealthCheckSwitch"] = request.healthCheckSwitch();
  }

  if (!!request.hasHealthCheckType()) {
    query["HealthCheckType"] = request.healthCheckType();
  }

  if (!!request.hasHealthCheckURI()) {
    query["HealthCheckURI"] = request.healthCheckURI();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.healthyThreshold();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasMasterSlaveServerGroup()) {
    query["MasterSlaveServerGroup"] = request.masterSlaveServerGroup();
  }

  if (!!request.hasMasterSlaveServerGroupId()) {
    query["MasterSlaveServerGroupId"] = request.masterSlaveServerGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPersistenceTimeout()) {
    query["PersistenceTimeout"] = request.persistenceTimeout();
  }

  if (!!request.hasProxyProtocolV2Enabled()) {
    query["ProxyProtocolV2Enabled"] = request.proxyProtocolV2Enabled();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.scheduler();
  }

  if (!!request.hasSynProxy()) {
    query["SynProxy"] = request.synProxy();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.unhealthyThreshold();
  }

  if (!!request.hasVServerGroup()) {
    query["VServerGroup"] = request.VServerGroup();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerTCPListenerAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerTCPListenerAttributeResponse>();
}

/**
 * @summary Modifies the configurations of a TCP listener of Classic Load Balancer (CLB).
 *
 * @description *   A CLB instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/2401685.html).
 * *   A TCP listener is created. For more information, see [CreateLoadBalancerTCPListener](~~CreateLoadBalancerTCPListener~~).
 *
 * @param request SetLoadBalancerTCPListenerAttributeRequest
 * @return SetLoadBalancerTCPListenerAttributeResponse
 */
SetLoadBalancerTCPListenerAttributeResponse Client::setLoadBalancerTCPListenerAttribute(const SetLoadBalancerTCPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerTCPListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a UDP listener.
 *
 * @description *   A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/27577.html).
 * *   A UDP listener is created. For more information, see [CreateLoadBalancerUDPListener](https://help.aliyun.com/document_detail/27595.html).
 *
 * @param request SetLoadBalancerUDPListenerAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetLoadBalancerUDPListenerAttributeResponse
 */
SetLoadBalancerUDPListenerAttributeResponse Client::setLoadBalancerUDPListenerAttributeWithOptions(const SetLoadBalancerUDPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclId()) {
    query["AclId"] = request.aclId();
  }

  if (!!request.hasAclStatus()) {
    query["AclStatus"] = request.aclStatus();
  }

  if (!!request.hasAclType()) {
    query["AclType"] = request.aclType();
  }

  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.bandwidth();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.healthCheckConnectPort();
  }

  if (!!request.hasHealthCheckConnectTimeout()) {
    query["HealthCheckConnectTimeout"] = request.healthCheckConnectTimeout();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.healthCheckInterval();
  }

  if (!!request.hasHealthCheckSwitch()) {
    query["HealthCheckSwitch"] = request.healthCheckSwitch();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.healthyThreshold();
  }

  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasMasterSlaveServerGroup()) {
    query["MasterSlaveServerGroup"] = request.masterSlaveServerGroup();
  }

  if (!!request.hasMasterSlaveServerGroupId()) {
    query["MasterSlaveServerGroupId"] = request.masterSlaveServerGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProxyProtocolV2Enabled()) {
    query["ProxyProtocolV2Enabled"] = request.proxyProtocolV2Enabled();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.scheduler();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.unhealthyThreshold();
  }

  if (!!request.hasVServerGroup()) {
    query["VServerGroup"] = request.VServerGroup();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  if (!!request.hasHealthCheckExp()) {
    query["healthCheckExp"] = request.healthCheckExp();
  }

  if (!!request.hasHealthCheckReq()) {
    query["healthCheckReq"] = request.healthCheckReq();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetLoadBalancerUDPListenerAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetLoadBalancerUDPListenerAttributeResponse>();
}

/**
 * @summary Modifies the configurations of a UDP listener.
 *
 * @description *   A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/27577.html).
 * *   A UDP listener is created. For more information, see [CreateLoadBalancerUDPListener](https://help.aliyun.com/document_detail/27595.html).
 *
 * @param request SetLoadBalancerUDPListenerAttributeRequest
 * @return SetLoadBalancerUDPListenerAttributeResponse
 */
SetLoadBalancerUDPListenerAttributeResponse Client::setLoadBalancerUDPListenerAttribute(const SetLoadBalancerUDPListenerAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setLoadBalancerUDPListenerAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies a forwarding rule that is associated with a vServer group.
 *
 * @param request SetRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetRuleResponse
 */
SetRuleResponse Client::setRuleWithOptions(const SetRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCookie()) {
    query["Cookie"] = request.cookie();
  }

  if (!!request.hasCookieTimeout()) {
    query["CookieTimeout"] = request.cookieTimeout();
  }

  if (!!request.hasHealthCheck()) {
    query["HealthCheck"] = request.healthCheck();
  }

  if (!!request.hasHealthCheckConnectPort()) {
    query["HealthCheckConnectPort"] = request.healthCheckConnectPort();
  }

  if (!!request.hasHealthCheckDomain()) {
    query["HealthCheckDomain"] = request.healthCheckDomain();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    query["HealthCheckHttpCode"] = request.healthCheckHttpCode();
  }

  if (!!request.hasHealthCheckInterval()) {
    query["HealthCheckInterval"] = request.healthCheckInterval();
  }

  if (!!request.hasHealthCheckTimeout()) {
    query["HealthCheckTimeout"] = request.healthCheckTimeout();
  }

  if (!!request.hasHealthCheckURI()) {
    query["HealthCheckURI"] = request.healthCheckURI();
  }

  if (!!request.hasHealthyThreshold()) {
    query["HealthyThreshold"] = request.healthyThreshold();
  }

  if (!!request.hasListenerSync()) {
    query["ListenerSync"] = request.listenerSync();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasScheduler()) {
    query["Scheduler"] = request.scheduler();
  }

  if (!!request.hasStickySession()) {
    query["StickySession"] = request.stickySession();
  }

  if (!!request.hasStickySessionType()) {
    query["StickySessionType"] = request.stickySessionType();
  }

  if (!!request.hasUnhealthyThreshold()) {
    query["UnhealthyThreshold"] = request.unhealthyThreshold();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetRule"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetRuleResponse>();
}

/**
 * @summary Modifies a forwarding rule that is associated with a vServer group.
 *
 * @param request SetRuleRequest
 * @return SetRuleResponse
 */
SetRuleResponse Client::setRule(const SetRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setRuleWithOptions(request, runtime);
}

/**
 * @summary Sets a name for a server certificate.
 *
 * @param request SetServerCertificateNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetServerCertificateNameResponse
 */
SetServerCertificateNameResponse Client::setServerCertificateNameWithOptions(const SetServerCertificateNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasServerCertificateId()) {
    query["ServerCertificateId"] = request.serverCertificateId();
  }

  if (!!request.hasServerCertificateName()) {
    query["ServerCertificateName"] = request.serverCertificateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetServerCertificateName"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetServerCertificateNameResponse>();
}

/**
 * @summary Sets a name for a server certificate.
 *
 * @param request SetServerCertificateNameRequest
 * @return SetServerCertificateNameResponse
 */
SetServerCertificateNameResponse Client::setServerCertificateName(const SetServerCertificateNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setServerCertificateNameWithOptions(request, runtime);
}

/**
 * @summary Configures a Transport Layer Security (TLS) policy.
 *
 * @param request SetTLSCipherPolicyAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetTLSCipherPolicyAttributeResponse
 */
SetTLSCipherPolicyAttributeResponse Client::setTLSCipherPolicyAttributeWithOptions(const SetTLSCipherPolicyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCiphers()) {
    query["Ciphers"] = request.ciphers();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTLSCipherPolicyId()) {
    query["TLSCipherPolicyId"] = request.TLSCipherPolicyId();
  }

  if (!!request.hasTLSVersions()) {
    query["TLSVersions"] = request.TLSVersions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetTLSCipherPolicyAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetTLSCipherPolicyAttributeResponse>();
}

/**
 * @summary Configures a Transport Layer Security (TLS) policy.
 *
 * @param request SetTLSCipherPolicyAttributeRequest
 * @return SetTLSCipherPolicyAttributeResponse
 */
SetTLSCipherPolicyAttributeResponse Client::setTLSCipherPolicyAttribute(const SetTLSCipherPolicyAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setTLSCipherPolicyAttributeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a vServer group.
 *
 * @description This operation can be used to modify the weights of backend servers and names of vServer groups.
 * *   If you want to modify backend servers in a specified vServer group, call the [ModifyVServerGroupBackendServers](https://help.aliyun.com/document_detail/35220.html) operation.
 * *   If you want to add backend servers to a specified vServer group, call the [AddVServerGroupBackendServers](https://help.aliyun.com/document_detail/35218.html) operation.
 *
 * @param request SetVServerGroupAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetVServerGroupAttributeResponse
 */
SetVServerGroupAttributeResponse Client::setVServerGroupAttributeWithOptions(const SetVServerGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackendServers()) {
    query["BackendServers"] = request.backendServers();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVServerGroupId()) {
    query["VServerGroupId"] = request.VServerGroupId();
  }

  if (!!request.hasVServerGroupName()) {
    query["VServerGroupName"] = request.VServerGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetVServerGroupAttribute"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetVServerGroupAttributeResponse>();
}

/**
 * @summary Modifies the configurations of a vServer group.
 *
 * @description This operation can be used to modify the weights of backend servers and names of vServer groups.
 * *   If you want to modify backend servers in a specified vServer group, call the [ModifyVServerGroupBackendServers](https://help.aliyun.com/document_detail/35220.html) operation.
 * *   If you want to add backend servers to a specified vServer group, call the [AddVServerGroupBackendServers](https://help.aliyun.com/document_detail/35218.html) operation.
 *
 * @param request SetVServerGroupAttributeRequest
 * @return SetVServerGroupAttributeResponse
 */
SetVServerGroupAttributeResponse Client::setVServerGroupAttribute(const SetVServerGroupAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setVServerGroupAttributeWithOptions(request, runtime);
}

/**
 * @summary Enables a listener.
 *
 * @description When you call this operation, take note of the following items:
 * *   You can call the operation only when the listener is in the Stopped state.
 * *   If the operation is successful, the listener switches to the Starting state.
 * *   You cannot perform this operation when the Classic Load Balancer (CLB) instance to which the listener belongs is in the Locked state.
 *
 * @param request StartLoadBalancerListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartLoadBalancerListenerResponse
 */
StartLoadBalancerListenerResponse Client::startLoadBalancerListenerWithOptions(const StartLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.listenerProtocol();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartLoadBalancerListener"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartLoadBalancerListenerResponse>();
}

/**
 * @summary Enables a listener.
 *
 * @description When you call this operation, take note of the following items:
 * *   You can call the operation only when the listener is in the Stopped state.
 * *   If the operation is successful, the listener switches to the Starting state.
 * *   You cannot perform this operation when the Classic Load Balancer (CLB) instance to which the listener belongs is in the Locked state.
 *
 * @param request StartLoadBalancerListenerRequest
 * @return StartLoadBalancerListenerResponse
 */
StartLoadBalancerListenerResponse Client::startLoadBalancerListener(const StartLoadBalancerListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startLoadBalancerListenerWithOptions(request, runtime);
}

/**
 * @summary Stops a listener.
 *
 * @description Before you make this API call, note the following:
 * *   After the API call is successfully made, the listener enters the stopped state.
 * *   If the Classic Load Balancer (CLB) instance to which the listener to be stopped belongs is in the locked state, this API call cannot be made.
 * >  If you stop the listener, your services will be disrupted. Exercise caution when you perform this action.
 *
 * @param request StopLoadBalancerListenerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopLoadBalancerListenerResponse
 */
StopLoadBalancerListenerResponse Client::stopLoadBalancerListenerWithOptions(const StopLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasListenerPort()) {
    query["ListenerPort"] = request.listenerPort();
  }

  if (!!request.hasListenerProtocol()) {
    query["ListenerProtocol"] = request.listenerProtocol();
  }

  if (!!request.hasLoadBalancerId()) {
    query["LoadBalancerId"] = request.loadBalancerId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopLoadBalancerListener"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopLoadBalancerListenerResponse>();
}

/**
 * @summary Stops a listener.
 *
 * @description Before you make this API call, note the following:
 * *   After the API call is successfully made, the listener enters the stopped state.
 * *   If the Classic Load Balancer (CLB) instance to which the listener to be stopped belongs is in the locked state, this API call cannot be made.
 * >  If you stop the listener, your services will be disrupted. Exercise caution when you perform this action.
 *
 * @param request StopLoadBalancerListenerRequest
 * @return StopLoadBalancerListenerResponse
 */
StopLoadBalancerListenerResponse Client::stopLoadBalancerListener(const StopLoadBalancerListenerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopLoadBalancerListenerWithOptions(request, runtime);
}

/**
 * @summary Creates tags and adds the tags to resources.
 *
 * @description >  You can add at most 20 tags to each instance. Before you add tags to a resource, Alibaba Cloud checks the number of existing tags of the resource. If the maximum number is reached, an error message is returned.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
    {"version" , "2014-05-15"},
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
 * @summary Creates tags and adds the tags to resources.
 *
 * @description >  You can add at most 20 tags to each instance. Before you add tags to a resource, Alibaba Cloud checks the number of existing tags of the resource. If the maximum number is reached, an error message is returned.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from a resource.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
    {"action" , "UntagResources"},
    {"version" , "2014-05-15"},
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
 * @summary Removes tags from a resource.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Uploads a CA certificate.
 *
 * @description You can upload only one CA certificate at a time. After a CA certificate is uploaded, the certificate ID, name, and fingerprint are returned.
 *
 * @param request UploadCACertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadCACertificateResponse
 */
UploadCACertificateResponse Client::uploadCACertificateWithOptions(const UploadCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCACertificate()) {
    query["CACertificate"] = request.CACertificate();
  }

  if (!!request.hasCACertificateName()) {
    query["CACertificateName"] = request.CACertificateName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadCACertificate"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadCACertificateResponse>();
}

/**
 * @summary Uploads a CA certificate.
 *
 * @description You can upload only one CA certificate at a time. After a CA certificate is uploaded, the certificate ID, name, and fingerprint are returned.
 *
 * @param request UploadCACertificateRequest
 * @return UploadCACertificateResponse
 */
UploadCACertificateResponse Client::uploadCACertificate(const UploadCACertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadCACertificateWithOptions(request, runtime);
}

/**
 * @summary Uploads a server certificate.
 *
 * @description *   You can upload only one server certificate and its private key in each call.
 * *   After a server certificate and its private key are uploaded, the fingerprints of all server certificates that belong to your Alibaba Cloud account are returned.
 *
 * @param request UploadServerCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadServerCertificateResponse
 */
UploadServerCertificateResponse Client::uploadServerCertificateWithOptions(const UploadServerCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliCloudCertificateId()) {
    query["AliCloudCertificateId"] = request.aliCloudCertificateId();
  }

  if (!!request.hasAliCloudCertificateName()) {
    query["AliCloudCertificateName"] = request.aliCloudCertificateName();
  }

  if (!!request.hasAliCloudCertificateRegionId()) {
    query["AliCloudCertificateRegionId"] = request.aliCloudCertificateRegionId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPrivateKey()) {
    query["PrivateKey"] = request.privateKey();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasServerCertificate()) {
    query["ServerCertificate"] = request.serverCertificate();
  }

  if (!!request.hasServerCertificateName()) {
    query["ServerCertificateName"] = request.serverCertificateName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadServerCertificate"},
    {"version" , "2014-05-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadServerCertificateResponse>();
}

/**
 * @summary Uploads a server certificate.
 *
 * @description *   You can upload only one server certificate and its private key in each call.
 * *   After a server certificate and its private key are uploaded, the fingerprints of all server certificates that belong to your Alibaba Cloud account are returned.
 *
 * @param request UploadServerCertificateRequest
 * @return UploadServerCertificateResponse
 */
UploadServerCertificateResponse Client::uploadServerCertificate(const UploadServerCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadServerCertificateWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Slb20140515