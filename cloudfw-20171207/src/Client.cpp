#include <darabonba/Core.hpp>
#include <alibabacloud/Cloudfw20171207.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Cloudfw20171207::Models;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{

AlibabaCloud::Cloudfw20171207::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  this->_endpointMap = json({
    {"ap-southeast-1" , "cloudfw.ap-southeast-1.aliyuncs.com"},
    {"cn-hangzhou" , "cloudfw.cn-hangzhou.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("cloudfw", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates an address book for access control. Supported address book types are IP address books, Elastic Compute Service (ECS) tag-based address books, port address books, and domain address books. An ECS tag-based address book includes the public IP addresses of the ECS instances that have specific tags.
 *
 * @description You can call the AddAddressBook operation to create an address book for access control. The address book can be an IP address book, an ECS tag-based address book, a port address book, or a domain address book.
 * ## [](#qps)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AddAddressBookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAddressBookResponse
 */
AddAddressBookResponse Client::addAddressBookWithOptions(const AddAddressBookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAckClusterConnectorId()) {
    query["AckClusterConnectorId"] = request.ackClusterConnectorId();
  }

  if (!!request.hasAckLabels()) {
    query["AckLabels"] = request.ackLabels();
  }

  if (!!request.hasAckNamespaces()) {
    query["AckNamespaces"] = request.ackNamespaces();
  }

  if (!!request.hasAddressList()) {
    query["AddressList"] = request.addressList();
  }

  if (!!request.hasAutoAddTagEcs()) {
    query["AutoAddTagEcs"] = request.autoAddTagEcs();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.groupType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasTagList()) {
    query["TagList"] = request.tagList();
  }

  if (!!request.hasTagRelation()) {
    query["TagRelation"] = request.tagRelation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAddressBook"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAddressBookResponse>();
}

/**
 * @summary Creates an address book for access control. Supported address book types are IP address books, Elastic Compute Service (ECS) tag-based address books, port address books, and domain address books. An ECS tag-based address book includes the public IP addresses of the ECS instances that have specific tags.
 *
 * @description You can call the AddAddressBook operation to create an address book for access control. The address book can be an IP address book, an ECS tag-based address book, a port address book, or a domain address book.
 * ## [](#qps)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AddAddressBookRequest
 * @return AddAddressBookResponse
 */
AddAddressBookResponse Client::addAddressBook(const AddAddressBookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAddressBookWithOptions(request, runtime);
}

/**
 * @summary Creates an access control policy.
 *
 * @description You can call the AddControlPolicy operation to create an access control policy to allow, block, or monitor traffic that reaches Cloud Firewall.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AddControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddControlPolicyResponse
 */
AddControlPolicyResponse Client::addControlPolicyWithOptions(const AddControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.aclAction();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasApplicationNameList()) {
    query["ApplicationNameList"] = request.applicationNameList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestPort()) {
    query["DestPort"] = request.destPort();
  }

  if (!!request.hasDestPortGroup()) {
    query["DestPortGroup"] = request.destPortGroup();
  }

  if (!!request.hasDestPortType()) {
    query["DestPortType"] = request.destPortType();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.destination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.destinationType();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasDomainResolveType()) {
    query["DomainResolveType"] = request.domainResolveType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.ipVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNewOrder()) {
    query["NewOrder"] = request.newOrder();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.proto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.release();
  }

  if (!!request.hasRepeatDays()) {
    query["RepeatDays"] = request.repeatDays();
  }

  if (!!request.hasRepeatEndTime()) {
    query["RepeatEndTime"] = request.repeatEndTime();
  }

  if (!!request.hasRepeatStartTime()) {
    query["RepeatStartTime"] = request.repeatStartTime();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.repeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddControlPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddControlPolicyResponse>();
}

/**
 * @summary Creates an access control policy.
 *
 * @description You can call the AddControlPolicy operation to create an access control policy to allow, block, or monitor traffic that reaches Cloud Firewall.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AddControlPolicyRequest
 * @return AddControlPolicyResponse
 */
AddControlPolicyResponse Client::addControlPolicy(const AddControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addControlPolicyWithOptions(request, runtime);
}

/**
 * @summary 添加DNS防火墙ACL
 *
 * @param request AddDnsFirewallPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDnsFirewallPolicyResponse
 */
AddDnsFirewallPolicyResponse Client::addDnsFirewallPolicyWithOptions(const AddDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.aclAction();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.destination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.destinationType();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.ipVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.release();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDnsFirewallPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDnsFirewallPolicyResponse>();
}

/**
 * @summary 添加DNS防火墙ACL
 *
 * @param request AddDnsFirewallPolicyRequest
 * @return AddDnsFirewallPolicyResponse
 */
AddDnsFirewallPolicyResponse Client::addDnsFirewallPolicy(const AddDnsFirewallPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDnsFirewallPolicyWithOptions(request, runtime);
}

/**
 * @summary Adds members to Cloud Firewall.
 *
 * @description You can call this operation to add members to Cloud Firewall.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AddInstanceMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddInstanceMembersResponse
 */
AddInstanceMembersResponse Client::addInstanceMembersWithOptions(const AddInstanceMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMembers()) {
    query["Members"] = request.members();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddInstanceMembers"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddInstanceMembersResponse>();
}

/**
 * @summary Adds members to Cloud Firewall.
 *
 * @description You can call this operation to add members to Cloud Firewall.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AddInstanceMembersRequest
 * @return AddInstanceMembersResponse
 */
AddInstanceMembersResponse Client::addInstanceMembers(const AddInstanceMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addInstanceMembersWithOptions(request, runtime);
}

/**
 * @summary 添加私网DNS域名
 *
 * @param request AddPrivateDnsDomainNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPrivateDnsDomainNameResponse
 */
AddPrivateDnsDomainNameResponse Client::addPrivateDnsDomainNameWithOptions(const AddPrivateDnsDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessInstanceId()) {
    query["AccessInstanceId"] = request.accessInstanceId();
  }

  if (!!request.hasDomainNameList()) {
    query["DomainNameList"] = request.domainNameList();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddPrivateDnsDomainName"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPrivateDnsDomainNameResponse>();
}

/**
 * @summary 添加私网DNS域名
 *
 * @param request AddPrivateDnsDomainNameRequest
 * @return AddPrivateDnsDomainNameResponse
 */
AddPrivateDnsDomainNameResponse Client::addPrivateDnsDomainName(const AddPrivateDnsDomainNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPrivateDnsDomainNameWithOptions(request, runtime);
}

/**
 * @summary Copies all access control policies from a policy group of a source virtual private cloud (VPC) firewall to a policy group of a destination VPC firewall.
 *
 * @description You can call the BatchCopyVpcFirewallControlPolicy operation to copy all access control policies from a policy group of a source VPC firewall to a policy group of a destination VPC firewall.  
 * Before you call this operation, we recommend that you back up access control policies. For more information about how to back up an access control policy, see [Back up an access control policy](https://www.alibabacloud.com/help/en/cloud-firewall/latest/back-up-and-roll-back-an-access-control-policy).  
 * After you call this operation, all the access control policies in the policy group of the destination VPC firewall are replaced.  
 * The policy groups of the source VPC firewall and the destination VPC firewall must belong to the same Alibaba Cloud account.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. When the number of calls to this operation per second exceeds the limit, throttling is triggered. Throttling may affect your business. We recommend that you take note of the limit on this operation.
 *
 * @param request BatchCopyVpcFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCopyVpcFirewallControlPolicyResponse
 */
BatchCopyVpcFirewallControlPolicyResponse Client::batchCopyVpcFirewallControlPolicyWithOptions(const BatchCopyVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasSourceVpcFirewallId()) {
    query["SourceVpcFirewallId"] = request.sourceVpcFirewallId();
  }

  if (!!request.hasTargetVpcFirewallId()) {
    query["TargetVpcFirewallId"] = request.targetVpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchCopyVpcFirewallControlPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCopyVpcFirewallControlPolicyResponse>();
}

/**
 * @summary Copies all access control policies from a policy group of a source virtual private cloud (VPC) firewall to a policy group of a destination VPC firewall.
 *
 * @description You can call the BatchCopyVpcFirewallControlPolicy operation to copy all access control policies from a policy group of a source VPC firewall to a policy group of a destination VPC firewall.  
 * Before you call this operation, we recommend that you back up access control policies. For more information about how to back up an access control policy, see [Back up an access control policy](https://www.alibabacloud.com/help/en/cloud-firewall/latest/back-up-and-roll-back-an-access-control-policy).  
 * After you call this operation, all the access control policies in the policy group of the destination VPC firewall are replaced.  
 * The policy groups of the source VPC firewall and the destination VPC firewall must belong to the same Alibaba Cloud account.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. When the number of calls to this operation per second exceeds the limit, throttling is triggered. Throttling may affect your business. We recommend that you take note of the limit on this operation.
 *
 * @param request BatchCopyVpcFirewallControlPolicyRequest
 * @return BatchCopyVpcFirewallControlPolicyResponse
 */
BatchCopyVpcFirewallControlPolicyResponse Client::batchCopyVpcFirewallControlPolicy(const BatchCopyVpcFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCopyVpcFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple access control policies for a virtual private cloud (VPC) firewall at a time.
 *
 * @param request BatchDeleteVpcFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteVpcFirewallControlPolicyResponse
 */
BatchDeleteVpcFirewallControlPolicyResponse Client::batchDeleteVpcFirewallControlPolicyWithOptions(const BatchDeleteVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuidList()) {
    query["AclUuidList"] = request.aclUuidList();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchDeleteVpcFirewallControlPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteVpcFirewallControlPolicyResponse>();
}

/**
 * @summary Deletes multiple access control policies for a virtual private cloud (VPC) firewall at a time.
 *
 * @param request BatchDeleteVpcFirewallControlPolicyRequest
 * @return BatchDeleteVpcFirewallControlPolicyResponse
 */
BatchDeleteVpcFirewallControlPolicyResponse Client::batchDeleteVpcFirewallControlPolicy(const BatchDeleteVpcFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteVpcFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary 创建ACK集群连接器
 *
 * @param request CreateAckClusterConnectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAckClusterConnectorResponse
 */
CreateAckClusterConnectorResponse Client::createAckClusterConnectorWithOptions(const CreateAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasConnectorName()) {
    query["ConnectorName"] = request.connectorName();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasPrimaryVswitchId()) {
    query["PrimaryVswitchId"] = request.primaryVswitchId();
  }

  if (!!request.hasPrimaryVswitchIp()) {
    query["PrimaryVswitchIp"] = request.primaryVswitchIp();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasStandbyVswitchId()) {
    query["StandbyVswitchId"] = request.standbyVswitchId();
  }

  if (!!request.hasStandbyVswitchIp()) {
    query["StandbyVswitchIp"] = request.standbyVswitchIp();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.ttl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAckClusterConnector"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAckClusterConnectorResponse>();
}

/**
 * @summary 创建ACK集群连接器
 *
 * @param request CreateAckClusterConnectorRequest
 * @return CreateAckClusterConnectorResponse
 */
CreateAckClusterConnectorResponse Client::createAckClusterConnector(const CreateAckClusterConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAckClusterConnectorWithOptions(request, runtime);
}

/**
 * @summary 创建ACL检查
 *
 * @param request CreateAclCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAclCheckResponse
 */
CreateAclCheckResponse Client::createAclCheckWithOptions(const CreateAclCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclType()) {
    query["AclType"] = request.aclType();
  }

  if (!!request.hasCheckNames()) {
    query["CheckNames"] = request.checkNames();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAclCheck"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAclCheckResponse>();
}

/**
 * @summary 创建ACL检查
 *
 * @param request CreateAclCheckRequest
 * @return CreateAclCheckResponse
 */
CreateAclCheckResponse Client::createAclCheck(const CreateAclCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAclCheckWithOptions(request, runtime);
}

/**
 * @summary Creates a file download task.
 *
 * @param request CreateDownloadTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDownloadTaskResponse
 */
CreateDownloadTaskResponse Client::createDownloadTaskWithOptions(const CreateDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasTaskData()) {
    query["TaskData"] = request.taskData();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  if (!!request.hasTimeZone()) {
    query["TimeZone"] = request.timeZone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDownloadTask"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDownloadTaskResponse>();
}

/**
 * @summary Creates a file download task.
 *
 * @param request CreateDownloadTaskRequest
 * @return CreateDownloadTaskResponse
 */
CreateDownloadTaskResponse Client::createDownloadTask(const CreateDownloadTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDownloadTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an access control policy for a NAT firewall.
 *
 * @description You can call this operation to create a policy that allows, denies, or monitors the traffic that passes through the NAT firewall.
 *
 * @param request CreateNatFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNatFirewallControlPolicyResponse
 */
CreateNatFirewallControlPolicyResponse Client::createNatFirewallControlPolicyWithOptions(const CreateNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.aclAction();
  }

  if (!!request.hasApplicationNameList()) {
    query["ApplicationNameList"] = request.applicationNameList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestPort()) {
    query["DestPort"] = request.destPort();
  }

  if (!!request.hasDestPortGroup()) {
    query["DestPortGroup"] = request.destPortGroup();
  }

  if (!!request.hasDestPortType()) {
    query["DestPortType"] = request.destPortType();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.destination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.destinationType();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasDomainResolveType()) {
    query["DomainResolveType"] = request.domainResolveType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.ipVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.natGatewayId();
  }

  if (!!request.hasNewOrder()) {
    query["NewOrder"] = request.newOrder();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.proto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.release();
  }

  if (!!request.hasRepeatDays()) {
    query["RepeatDays"] = request.repeatDays();
  }

  if (!!request.hasRepeatEndTime()) {
    query["RepeatEndTime"] = request.repeatEndTime();
  }

  if (!!request.hasRepeatStartTime()) {
    query["RepeatStartTime"] = request.repeatStartTime();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.repeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNatFirewallControlPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNatFirewallControlPolicyResponse>();
}

/**
 * @summary Creates an access control policy for a NAT firewall.
 *
 * @description You can call this operation to create a policy that allows, denies, or monitors the traffic that passes through the NAT firewall.
 *
 * @param request CreateNatFirewallControlPolicyRequest
 * @return CreateNatFirewallControlPolicyResponse
 */
CreateNatFirewallControlPolicyResponse Client::createNatFirewallControlPolicy(const CreateNatFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNatFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary 创建NAT防火墙预检查
 *
 * @param request CreateNatFirewallPreCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNatFirewallPreCheckResponse
 */
CreateNatFirewallPreCheckResponse Client::createNatFirewallPreCheckWithOptions(const CreateNatFirewallPreCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  json body = {};
  if (!!request.hasNatGatewayId()) {
    body["NatGatewayId"] = request.natGatewayId();
  }

  if (!!request.hasRegionNo()) {
    body["RegionNo"] = request.regionNo();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateNatFirewallPreCheck"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNatFirewallPreCheckResponse>();
}

/**
 * @summary 创建NAT防火墙预检查
 *
 * @param request CreateNatFirewallPreCheckRequest
 * @return CreateNatFirewallPreCheckResponse
 */
CreateNatFirewallPreCheckResponse Client::createNatFirewallPreCheck(const CreateNatFirewallPreCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNatFirewallPreCheckWithOptions(request, runtime);
}

/**
 * @summary 创建私网DNS终端节点
 *
 * @param request CreatePrivateDnsEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrivateDnsEndpointResponse
 */
CreatePrivateDnsEndpointResponse Client::createPrivateDnsEndpointWithOptions(const CreatePrivateDnsEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessInstanceName()) {
    query["AccessInstanceName"] = request.accessInstanceName();
  }

  if (!!request.hasFirewallType()) {
    query["FirewallType"] = request.firewallType();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.ipProtocol();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasPrimaryDns()) {
    query["PrimaryDns"] = request.primaryDns();
  }

  if (!!request.hasPrimaryVSwitchId()) {
    query["PrimaryVSwitchId"] = request.primaryVSwitchId();
  }

  if (!!request.hasPrimaryVSwitchIp()) {
    query["PrimaryVSwitchIp"] = request.primaryVSwitchIp();
  }

  if (!!request.hasPrivateDnsType()) {
    query["PrivateDnsType"] = request.privateDnsType();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasStandbyDns()) {
    query["StandbyDns"] = request.standbyDns();
  }

  if (!!request.hasStandbyVSwitchId()) {
    query["StandbyVSwitchId"] = request.standbyVSwitchId();
  }

  if (!!request.hasStandbyVSwitchIp()) {
    query["StandbyVSwitchIp"] = request.standbyVSwitchIp();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePrivateDnsEndpoint"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrivateDnsEndpointResponse>();
}

/**
 * @summary 创建私网DNS终端节点
 *
 * @param request CreatePrivateDnsEndpointRequest
 * @return CreatePrivateDnsEndpointResponse
 */
CreatePrivateDnsEndpointResponse Client::createPrivateDnsEndpoint(const CreatePrivateDnsEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPrivateDnsEndpointWithOptions(request, runtime);
}

/**
 * @summary Creates a NAT firewall.
 *
 * @param request CreateSecurityProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecurityProxyResponse
 */
CreateSecurityProxyResponse Client::createSecurityProxyWithOptions(const CreateSecurityProxyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallSwitch()) {
    query["FirewallSwitch"] = request.firewallSwitch();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.natGatewayId();
  }

  if (!!request.hasNatRouteEntryList()) {
    query["NatRouteEntryList"] = request.natRouteEntryList();
  }

  if (!!request.hasProxyName()) {
    query["ProxyName"] = request.proxyName();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasStrictMode()) {
    query["StrictMode"] = request.strictMode();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasVswitchAuto()) {
    query["VswitchAuto"] = request.vswitchAuto();
  }

  if (!!request.hasVswitchCidr()) {
    query["VswitchCidr"] = request.vswitchCidr();
  }

  if (!!request.hasVswitchId()) {
    query["VswitchId"] = request.vswitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSecurityProxy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecurityProxyResponse>();
}

/**
 * @summary Creates a NAT firewall.
 *
 * @param request CreateSecurityProxyRequest
 * @return CreateSecurityProxyResponse
 */
CreateSecurityProxyResponse Client::createSecurityProxy(const CreateSecurityProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSecurityProxyWithOptions(request, runtime);
}

/**
 * @summary Create Cloud Firewall SLS Log Delivery
 *
 * @param request CreateSlsLogDispatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSlsLogDispatchResponse
 */
CreateSlsLogDispatchResponse Client::createSlsLogDispatchWithOptions(const CreateSlsLogDispatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSlsRegionId()) {
    body["SlsRegionId"] = request.slsRegionId();
  }

  if (!!request.hasTtl()) {
    body["Ttl"] = request.ttl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSlsLogDispatch"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSlsLogDispatchResponse>();
}

/**
 * @summary Create Cloud Firewall SLS Log Delivery
 *
 * @param request CreateSlsLogDispatchRequest
 * @return CreateSlsLogDispatchResponse
 */
CreateSlsLogDispatchResponse Client::createSlsLogDispatch(const CreateSlsLogDispatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSlsLogDispatchWithOptions(request, runtime);
}

/**
 * @summary Creates a virtual private cloud (VPC) firewall for a transit router.
 *
 * @param request CreateTrFirewallV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTrFirewallV2Response
 */
CreateTrFirewallV2Response Client::createTrFirewallV2WithOptions(const CreateTrFirewallV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasFirewallDescription()) {
    query["FirewallDescription"] = request.firewallDescription();
  }

  if (!!request.hasFirewallName()) {
    query["FirewallName"] = request.firewallName();
  }

  if (!!request.hasFirewallSubnetCidr()) {
    query["FirewallSubnetCidr"] = request.firewallSubnetCidr();
  }

  if (!!request.hasFirewallVpcCidr()) {
    query["FirewallVpcCidr"] = request.firewallVpcCidr();
  }

  if (!!request.hasFirewallVpcId()) {
    query["FirewallVpcId"] = request.firewallVpcId();
  }

  if (!!request.hasFirewallVswitchId()) {
    query["FirewallVswitchId"] = request.firewallVswitchId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasRouteMode()) {
    query["RouteMode"] = request.routeMode();
  }

  if (!!request.hasTrAttachmentMasterCidr()) {
    query["TrAttachmentMasterCidr"] = request.trAttachmentMasterCidr();
  }

  if (!!request.hasTrAttachmentMasterZone()) {
    query["TrAttachmentMasterZone"] = request.trAttachmentMasterZone();
  }

  if (!!request.hasTrAttachmentSlaveCidr()) {
    query["TrAttachmentSlaveCidr"] = request.trAttachmentSlaveCidr();
  }

  if (!!request.hasTrAttachmentSlaveZone()) {
    query["TrAttachmentSlaveZone"] = request.trAttachmentSlaveZone();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTrFirewallV2"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTrFirewallV2Response>();
}

/**
 * @summary Creates a virtual private cloud (VPC) firewall for a transit router.
 *
 * @param request CreateTrFirewallV2Request
 * @return CreateTrFirewallV2Response
 */
CreateTrFirewallV2Response Client::createTrFirewallV2(const CreateTrFirewallV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTrFirewallV2WithOptions(request, runtime);
}

/**
 * @summary Creates a routing policy for a VPC firewall of a transit router.
 *
 * @param tmpReq CreateTrFirewallV2RoutePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTrFirewallV2RoutePolicyResponse
 */
CreateTrFirewallV2RoutePolicyResponse Client::createTrFirewallV2RoutePolicyWithOptions(const CreateTrFirewallV2RoutePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTrFirewallV2RoutePolicyShrinkRequest request = CreateTrFirewallV2RoutePolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDestCandidateList()) {
    request.setDestCandidateListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.destCandidateList(), "DestCandidateList", "json"));
  }

  if (!!tmpReq.hasSrcCandidateList()) {
    request.setSrcCandidateListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.srcCandidateList(), "SrcCandidateList", "json"));
  }

  json query = {};
  if (!!request.hasDestCandidateListShrink()) {
    query["DestCandidateList"] = request.destCandidateListShrink();
  }

  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.firewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPolicyDescription()) {
    query["PolicyDescription"] = request.policyDescription();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.policyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.policyType();
  }

  if (!!request.hasSrcCandidateListShrink()) {
    query["SrcCandidateList"] = request.srcCandidateListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTrFirewallV2RoutePolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTrFirewallV2RoutePolicyResponse>();
}

/**
 * @summary Creates a routing policy for a VPC firewall of a transit router.
 *
 * @param request CreateTrFirewallV2RoutePolicyRequest
 * @return CreateTrFirewallV2RoutePolicyResponse
 */
CreateTrFirewallV2RoutePolicyResponse Client::createTrFirewallV2RoutePolicy(const CreateTrFirewallV2RoutePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTrFirewallV2RoutePolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a virtual private cloud (VPC) firewall to protect traffic between a specified VPC and a network instance that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @description You can call the CreateVpcFirewallCenConfigure operation to create a VPC firewall. The VPC firewall protects mutual access traffic between a specified VPC and a network instance that is attached to a CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance. The VPC firewall cannot protect mutual access traffic between VBRs, between CCN instances, or between VBRs and CCN instances. For more information, see [VPC firewall limits](https://help.aliyun.com/document_detail/172295.html).
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateVpcFirewallCenConfigureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcFirewallCenConfigureResponse
 */
CreateVpcFirewallCenConfigureResponse Client::createVpcFirewallCenConfigureWithOptions(const CreateVpcFirewallCenConfigureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasFirewallSwitch()) {
    query["FirewallSwitch"] = request.firewallSwitch();
  }

  if (!!request.hasFirewallVSwitchCidrBlock()) {
    query["FirewallVSwitchCidrBlock"] = request.firewallVSwitchCidrBlock();
  }

  if (!!request.hasFirewallVpcCidrBlock()) {
    query["FirewallVpcCidrBlock"] = request.firewallVpcCidrBlock();
  }

  if (!!request.hasFirewallVpcStandbyZoneId()) {
    query["FirewallVpcStandbyZoneId"] = request.firewallVpcStandbyZoneId();
  }

  if (!!request.hasFirewallVpcZoneId()) {
    query["FirewallVpcZoneId"] = request.firewallVpcZoneId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasNetworkInstanceId()) {
    query["NetworkInstanceId"] = request.networkInstanceId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcFirewallName()) {
    query["VpcFirewallName"] = request.vpcFirewallName();
  }

  if (!!request.hasVpcRegion()) {
    query["VpcRegion"] = request.vpcRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVpcFirewallCenConfigure"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVpcFirewallCenConfigureResponse>();
}

/**
 * @summary Creates a virtual private cloud (VPC) firewall to protect traffic between a specified VPC and a network instance that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @description You can call the CreateVpcFirewallCenConfigure operation to create a VPC firewall. The VPC firewall protects mutual access traffic between a specified VPC and a network instance that is attached to a CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance. The VPC firewall cannot protect mutual access traffic between VBRs, between CCN instances, or between VBRs and CCN instances. For more information, see [VPC firewall limits](https://help.aliyun.com/document_detail/172295.html).
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateVpcFirewallCenConfigureRequest
 * @return CreateVpcFirewallCenConfigureResponse
 */
CreateVpcFirewallCenConfigureResponse Client::createVpcFirewallCenConfigure(const CreateVpcFirewallCenConfigureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcFirewallCenConfigureWithOptions(request, runtime);
}

/**
 * @summary 创建VPC防火墙手动配置
 *
 * @param request CreateVpcFirewallCenManualConfigureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcFirewallCenManualConfigureResponse
 */
CreateVpcFirewallCenManualConfigureResponse Client::createVpcFirewallCenManualConfigureWithOptions(const CreateVpcFirewallCenManualConfigureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcFirewallName()) {
    query["VpcFirewallName"] = request.vpcFirewallName();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVpcFirewallCenManualConfigure"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVpcFirewallCenManualConfigureResponse>();
}

/**
 * @summary 创建VPC防火墙手动配置
 *
 * @param request CreateVpcFirewallCenManualConfigureRequest
 * @return CreateVpcFirewallCenManualConfigureResponse
 */
CreateVpcFirewallCenManualConfigureResponse Client::createVpcFirewallCenManualConfigure(const CreateVpcFirewallCenManualConfigureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcFirewallCenManualConfigureWithOptions(request, runtime);
}

/**
 * @summary Creates a Virtual Private Cloud (VPC) firewall to protect traffic between two VPCs that are connected by using an Express Connect.
 *
 * @description You can call this operation to create a VPC firewall. The VPC firewall controls traffic between two VPCs that are connected by using an Express Connect circuit. The VPC firewall does not control the mutual access traffic between VPCs that reside in different regions or belong to different Alibaba Cloud accounts. The firewall also does not control the mutual access traffic between VPCs and virtual border routers (VBRs). For more information, see [VPC firewall limits](https://help.aliyun.com/document_detail/172295.html).
 * ### [](#qps)QPS limit
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateVpcFirewallConfigureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcFirewallConfigureResponse
 */
CreateVpcFirewallConfigureResponse Client::createVpcFirewallConfigureWithOptions(const CreateVpcFirewallConfigureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallSwitch()) {
    query["FirewallSwitch"] = request.firewallSwitch();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLocalVpcCidrTableList()) {
    query["LocalVpcCidrTableList"] = request.localVpcCidrTableList();
  }

  if (!!request.hasLocalVpcId()) {
    query["LocalVpcId"] = request.localVpcId();
  }

  if (!!request.hasLocalVpcRegion()) {
    query["LocalVpcRegion"] = request.localVpcRegion();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasPeerVpcCidrTableList()) {
    query["PeerVpcCidrTableList"] = request.peerVpcCidrTableList();
  }

  if (!!request.hasPeerVpcId()) {
    query["PeerVpcId"] = request.peerVpcId();
  }

  if (!!request.hasPeerVpcRegion()) {
    query["PeerVpcRegion"] = request.peerVpcRegion();
  }

  if (!!request.hasVpcFirewallName()) {
    query["VpcFirewallName"] = request.vpcFirewallName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVpcFirewallConfigure"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVpcFirewallConfigureResponse>();
}

/**
 * @summary Creates a Virtual Private Cloud (VPC) firewall to protect traffic between two VPCs that are connected by using an Express Connect.
 *
 * @description You can call this operation to create a VPC firewall. The VPC firewall controls traffic between two VPCs that are connected by using an Express Connect circuit. The VPC firewall does not control the mutual access traffic between VPCs that reside in different regions or belong to different Alibaba Cloud accounts. The firewall also does not control the mutual access traffic between VPCs and virtual border routers (VBRs). For more information, see [VPC firewall limits](https://help.aliyun.com/document_detail/172295.html).
 * ### [](#qps)QPS limit
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateVpcFirewallConfigureRequest
 * @return CreateVpcFirewallConfigureResponse
 */
CreateVpcFirewallConfigureResponse Client::createVpcFirewallConfigure(const CreateVpcFirewallConfigureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcFirewallConfigureWithOptions(request, runtime);
}

/**
 * @summary Creates an access control policy in a specified policy group for a virtual private cloud (VPC) firewall.
 *
 * @description You can call the CreateVpcFirewallControlPolicy operation to create an access control policy in a specified policy group for a VPC firewall. Different access control policies are used when a VPC firewall is used to protect traffic between two VPCs that are connected by using a Cloud Enterprise Network (CEN) instance or an Express Connect circuit.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateVpcFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcFirewallControlPolicyResponse
 */
CreateVpcFirewallControlPolicyResponse Client::createVpcFirewallControlPolicyWithOptions(const CreateVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.aclAction();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasApplicationNameList()) {
    query["ApplicationNameList"] = request.applicationNameList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestPort()) {
    query["DestPort"] = request.destPort();
  }

  if (!!request.hasDestPortGroup()) {
    query["DestPortGroup"] = request.destPortGroup();
  }

  if (!!request.hasDestPortType()) {
    query["DestPortType"] = request.destPortType();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.destination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.destinationType();
  }

  if (!!request.hasDomainResolveType()) {
    query["DomainResolveType"] = request.domainResolveType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasNewOrder()) {
    query["NewOrder"] = request.newOrder();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.proto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.release();
  }

  if (!!request.hasRepeatDays()) {
    query["RepeatDays"] = request.repeatDays();
  }

  if (!!request.hasRepeatEndTime()) {
    query["RepeatEndTime"] = request.repeatEndTime();
  }

  if (!!request.hasRepeatStartTime()) {
    query["RepeatStartTime"] = request.repeatStartTime();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.repeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVpcFirewallControlPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVpcFirewallControlPolicyResponse>();
}

/**
 * @summary Creates an access control policy in a specified policy group for a virtual private cloud (VPC) firewall.
 *
 * @description You can call the CreateVpcFirewallControlPolicy operation to create an access control policy in a specified policy group for a VPC firewall. Different access control policies are used when a VPC firewall is used to protect traffic between two VPCs that are connected by using a Cloud Enterprise Network (CEN) instance or an Express Connect circuit.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateVpcFirewallControlPolicyRequest
 * @return CreateVpcFirewallControlPolicyResponse
 */
CreateVpcFirewallControlPolicyResponse Client::createVpcFirewallControlPolicy(const CreateVpcFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary 创建VPC防火墙开墙前置任务
 *
 * @param request CreateVpcFirewallPrecheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcFirewallPrecheckResponse
 */
CreateVpcFirewallPrecheckResponse Client::createVpcFirewallPrecheckWithOptions(const CreateVpcFirewallPrecheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasNetworkInstanceType()) {
    query["NetworkInstanceType"] = request.networkInstanceType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVpcFirewallPrecheck"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVpcFirewallPrecheckResponse>();
}

/**
 * @summary 创建VPC防火墙开墙前置任务
 *
 * @param request CreateVpcFirewallPrecheckRequest
 * @return CreateVpcFirewallPrecheckResponse
 */
CreateVpcFirewallPrecheckResponse Client::createVpcFirewallPrecheck(const CreateVpcFirewallPrecheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcFirewallPrecheckWithOptions(request, runtime);
}

/**
 * @summary 创建VPC防火墙资产同步任务
 *
 * @param request CreateVpcFirewallTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcFirewallTaskResponse
 */
CreateVpcFirewallTaskResponse Client::createVpcFirewallTaskWithOptions(const CreateVpcFirewallTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasTaskAction()) {
    query["TaskAction"] = request.taskAction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVpcFirewallTask"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVpcFirewallTaskResponse>();
}

/**
 * @summary 创建VPC防火墙资产同步任务
 *
 * @param request CreateVpcFirewallTaskRequest
 * @return CreateVpcFirewallTaskResponse
 */
CreateVpcFirewallTaskResponse Client::createVpcFirewallTask(const CreateVpcFirewallTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcFirewallTaskWithOptions(request, runtime);
}

/**
 * @summary 删除ACK集群连接器
 *
 * @param request DeleteAckClusterConnectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAckClusterConnectorResponse
 */
DeleteAckClusterConnectorResponse Client::deleteAckClusterConnectorWithOptions(const DeleteAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.connectorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAckClusterConnector"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAckClusterConnectorResponse>();
}

/**
 * @summary 删除ACK集群连接器
 *
 * @param request DeleteAckClusterConnectorRequest
 * @return DeleteAckClusterConnectorResponse
 */
DeleteAckClusterConnectorResponse Client::deleteAckClusterConnector(const DeleteAckClusterConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAckClusterConnectorWithOptions(request, runtime);
}

/**
 * @summary 删除ACL备份
 *
 * @param request DeleteAclBackupDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAclBackupDataResponse
 */
DeleteAclBackupDataResponse Client::deleteAclBackupDataWithOptions(const DeleteAclBackupDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackUpTime()) {
    query["BackUpTime"] = request.backUpTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAclBackupData"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAclBackupDataResponse>();
}

/**
 * @summary 删除ACL备份
 *
 * @param request DeleteAclBackupDataRequest
 * @return DeleteAclBackupDataResponse
 */
DeleteAclBackupDataResponse Client::deleteAclBackupData(const DeleteAclBackupDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAclBackupDataWithOptions(request, runtime);
}

/**
 * @summary Deletes an address book for access control.
 *
 * @description You can call the DeleteAddressBook operation to delete an address book for access control.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteAddressBookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAddressBookResponse
 */
DeleteAddressBookResponse Client::deleteAddressBookWithOptions(const DeleteAddressBookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupUuid()) {
    query["GroupUuid"] = request.groupUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAddressBook"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAddressBookResponse>();
}

/**
 * @summary Deletes an address book for access control.
 *
 * @description You can call the DeleteAddressBook operation to delete an address book for access control.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteAddressBookRequest
 * @return DeleteAddressBookResponse
 */
DeleteAddressBookResponse Client::deleteAddressBook(const DeleteAddressBookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAddressBookWithOptions(request, runtime);
}

/**
 * @summary Deletes an access control policy.
 *
 * @description You can call the DeleteControlPolicy operation to delete an access control policy that applies to inbound or outbound traffic.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteControlPolicyResponse
 */
DeleteControlPolicyResponse Client::deleteControlPolicyWithOptions(const DeleteControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteControlPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteControlPolicyResponse>();
}

/**
 * @summary Deletes an access control policy.
 *
 * @description You can call the DeleteControlPolicy operation to delete an access control policy that applies to inbound or outbound traffic.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteControlPolicyRequest
 * @return DeleteControlPolicyResponse
 */
DeleteControlPolicyResponse Client::deleteControlPolicy(const DeleteControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes an access control policy template.
 *
 * @param request DeleteControlPolicyTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteControlPolicyTemplateResponse
 */
DeleteControlPolicyTemplateResponse Client::deleteControlPolicyTemplateWithOptions(const DeleteControlPolicyTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteControlPolicyTemplate"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteControlPolicyTemplateResponse>();
}

/**
 * @summary Deletes an access control policy template.
 *
 * @param request DeleteControlPolicyTemplateRequest
 * @return DeleteControlPolicyTemplateResponse
 */
DeleteControlPolicyTemplateResponse Client::deleteControlPolicyTemplate(const DeleteControlPolicyTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteControlPolicyTemplateWithOptions(request, runtime);
}

/**
 * @summary 删除DNS防火墙规则
 *
 * @param request DeleteDnsFirewallPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDnsFirewallPolicyResponse
 */
DeleteDnsFirewallPolicyResponse Client::deleteDnsFirewallPolicyWithOptions(const DeleteDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDnsFirewallPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDnsFirewallPolicyResponse>();
}

/**
 * @summary 删除DNS防火墙规则
 *
 * @param request DeleteDnsFirewallPolicyRequest
 * @return DeleteDnsFirewallPolicyResponse
 */
DeleteDnsFirewallPolicyResponse Client::deleteDnsFirewallPolicy(const DeleteDnsFirewallPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDnsFirewallPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes file download tasks.
 *
 * @description You can call this operation to delete file download tasks and delete the files.
 * **
 * **Warning** Both tasks and involved files are deleted. You can no longer download the involved files by using the download links. This operation is irreversible. Proceed with caution.
 *
 * @param request DeleteDownloadTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDownloadTaskResponse
 */
DeleteDownloadTaskResponse Client::deleteDownloadTaskWithOptions(const DeleteDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDownloadTask"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDownloadTaskResponse>();
}

/**
 * @summary Deletes file download tasks.
 *
 * @description You can call this operation to delete file download tasks and delete the files.
 * **
 * **Warning** Both tasks and involved files are deleted. You can no longer download the involved files by using the download links. This operation is irreversible. Proceed with caution.
 *
 * @param request DeleteDownloadTaskRequest
 * @return DeleteDownloadTaskResponse
 */
DeleteDownloadTaskResponse Client::deleteDownloadTask(const DeleteDownloadTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDownloadTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes routing policies for a virtual private cloud (VPC) firewall of a transit router.
 *
 * @param request DeleteFirewallV2RoutePoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFirewallV2RoutePoliciesResponse
 */
DeleteFirewallV2RoutePoliciesResponse Client::deleteFirewallV2RoutePoliciesWithOptions(const DeleteFirewallV2RoutePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.firewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasTrFirewallRoutePolicyId()) {
    query["TrFirewallRoutePolicyId"] = request.trFirewallRoutePolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFirewallV2RoutePolicies"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFirewallV2RoutePoliciesResponse>();
}

/**
 * @summary Deletes routing policies for a virtual private cloud (VPC) firewall of a transit router.
 *
 * @param request DeleteFirewallV2RoutePoliciesRequest
 * @return DeleteFirewallV2RoutePoliciesResponse
 */
DeleteFirewallV2RoutePoliciesResponse Client::deleteFirewallV2RoutePolicies(const DeleteFirewallV2RoutePoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFirewallV2RoutePoliciesWithOptions(request, runtime);
}

/**
 * @summary Removes members from Cloud Firewall.
 *
 * @description You can call this operation to remove up to 20 members from Cloud Firewall at a time. Separate multiple members with commas (,). After a member is removed, Cloud Firewall can no longer access the cloud resources of the member. Proceed with caution. Before you call this operation, call the [DescribeInstanceMembers](https://help.aliyun.com/document_detail/271704.html) operation to obtain the information about the members that are added to Cloud Firewall.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteInstanceMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceMembersResponse
 */
DeleteInstanceMembersResponse Client::deleteInstanceMembersWithOptions(const DeleteInstanceMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberUids()) {
    query["MemberUids"] = request.memberUids();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstanceMembers"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceMembersResponse>();
}

/**
 * @summary Removes members from Cloud Firewall.
 *
 * @description You can call this operation to remove up to 20 members from Cloud Firewall at a time. Separate multiple members with commas (,). After a member is removed, Cloud Firewall can no longer access the cloud resources of the member. Proceed with caution. Before you call this operation, call the [DescribeInstanceMembers](https://help.aliyun.com/document_detail/271704.html) operation to obtain the information about the members that are added to Cloud Firewall.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteInstanceMembersRequest
 * @return DeleteInstanceMembersResponse
 */
DeleteInstanceMembersResponse Client::deleteInstanceMembers(const DeleteInstanceMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceMembersWithOptions(request, runtime);
}

/**
 * @summary 创建IPS私网关联信息
 *
 * @param request DeleteIpsPrivateAssocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpsPrivateAssocResponse
 */
DeleteIpsPrivateAssocResponse Client::deleteIpsPrivateAssocWithOptions(const DeleteIpsPrivateAssocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIpsPrivateAssoc"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIpsPrivateAssocResponse>();
}

/**
 * @summary 创建IPS私网关联信息
 *
 * @param request DeleteIpsPrivateAssocRequest
 * @return DeleteIpsPrivateAssocResponse
 */
DeleteIpsPrivateAssocResponse Client::deleteIpsPrivateAssoc(const DeleteIpsPrivateAssocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpsPrivateAssocWithOptions(request, runtime);
}

/**
 * @summary Deletes an access control policy that is created for a NAT firewall.
 *
 * @description You can use this operation to delete an outbound access control policy that is created for a NAT firewall.
 *
 * @param request DeleteNatFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNatFirewallControlPolicyResponse
 */
DeleteNatFirewallControlPolicyResponse Client::deleteNatFirewallControlPolicyWithOptions(const DeleteNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.natGatewayId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNatFirewallControlPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNatFirewallControlPolicyResponse>();
}

/**
 * @summary Deletes an access control policy that is created for a NAT firewall.
 *
 * @description You can use this operation to delete an outbound access control policy that is created for a NAT firewall.
 *
 * @param request DeleteNatFirewallControlPolicyRequest
 * @return DeleteNatFirewallControlPolicyResponse
 */
DeleteNatFirewallControlPolicyResponse Client::deleteNatFirewallControlPolicy(const DeleteNatFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNatFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes access control policies that are created for a NAT firewall at a time.
 *
 * @param request DeleteNatFirewallControlPolicyBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNatFirewallControlPolicyBatchResponse
 */
DeleteNatFirewallControlPolicyBatchResponse Client::deleteNatFirewallControlPolicyBatchWithOptions(const DeleteNatFirewallControlPolicyBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuidList()) {
    query["AclUuidList"] = request.aclUuidList();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.natGatewayId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNatFirewallControlPolicyBatch"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNatFirewallControlPolicyBatchResponse>();
}

/**
 * @summary Deletes access control policies that are created for a NAT firewall at a time.
 *
 * @param request DeleteNatFirewallControlPolicyBatchRequest
 * @return DeleteNatFirewallControlPolicyBatchResponse
 */
DeleteNatFirewallControlPolicyBatchResponse Client::deleteNatFirewallControlPolicyBatch(const DeleteNatFirewallControlPolicyBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNatFirewallControlPolicyBatchWithOptions(request, runtime);
}

/**
 * @summary 清空私网DNS域名
 *
 * @param request DeletePrivateDnsAllDomainNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivateDnsAllDomainNameResponse
 */
DeletePrivateDnsAllDomainNameResponse Client::deletePrivateDnsAllDomainNameWithOptions(const DeletePrivateDnsAllDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessInstanceId()) {
    query["AccessInstanceId"] = request.accessInstanceId();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrivateDnsAllDomainName"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrivateDnsAllDomainNameResponse>();
}

/**
 * @summary 清空私网DNS域名
 *
 * @param request DeletePrivateDnsAllDomainNameRequest
 * @return DeletePrivateDnsAllDomainNameResponse
 */
DeletePrivateDnsAllDomainNameResponse Client::deletePrivateDnsAllDomainName(const DeletePrivateDnsAllDomainNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrivateDnsAllDomainNameWithOptions(request, runtime);
}

/**
 * @summary 删除私网DNS域名
 *
 * @param request DeletePrivateDnsDomainNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivateDnsDomainNameResponse
 */
DeletePrivateDnsDomainNameResponse Client::deletePrivateDnsDomainNameWithOptions(const DeletePrivateDnsDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessInstanceId()) {
    query["AccessInstanceId"] = request.accessInstanceId();
  }

  if (!!request.hasDomainNameList()) {
    query["DomainNameList"] = request.domainNameList();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrivateDnsDomainName"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrivateDnsDomainNameResponse>();
}

/**
 * @summary 删除私网DNS域名
 *
 * @param request DeletePrivateDnsDomainNameRequest
 * @return DeletePrivateDnsDomainNameResponse
 */
DeletePrivateDnsDomainNameResponse Client::deletePrivateDnsDomainName(const DeletePrivateDnsDomainNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrivateDnsDomainNameWithOptions(request, runtime);
}

/**
 * @summary 删除私网DNS终端节点
 *
 * @param request DeletePrivateDnsEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivateDnsEndpointResponse
 */
DeletePrivateDnsEndpointResponse Client::deletePrivateDnsEndpointWithOptions(const DeletePrivateDnsEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessInstanceId()) {
    query["AccessInstanceId"] = request.accessInstanceId();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrivateDnsEndpoint"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrivateDnsEndpointResponse>();
}

/**
 * @summary 删除私网DNS终端节点
 *
 * @param request DeletePrivateDnsEndpointRequest
 * @return DeletePrivateDnsEndpointResponse
 */
DeletePrivateDnsEndpointResponse Client::deletePrivateDnsEndpoint(const DeletePrivateDnsEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrivateDnsEndpointWithOptions(request, runtime);
}

/**
 * @summary Deletes a NAT firewall.
 *
 * @param request DeleteSecurityProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecurityProxyResponse
 */
DeleteSecurityProxyResponse Client::deleteSecurityProxyWithOptions(const DeleteSecurityProxyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasProxyId()) {
    query["ProxyId"] = request.proxyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSecurityProxy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecurityProxyResponse>();
}

/**
 * @summary Deletes a NAT firewall.
 *
 * @param request DeleteSecurityProxyRequest
 * @return DeleteSecurityProxyResponse
 */
DeleteSecurityProxyResponse Client::deleteSecurityProxy(const DeleteSecurityProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecurityProxyWithOptions(request, runtime);
}

/**
 * @summary Deletes a virtual private cloud (VPC) firewall that is created for a transit router.
 *
 * @param request DeleteTrFirewallV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTrFirewallV2Response
 */
DeleteTrFirewallV2Response Client::deleteTrFirewallV2WithOptions(const DeleteTrFirewallV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.firewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTrFirewallV2"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTrFirewallV2Response>();
}

/**
 * @summary Deletes a virtual private cloud (VPC) firewall that is created for a transit router.
 *
 * @param request DeleteTrFirewallV2Request
 * @return DeleteTrFirewallV2Response
 */
DeleteTrFirewallV2Response Client::deleteTrFirewallV2(const DeleteTrFirewallV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTrFirewallV2WithOptions(request, runtime);
}

/**
 * @summary Deletes a virtual private cloud (VPC) firewall. The VPC firewall protects mutual access traffic between a VPC and a specified network instance that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @description You can call the DeleteVpcFirewallCenConfigure operation to delete a VPC firewall. The VPC firewall protects mutual access traffic between a VPC and a specified network instance that is attached to a CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance. Before you call this operation, make sure that you have created a VPC firewall by calling the [CreateVpcFirewallCenConfigure](https://help.aliyun.com/document_detail/345772.html) operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteVpcFirewallCenConfigureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVpcFirewallCenConfigureResponse
 */
DeleteVpcFirewallCenConfigureResponse Client::deleteVpcFirewallCenConfigureWithOptions(const DeleteVpcFirewallCenConfigureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasVpcFirewallIdList()) {
    query["VpcFirewallIdList"] = request.vpcFirewallIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVpcFirewallCenConfigure"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVpcFirewallCenConfigureResponse>();
}

/**
 * @summary Deletes a virtual private cloud (VPC) firewall. The VPC firewall protects mutual access traffic between a VPC and a specified network instance that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @description You can call the DeleteVpcFirewallCenConfigure operation to delete a VPC firewall. The VPC firewall protects mutual access traffic between a VPC and a specified network instance that is attached to a CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance. Before you call this operation, make sure that you have created a VPC firewall by calling the [CreateVpcFirewallCenConfigure](https://help.aliyun.com/document_detail/345772.html) operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteVpcFirewallCenConfigureRequest
 * @return DeleteVpcFirewallCenConfigureResponse
 */
DeleteVpcFirewallCenConfigureResponse Client::deleteVpcFirewallCenConfigure(const DeleteVpcFirewallCenConfigureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVpcFirewallCenConfigureWithOptions(request, runtime);
}

/**
 * @summary Deletes a virtual private cloud (VPC) firewall that controls traffic between two VPCs. The VPCs are connected by using an Express Connect circuit.
 *
 * @description You can call the DeleteVpcFirewallConfigure operation to delete a VPC firewall. The VPC firewall controls traffic between two VPCs that are connected by using an Express Connect circuit. Before you call the operation, make sure that you created a VPC firewall by calling the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteVpcFirewallConfigureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVpcFirewallConfigureResponse
 */
DeleteVpcFirewallConfigureResponse Client::deleteVpcFirewallConfigureWithOptions(const DeleteVpcFirewallConfigureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasVpcFirewallIdList()) {
    query["VpcFirewallIdList"] = request.vpcFirewallIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVpcFirewallConfigure"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVpcFirewallConfigureResponse>();
}

/**
 * @summary Deletes a virtual private cloud (VPC) firewall that controls traffic between two VPCs. The VPCs are connected by using an Express Connect circuit.
 *
 * @description You can call the DeleteVpcFirewallConfigure operation to delete a VPC firewall. The VPC firewall controls traffic between two VPCs that are connected by using an Express Connect circuit. Before you call the operation, make sure that you created a VPC firewall by calling the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteVpcFirewallConfigureRequest
 * @return DeleteVpcFirewallConfigureResponse
 */
DeleteVpcFirewallConfigureResponse Client::deleteVpcFirewallConfigure(const DeleteVpcFirewallConfigureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVpcFirewallConfigureWithOptions(request, runtime);
}

/**
 * @summary Deletes an access control policy from a specific policy group for a virtual private cloud (VPC) firewall.
 *
 * @description You can call the DeleteVpcFirewallControlPolicy operation to delete an access control policy from a specific policy group for a VPC firewall. Different access control policies are used for the VPC firewall that is used to protect each Cloud Enterprise Network (CEN) instance and the VPC firewall that is used to protect each Express Connect circuit. 
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteVpcFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVpcFirewallControlPolicyResponse
 */
DeleteVpcFirewallControlPolicyResponse Client::deleteVpcFirewallControlPolicyWithOptions(const DeleteVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVpcFirewallControlPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVpcFirewallControlPolicyResponse>();
}

/**
 * @summary Deletes an access control policy from a specific policy group for a virtual private cloud (VPC) firewall.
 *
 * @description You can call the DeleteVpcFirewallControlPolicy operation to delete an access control policy from a specific policy group for a VPC firewall. Different access control policies are used for the VPC firewall that is used to protect each Cloud Enterprise Network (CEN) instance and the VPC firewall that is used to protect each Express Connect circuit. 
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteVpcFirewallControlPolicyRequest
 * @return DeleteVpcFirewallControlPolicyResponse
 */
DeleteVpcFirewallControlPolicyResponse Client::deleteVpcFirewallControlPolicy(const DeleteVpcFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVpcFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on the requests that are blocked by the access control list (ACL) feature.
 *
 * @param request DescribeACLProtectTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeACLProtectTrendResponse
 */
DescribeACLProtectTrendResponse Client::describeACLProtectTrendWithOptions(const DescribeACLProtectTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeACLProtectTrend"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeACLProtectTrendResponse>();
}

/**
 * @summary Queries the statistics on the requests that are blocked by the access control list (ACL) feature.
 *
 * @param request DescribeACLProtectTrendRequest
 * @return DescribeACLProtectTrendResponse
 */
DescribeACLProtectTrendResponse Client::describeACLProtectTrend(const DescribeACLProtectTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeACLProtectTrendWithOptions(request, runtime);
}

/**
 * @summary 查询AI流量分析开启状态
 *
 * @param request DescribeAITrafficAnalysisStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAITrafficAnalysisStatusResponse
 */
DescribeAITrafficAnalysisStatusResponse Client::describeAITrafficAnalysisStatusWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeAITrafficAnalysisStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAITrafficAnalysisStatusResponse>();
}

/**
 * @summary 查询AI流量分析开启状态
 *
 * @return DescribeAITrafficAnalysisStatusResponse
 */
DescribeAITrafficAnalysisStatusResponse Client::describeAITrafficAnalysisStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAITrafficAnalysisStatusWithOptions(runtime);
}

/**
 * @summary 查询接入实例地域列表
 *
 * @param request DescribeAccessInstanceRegionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessInstanceRegionListResponse
 */
DescribeAccessInstanceRegionListResponse Client::describeAccessInstanceRegionListWithOptions(const DescribeAccessInstanceRegionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessInstanceRegionList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccessInstanceRegionListResponse>();
}

/**
 * @summary 查询接入实例地域列表
 *
 * @param request DescribeAccessInstanceRegionListRequest
 * @return DescribeAccessInstanceRegionListResponse
 */
DescribeAccessInstanceRegionListResponse Client::describeAccessInstanceRegionList(const DescribeAccessInstanceRegionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessInstanceRegionListWithOptions(request, runtime);
}

/**
 * @summary 查询接入实例任务
 *
 * @param request DescribeAccessInstanceTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessInstanceTaskResponse
 */
DescribeAccessInstanceTaskResponse Client::describeAccessInstanceTaskWithOptions(const DescribeAccessInstanceTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessInstanceTask"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccessInstanceTaskResponse>();
}

/**
 * @summary 查询接入实例任务
 *
 * @param request DescribeAccessInstanceTaskRequest
 * @return DescribeAccessInstanceTaskResponse
 */
DescribeAccessInstanceTaskResponse Client::describeAccessInstanceTask(const DescribeAccessInstanceTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessInstanceTaskWithOptions(request, runtime);
}

/**
 * @summary 查询接入实例的交换机列表
 *
 * @param request DescribeAccessInstanceVSwitchListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessInstanceVSwitchListResponse
 */
DescribeAccessInstanceVSwitchListResponse Client::describeAccessInstanceVSwitchListWithOptions(const DescribeAccessInstanceVSwitchListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessInstanceVSwitchList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccessInstanceVSwitchListResponse>();
}

/**
 * @summary 查询接入实例的交换机列表
 *
 * @param request DescribeAccessInstanceVSwitchListRequest
 * @return DescribeAccessInstanceVSwitchListResponse
 */
DescribeAccessInstanceVSwitchListResponse Client::describeAccessInstanceVSwitchList(const DescribeAccessInstanceVSwitchListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessInstanceVSwitchListWithOptions(request, runtime);
}

/**
 * @summary 查询接入实例VPC列表
 *
 * @param request DescribeAccessInstanceVpcListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessInstanceVpcListResponse
 */
DescribeAccessInstanceVpcListResponse Client::describeAccessInstanceVpcListWithOptions(const DescribeAccessInstanceVpcListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessInstanceVpcList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccessInstanceVpcListResponse>();
}

/**
 * @summary 查询接入实例VPC列表
 *
 * @param request DescribeAccessInstanceVpcListRequest
 * @return DescribeAccessInstanceVpcListResponse
 */
DescribeAccessInstanceVpcListResponse Client::describeAccessInstanceVpcList(const DescribeAccessInstanceVpcListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessInstanceVpcListWithOptions(request, runtime);
}

/**
 * @summary 查询接入实例支持的可用区列表
 *
 * @param request DescribeAccessInstanceZoneListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessInstanceZoneListResponse
 */
DescribeAccessInstanceZoneListResponse Client::describeAccessInstanceZoneListWithOptions(const DescribeAccessInstanceZoneListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessInstanceZoneList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccessInstanceZoneListResponse>();
}

/**
 * @summary 查询接入实例支持的可用区列表
 *
 * @param request DescribeAccessInstanceZoneListRequest
 * @return DescribeAccessInstanceZoneListResponse
 */
DescribeAccessInstanceZoneListResponse Client::describeAccessInstanceZoneList(const DescribeAccessInstanceZoneListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessInstanceZoneListWithOptions(request, runtime);
}

/**
 * @summary 查询指定ACK集群连接器
 *
 * @param request DescribeAckClusterConnectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAckClusterConnectorResponse
 */
DescribeAckClusterConnectorResponse Client::describeAckClusterConnectorWithOptions(const DescribeAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.connectorId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAckClusterConnector"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAckClusterConnectorResponse>();
}

/**
 * @summary 查询指定ACK集群连接器
 *
 * @param request DescribeAckClusterConnectorRequest
 * @return DescribeAckClusterConnectorResponse
 */
DescribeAckClusterConnectorResponse Client::describeAckClusterConnector(const DescribeAckClusterConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAckClusterConnectorWithOptions(request, runtime);
}

/**
 * @summary 批量查询ACK集群连接器列表
 *
 * @param request DescribeAckClusterConnectorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAckClusterConnectorsResponse
 */
DescribeAckClusterConnectorsResponse Client::describeAckClusterConnectorsWithOptions(const DescribeAckClusterConnectorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasConnectorName()) {
    query["ConnectorName"] = request.connectorName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAckClusterConnectors"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAckClusterConnectorsResponse>();
}

/**
 * @summary 批量查询ACK集群连接器列表
 *
 * @param request DescribeAckClusterConnectorsRequest
 * @return DescribeAckClusterConnectorsResponse
 */
DescribeAckClusterConnectorsResponse Client::describeAckClusterConnectors(const DescribeAckClusterConnectorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAckClusterConnectorsWithOptions(request, runtime);
}

/**
 * @summary 查询阿里云K8S容器服务（ACK）集群命名空间
 *
 * @param request DescribeAckClusterNamespacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAckClusterNamespacesResponse
 */
DescribeAckClusterNamespacesResponse Client::describeAckClusterNamespacesWithOptions(const DescribeAckClusterNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.connectorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAckClusterNamespaces"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAckClusterNamespacesResponse>();
}

/**
 * @summary 查询阿里云K8S容器服务（ACK）集群命名空间
 *
 * @param request DescribeAckClusterNamespacesRequest
 * @return DescribeAckClusterNamespacesResponse
 */
DescribeAckClusterNamespacesResponse Client::describeAckClusterNamespaces(const DescribeAckClusterNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAckClusterNamespacesWithOptions(request, runtime);
}

/**
 * @summary 查询阿里云K8S容器服务（ACK）集群标签
 *
 * @param request DescribeAckClusterPodLabelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAckClusterPodLabelsResponse
 */
DescribeAckClusterPodLabelsResponse Client::describeAckClusterPodLabelsWithOptions(const DescribeAckClusterPodLabelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.connectorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAckClusterPodLabels"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAckClusterPodLabelsResponse>();
}

/**
 * @summary 查询阿里云K8S容器服务（ACK）集群标签
 *
 * @param request DescribeAckClusterPodLabelsRequest
 * @return DescribeAckClusterPodLabelsResponse
 */
DescribeAckClusterPodLabelsResponse Client::describeAckClusterPodLabels(const DescribeAckClusterPodLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAckClusterPodLabelsWithOptions(request, runtime);
}

/**
 * @summary 查询阿里云K8S容器服务（ACK）集群，查询符合条件的ACK集群（例如指定集群类型、集群规格）列表信息
 *
 * @param request DescribeAckClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAckClustersResponse
 */
DescribeAckClustersResponse Client::describeAckClustersWithOptions(const DescribeAckClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasClusterSpec()) {
    query["ClusterSpec"] = request.clusterSpec();
  }

  if (!!request.hasConnectorStatus()) {
    query["ConnectorStatus"] = request.connectorStatus();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAckClusters"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAckClustersResponse>();
}

/**
 * @summary 查询阿里云K8S容器服务（ACK）集群，查询符合条件的ACK集群（例如指定集群类型、集群规格）列表信息
 *
 * @param request DescribeAckClustersRequest
 * @return DescribeAckClustersResponse
 */
DescribeAckClustersResponse Client::describeAckClusters(const DescribeAckClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAckClustersWithOptions(request, runtime);
}

/**
 * @summary 批量查询访问控制应用
 *
 * @param request DescribeAclAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAclAppsResponse
 */
DescribeAclAppsResponse Client::describeAclAppsWithOptions(const DescribeAclAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAclApps"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAclAppsResponse>();
}

/**
 * @summary 批量查询访问控制应用
 *
 * @param request DescribeAclAppsRequest
 * @return DescribeAclAppsResponse
 */
DescribeAclAppsResponse Client::describeAclApps(const DescribeAclAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclAppsWithOptions(request, runtime);
}

/**
 * @summary 查询ACL检查详情
 *
 * @param request DescribeAclCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAclCheckResponse
 */
DescribeAclCheckResponse Client::describeAclCheckWithOptions(const DescribeAclCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAclCheck"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAclCheckResponse>();
}

/**
 * @summary 查询ACL检查详情
 *
 * @param request DescribeAclCheckRequest
 * @return DescribeAclCheckResponse
 */
DescribeAclCheckResponse Client::describeAclCheck(const DescribeAclCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclCheckWithOptions(request, runtime);
}

/**
 * @summary 查询NAT防火墙预检查结果
 *
 * @param request DescribeAclCheckQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAclCheckQuotaResponse
 */
DescribeAclCheckQuotaResponse Client::describeAclCheckQuotaWithOptions(const DescribeAclCheckQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAclCheckQuota"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAclCheckQuotaResponse>();
}

/**
 * @summary 查询NAT防火墙预检查结果
 *
 * @param request DescribeAclCheckQuotaRequest
 * @return DescribeAclCheckQuotaResponse
 */
DescribeAclCheckQuotaResponse Client::describeAclCheckQuota(const DescribeAclCheckQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclCheckQuotaWithOptions(request, runtime);
}

/**
 * @summary 批量查询ACL检查条目
 *
 * @param request DescribeAclChecksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAclChecksResponse
 */
DescribeAclChecksResponse Client::describeAclChecksWithOptions(const DescribeAclChecksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAclChecks"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAclChecksResponse>();
}

/**
 * @summary 批量查询ACL检查条目
 *
 * @param request DescribeAclChecksRequest
 * @return DescribeAclChecksResponse
 */
DescribeAclChecksResponse Client::describeAclChecks(const DescribeAclChecksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclChecksWithOptions(request, runtime);
}

/**
 * @summary 获取总ACL配置数
 *
 * @param request DescribeAclRuleCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAclRuleCountResponse
 */
DescribeAclRuleCountResponse Client::describeAclRuleCountWithOptions(const DescribeAclRuleCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAclRuleCount"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAclRuleCountResponse>();
}

/**
 * @summary 获取总ACL配置数
 *
 * @param request DescribeAclRuleCountRequest
 * @return DescribeAclRuleCountResponse
 */
DescribeAclRuleCountResponse Client::describeAclRuleCount(const DescribeAclRuleCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclRuleCountWithOptions(request, runtime);
}

/**
 * @summary 获取ACL白名单
 *
 * @param request DescribeAclWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAclWhitelistResponse
 */
DescribeAclWhitelistResponse Client::describeAclWhitelistWithOptions(const DescribeAclWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAclWhitelist"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAclWhitelistResponse>();
}

/**
 * @summary 获取ACL白名单
 *
 * @param request DescribeAclWhitelistRequest
 * @return DescribeAclWhitelistResponse
 */
DescribeAclWhitelistResponse Client::describeAclWhitelist(const DescribeAclWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclWhitelistWithOptions(request, runtime);
}

/**
 * @summary Queries the details about an address book for an access control policy.
 *
 * @description You can call this operation to query the details about an address book for an access control policy.
 * ## [](#qps)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeAddressBookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAddressBookResponse
 */
DescribeAddressBookResponse Client::describeAddressBookWithOptions(const DescribeAddressBookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContainPort()) {
    query["ContainPort"] = request.containPort();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.groupType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAddressBook"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAddressBookResponse>();
}

/**
 * @summary Queries the details about an address book for an access control policy.
 *
 * @description You can call this operation to query the details about an address book for an access control policy.
 * ## [](#qps)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeAddressBookRequest
 * @return DescribeAddressBookResponse
 */
DescribeAddressBookResponse Client::describeAddressBook(const DescribeAddressBookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAddressBookWithOptions(request, runtime);
}

/**
 * @summary Queries the assets that are protected by Cloud Firewall.
 *
 * @description You can call the DescribeAssetList operation to query the assets that are protected by Cloud Firewall.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeAssetListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAssetListResponse
 */
DescribeAssetListResponse Client::describeAssetListWithOptions(const DescribeAssetListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.ipVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasNewResourceTag()) {
    query["NewResourceTag"] = request.newResourceTag();
  }

  if (!!request.hasOutStatistic()) {
    query["OutStatistic"] = request.outStatistic();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSearchItem()) {
    query["SearchItem"] = request.searchItem();
  }

  if (!!request.hasSensitiveStatus()) {
    query["SensitiveStatus"] = request.sensitiveStatus();
  }

  if (!!request.hasSgStatus()) {
    query["SgStatus"] = request.sgStatus();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.userType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAssetList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAssetListResponse>();
}

/**
 * @summary Queries the assets that are protected by Cloud Firewall.
 *
 * @description You can call the DescribeAssetList operation to query the assets that are protected by Cloud Firewall.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeAssetListRequest
 * @return DescribeAssetListResponse
 */
DescribeAssetListResponse Client::describeAssetList(const DescribeAssetListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAssetListWithOptions(request, runtime);
}

/**
 * @summary Queries the risk levels of assets.
 *
 * @param request DescribeAssetRiskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAssetRiskListResponse
 */
DescribeAssetRiskListResponse Client::describeAssetRiskListWithOptions(const DescribeAssetRiskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpAddrList()) {
    query["IpAddrList"] = request.ipAddrList();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.ipVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAssetRiskList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAssetRiskListResponse>();
}

/**
 * @summary Queries the risk levels of assets.
 *
 * @param request DescribeAssetRiskListRequest
 * @return DescribeAssetRiskListResponse
 */
DescribeAssetRiskListResponse Client::describeAssetRiskList(const DescribeAssetRiskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAssetRiskListWithOptions(request, runtime);
}

/**
 * @summary Queries statistics on the assets that are protected by Cloud Firewall.
 *
 * @param request DescribeAssetStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAssetStatisticResponse
 */
DescribeAssetStatisticResponse Client::describeAssetStatisticWithOptions(const DescribeAssetStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAssetStatistic"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAssetStatisticResponse>();
}

/**
 * @summary Queries statistics on the assets that are protected by Cloud Firewall.
 *
 * @param request DescribeAssetStatisticRequest
 * @return DescribeAssetStatisticResponse
 */
DescribeAssetStatisticResponse Client::describeAssetStatistic(const DescribeAssetStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAssetStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the firewall risk level.
 *
 * @param request DescribeCfwRiskLevelSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCfwRiskLevelSummaryResponse
 */
DescribeCfwRiskLevelSummaryResponse Client::describeCfwRiskLevelSummaryWithOptions(const DescribeCfwRiskLevelSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCfwRiskLevelSummary"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCfwRiskLevelSummaryResponse>();
}

/**
 * @summary Queries the firewall risk level.
 *
 * @param request DescribeCfwRiskLevelSummaryRequest
 * @return DescribeCfwRiskLevelSummaryResponse
 */
DescribeCfwRiskLevelSummaryResponse Client::describeCfwRiskLevelSummary(const DescribeCfwRiskLevelSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCfwRiskLevelSummaryWithOptions(request, runtime);
}

/**
 * @summary 获取清空授权信息
 *
 * @param request DescribeClearAuthInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClearAuthInfoResponse
 */
DescribeClearAuthInfoResponse Client::describeClearAuthInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeClearAuthInfo"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClearAuthInfoResponse>();
}

/**
 * @summary 获取清空授权信息
 *
 * @return DescribeClearAuthInfoResponse
 */
DescribeClearAuthInfoResponse Client::describeClearAuthInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClearAuthInfoWithOptions(runtime);
}

/**
 * @summary Queries the details about all access control policies.
 *
 * @description You can call the DescribeControlPolicy operation to query the details about access control policies by page.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeControlPolicyResponse
 */
DescribeControlPolicyResponse Client::describeControlPolicyWithOptions(const DescribeControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.aclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.destination();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.ipVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.proto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.release();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.repeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeControlPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeControlPolicyResponse>();
}

/**
 * @summary Queries the details about all access control policies.
 *
 * @description You can call the DescribeControlPolicy operation to query the details about access control policies by page.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeControlPolicyRequest
 * @return DescribeControlPolicyResponse
 */
DescribeControlPolicyResponse Client::describeControlPolicy(const DescribeControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeControlPolicyWithOptions(request, runtime);
}

/**
 * @summary 获取成员账号列表
 *
 * @param request DescribeCtrlInstanceMemberAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCtrlInstanceMemberAccountsResponse
 */
DescribeCtrlInstanceMemberAccountsResponse Client::describeCtrlInstanceMemberAccountsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeCtrlInstanceMemberAccounts"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCtrlInstanceMemberAccountsResponse>();
}

/**
 * @summary 获取成员账号列表
 *
 * @return DescribeCtrlInstanceMemberAccountsResponse
 */
DescribeCtrlInstanceMemberAccountsResponse Client::describeCtrlInstanceMemberAccounts() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCtrlInstanceMemberAccountsWithOptions(runtime);
}

/**
 * @summary Queries the default intrusion prevention system (IPS) configurations.
 *
 * @param request DescribeDefaultIPSConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefaultIPSConfigResponse
 */
DescribeDefaultIPSConfigResponse Client::describeDefaultIPSConfigWithOptions(const DescribeDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDefaultIPSConfig"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDefaultIPSConfigResponse>();
}

/**
 * @summary Queries the default intrusion prevention system (IPS) configurations.
 *
 * @param request DescribeDefaultIPSConfigRequest
 * @return DescribeDefaultIPSConfigResponse
 */
DescribeDefaultIPSConfigResponse Client::describeDefaultIPSConfig(const DescribeDefaultIPSConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefaultIPSConfigWithOptions(request, runtime);
}

/**
 * @summary 获取DNS防火墙ACL列表
 *
 * @param request DescribeDnsFirewallPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsFirewallPolicyResponse
 */
DescribeDnsFirewallPolicyResponse Client::describeDnsFirewallPolicyWithOptions(const DescribeDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.aclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.destination();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.ipVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.release();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsFirewallPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsFirewallPolicyResponse>();
}

/**
 * @summary 获取DNS防火墙ACL列表
 *
 * @param request DescribeDnsFirewallPolicyRequest
 * @return DescribeDnsFirewallPolicyResponse
 */
DescribeDnsFirewallPolicyResponse Client::describeDnsFirewallPolicy(const DescribeDnsFirewallPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsFirewallPolicyWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeDomainResolve is deprecated
 *
 * @summary Queries Domain Name System (DNS) records.
 *
 * @description You can use this operation to query the DNS record of a domain name. This operation can retrieve DNS records only from Alibaba Cloud DNS. Before you can call this operation, make sure that your domain name is hosted on Alibaba Cloud DNS.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDomainResolveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainResolveResponse
 */
DescribeDomainResolveResponse Client::describeDomainResolveWithOptions(const DescribeDomainResolveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.ipVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainResolve"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainResolveResponse>();
}

/**
 * @deprecated OpenAPI DescribeDomainResolve is deprecated
 *
 * @summary Queries Domain Name System (DNS) records.
 *
 * @description You can use this operation to query the DNS record of a domain name. This operation can retrieve DNS records only from Alibaba Cloud DNS. Before you can call this operation, make sure that your domain name is hosted on Alibaba Cloud DNS.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDomainResolveRequest
 * @return DescribeDomainResolveResponse
 */
DescribeDomainResolveResponse Client::describeDomainResolve(const DescribeDomainResolveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainResolveWithOptions(request, runtime);
}

/**
 * @summary Queries file download tasks, including the task information and download URLs.
 *
 * @param request DescribeDownloadTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDownloadTaskResponse
 */
DescribeDownloadTaskResponse Client::describeDownloadTaskWithOptions(const DescribeDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDownloadTask"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDownloadTaskResponse>();
}

/**
 * @summary Queries file download tasks, including the task information and download URLs.
 *
 * @param request DescribeDownloadTaskRequest
 * @return DescribeDownloadTaskResponse
 */
DescribeDownloadTaskResponse Client::describeDownloadTask(const DescribeDownloadTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDownloadTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the types of download tasks. The type corresponds to the TaskType fields in the download task-related operations.
 *
 * @param request DescribeDownloadTaskTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDownloadTaskTypeResponse
 */
DescribeDownloadTaskTypeResponse Client::describeDownloadTaskTypeWithOptions(const DescribeDownloadTaskTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDownloadTaskType"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDownloadTaskTypeResponse>();
}

/**
 * @summary Queries the types of download tasks. The type corresponds to the TaskType fields in the download task-related operations.
 *
 * @param request DescribeDownloadTaskTypeRequest
 * @return DescribeDownloadTaskTypeResponse
 */
DescribeDownloadTaskTypeResponse Client::describeDownloadTaskType(const DescribeDownloadTaskTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDownloadTaskTypeWithOptions(request, runtime);
}

/**
 * @summary 获取防火墙DROP数据统计
 *
 * @param request DescribeFirewallDropStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFirewallDropStatisticsResponse
 */
DescribeFirewallDropStatisticsResponse Client::describeFirewallDropStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeFirewallDropStatistics"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFirewallDropStatisticsResponse>();
}

/**
 * @summary 获取防火墙DROP数据统计
 *
 * @return DescribeFirewallDropStatisticsResponse
 */
DescribeFirewallDropStatisticsResponse Client::describeFirewallDropStatistics() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFirewallDropStatisticsWithOptions(runtime);
}

/**
 * @summary 获取防火墙任务
 *
 * @param request DescribeFirewallTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFirewallTaskResponse
 */
DescribeFirewallTaskResponse Client::describeFirewallTaskWithOptions(const DescribeFirewallTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.childInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFirewallTask"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFirewallTaskResponse>();
}

/**
 * @summary 获取防火墙任务
 *
 * @param request DescribeFirewallTaskRequest
 * @return DescribeFirewallTaskResponse
 */
DescribeFirewallTaskResponse Client::describeFirewallTask(const DescribeFirewallTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFirewallTaskWithOptions(request, runtime);
}

/**
 * @summary 获取防火墙创建的交换机
 *
 * @param request DescribeFirewallVSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFirewallVSwitchResponse
 */
DescribeFirewallVSwitchResponse Client::describeFirewallVSwitchWithOptions(const DescribeFirewallVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.firewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasVswitchId()) {
    query["VswitchId"] = request.vswitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFirewallVSwitch"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFirewallVSwitchResponse>();
}

/**
 * @summary 获取防火墙创建的交换机
 *
 * @param request DescribeFirewallVSwitchRequest
 * @return DescribeFirewallVSwitchResponse
 */
DescribeFirewallVSwitchResponse Client::describeFirewallVSwitch(const DescribeFirewallVSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFirewallVSwitchWithOptions(request, runtime);
}

/**
 * @summary Queries the information about members in Cloud Firewall.
 *
 * @description You can use this operation to query the information about members in Cloud Firewall.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeInstanceMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceMembersResponse
 */
DescribeInstanceMembersResponse Client::describeInstanceMembersWithOptions(const DescribeInstanceMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasMemberDesc()) {
    query["MemberDesc"] = request.memberDesc();
  }

  if (!!request.hasMemberDisplayName()) {
    query["MemberDisplayName"] = request.memberDisplayName();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceMembers"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceMembersResponse>();
}

/**
 * @summary Queries the information about members in Cloud Firewall.
 *
 * @description You can use this operation to query the information about members in Cloud Firewall.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeInstanceMembersRequest
 * @return DescribeInstanceMembersResponse
 */
DescribeInstanceMembersResponse Client::describeInstanceMembers(const DescribeInstanceMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceMembersWithOptions(request, runtime);
}

/**
 * @summary Queries the risk levels of instances.
 *
 * @param request DescribeInstanceRiskLevelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceRiskLevelsResponse
 */
DescribeInstanceRiskLevelsResponse Client::describeInstanceRiskLevelsWithOptions(const DescribeInstanceRiskLevelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstances()) {
    query["Instances"] = request.instances();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceRiskLevels"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceRiskLevelsResponse>();
}

/**
 * @summary Queries the risk levels of instances.
 *
 * @param request DescribeInstanceRiskLevelsRequest
 * @return DescribeInstanceRiskLevelsResponse
 */
DescribeInstanceRiskLevelsResponse Client::describeInstanceRiskLevels(const DescribeInstanceRiskLevelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceRiskLevelsWithOptions(request, runtime);
}

/**
 * @summary 获取互联网方向删除会话趋势图
 *
 * @param request DescribeInternetDropTrafficTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetDropTrafficTrendResponse
 */
DescribeInternetDropTrafficTrendResponse Client::describeInternetDropTrafficTrendWithOptions(const DescribeInternetDropTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.sourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInternetDropTrafficTrend"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInternetDropTrafficTrendResponse>();
}

/**
 * @summary 获取互联网方向删除会话趋势图
 *
 * @param request DescribeInternetDropTrafficTrendRequest
 * @return DescribeInternetDropTrafficTrendResponse
 */
DescribeInternetDropTrafficTrendResponse Client::describeInternetDropTrafficTrend(const DescribeInternetDropTrafficTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetDropTrafficTrendWithOptions(request, runtime);
}

/**
 * @summary Queries the IP addresses that are open to the Internet.
 *
 * @param request DescribeInternetOpenIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetOpenIpResponse
 */
DescribeInternetOpenIpResponse Client::describeInternetOpenIpWithOptions(const DescribeInternetOpenIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetsInstanceId()) {
    query["AssetsInstanceId"] = request.assetsInstanceId();
  }

  if (!!request.hasAssetsInstanceName()) {
    query["AssetsInstanceName"] = request.assetsInstanceName();
  }

  if (!!request.hasAssetsType()) {
    query["AssetsType"] = request.assetsType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasPublicIp()) {
    query["PublicIp"] = request.publicIp();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.riskLevel();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInternetOpenIp"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInternetOpenIpResponse>();
}

/**
 * @summary Queries the IP addresses that are open to the Internet.
 *
 * @param request DescribeInternetOpenIpRequest
 * @return DescribeInternetOpenIpResponse
 */
DescribeInternetOpenIpResponse Client::describeInternetOpenIp(const DescribeInternetOpenIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetOpenIpWithOptions(request, runtime);
}

/**
 * @summary 获取互联网开放端口
 *
 * @param request DescribeInternetOpenPortRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetOpenPortResponse
 */
DescribeInternetOpenPortResponse Client::describeInternetOpenPortWithOptions(const DescribeInternetOpenPortRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.riskLevel();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasServiceNameFuzzy()) {
    query["ServiceNameFuzzy"] = request.serviceNameFuzzy();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasSuggestLevel()) {
    query["SuggestLevel"] = request.suggestLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInternetOpenPort"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInternetOpenPortResponse>();
}

/**
 * @summary 获取互联网开放端口
 *
 * @param request DescribeInternetOpenPortRequest
 * @return DescribeInternetOpenPortResponse
 */
DescribeInternetOpenPortResponse Client::describeInternetOpenPort(const DescribeInternetOpenPortRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetOpenPortWithOptions(request, runtime);
}

/**
 * @summary 获取互联网开放服务
 *
 * @param request DescribeInternetOpenServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetOpenServiceResponse
 */
DescribeInternetOpenServiceResponse Client::describeInternetOpenServiceWithOptions(const DescribeInternetOpenServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.riskLevel();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasServiceNameFuzzy()) {
    query["ServiceNameFuzzy"] = request.serviceNameFuzzy();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasSuggestLevel()) {
    query["SuggestLevel"] = request.suggestLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInternetOpenService"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInternetOpenServiceResponse>();
}

/**
 * @summary 获取互联网开放服务
 *
 * @param request DescribeInternetOpenServiceRequest
 * @return DescribeInternetOpenServiceResponse
 */
DescribeInternetOpenServiceResponse Client::describeInternetOpenService(const DescribeInternetOpenServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetOpenServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the trends of Internet traffic.
 *
 * @param request DescribeInternetTrafficTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetTrafficTrendResponse
 */
DescribeInternetTrafficTrendResponse Client::describeInternetTrafficTrendWithOptions(const DescribeInternetTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.sourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasSrcPrivateIP()) {
    query["SrcPrivateIP"] = request.srcPrivateIP();
  }

  if (!!request.hasSrcPublicIP()) {
    query["SrcPublicIP"] = request.srcPublicIP();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTrafficType()) {
    query["TrafficType"] = request.trafficType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInternetTrafficTrend"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInternetTrafficTrendResponse>();
}

/**
 * @summary Queries the trends of Internet traffic.
 *
 * @param request DescribeInternetTrafficTrendRequest
 * @return DescribeInternetTrafficTrendResponse
 */
DescribeInternetTrafficTrendResponse Client::describeInternetTrafficTrend(const DescribeInternetTrafficTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetTrafficTrendWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the breach awareness events of a firewall.
 *
 * @param request DescribeInvadeEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvadeEventListResponse
 */
DescribeInvadeEventListResponse Client::describeInvadeEventListWithOptions(const DescribeInvadeEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetsIP()) {
    query["AssetsIP"] = request.assetsIP();
  }

  if (!!request.hasAssetsInstanceId()) {
    query["AssetsInstanceId"] = request.assetsInstanceId();
  }

  if (!!request.hasAssetsInstanceName()) {
    query["AssetsInstanceName"] = request.assetsInstanceName();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventKey()) {
    query["EventKey"] = request.eventKey();
  }

  if (!!request.hasEventName()) {
    query["EventName"] = request.eventName();
  }

  if (!!request.hasEventUuid()) {
    query["EventUuid"] = request.eventUuid();
  }

  if (!!request.hasIsIgnore()) {
    query["IsIgnore"] = request.isIgnore();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProcessStatusList()) {
    query["ProcessStatusList"] = request.processStatusList();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.riskLevel();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInvadeEventList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInvadeEventListResponse>();
}

/**
 * @summary Queries the information about the breach awareness events of a firewall.
 *
 * @param request DescribeInvadeEventListRequest
 * @return DescribeInvadeEventListResponse
 */
DescribeInvadeEventListResponse Client::describeInvadeEventList(const DescribeInvadeEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvadeEventListWithOptions(request, runtime);
}

/**
 * @summary 获取漏洞名称列表
 *
 * @param request DescribeInvadeEventNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvadeEventNameListResponse
 */
DescribeInvadeEventNameListResponse Client::describeInvadeEventNameListWithOptions(const DescribeInvadeEventNameListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInvadeEventNameList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInvadeEventNameListResponse>();
}

/**
 * @summary 获取漏洞名称列表
 *
 * @param request DescribeInvadeEventNameListRequest
 * @return DescribeInvadeEventNameListResponse
 */
DescribeInvadeEventNameListResponse Client::describeInvadeEventNameList(const DescribeInvadeEventNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvadeEventNameListWithOptions(request, runtime);
}

/**
 * @summary 获取漏洞事件统计
 *
 * @param request DescribeInvadeEventStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvadeEventStatisticResponse
 */
DescribeInvadeEventStatisticResponse Client::describeInvadeEventStatisticWithOptions(const DescribeInvadeEventStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInvadeEventStatistic"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInvadeEventStatisticResponse>();
}

/**
 * @summary 获取漏洞事件统计
 *
 * @param request DescribeInvadeEventStatisticRequest
 * @return DescribeInvadeEventStatisticResponse
 */
DescribeInvadeEventStatisticResponse Client::describeInvadeEventStatistic(const DescribeInvadeEventStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvadeEventStatisticWithOptions(request, runtime);
}

/**
 * @summary Get Log Service Information
 *
 * @param request DescribeLogStoreInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogStoreInfoResponse
 */
DescribeLogStoreInfoResponse Client::describeLogStoreInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeLogStoreInfo"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogStoreInfoResponse>();
}

/**
 * @summary Get Log Service Information
 *
 * @return DescribeLogStoreInfoResponse
 */
DescribeLogStoreInfoResponse Client::describeLogStoreInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogStoreInfoWithOptions(runtime);
}

/**
 * @summary Queries the pagination status of NAT firewalls.
 *
 * @param request DescribeNatAclPageStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNatAclPageStatusResponse
 */
DescribeNatAclPageStatusResponse Client::describeNatAclPageStatusWithOptions(const DescribeNatAclPageStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNatAclPageStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNatAclPageStatusResponse>();
}

/**
 * @summary Queries the pagination status of NAT firewalls.
 *
 * @param request DescribeNatAclPageStatusRequest
 * @return DescribeNatAclPageStatusResponse
 */
DescribeNatAclPageStatusResponse Client::describeNatAclPageStatus(const DescribeNatAclPageStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatAclPageStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the information about all access control policies that are created for NAT firewalls.
 *
 * @description You can use this operation to query the information about all access control policies that are created for NAT firewalls by page.
 *
 * @param request DescribeNatFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNatFirewallControlPolicyResponse
 */
DescribeNatFirewallControlPolicyResponse Client::describeNatFirewallControlPolicyWithOptions(const DescribeNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.aclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.destination();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.natGatewayId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.proto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.release();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.repeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNatFirewallControlPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNatFirewallControlPolicyResponse>();
}

/**
 * @summary Queries the information about all access control policies that are created for NAT firewalls.
 *
 * @description You can use this operation to query the information about all access control policies that are created for NAT firewalls by page.
 *
 * @param request DescribeNatFirewallControlPolicyRequest
 * @return DescribeNatFirewallControlPolicyResponse
 */
DescribeNatFirewallControlPolicyResponse Client::describeNatFirewallControlPolicy(const DescribeNatFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary 概览页-nat防火墙拦截趋势
 *
 * @param request DescribeNatFirewallDropTrafficTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNatFirewallDropTrafficTrendResponse
 */
DescribeNatFirewallDropTrafficTrendResponse Client::describeNatFirewallDropTrafficTrendWithOptions(const DescribeNatFirewallDropTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNatFirewallDropTrafficTrend"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNatFirewallDropTrafficTrendResponse>();
}

/**
 * @summary 概览页-nat防火墙拦截趋势
 *
 * @param request DescribeNatFirewallDropTrafficTrendRequest
 * @return DescribeNatFirewallDropTrafficTrendResponse
 */
DescribeNatFirewallDropTrafficTrendResponse Client::describeNatFirewallDropTrafficTrend(const DescribeNatFirewallDropTrafficTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatFirewallDropTrafficTrendWithOptions(request, runtime);
}

/**
 * @summary Queries details of NAT firewalls.
 *
 * @param request DescribeNatFirewallListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNatFirewallListResponse
 */
DescribeNatFirewallListResponse Client::describeNatFirewallListWithOptions(const DescribeNatFirewallListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.natGatewayId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProxyId()) {
    query["ProxyId"] = request.proxyId();
  }

  if (!!request.hasProxyName()) {
    query["ProxyName"] = request.proxyName();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNatFirewallList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNatFirewallListResponse>();
}

/**
 * @summary Queries details of NAT firewalls.
 *
 * @param request DescribeNatFirewallListRequest
 * @return DescribeNatFirewallListResponse
 */
DescribeNatFirewallListResponse Client::describeNatFirewallList(const DescribeNatFirewallListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatFirewallListWithOptions(request, runtime);
}

/**
 * @summary Queries the priority range of access control policies that are created for a NAT firewall.
 *
 * @description You can use this operation to query the priority range of access control policies that are created for a NAT firewall.
 *
 * @param request DescribeNatFirewallPolicyPriorUsedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNatFirewallPolicyPriorUsedResponse
 */
DescribeNatFirewallPolicyPriorUsedResponse Client::describeNatFirewallPolicyPriorUsedWithOptions(const DescribeNatFirewallPolicyPriorUsedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.ipVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.natGatewayId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNatFirewallPolicyPriorUsed"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNatFirewallPolicyPriorUsedResponse>();
}

/**
 * @summary Queries the priority range of access control policies that are created for a NAT firewall.
 *
 * @description You can use this operation to query the priority range of access control policies that are created for a NAT firewall.
 *
 * @param request DescribeNatFirewallPolicyPriorUsedRequest
 * @return DescribeNatFirewallPolicyPriorUsedResponse
 */
DescribeNatFirewallPolicyPriorUsedResponse Client::describeNatFirewallPolicyPriorUsed(const DescribeNatFirewallPolicyPriorUsedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatFirewallPolicyPriorUsedWithOptions(request, runtime);
}

/**
 * @summary 获取NAT防火墙配额
 *
 * @param request DescribeNatFirewallQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNatFirewallQuotaResponse
 */
DescribeNatFirewallQuotaResponse Client::describeNatFirewallQuotaWithOptions(const DescribeNatFirewallQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNatFirewallQuota"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNatFirewallQuotaResponse>();
}

/**
 * @summary 获取NAT防火墙配额
 *
 * @param request DescribeNatFirewallQuotaRequest
 * @return DescribeNatFirewallQuotaResponse
 */
DescribeNatFirewallQuotaResponse Client::describeNatFirewallQuota(const DescribeNatFirewallQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatFirewallQuotaWithOptions(request, runtime);
}

/**
 * @summary 概览页-NAT流量趋势
 *
 * @param request DescribeNatFirewallTrafficTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNatFirewallTrafficTrendResponse
 */
DescribeNatFirewallTrafficTrendResponse Client::describeNatFirewallTrafficTrendWithOptions(const DescribeNatFirewallTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNatFirewallTrafficTrend"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNatFirewallTrafficTrendResponse>();
}

/**
 * @summary 概览页-NAT流量趋势
 *
 * @param request DescribeNatFirewallTrafficTrendRequest
 * @return DescribeNatFirewallTrafficTrendResponse
 */
DescribeNatFirewallTrafficTrendResponse Client::describeNatFirewallTrafficTrend(const DescribeNatFirewallTrafficTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatFirewallTrafficTrendWithOptions(request, runtime);
}

/**
 * @summary 获取网络实例列表
 *
 * @param request DescribeNetworkInstanceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkInstanceListResponse
 */
DescribeNetworkInstanceListResponse Client::describeNetworkInstanceListWithOptions(const DescribeNetworkInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasConnectType()) {
    query["ConnectType"] = request.connectType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNetworkInstanceList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNetworkInstanceListResponse>();
}

/**
 * @summary 获取网络实例列表
 *
 * @param request DescribeNetworkInstanceListRequest
 * @return DescribeNetworkInstanceListResponse
 */
DescribeNetworkInstanceListResponse Client::describeNetworkInstanceList(const DescribeNetworkInstanceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkInstanceListWithOptions(request, runtime);
}

/**
 * @summary 获取网络实例关系列表
 *
 * @param request DescribeNetworkInstanceRelationListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkInstanceRelationListResponse
 */
DescribeNetworkInstanceRelationListResponse Client::describeNetworkInstanceRelationListWithOptions(const DescribeNetworkInstanceRelationListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectType()) {
    query["ConnectType"] = request.connectType();
  }

  if (!!request.hasFirewallConfigureStatus()) {
    query["FirewallConfigureStatus"] = request.firewallConfigureStatus();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNetworkInstanceId()) {
    query["NetworkInstanceId"] = request.networkInstanceId();
  }

  if (!!request.hasPeerNetworkInstanceId()) {
    query["PeerNetworkInstanceId"] = request.peerNetworkInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNetworkInstanceRelationList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNetworkInstanceRelationListResponse>();
}

/**
 * @summary 获取网络实例关系列表
 *
 * @param request DescribeNetworkInstanceRelationListRequest
 * @return DescribeNetworkInstanceRelationListResponse
 */
DescribeNetworkInstanceRelationListResponse Client::describeNetworkInstanceRelationList(const DescribeNetworkInstanceRelationListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkInstanceRelationListWithOptions(request, runtime);
}

/**
 * @summary 获取网络流量TOP环比
 *
 * @param request DescribeNetworkTrafficTopRatioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkTrafficTopRatioResponse
 */
DescribeNetworkTrafficTopRatioResponse Client::describeNetworkTrafficTopRatioWithOptions(const DescribeNetworkTrafficTopRatioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasAssetIP()) {
    query["AssetIP"] = request.assetIP();
  }

  if (!!request.hasAssetRegion()) {
    query["AssetRegion"] = request.assetRegion();
  }

  if (!!request.hasDataType()) {
    query["DataType"] = request.dataType();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasDstIP()) {
    query["DstIP"] = request.dstIP();
  }

  if (!!request.hasDstPort()) {
    query["DstPort"] = request.dstPort();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIpProperty()) {
    query["IpProperty"] = request.ipProperty();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.isp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLocation()) {
    query["Location"] = request.location();
  }

  if (!!request.hasRuleResult()) {
    query["RuleResult"] = request.ruleResult();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.sourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasSrcIP()) {
    query["SrcIP"] = request.srcIP();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNetworkTrafficTopRatio"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNetworkTrafficTopRatioResponse>();
}

/**
 * @summary 获取网络流量TOP环比
 *
 * @param request DescribeNetworkTrafficTopRatioRequest
 * @return DescribeNetworkTrafficTopRatioResponse
 */
DescribeNetworkTrafficTopRatioResponse Client::describeNetworkTrafficTopRatio(const DescribeNetworkTrafficTopRatioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkTrafficTopRatioWithOptions(request, runtime);
}

/**
 * @summary 获取公网IP通过的源状态
 *
 * @param request DescribeOpenIpAccessSrcStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOpenIpAccessSrcStatResponse
 */
DescribeOpenIpAccessSrcStatResponse Client::describeOpenIpAccessSrcStatWithOptions(const DescribeOpenIpAccessSrcStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDstIp()) {
    query["DstIp"] = request.dstIp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOpenIpAccessSrcStat"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOpenIpAccessSrcStatResponse>();
}

/**
 * @summary 获取公网IP通过的源状态
 *
 * @param request DescribeOpenIpAccessSrcStatRequest
 * @return DescribeOpenIpAccessSrcStatResponse
 */
DescribeOpenIpAccessSrcStatResponse Client::describeOpenIpAccessSrcStat(const DescribeOpenIpAccessSrcStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOpenIpAccessSrcStatWithOptions(request, runtime);
}

/**
 * @summary 获取外联资产列表
 *
 * @param request DescribeOutgoingAssetListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingAssetListResponse
 */
DescribeOutgoingAssetListResponse Client::describeOutgoingAssetListWithOptions(const DescribeOutgoingAssetListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetsRegion()) {
    query["AssetsRegion"] = request.assetsRegion();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasIPType()) {
    query["IPType"] = request.IPType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.natGatewayId();
  }

  if (!!request.hasNatGatewayName()) {
    query["NatGatewayName"] = request.natGatewayName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPrivateIP()) {
    query["PrivateIP"] = request.privateIP();
  }

  if (!!request.hasPublicIP()) {
    query["PublicIP"] = request.publicIP();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSecurityRisk()) {
    query["SecurityRisk"] = request.securityRisk();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOutgoingAssetList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOutgoingAssetListResponse>();
}

/**
 * @summary 获取外联资产列表
 *
 * @param request DescribeOutgoingAssetListRequest
 * @return DescribeOutgoingAssetListResponse
 */
DescribeOutgoingAssetListResponse Client::describeOutgoingAssetList(const DescribeOutgoingAssetListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingAssetListWithOptions(request, runtime);
}

/**
 * @summary Get details of outgoing destination IPs
 *
 * @param request DescribeOutgoingDestinationIPRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingDestinationIPResponse
 */
DescribeOutgoingDestinationIPResponse Client::describeOutgoingDestinationIPWithOptions(const DescribeOutgoingDestinationIPRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDstIP()) {
    query["DstIP"] = request.dstIP();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasPrivateIP()) {
    query["PrivateIP"] = request.privateIP();
  }

  if (!!request.hasPublicIP()) {
    query["PublicIP"] = request.publicIP();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTagIdNew()) {
    query["TagIdNew"] = request.tagIdNew();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOutgoingDestinationIP"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOutgoingDestinationIPResponse>();
}

/**
 * @summary Get details of outgoing destination IPs
 *
 * @param request DescribeOutgoingDestinationIPRequest
 * @return DescribeOutgoingDestinationIPResponse
 */
DescribeOutgoingDestinationIPResponse Client::describeOutgoingDestinationIP(const DescribeOutgoingDestinationIPRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingDestinationIPWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the domain names in outbound connections.
 *
 * @param request DescribeOutgoingDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingDomainResponse
 */
DescribeOutgoingDomainResponse Client::describeOutgoingDomainWithOptions(const DescribeOutgoingDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDataType()) {
    query["DataType"] = request.dataType();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIsAITraffic()) {
    query["IsAITraffic"] = request.isAITraffic();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPublicIP()) {
    query["PublicIP"] = request.publicIP();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTagIdNew()) {
    query["TagIdNew"] = request.tagIdNew();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOutgoingDomain"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOutgoingDomainResponse>();
}

/**
 * @summary Queries the information about the domain names in outbound connections.
 *
 * @param request DescribeOutgoingDomainRequest
 * @return DescribeOutgoingDomainResponse
 */
DescribeOutgoingDomainResponse Client::describeOutgoingDomain(const DescribeOutgoingDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingDomainWithOptions(request, runtime);
}

/**
 * @summary 获取外联域名详情
 *
 * @param request DescribeOutgoingDomainDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingDomainDetailResponse
 */
DescribeOutgoingDomainDetailResponse Client::describeOutgoingDomainDetailWithOptions(const DescribeOutgoingDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclCoverage()) {
    query["AclCoverage"] = request.aclCoverage();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasDomainList()) {
    query["DomainList"] = request.domainList();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIPType()) {
    query["IPType"] = request.IPType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.natGatewayId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPrivateIP()) {
    query["PrivateIP"] = request.privateIP();
  }

  if (!!request.hasPublicIP()) {
    query["PublicIP"] = request.publicIP();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTagId()) {
    query["TagId"] = request.tagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOutgoingDomainDetail"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOutgoingDomainDetailResponse>();
}

/**
 * @summary 获取外联域名详情
 *
 * @param request DescribeOutgoingDomainDetailRequest
 * @return DescribeOutgoingDomainDetailResponse
 */
DescribeOutgoingDomainDetailResponse Client::describeOutgoingDomainDetail(const DescribeOutgoingDomainDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingDomainDetailWithOptions(request, runtime);
}

/**
 * @summary 获取外联统计
 *
 * @param request DescribeOutgoingStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingStatisticResponse
 */
DescribeOutgoingStatisticResponse Client::describeOutgoingStatisticWithOptions(const DescribeOutgoingStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOutgoingStatistic"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOutgoingStatisticResponse>();
}

/**
 * @summary 获取外联统计
 *
 * @param request DescribeOutgoingStatisticRequest
 * @return DescribeOutgoingStatisticResponse
 */
DescribeOutgoingStatisticResponse Client::describeOutgoingStatistic(const DescribeOutgoingStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingStatisticWithOptions(request, runtime);
}

/**
 * @summary 获取外联标签
 *
 * @param request DescribeOutgoingTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingTagResponse
 */
DescribeOutgoingTagResponse Client::describeOutgoingTagWithOptions(const DescribeOutgoingTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDstType()) {
    query["DstType"] = request.dstType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTagId()) {
    query["TagId"] = request.tagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOutgoingTag"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOutgoingTagResponse>();
}

/**
 * @summary 获取外联标签
 *
 * @param request DescribeOutgoingTagRequest
 * @return DescribeOutgoingTagResponse
 */
DescribeOutgoingTagResponse Client::describeOutgoingTag(const DescribeOutgoingTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingTagWithOptions(request, runtime);
}

/**
 * @summary 获取文档
 *
 * @param request DescribePageDocumentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePageDocumentsResponse
 */
DescribePageDocumentsResponse Client::describePageDocumentsWithOptions(const DescribePageDocumentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageName()) {
    query["PageName"] = request.pageName();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.sourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasTabName()) {
    query["TabName"] = request.tabName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePageDocuments"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePageDocumentsResponse>();
}

/**
 * @summary 获取文档
 *
 * @param request DescribePageDocumentsRequest
 * @return DescribePageDocumentsResponse
 */
DescribePageDocumentsResponse Client::describePageDocuments(const DescribePageDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePageDocumentsWithOptions(request, runtime);
}

/**
 * @summary Queries whether the strict mode is enabled for an access control policy.
 *
 * @description You can call the DescribePolicyAdvancedConfig operation to query whether the strict mode is enabled for an access control policy.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribePolicyAdvancedConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolicyAdvancedConfigResponse
 */
DescribePolicyAdvancedConfigResponse Client::describePolicyAdvancedConfigWithOptions(const DescribePolicyAdvancedConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolicyAdvancedConfig"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolicyAdvancedConfigResponse>();
}

/**
 * @summary Queries whether the strict mode is enabled for an access control policy.
 *
 * @description You can call the DescribePolicyAdvancedConfig operation to query whether the strict mode is enabled for an access control policy.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribePolicyAdvancedConfigRequest
 * @return DescribePolicyAdvancedConfigResponse
 */
DescribePolicyAdvancedConfigResponse Client::describePolicyAdvancedConfig(const DescribePolicyAdvancedConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolicyAdvancedConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the priority range of access control policies.
 *
 * @description You can call this operation to query the priority range of the access control policies that match specific query conditions.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribePolicyPriorUsedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolicyPriorUsedResponse
 */
DescribePolicyPriorUsedResponse Client::describePolicyPriorUsedWithOptions(const DescribePolicyPriorUsedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.ipVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePolicyPriorUsed"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePolicyPriorUsedResponse>();
}

/**
 * @summary Queries the priority range of access control policies.
 *
 * @description You can call this operation to query the priority range of the access control policies that match specific query conditions.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribePolicyPriorUsedRequest
 * @return DescribePolicyPriorUsedResponse
 */
DescribePolicyPriorUsedResponse Client::describePolicyPriorUsed(const DescribePolicyPriorUsedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolicyPriorUsedWithOptions(request, runtime);
}

/**
 * @summary Queries the details of traffic billed based on the pay-as-you-go billing method.
 *
 * @description If you use Cloud Firewall that uses the pay-as-you-go billing method, you can call this operation to query traffic details accurate to the granularity of specific resource instances. If you use Cloud Firewall that uses the subscription billing method, you can call this operation to query the overall traffic details.
 *
 * @param request DescribePostpayTrafficDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePostpayTrafficDetailResponse
 */
DescribePostpayTrafficDetailResponse Client::describePostpayTrafficDetailWithOptions(const DescribePostpayTrafficDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasSearchItem()) {
    query["SearchItem"] = request.searchItem();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTrafficType()) {
    query["TrafficType"] = request.trafficType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePostpayTrafficDetail"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePostpayTrafficDetailResponse>();
}

/**
 * @summary Queries the details of traffic billed based on the pay-as-you-go billing method.
 *
 * @description If you use Cloud Firewall that uses the pay-as-you-go billing method, you can call this operation to query traffic details accurate to the granularity of specific resource instances. If you use Cloud Firewall that uses the subscription billing method, you can call this operation to query the overall traffic details.
 *
 * @param request DescribePostpayTrafficDetailRequest
 * @return DescribePostpayTrafficDetailResponse
 */
DescribePostpayTrafficDetailResponse Client::describePostpayTrafficDetail(const DescribePostpayTrafficDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePostpayTrafficDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the total volume of traffic that is billed based on the pay-as-you-go billing method, including all firewalls within the current account.
 *
 * @description You can call this operation to query statistics of the current Cloud Firewall from the date of purchase.
 *
 * @param request DescribePostpayTrafficTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePostpayTrafficTotalResponse
 */
DescribePostpayTrafficTotalResponse Client::describePostpayTrafficTotalWithOptions(const DescribePostpayTrafficTotalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePostpayTrafficTotal"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePostpayTrafficTotalResponse>();
}

/**
 * @summary Queries the total volume of traffic that is billed based on the pay-as-you-go billing method, including all firewalls within the current account.
 *
 * @description You can call this operation to query statistics of the current Cloud Firewall from the date of purchase.
 *
 * @param request DescribePostpayTrafficTotalRequest
 * @return DescribePostpayTrafficTotalResponse
 */
DescribePostpayTrafficTotalResponse Client::describePostpayTrafficTotal(const DescribePostpayTrafficTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePostpayTrafficTotalWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the Internet Firewall feature in Cloud Firewall that uses the pay-as-you-go billing method.
 *
 * @param request DescribePostpayUserInternetStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePostpayUserInternetStatusResponse
 */
DescribePostpayUserInternetStatusResponse Client::describePostpayUserInternetStatusWithOptions(const DescribePostpayUserInternetStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePostpayUserInternetStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePostpayUserInternetStatusResponse>();
}

/**
 * @summary Queries the status of the Internet Firewall feature in Cloud Firewall that uses the pay-as-you-go billing method.
 *
 * @param request DescribePostpayUserInternetStatusRequest
 * @return DescribePostpayUserInternetStatusResponse
 */
DescribePostpayUserInternetStatusResponse Client::describePostpayUserInternetStatus(const DescribePostpayUserInternetStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePostpayUserInternetStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the NAT Firewall feature in Cloud Firewall that use the pay-as-you-go billing method.
 *
 * @param request DescribePostpayUserNatStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePostpayUserNatStatusResponse
 */
DescribePostpayUserNatStatusResponse Client::describePostpayUserNatStatusWithOptions(const DescribePostpayUserNatStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePostpayUserNatStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePostpayUserNatStatusResponse>();
}

/**
 * @summary Queries the status of the NAT Firewall feature in Cloud Firewall that use the pay-as-you-go billing method.
 *
 * @param request DescribePostpayUserNatStatusRequest
 * @return DescribePostpayUserNatStatusResponse
 */
DescribePostpayUserNatStatusResponse Client::describePostpayUserNatStatus(const DescribePostpayUserNatStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePostpayUserNatStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the virtual private cloud (VPC) Firewall feature in Cloud Firewall that uses the pay-as-you-go billing method.
 *
 * @param request DescribePostpayUserVpcStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePostpayUserVpcStatusResponse
 */
DescribePostpayUserVpcStatusResponse Client::describePostpayUserVpcStatusWithOptions(const DescribePostpayUserVpcStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePostpayUserVpcStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePostpayUserVpcStatusResponse>();
}

/**
 * @summary Queries the status of the virtual private cloud (VPC) Firewall feature in Cloud Firewall that uses the pay-as-you-go billing method.
 *
 * @param request DescribePostpayUserVpcStatusRequest
 * @return DescribePostpayUserVpcStatusResponse
 */
DescribePostpayUserVpcStatusResponse Client::describePostpayUserVpcStatus(const DescribePostpayUserVpcStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePostpayUserVpcStatusWithOptions(request, runtime);
}

/**
 * @summary Queries prefix lists.
 *
 * @param request DescribePrefixListsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePrefixListsResponse
 */
DescribePrefixListsResponse Client::describePrefixListsWithOptions(const DescribePrefixListsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrefixLists"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePrefixListsResponse>();
}

/**
 * @summary Queries prefix lists.
 *
 * @param request DescribePrefixListsRequest
 * @return DescribePrefixListsResponse
 */
DescribePrefixListsResponse Client::describePrefixLists(const DescribePrefixListsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrefixListsWithOptions(request, runtime);
}

/**
 * @summary 查询私网DNS域名列表
 *
 * @param request DescribePrivateDnsDomainNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePrivateDnsDomainNameListResponse
 */
DescribePrivateDnsDomainNameListResponse Client::describePrivateDnsDomainNameListWithOptions(const DescribePrivateDnsDomainNameListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrivateDnsDomainNameList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePrivateDnsDomainNameListResponse>();
}

/**
 * @summary 查询私网DNS域名列表
 *
 * @param request DescribePrivateDnsDomainNameListRequest
 * @return DescribePrivateDnsDomainNameListResponse
 */
DescribePrivateDnsDomainNameListResponse Client::describePrivateDnsDomainNameList(const DescribePrivateDnsDomainNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrivateDnsDomainNameListWithOptions(request, runtime);
}

/**
 * @summary 查询私网DNS终端节点详情
 *
 * @param request DescribePrivateDnsEndpointDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePrivateDnsEndpointDetailResponse
 */
DescribePrivateDnsEndpointDetailResponse Client::describePrivateDnsEndpointDetailWithOptions(const DescribePrivateDnsEndpointDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrivateDnsEndpointDetail"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePrivateDnsEndpointDetailResponse>();
}

/**
 * @summary 查询私网DNS终端节点详情
 *
 * @param request DescribePrivateDnsEndpointDetailRequest
 * @return DescribePrivateDnsEndpointDetailResponse
 */
DescribePrivateDnsEndpointDetailResponse Client::describePrivateDnsEndpointDetail(const DescribePrivateDnsEndpointDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrivateDnsEndpointDetailWithOptions(request, runtime);
}

/**
 * @summary 查询私网DNS终端节点列表
 *
 * @param request DescribePrivateDnsEndpointListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePrivateDnsEndpointListResponse
 */
DescribePrivateDnsEndpointListResponse Client::describePrivateDnsEndpointListWithOptions(const DescribePrivateDnsEndpointListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrivateDnsEndpointList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePrivateDnsEndpointListResponse>();
}

/**
 * @summary 查询私网DNS终端节点列表
 *
 * @param request DescribePrivateDnsEndpointListRequest
 * @return DescribePrivateDnsEndpointListResponse
 */
DescribePrivateDnsEndpointListResponse Client::describePrivateDnsEndpointList(const DescribePrivateDnsEndpointListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrivateDnsEndpointListWithOptions(request, runtime);
}

/**
 * @summary 获取地域信息
 *
 * @param request DescribeRegionInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionInfoResponse
 */
DescribeRegionInfoResponse Client::describeRegionInfoWithOptions(const DescribeRegionInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.sourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegionInfo"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionInfoResponse>();
}

/**
 * @summary 获取地域信息
 *
 * @param request DescribeRegionInfoRequest
 * @return DescribeRegionInfoResponse
 */
DescribeRegionInfoResponse Client::describeRegionInfo(const DescribeRegionInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionInfoWithOptions(request, runtime);
}

/**
 * @summary 查询资产类型默认引流
 *
 * @param request DescribeResourceTypeAutoEnableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceTypeAutoEnableResponse
 */
DescribeResourceTypeAutoEnableResponse Client::describeResourceTypeAutoEnableWithOptions(const DescribeResourceTypeAutoEnableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceTypeAutoEnable"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceTypeAutoEnableResponse>();
}

/**
 * @summary 查询资产类型默认引流
 *
 * @param request DescribeResourceTypeAutoEnableRequest
 * @return DescribeResourceTypeAutoEnableResponse
 */
DescribeResourceTypeAutoEnableResponse Client::describeResourceTypeAutoEnable(const DescribeResourceTypeAutoEnableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceTypeAutoEnableWithOptions(request, runtime);
}

/**
 * @summary Queries the details of intrusion events.
 *
 * @description You can call the DescribeRiskEventGroup operation to query and download the details of intrusion events. We recommend that you query the details of 5 to 10 intrusion events at a time. If you do not need to query the geographical information about IP addresses, you can set the NoLocation parameter to true to prevent query timeout.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeRiskEventGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskEventGroupResponse
 */
DescribeRiskEventGroupResponse Client::describeRiskEventGroupWithOptions(const DescribeRiskEventGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttackApp()) {
    query["AttackApp"] = request.attackApp();
  }

  if (!!request.hasAttackAppCategory()) {
    query["AttackAppCategory"] = request.attackAppCategory();
  }

  if (!!request.hasAttackType()) {
    query["AttackType"] = request.attackType();
  }

  if (!!request.hasBuyVersion()) {
    query["BuyVersion"] = request.buyVersion();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDataType()) {
    query["DataType"] = request.dataType();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasDstIP()) {
    query["DstIP"] = request.dstIP();
  }

  if (!!request.hasDstNetworkInstanceId()) {
    query["DstNetworkInstanceId"] = request.dstNetworkInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventName()) {
    query["EventName"] = request.eventName();
  }

  if (!!request.hasFirewallType()) {
    query["FirewallType"] = request.firewallType();
  }

  if (!!request.hasIsOnlyPrivateAssoc()) {
    query["IsOnlyPrivateAssoc"] = request.isOnlyPrivateAssoc();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNoLocation()) {
    query["NoLocation"] = request.noLocation();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRuleResult()) {
    query["RuleResult"] = request.ruleResult();
  }

  if (!!request.hasRuleSource()) {
    query["RuleSource"] = request.ruleSource();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasSrcIP()) {
    query["SrcIP"] = request.srcIP();
  }

  if (!!request.hasSrcNetworkInstanceId()) {
    query["SrcNetworkInstanceId"] = request.srcNetworkInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasVulLevel()) {
    query["VulLevel"] = request.vulLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRiskEventGroup"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRiskEventGroupResponse>();
}

/**
 * @summary Queries the details of intrusion events.
 *
 * @description You can call the DescribeRiskEventGroup operation to query and download the details of intrusion events. We recommend that you query the details of 5 to 10 intrusion events at a time. If you do not need to query the geographical information about IP addresses, you can set the NoLocation parameter to true to prevent query timeout.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeRiskEventGroupRequest
 * @return DescribeRiskEventGroupResponse
 */
DescribeRiskEventGroupResponse Client::describeRiskEventGroup(const DescribeRiskEventGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskEventGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the attack payloads of intrusion events.
 *
 * @param request DescribeRiskEventPayloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskEventPayloadResponse
 */
DescribeRiskEventPayloadResponse Client::describeRiskEventPayloadWithOptions(const DescribeRiskEventPayloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDstIP()) {
    query["DstIP"] = request.dstIP();
  }

  if (!!request.hasDstVpcId()) {
    query["DstVpcId"] = request.dstVpcId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasFirewallType()) {
    query["FirewallType"] = request.firewallType();
  }

  if (!!request.hasPublicIP()) {
    query["PublicIP"] = request.publicIP();
  }

  if (!!request.hasSrcIP()) {
    query["SrcIP"] = request.srcIP();
  }

  if (!!request.hasSrcVpcId()) {
    query["SrcVpcId"] = request.srcVpcId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUUID()) {
    query["UUID"] = request.UUID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRiskEventPayload"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRiskEventPayloadResponse>();
}

/**
 * @summary Queries the attack payloads of intrusion events.
 *
 * @param request DescribeRiskEventPayloadRequest
 * @return DescribeRiskEventPayloadResponse
 */
DescribeRiskEventPayloadResponse Client::describeRiskEventPayload(const DescribeRiskEventPayloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskEventPayloadWithOptions(request, runtime);
}

/**
 * @summary 获取Top风险事件资产
 *
 * @param request DescribeRiskEventTopAttackAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskEventTopAttackAssetResponse
 */
DescribeRiskEventTopAttackAssetResponse Client::describeRiskEventTopAttackAssetWithOptions(const DescribeRiskEventTopAttackAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttackApp()) {
    query["AttackApp"] = request.attackApp();
  }

  if (!!request.hasAttackType()) {
    query["AttackType"] = request.attackType();
  }

  if (!!request.hasBuyVersion()) {
    query["BuyVersion"] = request.buyVersion();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRiskEventTopAttackAsset"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRiskEventTopAttackAssetResponse>();
}

/**
 * @summary 获取Top风险事件资产
 *
 * @param request DescribeRiskEventTopAttackAssetRequest
 * @return DescribeRiskEventTopAttackAssetResponse
 */
DescribeRiskEventTopAttackAssetResponse Client::describeRiskEventTopAttackAsset(const DescribeRiskEventTopAttackAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskEventTopAttackAssetWithOptions(request, runtime);
}

/**
 * @summary 获取风险安全组详情
 *
 * @param request DescribeRiskSecurityGroupDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskSecurityGroupDetailResponse
 */
DescribeRiskSecurityGroupDetailResponse Client::describeRiskSecurityGroupDetailWithOptions(const DescribeRiskSecurityGroupDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRuleUuid()) {
    query["RuleUuid"] = request.ruleUuid();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRiskSecurityGroupDetail"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRiskSecurityGroupDetailResponse>();
}

/**
 * @summary 获取风险安全组详情
 *
 * @param request DescribeRiskSecurityGroupDetailRequest
 * @return DescribeRiskSecurityGroupDetailResponse
 */
DescribeRiskSecurityGroupDetailResponse Client::describeRiskSecurityGroupDetail(const DescribeRiskSecurityGroupDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskSecurityGroupDetailWithOptions(request, runtime);
}

/**
 * @summary 获取安全模式
 *
 * @param request DescribeSecurityModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityModeResponse
 */
DescribeSecurityModeResponse Client::describeSecurityModeWithOptions(const DescribeSecurityModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityMode"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityModeResponse>();
}

/**
 * @summary 获取安全模式
 *
 * @param request DescribeSecurityModeRequest
 * @return DescribeSecurityModeResponse
 */
DescribeSecurityModeResponse Client::describeSecurityMode(const DescribeSecurityModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityModeWithOptions(request, runtime);
}

/**
 * @summary 获取正向代理
 *
 * @param request DescribeSecurityProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityProxyResponse
 */
DescribeSecurityProxyResponse Client::describeSecurityProxyWithOptions(const DescribeSecurityProxyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.natGatewayId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProxyId()) {
    query["ProxyId"] = request.proxyId();
  }

  if (!!request.hasProxyName()) {
    query["ProxyName"] = request.proxyName();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityProxy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityProxyResponse>();
}

/**
 * @summary 获取正向代理
 *
 * @param request DescribeSecurityProxyRequest
 * @return DescribeSecurityProxyResponse
 */
DescribeSecurityProxyResponse Client::describeSecurityProxy(const DescribeSecurityProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityProxyWithOptions(request, runtime);
}

/**
 * @summary Queries the information about signature library versions.
 *
 * @param request DescribeSignatureLibVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSignatureLibVersionResponse
 */
DescribeSignatureLibVersionResponse Client::describeSignatureLibVersionWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeSignatureLibVersion"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSignatureLibVersionResponse>();
}

/**
 * @summary Queries the information about signature library versions.
 *
 * @return DescribeSignatureLibVersionResponse
 */
DescribeSignatureLibVersionResponse Client::describeSignatureLibVersion() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSignatureLibVersionWithOptions(runtime);
}

/**
 * @summary 获取SLS开启状态
 *
 * @param request DescribeSlsAnalyzeOpenStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsAnalyzeOpenStatusResponse
 */
DescribeSlsAnalyzeOpenStatusResponse Client::describeSlsAnalyzeOpenStatusWithOptions(const DescribeSlsAnalyzeOpenStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlsAnalyzeOpenStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlsAnalyzeOpenStatusResponse>();
}

/**
 * @summary 获取SLS开启状态
 *
 * @param request DescribeSlsAnalyzeOpenStatusRequest
 * @return DescribeSlsAnalyzeOpenStatusResponse
 */
DescribeSlsAnalyzeOpenStatusResponse Client::describeSlsAnalyzeOpenStatus(const DescribeSlsAnalyzeOpenStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsAnalyzeOpenStatusWithOptions(request, runtime);
}

/**
 * @summary 查询威胁情报配置的信息
 *
 * @param request DescribeThreatIntelligenceSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeThreatIntelligenceSwitchResponse
 */
DescribeThreatIntelligenceSwitchResponse Client::describeThreatIntelligenceSwitchWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeThreatIntelligenceSwitch"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeThreatIntelligenceSwitchResponse>();
}

/**
 * @summary 查询威胁情报配置的信息
 *
 * @return DescribeThreatIntelligenceSwitchResponse
 */
DescribeThreatIntelligenceSwitchResponse Client::describeThreatIntelligenceSwitch() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeThreatIntelligenceSwitchWithOptions(runtime);
}

/**
 * @summary Queries information about the transit routers that are associated with a virtual private cloud (VPC) firewall created for a transit router.
 *
 * @param tmpReq DescribeTrFirewallPolicyBackUpAssociationListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTrFirewallPolicyBackUpAssociationListResponse
 */
DescribeTrFirewallPolicyBackUpAssociationListResponse Client::describeTrFirewallPolicyBackUpAssociationListWithOptions(const DescribeTrFirewallPolicyBackUpAssociationListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest request = DescribeTrFirewallPolicyBackUpAssociationListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCandidateList()) {
    request.setCandidateListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.candidateList(), "CandidateList", "json"));
  }

  json query = {};
  if (!!request.hasCandidateListShrink()) {
    query["CandidateList"] = request.candidateListShrink();
  }

  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.firewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasTrFirewallRoutePolicyId()) {
    query["TrFirewallRoutePolicyId"] = request.trFirewallRoutePolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTrFirewallPolicyBackUpAssociationList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTrFirewallPolicyBackUpAssociationListResponse>();
}

/**
 * @summary Queries information about the transit routers that are associated with a virtual private cloud (VPC) firewall created for a transit router.
 *
 * @param request DescribeTrFirewallPolicyBackUpAssociationListRequest
 * @return DescribeTrFirewallPolicyBackUpAssociationListResponse
 */
DescribeTrFirewallPolicyBackUpAssociationListResponse Client::describeTrFirewallPolicyBackUpAssociationList(const DescribeTrFirewallPolicyBackUpAssociationListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrFirewallPolicyBackUpAssociationListWithOptions(request, runtime);
}

/**
 * @summary Queries the routing policies of a virtual private cloud (VPC) firewall that is created for a transit router.
 *
 * @param request DescribeTrFirewallV2RoutePolicyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTrFirewallV2RoutePolicyListResponse
 */
DescribeTrFirewallV2RoutePolicyListResponse Client::describeTrFirewallV2RoutePolicyListWithOptions(const DescribeTrFirewallV2RoutePolicyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.firewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTrFirewallV2RoutePolicyList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTrFirewallV2RoutePolicyListResponse>();
}

/**
 * @summary Queries the routing policies of a virtual private cloud (VPC) firewall that is created for a transit router.
 *
 * @param request DescribeTrFirewallV2RoutePolicyListRequest
 * @return DescribeTrFirewallV2RoutePolicyListResponse
 */
DescribeTrFirewallV2RoutePolicyListResponse Client::describeTrFirewallV2RoutePolicyList(const DescribeTrFirewallV2RoutePolicyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrFirewallV2RoutePolicyListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the virtual private cloud (VPC) firewalls that are created for transit routers.
 *
 * @param request DescribeTrFirewallsV2DetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTrFirewallsV2DetailResponse
 */
DescribeTrFirewallsV2DetailResponse Client::describeTrFirewallsV2DetailWithOptions(const DescribeTrFirewallsV2DetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.firewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTrFirewallsV2Detail"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTrFirewallsV2DetailResponse>();
}

/**
 * @summary Queries the details of the virtual private cloud (VPC) firewalls that are created for transit routers.
 *
 * @param request DescribeTrFirewallsV2DetailRequest
 * @return DescribeTrFirewallsV2DetailResponse
 */
DescribeTrFirewallsV2DetailResponse Client::describeTrFirewallsV2Detail(const DescribeTrFirewallsV2DetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrFirewallsV2DetailWithOptions(request, runtime);
}

/**
 * @summary Queries the virtual private cloud (VPC) firewalls that are created for transit routers.
 *
 * @param request DescribeTrFirewallsV2ListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTrFirewallsV2ListResponse
 */
DescribeTrFirewallsV2ListResponse Client::describeTrFirewallsV2ListWithOptions(const DescribeTrFirewallsV2ListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.firewallId();
  }

  if (!!request.hasFirewallName()) {
    query["FirewallName"] = request.firewallName();
  }

  if (!!request.hasFirewallSwitchStatus()) {
    query["FirewallSwitchStatus"] = request.firewallSwitchStatus();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasRouteMode()) {
    query["RouteMode"] = request.routeMode();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.transitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTrFirewallsV2List"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTrFirewallsV2ListResponse>();
}

/**
 * @summary Queries the virtual private cloud (VPC) firewalls that are created for transit routers.
 *
 * @param request DescribeTrFirewallsV2ListRequest
 * @return DescribeTrFirewallsV2ListResponse
 */
DescribeTrFirewallsV2ListResponse Client::describeTrFirewallsV2List(const DescribeTrFirewallsV2ListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrFirewallsV2ListWithOptions(request, runtime);
}

/**
 * @summary Queries the route tables of the VPC firewalls that are created for transit routers.
 *
 * @param request DescribeTrFirewallsV2RouteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTrFirewallsV2RouteListResponse
 */
DescribeTrFirewallsV2RouteListResponse Client::describeTrFirewallsV2RouteListWithOptions(const DescribeTrFirewallsV2RouteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.firewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTrFirewallRoutePolicyId()) {
    query["TrFirewallRoutePolicyId"] = request.trFirewallRoutePolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTrFirewallsV2RouteList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTrFirewallsV2RouteListResponse>();
}

/**
 * @summary Queries the route tables of the VPC firewalls that are created for transit routers.
 *
 * @param request DescribeTrFirewallsV2RouteListRequest
 * @return DescribeTrFirewallsV2RouteListResponse
 */
DescribeTrFirewallsV2RouteListResponse Client::describeTrFirewallsV2RouteList(const DescribeTrFirewallsV2RouteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrFirewallsV2RouteListWithOptions(request, runtime);
}

/**
 * @summary 获取未保护漏洞趋势
 *
 * @param request DescribeUnprotectedVulnTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUnprotectedVulnTrendResponse
 */
DescribeUnprotectedVulnTrendResponse Client::describeUnprotectedVulnTrendWithOptions(const DescribeUnprotectedVulnTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUnprotectedVulnTrend"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUnprotectedVulnTrendResponse>();
}

/**
 * @summary 获取未保护漏洞趋势
 *
 * @param request DescribeUnprotectedVulnTrendRequest
 * @return DescribeUnprotectedVulnTrendResponse
 */
DescribeUnprotectedVulnTrendResponse Client::describeUnprotectedVulnTrend(const DescribeUnprotectedVulnTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUnprotectedVulnTrendWithOptions(request, runtime);
}

/**
 * @summary 获取用户告警配置
 *
 * @param request DescribeUserAlarmConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserAlarmConfigResponse
 */
DescribeUserAlarmConfigResponse Client::describeUserAlarmConfigWithOptions(const DescribeUserAlarmConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserAlarmConfig"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserAlarmConfigResponse>();
}

/**
 * @summary 获取用户告警配置
 *
 * @param request DescribeUserAlarmConfigRequest
 * @return DescribeUserAlarmConfigResponse
 */
DescribeUserAlarmConfigResponse Client::describeUserAlarmConfig(const DescribeUserAlarmConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserAlarmConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the traffic of a specified asset that belongs to your Alibaba Cloud account.
 *
 * @param request DescribeUserAssetIPTrafficInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserAssetIPTrafficInfoResponse
 */
DescribeUserAssetIPTrafficInfoResponse Client::describeUserAssetIPTrafficInfoWithOptions(const DescribeUserAssetIPTrafficInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserAssetIPTrafficInfo"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserAssetIPTrafficInfoResponse>();
}

/**
 * @summary Queries the information about the traffic of a specified asset that belongs to your Alibaba Cloud account.
 *
 * @param request DescribeUserAssetIPTrafficInfoRequest
 * @return DescribeUserAssetIPTrafficInfoResponse
 */
DescribeUserAssetIPTrafficInfoResponse Client::describeUserAssetIPTrafficInfo(const DescribeUserAssetIPTrafficInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserAssetIPTrafficInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the edition information about Cloud Firewall.
 *
 * @description You can call this operation to query the edition information about Cloud Firewall.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeUserBuyVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserBuyVersionResponse
 */
DescribeUserBuyVersionResponse Client::describeUserBuyVersionWithOptions(const DescribeUserBuyVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserBuyVersion"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserBuyVersionResponse>();
}

/**
 * @summary Queries the edition information about Cloud Firewall.
 *
 * @description You can call this operation to query the edition information about Cloud Firewall.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeUserBuyVersionRequest
 * @return DescribeUserBuyVersionResponse
 */
DescribeUserBuyVersionResponse Client::describeUserBuyVersion(const DescribeUserBuyVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserBuyVersionWithOptions(request, runtime);
}

/**
 * @summary 获取用户IPS白名单
 *
 * @param request DescribeUserIPSWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserIPSWhitelistResponse
 */
DescribeUserIPSWhitelistResponse Client::describeUserIPSWhitelistWithOptions(const DescribeUserIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserIPSWhitelist"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserIPSWhitelistResponse>();
}

/**
 * @summary 获取用户IPS白名单
 *
 * @param request DescribeUserIPSWhitelistRequest
 * @return DescribeUserIPSWhitelistResponse
 */
DescribeUserIPSWhitelistResponse Client::describeUserIPSWhitelist(const DescribeUserIPSWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserIPSWhitelistWithOptions(request, runtime);
}

/**
 * @summary 获取VPC防火墙通过详情
 *
 * @param request DescribeVpcFirewallAccessDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallAccessDetailResponse
 */
DescribeVpcFirewallAccessDetailResponse Client::describeVpcFirewallAccessDetailWithOptions(const DescribeVpcFirewallAccessDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetIP()) {
    query["AssetIP"] = request.assetIP();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIPProtocol()) {
    query["IPProtocol"] = request.IPProtocol();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPeerAssetIP()) {
    query["PeerAssetIP"] = request.peerAssetIP();
  }

  if (!!request.hasPeerAssetInstanceId()) {
    query["PeerAssetInstanceId"] = request.peerAssetInstanceId();
  }

  if (!!request.hasPeerAssetInstanceName()) {
    query["PeerAssetInstanceName"] = request.peerAssetInstanceName();
  }

  if (!!request.hasPeerVpcId()) {
    query["PeerVpcId"] = request.peerVpcId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.riskLevel();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallAccessDetail"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallAccessDetailResponse>();
}

/**
 * @summary 获取VPC防火墙通过详情
 *
 * @param request DescribeVpcFirewallAccessDetailRequest
 * @return DescribeVpcFirewallAccessDetailResponse
 */
DescribeVpcFirewallAccessDetailResponse Client::describeVpcFirewallAccessDetail(const DescribeVpcFirewallAccessDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallAccessDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the information about all policy groups of access control policies that are created for virtual private cloud (VPC) firewalls.
 *
 * @description You can call the DescribeVpcFirewallAclGroupList operation to query the information about all policy groups of access control policies that are created for VPC firewalls.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallAclGroupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallAclGroupListResponse
 */
DescribeVpcFirewallAclGroupListResponse Client::describeVpcFirewallAclGroupListWithOptions(const DescribeVpcFirewallAclGroupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasFirewallConfigureStatus()) {
    query["FirewallConfigureStatus"] = request.firewallConfigureStatus();
  }

  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.firewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallAclGroupList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallAclGroupListResponse>();
}

/**
 * @summary Queries the information about all policy groups of access control policies that are created for virtual private cloud (VPC) firewalls.
 *
 * @description You can call the DescribeVpcFirewallAclGroupList operation to query the information about all policy groups of access control policies that are created for VPC firewalls.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallAclGroupListRequest
 * @return DescribeVpcFirewallAclGroupListResponse
 */
DescribeVpcFirewallAclGroupListResponse Client::describeVpcFirewallAclGroupList(const DescribeVpcFirewallAclGroupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallAclGroupListWithOptions(request, runtime);
}

/**
 * @summary Queries the details about a virtual private cloud (VPC) firewall. The VPC firewall protects access traffic between a VPC and a network instance that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @description You can call the DescribeVpcFirewallCenDetail operation to query the details about a VPC firewall. The VPC firewall protects access traffic between a specified VPC and a network instance that is attached to a CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallCenDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallCenDetailResponse
 */
DescribeVpcFirewallCenDetailResponse Client::describeVpcFirewallCenDetailWithOptions(const DescribeVpcFirewallCenDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNetworkInstanceId()) {
    query["NetworkInstanceId"] = request.networkInstanceId();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallCenDetail"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallCenDetailResponse>();
}

/**
 * @summary Queries the details about a virtual private cloud (VPC) firewall. The VPC firewall protects access traffic between a VPC and a network instance that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @description You can call the DescribeVpcFirewallCenDetail operation to query the details about a VPC firewall. The VPC firewall protects access traffic between a specified VPC and a network instance that is attached to a CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallCenDetailRequest
 * @return DescribeVpcFirewallCenDetailResponse
 */
DescribeVpcFirewallCenDetailResponse Client::describeVpcFirewallCenDetail(const DescribeVpcFirewallCenDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallCenDetailWithOptions(request, runtime);
}

/**
 * @summary Queries virtual private cloud (VPC) firewalls. Each VPC firewall protects mutual access traffic between a specified VPC and a network instance that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @description You can call the DescribeVpcFirewallCenList operation to query VPC firewalls. A VPC firewall protects mutual access traffic between a specified VPC and a network instance that is attached to a CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallCenListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallCenListResponse
 */
DescribeVpcFirewallCenListResponse Client::describeVpcFirewallCenListWithOptions(const DescribeVpcFirewallCenListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasFirewallSwitchStatus()) {
    query["FirewallSwitchStatus"] = request.firewallSwitchStatus();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasNetworkInstanceId()) {
    query["NetworkInstanceId"] = request.networkInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasRouteMode()) {
    query["RouteMode"] = request.routeMode();
  }

  if (!!request.hasTransitRouterType()) {
    query["TransitRouterType"] = request.transitRouterType();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  if (!!request.hasVpcFirewallName()) {
    query["VpcFirewallName"] = request.vpcFirewallName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallCenList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallCenListResponse>();
}

/**
 * @summary Queries virtual private cloud (VPC) firewalls. Each VPC firewall protects mutual access traffic between a specified VPC and a network instance that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @description You can call the DescribeVpcFirewallCenList operation to query VPC firewalls. A VPC firewall protects mutual access traffic between a specified VPC and a network instance that is attached to a CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallCenListRequest
 * @return DescribeVpcFirewallCenListResponse
 */
DescribeVpcFirewallCenListResponse Client::describeVpcFirewallCenList(const DescribeVpcFirewallCenListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallCenListWithOptions(request, runtime);
}

/**
 * @summary 获取VPC的CEN列表
 *
 * @param request DescribeVpcFirewallCenSummaryListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallCenSummaryListResponse
 */
DescribeVpcFirewallCenSummaryListResponse Client::describeVpcFirewallCenSummaryListWithOptions(const DescribeVpcFirewallCenSummaryListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTransitRouterType()) {
    query["TransitRouterType"] = request.transitRouterType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallCenSummaryList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallCenSummaryListResponse>();
}

/**
 * @summary 获取VPC的CEN列表
 *
 * @param request DescribeVpcFirewallCenSummaryListRequest
 * @return DescribeVpcFirewallCenSummaryListResponse
 */
DescribeVpcFirewallCenSummaryListResponse Client::describeVpcFirewallCenSummaryList(const DescribeVpcFirewallCenSummaryListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallCenSummaryListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the access control policies for a specified virtual private cloud (VPC) firewall.
 *
 * @description You can call the DescribeVpcFirewallControlPolicy operation to query the information about all access control policies that are created for a specified VPC firewall. Different access control policies are used when a VPC firewall is used to protect traffic between two VPCs that are connected by using a Cloud Enterprise Network (CEN) instance or an Express Connect circuit.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallControlPolicyResponse
 */
DescribeVpcFirewallControlPolicyResponse Client::describeVpcFirewallControlPolicyWithOptions(const DescribeVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.aclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.destination();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.proto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.release();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.repeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallControlPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallControlPolicyResponse>();
}

/**
 * @summary Queries the information about the access control policies for a specified virtual private cloud (VPC) firewall.
 *
 * @description You can call the DescribeVpcFirewallControlPolicy operation to query the information about all access control policies that are created for a specified VPC firewall. Different access control policies are used when a VPC firewall is used to protect traffic between two VPCs that are connected by using a Cloud Enterprise Network (CEN) instance or an Express Connect circuit.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallControlPolicyRequest
 * @return DescribeVpcFirewallControlPolicyResponse
 */
DescribeVpcFirewallControlPolicyResponse Client::describeVpcFirewallControlPolicy(const DescribeVpcFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the intrusion prevention configurations of a virtual private cloud (VPC) firewall.
 *
 * @description You can call the DescribeVpcFirewallDefaultIPSConfig operation to query the intrusion prevention configurations of a VPC firewall.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallDefaultIPSConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallDefaultIPSConfigResponse
 */
DescribeVpcFirewallDefaultIPSConfigResponse Client::describeVpcFirewallDefaultIPSConfigWithOptions(const DescribeVpcFirewallDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallDefaultIPSConfig"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallDefaultIPSConfigResponse>();
}

/**
 * @summary Queries the intrusion prevention configurations of a virtual private cloud (VPC) firewall.
 *
 * @description You can call the DescribeVpcFirewallDefaultIPSConfig operation to query the intrusion prevention configurations of a VPC firewall.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallDefaultIPSConfigRequest
 * @return DescribeVpcFirewallDefaultIPSConfigResponse
 */
DescribeVpcFirewallDefaultIPSConfigResponse Client::describeVpcFirewallDefaultIPSConfig(const DescribeVpcFirewallDefaultIPSConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallDefaultIPSConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the details about a virtual private cloud (VPC) firewall. The VPC firewall controls traffic between two VPCs that are connected by using an Express Connect circuit.
 *
 * @description You can call the DescribeVpcFirewallDetail operation to query the details about a VPC firewall. The VPC firewall controls traffic between two VPCs that are connected by using an Express Connect circuit.  
 * Before you call the operation, make sure that you created a VPC firewall by calling the [CreateVpcFirewallConfigure](https://www.alibabacloud.com/help/en/cloud-firewall/latest/createvpcfirewallconfigure) operation.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallDetailResponse
 */
DescribeVpcFirewallDetailResponse Client::describeVpcFirewallDetailWithOptions(const DescribeVpcFirewallDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLocalVpcId()) {
    query["LocalVpcId"] = request.localVpcId();
  }

  if (!!request.hasPeerVpcId()) {
    query["PeerVpcId"] = request.peerVpcId();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallDetail"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallDetailResponse>();
}

/**
 * @summary Queries the details about a virtual private cloud (VPC) firewall. The VPC firewall controls traffic between two VPCs that are connected by using an Express Connect circuit.
 *
 * @description You can call the DescribeVpcFirewallDetail operation to query the details about a VPC firewall. The VPC firewall controls traffic between two VPCs that are connected by using an Express Connect circuit.  
 * Before you call the operation, make sure that you created a VPC firewall by calling the [CreateVpcFirewallConfigure](https://www.alibabacloud.com/help/en/cloud-firewall/latest/createvpcfirewallconfigure) operation.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallDetailRequest
 * @return DescribeVpcFirewallDetailResponse
 */
DescribeVpcFirewallDetailResponse Client::describeVpcFirewallDetail(const DescribeVpcFirewallDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the IPS whitelist of a virtual private cloud (VPC) firewall.
 *
 * @param request DescribeVpcFirewallIPSWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallIPSWhitelistResponse
 */
DescribeVpcFirewallIPSWhitelistResponse Client::describeVpcFirewallIPSWhitelistWithOptions(const DescribeVpcFirewallIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallIPSWhitelist"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallIPSWhitelistResponse>();
}

/**
 * @summary Queries the IPS whitelist of a virtual private cloud (VPC) firewall.
 *
 * @param request DescribeVpcFirewallIPSWhitelistRequest
 * @return DescribeVpcFirewallIPSWhitelistResponse
 */
DescribeVpcFirewallIPSWhitelistResponse Client::describeVpcFirewallIPSWhitelist(const DescribeVpcFirewallIPSWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallIPSWhitelistWithOptions(request, runtime);
}

/**
 * @summary Queries the details about virtual private cloud (VPC) firewalls by page. Each VPC firewall protects traffic between two VPCs that are connected by using an Express Connect circuit.
 *
 * @description You can call the DescribeVpcFirewallList operation to query the details about VPC firewalls by page. Each VPC firewall protects traffic between two VPCs that are connected by using an Express Connect circuit.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallListResponse
 */
DescribeVpcFirewallListResponse Client::describeVpcFirewallListWithOptions(const DescribeVpcFirewallListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectSubType()) {
    query["ConnectSubType"] = request.connectSubType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasFirewallSwitchStatus()) {
    query["FirewallSwitchStatus"] = request.firewallSwitchStatus();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPeerUid()) {
    query["PeerUid"] = request.peerUid();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  if (!!request.hasVpcFirewallName()) {
    query["VpcFirewallName"] = request.vpcFirewallName();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallListResponse>();
}

/**
 * @summary Queries the details about virtual private cloud (VPC) firewalls by page. Each VPC firewall protects traffic between two VPCs that are connected by using an Express Connect circuit.
 *
 * @description You can call the DescribeVpcFirewallList operation to query the details about VPC firewalls by page. Each VPC firewall protects traffic between two VPCs that are connected by using an Express Connect circuit.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallListRequest
 * @return DescribeVpcFirewallListResponse
 */
DescribeVpcFirewallListResponse Client::describeVpcFirewallList(const DescribeVpcFirewallListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallListWithOptions(request, runtime);
}

/**
 * @summary Queries the priority range of access control policies that are created for a virtual private cloud (VPC) firewall in a specific policy group.
 *
 * @description You can call this operation to query the priority range of access control policies that are created for a VPC firewall in a specific policy group.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallPolicyPriorUsedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallPolicyPriorUsedResponse
 */
DescribeVpcFirewallPolicyPriorUsedResponse Client::describeVpcFirewallPolicyPriorUsedWithOptions(const DescribeVpcFirewallPolicyPriorUsedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallPolicyPriorUsed"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallPolicyPriorUsedResponse>();
}

/**
 * @summary Queries the priority range of access control policies that are created for a virtual private cloud (VPC) firewall in a specific policy group.
 *
 * @description You can call this operation to query the priority range of access control policies that are created for a VPC firewall in a specific policy group.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVpcFirewallPolicyPriorUsedRequest
 * @return DescribeVpcFirewallPolicyPriorUsedResponse
 */
DescribeVpcFirewallPolicyPriorUsedResponse Client::describeVpcFirewallPolicyPriorUsed(const DescribeVpcFirewallPolicyPriorUsedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallPolicyPriorUsedWithOptions(request, runtime);
}

/**
 * @summary 获取VPC防火墙总结信息
 *
 * @param request DescribeVpcFirewallSummaryInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallSummaryInfoResponse
 */
DescribeVpcFirewallSummaryInfoResponse Client::describeVpcFirewallSummaryInfoWithOptions(const DescribeVpcFirewallSummaryInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.userType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallSummaryInfo"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallSummaryInfoResponse>();
}

/**
 * @summary 获取VPC防火墙总结信息
 *
 * @param request DescribeVpcFirewallSummaryInfoRequest
 * @return DescribeVpcFirewallSummaryInfoResponse
 */
DescribeVpcFirewallSummaryInfoResponse Client::describeVpcFirewallSummaryInfo(const DescribeVpcFirewallSummaryInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallSummaryInfoWithOptions(request, runtime);
}

/**
 * @summary Queries virtual private clouds (VPCs).
 *
 * @param request DescribeVpcListLiteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcListLiteResponse
 */
DescribeVpcListLiteResponse Client::describeVpcListLiteWithOptions(const DescribeVpcListLiteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasVpcName()) {
    query["VpcName"] = request.vpcName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcListLite"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcListLiteResponse>();
}

/**
 * @summary Queries virtual private clouds (VPCs).
 *
 * @param request DescribeVpcListLiteRequest
 * @return DescribeVpcListLiteResponse
 */
DescribeVpcListLiteResponse Client::describeVpcListLite(const DescribeVpcListLiteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcListLiteWithOptions(request, runtime);
}

/**
 * @summary Queries virtual private cloud (VPC) zones.
 *
 * @param request DescribeVpcZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcZoneResponse
 */
DescribeVpcZoneResponse Client::describeVpcZoneWithOptions(const DescribeVpcZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironment()) {
    query["Environment"] = request.environment();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcZone"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcZoneResponse>();
}

/**
 * @summary Queries virtual private cloud (VPC) zones.
 *
 * @param request DescribeVpcZoneRequest
 * @return DescribeVpcZoneResponse
 */
DescribeVpcZoneResponse Client::describeVpcZone(const DescribeVpcZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcZoneWithOptions(request, runtime);
}

/**
 * @summary Queries the vulnerabilities that are supported by Cloud Firewall.
 *
 * @param request DescribeVulnerabilityProtectedListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVulnerabilityProtectedListResponse
 */
DescribeVulnerabilityProtectedListResponse Client::describeVulnerabilityProtectedListWithOptions(const DescribeVulnerabilityProtectedListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttackType()) {
    query["AttackType"] = request.attackType();
  }

  if (!!request.hasBuyVersion()) {
    query["BuyVersion"] = request.buyVersion();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRuleTag()) {
    query["RuleTag"] = request.ruleTag();
  }

  if (!!request.hasSortKey()) {
    query["SortKey"] = request.sortKey();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.userType();
  }

  if (!!request.hasVulnCveName()) {
    query["VulnCveName"] = request.vulnCveName();
  }

  if (!!request.hasVulnLevel()) {
    query["VulnLevel"] = request.vulnLevel();
  }

  if (!!request.hasVulnResource()) {
    query["VulnResource"] = request.vulnResource();
  }

  if (!!request.hasVulnStatus()) {
    query["VulnStatus"] = request.vulnStatus();
  }

  if (!!request.hasVulnType()) {
    query["VulnType"] = request.vulnType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVulnerabilityProtectedList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVulnerabilityProtectedListResponse>();
}

/**
 * @summary Queries the vulnerabilities that are supported by Cloud Firewall.
 *
 * @param request DescribeVulnerabilityProtectedListRequest
 * @return DescribeVulnerabilityProtectedListResponse
 */
DescribeVulnerabilityProtectedListResponse Client::describeVulnerabilityProtectedList(const DescribeVulnerabilityProtectedListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVulnerabilityProtectedListWithOptions(request, runtime);
}

/**
 * @summary 开启资产数据泄露保护
 *
 * @param request EnableSdlProtectedAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSdlProtectedAssetResponse
 */
EnableSdlProtectedAssetResponse Client::enableSdlProtectedAssetWithOptions(const EnableSdlProtectedAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpList()) {
    query["IpList"] = request.ipList();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableSdlProtectedAsset"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableSdlProtectedAssetResponse>();
}

/**
 * @summary 开启资产数据泄露保护
 *
 * @param request EnableSdlProtectedAssetRequest
 * @return EnableSdlProtectedAssetResponse
 */
EnableSdlProtectedAssetResponse Client::enableSdlProtectedAsset(const EnableSdlProtectedAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSdlProtectedAssetWithOptions(request, runtime);
}

/**
 * @summary 下载TLS证书
 *
 * @param request GetTlsInspectCertificateDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTlsInspectCertificateDownloadUrlResponse
 */
GetTlsInspectCertificateDownloadUrlResponse Client::getTlsInspectCertificateDownloadUrlWithOptions(const GetTlsInspectCertificateDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaCertId()) {
    query["CaCertId"] = request.caCertId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTlsInspectCertificateDownloadUrl"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTlsInspectCertificateDownloadUrlResponse>();
}

/**
 * @summary 下载TLS证书
 *
 * @param request GetTlsInspectCertificateDownloadUrlRequest
 * @return GetTlsInspectCertificateDownloadUrlResponse
 */
GetTlsInspectCertificateDownloadUrlResponse Client::getTlsInspectCertificateDownloadUrl(const GetTlsInspectCertificateDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTlsInspectCertificateDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary 查询TLS检查证书
 *
 * @param request ListTlsInspectCACertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTlsInspectCACertificatesResponse
 */
ListTlsInspectCACertificatesResponse Client::listTlsInspectCACertificatesWithOptions(const ListTlsInspectCACertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaCertId()) {
    query["CaCertId"] = request.caCertId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTlsInspectCACertificates"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTlsInspectCACertificatesResponse>();
}

/**
 * @summary 查询TLS检查证书
 *
 * @param request ListTlsInspectCACertificatesRequest
 * @return ListTlsInspectCACertificatesResponse
 */
ListTlsInspectCACertificatesResponse Client::listTlsInspectCACertificates(const ListTlsInspectCACertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTlsInspectCACertificatesWithOptions(request, runtime);
}

/**
 * @summary Modifies the address book that is specified in an access control policy.
 *
 * @description You can call the ModifyAddressBook operation to modify the address book that is configured for access control.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyAddressBookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAddressBookResponse
 */
ModifyAddressBookResponse Client::modifyAddressBookWithOptions(const ModifyAddressBookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAckLabels()) {
    query["AckLabels"] = request.ackLabels();
  }

  if (!!request.hasAckNamespaces()) {
    query["AckNamespaces"] = request.ackNamespaces();
  }

  if (!!request.hasAddressList()) {
    query["AddressList"] = request.addressList();
  }

  if (!!request.hasAutoAddTagEcs()) {
    query["AutoAddTagEcs"] = request.autoAddTagEcs();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasGroupUuid()) {
    query["GroupUuid"] = request.groupUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.modifyMode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasTagList()) {
    query["TagList"] = request.tagList();
  }

  if (!!request.hasTagRelation()) {
    query["TagRelation"] = request.tagRelation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAddressBook"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAddressBookResponse>();
}

/**
 * @summary Modifies the address book that is specified in an access control policy.
 *
 * @description You can call the ModifyAddressBook operation to modify the address book that is configured for access control.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyAddressBookRequest
 * @return ModifyAddressBookResponse
 */
ModifyAddressBookResponse Client::modifyAddressBook(const ModifyAddressBookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAddressBookWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of an access control policy.
 *
 * @description You can call this operation to modify the configurations of an access control policy. The policy allows Cloud Firewall to allow, deny, or monitor the traffic that passes through Cloud Firewall.
 * ## [](#qps)Limit
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyControlPolicyResponse
 */
ModifyControlPolicyResponse Client::modifyControlPolicyWithOptions(const ModifyControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.aclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasApplicationNameList()) {
    query["ApplicationNameList"] = request.applicationNameList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestPort()) {
    query["DestPort"] = request.destPort();
  }

  if (!!request.hasDestPortGroup()) {
    query["DestPortGroup"] = request.destPortGroup();
  }

  if (!!request.hasDestPortType()) {
    query["DestPortType"] = request.destPortType();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.destination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.destinationType();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasDomainResolveType()) {
    query["DomainResolveType"] = request.domainResolveType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.proto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.release();
  }

  if (!!request.hasRepeatDays()) {
    query["RepeatDays"] = request.repeatDays();
  }

  if (!!request.hasRepeatEndTime()) {
    query["RepeatEndTime"] = request.repeatEndTime();
  }

  if (!!request.hasRepeatStartTime()) {
    query["RepeatStartTime"] = request.repeatStartTime();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.repeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyControlPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyControlPolicyResponse>();
}

/**
 * @summary Modifies the configurations of an access control policy.
 *
 * @description You can call this operation to modify the configurations of an access control policy. The policy allows Cloud Firewall to allow, deny, or monitor the traffic that passes through Cloud Firewall.
 * ## [](#qps)Limit
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyControlPolicyRequest
 * @return ModifyControlPolicyResponse
 */
ModifyControlPolicyResponse Client::modifyControlPolicy(const ModifyControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the priority of an IPv4 access control policy for the Internet firewall. An IPv4 access control policy refers to a policy whose source IP address and destination IP address are IPv4 addresses.
 *
 * @description You can use this operation to modify the priority of an IPv4 access control policy for the Internet firewall. No API operations are provided for you to modify the priority of an IPv6 access control policy for the Internet firewall.
 * ## [](#qps)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyControlPolicyPositionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyControlPolicyPositionResponse
 */
ModifyControlPolicyPositionResponse Client::modifyControlPolicyPositionWithOptions(const ModifyControlPolicyPositionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNewOrder()) {
    query["NewOrder"] = request.newOrder();
  }

  if (!!request.hasOldOrder()) {
    query["OldOrder"] = request.oldOrder();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyControlPolicyPosition"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyControlPolicyPositionResponse>();
}

/**
 * @summary Modifies the priority of an IPv4 access control policy for the Internet firewall. An IPv4 access control policy refers to a policy whose source IP address and destination IP address are IPv4 addresses.
 *
 * @description You can use this operation to modify the priority of an IPv4 access control policy for the Internet firewall. No API operations are provided for you to modify the priority of an IPv6 access control policy for the Internet firewall.
 * ## [](#qps)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyControlPolicyPositionRequest
 * @return ModifyControlPolicyPositionResponse
 */
ModifyControlPolicyPositionResponse Client::modifyControlPolicyPosition(const ModifyControlPolicyPositionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyControlPolicyPositionWithOptions(request, runtime);
}

/**
 * @summary Modifies the priority of an access control policy.
 *
 * @param request ModifyControlPolicyPriorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyControlPolicyPriorityResponse
 */
ModifyControlPolicyPriorityResponse Client::modifyControlPolicyPriorityWithOptions(const ModifyControlPolicyPriorityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyControlPolicyPriority"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyControlPolicyPriorityResponse>();
}

/**
 * @summary Modifies the priority of an access control policy.
 *
 * @param request ModifyControlPolicyPriorityRequest
 * @return ModifyControlPolicyPriorityResponse
 */
ModifyControlPolicyPriorityResponse Client::modifyControlPolicyPriority(const ModifyControlPolicyPriorityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyControlPolicyPriorityWithOptions(request, runtime);
}

/**
 * @summary Modifies the default configuration of the intrusion prevention system (IPS).
 *
 * @param request ModifyDefaultIPSConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefaultIPSConfigResponse
 */
ModifyDefaultIPSConfigResponse Client::modifyDefaultIPSConfigWithOptions(const ModifyDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBasicRules()) {
    query["BasicRules"] = request.basicRules();
  }

  if (!!request.hasCtiRules()) {
    query["CtiRules"] = request.ctiRules();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMaxSdl()) {
    query["MaxSdl"] = request.maxSdl();
  }

  if (!!request.hasPatchRules()) {
    query["PatchRules"] = request.patchRules();
  }

  if (!!request.hasRuleClass()) {
    query["RuleClass"] = request.ruleClass();
  }

  if (!!request.hasRunMode()) {
    query["RunMode"] = request.runMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDefaultIPSConfig"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDefaultIPSConfigResponse>();
}

/**
 * @summary Modifies the default configuration of the intrusion prevention system (IPS).
 *
 * @param request ModifyDefaultIPSConfigRequest
 * @return ModifyDefaultIPSConfigResponse
 */
ModifyDefaultIPSConfigResponse Client::modifyDefaultIPSConfig(const ModifyDefaultIPSConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefaultIPSConfigWithOptions(request, runtime);
}

/**
 * @summary 修改DNS防火墙规则
 *
 * @param request ModifyDnsFirewallPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDnsFirewallPolicyResponse
 */
ModifyDnsFirewallPolicyResponse Client::modifyDnsFirewallPolicyWithOptions(const ModifyDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.aclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.destination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.destinationType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.release();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDnsFirewallPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDnsFirewallPolicyResponse>();
}

/**
 * @summary 修改DNS防火墙规则
 *
 * @param request ModifyDnsFirewallPolicyRequest
 * @return ModifyDnsFirewallPolicyResponse
 */
ModifyDnsFirewallPolicyResponse Client::modifyDnsFirewallPolicy(const ModifyDnsFirewallPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDnsFirewallPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the status of a routing policy.
 *
 * @param request ModifyFirewallV2RoutePolicySwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFirewallV2RoutePolicySwitchResponse
 */
ModifyFirewallV2RoutePolicySwitchResponse Client::modifyFirewallV2RoutePolicySwitchWithOptions(const ModifyFirewallV2RoutePolicySwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.firewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasShouldRecover()) {
    query["ShouldRecover"] = request.shouldRecover();
  }

  if (!!request.hasTrFirewallRoutePolicyId()) {
    query["TrFirewallRoutePolicyId"] = request.trFirewallRoutePolicyId();
  }

  if (!!request.hasTrFirewallRoutePolicySwitchStatus()) {
    query["TrFirewallRoutePolicySwitchStatus"] = request.trFirewallRoutePolicySwitchStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyFirewallV2RoutePolicySwitch"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFirewallV2RoutePolicySwitchResponse>();
}

/**
 * @summary Modifies the status of a routing policy.
 *
 * @param request ModifyFirewallV2RoutePolicySwitchRequest
 * @return ModifyFirewallV2RoutePolicySwitchResponse
 */
ModifyFirewallV2RoutePolicySwitchResponse Client::modifyFirewallV2RoutePolicySwitch(const ModifyFirewallV2RoutePolicySwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFirewallV2RoutePolicySwitchWithOptions(request, runtime);
}

/**
 * @summary Updates the information about members in Cloud Firewall.
 *
 * @description You can call the ModifyInstanceMemberAttributes operation to update the information about members in Cloud Firewall.  
 * ## Limits
 * You can call this operation up to 10 times per second for each account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyInstanceMemberAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceMemberAttributesResponse
 */
ModifyInstanceMemberAttributesResponse Client::modifyInstanceMemberAttributesWithOptions(const ModifyInstanceMemberAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMembers()) {
    query["Members"] = request.members();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceMemberAttributes"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceMemberAttributesResponse>();
}

/**
 * @summary Updates the information about members in Cloud Firewall.
 *
 * @description You can call the ModifyInstanceMemberAttributes operation to update the information about members in Cloud Firewall.  
 * ## Limits
 * You can call this operation up to 10 times per second for each account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyInstanceMemberAttributesRequest
 * @return ModifyInstanceMemberAttributesResponse
 */
ModifyInstanceMemberAttributesResponse Client::modifyInstanceMemberAttributes(const ModifyInstanceMemberAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceMemberAttributesWithOptions(request, runtime);
}

/**
 * @summary 修改IPS规则为默认
 *
 * @param request ModifyIpsRulesToDefaultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyIpsRulesToDefaultResponse
 */
ModifyIpsRulesToDefaultResponse Client::modifyIpsRulesToDefaultWithOptions(const ModifyIpsRulesToDefaultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttackApp()) {
    query["AttackApp"] = request.attackApp();
  }

  if (!!request.hasFirewallType()) {
    query["FirewallType"] = request.firewallType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.ruleType();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.rules();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyIpsRulesToDefault"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyIpsRulesToDefaultResponse>();
}

/**
 * @summary 修改IPS规则为默认
 *
 * @param request ModifyIpsRulesToDefaultRequest
 * @return ModifyIpsRulesToDefaultResponse
 */
ModifyIpsRulesToDefaultResponse Client::modifyIpsRulesToDefault(const ModifyIpsRulesToDefaultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyIpsRulesToDefaultWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of an access control policy that is created for a NAT firewall.
 *
 * @description You can use this operation to modify the configurations of an access control policy. The policy is used to allow, deny, or monitor traffic that reaches a NAT firewall.
 *
 * @param request ModifyNatFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNatFirewallControlPolicyResponse
 */
ModifyNatFirewallControlPolicyResponse Client::modifyNatFirewallControlPolicyWithOptions(const ModifyNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.aclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasApplicationNameList()) {
    query["ApplicationNameList"] = request.applicationNameList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestPort()) {
    query["DestPort"] = request.destPort();
  }

  if (!!request.hasDestPortGroup()) {
    query["DestPortGroup"] = request.destPortGroup();
  }

  if (!!request.hasDestPortType()) {
    query["DestPortType"] = request.destPortType();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.destination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.destinationType();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasDomainResolveType()) {
    query["DomainResolveType"] = request.domainResolveType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.natGatewayId();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.proto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.release();
  }

  if (!!request.hasRepeatDays()) {
    query["RepeatDays"] = request.repeatDays();
  }

  if (!!request.hasRepeatEndTime()) {
    query["RepeatEndTime"] = request.repeatEndTime();
  }

  if (!!request.hasRepeatStartTime()) {
    query["RepeatStartTime"] = request.repeatStartTime();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.repeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyNatFirewallControlPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNatFirewallControlPolicyResponse>();
}

/**
 * @summary Modifies the configurations of an access control policy that is created for a NAT firewall.
 *
 * @description You can use this operation to modify the configurations of an access control policy. The policy is used to allow, deny, or monitor traffic that reaches a NAT firewall.
 *
 * @param request ModifyNatFirewallControlPolicyRequest
 * @return ModifyNatFirewallControlPolicyResponse
 */
ModifyNatFirewallControlPolicyResponse Client::modifyNatFirewallControlPolicy(const ModifyNatFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNatFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the priority of an access control policy that is created for a NAT firewall.
 *
 * @param request ModifyNatFirewallControlPolicyPositionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNatFirewallControlPolicyPositionResponse
 */
ModifyNatFirewallControlPolicyPositionResponse Client::modifyNatFirewallControlPolicyPositionWithOptions(const ModifyNatFirewallControlPolicyPositionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.natGatewayId();
  }

  if (!!request.hasNewOrder()) {
    query["NewOrder"] = request.newOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyNatFirewallControlPolicyPosition"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyNatFirewallControlPolicyPositionResponse>();
}

/**
 * @summary Modifies the priority of an access control policy that is created for a NAT firewall.
 *
 * @param request ModifyNatFirewallControlPolicyPositionRequest
 * @return ModifyNatFirewallControlPolicyPositionResponse
 */
ModifyNatFirewallControlPolicyPositionResponse Client::modifyNatFirewallControlPolicyPosition(const ModifyNatFirewallControlPolicyPositionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNatFirewallControlPolicyPositionWithOptions(request, runtime);
}

/**
 * @summary Modifies information about an operation on an object group.
 *
 * @param request ModifyObjectGroupOperationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyObjectGroupOperationResponse
 */
ModifyObjectGroupOperationResponse Client::modifyObjectGroupOperationWithOptions(const ModifyObjectGroupOperationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasObjectList()) {
    query["ObjectList"] = request.objectList();
  }

  if (!!request.hasObjectOperation()) {
    query["ObjectOperation"] = request.objectOperation();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.objectType();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyObjectGroupOperation"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyObjectGroupOperationResponse>();
}

/**
 * @summary Modifies information about an operation on an object group.
 *
 * @param request ModifyObjectGroupOperationRequest
 * @return ModifyObjectGroupOperationResponse
 */
ModifyObjectGroupOperationResponse Client::modifyObjectGroupOperation(const ModifyObjectGroupOperationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyObjectGroupOperationWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the strict mode for an access control policy.
 *
 * @description You can call the ModifyPolicyAdvancedConfig operation to enable or disable the strict mode for an access control policy.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyPolicyAdvancedConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPolicyAdvancedConfigResponse
 */
ModifyPolicyAdvancedConfigResponse Client::modifyPolicyAdvancedConfigWithOptions(const ModifyPolicyAdvancedConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEips()) {
    query["Eips"] = request.eips();
  }

  if (!!request.hasInternetSwitch()) {
    query["InternetSwitch"] = request.internetSwitch();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPolicyAdvancedConfig"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPolicyAdvancedConfigResponse>();
}

/**
 * @summary Enables or disables the strict mode for an access control policy.
 *
 * @description You can call the ModifyPolicyAdvancedConfig operation to enable or disable the strict mode for an access control policy.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyPolicyAdvancedConfigRequest
 * @return ModifyPolicyAdvancedConfigResponse
 */
ModifyPolicyAdvancedConfigResponse Client::modifyPolicyAdvancedConfig(const ModifyPolicyAdvancedConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPolicyAdvancedConfigWithOptions(request, runtime);
}

/**
 * @summary 修改私网DNS终端节点
 *
 * @param request ModifyPrivateDnsEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPrivateDnsEndpointResponse
 */
ModifyPrivateDnsEndpointResponse Client::modifyPrivateDnsEndpointWithOptions(const ModifyPrivateDnsEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessInstanceId()) {
    query["AccessInstanceId"] = request.accessInstanceId();
  }

  if (!!request.hasAccessInstanceName()) {
    query["AccessInstanceName"] = request.accessInstanceName();
  }

  if (!!request.hasPrimaryDns()) {
    query["PrimaryDns"] = request.primaryDns();
  }

  if (!!request.hasPrivateDnsType()) {
    query["PrivateDnsType"] = request.privateDnsType();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasStandbyDns()) {
    query["StandbyDns"] = request.standbyDns();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPrivateDnsEndpoint"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPrivateDnsEndpointResponse>();
}

/**
 * @summary 修改私网DNS终端节点
 *
 * @param request ModifyPrivateDnsEndpointRequest
 * @return ModifyPrivateDnsEndpointResponse
 */
ModifyPrivateDnsEndpointResponse Client::modifyPrivateDnsEndpoint(const ModifyPrivateDnsEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPrivateDnsEndpointWithOptions(request, runtime);
}

/**
 * @summary 修改敏感数据开关
 *
 * @param request ModifySensitiveSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySensitiveSwitchResponse
 */
ModifySensitiveSwitchResponse Client::modifySensitiveSwitchWithOptions(const ModifySensitiveSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSensitiveCategory()) {
    query["SensitiveCategory"] = request.sensitiveCategory();
  }

  if (!!request.hasSwitchStatus()) {
    query["SwitchStatus"] = request.switchStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySensitiveSwitch"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySensitiveSwitchResponse>();
}

/**
 * @summary 修改敏感数据开关
 *
 * @param request ModifySensitiveSwitchRequest
 * @return ModifySensitiveSwitchResponse
 */
ModifySensitiveSwitchResponse Client::modifySensitiveSwitch(const ModifySensitiveSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySensitiveSwitchWithOptions(request, runtime);
}

/**
 * @summary 修改SLS投递
 *
 * @param request ModifySlsDispatchStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySlsDispatchStatusResponse
 */
ModifySlsDispatchStatusResponse Client::modifySlsDispatchStatusWithOptions(const ModifySlsDispatchStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDispatchValue()) {
    query["DispatchValue"] = request.dispatchValue();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.enableStatus();
  }

  if (!!request.hasFilterKeys()) {
    query["FilterKeys"] = request.filterKeys();
  }

  if (!!request.hasNewRegionId()) {
    query["NewRegionId"] = request.newRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySlsDispatchStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySlsDispatchStatusResponse>();
}

/**
 * @summary 修改SLS投递
 *
 * @param request ModifySlsDispatchStatusRequest
 * @return ModifySlsDispatchStatusResponse
 */
ModifySlsDispatchStatusResponse Client::modifySlsDispatchStatus(const ModifySlsDispatchStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySlsDispatchStatusWithOptions(request, runtime);
}

/**
 * @summary 修改威胁情报配置的信息
 *
 * @param request ModifyThreatIntelligenceSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyThreatIntelligenceSwitchResponse
 */
ModifyThreatIntelligenceSwitchResponse Client::modifyThreatIntelligenceSwitchWithOptions(const ModifyThreatIntelligenceSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryList()) {
    query["CategoryList"] = request.categoryList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyThreatIntelligenceSwitch"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyThreatIntelligenceSwitchResponse>();
}

/**
 * @summary 修改威胁情报配置的信息
 *
 * @param request ModifyThreatIntelligenceSwitchRequest
 * @return ModifyThreatIntelligenceSwitchResponse
 */
ModifyThreatIntelligenceSwitchResponse Client::modifyThreatIntelligenceSwitch(const ModifyThreatIntelligenceSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyThreatIntelligenceSwitchWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a virtual private cloud (VPC) firewall that is created for a transit router.
 *
 * @param request ModifyTrFirewallV2ConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTrFirewallV2ConfigurationResponse
 */
ModifyTrFirewallV2ConfigurationResponse Client::modifyTrFirewallV2ConfigurationWithOptions(const ModifyTrFirewallV2ConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.firewallId();
  }

  if (!!request.hasFirewallName()) {
    query["FirewallName"] = request.firewallName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTrFirewallV2Configuration"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTrFirewallV2ConfigurationResponse>();
}

/**
 * @summary Modifies the configuration of a virtual private cloud (VPC) firewall that is created for a transit router.
 *
 * @param request ModifyTrFirewallV2ConfigurationRequest
 * @return ModifyTrFirewallV2ConfigurationResponse
 */
ModifyTrFirewallV2ConfigurationResponse Client::modifyTrFirewallV2Configuration(const ModifyTrFirewallV2ConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTrFirewallV2ConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modifies the effective scope of the routing policy created for the VPC firewall for a transit router.
 *
 * @param tmpReq ModifyTrFirewallV2RoutePolicyScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTrFirewallV2RoutePolicyScopeResponse
 */
ModifyTrFirewallV2RoutePolicyScopeResponse Client::modifyTrFirewallV2RoutePolicyScopeWithOptions(const ModifyTrFirewallV2RoutePolicyScopeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyTrFirewallV2RoutePolicyScopeShrinkRequest request = ModifyTrFirewallV2RoutePolicyScopeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDestCandidateList()) {
    request.setDestCandidateListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.destCandidateList(), "DestCandidateList", "json"));
  }

  if (!!tmpReq.hasSrcCandidateList()) {
    request.setSrcCandidateListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.srcCandidateList(), "SrcCandidateList", "json"));
  }

  json query = {};
  if (!!request.hasDestCandidateListShrink()) {
    query["DestCandidateList"] = request.destCandidateListShrink();
  }

  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.firewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasShouldRecover()) {
    query["ShouldRecover"] = request.shouldRecover();
  }

  if (!!request.hasSrcCandidateListShrink()) {
    query["SrcCandidateList"] = request.srcCandidateListShrink();
  }

  if (!!request.hasTrFirewallRoutePolicyId()) {
    query["TrFirewallRoutePolicyId"] = request.trFirewallRoutePolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTrFirewallV2RoutePolicyScope"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTrFirewallV2RoutePolicyScopeResponse>();
}

/**
 * @summary Modifies the effective scope of the routing policy created for the VPC firewall for a transit router.
 *
 * @param request ModifyTrFirewallV2RoutePolicyScopeRequest
 * @return ModifyTrFirewallV2RoutePolicyScopeResponse
 */
ModifyTrFirewallV2RoutePolicyScopeResponse Client::modifyTrFirewallV2RoutePolicyScope(const ModifyTrFirewallV2RoutePolicyScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTrFirewallV2RoutePolicyScopeWithOptions(request, runtime);
}

/**
 * @summary 修改用户IPS白名单
 *
 * @param request ModifyUserIPSWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserIPSWhitelistResponse
 */
ModifyUserIPSWhitelistResponse Client::modifyUserIPSWhitelistWithOptions(const ModifyUserIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.ipVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasListType()) {
    query["ListType"] = request.listType();
  }

  if (!!request.hasListValue()) {
    query["ListValue"] = request.listValue();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasWhiteType()) {
    query["WhiteType"] = request.whiteType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUserIPSWhitelist"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserIPSWhitelistResponse>();
}

/**
 * @summary 修改用户IPS白名单
 *
 * @param request ModifyUserIPSWhitelistRequest
 * @return ModifyUserIPSWhitelistResponse
 */
ModifyUserIPSWhitelistResponse Client::modifyUserIPSWhitelist(const ModifyUserIPSWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserIPSWhitelistWithOptions(request, runtime);
}

/**
 * @summary 修改用户日志存储时间
 *
 * @param request ModifyUserSlsLogStorageTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserSlsLogStorageTimeResponse
 */
ModifyUserSlsLogStorageTimeResponse Client::modifyUserSlsLogStorageTimeWithOptions(const ModifyUserSlsLogStorageTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasStorageTime()) {
    query["StorageTime"] = request.storageTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUserSlsLogStorageTime"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserSlsLogStorageTimeResponse>();
}

/**
 * @summary 修改用户日志存储时间
 *
 * @param request ModifyUserSlsLogStorageTimeRequest
 * @return ModifyUserSlsLogStorageTimeResponse
 */
ModifyUserSlsLogStorageTimeResponse Client::modifyUserSlsLogStorageTime(const ModifyUserSlsLogStorageTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserSlsLogStorageTimeWithOptions(request, runtime);
}

/**
 * @summary 修改VPC防火墙ACL引擎模式
 *
 * @param request ModifyVpcFirewallAclEngineModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallAclEngineModeResponse
 */
ModifyVpcFirewallAclEngineModeResponse Client::modifyVpcFirewallAclEngineModeWithOptions(const ModifyVpcFirewallAclEngineModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasStrictMode()) {
    query["StrictMode"] = request.strictMode();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyVpcFirewallAclEngineMode"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyVpcFirewallAclEngineModeResponse>();
}

/**
 * @summary 修改VPC防火墙ACL引擎模式
 *
 * @param request ModifyVpcFirewallAclEngineModeRequest
 * @return ModifyVpcFirewallAclEngineModeResponse
 */
ModifyVpcFirewallAclEngineModeResponse Client::modifyVpcFirewallAclEngineMode(const ModifyVpcFirewallAclEngineModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallAclEngineModeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a virtual private cloud (VPC) firewall. The VPC firewall protects mutual access traffic between a VPC and a specified network instance that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @description You can call the ModifyVpcFirewallCenConfigure operation to modify the configurations of a VPC firewall. The VPC firewall protects mutual access traffic between a VPC and a specified network instance that is attached to a CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance. Before you call this operation, make sure that you have created a VPC firewall by calling the [CreateVpcFirewallCenConfigure](https://help.aliyun.com/document_detail/345772.html) operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyVpcFirewallCenConfigureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallCenConfigureResponse
 */
ModifyVpcFirewallCenConfigureResponse Client::modifyVpcFirewallCenConfigureWithOptions(const ModifyVpcFirewallCenConfigureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  if (!!request.hasVpcFirewallName()) {
    query["VpcFirewallName"] = request.vpcFirewallName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyVpcFirewallCenConfigure"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyVpcFirewallCenConfigureResponse>();
}

/**
 * @summary Modifies the configurations of a virtual private cloud (VPC) firewall. The VPC firewall protects mutual access traffic between a VPC and a specified network instance that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @description You can call the ModifyVpcFirewallCenConfigure operation to modify the configurations of a VPC firewall. The VPC firewall protects mutual access traffic between a VPC and a specified network instance that is attached to a CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance. Before you call this operation, make sure that you have created a VPC firewall by calling the [CreateVpcFirewallCenConfigure](https://help.aliyun.com/document_detail/345772.html) operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyVpcFirewallCenConfigureRequest
 * @return ModifyVpcFirewallCenConfigureResponse
 */
ModifyVpcFirewallCenConfigureResponse Client::modifyVpcFirewallCenConfigure(const ModifyVpcFirewallCenConfigureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallCenConfigureWithOptions(request, runtime);
}

/**
 * @summary Enables or disables a virtual private cloud (VPC) firewall. The VPC firewall protects mutual access traffic between a VPC and a specified network instance that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @description You can call the ModifyVpcFirewallCenSwitchStatus operation to enable or disable a VPC firewall. A VPC firewall protects mutual access traffic between a specified VPC and a network instance that is attached to a CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance. After you enable the VPC firewall, the VPC firewall protects mutual access traffic between a VPC and a specified network instance that is attached to a CEN instance. After you disable the VPC firewall, the VPC firewall no longer protects mutual access traffic between a VPC and a specified network instance that is attached to a CEN instance.
 * Before you call this operation, make sure that you have created a VPC firewall by calling the [CreateVpcFirewallCenConfigure](https://help.aliyun.com/document_detail/345772.html) operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyVpcFirewallCenSwitchStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallCenSwitchStatusResponse
 */
ModifyVpcFirewallCenSwitchStatusResponse Client::modifyVpcFirewallCenSwitchStatusWithOptions(const ModifyVpcFirewallCenSwitchStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallSwitch()) {
    query["FirewallSwitch"] = request.firewallSwitch();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyVpcFirewallCenSwitchStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyVpcFirewallCenSwitchStatusResponse>();
}

/**
 * @summary Enables or disables a virtual private cloud (VPC) firewall. The VPC firewall protects mutual access traffic between a VPC and a specified network instance that is attached to a Cloud Enterprise Network (CEN) instance.
 *
 * @description You can call the ModifyVpcFirewallCenSwitchStatus operation to enable or disable a VPC firewall. A VPC firewall protects mutual access traffic between a specified VPC and a network instance that is attached to a CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance. After you enable the VPC firewall, the VPC firewall protects mutual access traffic between a VPC and a specified network instance that is attached to a CEN instance. After you disable the VPC firewall, the VPC firewall no longer protects mutual access traffic between a VPC and a specified network instance that is attached to a CEN instance.
 * Before you call this operation, make sure that you have created a VPC firewall by calling the [CreateVpcFirewallCenConfigure](https://help.aliyun.com/document_detail/345772.html) operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyVpcFirewallCenSwitchStatusRequest
 * @return ModifyVpcFirewallCenSwitchStatusResponse
 */
ModifyVpcFirewallCenSwitchStatusResponse Client::modifyVpcFirewallCenSwitchStatus(const ModifyVpcFirewallCenSwitchStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallCenSwitchStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a virtual private cloud (VPC) firewall. The VPC firewall controls traffic between two VPCs that are connected by using an Express Connect circuit.
 *
 * @description You can call the ModifyVpcFirewallConfigure operation to modify the configurations of a VPC firewall. The VPC firewall controls traffic between two VPCs that are connected by using an Express Connect circuit. Before you call the operation, make sure that you created a VPC firewall by calling the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyVpcFirewallConfigureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallConfigureResponse
 */
ModifyVpcFirewallConfigureResponse Client::modifyVpcFirewallConfigureWithOptions(const ModifyVpcFirewallConfigureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLocalVpcCidrTableList()) {
    query["LocalVpcCidrTableList"] = request.localVpcCidrTableList();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasPeerVpcCidrTableList()) {
    query["PeerVpcCidrTableList"] = request.peerVpcCidrTableList();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  if (!!request.hasVpcFirewallName()) {
    query["VpcFirewallName"] = request.vpcFirewallName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyVpcFirewallConfigure"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyVpcFirewallConfigureResponse>();
}

/**
 * @summary Modifies the configurations of a virtual private cloud (VPC) firewall. The VPC firewall controls traffic between two VPCs that are connected by using an Express Connect circuit.
 *
 * @description You can call the ModifyVpcFirewallConfigure operation to modify the configurations of a VPC firewall. The VPC firewall controls traffic between two VPCs that are connected by using an Express Connect circuit. Before you call the operation, make sure that you created a VPC firewall by calling the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyVpcFirewallConfigureRequest
 * @return ModifyVpcFirewallConfigureResponse
 */
ModifyVpcFirewallConfigureResponse Client::modifyVpcFirewallConfigure(const ModifyVpcFirewallConfigureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallConfigureWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of an access control policy that is created for a virtual private cloud (VPC) firewall in a specified policy group.
 *
 * @description You can call the ModifyVpcFirewallControlPolicy operation to modify the configurations of an access control policy that is created for a VPC firewall in a specified policy group. Different access control policies are used for the VPC firewalls that are used to protect each Cloud Enterprise Network (CEN) instance and the VPC firewalls that are used to protect each Express Connect circuit.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyVpcFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallControlPolicyResponse
 */
ModifyVpcFirewallControlPolicyResponse Client::modifyVpcFirewallControlPolicyWithOptions(const ModifyVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.aclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasApplicationNameList()) {
    query["ApplicationNameList"] = request.applicationNameList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDestPort()) {
    query["DestPort"] = request.destPort();
  }

  if (!!request.hasDestPortGroup()) {
    query["DestPortGroup"] = request.destPortGroup();
  }

  if (!!request.hasDestPortType()) {
    query["DestPortType"] = request.destPortType();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.destination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.destinationType();
  }

  if (!!request.hasDomainResolveType()) {
    query["DomainResolveType"] = request.domainResolveType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.proto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.release();
  }

  if (!!request.hasRepeatDays()) {
    query["RepeatDays"] = request.repeatDays();
  }

  if (!!request.hasRepeatEndTime()) {
    query["RepeatEndTime"] = request.repeatEndTime();
  }

  if (!!request.hasRepeatStartTime()) {
    query["RepeatStartTime"] = request.repeatStartTime();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.repeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyVpcFirewallControlPolicy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyVpcFirewallControlPolicyResponse>();
}

/**
 * @summary Modifies the configurations of an access control policy that is created for a virtual private cloud (VPC) firewall in a specified policy group.
 *
 * @description You can call the ModifyVpcFirewallControlPolicy operation to modify the configurations of an access control policy that is created for a VPC firewall in a specified policy group. Different access control policies are used for the VPC firewalls that are used to protect each Cloud Enterprise Network (CEN) instance and the VPC firewalls that are used to protect each Express Connect circuit.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyVpcFirewallControlPolicyRequest
 * @return ModifyVpcFirewallControlPolicyResponse
 */
ModifyVpcFirewallControlPolicyResponse Client::modifyVpcFirewallControlPolicy(const ModifyVpcFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the priority of an access control policy that is created for a virtual private cloud (VPC) firewall in a specific policy group.
 *
 * @description You can use this operation to modify the priority of an access control policy that is created for a VPC firewall in a specific policy group.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyVpcFirewallControlPolicyPositionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallControlPolicyPositionResponse
 */
ModifyVpcFirewallControlPolicyPositionResponse Client::modifyVpcFirewallControlPolicyPositionWithOptions(const ModifyVpcFirewallControlPolicyPositionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNewOrder()) {
    query["NewOrder"] = request.newOrder();
  }

  if (!!request.hasOldOrder()) {
    query["OldOrder"] = request.oldOrder();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyVpcFirewallControlPolicyPosition"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyVpcFirewallControlPolicyPositionResponse>();
}

/**
 * @summary Modifies the priority of an access control policy that is created for a virtual private cloud (VPC) firewall in a specific policy group.
 *
 * @description You can use this operation to modify the priority of an access control policy that is created for a VPC firewall in a specific policy group.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyVpcFirewallControlPolicyPositionRequest
 * @return ModifyVpcFirewallControlPolicyPositionResponse
 */
ModifyVpcFirewallControlPolicyPositionResponse Client::modifyVpcFirewallControlPolicyPosition(const ModifyVpcFirewallControlPolicyPositionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallControlPolicyPositionWithOptions(request, runtime);
}

/**
 * @summary Modifies the intrusion prevention configurations of a virtual private cloud (VPC) firewall.
 *
 * @description You can call this operation to modify the intrusion prevention configurations of a VPC firewall.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyVpcFirewallDefaultIPSConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallDefaultIPSConfigResponse
 */
ModifyVpcFirewallDefaultIPSConfigResponse Client::modifyVpcFirewallDefaultIPSConfigWithOptions(const ModifyVpcFirewallDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBasicRules()) {
    query["BasicRules"] = request.basicRules();
  }

  if (!!request.hasEnableAllPatch()) {
    query["EnableAllPatch"] = request.enableAllPatch();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasRuleClass()) {
    query["RuleClass"] = request.ruleClass();
  }

  if (!!request.hasRunMode()) {
    query["RunMode"] = request.runMode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyVpcFirewallDefaultIPSConfig"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyVpcFirewallDefaultIPSConfigResponse>();
}

/**
 * @summary Modifies the intrusion prevention configurations of a virtual private cloud (VPC) firewall.
 *
 * @description You can call this operation to modify the intrusion prevention configurations of a VPC firewall.
 * ## [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyVpcFirewallDefaultIPSConfigRequest
 * @return ModifyVpcFirewallDefaultIPSConfigResponse
 */
ModifyVpcFirewallDefaultIPSConfigResponse Client::modifyVpcFirewallDefaultIPSConfig(const ModifyVpcFirewallDefaultIPSConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallDefaultIPSConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the IPS whitelist of a virtual private cloud (VPC) firewall.
 *
 * @param request ModifyVpcFirewallIPSWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallIPSWhitelistResponse
 */
ModifyVpcFirewallIPSWhitelistResponse Client::modifyVpcFirewallIPSWhitelistWithOptions(const ModifyVpcFirewallIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasListType()) {
    query["ListType"] = request.listType();
  }

  if (!!request.hasListValue()) {
    query["ListValue"] = request.listValue();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  if (!!request.hasWhiteType()) {
    query["WhiteType"] = request.whiteType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyVpcFirewallIPSWhitelist"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyVpcFirewallIPSWhitelistResponse>();
}

/**
 * @summary Modifies the IPS whitelist of a virtual private cloud (VPC) firewall.
 *
 * @param request ModifyVpcFirewallIPSWhitelistRequest
 * @return ModifyVpcFirewallIPSWhitelistResponse
 */
ModifyVpcFirewallIPSWhitelistResponse Client::modifyVpcFirewallIPSWhitelist(const ModifyVpcFirewallIPSWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallIPSWhitelistWithOptions(request, runtime);
}

/**
 * @summary Enables or disables a virtual private cloud (VPC) firewall. The VPC firewall protects traffic between two VPCs that are connected by using an Express Connect circuit.
 *
 * @description You can call the ModifyVpcFirewallSwitchStatus operation to enable or disable a VPC firewall. The VPC firewall protects traffic between two VPCs that are connected by using an Express Connect circuit. After you enable the VPC firewall, the VPC firewall protects access traffic between two VPCs that are connected by using an Express Connect circuit. After you disable the VPC firewall, the VPC firewall no longer protects access traffic between two VPCs that are connected by using an Express Connect circuit.
 * Before you call the operation, make sure that you created a VPC firewall by calling the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyVpcFirewallSwitchStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallSwitchStatusResponse
 */
ModifyVpcFirewallSwitchStatusResponse Client::modifyVpcFirewallSwitchStatusWithOptions(const ModifyVpcFirewallSwitchStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallSwitch()) {
    query["FirewallSwitch"] = request.firewallSwitch();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.memberUid();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.vpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyVpcFirewallSwitchStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyVpcFirewallSwitchStatusResponse>();
}

/**
 * @summary Enables or disables a virtual private cloud (VPC) firewall. The VPC firewall protects traffic between two VPCs that are connected by using an Express Connect circuit.
 *
 * @description You can call the ModifyVpcFirewallSwitchStatus operation to enable or disable a VPC firewall. The VPC firewall protects traffic between two VPCs that are connected by using an Express Connect circuit. After you enable the VPC firewall, the VPC firewall protects access traffic between two VPCs that are connected by using an Express Connect circuit. After you disable the VPC firewall, the VPC firewall no longer protects access traffic between two VPCs that are connected by using an Express Connect circuit.
 * Before you call the operation, make sure that you created a VPC firewall by calling the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyVpcFirewallSwitchStatusRequest
 * @return ModifyVpcFirewallSwitchStatusResponse
 */
ModifyVpcFirewallSwitchStatusResponse Client::modifyVpcFirewallSwitchStatus(const ModifyVpcFirewallSwitchStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallSwitchStatusWithOptions(request, runtime);
}

/**
 * @summary Turns off all firewall switches.
 *
 * @description You can call the PutDisableAllFwSwitch operation to turn off all firewall switches.
 * ## [](#qps-)QPS limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request PutDisableAllFwSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutDisableAllFwSwitchResponse
 */
PutDisableAllFwSwitchResponse Client::putDisableAllFwSwitchWithOptions(const PutDisableAllFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutDisableAllFwSwitch"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutDisableAllFwSwitchResponse>();
}

/**
 * @summary Turns off all firewall switches.
 *
 * @description You can call the PutDisableAllFwSwitch operation to turn off all firewall switches.
 * ## [](#qps-)QPS limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request PutDisableAllFwSwitchRequest
 * @return PutDisableAllFwSwitchResponse
 */
PutDisableAllFwSwitchResponse Client::putDisableAllFwSwitch(const PutDisableAllFwSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putDisableAllFwSwitchWithOptions(request, runtime);
}

/**
 * @summary Disable a firewall for specific assets.
 *
 * @description You can call the PutDisableFwSwitch operation to disable a firewall for specific assets. After you disable the firewall, traffic does not pass through Cloud Firewall.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request PutDisableFwSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutDisableFwSwitchResponse
 */
PutDisableFwSwitchResponse Client::putDisableFwSwitchWithOptions(const PutDisableFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpaddrList()) {
    query["IpaddrList"] = request.ipaddrList();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegionList()) {
    query["RegionList"] = request.regionList();
  }

  if (!!request.hasResourceTypeList()) {
    query["ResourceTypeList"] = request.resourceTypeList();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutDisableFwSwitch"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutDisableFwSwitchResponse>();
}

/**
 * @summary Disable a firewall for specific assets.
 *
 * @description You can call the PutDisableFwSwitch operation to disable a firewall for specific assets. After you disable the firewall, traffic does not pass through Cloud Firewall.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request PutDisableFwSwitchRequest
 * @return PutDisableFwSwitchResponse
 */
PutDisableFwSwitchResponse Client::putDisableFwSwitch(const PutDisableFwSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putDisableFwSwitchWithOptions(request, runtime);
}

/**
 * @summary Enables a firewall for all public IP addresses within your Alibaba Cloud account.
 *
 * @description You can call the PutEnableAllFwSwitch operation to enable a firewall for all public IP addresses within your Alibaba Cloud account.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request PutEnableAllFwSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutEnableAllFwSwitchResponse
 */
PutEnableAllFwSwitchResponse Client::putEnableAllFwSwitchWithOptions(const PutEnableAllFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutEnableAllFwSwitch"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutEnableAllFwSwitchResponse>();
}

/**
 * @summary Enables a firewall for all public IP addresses within your Alibaba Cloud account.
 *
 * @description You can call the PutEnableAllFwSwitch operation to enable a firewall for all public IP addresses within your Alibaba Cloud account.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request PutEnableAllFwSwitchRequest
 * @return PutEnableAllFwSwitchResponse
 */
PutEnableAllFwSwitchResponse Client::putEnableAllFwSwitch(const PutEnableAllFwSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putEnableAllFwSwitchWithOptions(request, runtime);
}

/**
 * @summary Enables firewalls for specific assets.
 *
 * @description You can call this operation to enable a firewall. After you enable a firewall, traffic passes through Cloud Firewall.
 * ## [](#qps-)Limits
 * You can call this operation up to five times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request PutEnableFwSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutEnableFwSwitchResponse
 */
PutEnableFwSwitchResponse Client::putEnableFwSwitchWithOptions(const PutEnableFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpaddrList()) {
    query["IpaddrList"] = request.ipaddrList();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegionList()) {
    query["RegionList"] = request.regionList();
  }

  if (!!request.hasResourceTypeList()) {
    query["ResourceTypeList"] = request.resourceTypeList();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutEnableFwSwitch"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutEnableFwSwitchResponse>();
}

/**
 * @summary Enables firewalls for specific assets.
 *
 * @description You can call this operation to enable a firewall. After you enable a firewall, traffic passes through Cloud Firewall.
 * ## [](#qps-)Limits
 * You can call this operation up to five times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request PutEnableFwSwitchRequest
 * @return PutEnableFwSwitchResponse
 */
PutEnableFwSwitchResponse Client::putEnableFwSwitch(const PutEnableFwSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putEnableFwSwitchWithOptions(request, runtime);
}

/**
 * @summary 释放已过期的实例
 *
 * @param request ReleaseExpiredInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseExpiredInstanceResponse
 */
ReleaseExpiredInstanceResponse Client::releaseExpiredInstanceWithOptions(const ReleaseExpiredInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseExpiredInstance"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseExpiredInstanceResponse>();
}

/**
 * @summary 释放已过期的实例
 *
 * @param request ReleaseExpiredInstanceRequest
 * @return ReleaseExpiredInstanceResponse
 */
ReleaseExpiredInstanceResponse Client::releaseExpiredInstance(const ReleaseExpiredInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseExpiredInstanceWithOptions(request, runtime);
}

/**
 * @summary Releases Cloud Firewall that uses the pay-as-you-go billing method.
 *
 * @param request ReleasePostInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleasePostInstanceResponse
 */
ReleasePostInstanceResponse Client::releasePostInstanceWithOptions(const ReleasePostInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleasePostInstance"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleasePostInstanceResponse>();
}

/**
 * @summary Releases Cloud Firewall that uses the pay-as-you-go billing method.
 *
 * @param request ReleasePostInstanceRequest
 * @return ReleasePostInstanceResponse
 */
ReleasePostInstanceResponse Client::releasePostInstance(const ReleasePostInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releasePostInstanceWithOptions(request, runtime);
}

/**
 * @summary Resets the number of NAT firewall hits.
 *
 * @param request ResetNatFirewallRuleHitCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetNatFirewallRuleHitCountResponse
 */
ResetNatFirewallRuleHitCountResponse Client::resetNatFirewallRuleHitCountWithOptions(const ResetNatFirewallRuleHitCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.natGatewayId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetNatFirewallRuleHitCount"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetNatFirewallRuleHitCountResponse>();
}

/**
 * @summary Resets the number of NAT firewall hits.
 *
 * @param request ResetNatFirewallRuleHitCountRequest
 * @return ResetNatFirewallRuleHitCountResponse
 */
ResetNatFirewallRuleHitCountResponse Client::resetNatFirewallRuleHitCount(const ResetNatFirewallRuleHitCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetNatFirewallRuleHitCountWithOptions(request, runtime);
}

/**
 * @summary 重置规则命中数
 *
 * @param request ResetRuleHitCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetRuleHitCountResponse
 */
ResetRuleHitCountResponse Client::resetRuleHitCountWithOptions(const ResetRuleHitCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetRuleHitCount"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetRuleHitCountResponse>();
}

/**
 * @summary 重置规则命中数
 *
 * @param request ResetRuleHitCountRequest
 * @return ResetRuleHitCountResponse
 */
ResetRuleHitCountResponse Client::resetRuleHitCount(const ResetRuleHitCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetRuleHitCountWithOptions(request, runtime);
}

/**
 * @summary Clears the count on hits of an access control policy that is created for a virtual private cloud (VPC) firewall in a specific policy group.
 *
 * @description You can call the ResetVpcFirewallRuleHitCount operation to clear the count on hits of an access control policy that is created for a VPC firewall in a specific policy group.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ResetVpcFirewallRuleHitCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetVpcFirewallRuleHitCountResponse
 */
ResetVpcFirewallRuleHitCountResponse Client::resetVpcFirewallRuleHitCountWithOptions(const ResetVpcFirewallRuleHitCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.aclUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetVpcFirewallRuleHitCount"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetVpcFirewallRuleHitCountResponse>();
}

/**
 * @summary Clears the count on hits of an access control policy that is created for a virtual private cloud (VPC) firewall in a specific policy group.
 *
 * @description You can call the ResetVpcFirewallRuleHitCount operation to clear the count on hits of an access control policy that is created for a VPC firewall in a specific policy group.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ResetVpcFirewallRuleHitCountRequest
 * @return ResetVpcFirewallRuleHitCountResponse
 */
ResetVpcFirewallRuleHitCountResponse Client::resetVpcFirewallRuleHitCount(const ResetVpcFirewallRuleHitCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetVpcFirewallRuleHitCountWithOptions(request, runtime);
}

/**
 * @summary Enables or disables a NAT firewall.
 *
 * @param request SwitchSecurityProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchSecurityProxyResponse
 */
SwitchSecurityProxyResponse Client::switchSecurityProxyWithOptions(const SwitchSecurityProxyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasProxyId()) {
    query["ProxyId"] = request.proxyId();
  }

  if (!!request.hasSwitch()) {
    query["Switch"] = request._switch();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchSecurityProxy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchSecurityProxyResponse>();
}

/**
 * @summary Enables or disables a NAT firewall.
 *
 * @param request SwitchSecurityProxyRequest
 * @return SwitchSecurityProxyResponse
 */
SwitchSecurityProxyResponse Client::switchSecurityProxy(const SwitchSecurityProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchSecurityProxyWithOptions(request, runtime);
}

/**
 * @summary 修改AI流量分析开启状态
 *
 * @param request UpdateAITrafficAnalysisStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAITrafficAnalysisStatusResponse
 */
UpdateAITrafficAnalysisStatusResponse Client::updateAITrafficAnalysisStatusWithOptions(const UpdateAITrafficAnalysisStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAITrafficAnalysisStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAITrafficAnalysisStatusResponse>();
}

/**
 * @summary 修改AI流量分析开启状态
 *
 * @param request UpdateAITrafficAnalysisStatusRequest
 * @return UpdateAITrafficAnalysisStatusResponse
 */
UpdateAITrafficAnalysisStatusResponse Client::updateAITrafficAnalysisStatus(const UpdateAITrafficAnalysisStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAITrafficAnalysisStatusWithOptions(request, runtime);
}

/**
 * @summary 修改ACK集群连接器
 *
 * @param request UpdateAckClusterConnectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAckClusterConnectorResponse
 */
UpdateAckClusterConnectorResponse Client::updateAckClusterConnectorWithOptions(const UpdateAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.connectorId();
  }

  if (!!request.hasConnectorName()) {
    query["ConnectorName"] = request.connectorName();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.ttl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAckClusterConnector"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAckClusterConnectorResponse>();
}

/**
 * @summary 修改ACK集群连接器
 *
 * @param request UpdateAckClusterConnectorRequest
 * @return UpdateAckClusterConnectorResponse
 */
UpdateAckClusterConnectorResponse Client::updateAckClusterConnector(const UpdateAckClusterConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAckClusterConnectorWithOptions(request, runtime);
}

/**
 * @summary 修改ACL检查状态
 *
 * @param request UpdateAclCheckDetailStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAclCheckDetailStatusResponse
 */
UpdateAclCheckDetailStatusResponse Client::updateAclCheckDetailStatusWithOptions(const UpdateAclCheckDetailStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAclCheckDetailStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAclCheckDetailStatusResponse>();
}

/**
 * @summary 修改ACL检查状态
 *
 * @param request UpdateAclCheckDetailStatusRequest
 * @return UpdateAclCheckDetailStatusResponse
 */
UpdateAclCheckDetailStatusResponse Client::updateAclCheckDetailStatus(const UpdateAclCheckDetailStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAclCheckDetailStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the status of the NAT firewall feature for Cloud Firewall that uses the pay-as-you-go billing method.
 *
 * @param request UpdatePostpayUserInternetStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePostpayUserInternetStatusResponse
 */
UpdatePostpayUserInternetStatusResponse Client::updatePostpayUserInternetStatusWithOptions(const UpdatePostpayUserInternetStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOperate()) {
    query["Operate"] = request.operate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePostpayUserInternetStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePostpayUserInternetStatusResponse>();
}

/**
 * @summary Updates the status of the NAT firewall feature for Cloud Firewall that uses the pay-as-you-go billing method.
 *
 * @param request UpdatePostpayUserInternetStatusRequest
 * @return UpdatePostpayUserInternetStatusResponse
 */
UpdatePostpayUserInternetStatusResponse Client::updatePostpayUserInternetStatus(const UpdatePostpayUserInternetStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePostpayUserInternetStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the status of the NAT Firewall feature for Cloud Firewall that uses the pay-as-you-go billing method.
 *
 * @param request UpdatePostpayUserNatStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePostpayUserNatStatusResponse
 */
UpdatePostpayUserNatStatusResponse Client::updatePostpayUserNatStatusWithOptions(const UpdatePostpayUserNatStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOperate()) {
    query["Operate"] = request.operate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePostpayUserNatStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePostpayUserNatStatusResponse>();
}

/**
 * @summary Updates the status of the NAT Firewall feature for Cloud Firewall that uses the pay-as-you-go billing method.
 *
 * @param request UpdatePostpayUserNatStatusRequest
 * @return UpdatePostpayUserNatStatusResponse
 */
UpdatePostpayUserNatStatusResponse Client::updatePostpayUserNatStatus(const UpdatePostpayUserNatStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePostpayUserNatStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the status of the virtual private cloud (VPC) Firewall feature for Cloud Firewall that uses the pay-as-you-go billing method.
 *
 * @param request UpdatePostpayUserVpcStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePostpayUserVpcStatusResponse
 */
UpdatePostpayUserVpcStatusResponse Client::updatePostpayUserVpcStatusWithOptions(const UpdatePostpayUserVpcStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOperate()) {
    query["Operate"] = request.operate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePostpayUserVpcStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePostpayUserVpcStatusResponse>();
}

/**
 * @summary Updates the status of the virtual private cloud (VPC) Firewall feature for Cloud Firewall that uses the pay-as-you-go billing method.
 *
 * @param request UpdatePostpayUserVpcStatusRequest
 * @return UpdatePostpayUserVpcStatusResponse
 */
UpdatePostpayUserVpcStatusResponse Client::updatePostpayUserVpcStatus(const UpdatePostpayUserVpcStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePostpayUserVpcStatusWithOptions(request, runtime);
}

/**
 * @summary 更新安全正向代理
 *
 * @param request UpdateSecurityProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSecurityProxyResponse
 */
UpdateSecurityProxyResponse Client::updateSecurityProxyWithOptions(const UpdateSecurityProxyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasProxyId()) {
    query["ProxyId"] = request.proxyId();
  }

  if (!!request.hasProxyName()) {
    query["ProxyName"] = request.proxyName();
  }

  if (!!request.hasStrictMode()) {
    query["StrictMode"] = request.strictMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSecurityProxy"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSecurityProxyResponse>();
}

/**
 * @summary 更新安全正向代理
 *
 * @param request UpdateSecurityProxyRequest
 * @return UpdateSecurityProxyResponse
 */
UpdateSecurityProxyResponse Client::updateSecurityProxy(const UpdateSecurityProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSecurityProxyWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Cloudfw20171207