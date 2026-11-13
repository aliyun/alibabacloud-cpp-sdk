#include <darabonba/Core.hpp>
#include <alibabacloud/Cloudfw20171207.hpp>
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
using namespace AlibabaCloud::Cloudfw20171207::Models;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{

AlibabaCloud::Cloudfw20171207::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "Cloudfw";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "central";
  this->_endpointMap = json({
    {"ap-southeast-1" , "cloudfw.ap-southeast-1.aliyuncs.com"},
    {"cn-hangzhou" , "cloudfw.cn-hangzhou.aliyuncs.com"},
    {"ap-southeast-3" , "cloudfw.ap-southeast-1.aliyuncs.com"}
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
 * @summary Creates an access control backup.
 *
 * @param request AddAclBackupDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAclBackupDataResponse
 */
AddAclBackupDataResponse Client::addAclBackupDataWithOptions(const AddAclBackupDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackUpTime()) {
    query["BackUpTime"] = request.getBackUpTime();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAclBackupData"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAclBackupDataResponse>();
}

/**
 * @summary Creates an access control backup.
 *
 * @param request AddAclBackupDataRequest
 * @return AddAclBackupDataResponse
 */
AddAclBackupDataResponse Client::addAclBackupData(const AddAclBackupDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAclBackupDataWithOptions(request, runtime);
}

/**
 * @summary Creates an address book, including IPv4 address books, ECS tag-based address books, IPv6 address books, domain name address books, and ACK address books.
 *
 * @description This operation is typically used to create an address book, including IPv4 address books, ECS tag-based address books, IPv6 address books, domain name address books, and ACK address books.
 * ## QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable rate.
 *
 * @param tmpReq AddAddressBookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAddressBookResponse
 */
AddAddressBookResponse Client::addAddressBookWithOptions(const AddAddressBookRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddAddressBookShrinkRequest request = AddAddressBookShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssetMemberUids()) {
    request.setAssetMemberUidsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssetMemberUids(), "AssetMemberUids", "json"));
  }

  if (!!tmpReq.hasAssetRegionResourceTypes()) {
    request.setAssetRegionResourceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssetRegionResourceTypes(), "AssetRegionResourceTypes", "json"));
  }

  json query = {};
  if (!!request.hasAckClusterConnectorId()) {
    query["AckClusterConnectorId"] = request.getAckClusterConnectorId();
  }

  if (!!request.hasAckLabels()) {
    query["AckLabels"] = request.getAckLabels();
  }

  if (!!request.hasAckNamespaces()) {
    query["AckNamespaces"] = request.getAckNamespaces();
  }

  if (!!request.hasAddressList()) {
    query["AddressList"] = request.getAddressList();
  }

  if (!!request.hasAssetMemberUidsShrink()) {
    query["AssetMemberUids"] = request.getAssetMemberUidsShrink();
  }

  if (!!request.hasAssetRegionResourceTypesShrink()) {
    query["AssetRegionResourceTypes"] = request.getAssetRegionResourceTypesShrink();
  }

  if (!!request.hasAutoAddTagEcs()) {
    query["AutoAddTagEcs"] = request.getAutoAddTagEcs();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.getGroupType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasTagList()) {
    query["TagList"] = request.getTagList();
  }

  if (!!request.hasTagRelation()) {
    query["TagRelation"] = request.getTagRelation();
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
 * @summary Creates an address book, including IPv4 address books, ECS tag-based address books, IPv6 address books, domain name address books, and ACK address books.
 *
 * @description This operation is typically used to create an address book, including IPv4 address books, ECS tag-based address books, IPv6 address books, domain name address books, and ACK address books.
 * ## QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable rate.
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
 * @description You can use this operation to create a policy that allows, blocks, or monitors traffic that passes through Cloud Firewall.
 * ## QPS limits
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
 *
 * @param request AddControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddControlPolicyResponse
 */
AddControlPolicyResponse Client::addControlPolicyWithOptions(const AddControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.getAclAction();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasApplicationNameList()) {
    query["ApplicationNameList"] = request.getApplicationNameList();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestPort()) {
    query["DestPort"] = request.getDestPort();
  }

  if (!!request.hasDestPortGroup()) {
    query["DestPortGroup"] = request.getDestPortGroup();
  }

  if (!!request.hasDestPortType()) {
    query["DestPortType"] = request.getDestPortType();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.getDestination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.getDestinationType();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDomainResolveType()) {
    query["DomainResolveType"] = request.getDomainResolveType();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNewOrder()) {
    query["NewOrder"] = request.getNewOrder();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.getProto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.getRelease();
  }

  if (!!request.hasRepeatDays()) {
    query["RepeatDays"] = request.getRepeatDays();
  }

  if (!!request.hasRepeatEndTime()) {
    query["RepeatEndTime"] = request.getRepeatEndTime();
  }

  if (!!request.hasRepeatStartTime()) {
    query["RepeatStartTime"] = request.getRepeatStartTime();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.getRepeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @description You can use this operation to create a policy that allows, blocks, or monitors traffic that passes through Cloud Firewall.
 * ## QPS limits
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
 *
 * @param request AddControlPolicyRequest
 * @return AddControlPolicyResponse
 */
AddControlPolicyResponse Client::addControlPolicy(const AddControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a DNS firewall ACL.
 *
 * @description Creates a DNS firewall access control policy to allow, deny, or monitor traffic that passes through the DNS firewall.
 * ## Quotas
 * DNS firewall policies are counted independently in the DNS policy table (counted separately by IP version), but **share the same quota limit** with Internet access control policies (determined by the Cloud Firewall edition). If the number of address combinations expanded from a single policy exceeds the limit, or the total number of policies exceeds the limit, the system returns ErrorAclExtendedCountExceed (-200139).
 * > The DescribeAclCheckQuota operation returns the quota for the number of ACL policy checks, which is unrelated to firewall policy count quota. You cannot use it to predict whether the quota for this operation is sufficient. Check firewall policy count quota in the Cloud Firewall console.
 *
 * @param request AddDnsFirewallPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDnsFirewallPolicyResponse
 */
AddDnsFirewallPolicyResponse Client::addDnsFirewallPolicyWithOptions(const AddDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.getAclAction();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.getDestination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.getDestinationType();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.getRelease();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
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
 * @summary Creates a DNS firewall ACL.
 *
 * @description Creates a DNS firewall access control policy to allow, deny, or monitor traffic that passes through the DNS firewall.
 * ## Quotas
 * DNS firewall policies are counted independently in the DNS policy table (counted separately by IP version), but **share the same quota limit** with Internet access control policies (determined by the Cloud Firewall edition). If the number of address combinations expanded from a single policy exceeds the limit, or the total number of policies exceeds the limit, the system returns ErrorAclExtendedCountExceed (-200139).
 * > The DescribeAclCheckQuota operation returns the quota for the number of ACL policy checks, which is unrelated to firewall policy count quota. You cannot use it to predict whether the quota for this operation is sufficient. Check firewall policy count quota in the Cloud Firewall console.
 *
 * @param request AddDnsFirewallPolicyRequest
 * @return AddDnsFirewallPolicyResponse
 */
AddDnsFirewallPolicyResponse Client::addDnsFirewallPolicy(const AddDnsFirewallPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDnsFirewallPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a real-time domain name resolution task.
 *
 * @description This operation creates a real-time domain name resolution task for a specified domain name.
 * ## Before you begin
 * - Before you call this operation, you must activate Cloud Firewall. You can activate it on the Cloud Firewall buy page (China site: https://common-buy.aliyun.com/?commodityCode=cfw_sub_public_cn, International site: https://common-buy-intl.alibabacloud.com/?commodityCode=cfw_sub_public_intl).
 * - You can call the DescribeUserBuyVersion operation to query the UserStatus parameter. If the returned value is false, the current account has not purchased or activated Cloud Firewall.
 *
 * @param request AddDomainResolveRealtimeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDomainResolveRealtimeTaskResponse
 */
AddDomainResolveRealtimeTaskResponse Client::addDomainResolveRealtimeTaskWithOptions(const AddDomainResolveRealtimeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasFirewallType()) {
    query["FirewallType"] = request.getFirewallType();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDomainResolveRealtimeTask"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDomainResolveRealtimeTaskResponse>();
}

/**
 * @summary Creates a real-time domain name resolution task.
 *
 * @description This operation creates a real-time domain name resolution task for a specified domain name.
 * ## Before you begin
 * - Before you call this operation, you must activate Cloud Firewall. You can activate it on the Cloud Firewall buy page (China site: https://common-buy.aliyun.com/?commodityCode=cfw_sub_public_cn, International site: https://common-buy-intl.alibabacloud.com/?commodityCode=cfw_sub_public_intl).
 * - You can call the DescribeUserBuyVersion operation to query the UserStatus parameter. If the returned value is false, the current account has not purchased or activated Cloud Firewall.
 *
 * @param request AddDomainResolveRealtimeTaskRequest
 * @return AddDomainResolveRealtimeTaskResponse
 */
AddDomainResolveRealtimeTaskResponse Client::addDomainResolveRealtimeTask(const AddDomainResolveRealtimeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDomainResolveRealtimeTaskWithOptions(request, runtime);
}

/**
 * @summary Adds member accounts to Cloud Firewall.
 *
 * @description Adds member accounts to Cloud Firewall.
 * ## Before you begin
 * - The caller\\"s Alibaba Cloud account must be a delegated administrator (DA) or management account (MA) of a resource directory. Otherwise, the ErrorInstanceAliuidNotDaMa (-103313) error is returned. You can call the DescribeInstanceRdAccounts operation to verify the identity of the current account.
 * - The UID of the member account to be added must belong to the same resource directory. Otherwise, the ErrorInstanceMemberNotBelongRd (-103308) error is returned.
 * ## Rate limit
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered, which may affect your business. Call this operation at a reasonable rate.
 *
 * @param request AddInstanceMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddInstanceMembersResponse
 */
AddInstanceMembersResponse Client::addInstanceMembersWithOptions(const AddInstanceMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMembers()) {
    query["Members"] = request.getMembers();
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
 * @summary Adds member accounts to Cloud Firewall.
 *
 * @description Adds member accounts to Cloud Firewall.
 * ## Before you begin
 * - The caller\\"s Alibaba Cloud account must be a delegated administrator (DA) or management account (MA) of a resource directory. Otherwise, the ErrorInstanceAliuidNotDaMa (-103313) error is returned. You can call the DescribeInstanceRdAccounts operation to verify the identity of the current account.
 * - The UID of the member account to be added must belong to the same resource directory. Otherwise, the ErrorInstanceMemberNotBelongRd (-103308) error is returned.
 * ## Rate limit
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered, which may affect your business. Call this operation at a reasonable rate.
 *
 * @param request AddInstanceMembersRequest
 * @return AddInstanceMembersResponse
 */
AddInstanceMembersResponse Client::addInstanceMembers(const AddInstanceMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addInstanceMembersWithOptions(request, runtime);
}

/**
 * @summary Adds a private DNS domain name.
 *
 * @description This operation is typically used to retrieve the DNS resolution results of a domain name. Currently, only Alibaba Cloud DNS is supported for retrieving resolution results. The domain name to be queried must use Alibaba Cloud DNS to retrieve its resolution results.
 * ## QPS limits
 * The QPS limit per user for this operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request AddPrivateDnsDomainNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPrivateDnsDomainNameResponse
 */
AddPrivateDnsDomainNameResponse Client::addPrivateDnsDomainNameWithOptions(const AddPrivateDnsDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessInstanceId()) {
    query["AccessInstanceId"] = request.getAccessInstanceId();
  }

  if (!!request.hasDomainNameList()) {
    query["DomainNameList"] = request.getDomainNameList();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
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
 * @summary Adds a private DNS domain name.
 *
 * @description This operation is typically used to retrieve the DNS resolution results of a domain name. Currently, only Alibaba Cloud DNS is supported for retrieving resolution results. The domain name to be queried must use Alibaba Cloud DNS to retrieve its resolution results.
 * ## QPS limits
 * The QPS limit per user for this operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request AddPrivateDnsDomainNameRequest
 * @return AddPrivateDnsDomainNameResponse
 */
AddPrivateDnsDomainNameResponse Client::addPrivateDnsDomainName(const AddPrivateDnsDomainNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPrivateDnsDomainNameWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI BatchCopyVpcFirewallControlPolicy is deprecated
 *
 * @summary Copies all firewall policies from the policy group of the source virtual private cloud (VPC) border firewalls to the policy group of the destination virtual private cloud (VPC) border firewalls.
 *
 * @description This API operation copies all firewall policies from a policy group of the source virtual private cloud (VPC) border firewalls to a policy group of the destination virtual private cloud (VPC) border firewalls.
 * Before performing this operation, back up your firewall policies. For more information about policy backup, see [Policy backup](https://help.aliyun.com/document_detail/170363.html).
 * After this operation is complete, the firewall policies in the policy group of the destination virtual private cloud (VPC) border firewalls are completely replaced by those in the policy group of the source virtual private cloud (VPC) border firewalls.
 * The policy groups of the source and destination virtual private cloud (VPC) border firewalls must belong to the same Alibaba Cloud account.
 * ## QPS limit
 * The queries per second (QPS) limit on this API operation is 10 calls per second per user. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API operation at a reasonable rate.
 *
 * @param request BatchCopyVpcFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCopyVpcFirewallControlPolicyResponse
 */
BatchCopyVpcFirewallControlPolicyResponse Client::batchCopyVpcFirewallControlPolicyWithOptions(const BatchCopyVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasSourceVpcFirewallId()) {
    query["SourceVpcFirewallId"] = request.getSourceVpcFirewallId();
  }

  if (!!request.hasTargetVpcFirewallId()) {
    query["TargetVpcFirewallId"] = request.getTargetVpcFirewallId();
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
 * @deprecated OpenAPI BatchCopyVpcFirewallControlPolicy is deprecated
 *
 * @summary Copies all firewall policies from the policy group of the source virtual private cloud (VPC) border firewalls to the policy group of the destination virtual private cloud (VPC) border firewalls.
 *
 * @description This API operation copies all firewall policies from a policy group of the source virtual private cloud (VPC) border firewalls to a policy group of the destination virtual private cloud (VPC) border firewalls.
 * Before performing this operation, back up your firewall policies. For more information about policy backup, see [Policy backup](https://help.aliyun.com/document_detail/170363.html).
 * After this operation is complete, the firewall policies in the policy group of the destination virtual private cloud (VPC) border firewalls are completely replaced by those in the policy group of the source virtual private cloud (VPC) border firewalls.
 * The policy groups of the source and destination virtual private cloud (VPC) border firewalls must belong to the same Alibaba Cloud account.
 * ## QPS limit
 * The queries per second (QPS) limit on this API operation is 10 calls per second per user. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API operation at a reasonable rate.
 *
 * @param request BatchCopyVpcFirewallControlPolicyRequest
 * @return BatchCopyVpcFirewallControlPolicyResponse
 */
BatchCopyVpcFirewallControlPolicyResponse Client::batchCopyVpcFirewallControlPolicy(const BatchCopyVpcFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCopyVpcFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple access control policies for a virtual private cloud (VPC) firewall.
 *
 * @param request BatchDeleteVpcFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteVpcFirewallControlPolicyResponse
 */
BatchDeleteVpcFirewallControlPolicyResponse Client::batchDeleteVpcFirewallControlPolicyWithOptions(const BatchDeleteVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuidList()) {
    query["AclUuidList"] = request.getAclUuidList();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
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
 * @summary Deletes multiple access control policies for a virtual private cloud (VPC) firewall.
 *
 * @param request BatchDeleteVpcFirewallControlPolicyRequest
 * @return BatchDeleteVpcFirewallControlPolicyResponse
 */
BatchDeleteVpcFirewallControlPolicyResponse Client::batchDeleteVpcFirewallControlPolicy(const BatchDeleteVpcFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteVpcFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Clears firewall logs.
 *
 * @param request ClearLogStoreStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearLogStoreStorageResponse
 */
ClearLogStoreStorageResponse Client::clearLogStoreStorageWithOptions(const ClearLogStoreStorageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSite()) {
    query["Site"] = request.getSite();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClearLogStoreStorage"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearLogStoreStorageResponse>();
}

/**
 * @summary Clears firewall logs.
 *
 * @param request ClearLogStoreStorageRequest
 * @return ClearLogStoreStorageResponse
 */
ClearLogStoreStorageResponse Client::clearLogStoreStorage(const ClearLogStoreStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clearLogStoreStorageWithOptions(request, runtime);
}

/**
 * @summary Creates an ACK cluster connector.
 *
 * @description ## QPS limits
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API at a reasonable frequency.
 *
 * @param request CreateAckClusterConnectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAckClusterConnectorResponse
 */
CreateAckClusterConnectorResponse Client::createAckClusterConnectorWithOptions(const CreateAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasConnectorName()) {
    query["ConnectorName"] = request.getConnectorName();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasPrimaryVswitchId()) {
    query["PrimaryVswitchId"] = request.getPrimaryVswitchId();
  }

  if (!!request.hasPrimaryVswitchIp()) {
    query["PrimaryVswitchIp"] = request.getPrimaryVswitchIp();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasStandbyVswitchId()) {
    query["StandbyVswitchId"] = request.getStandbyVswitchId();
  }

  if (!!request.hasStandbyVswitchIp()) {
    query["StandbyVswitchIp"] = request.getStandbyVswitchIp();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
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
 * @summary Creates an ACK cluster connector.
 *
 * @description ## QPS limits
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API at a reasonable frequency.
 *
 * @param request CreateAckClusterConnectorRequest
 * @return CreateAckClusterConnectorResponse
 */
CreateAckClusterConnectorResponse Client::createAckClusterConnector(const CreateAckClusterConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAckClusterConnectorWithOptions(request, runtime);
}

/**
 * @summary Creates an ACL check.
 *
 * @param request CreateAclCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAclCheckResponse
 */
CreateAclCheckResponse Client::createAclCheckWithOptions(const CreateAclCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclType()) {
    query["AclType"] = request.getAclType();
  }

  if (!!request.hasCheckNames()) {
    query["CheckNames"] = request.getCheckNames();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Creates an ACL check.
 *
 * @param request CreateAclCheckRequest
 * @return CreateAclCheckResponse
 */
CreateAclCheckResponse Client::createAclCheck(const CreateAclCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAclCheckWithOptions(request, runtime);
}

/**
 * @summary Creates custom rules in batches under a specified application template. A maximum of 100 rules can be created at a time, and the total number of rules in the template cannot exceed 100.
 *
 * @param tmpReq CreateApplicationCustomRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationCustomRulesResponse
 */
CreateApplicationCustomRulesResponse Client::createApplicationCustomRulesWithOptions(const CreateApplicationCustomRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateApplicationCustomRulesShrinkRequest request = CreateApplicationCustomRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRules(), "Rules", "json"));
  }

  json query = {};
  if (!!request.hasApplicationTemplateId()) {
    query["ApplicationTemplateId"] = request.getApplicationTemplateId();
  }

  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.getRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplicationCustomRules"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationCustomRulesResponse>();
}

/**
 * @summary Creates custom rules in batches under a specified application template. A maximum of 100 rules can be created at a time, and the total number of rules in the template cannot exceed 100.
 *
 * @param request CreateApplicationCustomRulesRequest
 * @return CreateApplicationCustomRulesResponse
 */
CreateApplicationCustomRulesResponse Client::createApplicationCustomRules(const CreateApplicationCustomRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationCustomRulesWithOptions(request, runtime);
}

/**
 * @summary Creates an application program template. The template is at user granularity and can be referenced by the access control policies of the Internet, NAT, and virtual private cloud (VPC) firewalls. Before creating a template, ensure that the application control feature is enabled and the number of templates does not exceed the quota of the instance specifications.
 *
 * @param tmpReq CreateApplicationTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationTemplateResponse
 */
CreateApplicationTemplateResponse Client::createApplicationTemplateWithOptions(const CreateApplicationTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateApplicationTemplateShrinkRequest request = CreateApplicationTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddBuiltInApplicationCustomActions()) {
    request.setAddBuiltInApplicationCustomActionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddBuiltInApplicationCustomActions(), "AddBuiltInApplicationCustomActions", "json"));
  }

  json query = {};
  if (!!request.hasAddBuiltInApplicationCustomActionsShrink()) {
    query["AddBuiltInApplicationCustomActions"] = request.getAddBuiltInApplicationCustomActionsShrink();
  }

  if (!!request.hasApplicationTemplateName()) {
    query["ApplicationTemplateName"] = request.getApplicationTemplateName();
  }

  if (!!request.hasBuiltInApplicationStatus()) {
    query["BuiltInApplicationStatus"] = request.getBuiltInApplicationStatus();
  }

  if (!!request.hasCustomRuleStatus()) {
    query["CustomRuleStatus"] = request.getCustomRuleStatus();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasTemplateStatus()) {
    query["TemplateStatus"] = request.getTemplateStatus();
  }

  if (!!request.hasUnknownAction()) {
    query["UnknownAction"] = request.getUnknownAction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplicationTemplate"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationTemplateResponse>();
}

/**
 * @summary Creates an application program template. The template is at user granularity and can be referenced by the access control policies of the Internet, NAT, and virtual private cloud (VPC) firewalls. Before creating a template, ensure that the application control feature is enabled and the number of templates does not exceed the quota of the instance specifications.
 *
 * @param request CreateApplicationTemplateRequest
 * @return CreateApplicationTemplateResponse
 */
CreateApplicationTemplateResponse Client::createApplicationTemplate(const CreateApplicationTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationTemplateWithOptions(request, runtime);
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
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTaskData()) {
    query["TaskData"] = request.getTaskData();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  if (!!request.hasTimeZone()) {
    query["TimeZone"] = request.getTimeZone();
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
 * @summary Creates an Internet asset synchronization task.
 *
 * @param request CreateInstanceSyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceSyncTaskResponse
 */
CreateInstanceSyncTaskResponse Client::createInstanceSyncTaskWithOptions(const CreateInstanceSyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstanceSyncTask"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceSyncTaskResponse>();
}

/**
 * @summary Creates an Internet asset synchronization task.
 *
 * @param request CreateInstanceSyncTaskRequest
 * @return CreateInstanceSyncTaskResponse
 */
CreateInstanceSyncTaskResponse Client::createInstanceSyncTask(const CreateInstanceSyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceSyncTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an IPS private IP tracing association.
 *
 * @description Creates an IPS private IP tracing association for an Internet NAT gateway that is protected by Cloud Firewall.
 * ## Before you begin
 * - The target NAT gateway must be managed by Cloud Firewall and asset synchronization must be completed. Asset synchronization is an asynchronous task. If you call this operation before the synchronization of a newly created NAT gateway is completed, the error code -103204 is returned.
 * - If SNAT is configured for the NAT gateway, you must enable session logs first. Otherwise, the error code -103583 is returned.
 *
 * @param request CreateIpsPrivateAssocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIpsPrivateAssocResponse
 */
CreateIpsPrivateAssocResponse Client::createIpsPrivateAssocWithOptions(const CreateIpsPrivateAssocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIpsPrivateAssoc"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIpsPrivateAssocResponse>();
}

/**
 * @summary Creates an IPS private IP tracing association.
 *
 * @description Creates an IPS private IP tracing association for an Internet NAT gateway that is protected by Cloud Firewall.
 * ## Before you begin
 * - The target NAT gateway must be managed by Cloud Firewall and asset synchronization must be completed. Asset synchronization is an asynchronous task. If you call this operation before the synchronization of a newly created NAT gateway is completed, the error code -103204 is returned.
 * - If SNAT is configured for the NAT gateway, you must enable session logs first. Otherwise, the error code -103583 is returned.
 *
 * @param request CreateIpsPrivateAssocRequest
 * @return CreateIpsPrivateAssocResponse
 */
CreateIpsPrivateAssocResponse Client::createIpsPrivateAssoc(const CreateIpsPrivateAssocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIpsPrivateAssocWithOptions(request, runtime);
}

/**
 * @summary Creates an access control policy for a NAT firewall.
 *
 * @description Creates a policy to allow, deny, or monitor traffic that passes through a NAT firewall.
 *
 * @param request CreateNatFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNatFirewallControlPolicyResponse
 */
CreateNatFirewallControlPolicyResponse Client::createNatFirewallControlPolicyWithOptions(const CreateNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.getAclAction();
  }

  if (!!request.hasApplicationNameList()) {
    query["ApplicationNameList"] = request.getApplicationNameList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestPort()) {
    query["DestPort"] = request.getDestPort();
  }

  if (!!request.hasDestPortGroup()) {
    query["DestPortGroup"] = request.getDestPortGroup();
  }

  if (!!request.hasDestPortType()) {
    query["DestPortType"] = request.getDestPortType();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.getDestination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.getDestinationType();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDomainResolveType()) {
    query["DomainResolveType"] = request.getDomainResolveType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasNewOrder()) {
    query["NewOrder"] = request.getNewOrder();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.getProto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.getRelease();
  }

  if (!!request.hasRepeatDays()) {
    query["RepeatDays"] = request.getRepeatDays();
  }

  if (!!request.hasRepeatEndTime()) {
    query["RepeatEndTime"] = request.getRepeatEndTime();
  }

  if (!!request.hasRepeatStartTime()) {
    query["RepeatStartTime"] = request.getRepeatStartTime();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.getRepeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @description Creates a policy to allow, deny, or monitor traffic that passes through a NAT firewall.
 *
 * @param request CreateNatFirewallControlPolicyRequest
 * @return CreateNatFirewallControlPolicyResponse
 */
CreateNatFirewallControlPolicyResponse Client::createNatFirewallControlPolicy(const CreateNatFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNatFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a precheck for a NAT firewall.
 *
 * @description Creates a policy that allows, denies, or monitors traffic passing through a NAT firewall.
 *
 * @param request CreateNatFirewallPreCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNatFirewallPreCheckResponse
 */
CreateNatFirewallPreCheckResponse Client::createNatFirewallPreCheckWithOptions(const CreateNatFirewallPreCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  json body = {};
  if (!!request.hasNatGatewayId()) {
    body["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasRegionNo()) {
    body["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
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
 * @summary Creates a precheck for a NAT firewall.
 *
 * @description Creates a policy that allows, denies, or monitors traffic passing through a NAT firewall.
 *
 * @param request CreateNatFirewallPreCheckRequest
 * @return CreateNatFirewallPreCheckResponse
 */
CreateNatFirewallPreCheckResponse Client::createNatFirewallPreCheck(const CreateNatFirewallPreCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNatFirewallPreCheckWithOptions(request, runtime);
}

/**
 * @summary Creates a NAT firewall asset synchronization task.
 *
 * @description Creates a NAT firewall asset synchronization task.
 * ## Before you begin
 * - Before calling this operation, ensure that you have purchased and activated a Cloud Firewall instance. Both subscription and pay-as-you-go billing methods are supported.
 * - You can activate Cloud Firewall on the buy page (Chinese site: https://common-buy.aliyun.com/?commodityCode=cfw_sub_public_cn and International site: https://common-buy-intl.alibabacloud.com/?commodityCode=cfw_sub_public_intl). After activation, call the DescribeUserBuyVersion operation and check the UserStatus parameter to confirm the activation status.
 *
 * @param request CreateNatFirewallSyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNatFirewallSyncTaskResponse
 */
CreateNatFirewallSyncTaskResponse Client::createNatFirewallSyncTaskWithOptions(const CreateNatFirewallSyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNatFirewallSyncTask"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNatFirewallSyncTaskResponse>();
}

/**
 * @summary Creates a NAT firewall asset synchronization task.
 *
 * @description Creates a NAT firewall asset synchronization task.
 * ## Before you begin
 * - Before calling this operation, ensure that you have purchased and activated a Cloud Firewall instance. Both subscription and pay-as-you-go billing methods are supported.
 * - You can activate Cloud Firewall on the buy page (Chinese site: https://common-buy.aliyun.com/?commodityCode=cfw_sub_public_cn and International site: https://common-buy-intl.alibabacloud.com/?commodityCode=cfw_sub_public_intl). After activation, call the DescribeUserBuyVersion operation and check the UserStatus parameter to confirm the activation status.
 *
 * @param request CreateNatFirewallSyncTaskRequest
 * @return CreateNatFirewallSyncTaskResponse
 */
CreateNatFirewallSyncTaskResponse Client::createNatFirewallSyncTask(const CreateNatFirewallSyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNatFirewallSyncTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a private DNS endpoint.
 *
 * @description Creates a private DNS firewall endpoint. When you call this operation, you must specify PrimaryVSwitchId. The region and zone of the primary and secondary vSwitches must support private DNS firewalls.
 *
 * @param request CreatePrivateDnsEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrivateDnsEndpointResponse
 */
CreatePrivateDnsEndpointResponse Client::createPrivateDnsEndpointWithOptions(const CreatePrivateDnsEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessInstanceName()) {
    query["AccessInstanceName"] = request.getAccessInstanceName();
  }

  if (!!request.hasFirewallType()) {
    query["FirewallType"] = request.getFirewallType();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPrimaryDns()) {
    query["PrimaryDns"] = request.getPrimaryDns();
  }

  if (!!request.hasPrimaryVSwitchId()) {
    query["PrimaryVSwitchId"] = request.getPrimaryVSwitchId();
  }

  if (!!request.hasPrimaryVSwitchIp()) {
    query["PrimaryVSwitchIp"] = request.getPrimaryVSwitchIp();
  }

  if (!!request.hasPrivateDnsType()) {
    query["PrivateDnsType"] = request.getPrivateDnsType();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasStandbyDns()) {
    query["StandbyDns"] = request.getStandbyDns();
  }

  if (!!request.hasStandbyVSwitchId()) {
    query["StandbyVSwitchId"] = request.getStandbyVSwitchId();
  }

  if (!!request.hasStandbyVSwitchIp()) {
    query["StandbyVSwitchIp"] = request.getStandbyVSwitchIp();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
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
 * @summary Creates a private DNS endpoint.
 *
 * @description Creates a private DNS firewall endpoint. When you call this operation, you must specify PrimaryVSwitchId. The region and zone of the primary and secondary vSwitches must support private DNS firewalls.
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
  if (!!request.hasFirewallServiceMode()) {
    query["FirewallServiceMode"] = request.getFirewallServiceMode();
  }

  if (!!request.hasFirewallServiceZones()) {
    query["FirewallServiceZones"] = request.getFirewallServiceZones();
  }

  if (!!request.hasFirewallSwitch()) {
    query["FirewallSwitch"] = request.getFirewallSwitch();
  }

  if (!!request.hasFwVswitchZoneId()) {
    query["FwVswitchZoneId"] = request.getFwVswitchZoneId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasNatRouteEntryList()) {
    query["NatRouteEntryList"] = request.getNatRouteEntryList();
  }

  if (!!request.hasProxyName()) {
    query["ProxyName"] = request.getProxyName();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasStrictMode()) {
    query["StrictMode"] = request.getStrictMode();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVswitchAuto()) {
    query["VswitchAuto"] = request.getVswitchAuto();
  }

  if (!!request.hasVswitchCidr()) {
    query["VswitchCidr"] = request.getVswitchCidr();
  }

  if (!!request.hasVswitchId()) {
    query["VswitchId"] = request.getVswitchId();
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
 * @summary Creates an SLS log delivery task for Cloud Firewall.
 *
 * @param request CreateSlsLogDispatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSlsLogDispatchResponse
 */
CreateSlsLogDispatchResponse Client::createSlsLogDispatchWithOptions(const CreateSlsLogDispatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSlsRegionId()) {
    body["SlsRegionId"] = request.getSlsRegionId();
  }

  if (!!request.hasTtl()) {
    body["Ttl"] = request.getTtl();
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
 * @summary Creates an SLS log delivery task for Cloud Firewall.
 *
 * @param request CreateSlsLogDispatchRequest
 * @return CreateSlsLogDispatchResponse
 */
CreateSlsLogDispatchResponse Client::createSlsLogDispatch(const CreateSlsLogDispatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSlsLogDispatchWithOptions(request, runtime);
}

/**
 * @summary Creates a VPC firewall for a transit router. Prerequisites: (1) Purchase Cloud Firewall is completed. (2) A Cloud Enterprise Network (CEN) instance is created and an Enterprise Edition transit router (TR) to forward traffic and manage routing is enabled. (3) TR synchronization to Cloud Firewall is completed.
 *
 * @description Creates a virtual private cloud (VPC) firewall for an Enterprise Edition transit router (TR). Before calling this operation, you must create a CEN instance and an Enterprise Edition transit router in the CEN console, and synchronize the transit router to Cloud Firewall. Then, call this operation by using the CEN ID, TransitRouterId, RegionNo, and RouteMode parameters.
 *
 * @param request CreateTrFirewallV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTrFirewallV2Response
 */
CreateTrFirewallV2Response Client::createTrFirewallV2WithOptions(const CreateTrFirewallV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasFirewallAttachmentZone()) {
    query["FirewallAttachmentZone"] = request.getFirewallAttachmentZone();
  }

  if (!!request.hasFirewallDescription()) {
    query["FirewallDescription"] = request.getFirewallDescription();
  }

  if (!!request.hasFirewallName()) {
    query["FirewallName"] = request.getFirewallName();
  }

  if (!!request.hasFirewallServiceMode()) {
    query["FirewallServiceMode"] = request.getFirewallServiceMode();
  }

  if (!!request.hasFirewallServiceZones()) {
    query["FirewallServiceZones"] = request.getFirewallServiceZones();
  }

  if (!!request.hasFirewallSubnetCidr()) {
    query["FirewallSubnetCidr"] = request.getFirewallSubnetCidr();
  }

  if (!!request.hasFirewallVpcCidr()) {
    query["FirewallVpcCidr"] = request.getFirewallVpcCidr();
  }

  if (!!request.hasFirewallVpcId()) {
    query["FirewallVpcId"] = request.getFirewallVpcId();
  }

  if (!!request.hasFirewallVswitchId()) {
    query["FirewallVswitchId"] = request.getFirewallVswitchId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasRouteMode()) {
    query["RouteMode"] = request.getRouteMode();
  }

  if (!!request.hasTrAttachmentMasterCidr()) {
    query["TrAttachmentMasterCidr"] = request.getTrAttachmentMasterCidr();
  }

  if (!!request.hasTrAttachmentMasterZone()) {
    query["TrAttachmentMasterZone"] = request.getTrAttachmentMasterZone();
  }

  if (!!request.hasTrAttachmentSlaveCidr()) {
    query["TrAttachmentSlaveCidr"] = request.getTrAttachmentSlaveCidr();
  }

  if (!!request.hasTrAttachmentSlaveZone()) {
    query["TrAttachmentSlaveZone"] = request.getTrAttachmentSlaveZone();
  }

  if (!!request.hasTrAttachmentZones()) {
    query["TrAttachmentZones"] = request.getTrAttachmentZones();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
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
 * @summary Creates a VPC firewall for a transit router. Prerequisites: (1) Purchase Cloud Firewall is completed. (2) A Cloud Enterprise Network (CEN) instance is created and an Enterprise Edition transit router (TR) to forward traffic and manage routing is enabled. (3) TR synchronization to Cloud Firewall is completed.
 *
 * @description Creates a virtual private cloud (VPC) firewall for an Enterprise Edition transit router (TR). Before calling this operation, you must create a CEN instance and an Enterprise Edition transit router in the CEN console, and synchronize the transit router to Cloud Firewall. Then, call this operation by using the CEN ID, TransitRouterId, RegionNo, and RouteMode parameters.
 *
 * @param request CreateTrFirewallV2Request
 * @return CreateTrFirewallV2Response
 */
CreateTrFirewallV2Response Client::createTrFirewallV2(const CreateTrFirewallV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTrFirewallV2WithOptions(request, runtime);
}

/**
 * @summary Creates a routing rule for a VPC firewall for a transit router. Prerequisites: Activate Cloud Firewall > Create a CEN instance > Create an Enterprise Edition transit router > Add the VPC to the transit router route table > Call CreateTrFirewallV2 to create a VPC firewall for a transit router.
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
    request.setDestCandidateListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDestCandidateList(), "DestCandidateList", "json"));
  }

  if (!!tmpReq.hasSrcCandidateList()) {
    request.setSrcCandidateListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSrcCandidateList(), "SrcCandidateList", "json"));
  }

  json query = {};
  if (!!request.hasDestCandidateListShrink()) {
    query["DestCandidateList"] = request.getDestCandidateListShrink();
  }

  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.getFirewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPolicyDescription()) {
    query["PolicyDescription"] = request.getPolicyDescription();
  }

  if (!!request.hasPolicyName()) {
    query["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasSrcCandidateListShrink()) {
    query["SrcCandidateList"] = request.getSrcCandidateListShrink();
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
 * @summary Creates a routing rule for a VPC firewall for a transit router. Prerequisites: Activate Cloud Firewall > Create a CEN instance > Create an Enterprise Edition transit router > Add the VPC to the transit router route table > Call CreateTrFirewallV2 to create a VPC firewall for a transit router.
 *
 * @param request CreateTrFirewallV2RoutePolicyRequest
 * @return CreateTrFirewallV2RoutePolicyResponse
 */
CreateTrFirewallV2RoutePolicyResponse Client::createTrFirewallV2RoutePolicy(const CreateTrFirewallV2RoutePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTrFirewallV2RoutePolicyWithOptions(request, runtime);
}

/**
 * @summary Creates virtual private cloud (VPC) firewalls at the border to protect mutual access traffic between network instances in a Cloud Enterprise Network (CEN) and a specified VPC. You do not need to create a VPC specifically for this.
 *
 * @description This operation is typically used to create virtual private cloud (VPC) firewalls at the border for VPC-connected instances in a CEN. The virtual private cloud (VPC) firewalls protect mutual access traffic between network instances (including VPCs, VBRs, and CCNs) in the CEN and a specified VPC. It does not protect mutual access traffic between VBRs, between CCNs, or between a VBR and a CCN. Prerequisites: (1) Invoke the CreateCen operation to create a CEN. (2) Create a VPC (at least two VPCs are required). (3) Invoke the AttachCenChildInstance operation to associate the VPCs with the CEN. (4) The CEN has no conflicting route maps or transit router (TR) routing. For more information, see [Limits on virtual private cloud (VPC) firewalls](https://help.aliyun.com/document_detail/172295.html).
 * ## QPS limits
 * The QPS limit per user is 10 calls per second. If you exceed the limit, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
 *
 * @param request CreateVpcFirewallCenConfigureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcFirewallCenConfigureResponse
 */
CreateVpcFirewallCenConfigureResponse Client::createVpcFirewallCenConfigureWithOptions(const CreateVpcFirewallCenConfigureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasFirewallSwitch()) {
    query["FirewallSwitch"] = request.getFirewallSwitch();
  }

  if (!!request.hasFirewallVSwitchCidrBlock()) {
    query["FirewallVSwitchCidrBlock"] = request.getFirewallVSwitchCidrBlock();
  }

  if (!!request.hasFirewallVSwitchZoneId()) {
    query["FirewallVSwitchZoneId"] = request.getFirewallVSwitchZoneId();
  }

  if (!!request.hasFirewallVpcCidrBlock()) {
    query["FirewallVpcCidrBlock"] = request.getFirewallVpcCidrBlock();
  }

  if (!!request.hasFirewallVpcStandbyZoneId()) {
    query["FirewallVpcStandbyZoneId"] = request.getFirewallVpcStandbyZoneId();
  }

  if (!!request.hasFirewallVpcZoneId()) {
    query["FirewallVpcZoneId"] = request.getFirewallVpcZoneId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasNetworkInstanceId()) {
    query["NetworkInstanceId"] = request.getNetworkInstanceId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcFirewallName()) {
    query["VpcFirewallName"] = request.getVpcFirewallName();
  }

  if (!!request.hasVpcRegion()) {
    query["VpcRegion"] = request.getVpcRegion();
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
 * @summary Creates virtual private cloud (VPC) firewalls at the border to protect mutual access traffic between network instances in a Cloud Enterprise Network (CEN) and a specified VPC. You do not need to create a VPC specifically for this.
 *
 * @description This operation is typically used to create virtual private cloud (VPC) firewalls at the border for VPC-connected instances in a CEN. The virtual private cloud (VPC) firewalls protect mutual access traffic between network instances (including VPCs, VBRs, and CCNs) in the CEN and a specified VPC. It does not protect mutual access traffic between VBRs, between CCNs, or between a VBR and a CCN. Prerequisites: (1) Invoke the CreateCen operation to create a CEN. (2) Create a VPC (at least two VPCs are required). (3) Invoke the AttachCenChildInstance operation to associate the VPCs with the CEN. (4) The CEN has no conflicting route maps or transit router (TR) routing. For more information, see [Limits on virtual private cloud (VPC) firewalls](https://help.aliyun.com/document_detail/172295.html).
 * ## QPS limits
 * The QPS limit per user is 10 calls per second. If you exceed the limit, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
 *
 * @param request CreateVpcFirewallCenConfigureRequest
 * @return CreateVpcFirewallCenConfigureResponse
 */
CreateVpcFirewallCenConfigureResponse Client::createVpcFirewallCenConfigure(const CreateVpcFirewallCenConfigureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcFirewallCenConfigureWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CreateVpcFirewallCenManualConfigure is deprecated
 *
 * @summary Creates a manual configuration to create a VPC firewall.
 *
 * @description This operation is typically used to create a VPC firewall for VPC-connected instances in a Cloud Enterprise Network (CEN). The VPC firewall protects the traffic between network instances in the CEN and the specified VPC. The network instances include VPCs, virtual border routers (VBRs), and Cloud Connect Networks (CCNs). The VPC firewall does not protect the traffic between VBRs, between CCNs, or between a VBR and a CCN. For more information, see [Limits on VPC firewalls](https://help.aliyun.com/document_detail/172295.html).
 * ## QPS limits
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Invoke the API at a reasonable frequency.
 *
 * @param request CreateVpcFirewallCenManualConfigureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcFirewallCenManualConfigureResponse
 */
CreateVpcFirewallCenManualConfigureResponse Client::createVpcFirewallCenManualConfigureWithOptions(const CreateVpcFirewallCenManualConfigureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcFirewallName()) {
    query["VpcFirewallName"] = request.getVpcFirewallName();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
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
 * @deprecated OpenAPI CreateVpcFirewallCenManualConfigure is deprecated
 *
 * @summary Creates a manual configuration to create a VPC firewall.
 *
 * @description This operation is typically used to create a VPC firewall for VPC-connected instances in a Cloud Enterprise Network (CEN). The VPC firewall protects the traffic between network instances in the CEN and the specified VPC. The network instances include VPCs, virtual border routers (VBRs), and Cloud Connect Networks (CCNs). The VPC firewall does not protect the traffic between VBRs, between CCNs, or between a VBR and a CCN. For more information, see [Limits on VPC firewalls](https://help.aliyun.com/document_detail/172295.html).
 * ## QPS limits
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Invoke the API at a reasonable frequency.
 *
 * @param request CreateVpcFirewallCenManualConfigureRequest
 * @return CreateVpcFirewallCenManualConfigureResponse
 */
CreateVpcFirewallCenManualConfigureResponse Client::createVpcFirewallCenManualConfigure(const CreateVpcFirewallCenManualConfigureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcFirewallCenManualConfigureWithOptions(request, runtime);
}

/**
 * @summary Creates a virtual private cloud (VPC) firewall that protects traffic between two VPCs connected through Express Connect.
 *
 * @description This operation is used to create a VPC firewall. This virtual private cloud (VPC) firewall protects traffic between two VPCs connected through Express Connect. This VPC firewall does not support protection for cross-region traffic, cross-account traffic, or traffic between a VPC and a virtual border router (VBR). For more information, see [VPC firewall limits](https://help.aliyun.com/document_detail/172295.html).
 * ### Rate limit
 * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API invocations are throttled, which may affect your business. Manage your invocations appropriately.
 *
 * @param request CreateVpcFirewallConfigureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcFirewallConfigureResponse
 */
CreateVpcFirewallConfigureResponse Client::createVpcFirewallConfigureWithOptions(const CreateVpcFirewallConfigureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallSwitch()) {
    query["FirewallSwitch"] = request.getFirewallSwitch();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLocalVpcCidrTableList()) {
    query["LocalVpcCidrTableList"] = request.getLocalVpcCidrTableList();
  }

  if (!!request.hasLocalVpcId()) {
    query["LocalVpcId"] = request.getLocalVpcId();
  }

  if (!!request.hasLocalVpcRegion()) {
    query["LocalVpcRegion"] = request.getLocalVpcRegion();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasPeerVpcCidrTableList()) {
    query["PeerVpcCidrTableList"] = request.getPeerVpcCidrTableList();
  }

  if (!!request.hasPeerVpcId()) {
    query["PeerVpcId"] = request.getPeerVpcId();
  }

  if (!!request.hasPeerVpcRegion()) {
    query["PeerVpcRegion"] = request.getPeerVpcRegion();
  }

  if (!!request.hasVpcFirewallName()) {
    query["VpcFirewallName"] = request.getVpcFirewallName();
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
 * @summary Creates a virtual private cloud (VPC) firewall that protects traffic between two VPCs connected through Express Connect.
 *
 * @description This operation is used to create a VPC firewall. This virtual private cloud (VPC) firewall protects traffic between two VPCs connected through Express Connect. This VPC firewall does not support protection for cross-region traffic, cross-account traffic, or traffic between a VPC and a virtual border router (VBR). For more information, see [VPC firewall limits](https://help.aliyun.com/document_detail/172295.html).
 * ### Rate limit
 * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API invocations are throttled, which may affect your business. Manage your invocations appropriately.
 *
 * @param request CreateVpcFirewallConfigureRequest
 * @return CreateVpcFirewallConfigureResponse
 */
CreateVpcFirewallConfigureResponse Client::createVpcFirewallConfigure(const CreateVpcFirewallConfigureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcFirewallConfigureWithOptions(request, runtime);
}

/**
 * @summary Adds an access control policy to a specified VPC firewall policy group.
 *
 * @description This operation is used to add an access control policy to a specified virtual private cloud (VPC) firewall policy group. Different access control policies are used when a VPC firewall protects traffic between two VPCs connected through a Cloud Enterprise Network (CEN) instance or traffic between two VPCs connected through an Express Connect circuit.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Invoke this operation as appropriate.
 *
 * @param request CreateVpcFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcFirewallControlPolicyResponse
 */
CreateVpcFirewallControlPolicyResponse Client::createVpcFirewallControlPolicyWithOptions(const CreateVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.getAclAction();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasApplicationNameList()) {
    query["ApplicationNameList"] = request.getApplicationNameList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestPort()) {
    query["DestPort"] = request.getDestPort();
  }

  if (!!request.hasDestPortGroup()) {
    query["DestPortGroup"] = request.getDestPortGroup();
  }

  if (!!request.hasDestPortType()) {
    query["DestPortType"] = request.getDestPortType();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.getDestination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.getDestinationType();
  }

  if (!!request.hasDomainResolveType()) {
    query["DomainResolveType"] = request.getDomainResolveType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasNewOrder()) {
    query["NewOrder"] = request.getNewOrder();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.getProto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.getRelease();
  }

  if (!!request.hasRepeatDays()) {
    query["RepeatDays"] = request.getRepeatDays();
  }

  if (!!request.hasRepeatEndTime()) {
    query["RepeatEndTime"] = request.getRepeatEndTime();
  }

  if (!!request.hasRepeatStartTime()) {
    query["RepeatStartTime"] = request.getRepeatStartTime();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.getRepeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
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
 * @summary Adds an access control policy to a specified VPC firewall policy group.
 *
 * @description This operation is used to add an access control policy to a specified virtual private cloud (VPC) firewall policy group. Different access control policies are used when a VPC firewall protects traffic between two VPCs connected through a Cloud Enterprise Network (CEN) instance or traffic between two VPCs connected through an Express Connect circuit.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Invoke this operation as appropriate.
 *
 * @param request CreateVpcFirewallControlPolicyRequest
 * @return CreateVpcFirewallControlPolicyResponse
 */
CreateVpcFirewallControlPolicyResponse Client::createVpcFirewallControlPolicy(const CreateVpcFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a prerequisite task for enabling a VPC firewall.
 *
 * @description Creates a policy to allow, deny, or monitor traffic passing through a NAT firewall.
 *
 * @param request CreateVpcFirewallPrecheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcFirewallPrecheckResponse
 */
CreateVpcFirewallPrecheckResponse Client::createVpcFirewallPrecheckWithOptions(const CreateVpcFirewallPrecheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasNetworkInstanceType()) {
    query["NetworkInstanceType"] = request.getNetworkInstanceType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
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
 * @summary Creates a prerequisite task for enabling a VPC firewall.
 *
 * @description Creates a policy to allow, deny, or monitor traffic passing through a NAT firewall.
 *
 * @param request CreateVpcFirewallPrecheckRequest
 * @return CreateVpcFirewallPrecheckResponse
 */
CreateVpcFirewallPrecheckResponse Client::createVpcFirewallPrecheck(const CreateVpcFirewallPrecheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcFirewallPrecheckWithOptions(request, runtime);
}

/**
 * @summary Creates a VPC firewall asset synchronization task.
 *
 * @description This operation is typically used to create a VPC firewall. The VPC firewall protects traffic between two VPCs that are connected by using Express Connect. The VPC firewall does not support protecting cross-region or cross-account traffic between VPCs, or traffic between a VPC and a virtual border router (VBR). For more information, see [Limits on VPC firewalls](https://help.aliyun.com/document_detail/172295.html).
 * ### QPS limit
 * The QPS limit on this operation is 10 queries per second per account. API calls that exceed this limit are throttled, which may affect your business. Call this operation at a reasonable rate.
 *
 * @param request CreateVpcFirewallTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVpcFirewallTaskResponse
 */
CreateVpcFirewallTaskResponse Client::createVpcFirewallTaskWithOptions(const CreateVpcFirewallTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasTaskAction()) {
    query["TaskAction"] = request.getTaskAction();
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
 * @summary Creates a VPC firewall asset synchronization task.
 *
 * @description This operation is typically used to create a VPC firewall. The VPC firewall protects traffic between two VPCs that are connected by using Express Connect. The VPC firewall does not support protecting cross-region or cross-account traffic between VPCs, or traffic between a VPC and a virtual border router (VBR). For more information, see [Limits on VPC firewalls](https://help.aliyun.com/document_detail/172295.html).
 * ### QPS limit
 * The QPS limit on this operation is 10 queries per second per account. API calls that exceed this limit are throttled, which may affect your business. Call this operation at a reasonable rate.
 *
 * @param request CreateVpcFirewallTaskRequest
 * @return CreateVpcFirewallTaskResponse
 */
CreateVpcFirewallTaskResponse Client::createVpcFirewallTask(const CreateVpcFirewallTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVpcFirewallTaskWithOptions(request, runtime);
}

/**
 * @summary Creates web filtering rules in batches under a specified web filtering template. A maximum of 100 rules can be created at a time, and the total number of rules in the template after creation cannot exceed 100.
 *
 * @param tmpReq CreateWebFilterRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWebFilterRulesResponse
 */
CreateWebFilterRulesResponse Client::createWebFilterRulesWithOptions(const CreateWebFilterRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWebFilterRulesShrinkRequest request = CreateWebFilterRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRules(), "Rules", "json"));
  }

  json query = {};
  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.getRulesShrink();
  }

  if (!!request.hasWebFilterTemplateId()) {
    query["WebFilterTemplateId"] = request.getWebFilterTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWebFilterRules"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWebFilterRulesResponse>();
}

/**
 * @summary Creates web filtering rules in batches under a specified web filtering template. A maximum of 100 rules can be created at a time, and the total number of rules in the template after creation cannot exceed 100.
 *
 * @param request CreateWebFilterRulesRequest
 * @return CreateWebFilterRulesResponse
 */
CreateWebFilterRulesResponse Client::createWebFilterRules(const CreateWebFilterRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWebFilterRulesWithOptions(request, runtime);
}

/**
 * @summary Creates a web filtering template. The template is at user granularity and can be referenced by access control policies of the Internet, NAT, and virtual private cloud (VPC) firewalls. Web filtering rules can be added to the template. Before creating a template, ensure that the web filtering feature is enabled and the number of templates does not exceed the instance quota.
 *
 * @param request CreateWebFilterTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWebFilterTemplateResponse
 */
CreateWebFilterTemplateResponse Client::createWebFilterTemplateWithOptions(const CreateWebFilterTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWebFilterTemplate"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWebFilterTemplateResponse>();
}

/**
 * @summary Creates a web filtering template. The template is at user granularity and can be referenced by access control policies of the Internet, NAT, and virtual private cloud (VPC) firewalls. Web filtering rules can be added to the template. Before creating a template, ensure that the web filtering feature is enabled and the number of templates does not exceed the instance quota.
 *
 * @param request CreateWebFilterTemplateRequest
 * @return CreateWebFilterTemplateResponse
 */
CreateWebFilterTemplateResponse Client::createWebFilterTemplate(const CreateWebFilterTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWebFilterTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes an ACK cluster connector.
 *
 * @description ## Rate limit
 * The rate limit for this API operation is 10 queries per second (QPS) per user. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request DeleteAckClusterConnectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAckClusterConnectorResponse
 */
DeleteAckClusterConnectorResponse Client::deleteAckClusterConnectorWithOptions(const DeleteAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.getConnectorId();
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
 * @summary Deletes an ACK cluster connector.
 *
 * @description ## Rate limit
 * The rate limit for this API operation is 10 queries per second (QPS) per user. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request DeleteAckClusterConnectorRequest
 * @return DeleteAckClusterConnectorResponse
 */
DeleteAckClusterConnectorResponse Client::deleteAckClusterConnector(const DeleteAckClusterConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAckClusterConnectorWithOptions(request, runtime);
}

/**
 * @summary Deletes an ACL backup.
 *
 * @description This operation is typically used to delete address books in access control.
 * ## Rate limits
 * The rate limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DeleteAclBackupDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAclBackupDataResponse
 */
DeleteAclBackupDataResponse Client::deleteAclBackupDataWithOptions(const DeleteAclBackupDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackUpTime()) {
    query["BackUpTime"] = request.getBackUpTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Deletes an ACL backup.
 *
 * @description This operation is typically used to delete address books in access control.
 * ## Rate limits
 * The rate limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DeleteAclBackupDataRequest
 * @return DeleteAclBackupDataResponse
 */
DeleteAclBackupDataResponse Client::deleteAclBackupData(const DeleteAclBackupDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAclBackupDataWithOptions(request, runtime);
}

/**
 * @summary Deletes an address book.
 *
 * @description This operation is used to delete an address book from access control.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
 *
 * @param request DeleteAddressBookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAddressBookResponse
 */
DeleteAddressBookResponse Client::deleteAddressBookWithOptions(const DeleteAddressBookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupUuid()) {
    query["GroupUuid"] = request.getGroupUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Deletes an address book.
 *
 * @description This operation is used to delete an address book from access control.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
 *
 * @param request DeleteAddressBookRequest
 * @return DeleteAddressBookResponse
 */
DeleteAddressBookResponse Client::deleteAddressBook(const DeleteAddressBookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAddressBookWithOptions(request, runtime);
}

/**
 * @summary 删除应用程序自定义规则
 *
 * @param tmpReq DeleteApplicationCustomRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationCustomRulesResponse
 */
DeleteApplicationCustomRulesResponse Client::deleteApplicationCustomRulesWithOptions(const DeleteApplicationCustomRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteApplicationCustomRulesShrinkRequest request = DeleteApplicationCustomRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApplicationCustomRuleIds()) {
    request.setApplicationCustomRuleIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApplicationCustomRuleIds(), "ApplicationCustomRuleIds", "json"));
  }

  json query = {};
  if (!!request.hasApplicationCustomRuleIdsShrink()) {
    query["ApplicationCustomRuleIds"] = request.getApplicationCustomRuleIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplicationCustomRules"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationCustomRulesResponse>();
}

/**
 * @summary 删除应用程序自定义规则
 *
 * @param request DeleteApplicationCustomRulesRequest
 * @return DeleteApplicationCustomRulesResponse
 */
DeleteApplicationCustomRulesResponse Client::deleteApplicationCustomRules(const DeleteApplicationCustomRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationCustomRulesWithOptions(request, runtime);
}

/**
 * @summary 删除应用程序自定义模版
 *
 * @param request DeleteApplicationTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationTemplateResponse
 */
DeleteApplicationTemplateResponse Client::deleteApplicationTemplateWithOptions(const DeleteApplicationTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationTemplateId()) {
    query["ApplicationTemplateId"] = request.getApplicationTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplicationTemplate"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationTemplateResponse>();
}

/**
 * @summary 删除应用程序自定义模版
 *
 * @param request DeleteApplicationTemplateRequest
 * @return DeleteApplicationTemplateResponse
 */
DeleteApplicationTemplateResponse Client::deleteApplicationTemplate(const DeleteApplicationTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes an access control policy.
 *
 * @description This operation is typically used to delete an access control policy whose traffic direction is inbound or outbound.
 * ## QPS limit
 * The QPS limit for a single user is 10 requests per second. If the limit is exceeded, API requests are throttled, which may affect your business. Invoke this operation at a reasonable rate.
 *
 * @param request DeleteControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteControlPolicyResponse
 */
DeleteControlPolicyResponse Client::deleteControlPolicyWithOptions(const DeleteControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @description This operation is typically used to delete an access control policy whose traffic direction is inbound or outbound.
 * ## QPS limit
 * The QPS limit for a single user is 10 requests per second. If the limit is exceeded, API requests are throttled, which may affect your business. Invoke this operation at a reasonable rate.
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
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Deletes a DNS firewall rule.
 *
 * @description Creates a policy to allow, deny, or monitor traffic that passes through a NAT firewall.
 *
 * @param request DeleteDnsFirewallPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDnsFirewallPolicyResponse
 */
DeleteDnsFirewallPolicyResponse Client::deleteDnsFirewallPolicyWithOptions(const DeleteDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Deletes a DNS firewall rule.
 *
 * @description Creates a policy to allow, deny, or monitor traffic that passes through a NAT firewall.
 *
 * @param request DeleteDnsFirewallPolicyRequest
 * @return DeleteDnsFirewallPolicyResponse
 */
DeleteDnsFirewallPolicyResponse Client::deleteDnsFirewallPolicy(const DeleteDnsFirewallPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDnsFirewallPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a file download task.
 *
 * @description Calling this operation immediately deletes the file download task and the downloaded file.
 * >Danger: The delete operation deletes the corresponding task and file. **The file can no longer be downloaded by using the existing download link. This operation is irreversible. Proceed with caution.**.
 *
 * @param request DeleteDownloadTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDownloadTaskResponse
 */
DeleteDownloadTaskResponse Client::deleteDownloadTaskWithOptions(const DeleteDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Deletes a file download task.
 *
 * @description Calling this operation immediately deletes the file download task and the downloaded file.
 * >Danger: The delete operation deletes the corresponding task and file. **The file can no longer be downloaded by using the existing download link. This operation is irreversible. Proceed with caution.**.
 *
 * @param request DeleteDownloadTaskRequest
 * @return DeleteDownloadTaskResponse
 */
DeleteDownloadTaskResponse Client::deleteDownloadTask(const DeleteDownloadTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDownloadTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a routing policy for a VPC firewall for a transit router.
 *
 * @param request DeleteFirewallV2RoutePoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFirewallV2RoutePoliciesResponse
 */
DeleteFirewallV2RoutePoliciesResponse Client::deleteFirewallV2RoutePoliciesWithOptions(const DeleteFirewallV2RoutePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.getFirewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTrFirewallRoutePolicyId()) {
    query["TrFirewallRoutePolicyId"] = request.getTrFirewallRoutePolicyId();
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
 * @summary Deletes a routing policy for a VPC firewall for a transit router.
 *
 * @param request DeleteFirewallV2RoutePoliciesRequest
 * @return DeleteFirewallV2RoutePoliciesResponse
 */
DeleteFirewallV2RoutePoliciesResponse Client::deleteFirewallV2RoutePolicies(const DeleteFirewallV2RoutePoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFirewallV2RoutePoliciesWithOptions(request, runtime);
}

/**
 * @summary Deletes Cloud Firewall member accounts.
 *
 * @description You can delete up to 20 Cloud Firewall member accounts in a single call. Separate the UIDs of multiple member accounts with commas (,). After a member account is deleted, Cloud Firewall can no longer access the cloud resources of that account. Use this operation with caution. Before deleting member accounts, call the [DescribeInstanceMembers](https://help.aliyun.com/document_detail/271704.html) operation to retrieve information about the member accounts.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed the limit, API calls are throttled. This can affect your business operations. Plan your calls accordingly.
 *
 * @param request DeleteInstanceMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceMembersResponse
 */
DeleteInstanceMembersResponse Client::deleteInstanceMembersWithOptions(const DeleteInstanceMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberUids()) {
    query["MemberUids"] = request.getMemberUids();
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
 * @summary Deletes Cloud Firewall member accounts.
 *
 * @description You can delete up to 20 Cloud Firewall member accounts in a single call. Separate the UIDs of multiple member accounts with commas (,). After a member account is deleted, Cloud Firewall can no longer access the cloud resources of that account. Use this operation with caution. Before deleting member accounts, call the [DescribeInstanceMembers](https://help.aliyun.com/document_detail/271704.html) operation to retrieve information about the member accounts.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed the limit, API calls are throttled. This can affect your business operations. Plan your calls accordingly.
 *
 * @param request DeleteInstanceMembersRequest
 * @return DeleteInstanceMembersResponse
 */
DeleteInstanceMembersResponse Client::deleteInstanceMembers(const DeleteInstanceMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceMembersWithOptions(request, runtime);
}

/**
 * @summary Creates a private network association for an IPS.
 *
 * @param request DeleteIpsPrivateAssocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpsPrivateAssocResponse
 */
DeleteIpsPrivateAssocResponse Client::deleteIpsPrivateAssocWithOptions(const DeleteIpsPrivateAssocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
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
 * @summary Creates a private network association for an IPS.
 *
 * @param request DeleteIpsPrivateAssocRequest
 * @return DeleteIpsPrivateAssocResponse
 */
DeleteIpsPrivateAssocResponse Client::deleteIpsPrivateAssoc(const DeleteIpsPrivateAssocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpsPrivateAssocWithOptions(request, runtime);
}

/**
 * @summary Deletes a NAT firewall access control policy.
 *
 * @description This operation is used to delete an access control policy for outbound traffic of a NAT firewall.
 *
 * @param request DeleteNatFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNatFirewallControlPolicyResponse
 */
DeleteNatFirewallControlPolicyResponse Client::deleteNatFirewallControlPolicyWithOptions(const DeleteNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
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
 * @summary Deletes a NAT firewall access control policy.
 *
 * @description This operation is used to delete an access control policy for outbound traffic of a NAT firewall.
 *
 * @param request DeleteNatFirewallControlPolicyRequest
 * @return DeleteNatFirewallControlPolicyResponse
 */
DeleteNatFirewallControlPolicyResponse Client::deleteNatFirewallControlPolicy(const DeleteNatFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNatFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a batch of NAT firewall policies.
 *
 * @param request DeleteNatFirewallControlPolicyBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNatFirewallControlPolicyBatchResponse
 */
DeleteNatFirewallControlPolicyBatchResponse Client::deleteNatFirewallControlPolicyBatchWithOptions(const DeleteNatFirewallControlPolicyBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuidList()) {
    query["AclUuidList"] = request.getAclUuidList();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
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
 * @summary Deletes a batch of NAT firewall policies.
 *
 * @param request DeleteNatFirewallControlPolicyBatchRequest
 * @return DeleteNatFirewallControlPolicyBatchResponse
 */
DeleteNatFirewallControlPolicyBatchResponse Client::deleteNatFirewallControlPolicyBatch(const DeleteNatFirewallControlPolicyBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNatFirewallControlPolicyBatchWithOptions(request, runtime);
}

/**
 * @summary Clears private DNS domain names.
 *
 * @description This API operation is typically used to retrieve the DNS resolution results of a domain name. Currently, resolution results can only be retrieved from Alibaba Cloud DNS. To retrieve the resolution results, the domain name to be queried must use Alibaba Cloud DNS.
 * ## QPS limits
 * The QPS limit per user for this API operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request DeletePrivateDnsAllDomainNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivateDnsAllDomainNameResponse
 */
DeletePrivateDnsAllDomainNameResponse Client::deletePrivateDnsAllDomainNameWithOptions(const DeletePrivateDnsAllDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessInstanceId()) {
    query["AccessInstanceId"] = request.getAccessInstanceId();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
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
 * @summary Clears private DNS domain names.
 *
 * @description This API operation is typically used to retrieve the DNS resolution results of a domain name. Currently, resolution results can only be retrieved from Alibaba Cloud DNS. To retrieve the resolution results, the domain name to be queried must use Alibaba Cloud DNS.
 * ## QPS limits
 * The QPS limit per user for this API operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request DeletePrivateDnsAllDomainNameRequest
 * @return DeletePrivateDnsAllDomainNameResponse
 */
DeletePrivateDnsAllDomainNameResponse Client::deletePrivateDnsAllDomainName(const DeletePrivateDnsAllDomainNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrivateDnsAllDomainNameWithOptions(request, runtime);
}

/**
 * @summary Deletes a private DNS domain name.
 *
 * @description Deletes a domain name that requires private DNS resolution.
 *
 * @param request DeletePrivateDnsDomainNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivateDnsDomainNameResponse
 */
DeletePrivateDnsDomainNameResponse Client::deletePrivateDnsDomainNameWithOptions(const DeletePrivateDnsDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessInstanceId()) {
    query["AccessInstanceId"] = request.getAccessInstanceId();
  }

  if (!!request.hasDomainNameList()) {
    query["DomainNameList"] = request.getDomainNameList();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
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
 * @summary Deletes a private DNS domain name.
 *
 * @description Deletes a domain name that requires private DNS resolution.
 *
 * @param request DeletePrivateDnsDomainNameRequest
 * @return DeletePrivateDnsDomainNameResponse
 */
DeletePrivateDnsDomainNameResponse Client::deletePrivateDnsDomainName(const DeletePrivateDnsDomainNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrivateDnsDomainNameWithOptions(request, runtime);
}

/**
 * @summary Deletes a private DNS endpoint.
 *
 * @description Creates a policy to allow, deny, or monitor traffic that passes through a NAT firewall.
 *
 * @param request DeletePrivateDnsEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivateDnsEndpointResponse
 */
DeletePrivateDnsEndpointResponse Client::deletePrivateDnsEndpointWithOptions(const DeletePrivateDnsEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessInstanceId()) {
    query["AccessInstanceId"] = request.getAccessInstanceId();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
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
 * @summary Deletes a private DNS endpoint.
 *
 * @description Creates a policy to allow, deny, or monitor traffic that passes through a NAT firewall.
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
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProxyId()) {
    query["ProxyId"] = request.getProxyId();
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
 * @summary Deletes a VPC firewall for a transit router.
 *
 * @param request DeleteTrFirewallV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTrFirewallV2Response
 */
DeleteTrFirewallV2Response Client::deleteTrFirewallV2WithOptions(const DeleteTrFirewallV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.getFirewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Deletes a VPC firewall for a transit router.
 *
 * @param request DeleteTrFirewallV2Request
 * @return DeleteTrFirewallV2Response
 */
DeleteTrFirewallV2Response Client::deleteTrFirewallV2(const DeleteTrFirewallV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTrFirewallV2WithOptions(request, runtime);
}

/**
 * @summary Deletes a virtual private cloud (VPC) firewall that protects mutual access traffic between a network instance in a Cloud Enterprise Network (CEN) instance and a specified VPC.
 *
 * @description This operation is used to delete a virtual private cloud (VPC) firewall that protects mutual access traffic between network instances (including VPCs, virtual border routers (VBRs), and Cloud Connect Networks (CCNs)) in a CEN instance and a specified VPC.
 * Before you invoke this operation, you must have already created a VPC border firewall by invoking the [CreateVpcFirewallCenConfigure](https://help.aliyun.com/document_detail/345772.html) operation.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Invoke this operation as needed.
 *
 * @param request DeleteVpcFirewallCenConfigureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVpcFirewallCenConfigureResponse
 */
DeleteVpcFirewallCenConfigureResponse Client::deleteVpcFirewallCenConfigureWithOptions(const DeleteVpcFirewallCenConfigureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasVpcFirewallIdList()) {
    query["VpcFirewallIdList"] = request.getVpcFirewallIdList();
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
 * @summary Deletes a virtual private cloud (VPC) firewall that protects mutual access traffic between a network instance in a Cloud Enterprise Network (CEN) instance and a specified VPC.
 *
 * @description This operation is used to delete a virtual private cloud (VPC) firewall that protects mutual access traffic between network instances (including VPCs, virtual border routers (VBRs), and Cloud Connect Networks (CCNs)) in a CEN instance and a specified VPC.
 * Before you invoke this operation, you must have already created a VPC border firewall by invoking the [CreateVpcFirewallCenConfigure](https://help.aliyun.com/document_detail/345772.html) operation.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Invoke this operation as needed.
 *
 * @param request DeleteVpcFirewallCenConfigureRequest
 * @return DeleteVpcFirewallCenConfigureResponse
 */
DeleteVpcFirewallCenConfigureResponse Client::deleteVpcFirewallCenConfigure(const DeleteVpcFirewallCenConfigureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVpcFirewallCenConfigureWithOptions(request, runtime);
}

/**
 * @summary Deletes a virtual private cloud (VPC) firewall that protects traffic between two VPCs connected through Express Connect.
 *
 * @description This operation is used to delete a virtual private cloud (VPC) firewall that protects traffic between two VPCs connected through Express Connect.
 * Before you invoke this operation, you must have already created a VPC firewall by invoking the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation.
 * This operation is asynchronous. After a successful invocation, the status changes to deleting. Poll DescribeVpcFirewallList until the target VpcFirewallId no longer appears. The firewall to be deleted must be in the opened or closed state. Firewalls in the notconfigured or deleting state cannot be deleted, and the ErrorFirewallStatus error is returned.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation appropriately.
 *
 * @param request DeleteVpcFirewallConfigureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVpcFirewallConfigureResponse
 */
DeleteVpcFirewallConfigureResponse Client::deleteVpcFirewallConfigureWithOptions(const DeleteVpcFirewallConfigureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasVpcFirewallIdList()) {
    query["VpcFirewallIdList"] = request.getVpcFirewallIdList();
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
 * @summary Deletes a virtual private cloud (VPC) firewall that protects traffic between two VPCs connected through Express Connect.
 *
 * @description This operation is used to delete a virtual private cloud (VPC) firewall that protects traffic between two VPCs connected through Express Connect.
 * Before you invoke this operation, you must have already created a VPC firewall by invoking the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation.
 * This operation is asynchronous. After a successful invocation, the status changes to deleting. Poll DescribeVpcFirewallList until the target VpcFirewallId no longer appears. The firewall to be deleted must be in the opened or closed state. Firewalls in the notconfigured or deleting state cannot be deleted, and the ErrorFirewallStatus error is returned.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation appropriately.
 *
 * @param request DeleteVpcFirewallConfigureRequest
 * @return DeleteVpcFirewallConfigureResponse
 */
DeleteVpcFirewallConfigureResponse Client::deleteVpcFirewallConfigure(const DeleteVpcFirewallConfigureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVpcFirewallConfigureWithOptions(request, runtime);
}

/**
 * @summary Deletes an access control policy from a specified VPC firewall policy group.
 *
 * @description This operation is used to delete an access control policy from a specified VPC firewall policy group. The VPC firewall instances that protect Cloud Enterprise Network (CEN) instances and the VPC firewall instances that protect Express Connect circuits use different access control policies.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Call this operation as appropriate.
 *
 * @param request DeleteVpcFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVpcFirewallControlPolicyResponse
 */
DeleteVpcFirewallControlPolicyResponse Client::deleteVpcFirewallControlPolicyWithOptions(const DeleteVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
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
 * @summary Deletes an access control policy from a specified VPC firewall policy group.
 *
 * @description This operation is used to delete an access control policy from a specified VPC firewall policy group. The VPC firewall instances that protect Cloud Enterprise Network (CEN) instances and the VPC firewall instances that protect Express Connect circuits use different access control policies.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Call this operation as appropriate.
 *
 * @param request DeleteVpcFirewallControlPolicyRequest
 * @return DeleteVpcFirewallControlPolicyResponse
 */
DeleteVpcFirewallControlPolicyResponse Client::deleteVpcFirewallControlPolicy(const DeleteVpcFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVpcFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes web filtering rules in batches. A maximum of 100 rules can be deleted in a single request. This operation is idempotent and returns a success response even if none of the specified rule IDs exist.
 *
 * @param tmpReq DeleteWebFilterRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWebFilterRulesResponse
 */
DeleteWebFilterRulesResponse Client::deleteWebFilterRulesWithOptions(const DeleteWebFilterRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteWebFilterRulesShrinkRequest request = DeleteWebFilterRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWebFilterRuleIds()) {
    request.setWebFilterRuleIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWebFilterRuleIds(), "WebFilterRuleIds", "json"));
  }

  json query = {};
  if (!!request.hasWebFilterRuleIdsShrink()) {
    query["WebFilterRuleIds"] = request.getWebFilterRuleIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWebFilterRules"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWebFilterRulesResponse>();
}

/**
 * @summary Deletes web filtering rules in batches. A maximum of 100 rules can be deleted in a single request. This operation is idempotent and returns a success response even if none of the specified rule IDs exist.
 *
 * @param request DeleteWebFilterRulesRequest
 * @return DeleteWebFilterRulesResponse
 */
DeleteWebFilterRulesResponse Client::deleteWebFilterRules(const DeleteWebFilterRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWebFilterRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes a web filtering template. Deleting a template also deletes all web filtering rules in the template. A template cannot be deleted if it is referenced by an access control policy.
 *
 * @param request DeleteWebFilterTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWebFilterTemplateResponse
 */
DeleteWebFilterTemplateResponse Client::deleteWebFilterTemplateWithOptions(const DeleteWebFilterTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWebFilterTemplateId()) {
    query["WebFilterTemplateId"] = request.getWebFilterTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWebFilterTemplate"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWebFilterTemplateResponse>();
}

/**
 * @summary Deletes a web filtering template. Deleting a template also deletes all web filtering rules in the template. A template cannot be deleted if it is referenced by an access control policy.
 *
 * @param request DeleteWebFilterTemplateRequest
 * @return DeleteWebFilterTemplateResponse
 */
DeleteWebFilterTemplateResponse Client::deleteWebFilterTemplate(const DeleteWebFilterTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWebFilterTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the trend chart for Internet access control blocks.
 *
 * @param request DescribeACLProtectTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeACLProtectTrendResponse
 */
DescribeACLProtectTrendResponse Client::describeACLProtectTrendWithOptions(const DescribeACLProtectTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFirewallType()) {
    query["FirewallType"] = request.getFirewallType();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the trend chart for Internet access control blocks.
 *
 * @param request DescribeACLProtectTrendRequest
 * @return DescribeACLProtectTrendResponse
 */
DescribeACLProtectTrendResponse Client::describeACLProtectTrend(const DescribeACLProtectTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeACLProtectTrendWithOptions(request, runtime);
}

/**
 * @summary Queries the enabling status of AI-based network traffic analysis.
 *
 * @description The statistical scope covers the current Cloud Firewall instance of the user, including all data since the purchase date.
 * ## Before you begin
 * - Before you call this operation, the account must have purchased Purchase Cloud Firewall instance. If no instance is purchased, the operation returns the error code `202`.
 * - You can call [DescribeUserBuyVersion](~~DescribeUserBuyVersion~~) to query the purchase status. The `UserStatus` field in the response indicates whether the Cloud Firewall instance is valid. A value of `false` indicates that the instance is invalid or not activated.
 * - Purchase Purchase Cloud Firewall instance:
 *   - China site: https://common-buy.aliyun.com/?commodityCode=cfw_sub_public_cn
 *   - International site: https://common-buy-intl.alibabacloud.com/?commodityCode=cfw_sub_public_intl
 *
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
 * @summary Queries the enabling status of AI-based network traffic analysis.
 *
 * @description The statistical scope covers the current Cloud Firewall instance of the user, including all data since the purchase date.
 * ## Before you begin
 * - Before you call this operation, the account must have purchased Purchase Cloud Firewall instance. If no instance is purchased, the operation returns the error code `202`.
 * - You can call [DescribeUserBuyVersion](~~DescribeUserBuyVersion~~) to query the purchase status. The `UserStatus` field in the response indicates whether the Cloud Firewall instance is valid. A value of `false` indicates that the instance is invalid or not activated.
 * - Purchase Purchase Cloud Firewall instance:
 *   - China site: https://common-buy.aliyun.com/?commodityCode=cfw_sub_public_cn
 *   - International site: https://common-buy-intl.alibabacloud.com/?commodityCode=cfw_sub_public_intl
 *
 * @return DescribeAITrafficAnalysisStatusResponse
 */
DescribeAITrafficAnalysisStatusResponse Client::describeAITrafficAnalysisStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAITrafficAnalysisStatusWithOptions(runtime);
}

/**
 * @summary Queries the regions for synchronization nodes.
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
 * @summary Queries the regions for synchronization nodes.
 *
 * @param request DescribeAccessInstanceRegionListRequest
 * @return DescribeAccessInstanceRegionListResponse
 */
DescribeAccessInstanceRegionListResponse Client::describeAccessInstanceRegionList(const DescribeAccessInstanceRegionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessInstanceRegionListWithOptions(request, runtime);
}

/**
 * @summary Queries the progress of a synchronization node task.
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
 * @summary Queries the progress of a synchronization node task.
 *
 * @param request DescribeAccessInstanceTaskRequest
 * @return DescribeAccessInstanceTaskResponse
 */
DescribeAccessInstanceTaskResponse Client::describeAccessInstanceTask(const DescribeAccessInstanceTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessInstanceTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the vSwitches for synchronization nodes.
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
 * @summary Queries the vSwitches for synchronization nodes.
 *
 * @param request DescribeAccessInstanceVSwitchListRequest
 * @return DescribeAccessInstanceVSwitchListResponse
 */
DescribeAccessInstanceVSwitchListResponse Client::describeAccessInstanceVSwitchList(const DescribeAccessInstanceVSwitchListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessInstanceVSwitchListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of VPCs for synchronization nodes.
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
 * @summary Queries the list of VPCs for synchronization nodes.
 *
 * @param request DescribeAccessInstanceVpcListRequest
 * @return DescribeAccessInstanceVpcListResponse
 */
DescribeAccessInstanceVpcListResponse Client::describeAccessInstanceVpcList(const DescribeAccessInstanceVpcListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessInstanceVpcListWithOptions(request, runtime);
}

/**
 * @summary Queries the available zones for synchronization nodes.
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
 * @summary Queries the available zones for synchronization nodes.
 *
 * @param request DescribeAccessInstanceZoneListRequest
 * @return DescribeAccessInstanceZoneListResponse
 */
DescribeAccessInstanceZoneListResponse Client::describeAccessInstanceZoneList(const DescribeAccessInstanceZoneListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessInstanceZoneListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified ACK cluster connector.
 *
 * @param request DescribeAckClusterConnectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAckClusterConnectorResponse
 */
DescribeAckClusterConnectorResponse Client::describeAckClusterConnectorWithOptions(const DescribeAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.getConnectorId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Queries the details of a specified ACK cluster connector.
 *
 * @param request DescribeAckClusterConnectorRequest
 * @return DescribeAckClusterConnectorResponse
 */
DescribeAckClusterConnectorResponse Client::describeAckClusterConnector(const DescribeAckClusterConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAckClusterConnectorWithOptions(request, runtime);
}

/**
 * @summary Lists the ACK cluster connectors.
 *
 * @description ## QPS limit
 * The rate limit for this API operation is 10 queries per second (QPS) per user. If you exceed the limit, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request DescribeAckClusterConnectorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAckClusterConnectorsResponse
 */
DescribeAckClusterConnectorsResponse Client::describeAckClusterConnectorsWithOptions(const DescribeAckClusterConnectorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasConnectorName()) {
    query["ConnectorName"] = request.getConnectorName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
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
 * @summary Lists the ACK cluster connectors.
 *
 * @description ## QPS limit
 * The rate limit for this API operation is 10 queries per second (QPS) per user. If you exceed the limit, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request DescribeAckClusterConnectorsRequest
 * @return DescribeAckClusterConnectorsResponse
 */
DescribeAckClusterConnectorsResponse Client::describeAckClusterConnectors(const DescribeAckClusterConnectorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAckClusterConnectorsWithOptions(request, runtime);
}

/**
 * @summary Queries the namespaces of an Alibaba Cloud Container Service for Kubernetes (ACK) cluster.
 *
 * @param request DescribeAckClusterNamespacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAckClusterNamespacesResponse
 */
DescribeAckClusterNamespacesResponse Client::describeAckClusterNamespacesWithOptions(const DescribeAckClusterNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.getConnectorId();
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
 * @summary Queries the namespaces of an Alibaba Cloud Container Service for Kubernetes (ACK) cluster.
 *
 * @param request DescribeAckClusterNamespacesRequest
 * @return DescribeAckClusterNamespacesResponse
 */
DescribeAckClusterNamespacesResponse Client::describeAckClusterNamespaces(const DescribeAckClusterNamespacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAckClusterNamespacesWithOptions(request, runtime);
}

/**
 * @summary Queries the tags of an Alibaba Cloud Container Service for Kubernetes (ACK) cluster.
 *
 * @param request DescribeAckClusterPodLabelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAckClusterPodLabelsResponse
 */
DescribeAckClusterPodLabelsResponse Client::describeAckClusterPodLabelsWithOptions(const DescribeAckClusterPodLabelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.getConnectorId();
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
 * @summary Queries the tags of an Alibaba Cloud Container Service for Kubernetes (ACK) cluster.
 *
 * @param request DescribeAckClusterPodLabelsRequest
 * @return DescribeAckClusterPodLabelsResponse
 */
DescribeAckClusterPodLabelsResponse Client::describeAckClusterPodLabels(const DescribeAckClusterPodLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAckClusterPodLabelsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Alibaba Cloud Kubernetes container service (ACK) clusters that meet specified conditions, such as cluster type and specifications.
 *
 * @param request DescribeAckClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAckClustersResponse
 */
DescribeAckClustersResponse Client::describeAckClustersWithOptions(const DescribeAckClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasClusterSpec()) {
    query["ClusterSpec"] = request.getClusterSpec();
  }

  if (!!request.hasConnectorStatus()) {
    query["ConnectorStatus"] = request.getConnectorStatus();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
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
 * @summary Queries a list of Alibaba Cloud Kubernetes container service (ACK) clusters that meet specified conditions, such as cluster type and specifications.
 *
 * @param request DescribeAckClustersRequest
 * @return DescribeAckClustersResponse
 */
DescribeAckClustersResponse Client::describeAckClusters(const DescribeAckClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAckClustersWithOptions(request, runtime);
}

/**
 * @summary Lists access control applications.
 *
 * @description ## QPS limits
 * The QPS limit per user for this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
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
 * @summary Lists access control applications.
 *
 * @description ## QPS limits
 * The QPS limit per user for this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request DescribeAclAppsRequest
 * @return DescribeAclAppsResponse
 */
DescribeAclAppsResponse Client::describeAclApps(const DescribeAclAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclAppsWithOptions(request, runtime);
}

/**
 * @summary Queries the access control backup list.
 *
 * @param request DescribeAclBackupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAclBackupListResponse
 */
DescribeAclBackupListResponse Client::describeAclBackupListWithOptions(const DescribeAclBackupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAclBackupList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAclBackupListResponse>();
}

/**
 * @summary Queries the access control backup list.
 *
 * @param request DescribeAclBackupListRequest
 * @return DescribeAclBackupListResponse
 */
DescribeAclBackupListResponse Client::describeAclBackupList(const DescribeAclBackupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclBackupListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an ACL check.
 *
 * @description ## QPS limits
 * The QPS limit for a single user is 10 queries per second. If this limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
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
 * @summary Queries the details of an ACL check.
 *
 * @description ## QPS limits
 * The QPS limit for a single user is 10 queries per second. If this limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
 *
 * @param request DescribeAclCheckRequest
 * @return DescribeAclCheckResponse
 */
DescribeAclCheckResponse Client::describeAclCheck(const DescribeAclCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclCheckWithOptions(request, runtime);
}

/**
 * @summary Queries the ACL check quota.
 *
 * @description ## QPS limit
 * The QPS limit per user for this API operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Plan your API calls accordingly.
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
 * @summary Queries the ACL check quota.
 *
 * @description ## QPS limit
 * The QPS limit per user for this API operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Plan your API calls accordingly.
 *
 * @param request DescribeAclCheckQuotaRequest
 * @return DescribeAclCheckQuotaResponse
 */
DescribeAclCheckQuotaResponse Client::describeAclCheckQuota(const DescribeAclCheckQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclCheckQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries ACL check records in batches.
 *
 * @description ## QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
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
 * @summary Queries ACL check records in batches.
 *
 * @description ## QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request DescribeAclChecksRequest
 * @return DescribeAclChecksResponse
 */
DescribeAclChecksResponse Client::describeAclChecks(const DescribeAclChecksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclChecksWithOptions(request, runtime);
}

/**
 * @summary Retrieves the total number of ACL configurations.
 *
 * @description ## QPS limits
 * The QPS limit for a single user calling this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this API operation at a reasonable rate.
 *
 * @param request DescribeAclRuleCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAclRuleCountResponse
 */
DescribeAclRuleCountResponse Client::describeAclRuleCountWithOptions(const DescribeAclRuleCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Retrieves the total number of ACL configurations.
 *
 * @description ## QPS limits
 * The QPS limit for a single user calling this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this API operation at a reasonable rate.
 *
 * @param request DescribeAclRuleCountRequest
 * @return DescribeAclRuleCountResponse
 */
DescribeAclRuleCountResponse Client::describeAclRuleCount(const DescribeAclRuleCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclRuleCountWithOptions(request, runtime);
}

/**
 * @summary Retrieves the ACL whitelist.
 *
 * @description ## QPS limits
 * The QPS limit for a single user for this API operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request DescribeAclWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAclWhitelistResponse
 */
DescribeAclWhitelistResponse Client::describeAclWhitelistWithOptions(const DescribeAclWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Retrieves the ACL whitelist.
 *
 * @description ## QPS limits
 * The QPS limit for a single user for this API operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request DescribeAclWhitelistRequest
 * @return DescribeAclWhitelistResponse
 */
DescribeAclWhitelistResponse Client::describeAclWhitelist(const DescribeAclWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAclWhitelistWithOptions(request, runtime);
}

/**
 * @summary Queries address books in batches.
 *
 * @description This operation is used to query the details of access control policy address books.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
 *
 * @param tmpReq DescribeAddressBookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAddressBookResponse
 */
DescribeAddressBookResponse Client::describeAddressBookWithOptions(const DescribeAddressBookRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeAddressBookShrinkRequest request = DescribeAddressBookShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssetMemberUids()) {
    request.setAssetMemberUidsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssetMemberUids(), "AssetMemberUids", "json"));
  }

  json query = {};
  if (!!request.hasAssetMemberUidsShrink()) {
    query["AssetMemberUids"] = request.getAssetMemberUidsShrink();
  }

  if (!!request.hasContainPort()) {
    query["ContainPort"] = request.getContainPort();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.getGroupType();
  }

  if (!!request.hasGroupUuid()) {
    query["GroupUuid"] = request.getGroupUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
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
 * @summary Queries address books in batches.
 *
 * @description This operation is used to query the details of access control policy address books.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
 *
 * @param request DescribeAddressBookRequest
 * @return DescribeAddressBookResponse
 */
DescribeAddressBookResponse Client::describeAddressBook(const DescribeAddressBookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAddressBookWithOptions(request, runtime);
}

/**
 * @summary 查询应用程序统计
 *
 * @param request DescribeApplicationStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationStatisticsResponse
 */
DescribeApplicationStatisticsResponse Client::describeApplicationStatisticsWithOptions(const DescribeApplicationStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationStatistics"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationStatisticsResponse>();
}

/**
 * @summary 查询应用程序统计
 *
 * @param request DescribeApplicationStatisticsRequest
 * @return DescribeApplicationStatisticsResponse
 */
DescribeApplicationStatisticsResponse Client::describeApplicationStatistics(const DescribeApplicationStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApplicationStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries information about assets protected by Cloud Firewall.
 *
 * @description This API is generally used to query information about assets protected by Cloud Firewall with pagination.
 * ## QPS limit
 * The single-user QPS limit for this API is 10 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please make calls appropriately.
 *
 * @param request DescribeAssetListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAssetListResponse
 */
DescribeAssetListResponse Client::describeAssetListWithOptions(const DescribeAssetListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasNewResourceTag()) {
    query["NewResourceTag"] = request.getNewResourceTag();
  }

  if (!!request.hasOutStatistic()) {
    query["OutStatistic"] = request.getOutStatistic();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSearchItem()) {
    query["SearchItem"] = request.getSearchItem();
  }

  if (!!request.hasSensitiveStatus()) {
    query["SensitiveStatus"] = request.getSensitiveStatus();
  }

  if (!!request.hasSgStatus()) {
    query["SgStatus"] = request.getSgStatus();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
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
 * @summary Queries information about assets protected by Cloud Firewall.
 *
 * @description This API is generally used to query information about assets protected by Cloud Firewall with pagination.
 * ## QPS limit
 * The single-user QPS limit for this API is 10 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please make calls appropriately.
 *
 * @param request DescribeAssetListRequest
 * @return DescribeAssetListResponse
 */
DescribeAssetListResponse Client::describeAssetList(const DescribeAssetListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAssetListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of asset risk levels.
 *
 * @param request DescribeAssetRiskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAssetRiskListResponse
 */
DescribeAssetRiskListResponse Client::describeAssetRiskListWithOptions(const DescribeAssetRiskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpAddrList()) {
    query["IpAddrList"] = request.getIpAddrList();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Retrieves the list of asset risk levels.
 *
 * @param request DescribeAssetRiskListRequest
 * @return DescribeAssetRiskListResponse
 */
DescribeAssetRiskListResponse Client::describeAssetRiskList(const DescribeAssetRiskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAssetRiskListWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics information of assets protected by Cloud Firewall.
 *
 * @param request DescribeAssetStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAssetStatisticResponse
 */
DescribeAssetStatisticResponse Client::describeAssetStatisticWithOptions(const DescribeAssetStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Queries the statistics information of assets protected by Cloud Firewall.
 *
 * @param request DescribeAssetStatisticRequest
 * @return DescribeAssetStatisticResponse
 */
DescribeAssetStatisticResponse Client::describeAssetStatistic(const DescribeAssetStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAssetStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the list of attack categories.
 *
 * @description This operation is typically used to perform a paged query for information about assets protected by Cloud Firewall by using paging.
 * ## QPS limits
 * The QPS limit per user for this operation is 10 requests per second. If the limit is exceeded, API calls are throttled, which may affect your services. Invoke the operation at a reasonable rate.
 *
 * @param request DescribeAttackAppCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAttackAppCategoryResponse
 */
DescribeAttackAppCategoryResponse Client::describeAttackAppCategoryWithOptions(const DescribeAttackAppCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAttackAppCategory"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAttackAppCategoryResponse>();
}

/**
 * @summary Queries the list of attack categories.
 *
 * @description This operation is typically used to perform a paged query for information about assets protected by Cloud Firewall by using paging.
 * ## QPS limits
 * The QPS limit per user for this operation is 10 requests per second. If the limit is exceeded, API calls are throttled, which may affect your services. Invoke the operation at a reasonable rate.
 *
 * @param request DescribeAttackAppCategoryRequest
 * @return DescribeAttackAppCategoryResponse
 */
DescribeAttackAppCategoryResponse Client::describeAttackAppCategory(const DescribeAttackAppCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAttackAppCategoryWithOptions(request, runtime);
}

/**
 * @summary Queries the log delivery status.
 *
 * @param request DescribeBatchSlsDispatchStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBatchSlsDispatchStatusResponse
 */
DescribeBatchSlsDispatchStatusResponse Client::describeBatchSlsDispatchStatusWithOptions(const DescribeBatchSlsDispatchStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBatchSlsDispatchStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBatchSlsDispatchStatusResponse>();
}

/**
 * @summary Queries the log delivery status.
 *
 * @param request DescribeBatchSlsDispatchStatusRequest
 * @return DescribeBatchSlsDispatchStatusResponse
 */
DescribeBatchSlsDispatchStatusResponse Client::describeBatchSlsDispatchStatus(const DescribeBatchSlsDispatchStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBatchSlsDispatchStatusWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeCfwRiskLevelSummary is deprecated
 *
 * @summary Queries the firewall risk levels.
 *
 * @param request DescribeCfwRiskLevelSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCfwRiskLevelSummaryResponse
 */
DescribeCfwRiskLevelSummaryResponse Client::describeCfwRiskLevelSummaryWithOptions(const DescribeCfwRiskLevelSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @deprecated OpenAPI DescribeCfwRiskLevelSummary is deprecated
 *
 * @summary Queries the firewall risk levels.
 *
 * @param request DescribeCfwRiskLevelSummaryRequest
 * @return DescribeCfwRiskLevelSummaryResponse
 */
DescribeCfwRiskLevelSummaryResponse Client::describeCfwRiskLevelSummary(const DescribeCfwRiskLevelSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCfwRiskLevelSummaryWithOptions(request, runtime);
}

/**
 * @summary Retrieves the authorization clearance information.
 *
 * @description ### QPS limits
 * The QPS limit per user for this API operation is 10 calls per second. If you exceed the limit, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
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
 * @summary Retrieves the authorization clearance information.
 *
 * @description ### QPS limits
 * The QPS limit per user for this API operation is 10 calls per second. If you exceed the limit, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @return DescribeClearAuthInfoResponse
 */
DescribeClearAuthInfoResponse Client::describeClearAuthInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClearAuthInfoWithOptions(runtime);
}

/**
 * @summary Queries the Outbound IP Address list for outbound connections.
 *
 * @param request DescribeConfiguredDestinationIPRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConfiguredDestinationIPResponse
 */
DescribeConfiguredDestinationIPResponse Client::describeConfiguredDestinationIPWithOptions(const DescribeConfiguredDestinationIPRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDestinationIP()) {
    query["DestinationIP"] = request.getDestinationIP();
  }

  if (!!request.hasDestinationISP()) {
    query["DestinationISP"] = request.getDestinationISP();
  }

  if (!!request.hasDestinationRegion()) {
    query["DestinationRegion"] = request.getDestinationRegion();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.getSourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConfiguredDestinationIP"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConfiguredDestinationIPResponse>();
}

/**
 * @summary Queries the Outbound IP Address list for outbound connections.
 *
 * @param request DescribeConfiguredDestinationIPRequest
 * @return DescribeConfiguredDestinationIPResponse
 */
DescribeConfiguredDestinationIPResponse Client::describeConfiguredDestinationIP(const DescribeConfiguredDestinationIPRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeConfiguredDestinationIPWithOptions(request, runtime);
}

/**
 * @summary Queries the list of outbound domains.
 *
 * @param request DescribeConfiguredDomainNamesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConfiguredDomainNamesResponse
 */
DescribeConfiguredDomainNamesResponse Client::describeConfiguredDomainNamesWithOptions(const DescribeConfiguredDomainNamesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.getSourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConfiguredDomainNames"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConfiguredDomainNamesResponse>();
}

/**
 * @summary Queries the list of outbound domains.
 *
 * @param request DescribeConfiguredDomainNamesRequest
 * @return DescribeConfiguredDomainNamesResponse
 */
DescribeConfiguredDomainNamesResponse Client::describeConfiguredDomainNames(const DescribeConfiguredDomainNamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeConfiguredDomainNamesWithOptions(request, runtime);
}

/**
 * @summary Queries all access control policy information.
 *
 * @description This operation is generally used for paging and paged query of access control policy information.
 * ## QPS limits
 * The QPS limit per user is 10 calls per second. If you invoke the API and exceed the limit, API calls are throttled, which may affect your business. Invoke the operation at a reasonable frequency.
 *
 * @param request DescribeControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeControlPolicyResponse
 */
DescribeControlPolicyResponse Client::describeControlPolicyWithOptions(const DescribeControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.getAclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.getDestination();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.getProto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.getRelease();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.getRepeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
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
 * @summary Queries all access control policy information.
 *
 * @description This operation is generally used for paging and paged query of access control policy information.
 * ## QPS limits
 * The QPS limit per user is 10 calls per second. If you invoke the API and exceed the limit, API calls are throttled, which may affect your business. Invoke the operation at a reasonable frequency.
 *
 * @param request DescribeControlPolicyRequest
 * @return DescribeControlPolicyResponse
 */
DescribeControlPolicyResponse Client::describeControlPolicy(const DescribeControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the domain name parse results of the access control policy.
 *
 * @param request DescribeControlPolicyDomainResolveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeControlPolicyDomainResolveResponse
 */
DescribeControlPolicyDomainResolveResponse Client::describeControlPolicyDomainResolveWithOptions(const DescribeControlPolicyDomainResolveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeControlPolicyDomainResolve"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeControlPolicyDomainResolveResponse>();
}

/**
 * @summary Queries the domain name parse results of the access control policy.
 *
 * @param request DescribeControlPolicyDomainResolveRequest
 * @return DescribeControlPolicyDomainResolveResponse
 */
DescribeControlPolicyDomainResolveResponse Client::describeControlPolicyDomainResolve(const DescribeControlPolicyDomainResolveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeControlPolicyDomainResolveWithOptions(request, runtime);
}

/**
 * @summary Retrieves the created NAT firewalls.
 *
 * @param request DescribeCreatedNatFirewallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCreatedNatFirewallResponse
 */
DescribeCreatedNatFirewallResponse Client::describeCreatedNatFirewallWithOptions(const DescribeCreatedNatFirewallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCreatedNatFirewall"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCreatedNatFirewallResponse>();
}

/**
 * @summary Retrieves the created NAT firewalls.
 *
 * @param request DescribeCreatedNatFirewallRequest
 * @return DescribeCreatedNatFirewallResponse
 */
DescribeCreatedNatFirewallResponse Client::describeCreatedNatFirewall(const DescribeCreatedNatFirewallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCreatedNatFirewallWithOptions(request, runtime);
}

/**
 * @summary Queries a list of member accounts.
 *
 * @description This operation queries information about the member accounts of Cloud Firewall.
 * ## QPS limits
 * This operation is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled. Throttling may affect your business. We recommend that you call this operation at a reasonable rate.
 *
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
 * @summary Queries a list of member accounts.
 *
 * @description This operation queries information about the member accounts of Cloud Firewall.
 * ## QPS limits
 * This operation is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled. Throttling may affect your business. We recommend that you call this operation at a reasonable rate.
 *
 * @return DescribeCtrlInstanceMemberAccountsResponse
 */
DescribeCtrlInstanceMemberAccountsResponse Client::describeCtrlInstanceMemberAccounts() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCtrlInstanceMemberAccountsWithOptions(runtime);
}

/**
 * @summary Queries the Internet IPS protection feature.
 *
 * @param request DescribeDefaultIPSConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDefaultIPSConfigResponse
 */
DescribeDefaultIPSConfigResponse Client::describeDefaultIPSConfigWithOptions(const DescribeDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Queries the Internet IPS protection feature.
 *
 * @param request DescribeDefaultIPSConfigRequest
 * @return DescribeDefaultIPSConfigResponse
 */
DescribeDefaultIPSConfigResponse Client::describeDefaultIPSConfig(const DescribeDefaultIPSConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDefaultIPSConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the list of access control lists (ACLs) for the DNS firewall.
 *
 * @param request DescribeDnsFirewallPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsFirewallPolicyResponse
 */
DescribeDnsFirewallPolicyResponse Client::describeDnsFirewallPolicyWithOptions(const DescribeDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.getAclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.getDestination();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.getRelease();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Queries the list of access control lists (ACLs) for the DNS firewall.
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
 * @summary Retrieves the DNS resolution results for a domain name.
 *
 * @description This operation is generally used to retrieve the DNS resolution results for a domain name. Currently, only resolution results from Alibaba Cloud DNS are supported. The domain name to be queried must use Alibaba Cloud DNS to retrieve its resolution results.
 * ## QPS limits
 * The QPS limit per user for this operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DescribeDomainResolveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainResolveResponse
 */
DescribeDomainResolveResponse Client::describeDomainResolveWithOptions(const DescribeDomainResolveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Retrieves the DNS resolution results for a domain name.
 *
 * @description This operation is generally used to retrieve the DNS resolution results for a domain name. Currently, only resolution results from Alibaba Cloud DNS are supported. The domain name to be queried must use Alibaba Cloud DNS to retrieve its resolution results.
 * ## QPS limits
 * The QPS limit per user for this operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DescribeDomainResolveRequest
 * @return DescribeDomainResolveResponse
 */
DescribeDomainResolveResponse Client::describeDomainResolve(const DescribeDomainResolveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainResolveWithOptions(request, runtime);
}

/**
 * @summary Queries file download tasks, including task information and download URLs.
 *
 * @param request DescribeDownloadTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDownloadTaskResponse
 */
DescribeDownloadTaskResponse Client::describeDownloadTaskWithOptions(const DescribeDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
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
 * @summary Queries file download tasks, including task information and download URLs.
 *
 * @param request DescribeDownloadTaskRequest
 * @return DescribeDownloadTaskResponse
 */
DescribeDownloadTaskResponse Client::describeDownloadTask(const DescribeDownloadTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDownloadTaskWithOptions(request, runtime);
}

/**
 * @summary Queries download task types. This corresponds to the TaskType field in download task-related API operations.
 *
 * @param request DescribeDownloadTaskTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDownloadTaskTypeResponse
 */
DescribeDownloadTaskTypeResponse Client::describeDownloadTaskTypeWithOptions(const DescribeDownloadTaskTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
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
 * @summary Queries download task types. This corresponds to the TaskType field in download task-related API operations.
 *
 * @param request DescribeDownloadTaskTypeRequest
 * @return DescribeDownloadTaskTypeResponse
 */
DescribeDownloadTaskTypeResponse Client::describeDownloadTaskType(const DescribeDownloadTaskTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDownloadTaskTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the event logs of Cloud Firewall.
 *
 * @description Queries the event logs of Cloud Firewall. This operation supports five types of logs: application access control (app_ctl), web filtering (web_filter), TLS inspection (tls), intrusion prevention (ips), and threat intelligence (threat_intelligence). You can filter logs by time range, source IP address, destination IP address, URL, action, rule result, and attack type. Log details are returned in pages. StartTime and EndTime are UNIX timestamps in seconds. The time span for a single query cannot exceed 8 days. If FirewallType is not specified, the Internet Border firewall (InternetFirewall) is queried by default. To query the VPC firewall, set FirewallType to VpcFirewall.
 * ## QPS limits
 * The QPS limit per user is 10 calls per second. If you exceed the limit, API calls are throttled, which may affect your services. Make API calls at a reasonable frequency.
 *
 * @param request DescribeEventLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventLogResponse
 */
DescribeEventLogResponse Client::describeEventLogWithOptions(const DescribeEventLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttackType()) {
    query["AttackType"] = request.getAttackType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDstIP()) {
    query["DstIP"] = request.getDstIP();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFirewallType()) {
    query["FirewallType"] = request.getFirewallType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLogType()) {
    query["LogType"] = request.getLogType();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRuleResult()) {
    query["RuleResult"] = request.getRuleResult();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.getSourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasSrcIP()) {
    query["SrcIP"] = request.getSrcIP();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventLog"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventLogResponse>();
}

/**
 * @summary Queries the event logs of Cloud Firewall.
 *
 * @description Queries the event logs of Cloud Firewall. This operation supports five types of logs: application access control (app_ctl), web filtering (web_filter), TLS inspection (tls), intrusion prevention (ips), and threat intelligence (threat_intelligence). You can filter logs by time range, source IP address, destination IP address, URL, action, rule result, and attack type. Log details are returned in pages. StartTime and EndTime are UNIX timestamps in seconds. The time span for a single query cannot exceed 8 days. If FirewallType is not specified, the Internet Border firewall (InternetFirewall) is queried by default. To query the VPC firewall, set FirewallType to VpcFirewall.
 * ## QPS limits
 * The QPS limit per user is 10 calls per second. If you exceed the limit, API calls are throttled, which may affect your services. Make API calls at a reasonable frequency.
 *
 * @param request DescribeEventLogRequest
 * @return DescribeEventLogResponse
 */
DescribeEventLogResponse Client::describeEventLog(const DescribeEventLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventLogWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeFirewallDropStatistics is deprecated
 *
 * @summary Retrieves firewall DROP data statistics.
 *
 * @description ### QPS limit
 * The QPS limit per user for this API operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
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
 * @deprecated OpenAPI DescribeFirewallDropStatistics is deprecated
 *
 * @summary Retrieves firewall DROP data statistics.
 *
 * @description ### QPS limit
 * The QPS limit per user for this API operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @return DescribeFirewallDropStatisticsResponse
 */
DescribeFirewallDropStatisticsResponse Client::describeFirewallDropStatistics() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFirewallDropStatisticsWithOptions(runtime);
}

/**
 * @summary Retrieves the overall firewall blocking trends, including Internet, VPC, and NAT traffic.
 *
 * @param request DescribeFirewallDropTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFirewallDropTrendResponse
 */
DescribeFirewallDropTrendResponse Client::describeFirewallDropTrendWithOptions(const DescribeFirewallDropTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFirewallDropTrend"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFirewallDropTrendResponse>();
}

/**
 * @summary Retrieves the overall firewall blocking trends, including Internet, VPC, and NAT traffic.
 *
 * @param request DescribeFirewallDropTrendRequest
 * @return DescribeFirewallDropTrendResponse
 */
DescribeFirewallDropTrendResponse Client::describeFirewallDropTrend(const DescribeFirewallDropTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFirewallDropTrendWithOptions(request, runtime);
}

/**
 * @summary Retrieves firewall tasks.
 *
 * @description ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request DescribeFirewallTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFirewallTaskResponse
 */
DescribeFirewallTaskResponse Client::describeFirewallTaskWithOptions(const DescribeFirewallTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChildInstanceId()) {
    query["ChildInstanceId"] = request.getChildInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
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
 * @summary Retrieves firewall tasks.
 *
 * @description ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request DescribeFirewallTaskRequest
 * @return DescribeFirewallTaskResponse
 */
DescribeFirewallTaskResponse Client::describeFirewallTask(const DescribeFirewallTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFirewallTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic trends of the firewall.
 *
 * @param request DescribeFirewallTrafficTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFirewallTrafficTrendResponse
 */
DescribeFirewallTrafficTrendResponse Client::describeFirewallTrafficTrendWithOptions(const DescribeFirewallTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFirewallTrafficTrend"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFirewallTrafficTrendResponse>();
}

/**
 * @summary Queries the traffic trends of the firewall.
 *
 * @param request DescribeFirewallTrafficTrendRequest
 * @return DescribeFirewallTrafficTrendResponse
 */
DescribeFirewallTrafficTrendResponse Client::describeFirewallTrafficTrend(const DescribeFirewallTrafficTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFirewallTrafficTrendWithOptions(request, runtime);
}

/**
 * @summary Retrieves the vSwitches created by the firewall.
 *
 * @description ### Rate limit
 * The rate limit for this API operation is 10 queries per second (QPS) per user. If you exceed this limit, throttling is triggered, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request DescribeFirewallVSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFirewallVSwitchResponse
 */
DescribeFirewallVSwitchResponse Client::describeFirewallVSwitchWithOptions(const DescribeFirewallVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.getFirewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVswitchId()) {
    query["VswitchId"] = request.getVswitchId();
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
 * @summary Retrieves the vSwitches created by the firewall.
 *
 * @description ### Rate limit
 * The rate limit for this API operation is 10 queries per second (QPS) per user. If you exceed this limit, throttling is triggered, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request DescribeFirewallVSwitchRequest
 * @return DescribeFirewallVSwitchResponse
 */
DescribeFirewallVSwitchResponse Client::describeFirewallVSwitch(const DescribeFirewallVSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFirewallVSwitchWithOptions(request, runtime);
}

/**
 * @summary Queries firewall vSwitch resources.
 *
 * @param request DescribeFirewallVswitchResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFirewallVswitchResourcesResponse
 */
DescribeFirewallVswitchResourcesResponse Client::describeFirewallVswitchResourcesWithOptions(const DescribeFirewallVswitchResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallType()) {
    query["FirewallType"] = request.getFirewallType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFirewallVswitchResources"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFirewallVswitchResourcesResponse>();
}

/**
 * @summary Queries firewall vSwitch resources.
 *
 * @param request DescribeFirewallVswitchResourcesRequest
 * @return DescribeFirewallVswitchResourcesResponse
 */
DescribeFirewallVswitchResourcesResponse Client::describeFirewallVswitchResources(const DescribeFirewallVswitchResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFirewallVswitchResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries IPS rules.
 *
 * @param request DescribeIPSRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIPSRulesResponse
 */
DescribeIPSRulesResponse Client::describeIPSRulesWithOptions(const DescribeIPSRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttackApp()) {
    query["AttackApp"] = request.getAttackApp();
  }

  if (!!request.hasAttackAppCategory()) {
    query["AttackAppCategory"] = request.getAttackAppCategory();
  }

  if (!!request.hasAttackApps()) {
    query["AttackApps"] = request.getAttackApps();
  }

  if (!!request.hasAttackType()) {
    query["AttackType"] = request.getAttackType();
  }

  if (!!request.hasCve()) {
    query["Cve"] = request.getCve();
  }

  if (!!request.hasDefaultAction()) {
    query["DefaultAction"] = request.getDefaultAction();
  }

  if (!!request.hasFirewallType()) {
    query["FirewallType"] = request.getFirewallType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryModify()) {
    query["QueryModify"] = request.getQueryModify();
  }

  if (!!request.hasRuleAction()) {
    query["RuleAction"] = request.getRuleAction();
  }

  if (!!request.hasRuleClass()) {
    query["RuleClass"] = request.getRuleClass();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleLevel()) {
    query["RuleLevel"] = request.getRuleLevel();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIPSRules"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIPSRulesResponse>();
}

/**
 * @summary Queries IPS rules.
 *
 * @param request DescribeIPSRulesRequest
 * @return DescribeIPSRulesResponse
 */
DescribeIPSRulesResponse Client::describeIPSRules(const DescribeIPSRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIPSRulesWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about the member accounts of Cloud Firewall.
 *
 * @description You can call this operation to query information about the member accounts of Cloud Firewall.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second per user. If you exceed the limit, API calls are throttled. This may affect your business. Call this operation at a reasonable rate.
 *
 * @param request DescribeInstanceMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceMembersResponse
 */
DescribeInstanceMembersResponse Client::describeInstanceMembersWithOptions(const DescribeInstanceMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasMemberDesc()) {
    query["MemberDesc"] = request.getMemberDesc();
  }

  if (!!request.hasMemberDisplayName()) {
    query["MemberDisplayName"] = request.getMemberDisplayName();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Retrieves information about the member accounts of Cloud Firewall.
 *
 * @description You can call this operation to query information about the member accounts of Cloud Firewall.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second per user. If you exceed the limit, API calls are throttled. This may affect your business. Call this operation at a reasonable rate.
 *
 * @param request DescribeInstanceMembersRequest
 * @return DescribeInstanceMembersResponse
 */
DescribeInstanceMembersResponse Client::describeInstanceMembers(const DescribeInstanceMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceMembersWithOptions(request, runtime);
}

/**
 * @summary Retrieves the account in a resource directory for the instance.
 *
 * @param request DescribeInstanceRdAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceRdAccountsResponse
 */
DescribeInstanceRdAccountsResponse Client::describeInstanceRdAccountsWithOptions(const DescribeInstanceRdAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberDesc()) {
    query["MemberDesc"] = request.getMemberDesc();
  }

  if (!!request.hasMemberDisplayName()) {
    query["MemberDisplayName"] = request.getMemberDisplayName();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceRdAccounts"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceRdAccountsResponse>();
}

/**
 * @summary Retrieves the account in a resource directory for the instance.
 *
 * @param request DescribeInstanceRdAccountsRequest
 * @return DescribeInstanceRdAccountsResponse
 */
DescribeInstanceRdAccountsResponse Client::describeInstanceRdAccounts(const DescribeInstanceRdAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceRdAccountsWithOptions(request, runtime);
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
    query["Instances"] = request.getInstances();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Queries Internet defense trends.
 *
 * @description ## QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API at a reasonable rate.
 *
 * @param request DescribeInternetDropTrafficTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetDropTrafficTrendResponse
 */
DescribeInternetDropTrafficTrendResponse Client::describeInternetDropTrafficTrendWithOptions(const DescribeInternetDropTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.getSourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries Internet defense trends.
 *
 * @description ## QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API at a reasonable rate.
 *
 * @param request DescribeInternetDropTrafficTrendRequest
 * @return DescribeInternetDropTrafficTrendResponse
 */
DescribeInternetDropTrafficTrendResponse Client::describeInternetDropTrafficTrend(const DescribeInternetDropTrafficTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetDropTrafficTrendWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of Internet exposure.
 *
 * @param request DescribeInternetOpenDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetOpenDetailResponse
 */
DescribeInternetOpenDetailResponse Client::describeInternetOpenDetailWithOptions(const DescribeInternetOpenDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetsInstanceId()) {
    query["AssetsInstanceId"] = request.getAssetsInstanceId();
  }

  if (!!request.hasAssetsInstanceName()) {
    query["AssetsInstanceName"] = request.getAssetsInstanceName();
  }

  if (!!request.hasAssetsType()) {
    query["AssetsType"] = request.getAssetsType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPublicIp()) {
    query["PublicIp"] = request.getPublicIp();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasServiceNameFuzzy()) {
    query["ServiceNameFuzzy"] = request.getServiceNameFuzzy();
  }

  if (!!request.hasSortList()) {
    query["SortList"] = request.getSortList();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasSuggestLevel()) {
    query["SuggestLevel"] = request.getSuggestLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInternetOpenDetail"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInternetOpenDetailResponse>();
}

/**
 * @summary Retrieves the details of Internet exposure.
 *
 * @param request DescribeInternetOpenDetailRequest
 * @return DescribeInternetOpenDetailResponse
 */
DescribeInternetOpenDetailResponse Client::describeInternetOpenDetail(const DescribeInternetOpenDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetOpenDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an access control policy group in Cloud Firewall.
 *
 * @param request DescribeInternetOpenIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetOpenIpResponse
 */
DescribeInternetOpenIpResponse Client::describeInternetOpenIpWithOptions(const DescribeInternetOpenIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetsInstanceId()) {
    query["AssetsInstanceId"] = request.getAssetsInstanceId();
  }

  if (!!request.hasAssetsInstanceName()) {
    query["AssetsInstanceName"] = request.getAssetsInstanceName();
  }

  if (!!request.hasAssetsType()) {
    query["AssetsType"] = request.getAssetsType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPublicIp()) {
    query["PublicIp"] = request.getPublicIp();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the details of an access control policy group in Cloud Firewall.
 *
 * @param request DescribeInternetOpenIpRequest
 * @return DescribeInternetOpenIpResponse
 */
DescribeInternetOpenIpResponse Client::describeInternetOpenIp(const DescribeInternetOpenIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetOpenIpWithOptions(request, runtime);
}

/**
 * @summary Queries open ports on the Internet.
 *
 * @description ## Rate limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
 *
 * @param request DescribeInternetOpenPortRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetOpenPortResponse
 */
DescribeInternetOpenPortResponse Client::describeInternetOpenPortWithOptions(const DescribeInternetOpenPortRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasServiceNameFuzzy()) {
    query["ServiceNameFuzzy"] = request.getServiceNameFuzzy();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasSuggestLevel()) {
    query["SuggestLevel"] = request.getSuggestLevel();
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
 * @summary Queries open ports on the Internet.
 *
 * @description ## Rate limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
 *
 * @param request DescribeInternetOpenPortRequest
 * @return DescribeInternetOpenPortResponse
 */
DescribeInternetOpenPortResponse Client::describeInternetOpenPort(const DescribeInternetOpenPortRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetOpenPortWithOptions(request, runtime);
}

/**
 * @summary Queries Internet-facing open services.
 *
 * @description ## QPS limits
 * The QPS limit for a single user is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
 *
 * @param request DescribeInternetOpenServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetOpenServiceResponse
 */
DescribeInternetOpenServiceResponse Client::describeInternetOpenServiceWithOptions(const DescribeInternetOpenServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasServiceNameFuzzy()) {
    query["ServiceNameFuzzy"] = request.getServiceNameFuzzy();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasSuggestLevel()) {
    query["SuggestLevel"] = request.getSuggestLevel();
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
 * @summary Queries Internet-facing open services.
 *
 * @description ## QPS limits
 * The QPS limit for a single user is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
 *
 * @param request DescribeInternetOpenServiceRequest
 * @return DescribeInternetOpenServiceResponse
 */
DescribeInternetOpenServiceResponse Client::describeInternetOpenService(const DescribeInternetOpenServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetOpenServiceWithOptions(request, runtime);
}

/**
 * @summary Retrieves Internet exposure statistics.
 *
 * @param request DescribeInternetOpenStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetOpenStatisticResponse
 */
DescribeInternetOpenStatisticResponse Client::describeInternetOpenStatisticWithOptions(const DescribeInternetOpenStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInternetOpenStatistic"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInternetOpenStatisticResponse>();
}

/**
 * @summary Retrieves Internet exposure statistics.
 *
 * @param request DescribeInternetOpenStatisticRequest
 * @return DescribeInternetOpenStatisticResponse
 */
DescribeInternetOpenStatisticResponse Client::describeInternetOpenStatistic(const DescribeInternetOpenStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetOpenStatisticWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of Internet service names.
 *
 * @param request DescribeInternetServiceNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetServiceNameListResponse
 */
DescribeInternetServiceNameListResponse Client::describeInternetServiceNameListWithOptions(const DescribeInternetServiceNameListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInternetServiceNameList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInternetServiceNameListResponse>();
}

/**
 * @summary Retrieves the list of Internet service names.
 *
 * @param request DescribeInternetServiceNameListRequest
 * @return DescribeInternetServiceNameListResponse
 */
DescribeInternetServiceNameListResponse Client::describeInternetServiceNameList(const DescribeInternetServiceNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetServiceNameListWithOptions(request, runtime);
}

/**
 * @summary Retrieves Internet-facing SLB instances.
 *
 * @param request DescribeInternetSlbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetSlbResponse
 */
DescribeInternetSlbResponse Client::describeInternetSlbWithOptions(const DescribeInternetSlbRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPublicIp()) {
    query["PublicIp"] = request.getPublicIp();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInternetSlb"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInternetSlbResponse>();
}

/**
 * @summary Retrieves Internet-facing SLB instances.
 *
 * @param request DescribeInternetSlbRequest
 * @return DescribeInternetSlbResponse
 */
DescribeInternetSlbResponse Client::describeInternetSlb(const DescribeInternetSlbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetSlbWithOptions(request, runtime);
}

/**
 * @summary Queries the top Internet traffic by time.
 *
 * @param request DescribeInternetTimeTopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetTimeTopResponse
 */
DescribeInternetTimeTopResponse Client::describeInternetTimeTopWithOptions(const DescribeInternetTimeTopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIPType()) {
    query["IPType"] = request.getIPType();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasNatIP()) {
    query["NatIP"] = request.getNatIP();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.getSourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasSrcIP()) {
    query["SrcIP"] = request.getSrcIP();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTrafficTime()) {
    query["TrafficTime"] = request.getTrafficTime();
  }

  if (!!request.hasTrafficType()) {
    query["TrafficType"] = request.getTrafficType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInternetTimeTop"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInternetTimeTopResponse>();
}

/**
 * @summary Queries the top Internet traffic by time.
 *
 * @param request DescribeInternetTimeTopRequest
 * @return DescribeInternetTimeTopResponse
 */
DescribeInternetTimeTopResponse Client::describeInternetTimeTop(const DescribeInternetTimeTopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetTimeTopWithOptions(request, runtime);
}

/**
 * @summary Queries the top trend charts for Internet traffic.
 *
 * @param request DescribeInternetTrafficTopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetTrafficTopResponse
 */
DescribeInternetTrafficTopResponse Client::describeInternetTrafficTopWithOptions(const DescribeInternetTrafficTopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataType()) {
    query["DataType"] = request.getDataType();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasRuleResult()) {
    query["RuleResult"] = request.getRuleResult();
  }

  if (!!request.hasRuleSource()) {
    query["RuleSource"] = request.getRuleSource();
  }

  if (!!request.hasShowCountryName()) {
    query["ShowCountryName"] = request.getShowCountryName();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.getSourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInternetTrafficTop"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInternetTrafficTopResponse>();
}

/**
 * @summary Queries the top trend charts for Internet traffic.
 *
 * @param request DescribeInternetTrafficTopRequest
 * @return DescribeInternetTrafficTopResponse
 */
DescribeInternetTrafficTopResponse Client::describeInternetTrafficTop(const DescribeInternetTrafficTopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetTrafficTopWithOptions(request, runtime);
}

/**
 * @summary Queries Internet traffic trends.
 *
 * @param request DescribeInternetTrafficTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetTrafficTrendResponse
 */
DescribeInternetTrafficTrendResponse Client::describeInternetTrafficTrendWithOptions(const DescribeInternetTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.getSourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasSrcPrivateIP()) {
    query["SrcPrivateIP"] = request.getSrcPrivateIP();
  }

  if (!!request.hasSrcPublicIP()) {
    query["SrcPublicIP"] = request.getSrcPublicIP();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTrafficType()) {
    query["TrafficType"] = request.getTrafficType();
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
 * @summary Queries Internet traffic trends.
 *
 * @param request DescribeInternetTrafficTrendRequest
 * @return DescribeInternetTrafficTrendResponse
 */
DescribeInternetTrafficTrendResponse Client::describeInternetTrafficTrend(const DescribeInternetTrafficTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetTrafficTrendWithOptions(request, runtime);
}

/**
 * @summary Queries ECS vulnerability trends.
 *
 * @param request DescribeInvadeEcsTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvadeEcsTrendResponse
 */
DescribeInvadeEcsTrendResponse Client::describeInvadeEcsTrendWithOptions(const DescribeInvadeEcsTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInvadeEcsTrend"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInvadeEcsTrendResponse>();
}

/**
 * @summary Queries ECS vulnerability trends.
 *
 * @param request DescribeInvadeEcsTrendRequest
 * @return DescribeInvadeEcsTrendResponse
 */
DescribeInvadeEcsTrendResponse Client::describeInvadeEcsTrend(const DescribeInvadeEcsTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvadeEcsTrendWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a compromise awareness event.
 *
 * @param request DescribeInvadeEventDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvadeEventDetailResponse
 */
DescribeInvadeEventDetailResponse Client::describeInvadeEventDetailWithOptions(const DescribeInvadeEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetsInstanceId()) {
    query["AssetsInstanceId"] = request.getAssetsInstanceId();
  }

  if (!!request.hasEventUuid()) {
    query["EventUuid"] = request.getEventUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPublicIP()) {
    query["PublicIP"] = request.getPublicIP();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInvadeEventDetail"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInvadeEventDetailResponse>();
}

/**
 * @summary Retrieves the details of a compromise awareness event.
 *
 * @param request DescribeInvadeEventDetailRequest
 * @return DescribeInvadeEventDetailResponse
 */
DescribeInvadeEventDetailResponse Client::describeInvadeEventDetail(const DescribeInvadeEventDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvadeEventDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the information about breach awareness events in Cloud Firewall.
 *
 * @param request DescribeInvadeEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvadeEventListResponse
 */
DescribeInvadeEventListResponse Client::describeInvadeEventListWithOptions(const DescribeInvadeEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetsIP()) {
    query["AssetsIP"] = request.getAssetsIP();
  }

  if (!!request.hasAssetsInstanceId()) {
    query["AssetsInstanceId"] = request.getAssetsInstanceId();
  }

  if (!!request.hasAssetsInstanceName()) {
    query["AssetsInstanceName"] = request.getAssetsInstanceName();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventKey()) {
    query["EventKey"] = request.getEventKey();
  }

  if (!!request.hasEventName()) {
    query["EventName"] = request.getEventName();
  }

  if (!!request.hasEventUuid()) {
    query["EventUuid"] = request.getEventUuid();
  }

  if (!!request.hasIsIgnore()) {
    query["IsIgnore"] = request.getIsIgnore();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProcessStatusList()) {
    query["ProcessStatusList"] = request.getProcessStatusList();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the information about breach awareness events in Cloud Firewall.
 *
 * @param request DescribeInvadeEventListRequest
 * @return DescribeInvadeEventListResponse
 */
DescribeInvadeEventListResponse Client::describeInvadeEventList(const DescribeInvadeEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvadeEventListWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of vulnerability names.
 *
 * @param request DescribeInvadeEventNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvadeEventNameListResponse
 */
DescribeInvadeEventNameListResponse Client::describeInvadeEventNameListWithOptions(const DescribeInvadeEventNameListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieves a list of vulnerability names.
 *
 * @param request DescribeInvadeEventNameListRequest
 * @return DescribeInvadeEventNameListResponse
 */
DescribeInvadeEventNameListResponse Client::describeInvadeEventNameList(const DescribeInvadeEventNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvadeEventNameListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the raw payload of a vulnerability event.
 *
 * @description Queries the raw packet payload of a specified intrusion event. You can locate a single event by using the event UUID (EventUuid) or filter events by public IP address, private IP address, asset instance ID, and time range. Both StartTime and EndTime are required and must be UNIX timestamps in seconds. The response includes the original payload text, the payload length (PayloadLen), and the start and end positions of the matched content in the highlight interval (HighlightStart and HighlightEnd) to help restore alert details.
 * ## Rate limit
 * The rate limit for this API operation is 10 calls per second per user. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request DescribeInvadeEventPayloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvadeEventPayloadResponse
 */
DescribeInvadeEventPayloadResponse Client::describeInvadeEventPayloadWithOptions(const DescribeInvadeEventPayloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetsInstanceId()) {
    query["AssetsInstanceId"] = request.getAssetsInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventUuid()) {
    query["EventUuid"] = request.getEventUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPrivateIP()) {
    query["PrivateIP"] = request.getPrivateIP();
  }

  if (!!request.hasPublicIP()) {
    query["PublicIP"] = request.getPublicIP();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInvadeEventPayload"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInvadeEventPayloadResponse>();
}

/**
 * @summary Retrieves the raw payload of a vulnerability event.
 *
 * @description Queries the raw packet payload of a specified intrusion event. You can locate a single event by using the event UUID (EventUuid) or filter events by public IP address, private IP address, asset instance ID, and time range. Both StartTime and EndTime are required and must be UNIX timestamps in seconds. The response includes the original payload text, the payload length (PayloadLen), and the start and end positions of the matched content in the highlight interval (HighlightStart and HighlightEnd) to help restore alert details.
 * ## Rate limit
 * The rate limit for this API operation is 10 calls per second per user. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request DescribeInvadeEventPayloadRequest
 * @return DescribeInvadeEventPayloadResponse
 */
DescribeInvadeEventPayloadResponse Client::describeInvadeEventPayload(const DescribeInvadeEventPayloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvadeEventPayloadWithOptions(request, runtime);
}

/**
 * @summary Retrieves vulnerability event statistics.
 *
 * @param request DescribeInvadeEventStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInvadeEventStatisticResponse
 */
DescribeInvadeEventStatisticResponse Client::describeInvadeEventStatisticWithOptions(const DescribeInvadeEventStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieves vulnerability event statistics.
 *
 * @param request DescribeInvadeEventStatisticRequest
 * @return DescribeInvadeEventStatisticResponse
 */
DescribeInvadeEventStatisticResponse Client::describeInvadeEventStatistic(const DescribeInvadeEventStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInvadeEventStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the IPS private IP tracing list.
 *
 * @description This operation is generally used to perform paged queries on the information about assets protected by Cloud Firewall.
 * ## QPS limits
 * The QPS limit per user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable frequency.
 *
 * @param request DescribeIpsPrivateAssocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIpsPrivateAssocResponse
 */
DescribeIpsPrivateAssocResponse Client::describeIpsPrivateAssocWithOptions(const DescribeIpsPrivateAssocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPublicIp()) {
    query["PublicIp"] = request.getPublicIp();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIpsPrivateAssoc"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIpsPrivateAssocResponse>();
}

/**
 * @summary Queries the IPS private IP tracing list.
 *
 * @description This operation is generally used to perform paged queries on the information about assets protected by Cloud Firewall.
 * ## QPS limits
 * The QPS limit per user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable frequency.
 *
 * @param request DescribeIpsPrivateAssocRequest
 * @return DescribeIpsPrivateAssocResponse
 */
DescribeIpsPrivateAssocResponse Client::describeIpsPrivateAssoc(const DescribeIpsPrivateAssocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIpsPrivateAssocWithOptions(request, runtime);
}

/**
 * @summary Queries the ISP information.
 *
 * @param request DescribeIspInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIspInfoResponse
 */
DescribeIspInfoResponse Client::describeIspInfoWithOptions(const DescribeIspInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.getSourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIspInfo"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIspInfoResponse>();
}

/**
 * @summary Queries the ISP information.
 *
 * @param request DescribeIspInfoRequest
 * @return DescribeIspInfoResponse
 */
DescribeIspInfoResponse Client::describeIspInfo(const DescribeIspInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIspInfoWithOptions(request, runtime);
}

/**
 * @summary Queries geolocation information.
 *
 * @param request DescribeLocationInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLocationInfoResponse
 */
DescribeLocationInfoResponse Client::describeLocationInfoWithOptions(const DescribeLocationInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.getSourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLocationInfo"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLocationInfoResponse>();
}

/**
 * @summary Queries geolocation information.
 *
 * @param request DescribeLocationInfoRequest
 * @return DescribeLocationInfoResponse
 */
DescribeLocationInfoResponse Client::describeLocationInfo(const DescribeLocationInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLocationInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves Simple Log Service information.
 *
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
 * @summary Retrieves Simple Log Service information.
 *
 * @return DescribeLogStoreInfoResponse
 */
DescribeLogStoreInfoResponse Client::describeLogStoreInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogStoreInfoWithOptions(runtime);
}

/**
 * @summary Queries member information.
 *
 * @param request DescribeMemberInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMemberInfoResponse
 */
DescribeMemberInfoResponse Client::describeMemberInfoWithOptions(const DescribeMemberInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMemberInfo"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMemberInfoResponse>();
}

/**
 * @summary Queries member information.
 *
 * @param request DescribeMemberInfoRequest
 * @return DescribeMemberInfoResponse
 */
DescribeMemberInfoResponse Client::describeMemberInfo(const DescribeMemberInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMemberInfoWithOptions(request, runtime);
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
    query["Lang"] = request.getLang();
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
 * @summary Queries the access control policy groups for NAT firewalls.
 *
 * @param request DescribeNatFirewallAclGroupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNatFirewallAclGroupListResponse
 */
DescribeNatFirewallAclGroupListResponse Client::describeNatFirewallAclGroupListWithOptions(const DescribeNatFirewallAclGroupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNatFirewallAclGroupList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNatFirewallAclGroupListResponse>();
}

/**
 * @summary Queries the access control policy groups for NAT firewalls.
 *
 * @param request DescribeNatFirewallAclGroupListRequest
 * @return DescribeNatFirewallAclGroupListResponse
 */
DescribeNatFirewallAclGroupListResponse Client::describeNatFirewallAclGroupList(const DescribeNatFirewallAclGroupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatFirewallAclGroupListWithOptions(request, runtime);
}

/**
 * @summary Queries the access control policies for NAT firewalls.
 *
 * @description This operation queries access control policies for NAT firewalls and returns the results in a paginated list.
 *
 * @param request DescribeNatFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNatFirewallControlPolicyResponse
 */
DescribeNatFirewallControlPolicyResponse Client::describeNatFirewallControlPolicyWithOptions(const DescribeNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.getAclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.getDestination();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.getProto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.getRelease();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.getRepeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
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
 * @summary Queries the access control policies for NAT firewalls.
 *
 * @description This operation queries access control policies for NAT firewalls and returns the results in a paginated list.
 *
 * @param request DescribeNatFirewallControlPolicyRequest
 * @return DescribeNatFirewallControlPolicyResponse
 */
DescribeNatFirewallControlPolicyResponse Client::describeNatFirewallControlPolicy(const DescribeNatFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the NAT firewall interception trend on the overview page.
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
 * @summary Queries the NAT firewall interception trend on the overview page.
 *
 * @param request DescribeNatFirewallDropTrafficTrendRequest
 * @return DescribeNatFirewallDropTrafficTrendResponse
 */
DescribeNatFirewallDropTrafficTrendResponse Client::describeNatFirewallDropTrafficTrend(const DescribeNatFirewallDropTrafficTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatFirewallDropTrafficTrendWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of NAT firewalls.
 *
 * @param request DescribeNatFirewallListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNatFirewallListResponse
 */
DescribeNatFirewallListResponse Client::describeNatFirewallListWithOptions(const DescribeNatFirewallListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProxyId()) {
    query["ProxyId"] = request.getProxyId();
  }

  if (!!request.hasProxyName()) {
    query["ProxyName"] = request.getProxyName();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
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
 * @summary Retrieves the details of NAT firewalls.
 *
 * @param request DescribeNatFirewallListRequest
 * @return DescribeNatFirewallListResponse
 */
DescribeNatFirewallListResponse Client::describeNatFirewallList(const DescribeNatFirewallListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatFirewallListWithOptions(request, runtime);
}

/**
 * @summary Queries the effective policy priority range for an access control policy of a NAT firewall.
 *
 * @description This operation is typically used to query the effective policy priority range for an access control policy that manages outbound traffic of a NAT firewall.
 *
 * @param request DescribeNatFirewallPolicyPriorUsedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNatFirewallPolicyPriorUsedResponse
 */
DescribeNatFirewallPolicyPriorUsedResponse Client::describeNatFirewallPolicyPriorUsedWithOptions(const DescribeNatFirewallPolicyPriorUsedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
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
 * @summary Queries the effective policy priority range for an access control policy of a NAT firewall.
 *
 * @description This operation is typically used to query the effective policy priority range for an access control policy that manages outbound traffic of a NAT firewall.
 *
 * @param request DescribeNatFirewallPolicyPriorUsedRequest
 * @return DescribeNatFirewallPolicyPriorUsedResponse
 */
DescribeNatFirewallPolicyPriorUsedResponse Client::describeNatFirewallPolicyPriorUsed(const DescribeNatFirewallPolicyPriorUsedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatFirewallPolicyPriorUsedWithOptions(request, runtime);
}

/**
 * @summary Queries the precheck results of a NAT firewall.
 *
 * @param request DescribeNatFirewallPrecheckDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNatFirewallPrecheckDetailResponse
 */
DescribeNatFirewallPrecheckDetailResponse Client::describeNatFirewallPrecheckDetailWithOptions(const DescribeNatFirewallPrecheckDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNatFirewallPrecheckDetail"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNatFirewallPrecheckDetailResponse>();
}

/**
 * @summary Queries the precheck results of a NAT firewall.
 *
 * @param request DescribeNatFirewallPrecheckDetailRequest
 * @return DescribeNatFirewallPrecheckDetailResponse
 */
DescribeNatFirewallPrecheckDetailResponse Client::describeNatFirewallPrecheckDetail(const DescribeNatFirewallPrecheckDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatFirewallPrecheckDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves the NAT firewall quota.
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
 * @summary Retrieves the NAT firewall quota.
 *
 * @param request DescribeNatFirewallQuotaRequest
 * @return DescribeNatFirewallQuotaResponse
 */
DescribeNatFirewallQuotaResponse Client::describeNatFirewallQuota(const DescribeNatFirewallQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatFirewallQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the top traffic of a NAT firewall at a specific point in time.
 *
 * @param request DescribeNatFirewallTimeTopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNatFirewallTimeTopResponse
 */
DescribeNatFirewallTimeTopResponse Client::describeNatFirewallTimeTopWithOptions(const DescribeNatFirewallTimeTopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNatFirewallTimeTop"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNatFirewallTimeTopResponse>();
}

/**
 * @summary Queries the top traffic of a NAT firewall at a specific point in time.
 *
 * @param request DescribeNatFirewallTimeTopRequest
 * @return DescribeNatFirewallTimeTopResponse
 */
DescribeNatFirewallTimeTopResponse Client::describeNatFirewallTimeTop(const DescribeNatFirewallTimeTopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatFirewallTimeTopWithOptions(request, runtime);
}

/**
 * @summary Queries the NAT traffic trends on the overview page.
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
 * @summary Queries the NAT traffic trends on the overview page.
 *
 * @param request DescribeNatFirewallTrafficTrendRequest
 * @return DescribeNatFirewallTrafficTrendResponse
 */
DescribeNatFirewallTrafficTrendResponse Client::describeNatFirewallTrafficTrend(const DescribeNatFirewallTrafficTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNatFirewallTrafficTrendWithOptions(request, runtime);
}

/**
 * @summary Queries a list of network instances.
 *
 * @param request DescribeNetworkInstanceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkInstanceListResponse
 */
DescribeNetworkInstanceListResponse Client::describeNetworkInstanceListWithOptions(const DescribeNetworkInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasConnectType()) {
    query["ConnectType"] = request.getConnectType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Queries a list of network instances.
 *
 * @param request DescribeNetworkInstanceListRequest
 * @return DescribeNetworkInstanceListResponse
 */
DescribeNetworkInstanceListResponse Client::describeNetworkInstanceList(const DescribeNetworkInstanceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkInstanceListWithOptions(request, runtime);
}

/**
 * @summary Queries the relationships between network instances.
 *
 * @param request DescribeNetworkInstanceRelationListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkInstanceRelationListResponse
 */
DescribeNetworkInstanceRelationListResponse Client::describeNetworkInstanceRelationListWithOptions(const DescribeNetworkInstanceRelationListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectType()) {
    query["ConnectType"] = request.getConnectType();
  }

  if (!!request.hasFirewallConfigureStatus()) {
    query["FirewallConfigureStatus"] = request.getFirewallConfigureStatus();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNetworkInstanceId()) {
    query["NetworkInstanceId"] = request.getNetworkInstanceId();
  }

  if (!!request.hasPeerNetworkInstanceId()) {
    query["PeerNetworkInstanceId"] = request.getPeerNetworkInstanceId();
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
 * @summary Queries the relationships between network instances.
 *
 * @param request DescribeNetworkInstanceRelationListRequest
 * @return DescribeNetworkInstanceRelationListResponse
 */
DescribeNetworkInstanceRelationListResponse Client::describeNetworkInstanceRelationList(const DescribeNetworkInstanceRelationListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkInstanceRelationListWithOptions(request, runtime);
}

/**
 * @summary Queries the ratio of the top network traffic.
 *
 * @param request DescribeNetworkTrafficTopRatioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNetworkTrafficTopRatioResponse
 */
DescribeNetworkTrafficTopRatioResponse Client::describeNetworkTrafficTopRatioWithOptions(const DescribeNetworkTrafficTopRatioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAssetIP()) {
    query["AssetIP"] = request.getAssetIP();
  }

  if (!!request.hasAssetRegion()) {
    query["AssetRegion"] = request.getAssetRegion();
  }

  if (!!request.hasDataType()) {
    query["DataType"] = request.getDataType();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDstIP()) {
    query["DstIP"] = request.getDstIP();
  }

  if (!!request.hasDstPort()) {
    query["DstPort"] = request.getDstPort();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIpProperty()) {
    query["IpProperty"] = request.getIpProperty();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLocation()) {
    query["Location"] = request.getLocation();
  }

  if (!!request.hasRuleResult()) {
    query["RuleResult"] = request.getRuleResult();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.getSourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasSrcIP()) {
    query["SrcIP"] = request.getSrcIP();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the ratio of the top network traffic.
 *
 * @param request DescribeNetworkTrafficTopRatioRequest
 * @return DescribeNetworkTrafficTopRatioResponse
 */
DescribeNetworkTrafficTopRatioResponse Client::describeNetworkTrafficTopRatio(const DescribeNetworkTrafficTopRatioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNetworkTrafficTopRatioWithOptions(request, runtime);
}

/**
 * @summary Retrieves the statistics of access sources for open IP addresses. Before calling this operation, you must purchase and activate Cloud Firewall. You can check the activation status by using the UserStatus parameter returned by DescribeUserBuyVersion. A value of false indicates that Cloud Firewall is not activated.
 *
 * @param request DescribeOpenIpAccessSrcStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOpenIpAccessSrcStatResponse
 */
DescribeOpenIpAccessSrcStatResponse Client::describeOpenIpAccessSrcStatWithOptions(const DescribeOpenIpAccessSrcStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDstIp()) {
    query["DstIp"] = request.getDstIp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Retrieves the statistics of access sources for open IP addresses. Before calling this operation, you must purchase and activate Cloud Firewall. You can check the activation status by using the UserStatus parameter returned by DescribeUserBuyVersion. A value of false indicates that Cloud Firewall is not activated.
 *
 * @param request DescribeOpenIpAccessSrcStatRequest
 * @return DescribeOpenIpAccessSrcStatResponse
 */
DescribeOpenIpAccessSrcStatResponse Client::describeOpenIpAccessSrcStat(const DescribeOpenIpAccessSrcStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOpenIpAccessSrcStatWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of outbound assets.
 *
 * @param request DescribeOutgoingAssetListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingAssetListResponse
 */
DescribeOutgoingAssetListResponse Client::describeOutgoingAssetListWithOptions(const DescribeOutgoingAssetListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetsRegion()) {
    query["AssetsRegion"] = request.getAssetsRegion();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasIPType()) {
    query["IPType"] = request.getIPType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasNatGatewayName()) {
    query["NatGatewayName"] = request.getNatGatewayName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPrivateIP()) {
    query["PrivateIP"] = request.getPrivateIP();
  }

  if (!!request.hasPublicIP()) {
    query["PublicIP"] = request.getPublicIP();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSecurityRisk()) {
    query["SecurityRisk"] = request.getSecurityRisk();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieves the list of outbound assets.
 *
 * @param request DescribeOutgoingAssetListRequest
 * @return DescribeOutgoingAssetListResponse
 */
DescribeOutgoingAssetListResponse Client::describeOutgoingAssetList(const DescribeOutgoingAssetListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingAssetListWithOptions(request, runtime);
}

/**
 * @summary Queries outbound destinations.
 *
 * @param request DescribeOutgoingDestinationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingDestinationResponse
 */
DescribeOutgoingDestinationResponse Client::describeOutgoingDestinationWithOptions(const DescribeOutgoingDestinationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclCoverage()) {
    query["AclCoverage"] = request.getAclCoverage();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDstIP()) {
    query["DstIP"] = request.getDstIP();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIsAITraffic()) {
    query["IsAITraffic"] = request.getIsAITraffic();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPrivateIP()) {
    query["PrivateIP"] = request.getPrivateIP();
  }

  if (!!request.hasPublicIP()) {
    query["PublicIP"] = request.getPublicIP();
  }

  if (!!request.hasSecuritySuggest()) {
    query["SecuritySuggest"] = request.getSecuritySuggest();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTagId()) {
    query["TagId"] = request.getTagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOutgoingDestination"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOutgoingDestinationResponse>();
}

/**
 * @summary Queries outbound destinations.
 *
 * @param request DescribeOutgoingDestinationRequest
 * @return DescribeOutgoingDestinationResponse
 */
DescribeOutgoingDestinationResponse Client::describeOutgoingDestination(const DescribeOutgoingDestinationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingDestinationWithOptions(request, runtime);
}

/**
 * @summary Queries the destination categories of outbound connections.
 *
 * @param request DescribeOutgoingDestinationCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingDestinationCategoryResponse
 */
DescribeOutgoingDestinationCategoryResponse Client::describeOutgoingDestinationCategoryWithOptions(const DescribeOutgoingDestinationCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasDstType()) {
    query["DstType"] = request.getDstType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTypeId()) {
    query["TypeId"] = request.getTypeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOutgoingDestinationCategory"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOutgoingDestinationCategoryResponse>();
}

/**
 * @summary Queries the destination categories of outbound connections.
 *
 * @param request DescribeOutgoingDestinationCategoryRequest
 * @return DescribeOutgoingDestinationCategoryResponse
 */
DescribeOutgoingDestinationCategoryResponse Client::describeOutgoingDestinationCategory(const DescribeOutgoingDestinationCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingDestinationCategoryWithOptions(request, runtime);
}

/**
 * @summary Queries the destination IP addresses of outbound connections.
 *
 * @description This operation queries the destination IP addresses of outbound connections.
 * ## Before you begin
 * - Make sure that Cloud Firewall is activated for your account. Both subscription and pay-as-you-go editions are supported.
 * - You can call the DescribeUserBuyVersion operation to query the UserStatus parameter. A value of false indicates that Cloud Firewall is not activated.
 *
 * @param request DescribeOutgoingDestinationIPRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingDestinationIPResponse
 */
DescribeOutgoingDestinationIPResponse Client::describeOutgoingDestinationIPWithOptions(const DescribeOutgoingDestinationIPRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDstIP()) {
    query["DstIP"] = request.getDstIP();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasPrivateIP()) {
    query["PrivateIP"] = request.getPrivateIP();
  }

  if (!!request.hasPublicIP()) {
    query["PublicIP"] = request.getPublicIP();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTagIdNew()) {
    query["TagIdNew"] = request.getTagIdNew();
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
 * @summary Queries the destination IP addresses of outbound connections.
 *
 * @description This operation queries the destination IP addresses of outbound connections.
 * ## Before you begin
 * - Make sure that Cloud Firewall is activated for your account. Both subscription and pay-as-you-go editions are supported.
 * - You can call the DescribeUserBuyVersion operation to query the UserStatus parameter. A value of false indicates that Cloud Firewall is not activated.
 *
 * @param request DescribeOutgoingDestinationIPRequest
 * @return DescribeOutgoingDestinationIPResponse
 */
DescribeOutgoingDestinationIPResponse Client::describeOutgoingDestinationIP(const DescribeOutgoingDestinationIPRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingDestinationIPWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of outbound destination IP addresses.
 *
 * @param request DescribeOutgoingDestinationIPDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingDestinationIPDetailResponse
 */
DescribeOutgoingDestinationIPDetailResponse Client::describeOutgoingDestinationIPDetailWithOptions(const DescribeOutgoingDestinationIPDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclCoverage()) {
    query["AclCoverage"] = request.getAclCoverage();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDstIP()) {
    query["DstIP"] = request.getDstIP();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIPType()) {
    query["IPType"] = request.getIPType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPrivateIP()) {
    query["PrivateIP"] = request.getPrivateIP();
  }

  if (!!request.hasPublicIP()) {
    query["PublicIP"] = request.getPublicIP();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTagId()) {
    query["TagId"] = request.getTagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOutgoingDestinationIPDetail"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOutgoingDestinationIPDetailResponse>();
}

/**
 * @summary Retrieves the details of outbound destination IP addresses.
 *
 * @param request DescribeOutgoingDestinationIPDetailRequest
 * @return DescribeOutgoingDestinationIPDetailResponse
 */
DescribeOutgoingDestinationIPDetailResponse Client::describeOutgoingDestinationIPDetail(const DescribeOutgoingDestinationIPDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingDestinationIPDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the domain name information for outbound connections.
 *
 * @param request DescribeOutgoingDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingDomainResponse
 */
DescribeOutgoingDomainResponse Client::describeOutgoingDomainWithOptions(const DescribeOutgoingDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDataType()) {
    query["DataType"] = request.getDataType();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIsAITraffic()) {
    query["IsAITraffic"] = request.getIsAITraffic();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPublicIP()) {
    query["PublicIP"] = request.getPublicIP();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTagIdNew()) {
    query["TagIdNew"] = request.getTagIdNew();
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
 * @summary Queries the domain name information for outbound connections.
 *
 * @param request DescribeOutgoingDomainRequest
 * @return DescribeOutgoingDomainResponse
 */
DescribeOutgoingDomainResponse Client::describeOutgoingDomain(const DescribeOutgoingDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingDomainWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an outbound domain.
 *
 * @param request DescribeOutgoingDomainDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingDomainDetailResponse
 */
DescribeOutgoingDomainDetailResponse Client::describeOutgoingDomainDetailWithOptions(const DescribeOutgoingDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclCoverage()) {
    query["AclCoverage"] = request.getAclCoverage();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasDomainList()) {
    query["DomainList"] = request.getDomainList();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIPType()) {
    query["IPType"] = request.getIPType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPrivateIP()) {
    query["PrivateIP"] = request.getPrivateIP();
  }

  if (!!request.hasPublicIP()) {
    query["PublicIP"] = request.getPublicIP();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTagId()) {
    query["TagId"] = request.getTagId();
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
 * @summary Retrieves the details of an outbound domain.
 *
 * @param request DescribeOutgoingDomainDetailRequest
 * @return DescribeOutgoingDomainDetailResponse
 */
DescribeOutgoingDomainDetailResponse Client::describeOutgoingDomainDetail(const DescribeOutgoingDomainDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingDomainDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves the number of intrusion prevention risks. Before you call this operation, activate Cloud Firewall. You can check the activation status by using the UserStatus parameter returned by DescribeUserBuyVersion. A value of false indicates that Cloud Firewall is not activated.
 *
 * @param request DescribeOutgoingRiskDomainAndIpCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingRiskDomainAndIpCountResponse
 */
DescribeOutgoingRiskDomainAndIpCountResponse Client::describeOutgoingRiskDomainAndIpCountWithOptions(const DescribeOutgoingRiskDomainAndIpCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOutgoingRiskDomainAndIpCount"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOutgoingRiskDomainAndIpCountResponse>();
}

/**
 * @summary Retrieves the number of intrusion prevention risks. Before you call this operation, activate Cloud Firewall. You can check the activation status by using the UserStatus parameter returned by DescribeUserBuyVersion. A value of false indicates that Cloud Firewall is not activated.
 *
 * @param request DescribeOutgoingRiskDomainAndIpCountRequest
 * @return DescribeOutgoingRiskDomainAndIpCountResponse
 */
DescribeOutgoingRiskDomainAndIpCountResponse Client::describeOutgoingRiskDomainAndIpCount(const DescribeOutgoingRiskDomainAndIpCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingRiskDomainAndIpCountWithOptions(request, runtime);
}

/**
 * @summary Queries the trend of outbound connection risks.
 *
 * @description This operation queries the trend of outbound connection risks.
 * ## Before you begin
 * - Ensure that Cloud Firewall is activated before you call this operation.
 * - You can call the DescribeUserBuyVersion operation to query the UserStatus parameter. If false is returned, the service is not activated.
 *
 * @param request DescribeOutgoingRiskTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingRiskTrendResponse
 */
DescribeOutgoingRiskTrendResponse Client::describeOutgoingRiskTrendWithOptions(const DescribeOutgoingRiskTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOutgoingRiskTrend"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOutgoingRiskTrendResponse>();
}

/**
 * @summary Queries the trend of outbound connection risks.
 *
 * @description This operation queries the trend of outbound connection risks.
 * ## Before you begin
 * - Ensure that Cloud Firewall is activated before you call this operation.
 * - You can call the DescribeUserBuyVersion operation to query the UserStatus parameter. If false is returned, the service is not activated.
 *
 * @param request DescribeOutgoingRiskTrendRequest
 * @return DescribeOutgoingRiskTrendResponse
 */
DescribeOutgoingRiskTrendResponse Client::describeOutgoingRiskTrend(const DescribeOutgoingRiskTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingRiskTrendWithOptions(request, runtime);
}

/**
 * @summary Retrieves outbound connection statistics.
 *
 * @param request DescribeOutgoingStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingStatisticResponse
 */
DescribeOutgoingStatisticResponse Client::describeOutgoingStatisticWithOptions(const DescribeOutgoingStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieves outbound connection statistics.
 *
 * @param request DescribeOutgoingStatisticRequest
 * @return DescribeOutgoingStatisticResponse
 */
DescribeOutgoingStatisticResponse Client::describeOutgoingStatistic(const DescribeOutgoingStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries outbound connection tags.
 *
 * @description ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 per user. If you exceed the limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request DescribeOutgoingTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOutgoingTagResponse
 */
DescribeOutgoingTagResponse Client::describeOutgoingTagWithOptions(const DescribeOutgoingTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDstType()) {
    query["DstType"] = request.getDstType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTagId()) {
    query["TagId"] = request.getTagId();
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
 * @summary Queries outbound connection tags.
 *
 * @description ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 per user. If you exceed the limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request DescribeOutgoingTagRequest
 * @return DescribeOutgoingTagResponse
 */
DescribeOutgoingTagResponse Client::describeOutgoingTag(const DescribeOutgoingTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOutgoingTagWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribePageDocuments is deprecated
 *
 * @summary Queries the FAQ for a page.
 *
 * @description ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
 *
 * @param request DescribePageDocumentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePageDocumentsResponse
 */
DescribePageDocumentsResponse Client::describePageDocumentsWithOptions(const DescribePageDocumentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageName()) {
    query["PageName"] = request.getPageName();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.getSourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasTabName()) {
    query["TabName"] = request.getTabName();
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
 * @deprecated OpenAPI DescribePageDocuments is deprecated
 *
 * @summary Queries the FAQ for a page.
 *
 * @description ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
 *
 * @param request DescribePageDocumentsRequest
 * @return DescribePageDocumentsResponse
 */
DescribePageDocumentsResponse Client::describePageDocuments(const DescribePageDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePageDocumentsWithOptions(request, runtime);
}

/**
 * @summary Queries the enabling status of strict mode for access control policies.
 *
 * @description This operation is typically used to query the enabling status of strict mode for access control policies.
 * ## Before you begin
 * - Before calling this operation, you must purchase and activate Cloud Firewall. You can activate the service on the Cloud Firewall buy page (China site: https://common-buy.aliyun.com/?commodityCode=cfw_sub_public_cn; International site: https://common-buy-intl.alibabacloud.com/?commodityCode=cfw_sub_public_intl).
 * ## Rate limit
 * The rate limit for this operation is 10 queries per second (QPS) per user. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
 *
 * @param request DescribePolicyAdvancedConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolicyAdvancedConfigResponse
 */
DescribePolicyAdvancedConfigResponse Client::describePolicyAdvancedConfigWithOptions(const DescribePolicyAdvancedConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Queries the enabling status of strict mode for access control policies.
 *
 * @description This operation is typically used to query the enabling status of strict mode for access control policies.
 * ## Before you begin
 * - Before calling this operation, you must purchase and activate Cloud Firewall. You can activate the service on the Cloud Firewall buy page (China site: https://common-buy.aliyun.com/?commodityCode=cfw_sub_public_cn; International site: https://common-buy-intl.alibabacloud.com/?commodityCode=cfw_sub_public_intl).
 * ## Rate limit
 * The rate limit for this operation is 10 queries per second (QPS) per user. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
 *
 * @param request DescribePolicyAdvancedConfigRequest
 * @return DescribePolicyAdvancedConfigResponse
 */
DescribePolicyAdvancedConfigResponse Client::describePolicyAdvancedConfig(const DescribePolicyAdvancedConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolicyAdvancedConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the effective priority range of access control policies.
 *
 * @description This operation queries the effective priority range of access control policies for inbound and outbound traffic.
 * ## QPS limit
 * The QPS limit for this operation is 10 requests per second per user. Calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
 *
 * @param request DescribePolicyPriorUsedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePolicyPriorUsedResponse
 */
DescribePolicyPriorUsedResponse Client::describePolicyPriorUsedWithOptions(const DescribePolicyPriorUsedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Queries the effective priority range of access control policies.
 *
 * @description This operation queries the effective priority range of access control policies for inbound and outbound traffic.
 * ## QPS limit
 * The QPS limit for this operation is 10 requests per second per user. Calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
 *
 * @param request DescribePolicyPriorUsedRequest
 * @return DescribePolicyPriorUsedResponse
 */
DescribePolicyPriorUsedResponse Client::describePolicyPriorUsed(const DescribePolicyPriorUsedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePolicyPriorUsedWithOptions(request, runtime);
}

/**
 * @summary Queries pay-as-you-go 2.0 bills.
 *
 * @description For pay-as-you-go users, the billing details are accurate to the specific resource instance level. For subscription users, only overall queries are supported.
 *
 * @param request DescribePostpayBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePostpayBillResponse
 */
DescribePostpayBillResponse Client::describePostpayBillWithOptions(const DescribePostpayBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePostpayBill"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePostpayBillResponse>();
}

/**
 * @summary Queries pay-as-you-go 2.0 bills.
 *
 * @description For pay-as-you-go users, the billing details are accurate to the specific resource instance level. For subscription users, only overall queries are supported.
 *
 * @param request DescribePostpayBillRequest
 * @return DescribePostpayBillResponse
 */
DescribePostpayBillResponse Client::describePostpayBill(const DescribePostpayBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePostpayBillWithOptions(request, runtime);
}

/**
 * @summary Queries the protection status of the pay-as-you-go edition.
 *
 * @param request DescribePostpayEnabledProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePostpayEnabledProtectionResponse
 */
DescribePostpayEnabledProtectionResponse Client::describePostpayEnabledProtectionWithOptions(const DescribePostpayEnabledProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePostpayEnabledProtection"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePostpayEnabledProtectionResponse>();
}

/**
 * @summary Queries the protection status of the pay-as-you-go edition.
 *
 * @param request DescribePostpayEnabledProtectionRequest
 * @return DescribePostpayEnabledProtectionResponse
 */
DescribePostpayEnabledProtectionResponse Client::describePostpayEnabledProtection(const DescribePostpayEnabledProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePostpayEnabledProtectionWithOptions(request, runtime);
}

/**
 * @summary Queries the details of pay-as-you-go billing traffic.
 *
 * @description For pay-as-you-go users, the details are accurate to the specific resource instance level. For subscription users, only overall queries are supported.
 *
 * @param request DescribePostpayTrafficDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePostpayTrafficDetailResponse
 */
DescribePostpayTrafficDetailResponse Client::describePostpayTrafficDetailWithOptions(const DescribePostpayTrafficDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasSearchItem()) {
    query["SearchItem"] = request.getSearchItem();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTrafficType()) {
    query["TrafficType"] = request.getTrafficType();
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
 * @summary Queries the details of pay-as-you-go billing traffic.
 *
 * @description For pay-as-you-go users, the details are accurate to the specific resource instance level. For subscription users, only overall queries are supported.
 *
 * @param request DescribePostpayTrafficDetailRequest
 * @return DescribePostpayTrafficDetailResponse
 */
DescribePostpayTrafficDetailResponse Client::describePostpayTrafficDetail(const DescribePostpayTrafficDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePostpayTrafficDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the total pay-as-you-go traffic for all border firewalls.
 *
 * @description The statistics are for the current Cloud Firewall instance and include all data from the date of purchase.
 *
 * @param request DescribePostpayTrafficTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePostpayTrafficTotalResponse
 */
DescribePostpayTrafficTotalResponse Client::describePostpayTrafficTotalWithOptions(const DescribePostpayTrafficTotalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Queries the total pay-as-you-go traffic for all border firewalls.
 *
 * @description The statistics are for the current Cloud Firewall instance and include all data from the date of purchase.
 *
 * @param request DescribePostpayTrafficTotalRequest
 * @return DescribePostpayTrafficTotalResponse
 */
DescribePostpayTrafficTotalResponse Client::describePostpayTrafficTotal(const DescribePostpayTrafficTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePostpayTrafficTotalWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the Internet Border switch module for pay-as-you-go users.
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
 * @summary Queries the status of the Internet Border switch module for pay-as-you-go users.
 *
 * @param request DescribePostpayUserInternetStatusRequest
 * @return DescribePostpayUserInternetStatusResponse
 */
DescribePostpayUserInternetStatusResponse Client::describePostpayUserInternetStatus(const DescribePostpayUserInternetStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePostpayUserInternetStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the NAT border firewall status for a pay-as-you-go Cloud Firewall.
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
 * @summary Queries the NAT border firewall status for a pay-as-you-go Cloud Firewall.
 *
 * @param request DescribePostpayUserNatStatusRequest
 * @return DescribePostpayUserNatStatusResponse
 */
DescribePostpayUserNatStatusResponse Client::describePostpayUserNatStatus(const DescribePostpayUserNatStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePostpayUserNatStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the VPC firewall switch module for pay-as-you-go users.
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
 * @summary Queries the status of the VPC firewall switch module for pay-as-you-go users.
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
 * @summary Queries the subscription 2.0 billing overview.
 *
 * @description The statistical scope covers the current Cloud Firewall instances of the user, including all data since the purchase date.
 *
 * @param request DescribePrepayBillTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePrepayBillTotalResponse
 */
DescribePrepayBillTotalResponse Client::describePrepayBillTotalWithOptions(const DescribePrepayBillTotalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillType()) {
    query["BillType"] = request.getBillType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrepayBillTotal"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePrepayBillTotalResponse>();
}

/**
 * @summary Queries the subscription 2.0 billing overview.
 *
 * @description The statistical scope covers the current Cloud Firewall instances of the user, including all data since the purchase date.
 *
 * @param request DescribePrepayBillTotalRequest
 * @return DescribePrepayBillTotalResponse
 */
DescribePrepayBillTotalResponse Client::describePrepayBillTotal(const DescribePrepayBillTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrepayBillTotalWithOptions(request, runtime);
}

/**
 * @summary Queries the list of private DNS domain names.
 *
 * @description Queries the list of domain names that require resolution by using private DNS endpoints.
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
 * @summary Queries the list of private DNS domain names.
 *
 * @description Queries the list of domain names that require resolution by using private DNS endpoints.
 *
 * @param request DescribePrivateDnsDomainNameListRequest
 * @return DescribePrivateDnsDomainNameListResponse
 */
DescribePrivateDnsDomainNameListResponse Client::describePrivateDnsDomainNameList(const DescribePrivateDnsDomainNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrivateDnsDomainNameListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a private DNS endpoint.
 *
 * @description This operation queries the details of a private DNS endpoint.
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
 * @summary Retrieves the details of a private DNS endpoint.
 *
 * @description This operation queries the details of a private DNS endpoint.
 *
 * @param request DescribePrivateDnsEndpointDetailRequest
 * @return DescribePrivateDnsEndpointDetailResponse
 */
DescribePrivateDnsEndpointDetailResponse Client::describePrivateDnsEndpointDetail(const DescribePrivateDnsEndpointDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrivateDnsEndpointDetailWithOptions(request, runtime);
}

/**
 * @summary Queries a list of private DNS endpoints.
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
 * @summary Queries a list of private DNS endpoints.
 *
 * @param request DescribePrivateDnsEndpointListRequest
 * @return DescribePrivateDnsEndpointListResponse
 */
DescribePrivateDnsEndpointListResponse Client::describePrivateDnsEndpointList(const DescribePrivateDnsEndpointListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrivateDnsEndpointListWithOptions(request, runtime);
}

/**
 * @summary Returns statistics about private DNS.
 *
 * @param request DescribePrivateDnsStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePrivateDnsStatisticsResponse
 */
DescribePrivateDnsStatisticsResponse Client::describePrivateDnsStatisticsWithOptions(const DescribePrivateDnsStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNameCreatedEndTime()) {
    query["DomainNameCreatedEndTime"] = request.getDomainNameCreatedEndTime();
  }

  if (!!request.hasDomainNameCreatedStartTime()) {
    query["DomainNameCreatedStartTime"] = request.getDomainNameCreatedStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrivateDnsStatistics"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePrivateDnsStatisticsResponse>();
}

/**
 * @summary Returns statistics about private DNS.
 *
 * @param request DescribePrivateDnsStatisticsRequest
 * @return DescribePrivateDnsStatisticsResponse
 */
DescribePrivateDnsStatisticsResponse Client::describePrivateDnsStatistics(const DescribePrivateDnsStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrivateDnsStatisticsWithOptions(request, runtime);
}

/**
 * @summary Retrieves region information.
 *
 * @description ## QPS limits
 * The QPS limit per user for this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request DescribeRegionInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionInfoResponse
 */
DescribeRegionInfoResponse Client::describeRegionInfoWithOptions(const DescribeRegionInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.getSourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Retrieves region information.
 *
 * @description ## QPS limits
 * The QPS limit per user for this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request DescribeRegionInfoRequest
 * @return DescribeRegionInfoResponse
 */
DescribeRegionInfoResponse Client::describeRegionInfo(const DescribeRegionInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic redirection settings for regions and asset types.
 *
 * @description This operation is typically used to retrieve the DNS resolution results of a domain name. Currently, only Alibaba Cloud DNS is supported for retrieving resolution results. The domain name to be queried must use Alibaba Cloud DNS to obtain its resolution results.
 * ## QPS limits
 * The queries per second (QPS) limit per user for this operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
 *
 * @param request DescribeRegionResourceTypeAutoEnableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionResourceTypeAutoEnableResponse
 */
DescribeRegionResourceTypeAutoEnableResponse Client::describeRegionResourceTypeAutoEnableWithOptions(const DescribeRegionResourceTypeAutoEnableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegionResourceTypeAutoEnable"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionResourceTypeAutoEnableResponse>();
}

/**
 * @summary Queries the traffic redirection settings for regions and asset types.
 *
 * @description This operation is typically used to retrieve the DNS resolution results of a domain name. Currently, only Alibaba Cloud DNS is supported for retrieving resolution results. The domain name to be queried must use Alibaba Cloud DNS to obtain its resolution results.
 * ## QPS limits
 * The queries per second (QPS) limit per user for this operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
 *
 * @param request DescribeRegionResourceTypeAutoEnableRequest
 * @return DescribeRegionResourceTypeAutoEnableResponse
 */
DescribeRegionResourceTypeAutoEnableResponse Client::describeRegionResourceTypeAutoEnable(const DescribeRegionResourceTypeAutoEnableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionResourceTypeAutoEnableWithOptions(request, runtime);
}

/**
 * @summary Queries the default traffic redirection for asset types.
 *
 * @description This operation is generally used to obtain the DNS resolution results of a domain name. Currently, only Alibaba Cloud DNS is supported for obtaining resolution results. The domain name to be queried must use Alibaba Cloud DNS to retrieve its resolution results.
 * ## QPS limit
 * The queries per second (QPS) limit per user for this operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DescribeResourceTypeAutoEnableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceTypeAutoEnableResponse
 */
DescribeResourceTypeAutoEnableResponse Client::describeResourceTypeAutoEnableWithOptions(const DescribeResourceTypeAutoEnableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Queries the default traffic redirection for asset types.
 *
 * @description This operation is generally used to obtain the DNS resolution results of a domain name. Currently, only Alibaba Cloud DNS is supported for obtaining resolution results. The domain name to be queried must use Alibaba Cloud DNS to retrieve its resolution results.
 * ## QPS limit
 * The queries per second (QPS) limit per user for this operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DescribeResourceTypeAutoEnableRequest
 * @return DescribeResourceTypeAutoEnableResponse
 */
DescribeResourceTypeAutoEnableResponse Client::describeResourceTypeAutoEnable(const DescribeResourceTypeAutoEnableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceTypeAutoEnableWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed data of intrusion prevention events.
 *
 * @description This operation queries and downloads detailed data of intrusion prevention events. Query 5 to 10 entries at a time. To prevent query timeouts, set the NoLocation parameter to true if IP geolocation information is not required.
 * ## QPS limits
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable rate.
 *
 * @param request DescribeRiskEventGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskEventGroupResponse
 */
DescribeRiskEventGroupResponse Client::describeRiskEventGroupWithOptions(const DescribeRiskEventGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttackApp()) {
    query["AttackApp"] = request.getAttackApp();
  }

  if (!!request.hasAttackAppCategory()) {
    query["AttackAppCategory"] = request.getAttackAppCategory();
  }

  if (!!request.hasAttackType()) {
    query["AttackType"] = request.getAttackType();
  }

  if (!!request.hasBuyVersion()) {
    query["BuyVersion"] = request.getBuyVersion();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDataType()) {
    query["DataType"] = request.getDataType();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDstIP()) {
    query["DstIP"] = request.getDstIP();
  }

  if (!!request.hasDstNetworkInstanceId()) {
    query["DstNetworkInstanceId"] = request.getDstNetworkInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventName()) {
    query["EventName"] = request.getEventName();
  }

  if (!!request.hasFirewallType()) {
    query["FirewallType"] = request.getFirewallType();
  }

  if (!!request.hasIsOnlyPrivateAssoc()) {
    query["IsOnlyPrivateAssoc"] = request.getIsOnlyPrivateAssoc();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNoLocation()) {
    query["NoLocation"] = request.getNoLocation();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRuleResult()) {
    query["RuleResult"] = request.getRuleResult();
  }

  if (!!request.hasRuleSource()) {
    query["RuleSource"] = request.getRuleSource();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasSrcIP()) {
    query["SrcIP"] = request.getSrcIP();
  }

  if (!!request.hasSrcNetworkInstanceId()) {
    query["SrcNetworkInstanceId"] = request.getSrcNetworkInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasVulLevel()) {
    query["VulLevel"] = request.getVulLevel();
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
 * @summary Queries the detailed data of intrusion prevention events.
 *
 * @description This operation queries and downloads detailed data of intrusion prevention events. Query 5 to 10 entries at a time. To prevent query timeouts, set the NoLocation parameter to true if IP geolocation information is not required.
 * ## QPS limits
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable rate.
 *
 * @param request DescribeRiskEventGroupRequest
 * @return DescribeRiskEventGroupResponse
 */
DescribeRiskEventGroupResponse Client::describeRiskEventGroup(const DescribeRiskEventGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskEventGroupWithOptions(request, runtime);
}

/**
 * @summary Retrieves the attack payload of an intrusion prevention event.
 *
 * @param request DescribeRiskEventPayloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskEventPayloadResponse
 */
DescribeRiskEventPayloadResponse Client::describeRiskEventPayloadWithOptions(const DescribeRiskEventPayloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDstIP()) {
    query["DstIP"] = request.getDstIP();
  }

  if (!!request.hasDstVpcId()) {
    query["DstVpcId"] = request.getDstVpcId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFirewallType()) {
    query["FirewallType"] = request.getFirewallType();
  }

  if (!!request.hasPublicIP()) {
    query["PublicIP"] = request.getPublicIP();
  }

  if (!!request.hasSrcIP()) {
    query["SrcIP"] = request.getSrcIP();
  }

  if (!!request.hasSrcVpcId()) {
    query["SrcVpcId"] = request.getSrcVpcId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUUID()) {
    query["UUID"] = request.getUUID();
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
 * @summary Retrieves the attack payload of an intrusion prevention event.
 *
 * @param request DescribeRiskEventPayloadRequest
 * @return DescribeRiskEventPayloadResponse
 */
DescribeRiskEventPayloadResponse Client::describeRiskEventPayload(const DescribeRiskEventPayloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskEventPayloadWithOptions(request, runtime);
}

/**
 * @summary Provides statistics for intrusion prevention events.
 *
 * @param request DescribeRiskEventStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskEventStatisticResponse
 */
DescribeRiskEventStatisticResponse Client::describeRiskEventStatisticWithOptions(const DescribeRiskEventStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttackApp()) {
    query["AttackApp"] = request.getAttackApp();
  }

  if (!!request.hasAttackType()) {
    query["AttackType"] = request.getAttackType();
  }

  if (!!request.hasBuyVersion()) {
    query["BuyVersion"] = request.getBuyVersion();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRiskEventStatistic"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRiskEventStatisticResponse>();
}

/**
 * @summary Provides statistics for intrusion prevention events.
 *
 * @param request DescribeRiskEventStatisticRequest
 * @return DescribeRiskEventStatisticResponse
 */
DescribeRiskEventStatisticResponse Client::describeRiskEventStatistic(const DescribeRiskEventStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskEventStatisticWithOptions(request, runtime);
}

/**
 * @summary Retrieves the ranking of applications that are targeted by intrusion prevention attacks.
 *
 * @param request DescribeRiskEventTopAttackAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskEventTopAttackAppResponse
 */
DescribeRiskEventTopAttackAppResponse Client::describeRiskEventTopAttackAppWithOptions(const DescribeRiskEventTopAttackAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttackApp()) {
    query["AttackApp"] = request.getAttackApp();
  }

  if (!!request.hasAttackType()) {
    query["AttackType"] = request.getAttackType();
  }

  if (!!request.hasBuyVersion()) {
    query["BuyVersion"] = request.getBuyVersion();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRiskEventTopAttackApp"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRiskEventTopAttackAppResponse>();
}

/**
 * @summary Retrieves the ranking of applications that are targeted by intrusion prevention attacks.
 *
 * @param request DescribeRiskEventTopAttackAppRequest
 * @return DescribeRiskEventTopAttackAppResponse
 */
DescribeRiskEventTopAttackAppResponse Client::describeRiskEventTopAttackApp(const DescribeRiskEventTopAttackAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskEventTopAttackAppWithOptions(request, runtime);
}

/**
 * @summary Queries the top assets targeted by attacks.
 *
 * @description ## QPS limits
 * You can make up to 10 queries per second (QPS) to this API. If you exceed this limit, your API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request DescribeRiskEventTopAttackAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskEventTopAttackAssetResponse
 */
DescribeRiskEventTopAttackAssetResponse Client::describeRiskEventTopAttackAssetWithOptions(const DescribeRiskEventTopAttackAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttackApp()) {
    query["AttackApp"] = request.getAttackApp();
  }

  if (!!request.hasAttackType()) {
    query["AttackType"] = request.getAttackType();
  }

  if (!!request.hasBuyVersion()) {
    query["BuyVersion"] = request.getBuyVersion();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the top assets targeted by attacks.
 *
 * @description ## QPS limits
 * You can make up to 10 queries per second (QPS) to this API. If you exceed this limit, your API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request DescribeRiskEventTopAttackAssetRequest
 * @return DescribeRiskEventTopAttackAssetResponse
 */
DescribeRiskEventTopAttackAssetResponse Client::describeRiskEventTopAttackAsset(const DescribeRiskEventTopAttackAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskEventTopAttackAssetWithOptions(request, runtime);
}

/**
 * @summary Retrieves a ranked list of attack types from intrusion prevention events.
 *
 * @param request DescribeRiskEventTopAttackTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskEventTopAttackTypeResponse
 */
DescribeRiskEventTopAttackTypeResponse Client::describeRiskEventTopAttackTypeWithOptions(const DescribeRiskEventTopAttackTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuyVersion()) {
    query["BuyVersion"] = request.getBuyVersion();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRiskEventTopAttackType"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRiskEventTopAttackTypeResponse>();
}

/**
 * @summary Retrieves a ranked list of attack types from intrusion prevention events.
 *
 * @param request DescribeRiskEventTopAttackTypeRequest
 * @return DescribeRiskEventTopAttackTypeResponse
 */
DescribeRiskEventTopAttackTypeResponse Client::describeRiskEventTopAttackType(const DescribeRiskEventTopAttackTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskEventTopAttackTypeWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeRiskSecurityGroupDetail is deprecated
 *
 * @summary Retrieves the details of a risk security group.
 *
 * @param request DescribeRiskSecurityGroupDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskSecurityGroupDetailResponse
 */
DescribeRiskSecurityGroupDetailResponse Client::describeRiskSecurityGroupDetailWithOptions(const DescribeRiskSecurityGroupDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRuleUuid()) {
    query["RuleUuid"] = request.getRuleUuid();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @deprecated OpenAPI DescribeRiskSecurityGroupDetail is deprecated
 *
 * @summary Retrieves the details of a risk security group.
 *
 * @param request DescribeRiskSecurityGroupDetailRequest
 * @return DescribeRiskSecurityGroupDetailResponse
 */
DescribeRiskSecurityGroupDetailResponse Client::describeRiskSecurityGroupDetail(const DescribeRiskSecurityGroupDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskSecurityGroupDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a data leak event.
 *
 * @param request DescribeSdlEventDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSdlEventDetailResponse
 */
DescribeSdlEventDetailResponse Client::describeSdlEventDetailWithOptions(const DescribeSdlEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDstIp()) {
    query["DstIp"] = request.getDstIp();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSrcIp()) {
    query["SrcIp"] = request.getSrcIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSdlEventDetail"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSdlEventDetailResponse>();
}

/**
 * @summary Retrieves the details of a data leak event.
 *
 * @param request DescribeSdlEventDetailRequest
 * @return DescribeSdlEventDetailResponse
 */
DescribeSdlEventDetailResponse Client::describeSdlEventDetail(const DescribeSdlEventDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSdlEventDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the list of data leak events.
 *
 * @param request DescribeSdlEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSdlEventListResponse
 */
DescribeSdlEventListResponse Client::describeSdlEventListWithOptions(const DescribeSdlEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDstIp()) {
    query["DstIp"] = request.getDstIp();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLocation()) {
    query["Location"] = request.getLocation();
  }

  if (!!request.hasOnlyAiEvt()) {
    query["OnlyAiEvt"] = request.getOnlyAiEvt();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSensitiveLevel()) {
    query["SensitiveLevel"] = request.getSensitiveLevel();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasSrcIp()) {
    query["SrcIp"] = request.getSrcIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSdlEventList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSdlEventListResponse>();
}

/**
 * @summary Queries the list of data leak events.
 *
 * @param request DescribeSdlEventListRequest
 * @return DescribeSdlEventListResponse
 */
DescribeSdlEventListResponse Client::describeSdlEventList(const DescribeSdlEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSdlEventListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of sensitive data involved in data leaks.
 *
 * @param request DescribeSdlEventSdListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSdlEventSdListResponse
 */
DescribeSdlEventSdListResponse Client::describeSdlEventSdListWithOptions(const DescribeSdlEventSdListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDstIp()) {
    query["DstIp"] = request.getDstIp();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSrcIp()) {
    query["SrcIp"] = request.getSrcIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSdlEventSdList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSdlEventSdListResponse>();
}

/**
 * @summary Retrieves the list of sensitive data involved in data leaks.
 *
 * @param request DescribeSdlEventSdListRequest
 * @return DescribeSdlEventSdListResponse
 */
DescribeSdlEventSdListResponse Client::describeSdlEventSdList(const DescribeSdlEventSdListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSdlEventSdListWithOptions(request, runtime);
}

/**
 * @summary Queries statistics about data leaks.
 *
 * @param request DescribeSdlEventStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSdlEventStatisticResponse
 */
DescribeSdlEventStatisticResponse Client::describeSdlEventStatisticWithOptions(const DescribeSdlEventStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSdlEventStatistic"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSdlEventStatisticResponse>();
}

/**
 * @summary Queries statistics about data leaks.
 *
 * @param request DescribeSdlEventStatisticRequest
 * @return DescribeSdlEventStatisticResponse
 */
DescribeSdlEventStatisticResponse Client::describeSdlEventStatistic(const DescribeSdlEventStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSdlEventStatisticWithOptions(request, runtime);
}

/**
 * @summary Retrieves the packet payload of a sensitive data leak event.
 *
 * @description ## QPS limit
 * The single-user QPS limit for this API is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
 *
 * @param request DescribeSdlLastPayloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSdlLastPayloadResponse
 */
DescribeSdlLastPayloadResponse Client::describeSdlLastPayloadWithOptions(const DescribeSdlLastPayloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDstIp()) {
    query["DstIp"] = request.getDstIp();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSensitiveCategory()) {
    query["SensitiveCategory"] = request.getSensitiveCategory();
  }

  if (!!request.hasSrcIp()) {
    query["SrcIp"] = request.getSrcIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSdlLastPayload"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSdlLastPayloadResponse>();
}

/**
 * @summary Retrieves the packet payload of a sensitive data leak event.
 *
 * @description ## QPS limit
 * The single-user QPS limit for this API is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
 *
 * @param request DescribeSdlLastPayloadRequest
 * @return DescribeSdlLastPayloadResponse
 */
DescribeSdlLastPayloadResponse Client::describeSdlLastPayload(const DescribeSdlLastPayloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSdlLastPayloadWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of sensitive data.
 *
 * @param request DescribeSdlStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSdlStatisticResponse
 */
DescribeSdlStatisticResponse Client::describeSdlStatisticWithOptions(const DescribeSdlStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSdlStatistic"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSdlStatisticResponse>();
}

/**
 * @summary Retrieves the details of sensitive data.
 *
 * @param request DescribeSdlStatisticRequest
 * @return DescribeSdlStatisticResponse
 */
DescribeSdlStatisticResponse Client::describeSdlStatistic(const DescribeSdlStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSdlStatisticWithOptions(request, runtime);
}

/**
 * @summary Retrieves the safe mode pattern.
 *
 * @description This operation is typically used to perform a paged query for information about assets protected by Cloud Firewall. You can use paging to retrieve the data.
 * ## QPS limit
 * The QPS limit per user for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Invoke this operation at a reasonable frequency.
 *
 * @param request DescribeSecurityModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityModeResponse
 */
DescribeSecurityModeResponse Client::describeSecurityModeWithOptions(const DescribeSecurityModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Retrieves the safe mode pattern.
 *
 * @description This operation is typically used to perform a paged query for information about assets protected by Cloud Firewall. You can use paging to retrieve the data.
 * ## QPS limit
 * The QPS limit per user for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Invoke this operation at a reasonable frequency.
 *
 * @param request DescribeSecurityModeRequest
 * @return DescribeSecurityModeResponse
 */
DescribeSecurityModeResponse Client::describeSecurityMode(const DescribeSecurityModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityModeWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeSecurityProxy is deprecated, please use Cloudfw::2017-12-07::DescribeNatFirewallList instead.
 *
 * @summary Retrieves NAT firewall information.
 *
 * @param request DescribeSecurityProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityProxyResponse
 */
DescribeSecurityProxyResponse Client::describeSecurityProxyWithOptions(const DescribeSecurityProxyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProxyId()) {
    query["ProxyId"] = request.getProxyId();
  }

  if (!!request.hasProxyName()) {
    query["ProxyName"] = request.getProxyName();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
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
 * @deprecated OpenAPI DescribeSecurityProxy is deprecated, please use Cloudfw::2017-12-07::DescribeNatFirewallList instead.
 *
 * @summary Retrieves NAT firewall information.
 *
 * @param request DescribeSecurityProxyRequest
 * @return DescribeSecurityProxyResponse
 */
DescribeSecurityProxyResponse Client::describeSecurityProxy(const DescribeSecurityProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityProxyWithOptions(request, runtime);
}

/**
 * @summary Queries NAT firewall resources.
 *
 * @param request DescribeSecurityProxyResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityProxyResourcesResponse
 */
DescribeSecurityProxyResourcesResponse Client::describeSecurityProxyResourcesWithOptions(const DescribeSecurityProxyResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityProxyResources"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityProxyResourcesResponse>();
}

/**
 * @summary Queries NAT firewall resources.
 *
 * @param request DescribeSecurityProxyResourcesRequest
 * @return DescribeSecurityProxyResourcesResponse
 */
DescribeSecurityProxyResourcesResponse Client::describeSecurityProxyResources(const DescribeSecurityProxyResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityProxyResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the sensitive data detection switch.
 *
 * @param request DescribeSensitiveSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSensitiveSwitchResponse
 */
DescribeSensitiveSwitchResponse Client::describeSensitiveSwitchWithOptions(const DescribeSensitiveSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryName()) {
    query["CategoryName"] = request.getCategoryName();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentCategory()) {
    query["ParentCategory"] = request.getParentCategory();
  }

  if (!!request.hasSensitiveCategory()) {
    query["SensitiveCategory"] = request.getSensitiveCategory();
  }

  if (!!request.hasSensitiveLevel()) {
    query["SensitiveLevel"] = request.getSensitiveLevel();
  }

  if (!!request.hasSwitchStatus()) {
    query["SwitchStatus"] = request.getSwitchStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSensitiveSwitch"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSensitiveSwitchResponse>();
}

/**
 * @summary Queries the status of the sensitive data detection switch.
 *
 * @param request DescribeSensitiveSwitchRequest
 * @return DescribeSensitiveSwitchResponse
 */
DescribeSensitiveSwitchResponse Client::describeSensitiveSwitch(const DescribeSensitiveSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSensitiveSwitchWithOptions(request, runtime);
}

/**
 * @summary Queries the version information of the signature library.
 *
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
 * @summary Queries the version information of the signature library.
 *
 * @return DescribeSignatureLibVersionResponse
 */
DescribeSignatureLibVersionResponse Client::describeSignatureLibVersion() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSignatureLibVersionWithOptions(runtime);
}

/**
 * @summary Retrieves the SLR authorization information for a user.
 *
 * @param request DescribeSlrGrantRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlrGrantResponse
 */
DescribeSlrGrantResponse Client::describeSlrGrantWithOptions(const DescribeSlrGrantRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlrGrant"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlrGrantResponse>();
}

/**
 * @summary Retrieves the SLR authorization information for a user.
 *
 * @param request DescribeSlrGrantRequest
 * @return DescribeSlrGrantResponse
 */
DescribeSlrGrantResponse Client::describeSlrGrant(const DescribeSlrGrantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlrGrantWithOptions(request, runtime);
}

/**
 * @summary Retrieves the enabling status of SLS.
 *
 * @param request DescribeSlsAnalyzeOpenStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsAnalyzeOpenStatusResponse
 */
DescribeSlsAnalyzeOpenStatusResponse Client::describeSlsAnalyzeOpenStatusWithOptions(const DescribeSlsAnalyzeOpenStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Retrieves the enabling status of SLS.
 *
 * @param request DescribeSlsAnalyzeOpenStatusRequest
 * @return DescribeSlsAnalyzeOpenStatusResponse
 */
DescribeSlsAnalyzeOpenStatusResponse Client::describeSlsAnalyzeOpenStatus(const DescribeSlsAnalyzeOpenStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsAnalyzeOpenStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the execution status of a log configuration modification task.
 *
 * @description Before calling this operation, call ModifySlsDispatchConfig to obtain the TaskId.
 *
 * @param request DescribeTaskDispatchStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTaskDispatchStatusResponse
 */
DescribeTaskDispatchStatusResponse Client::describeTaskDispatchStatusWithOptions(const DescribeTaskDispatchStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTaskDispatchStatus"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTaskDispatchStatusResponse>();
}

/**
 * @summary Queries the execution status of a log configuration modification task.
 *
 * @description Before calling this operation, call ModifySlsDispatchConfig to obtain the TaskId.
 *
 * @param request DescribeTaskDispatchStatusRequest
 * @return DescribeTaskDispatchStatusResponse
 */
DescribeTaskDispatchStatusResponse Client::describeTaskDispatchStatus(const DescribeTaskDispatchStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTaskDispatchStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the threat intelligence configuration information.
 *
 * @description This operation is generally used to perform a paged query on the information about access control policies of NAT firewalls.
 *
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
 * @summary Queries the threat intelligence configuration information.
 *
 * @description This operation is generally used to perform a paged query on the information about access control policies of NAT firewalls.
 *
 * @return DescribeThreatIntelligenceSwitchResponse
 */
DescribeThreatIntelligenceSwitchResponse Client::describeThreatIntelligenceSwitch() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeThreatIntelligenceSwitchWithOptions(runtime);
}

/**
 * @summary You can obtain an ACL backup for a VPC firewall for a transit router.
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
    request.setCandidateListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCandidateList(), "CandidateList", "json"));
  }

  json query = {};
  if (!!request.hasCandidateListShrink()) {
    query["CandidateList"] = request.getCandidateListShrink();
  }

  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.getFirewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTrFirewallRoutePolicyId()) {
    query["TrFirewallRoutePolicyId"] = request.getTrFirewallRoutePolicyId();
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
 * @summary You can obtain an ACL backup for a VPC firewall for a transit router.
 *
 * @param request DescribeTrFirewallPolicyBackUpAssociationListRequest
 * @return DescribeTrFirewallPolicyBackUpAssociationListResponse
 */
DescribeTrFirewallPolicyBackUpAssociationListResponse Client::describeTrFirewallPolicyBackUpAssociationList(const DescribeTrFirewallPolicyBackUpAssociationListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrFirewallPolicyBackUpAssociationListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of route policies for a VPC firewall for a transit router.
 *
 * @param request DescribeTrFirewallV2RoutePolicyListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTrFirewallV2RoutePolicyListResponse
 */
DescribeTrFirewallV2RoutePolicyListResponse Client::describeTrFirewallV2RoutePolicyListWithOptions(const DescribeTrFirewallV2RoutePolicyListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.getFirewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
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
 * @summary Retrieves the list of route policies for a VPC firewall for a transit router.
 *
 * @param request DescribeTrFirewallV2RoutePolicyListRequest
 * @return DescribeTrFirewallV2RoutePolicyListResponse
 */
DescribeTrFirewallV2RoutePolicyListResponse Client::describeTrFirewallV2RoutePolicyList(const DescribeTrFirewallV2RoutePolicyListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrFirewallV2RoutePolicyListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a VPC firewall for a transit router.
 *
 * @description Queries the details of a VPC firewall for an Enterprise Edition transit router. You can obtain the FirewallId by calling DescribeTrFirewallsV2List. If the firewall has not been created, you must first prepare an Enterprise Edition transit router in Cloud Enterprise Network (CEN) and then call CreateTrFirewallV2 to create the firewall and obtain the FirewallId.
 *
 * @param request DescribeTrFirewallsV2DetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTrFirewallsV2DetailResponse
 */
DescribeTrFirewallsV2DetailResponse Client::describeTrFirewallsV2DetailWithOptions(const DescribeTrFirewallsV2DetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.getFirewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Retrieves the details of a VPC firewall for a transit router.
 *
 * @description Queries the details of a VPC firewall for an Enterprise Edition transit router. You can obtain the FirewallId by calling DescribeTrFirewallsV2List. If the firewall has not been created, you must first prepare an Enterprise Edition transit router in Cloud Enterprise Network (CEN) and then call CreateTrFirewallV2 to create the firewall and obtain the FirewallId.
 *
 * @param request DescribeTrFirewallsV2DetailRequest
 * @return DescribeTrFirewallsV2DetailResponse
 */
DescribeTrFirewallsV2DetailResponse Client::describeTrFirewallsV2Detail(const DescribeTrFirewallsV2DetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrFirewallsV2DetailWithOptions(request, runtime);
}

/**
 * @summary Queries the list of VPC firewalls for a transit router.
 *
 * @param request DescribeTrFirewallsV2ListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTrFirewallsV2ListResponse
 */
DescribeTrFirewallsV2ListResponse Client::describeTrFirewallsV2ListWithOptions(const DescribeTrFirewallsV2ListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.getFirewallId();
  }

  if (!!request.hasFirewallName()) {
    query["FirewallName"] = request.getFirewallName();
  }

  if (!!request.hasFirewallSwitchStatus()) {
    query["FirewallSwitchStatus"] = request.getFirewallSwitchStatus();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasRouteMode()) {
    query["RouteMode"] = request.getRouteMode();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
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
 * @summary Queries the list of VPC firewalls for a transit router.
 *
 * @param request DescribeTrFirewallsV2ListRequest
 * @return DescribeTrFirewallsV2ListResponse
 */
DescribeTrFirewallsV2ListResponse Client::describeTrFirewallsV2List(const DescribeTrFirewallsV2ListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrFirewallsV2ListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the route table list of a VPC firewall for a transit router. Prerequisites: CEN → Enterprise Edition transit router → VPC connection → CreateTrFirewallV2 → routing policy.
 *
 * @param request DescribeTrFirewallsV2RouteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTrFirewallsV2RouteListResponse
 */
DescribeTrFirewallsV2RouteListResponse Client::describeTrFirewallsV2RouteListWithOptions(const DescribeTrFirewallsV2RouteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.getFirewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTrFirewallRoutePolicyId()) {
    query["TrFirewallRoutePolicyId"] = request.getTrFirewallRoutePolicyId();
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
 * @summary Retrieves the route table list of a VPC firewall for a transit router. Prerequisites: CEN → Enterprise Edition transit router → VPC connection → CreateTrFirewallV2 → routing policy.
 *
 * @param request DescribeTrFirewallsV2RouteListRequest
 * @return DescribeTrFirewallsV2RouteListResponse
 */
DescribeTrFirewallsV2RouteListResponse Client::describeTrFirewallsV2RouteList(const DescribeTrFirewallsV2RouteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrFirewallsV2RouteListWithOptions(request, runtime);
}

/**
 * @summary Queries log traffic information.
 *
 * @param request DescribeTrafficLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTrafficLogResponse
 */
DescribeTrafficLogResponse Client::describeTrafficLogWithOptions(const DescribeTrafficLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclPreRuleId()) {
    query["AclPreRuleId"] = request.getAclPreRuleId();
  }

  if (!!request.hasAclPreState()) {
    query["AclPreState"] = request.getAclPreState();
  }

  if (!!request.hasAppDpiState()) {
    query["AppDpiState"] = request.getAppDpiState();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAssetRegion()) {
    query["AssetRegion"] = request.getAssetRegion();
  }

  if (!!request.hasAttackType()) {
    query["AttackType"] = request.getAttackType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainUrl()) {
    query["DomainUrl"] = request.getDomainUrl();
  }

  if (!!request.hasDstIP()) {
    query["DstIP"] = request.getDstIP();
  }

  if (!!request.hasDstPort()) {
    query["DstPort"] = request.getDstPort();
  }

  if (!!request.hasDstVpcId()) {
    query["DstVpcId"] = request.getDstVpcId();
  }

  if (!!request.hasDstVpcRegionNo()) {
    query["DstVpcRegionNo"] = request.getDstVpcRegionNo();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFirewallType()) {
    query["FirewallType"] = request.getFirewallType();
  }

  if (!!request.hasFlowType()) {
    query["FlowType"] = request.getFlowType();
  }

  if (!!request.hasIpProtocol()) {
    query["IpProtocol"] = request.getIpProtocol();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLocation()) {
    query["Location"] = request.getLocation();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasNatFirewallId()) {
    query["NatFirewallId"] = request.getNatFirewallId();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryId()) {
    query["QueryId"] = request.getQueryId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleResult()) {
    query["RuleResult"] = request.getRuleResult();
  }

  if (!!request.hasRuleSource()) {
    query["RuleSource"] = request.getRuleSource();
  }

  if (!!request.hasRuleSourceFinal()) {
    query["RuleSourceFinal"] = request.getRuleSourceFinal();
  }

  if (!!request.hasSourceCode()) {
    query["SourceCode"] = request.getSourceCode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasSrcIP()) {
    query["SrcIP"] = request.getSrcIP();
  }

  if (!!request.hasSrcPort()) {
    query["SrcPort"] = request.getSrcPort();
  }

  if (!!request.hasSrcPrivateIP()) {
    query["SrcPrivateIP"] = request.getSrcPrivateIP();
  }

  if (!!request.hasSrcVpcId()) {
    query["SrcVpcId"] = request.getSrcVpcId();
  }

  if (!!request.hasSrcVpcRegionNo()) {
    query["SrcVpcRegionNo"] = request.getSrcVpcRegionNo();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTlsScopeId()) {
    query["TlsScopeId"] = request.getTlsScopeId();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
  }

  if (!!request.hasVulLevel()) {
    query["VulLevel"] = request.getVulLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTrafficLog"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTrafficLogResponse>();
}

/**
 * @summary Queries log traffic information.
 *
 * @param request DescribeTrafficLogRequest
 * @return DescribeTrafficLogResponse
 */
DescribeTrafficLogResponse Client::describeTrafficLog(const DescribeTrafficLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrafficLogWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Transit Router resources.
 *
 * @param request DescribeTransitRouterResourcesListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTransitRouterResourcesListResponse
 */
DescribeTransitRouterResourcesListResponse Client::describeTransitRouterResourcesListWithOptions(const DescribeTransitRouterResourcesListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.getFirewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTransitRouterResourcesList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTransitRouterResourcesListResponse>();
}

/**
 * @summary Queries a list of Transit Router resources.
 *
 * @param request DescribeTransitRouterResourcesListRequest
 * @return DescribeTransitRouterResourcesListResponse
 */
DescribeTransitRouterResourcesListResponse Client::describeTransitRouterResourcesList(const DescribeTransitRouterResourcesListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTransitRouterResourcesListWithOptions(request, runtime);
}

/**
 * @summary Queries the trend of unprotected ports.
 *
 * @param request DescribeUnprotectedPortTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUnprotectedPortTrendResponse
 */
DescribeUnprotectedPortTrendResponse Client::describeUnprotectedPortTrendWithOptions(const DescribeUnprotectedPortTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUnprotectedPortTrend"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUnprotectedPortTrendResponse>();
}

/**
 * @summary Queries the trend of unprotected ports.
 *
 * @param request DescribeUnprotectedPortTrendRequest
 * @return DescribeUnprotectedPortTrendResponse
 */
DescribeUnprotectedPortTrendResponse Client::describeUnprotectedPortTrend(const DescribeUnprotectedPortTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUnprotectedPortTrendWithOptions(request, runtime);
}

/**
 * @summary Queries the trend of unprotected vulnerabilities.
 *
 * @description ## QPS limit
 * The queries per second (QPS) limit for a single user is 10. If you exceed this limit, API calls are throttled, which may impact your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request DescribeUnprotectedVulnTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUnprotectedVulnTrendResponse
 */
DescribeUnprotectedVulnTrendResponse Client::describeUnprotectedVulnTrendWithOptions(const DescribeUnprotectedVulnTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the trend of unprotected vulnerabilities.
 *
 * @description ## QPS limit
 * The queries per second (QPS) limit for a single user is 10. If you exceed this limit, API calls are throttled, which may impact your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request DescribeUnprotectedVulnTrendRequest
 * @return DescribeUnprotectedVulnTrendResponse
 */
DescribeUnprotectedVulnTrendResponse Client::describeUnprotectedVulnTrend(const DescribeUnprotectedVulnTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUnprotectedVulnTrendWithOptions(request, runtime);
}

/**
 * @summary Retrieves the user\\"s alert configuration.
 *
 * @description ## QPS limit
 * The QPS limit for this interface is 10 calls per second per user. Exceeding this limit throttles API calls and may affect your service. Plan your calls accordingly.
 *
 * @param request DescribeUserAlarmConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserAlarmConfigResponse
 */
DescribeUserAlarmConfigResponse Client::describeUserAlarmConfigWithOptions(const DescribeUserAlarmConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Retrieves the user\\"s alert configuration.
 *
 * @description ## QPS limit
 * The QPS limit for this interface is 10 calls per second per user. Exceeding this limit throttles API calls and may affect your service. Plan your calls accordingly.
 *
 * @param request DescribeUserAlarmConfigRequest
 * @return DescribeUserAlarmConfigResponse
 */
DescribeUserAlarmConfigResponse Client::describeUserAlarmConfig(const DescribeUserAlarmConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserAlarmConfigWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeUserAssetIPTrafficInfo is deprecated
 *
 * @summary Queries the traffic information for a specified asset.
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
 * @deprecated OpenAPI DescribeUserAssetIPTrafficInfo is deprecated
 *
 * @summary Queries the traffic information for a specified asset.
 *
 * @param request DescribeUserAssetIPTrafficInfoRequest
 * @return DescribeUserAssetIPTrafficInfoResponse
 */
DescribeUserAssetIPTrafficInfoResponse Client::describeUserAssetIPTrafficInfo(const DescribeUserAssetIPTrafficInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserAssetIPTrafficInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the version information of a user.
 *
 * @description This operation is used to query and retrieve Cloud Firewall instance information for a user.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request DescribeUserBuyVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserBuyVersionResponse
 */
DescribeUserBuyVersionResponse Client::describeUserBuyVersionWithOptions(const DescribeUserBuyVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Retrieves the version information of a user.
 *
 * @description This operation is used to query and retrieve Cloud Firewall instance information for a user.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request DescribeUserBuyVersionRequest
 * @return DescribeUserBuyVersionResponse
 */
DescribeUserBuyVersionResponse Client::describeUserBuyVersion(const DescribeUserBuyVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserBuyVersionWithOptions(request, runtime);
}

/**
 * @summary Queries the intrusion prevention system (IPS) whitelist for the Internet Border.
 *
 * @description ## QPS limits
 * The queries per second (QPS) limit for this API is 10 calls per second for each user. If you exceed this limit, API calls are throttled, which can impact your business. We recommend that you call this API at a reasonable rate.
 *
 * @param request DescribeUserIPSWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserIPSWhitelistResponse
 */
DescribeUserIPSWhitelistResponse Client::describeUserIPSWhitelistWithOptions(const DescribeUserIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Queries the intrusion prevention system (IPS) whitelist for the Internet Border.
 *
 * @description ## QPS limits
 * The queries per second (QPS) limit for this API is 10 calls per second for each user. If you exceed this limit, API calls are throttled, which can impact your business. We recommend that you call this API at a reasonable rate.
 *
 * @param request DescribeUserIPSWhitelistRequest
 * @return DescribeUserIPSWhitelistResponse
 */
DescribeUserIPSWhitelistResponse Client::describeUserIPSWhitelist(const DescribeUserIPSWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserIPSWhitelistWithOptions(request, runtime);
}

/**
 * @summary Queries the IPS configuration list of a virtual private cloud (VPC) firewall.
 *
 * @param request DescribeVfwIPSConfigListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVfwIPSConfigListResponse
 */
DescribeVfwIPSConfigListResponse Client::describeVfwIPSConfigListWithOptions(const DescribeVfwIPSConfigListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVfwIPSConfigList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVfwIPSConfigListResponse>();
}

/**
 * @summary Queries the IPS configuration list of a virtual private cloud (VPC) firewall.
 *
 * @param request DescribeVfwIPSConfigListRequest
 * @return DescribeVfwIPSConfigListResponse
 */
DescribeVfwIPSConfigListResponse Client::describeVfwIPSConfigList(const DescribeVfwIPSConfigListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVfwIPSConfigListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the access details of a VPC firewall.
 *
 * @description ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request DescribeVpcFirewallAccessDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallAccessDetailResponse
 */
DescribeVpcFirewallAccessDetailResponse Client::describeVpcFirewallAccessDetailWithOptions(const DescribeVpcFirewallAccessDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetIP()) {
    query["AssetIP"] = request.getAssetIP();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIPProtocol()) {
    query["IPProtocol"] = request.getIPProtocol();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPeerAssetIP()) {
    query["PeerAssetIP"] = request.getPeerAssetIP();
  }

  if (!!request.hasPeerAssetInstanceId()) {
    query["PeerAssetInstanceId"] = request.getPeerAssetInstanceId();
  }

  if (!!request.hasPeerAssetInstanceName()) {
    query["PeerAssetInstanceName"] = request.getPeerAssetInstanceName();
  }

  if (!!request.hasPeerVpcId()) {
    query["PeerVpcId"] = request.getPeerVpcId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
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
 * @summary Retrieves the access details of a VPC firewall.
 *
 * @description ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request DescribeVpcFirewallAccessDetailRequest
 * @return DescribeVpcFirewallAccessDetailResponse
 */
DescribeVpcFirewallAccessDetailResponse Client::describeVpcFirewallAccessDetail(const DescribeVpcFirewallAccessDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallAccessDetailWithOptions(request, runtime);
}

/**
 * @summary Queries all access control policy groups of a VPC firewall.
 *
 * @description This operation is used to query all access control policy groups of a VPC firewall.
 * ## QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DescribeVpcFirewallAclGroupListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallAclGroupListResponse
 */
DescribeVpcFirewallAclGroupListResponse Client::describeVpcFirewallAclGroupListWithOptions(const DescribeVpcFirewallAclGroupListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFirewallConfigureStatus()) {
    query["FirewallConfigureStatus"] = request.getFirewallConfigureStatus();
  }

  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.getFirewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Queries all access control policy groups of a VPC firewall.
 *
 * @description This operation is used to query all access control policy groups of a VPC firewall.
 * ## QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DescribeVpcFirewallAclGroupListRequest
 * @return DescribeVpcFirewallAclGroupListResponse
 */
DescribeVpcFirewallAclGroupListResponse Client::describeVpcFirewallAclGroupList(const DescribeVpcFirewallAclGroupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallAclGroupListWithOptions(request, runtime);
}

/**
 * @summary Queries the asset list of a VPC firewall.
 *
 * @param request DescribeVpcFirewallAssetListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallAssetListResponse
 */
DescribeVpcFirewallAssetListResponse Client::describeVpcFirewallAssetListWithOptions(const DescribeVpcFirewallAssetListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAssetIP()) {
    query["AssetIP"] = request.getAssetIP();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEcsInstanceId()) {
    query["EcsInstanceId"] = request.getEcsInstanceId();
  }

  if (!!request.hasEcsInstanceName()) {
    query["EcsInstanceName"] = request.getEcsInstanceName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIPProtocol()) {
    query["IPProtocol"] = request.getIPProtocol();
  }

  if (!!request.hasIsAITraffic()) {
    query["IsAITraffic"] = request.getIsAITraffic();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPeerVpcId()) {
    query["PeerVpcId"] = request.getPeerVpcId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.getPort();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallAssetList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallAssetListResponse>();
}

/**
 * @summary Queries the asset list of a VPC firewall.
 *
 * @param request DescribeVpcFirewallAssetListRequest
 * @return DescribeVpcFirewallAssetListResponse
 */
DescribeVpcFirewallAssetListResponse Client::describeVpcFirewallAssetList(const DescribeVpcFirewallAssetListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallAssetListWithOptions(request, runtime);
}

/**
 * @summary Queries the regions where VPC firewall assets are enabled.
 *
 * @param request DescribeVpcFirewallAssetRegionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallAssetRegionListResponse
 */
DescribeVpcFirewallAssetRegionListResponse Client::describeVpcFirewallAssetRegionListWithOptions(const DescribeVpcFirewallAssetRegionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallAssetRegionList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallAssetRegionListResponse>();
}

/**
 * @summary Queries the regions where VPC firewall assets are enabled.
 *
 * @param request DescribeVpcFirewallAssetRegionListRequest
 * @return DescribeVpcFirewallAssetRegionListResponse
 */
DescribeVpcFirewallAssetRegionListResponse Client::describeVpcFirewallAssetRegionList(const DescribeVpcFirewallAssetRegionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallAssetRegionListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a virtual private cloud (VPC) firewall that controls mutual access traffic between a network instance in a Cloud Enterprise Network (CEN) instance and a specified VPC.
 *
 * @description This operation is used to query the details of a virtual private cloud (VPC) firewall. The VPC firewall controls mutual access traffic between network instances (including VPCs, virtual border routers (VBRs), and Cloud Connect Network (CCN) instances) in a CEN instance and a specified VPC.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the number of calls per second exceeds the limit, throttling is triggered. Throttling may affect your business. Invoke this operation within the limit.
 *
 * @param request DescribeVpcFirewallCenDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallCenDetailResponse
 */
DescribeVpcFirewallCenDetailResponse Client::describeVpcFirewallCenDetailWithOptions(const DescribeVpcFirewallCenDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNetworkInstanceId()) {
    query["NetworkInstanceId"] = request.getNetworkInstanceId();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
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
 * @summary Queries the details of a virtual private cloud (VPC) firewall that controls mutual access traffic between a network instance in a Cloud Enterprise Network (CEN) instance and a specified VPC.
 *
 * @description This operation is used to query the details of a virtual private cloud (VPC) firewall. The VPC firewall controls mutual access traffic between network instances (including VPCs, virtual border routers (VBRs), and Cloud Connect Network (CCN) instances) in a CEN instance and a specified VPC.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the number of calls per second exceeds the limit, throttling is triggered. Throttling may affect your business. Invoke this operation within the limit.
 *
 * @param request DescribeVpcFirewallCenDetailRequest
 * @return DescribeVpcFirewallCenDetailResponse
 */
DescribeVpcFirewallCenDetailResponse Client::describeVpcFirewallCenDetail(const DescribeVpcFirewallCenDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallCenDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of VPC firewalls that protect traffic between a specified VPC and network instances in a Cloud Enterprise Network (CEN) instance.
 *
 * @description This operation queries the details of a VPC firewall. The firewall protects traffic between a specified VPC and a network instance that is attached to a Cloud Enterprise Network (CEN) instance. The network instance can be a VPC, a Virtual Border Router (VBR), or a Cloud Connect Network (CCN) instance.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. We recommend that you plan your calls accordingly.
 *
 * @param request DescribeVpcFirewallCenListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallCenListResponse
 */
DescribeVpcFirewallCenListResponse Client::describeVpcFirewallCenListWithOptions(const DescribeVpcFirewallCenListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFirewallSwitchStatus()) {
    query["FirewallSwitchStatus"] = request.getFirewallSwitchStatus();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasNetworkInstanceId()) {
    query["NetworkInstanceId"] = request.getNetworkInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasRouteMode()) {
    query["RouteMode"] = request.getRouteMode();
  }

  if (!!request.hasTransitRouterType()) {
    query["TransitRouterType"] = request.getTransitRouterType();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
  }

  if (!!request.hasVpcFirewallName()) {
    query["VpcFirewallName"] = request.getVpcFirewallName();
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
 * @summary Retrieves the details of VPC firewalls that protect traffic between a specified VPC and network instances in a Cloud Enterprise Network (CEN) instance.
 *
 * @description This operation queries the details of a VPC firewall. The firewall protects traffic between a specified VPC and a network instance that is attached to a Cloud Enterprise Network (CEN) instance. The network instance can be a VPC, a Virtual Border Router (VBR), or a Cloud Connect Network (CCN) instance.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. We recommend that you plan your calls accordingly.
 *
 * @param request DescribeVpcFirewallCenListRequest
 * @return DescribeVpcFirewallCenListResponse
 */
DescribeVpcFirewallCenListResponse Client::describeVpcFirewallCenList(const DescribeVpcFirewallCenListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallCenListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of Cloud Enterprise Network (CEN) instances for a VPC.
 *
 * @description ## QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
 *
 * @param request DescribeVpcFirewallCenSummaryListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallCenSummaryListResponse
 */
DescribeVpcFirewallCenSummaryListResponse Client::describeVpcFirewallCenSummaryListWithOptions(const DescribeVpcFirewallCenSummaryListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTransitRouterType()) {
    query["TransitRouterType"] = request.getTransitRouterType();
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
 * @summary Retrieves the list of Cloud Enterprise Network (CEN) instances for a VPC.
 *
 * @description ## QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
 *
 * @param request DescribeVpcFirewallCenSummaryListRequest
 * @return DescribeVpcFirewallCenSummaryListResponse
 */
DescribeVpcFirewallCenSummaryListResponse Client::describeVpcFirewallCenSummaryList(const DescribeVpcFirewallCenSummaryListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallCenSummaryListWithOptions(request, runtime);
}

/**
 * @summary Queries all access control policies of the specified virtual private cloud (VPC) firewalls.
 *
 * @description This operation is typically used to query the access control policies of virtual private cloud (VPC) firewalls. Virtual private cloud (VPC) firewalls use different access control policies when protecting traffic between two VPCs connected by Cloud Enterprise Network (CEN) and traffic between two VPCs connected by Express Connect.
 * ## QPS limits
 * The queries per second (QPS) limit per user for this operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
 *
 * @param request DescribeVpcFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallControlPolicyResponse
 */
DescribeVpcFirewallControlPolicyResponse Client::describeVpcFirewallControlPolicyWithOptions(const DescribeVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.getAclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.getDestination();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.getProto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.getRelease();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.getRepeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
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
 * @summary Queries all access control policies of the specified virtual private cloud (VPC) firewalls.
 *
 * @description This operation is typically used to query the access control policies of virtual private cloud (VPC) firewalls. Virtual private cloud (VPC) firewalls use different access control policies when protecting traffic between two VPCs connected by Cloud Enterprise Network (CEN) and traffic between two VPCs connected by Express Connect.
 * ## QPS limits
 * The queries per second (QPS) limit per user for this operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
 *
 * @param request DescribeVpcFirewallControlPolicyRequest
 * @return DescribeVpcFirewallControlPolicyResponse
 */
DescribeVpcFirewallControlPolicyResponse Client::describeVpcFirewallControlPolicy(const DescribeVpcFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the intrusion prevention configuration of a specified VPC firewall.
 *
 * @description This operation queries the intrusion prevention configuration of a specified VPC firewall. Before you call this operation, you must create a VPC firewall instance.
 * ## QPS limit
 * This API operation has a limit of 10 queries per second (QPS) per user. If you exceed this limit, your calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request DescribeVpcFirewallDefaultIPSConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallDefaultIPSConfigResponse
 */
DescribeVpcFirewallDefaultIPSConfigResponse Client::describeVpcFirewallDefaultIPSConfigWithOptions(const DescribeVpcFirewallDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
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
 * @summary Queries the intrusion prevention configuration of a specified VPC firewall.
 *
 * @description This operation queries the intrusion prevention configuration of a specified VPC firewall. Before you call this operation, you must create a VPC firewall instance.
 * ## QPS limit
 * This API operation has a limit of 10 queries per second (QPS) per user. If you exceed this limit, your calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request DescribeVpcFirewallDefaultIPSConfigRequest
 * @return DescribeVpcFirewallDefaultIPSConfigResponse
 */
DescribeVpcFirewallDefaultIPSConfigResponse Client::describeVpcFirewallDefaultIPSConfig(const DescribeVpcFirewallDefaultIPSConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallDefaultIPSConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a VPC firewall that protects traffic between two VPCs connected by an Express Connect circuit.
 *
 * @description This operation queries the details of a VPC firewall. The VPC firewall protects traffic between two VPCs that are connected by an Express Connect circuit. Before you call this operation, you must create a VPC firewall by calling the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation.
 * ## QPS limit
 * This operation has a queries per second (QPS) limit of 10 calls per second for each user. If you exceed this limit, your API calls are throttled. This can affect your business. Plan your calls accordingly.
 *
 * @param request DescribeVpcFirewallDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallDetailResponse
 */
DescribeVpcFirewallDetailResponse Client::describeVpcFirewallDetailWithOptions(const DescribeVpcFirewallDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLocalVpcId()) {
    query["LocalVpcId"] = request.getLocalVpcId();
  }

  if (!!request.hasPeerVpcId()) {
    query["PeerVpcId"] = request.getPeerVpcId();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
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
 * @summary Retrieves the details of a VPC firewall that protects traffic between two VPCs connected by an Express Connect circuit.
 *
 * @description This operation queries the details of a VPC firewall. The VPC firewall protects traffic between two VPCs that are connected by an Express Connect circuit. Before you call this operation, you must create a VPC firewall by calling the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation.
 * ## QPS limit
 * This operation has a queries per second (QPS) limit of 10 calls per second for each user. If you exceed this limit, your API calls are throttled. This can affect your business. Plan your calls accordingly.
 *
 * @param request DescribeVpcFirewallDetailRequest
 * @return DescribeVpcFirewallDetailResponse
 */
DescribeVpcFirewallDetailResponse Client::describeVpcFirewallDetail(const DescribeVpcFirewallDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallDetailWithOptions(request, runtime);
}

/**
 * @summary Queries a list of domain names accessed through a VPC firewall.
 *
 * @description ###
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled. Throttling can affect your business. Call this operation at a reasonable rate.
 *
 * @param request DescribeVpcFirewallDomainListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallDomainListResponse
 */
DescribeVpcFirewallDomainListResponse Client::describeVpcFirewallDomainListWithOptions(const DescribeVpcFirewallDomainListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIsAITraffic()) {
    query["IsAITraffic"] = request.getIsAITraffic();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasSrcIP()) {
    query["SrcIP"] = request.getSrcIP();
  }

  if (!!request.hasSrcVpcId()) {
    query["SrcVpcId"] = request.getSrcVpcId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallDomainList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallDomainListResponse>();
}

/**
 * @summary Queries a list of domain names accessed through a VPC firewall.
 *
 * @description ###
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled. Throttling can affect your business. Call this operation at a reasonable rate.
 *
 * @param request DescribeVpcFirewallDomainListRequest
 * @return DescribeVpcFirewallDomainListResponse
 */
DescribeVpcFirewallDomainListResponse Client::describeVpcFirewallDomainList(const DescribeVpcFirewallDomainListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallDomainListWithOptions(request, runtime);
}

/**
 * @summary Queries connections to a specified domain name through VPC Firewall.
 *
 * @param request DescribeVpcFirewallDomainRelationListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallDomainRelationListResponse
 */
DescribeVpcFirewallDomainRelationListResponse Client::describeVpcFirewallDomainRelationListWithOptions(const DescribeVpcFirewallDomainRelationListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDomainList()) {
    query["DomainList"] = request.getDomainList();
  }

  if (!!request.hasDstIP()) {
    query["DstIP"] = request.getDstIP();
  }

  if (!!request.hasDstVpcId()) {
    query["DstVpcId"] = request.getDstVpcId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasSrcIP()) {
    query["SrcIP"] = request.getSrcIP();
  }

  if (!!request.hasSrcVpcId()) {
    query["SrcVpcId"] = request.getSrcVpcId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallDomainRelationList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallDomainRelationListResponse>();
}

/**
 * @summary Queries connections to a specified domain name through VPC Firewall.
 *
 * @param request DescribeVpcFirewallDomainRelationListRequest
 * @return DescribeVpcFirewallDomainRelationListResponse
 */
DescribeVpcFirewallDomainRelationListResponse Client::describeVpcFirewallDomainRelationList(const DescribeVpcFirewallDomainRelationListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallDomainRelationListWithOptions(request, runtime);
}

/**
 * @summary Queries the blocking trends of the VPC firewall.
 *
 * @param request DescribeVpcFirewallDropTrafficTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallDropTrafficTrendResponse
 */
DescribeVpcFirewallDropTrafficTrendResponse Client::describeVpcFirewallDropTrafficTrendWithOptions(const DescribeVpcFirewallDropTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallDropTrafficTrend"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallDropTrafficTrendResponse>();
}

/**
 * @summary Queries the blocking trends of the VPC firewall.
 *
 * @param request DescribeVpcFirewallDropTrafficTrendRequest
 * @return DescribeVpcFirewallDropTrafficTrendResponse
 */
DescribeVpcFirewallDropTrafficTrendResponse Client::describeVpcFirewallDropTrafficTrend(const DescribeVpcFirewallDropTrafficTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallDropTrafficTrendWithOptions(request, runtime);
}

/**
 * @summary Retrieves the IPS whitelist of a VPC firewall.
 *
 * @param request DescribeVpcFirewallIPSWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallIPSWhitelistResponse
 */
DescribeVpcFirewallIPSWhitelistResponse Client::describeVpcFirewallIPSWhitelistWithOptions(const DescribeVpcFirewallIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
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
 * @summary Retrieves the IPS whitelist of a VPC firewall.
 *
 * @param request DescribeVpcFirewallIPSWhitelistRequest
 * @return DescribeVpcFirewallIPSWhitelistResponse
 */
DescribeVpcFirewallIPSWhitelistResponse Client::describeVpcFirewallIPSWhitelist(const DescribeVpcFirewallIPSWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallIPSWhitelistWithOptions(request, runtime);
}

/**
 * @summary Queries the information about virtual private cloud (VPC) border firewalls that protect traffic between two VPCs connected by Express Connect.
 *
 * @description This operation is generally used to perform a paging query on the information about virtual private cloud (VPC) border firewalls. The virtual private cloud (VPC) border firewalls protect traffic between two VPCs connected by Express Connect.
 * ### QPS limits
 * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API invocations are throttled, which may affect your services. Invoke the API operation at a reasonable frequency.
 *
 * @param request DescribeVpcFirewallListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallListResponse
 */
DescribeVpcFirewallListResponse Client::describeVpcFirewallListWithOptions(const DescribeVpcFirewallListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectSubType()) {
    query["ConnectSubType"] = request.getConnectSubType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFirewallSwitchStatus()) {
    query["FirewallSwitchStatus"] = request.getFirewallSwitchStatus();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPeerUid()) {
    query["PeerUid"] = request.getPeerUid();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
  }

  if (!!request.hasVpcFirewallName()) {
    query["VpcFirewallName"] = request.getVpcFirewallName();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
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
 * @summary Queries the information about virtual private cloud (VPC) border firewalls that protect traffic between two VPCs connected by Express Connect.
 *
 * @description This operation is generally used to perform a paging query on the information about virtual private cloud (VPC) border firewalls. The virtual private cloud (VPC) border firewalls protect traffic between two VPCs connected by Express Connect.
 * ### QPS limits
 * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API invocations are throttled, which may affect your services. Invoke the API operation at a reasonable frequency.
 *
 * @param request DescribeVpcFirewallListRequest
 * @return DescribeVpcFirewallListResponse
 */
DescribeVpcFirewallListResponse Client::describeVpcFirewallList(const DescribeVpcFirewallListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallListWithOptions(request, runtime);
}

/**
 * @summary Queries the vSwitch list in manual mode for a VPC firewall.
 *
 * @description Queries the vSwitch list in manual mode for a firewall. **Required parameters**: If OwnerId (owner user ID, Long type) is empty, ErrorOwnerId is returned. If regionNo (region) is empty, ErrorRegionNoError is returned. If vpcId is empty, ErrorVpcIdError is returned. **Before you begin**: Call [DescribeVpcFirewallList](~~DescribeVpcFirewallList~~) to obtain VpcFirewallId, OwnerId (from LocalVpc.OwnerId or PeerVpc.OwnerId in the response), and VpcId (from LocalVpc.VpcId or PeerVpc.VpcId in the response).
 *
 * @param request DescribeVpcFirewallManualVSwitchListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallManualVSwitchListResponse
 */
DescribeVpcFirewallManualVSwitchListResponse Client::describeVpcFirewallManualVSwitchListWithOptions(const DescribeVpcFirewallManualVSwitchListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallManualVSwitchList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallManualVSwitchListResponse>();
}

/**
 * @summary Queries the vSwitch list in manual mode for a VPC firewall.
 *
 * @description Queries the vSwitch list in manual mode for a firewall. **Required parameters**: If OwnerId (owner user ID, Long type) is empty, ErrorOwnerId is returned. If regionNo (region) is empty, ErrorRegionNoError is returned. If vpcId is empty, ErrorVpcIdError is returned. **Before you begin**: Call [DescribeVpcFirewallList](~~DescribeVpcFirewallList~~) to obtain VpcFirewallId, OwnerId (from LocalVpc.OwnerId or PeerVpc.OwnerId in the response), and VpcId (from LocalVpc.VpcId or PeerVpc.VpcId in the response).
 *
 * @param request DescribeVpcFirewallManualVSwitchListRequest
 * @return DescribeVpcFirewallManualVSwitchListResponse
 */
DescribeVpcFirewallManualVSwitchListResponse Client::describeVpcFirewallManualVSwitchList(const DescribeVpcFirewallManualVSwitchListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallManualVSwitchListWithOptions(request, runtime);
}

/**
 * @summary Queries the effective policy priority range of the access control policy in a specified VPC firewall policy group.
 *
 * @description This operation is typically used to query the effective policy priority range of the access control policy in a specified VPC firewall policy group.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DescribeVpcFirewallPolicyPriorUsedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallPolicyPriorUsedResponse
 */
DescribeVpcFirewallPolicyPriorUsedResponse Client::describeVpcFirewallPolicyPriorUsedWithOptions(const DescribeVpcFirewallPolicyPriorUsedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
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
 * @summary Queries the effective policy priority range of the access control policy in a specified VPC firewall policy group.
 *
 * @description This operation is typically used to query the effective policy priority range of the access control policy in a specified VPC firewall policy group.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DescribeVpcFirewallPolicyPriorUsedRequest
 * @return DescribeVpcFirewallPolicyPriorUsedResponse
 */
DescribeVpcFirewallPolicyPriorUsedResponse Client::describeVpcFirewallPolicyPriorUsed(const DescribeVpcFirewallPolicyPriorUsedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallPolicyPriorUsedWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a VPC firewall precheck.
 *
 * @description ## Rate limits
 * The rate limit for this API operation is 10 queries per second (QPS) per user. If you exceed the limit, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request DescribeVpcFirewallPrecheckDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallPrecheckDetailResponse
 */
DescribeVpcFirewallPrecheckDetailResponse Client::describeVpcFirewallPrecheckDetailWithOptions(const DescribeVpcFirewallPrecheckDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasNetworkInstanceType()) {
    query["NetworkInstanceType"] = request.getNetworkInstanceType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallPrecheckDetail"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallPrecheckDetailResponse>();
}

/**
 * @summary Retrieves the details of a VPC firewall precheck.
 *
 * @description ## Rate limits
 * The rate limit for this API operation is 10 queries per second (QPS) per user. If you exceed the limit, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request DescribeVpcFirewallPrecheckDetailRequest
 * @return DescribeVpcFirewallPrecheckDetailResponse
 */
DescribeVpcFirewallPrecheckDetailResponse Client::describeVpcFirewallPrecheckDetail(const DescribeVpcFirewallPrecheckDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallPrecheckDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves the summary information of VPC firewalls.
 *
 * @description ### QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request DescribeVpcFirewallSummaryInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallSummaryInfoResponse
 */
DescribeVpcFirewallSummaryInfoResponse Client::describeVpcFirewallSummaryInfoWithOptions(const DescribeVpcFirewallSummaryInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
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
 * @summary Retrieves the summary information of VPC firewalls.
 *
 * @description ### QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request DescribeVpcFirewallSummaryInfoRequest
 * @return DescribeVpcFirewallSummaryInfoResponse
 */
DescribeVpcFirewallSummaryInfoResponse Client::describeVpcFirewallSummaryInfo(const DescribeVpcFirewallSummaryInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallSummaryInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the list of assets that access domain names through VPC firewalls.
 *
 * @description Queries the information about assets involved in VPC mutual access. When you call this operation, you must set IsAITraffic to "true". Otherwise, the -340103 error is returned.
 *
 * @param request DescribeVpcFirewallTrafficAssetListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallTrafficAssetListResponse
 */
DescribeVpcFirewallTrafficAssetListResponse Client::describeVpcFirewallTrafficAssetListWithOptions(const DescribeVpcFirewallTrafficAssetListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIP()) {
    query["IP"] = request.getIP();
  }

  if (!!request.hasIsAITraffic()) {
    query["IsAITraffic"] = request.getIsAITraffic();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallTrafficAssetList"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallTrafficAssetListResponse>();
}

/**
 * @summary Queries the list of assets that access domain names through VPC firewalls.
 *
 * @description Queries the information about assets involved in VPC mutual access. When you call this operation, you must set IsAITraffic to "true". Otherwise, the -340103 error is returned.
 *
 * @param request DescribeVpcFirewallTrafficAssetListRequest
 * @return DescribeVpcFirewallTrafficAssetListResponse
 */
DescribeVpcFirewallTrafficAssetListResponse Client::describeVpcFirewallTrafficAssetList(const DescribeVpcFirewallTrafficAssetListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallTrafficAssetListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the traffic trends of a VPC firewall.
 *
 * @param request DescribeVpcFirewallTrafficTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallTrafficTrendResponse
 */
DescribeVpcFirewallTrafficTrendResponse Client::describeVpcFirewallTrafficTrendWithOptions(const DescribeVpcFirewallTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPeerVpcId()) {
    query["PeerVpcId"] = request.getPeerVpcId();
  }

  if (!!request.hasPrivateIP()) {
    query["PrivateIP"] = request.getPrivateIP();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallTrafficTrend"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallTrafficTrendResponse>();
}

/**
 * @summary Retrieves the traffic trends of a VPC firewall.
 *
 * @param request DescribeVpcFirewallTrafficTrendRequest
 * @return DescribeVpcFirewallTrafficTrendResponse
 */
DescribeVpcFirewallTrafficTrendResponse Client::describeVpcFirewallTrafficTrend(const DescribeVpcFirewallTrafficTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallTrafficTrendWithOptions(request, runtime);
}

/**
 * @summary Queries the list of zones available for VPC firewalls.
 *
 * @param request DescribeVpcFirewallZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcFirewallZoneResponse
 */
DescribeVpcFirewallZoneResponse Client::describeVpcFirewallZoneWithOptions(const DescribeVpcFirewallZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasTransitRouterId()) {
    query["TransitRouterId"] = request.getTransitRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVpcFirewallZone"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVpcFirewallZoneResponse>();
}

/**
 * @summary Queries the list of zones available for VPC firewalls.
 *
 * @param request DescribeVpcFirewallZoneRequest
 * @return DescribeVpcFirewallZoneResponse
 */
DescribeVpcFirewallZoneResponse Client::describeVpcFirewallZone(const DescribeVpcFirewallZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcFirewallZoneWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of VPCs.
 *
 * @param request DescribeVpcListLiteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcListLiteResponse
 */
DescribeVpcListLiteResponse Client::describeVpcListLiteWithOptions(const DescribeVpcListLiteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVpcName()) {
    query["VpcName"] = request.getVpcName();
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
 * @summary Retrieves a list of VPCs.
 *
 * @param request DescribeVpcListLiteRequest
 * @return DescribeVpcListLiteResponse
 */
DescribeVpcListLiteResponse Client::describeVpcListLite(const DescribeVpcListLiteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcListLiteWithOptions(request, runtime);
}

/**
 * @summary Queries the zones that are available for VPCs.
 *
 * @param request DescribeVpcZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVpcZoneResponse
 */
DescribeVpcZoneResponse Client::describeVpcZoneWithOptions(const DescribeVpcZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
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
 * @summary Queries the zones that are available for VPCs.
 *
 * @param request DescribeVpcZoneRequest
 * @return DescribeVpcZoneResponse
 */
DescribeVpcZoneResponse Client::describeVpcZone(const DescribeVpcZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVpcZoneWithOptions(request, runtime);
}

/**
 * @summary Queries a list of vulnerabilities that Cloud Firewall can protect against.
 *
 * @param request DescribeVulnerabilityProtectedListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVulnerabilityProtectedListResponse
 */
DescribeVulnerabilityProtectedListResponse Client::describeVulnerabilityProtectedListWithOptions(const DescribeVulnerabilityProtectedListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttackType()) {
    query["AttackType"] = request.getAttackType();
  }

  if (!!request.hasBuyVersion()) {
    query["BuyVersion"] = request.getBuyVersion();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRuleTag()) {
    query["RuleTag"] = request.getRuleTag();
  }

  if (!!request.hasSortKey()) {
    query["SortKey"] = request.getSortKey();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  if (!!request.hasVulnCveName()) {
    query["VulnCveName"] = request.getVulnCveName();
  }

  if (!!request.hasVulnLevel()) {
    query["VulnLevel"] = request.getVulnLevel();
  }

  if (!!request.hasVulnResource()) {
    query["VulnResource"] = request.getVulnResource();
  }

  if (!!request.hasVulnStatus()) {
    query["VulnStatus"] = request.getVulnStatus();
  }

  if (!!request.hasVulnType()) {
    query["VulnType"] = request.getVulnType();
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
 * @summary Queries a list of vulnerabilities that Cloud Firewall can protect against.
 *
 * @param request DescribeVulnerabilityProtectedListRequest
 * @return DescribeVulnerabilityProtectedListResponse
 */
DescribeVulnerabilityProtectedListResponse Client::describeVulnerabilityProtectedList(const DescribeVulnerabilityProtectedListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVulnerabilityProtectedListWithOptions(request, runtime);
}

/**
 * @summary Disables sensitive data discovery protection for assets.
 *
 * @param request DisableSdlProtectedAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSdlProtectedAssetResponse
 */
DisableSdlProtectedAssetResponse Client::disableSdlProtectedAssetWithOptions(const DisableSdlProtectedAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpList()) {
    query["IpList"] = request.getIpList();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableSdlProtectedAsset"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableSdlProtectedAssetResponse>();
}

/**
 * @summary Disables sensitive data discovery protection for assets.
 *
 * @param request DisableSdlProtectedAssetRequest
 * @return DisableSdlProtectedAssetResponse
 */
DisableSdlProtectedAssetResponse Client::disableSdlProtectedAsset(const DisableSdlProtectedAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSdlProtectedAssetWithOptions(request, runtime);
}

/**
 * @summary Enables Sensitive Data Leak (SDL) protection for assets. Before calling this operation, ensure that the SDL feature is activated. You can query DescribeUserBuyVersion.Sdl to check the status. A value of 1 indicates that the feature is activated.
 *
 * @description Enables data leak detection (SDL) protection for the specified assets.
 *
 * @param request EnableSdlProtectedAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSdlProtectedAssetResponse
 */
EnableSdlProtectedAssetResponse Client::enableSdlProtectedAssetWithOptions(const EnableSdlProtectedAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpList()) {
    query["IpList"] = request.getIpList();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Enables Sensitive Data Leak (SDL) protection for assets. Before calling this operation, ensure that the SDL feature is activated. You can query DescribeUserBuyVersion.Sdl to check the status. A value of 1 indicates that the feature is activated.
 *
 * @description Enables data leak detection (SDL) protection for the specified assets.
 *
 * @param request EnableSdlProtectedAssetRequest
 * @return EnableSdlProtectedAssetResponse
 */
EnableSdlProtectedAssetResponse Client::enableSdlProtectedAsset(const EnableSdlProtectedAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSdlProtectedAssetWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified application template, including the status of each switch, the action for unidentified applications, and the list of built-in application actions.
 *
 * @param request GetApplicationTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationTemplateResponse
 */
GetApplicationTemplateResponse Client::getApplicationTemplateWithOptions(const GetApplicationTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationTemplateId()) {
    query["ApplicationTemplateId"] = request.getApplicationTemplateId();
  }

  if (!!request.hasBuiltInApplicationActionType()) {
    query["BuiltInApplicationActionType"] = request.getBuiltInApplicationActionType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationTemplate"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationTemplateResponse>();
}

/**
 * @summary Queries the details of a specified application template, including the status of each switch, the action for unidentified applications, and the list of built-in application actions.
 *
 * @param request GetApplicationTemplateRequest
 * @return GetApplicationTemplateResponse
 */
GetApplicationTemplateResponse Client::getApplicationTemplate(const GetApplicationTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the activation status of the application control and web filtering features for the current Alibaba Cloud account. This operation does not require request parameters and always returns the status of these two features.
 *
 * @param request GetFirewallFeatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFirewallFeatureResponse
 */
GetFirewallFeatureResponse Client::getFirewallFeatureWithOptions(const GetFirewallFeatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetFirewallFeature"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFirewallFeatureResponse>();
}

/**
 * @summary Queries the activation status of the application control and web filtering features for the current Alibaba Cloud account. This operation does not require request parameters and always returns the status of these two features.
 *
 * @param request GetFirewallFeatureRequest
 * @return GetFirewallFeatureResponse
 */
GetFirewallFeatureResponse Client::getFirewallFeature(const GetFirewallFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFirewallFeatureWithOptions(request, runtime);
}

/**
 * @summary Retrieves the download path for the certificate of a Transport Layer Security (TLS) inspection policy.
 *
 * @description This operation returns a temporary download link for the Certificate Authority (CA) certificate. The link is valid for one minute. After the link expires, call this operation again to obtain a new download link.
 *
 * @param request GetTlsInspectCertificateDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTlsInspectCertificateDownloadUrlResponse
 */
GetTlsInspectCertificateDownloadUrlResponse Client::getTlsInspectCertificateDownloadUrlWithOptions(const GetTlsInspectCertificateDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaCertId()) {
    query["CaCertId"] = request.getCaCertId();
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
 * @summary Retrieves the download path for the certificate of a Transport Layer Security (TLS) inspection policy.
 *
 * @description This operation returns a temporary download link for the Certificate Authority (CA) certificate. The link is valid for one minute. After the link expires, call this operation again to obtain a new download link.
 *
 * @param request GetTlsInspectCertificateDownloadUrlRequest
 * @return GetTlsInspectCertificateDownloadUrlResponse
 */
GetTlsInspectCertificateDownloadUrlResponse Client::getTlsInspectCertificateDownloadUrl(const GetTlsInspectCertificateDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTlsInspectCertificateDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary 查询应用程序自定义规则列表
 *
 * @param request ListApplicationCustomRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationCustomRulesResponse
 */
ListApplicationCustomRulesResponse Client::listApplicationCustomRulesWithOptions(const ListApplicationCustomRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationCustomRuleId()) {
    query["ApplicationCustomRuleId"] = request.getApplicationCustomRuleId();
  }

  if (!!request.hasApplicationCustomRuleName()) {
    query["ApplicationCustomRuleName"] = request.getApplicationCustomRuleName();
  }

  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationTemplateId()) {
    query["ApplicationTemplateId"] = request.getApplicationTemplateId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRuleAction()) {
    query["RuleAction"] = request.getRuleAction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationCustomRules"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationCustomRulesResponse>();
}

/**
 * @summary 查询应用程序自定义规则列表
 *
 * @param request ListApplicationCustomRulesRequest
 * @return ListApplicationCustomRulesResponse
 */
ListApplicationCustomRulesResponse Client::listApplicationCustomRules(const ListApplicationCustomRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationCustomRulesWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query to retrieve the application program templates under the current Alibaba Cloud account. The paging operation supports fuzzy search by template name and description, batch exact filtering by template IDs, and exact filtering by switch statuses and actions for unidentified applications.
 *
 * @param request ListApplicationTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationTemplateResponse
 */
ListApplicationTemplateResponse Client::listApplicationTemplateWithOptions(const ListApplicationTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationTemplateIds()) {
    query["ApplicationTemplateIds"] = request.getApplicationTemplateIds();
  }

  if (!!request.hasApplicationTemplateName()) {
    query["ApplicationTemplateName"] = request.getApplicationTemplateName();
  }

  if (!!request.hasBuiltInApplicationStatus()) {
    query["BuiltInApplicationStatus"] = request.getBuiltInApplicationStatus();
  }

  if (!!request.hasCustomRuleStatus()) {
    query["CustomRuleStatus"] = request.getCustomRuleStatus();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTemplateStatus()) {
    query["TemplateStatus"] = request.getTemplateStatus();
  }

  if (!!request.hasUnknownAction()) {
    query["UnknownAction"] = request.getUnknownAction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationTemplate"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationTemplateResponse>();
}

/**
 * @summary Performs a paged query to retrieve the application program templates under the current Alibaba Cloud account. The paging operation supports fuzzy search by template name and description, batch exact filtering by template IDs, and exact filtering by switch statuses and actions for unidentified applications.
 *
 * @param request ListApplicationTemplateRequest
 * @return ListApplicationTemplateResponse
 */
ListApplicationTemplateResponse Client::listApplicationTemplate(const ListApplicationTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationTemplateWithOptions(request, runtime);
}

/**
 * @summary 查询应用程序更新动态列表
 *
 * @param request ListApplicationUpdateDynamicsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationUpdateDynamicsResponse
 */
ListApplicationUpdateDynamicsResponse Client::listApplicationUpdateDynamicsWithOptions(const ListApplicationUpdateDynamicsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
    {"action" , "ListApplicationUpdateDynamics"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationUpdateDynamicsResponse>();
}

/**
 * @summary 查询应用程序更新动态列表
 *
 * @param request ListApplicationUpdateDynamicsRequest
 * @return ListApplicationUpdateDynamicsResponse
 */
ListApplicationUpdateDynamicsResponse Client::listApplicationUpdateDynamics(const ListApplicationUpdateDynamicsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationUpdateDynamicsWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query on the list of applications in the built-in application signature library. Supports fuzzy match by application name, description, technology type, category name, and group name, exact match by application ID and category ID, and filtering by risk level. The query targets the global built-in application library regardless of the Alibaba Cloud account.
 *
 * @param request ListApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplicationsWithOptions(const ListApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCategoryName()) {
    query["CategoryName"] = request.getCategoryName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRisk()) {
    query["Risk"] = request.getRisk();
  }

  if (!!request.hasTechnology()) {
    query["Technology"] = request.getTechnology();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplications"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsResponse>();
}

/**
 * @summary Performs a paging query on the list of applications in the built-in application signature library. Supports fuzzy match by application name, description, technology type, category name, and group name, exact match by application ID and category ID, and filtering by risk level. The query targets the global built-in application library regardless of the Alibaba Cloud account.
 *
 * @param request ListApplicationsRequest
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplications(const ListApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsWithOptions(request, runtime);
}

/**
 * @summary Queries the CA certificates for TLS inspection.
 *
 * @param request ListTlsInspectCACertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTlsInspectCACertificatesResponse
 */
ListTlsInspectCACertificatesResponse Client::listTlsInspectCACertificatesWithOptions(const ListTlsInspectCACertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaCertId()) {
    query["CaCertId"] = request.getCaCertId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Queries the CA certificates for TLS inspection.
 *
 * @param request ListTlsInspectCACertificatesRequest
 * @return ListTlsInspectCACertificatesResponse
 */
ListTlsInspectCACertificatesResponse Client::listTlsInspectCACertificates(const ListTlsInspectCACertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTlsInspectCACertificatesWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query on the list of web filtering rules. Supports paging and exact filtering by web filtering template ID, rule ID, and rule action.
 *
 * @param request ListWebFilterRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWebFilterRulesResponse
 */
ListWebFilterRulesResponse Client::listWebFilterRulesWithOptions(const ListWebFilterRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRuleAction()) {
    query["RuleAction"] = request.getRuleAction();
  }

  if (!!request.hasWebFilterRuleId()) {
    query["WebFilterRuleId"] = request.getWebFilterRuleId();
  }

  if (!!request.hasWebFilterTemplateId()) {
    query["WebFilterTemplateId"] = request.getWebFilterTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWebFilterRules"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWebFilterRulesResponse>();
}

/**
 * @summary Performs a paged query on the list of web filtering rules. Supports paging and exact filtering by web filtering template ID, rule ID, and rule action.
 *
 * @param request ListWebFilterRulesRequest
 * @return ListWebFilterRulesResponse
 */
ListWebFilterRulesResponse Client::listWebFilterRules(const ListWebFilterRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWebFilterRulesWithOptions(request, runtime);
}

/**
 * @summary 查询Web过滤模版列表
 *
 * @param request ListWebFilterTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWebFilterTemplatesResponse
 */
ListWebFilterTemplatesResponse Client::listWebFilterTemplatesWithOptions(const ListWebFilterTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasWebFilterTemplateIds()) {
    query["WebFilterTemplateIds"] = request.getWebFilterTemplateIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWebFilterTemplates"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWebFilterTemplatesResponse>();
}

/**
 * @summary 查询Web过滤模版列表
 *
 * @param request ListWebFilterTemplatesRequest
 * @return ListWebFilterTemplatesResponse
 */
ListWebFilterTemplatesResponse Client::listWebFilterTemplates(const ListWebFilterTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWebFilterTemplatesWithOptions(request, runtime);
}

/**
 * @summary Modifies an address book.
 *
 * @description This operation is typically used to modify an address book.
 * ## Rate limits
 * The QPS limit for a single user is 10 requests per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
 *
 * @param tmpReq ModifyAddressBookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAddressBookResponse
 */
ModifyAddressBookResponse Client::modifyAddressBookWithOptions(const ModifyAddressBookRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAddressBookShrinkRequest request = ModifyAddressBookShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssetMemberUids()) {
    request.setAssetMemberUidsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssetMemberUids(), "AssetMemberUids", "json"));
  }

  if (!!tmpReq.hasAssetRegionResourceTypes()) {
    request.setAssetRegionResourceTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssetRegionResourceTypes(), "AssetRegionResourceTypes", "json"));
  }

  json query = {};
  if (!!request.hasAckLabels()) {
    query["AckLabels"] = request.getAckLabels();
  }

  if (!!request.hasAckNamespaces()) {
    query["AckNamespaces"] = request.getAckNamespaces();
  }

  if (!!request.hasAddressList()) {
    query["AddressList"] = request.getAddressList();
  }

  if (!!request.hasAssetMemberUidsShrink()) {
    query["AssetMemberUids"] = request.getAssetMemberUidsShrink();
  }

  if (!!request.hasAssetRegionResourceTypesShrink()) {
    query["AssetRegionResourceTypes"] = request.getAssetRegionResourceTypesShrink();
  }

  if (!!request.hasAutoAddTagEcs()) {
    query["AutoAddTagEcs"] = request.getAutoAddTagEcs();
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

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasGroupUuid()) {
    query["GroupUuid"] = request.getGroupUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.getModifyMode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasTagList()) {
    query["TagList"] = request.getTagList();
  }

  if (!!request.hasTagRelation()) {
    query["TagRelation"] = request.getTagRelation();
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
 * @summary Modifies an address book.
 *
 * @description This operation is typically used to modify an address book.
 * ## Rate limits
 * The QPS limit for a single user is 10 requests per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
 *
 * @param request ModifyAddressBookRequest
 * @return ModifyAddressBookResponse
 */
ModifyAddressBookResponse Client::modifyAddressBook(const ModifyAddressBookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAddressBookWithOptions(request, runtime);
}

/**
 * @summary Updates instance information for pay-as-you-go 2.0 users.
 *
 * @description Before calling this operation, ensure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/cloud-firewall/cloudfirewall/product-overview/pay-as-you-go) for the pay-as-you-go edition of Cloud Firewall.
 *
 * @param request ModifyCfwInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCfwInstanceResponse
 */
ModifyCfwInstanceResponse Client::modifyCfwInstanceWithOptions(const ModifyCfwInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUpdateList()) {
    query["UpdateList"] = request.getUpdateList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCfwInstance"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCfwInstanceResponse>();
}

/**
 * @summary Updates instance information for pay-as-you-go 2.0 users.
 *
 * @description Before calling this operation, ensure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/cloud-firewall/cloudfirewall/product-overview/pay-as-you-go) for the pay-as-you-go edition of Cloud Firewall.
 *
 * @param request ModifyCfwInstanceRequest
 * @return ModifyCfwInstanceResponse
 */
ModifyCfwInstanceResponse Client::modifyCfwInstance(const ModifyCfwInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCfwInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of an access control policy.
 *
 * @description This operation is used to modify the configurations of an access control policy that allows, denies, or monitors traffic through Cloud Firewall.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request ModifyControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyControlPolicyResponse
 */
ModifyControlPolicyResponse Client::modifyControlPolicyWithOptions(const ModifyControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.getAclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasApplicationNameList()) {
    query["ApplicationNameList"] = request.getApplicationNameList();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestPort()) {
    query["DestPort"] = request.getDestPort();
  }

  if (!!request.hasDestPortGroup()) {
    query["DestPortGroup"] = request.getDestPortGroup();
  }

  if (!!request.hasDestPortType()) {
    query["DestPortType"] = request.getDestPortType();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.getDestination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.getDestinationType();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDomainResolveType()) {
    query["DomainResolveType"] = request.getDomainResolveType();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.getProto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.getRelease();
  }

  if (!!request.hasRepeatDays()) {
    query["RepeatDays"] = request.getRepeatDays();
  }

  if (!!request.hasRepeatEndTime()) {
    query["RepeatEndTime"] = request.getRepeatEndTime();
  }

  if (!!request.hasRepeatStartTime()) {
    query["RepeatStartTime"] = request.getRepeatStartTime();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.getRepeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @description This operation is used to modify the configurations of an access control policy that allows, denies, or monitors traffic through Cloud Firewall.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
 *
 * @param request ModifyControlPolicyRequest
 * @return ModifyControlPolicyResponse
 */
ModifyControlPolicyResponse Client::modifyControlPolicy(const ModifyControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyControlPolicyWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ModifyControlPolicyPosition is deprecated, please use Cloudfw::2017-12-07::ModifyControlPolicyPriority instead.
 *
 * @summary Modifies the priority of an IPv4 access control policy for the Internet firewall. For this type of policy, the source and destination IP addresses are in IPv4 format.
 *
 * @description You can call this operation to modify the priority of an IPv4 access control policy for the Internet firewall. This operation does not support modifying the priority of IPv6 access control policies.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, API calls are throttled, which can affect your business. We recommend that you call this operation within this limit.
 *
 * @param request ModifyControlPolicyPositionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyControlPolicyPositionResponse
 */
ModifyControlPolicyPositionResponse Client::modifyControlPolicyPositionWithOptions(const ModifyControlPolicyPositionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNewOrder()) {
    query["NewOrder"] = request.getNewOrder();
  }

  if (!!request.hasOldOrder()) {
    query["OldOrder"] = request.getOldOrder();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @deprecated OpenAPI ModifyControlPolicyPosition is deprecated, please use Cloudfw::2017-12-07::ModifyControlPolicyPriority instead.
 *
 * @summary Modifies the priority of an IPv4 access control policy for the Internet firewall. For this type of policy, the source and destination IP addresses are in IPv4 format.
 *
 * @description You can call this operation to modify the priority of an IPv4 access control policy for the Internet firewall. This operation does not support modifying the priority of IPv6 access control policies.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, API calls are throttled, which can affect your business. We recommend that you call this operation within this limit.
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
 * @description This operation is typically used to modify the configuration of an access control policy that allows, denies, or monitors traffic passing through Cloud Firewall.
 * ## Before you begin
 * Before calling this operation, call DescribeControlPolicy and pass the same Direction parameter to obtain the current policy list and the number of policies. This helps you determine the valid value range of the Order parameter, which is from 1 to the number of policies.
 * ## Rate limit
 * The rate limit for this operation is 10 queries per second (QPS) per user. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation as needed.
 *
 * @param request ModifyControlPolicyPriorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyControlPolicyPriorityResponse
 */
ModifyControlPolicyPriorityResponse Client::modifyControlPolicyPriorityWithOptions(const ModifyControlPolicyPriorityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
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
 * @description This operation is typically used to modify the configuration of an access control policy that allows, denies, or monitors traffic passing through Cloud Firewall.
 * ## Before you begin
 * Before calling this operation, call DescribeControlPolicy and pass the same Direction parameter to obtain the current policy list and the number of policies. This helps you determine the valid value range of the Order parameter, which is from 1 to the number of policies.
 * ## Rate limit
 * The rate limit for this operation is 10 queries per second (QPS) per user. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation as needed.
 *
 * @param request ModifyControlPolicyPriorityRequest
 * @return ModifyControlPolicyPriorityResponse
 */
ModifyControlPolicyPriorityResponse Client::modifyControlPolicyPriority(const ModifyControlPolicyPriorityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyControlPolicyPriorityWithOptions(request, runtime);
}

/**
 * @summary Modifies the default IPS configuration.
 *
 * @param request ModifyDefaultIPSConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDefaultIPSConfigResponse
 */
ModifyDefaultIPSConfigResponse Client::modifyDefaultIPSConfigWithOptions(const ModifyDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBasicRules()) {
    query["BasicRules"] = request.getBasicRules();
  }

  if (!!request.hasCtiRules()) {
    query["CtiRules"] = request.getCtiRules();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMaxSdl()) {
    query["MaxSdl"] = request.getMaxSdl();
  }

  if (!!request.hasPatchRules()) {
    query["PatchRules"] = request.getPatchRules();
  }

  if (!!request.hasRuleClass()) {
    query["RuleClass"] = request.getRuleClass();
  }

  if (!!request.hasRunMode()) {
    query["RunMode"] = request.getRunMode();
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
 * @summary Modifies the default IPS configuration.
 *
 * @param request ModifyDefaultIPSConfigRequest
 * @return ModifyDefaultIPSConfigResponse
 */
ModifyDefaultIPSConfigResponse Client::modifyDefaultIPSConfig(const ModifyDefaultIPSConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDefaultIPSConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies a DNS firewall rule.
 *
 * @description Modifies a DNS firewall access control policy to allow, deny, or monitor DNS firewall traffic.
 *
 * @param request ModifyDnsFirewallPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDnsFirewallPolicyResponse
 */
ModifyDnsFirewallPolicyResponse Client::modifyDnsFirewallPolicyWithOptions(const ModifyDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.getAclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.getDestination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.getDestinationType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.getRelease();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
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
 * @summary Modifies a DNS firewall rule.
 *
 * @description Modifies a DNS firewall access control policy to allow, deny, or monitor DNS firewall traffic.
 *
 * @param request ModifyDnsFirewallPolicyRequest
 * @return ModifyDnsFirewallPolicyResponse
 */
ModifyDnsFirewallPolicyResponse Client::modifyDnsFirewallPolicy(const ModifyDnsFirewallPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDnsFirewallPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the route policy switch.
 *
 * @description This operation modifies the route policy switch of the virtual private cloud (VPC) firewalls for a transit router (TR).
 * ## Before you begin
 * - You have created virtual private cloud (VPC) firewalls for a transit router (TR) and obtained the FirewallId by calling CreateTrFirewallV2.
 * - You have created a route policy and obtained the TrFirewallRoutePolicyId by calling CreateTrFirewallV2RoutePolicy.
 * - You can call DescribeTrFirewallsV2List and DescribeTrFirewallV2RoutePolicyList to query and confirm the preceding resources.
 *
 * @param request ModifyFirewallV2RoutePolicySwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFirewallV2RoutePolicySwitchResponse
 */
ModifyFirewallV2RoutePolicySwitchResponse Client::modifyFirewallV2RoutePolicySwitchWithOptions(const ModifyFirewallV2RoutePolicySwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.getFirewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasShouldRecover()) {
    query["ShouldRecover"] = request.getShouldRecover();
  }

  if (!!request.hasTrFirewallRoutePolicyId()) {
    query["TrFirewallRoutePolicyId"] = request.getTrFirewallRoutePolicyId();
  }

  if (!!request.hasTrFirewallRoutePolicySwitchStatus()) {
    query["TrFirewallRoutePolicySwitchStatus"] = request.getTrFirewallRoutePolicySwitchStatus();
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
 * @summary Modifies the route policy switch.
 *
 * @description This operation modifies the route policy switch of the virtual private cloud (VPC) firewalls for a transit router (TR).
 * ## Before you begin
 * - You have created virtual private cloud (VPC) firewalls for a transit router (TR) and obtained the FirewallId by calling CreateTrFirewallV2.
 * - You have created a route policy and obtained the TrFirewallRoutePolicyId by calling CreateTrFirewallV2RoutePolicy.
 * - You can call DescribeTrFirewallsV2List and DescribeTrFirewallV2RoutePolicyList to query and confirm the preceding resources.
 *
 * @param request ModifyFirewallV2RoutePolicySwitchRequest
 * @return ModifyFirewallV2RoutePolicySwitchResponse
 */
ModifyFirewallV2RoutePolicySwitchResponse Client::modifyFirewallV2RoutePolicySwitch(const ModifyFirewallV2RoutePolicySwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFirewallV2RoutePolicySwitchWithOptions(request, runtime);
}

/**
 * @summary Updates the attributes of member accounts in Cloud Firewall.
 *
 * @description This operation updates the attributes of member accounts in Cloud Firewall.
 * ## QPS limit
 * This operation has a queries per second (QPS) limit of 10 for each user. If you exceed this limit, API calls are rate-limited. This may affect your business operations. Plan your calls accordingly.
 *
 * @param request ModifyInstanceMemberAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceMemberAttributesResponse
 */
ModifyInstanceMemberAttributesResponse Client::modifyInstanceMemberAttributesWithOptions(const ModifyInstanceMemberAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMembers()) {
    query["Members"] = request.getMembers();
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
 * @summary Updates the attributes of member accounts in Cloud Firewall.
 *
 * @description This operation updates the attributes of member accounts in Cloud Firewall.
 * ## QPS limit
 * This operation has a queries per second (QPS) limit of 10 for each user. If you exceed this limit, API calls are rate-limited. This may affect your business operations. Plan your calls accordingly.
 *
 * @param request ModifyInstanceMemberAttributesRequest
 * @return ModifyInstanceMemberAttributesResponse
 */
ModifyInstanceMemberAttributesResponse Client::modifyInstanceMemberAttributes(const ModifyInstanceMemberAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceMemberAttributesWithOptions(request, runtime);
}

/**
 * @summary Modifies Intrusion Prevention System (IPS) rules.
 *
 * @param request ModifyIpsRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyIpsRulesResponse
 */
ModifyIpsRulesResponse Client::modifyIpsRulesWithOptions(const ModifyIpsRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallType()) {
    query["FirewallType"] = request.getFirewallType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRuleAction()) {
    query["RuleAction"] = request.getRuleAction();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.getRules();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyIpsRules"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyIpsRulesResponse>();
}

/**
 * @summary Modifies Intrusion Prevention System (IPS) rules.
 *
 * @param request ModifyIpsRulesRequest
 * @return ModifyIpsRulesResponse
 */
ModifyIpsRulesResponse Client::modifyIpsRules(const ModifyIpsRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyIpsRulesWithOptions(request, runtime);
}

/**
 * @summary Resets IPS rules to default.
 *
 * @param request ModifyIpsRulesToDefaultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyIpsRulesToDefaultResponse
 */
ModifyIpsRulesToDefaultResponse Client::modifyIpsRulesToDefaultWithOptions(const ModifyIpsRulesToDefaultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttackApp()) {
    query["AttackApp"] = request.getAttackApp();
  }

  if (!!request.hasFirewallType()) {
    query["FirewallType"] = request.getFirewallType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasRules()) {
    query["Rules"] = request.getRules();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Resets IPS rules to default.
 *
 * @param request ModifyIpsRulesToDefaultRequest
 * @return ModifyIpsRulesToDefaultResponse
 */
ModifyIpsRulesToDefaultResponse Client::modifyIpsRulesToDefault(const ModifyIpsRulesToDefaultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyIpsRulesToDefaultWithOptions(request, runtime);
}

/**
 * @summary Modify a NAT Firewall security access control policy.
 *
 * @description This API modifies the configuration of an access control policy that allows, denies, or observes traffic passing through a NAT Firewall.
 *
 * @param request ModifyNatFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNatFirewallControlPolicyResponse
 */
ModifyNatFirewallControlPolicyResponse Client::modifyNatFirewallControlPolicyWithOptions(const ModifyNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.getAclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasApplicationNameList()) {
    query["ApplicationNameList"] = request.getApplicationNameList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestPort()) {
    query["DestPort"] = request.getDestPort();
  }

  if (!!request.hasDestPortGroup()) {
    query["DestPortGroup"] = request.getDestPortGroup();
  }

  if (!!request.hasDestPortType()) {
    query["DestPortType"] = request.getDestPortType();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.getDestination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.getDestinationType();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDomainResolveType()) {
    query["DomainResolveType"] = request.getDomainResolveType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.getProto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.getRelease();
  }

  if (!!request.hasRepeatDays()) {
    query["RepeatDays"] = request.getRepeatDays();
  }

  if (!!request.hasRepeatEndTime()) {
    query["RepeatEndTime"] = request.getRepeatEndTime();
  }

  if (!!request.hasRepeatStartTime()) {
    query["RepeatStartTime"] = request.getRepeatStartTime();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.getRepeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Modify a NAT Firewall security access control policy.
 *
 * @description This API modifies the configuration of an access control policy that allows, denies, or observes traffic passing through a NAT Firewall.
 *
 * @param request ModifyNatFirewallControlPolicyRequest
 * @return ModifyNatFirewallControlPolicyResponse
 */
ModifyNatFirewallControlPolicyResponse Client::modifyNatFirewallControlPolicy(const ModifyNatFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNatFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the priority of an access control policy for a NAT firewall.
 *
 * @param request ModifyNatFirewallControlPolicyPositionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyNatFirewallControlPolicyPositionResponse
 */
ModifyNatFirewallControlPolicyPositionResponse Client::modifyNatFirewallControlPolicyPositionWithOptions(const ModifyNatFirewallControlPolicyPositionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasNewOrder()) {
    query["NewOrder"] = request.getNewOrder();
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
 * @summary Modifies the priority of an access control policy for a NAT firewall.
 *
 * @param request ModifyNatFirewallControlPolicyPositionRequest
 * @return ModifyNatFirewallControlPolicyPositionResponse
 */
ModifyNatFirewallControlPolicyPositionResponse Client::modifyNatFirewallControlPolicyPosition(const ModifyNatFirewallControlPolicyPositionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyNatFirewallControlPolicyPositionWithOptions(request, runtime);
}

/**
 * @summary Modifies object group operations.
 *
 * @description ## Before you begin
 * - Before you call this operation, you must activate a Cloud Firewall instance.
 * - You can call [DescribeUserBuyVersion](~~DescribeUserBuyVersion~~) to query the activation status. The UserStatus field in the response indicates whether the Cloud Firewall instance is valid. A value of false indicates that the instance is invalid or not activated.
 * - Activate a Cloud Firewall instance:
 *   - China site: https://common-buy.aliyun.com/?commodityCode=cfw_sub_public_cn
 *   - International site: https://common-buy-intl.alibabacloud.com/?commodityCode=cfw_sub_public_intl
 *
 * @param request ModifyObjectGroupOperationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyObjectGroupOperationResponse
 */
ModifyObjectGroupOperationResponse Client::modifyObjectGroupOperationWithOptions(const ModifyObjectGroupOperationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasObjectList()) {
    query["ObjectList"] = request.getObjectList();
  }

  if (!!request.hasObjectOperation()) {
    query["ObjectOperation"] = request.getObjectOperation();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Modifies object group operations.
 *
 * @description ## Before you begin
 * - Before you call this operation, you must activate a Cloud Firewall instance.
 * - You can call [DescribeUserBuyVersion](~~DescribeUserBuyVersion~~) to query the activation status. The UserStatus field in the response indicates whether the Cloud Firewall instance is valid. A value of false indicates that the instance is invalid or not activated.
 * - Activate a Cloud Firewall instance:
 *   - China site: https://common-buy.aliyun.com/?commodityCode=cfw_sub_public_cn
 *   - International site: https://common-buy-intl.alibabacloud.com/?commodityCode=cfw_sub_public_intl
 *
 * @param request ModifyObjectGroupOperationRequest
 * @return ModifyObjectGroupOperationResponse
 */
ModifyObjectGroupOperationResponse Client::modifyObjectGroupOperation(const ModifyObjectGroupOperationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyObjectGroupOperationWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the strict mode for access control policies.
 *
 * @description This operation enables or disables the strict mode for access control policies.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second per user. If you exceed the limit, API calls are throttled, which can affect your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request ModifyPolicyAdvancedConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPolicyAdvancedConfigResponse
 */
ModifyPolicyAdvancedConfigResponse Client::modifyPolicyAdvancedConfigWithOptions(const ModifyPolicyAdvancedConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEips()) {
    query["Eips"] = request.getEips();
  }

  if (!!request.hasInternetSwitch()) {
    query["InternetSwitch"] = request.getInternetSwitch();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Enables or disables the strict mode for access control policies.
 *
 * @description This operation enables or disables the strict mode for access control policies.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second per user. If you exceed the limit, API calls are throttled, which can affect your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request ModifyPolicyAdvancedConfigRequest
 * @return ModifyPolicyAdvancedConfigResponse
 */
ModifyPolicyAdvancedConfigResponse Client::modifyPolicyAdvancedConfig(const ModifyPolicyAdvancedConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPolicyAdvancedConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies a private DNS endpoint.
 *
 * @param request ModifyPrivateDnsEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPrivateDnsEndpointResponse
 */
ModifyPrivateDnsEndpointResponse Client::modifyPrivateDnsEndpointWithOptions(const ModifyPrivateDnsEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessInstanceId()) {
    query["AccessInstanceId"] = request.getAccessInstanceId();
  }

  if (!!request.hasAccessInstanceName()) {
    query["AccessInstanceName"] = request.getAccessInstanceName();
  }

  if (!!request.hasPrimaryDns()) {
    query["PrimaryDns"] = request.getPrimaryDns();
  }

  if (!!request.hasPrivateDnsType()) {
    query["PrivateDnsType"] = request.getPrivateDnsType();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasStandbyDns()) {
    query["StandbyDns"] = request.getStandbyDns();
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
 * @summary Modifies a private DNS endpoint.
 *
 * @param request ModifyPrivateDnsEndpointRequest
 * @return ModifyPrivateDnsEndpointResponse
 */
ModifyPrivateDnsEndpointResponse Client::modifyPrivateDnsEndpoint(const ModifyPrivateDnsEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPrivateDnsEndpointWithOptions(request, runtime);
}

/**
 * @summary Modifies the automatic protection settings for new assets.
 *
 * @param request ModifyResourceTypeAutoEnableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyResourceTypeAutoEnableResponse
 */
ModifyResourceTypeAutoEnableResponse Client::modifyResourceTypeAutoEnableWithOptions(const ModifyResourceTypeAutoEnableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasResourceTypeAutoEnable()) {
    query["ResourceTypeAutoEnable"] = request.getResourceTypeAutoEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyResourceTypeAutoEnable"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyResourceTypeAutoEnableResponse>();
}

/**
 * @summary Modifies the automatic protection settings for new assets.
 *
 * @param request ModifyResourceTypeAutoEnableRequest
 * @return ModifyResourceTypeAutoEnableResponse
 */
ModifyResourceTypeAutoEnableResponse Client::modifyResourceTypeAutoEnable(const ModifyResourceTypeAutoEnableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyResourceTypeAutoEnableWithOptions(request, runtime);
}

/**
 * @summary Modifies the sensitive data switch.
 *
 * @param request ModifySensitiveSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySensitiveSwitchResponse
 */
ModifySensitiveSwitchResponse Client::modifySensitiveSwitchWithOptions(const ModifySensitiveSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSensitiveCategory()) {
    query["SensitiveCategory"] = request.getSensitiveCategory();
  }

  if (!!request.hasSwitchStatus()) {
    query["SwitchStatus"] = request.getSwitchStatus();
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
 * @summary Modifies the sensitive data switch.
 *
 * @param request ModifySensitiveSwitchRequest
 * @return ModifySensitiveSwitchResponse
 */
ModifySensitiveSwitchResponse Client::modifySensitiveSwitch(const ModifySensitiveSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySensitiveSwitchWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations for log delivery to Simple Log Service (SLS).
 *
 * @description Before calling this operation, call DescribeUserBuyVersion to obtain the LogVersion of the user.
 *
 * @param request ModifySlsDispatchConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySlsDispatchConfigResponse
 */
ModifySlsDispatchConfigResponse Client::modifySlsDispatchConfigWithOptions(const ModifySlsDispatchConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDetailConfig()) {
    query["DetailConfig"] = request.getDetailConfig();
  }

  if (!!request.hasLogVersion()) {
    query["LogVersion"] = request.getLogVersion();
  }

  if (!!request.hasModifyType()) {
    query["ModifyType"] = request.getModifyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySlsDispatchConfig"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySlsDispatchConfigResponse>();
}

/**
 * @summary Modifies the configurations for log delivery to Simple Log Service (SLS).
 *
 * @description Before calling this operation, call DescribeUserBuyVersion to obtain the LogVersion of the user.
 *
 * @param request ModifySlsDispatchConfigRequest
 * @return ModifySlsDispatchConfigResponse
 */
ModifySlsDispatchConfigResponse Client::modifySlsDispatchConfig(const ModifySlsDispatchConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySlsDispatchConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the log delivery settings for Simple Log Service (SLS).
 *
 * @description ## QPS limit
 * You can call this API up to 10 times per second per user. If you exceed this limit, API calls are throttled, which may affect your business. Plan your calls accordingly.
 *
 * @param request ModifySlsDispatchStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySlsDispatchStatusResponse
 */
ModifySlsDispatchStatusResponse Client::modifySlsDispatchStatusWithOptions(const ModifySlsDispatchStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDispatchValue()) {
    query["DispatchValue"] = request.getDispatchValue();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  if (!!request.hasFilterKeys()) {
    query["FilterKeys"] = request.getFilterKeys();
  }

  if (!!request.hasNewRegionId()) {
    query["NewRegionId"] = request.getNewRegionId();
  }

  if (!!request.hasSite()) {
    query["Site"] = request.getSite();
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
 * @summary Modifies the log delivery settings for Simple Log Service (SLS).
 *
 * @description ## QPS limit
 * You can call this API up to 10 times per second per user. If you exceed this limit, API calls are throttled, which may affect your business. Plan your calls accordingly.
 *
 * @param request ModifySlsDispatchStatusRequest
 * @return ModifySlsDispatchStatusResponse
 */
ModifySlsDispatchStatusResponse Client::modifySlsDispatchStatus(const ModifySlsDispatchStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySlsDispatchStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the threat intelligence configuration.
 *
 * @param request ModifyThreatIntelligenceSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyThreatIntelligenceSwitchResponse
 */
ModifyThreatIntelligenceSwitchResponse Client::modifyThreatIntelligenceSwitchWithOptions(const ModifyThreatIntelligenceSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryList()) {
    query["CategoryList"] = request.getCategoryList();
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
 * @summary Modifies the threat intelligence configuration.
 *
 * @param request ModifyThreatIntelligenceSwitchRequest
 * @return ModifyThreatIntelligenceSwitchResponse
 */
ModifyThreatIntelligenceSwitchResponse Client::modifyThreatIntelligenceSwitch(const ModifyThreatIntelligenceSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyThreatIntelligenceSwitchWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a TR firewall. Prerequisites: Cloud Enterprise Network (CEN) Enterprise Edition transit router -> Call CreateTrFirewallV2 to create a TR firewall -> Obtain the FirewallId and then call this API operation.
 *
 * @description Modifies the configuration of a virtual private cloud (VPC) firewall. Although the API operation is named ModifyTrFirewallV2Configuration, it supports all types of VPC firewalls and is not limited to CEN Enterprise Edition TR firewalls. The FirewallId format is not limited to the vfw-tr-* prefix. Before you call this API operation, you must create a VPC firewall instance. You can create a TR firewall by calling CreateTrFirewallV2 and query its FirewallId by calling DescribeTrFirewallsV2List.
 *
 * @param request ModifyTrFirewallV2ConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTrFirewallV2ConfigurationResponse
 */
ModifyTrFirewallV2ConfigurationResponse Client::modifyTrFirewallV2ConfigurationWithOptions(const ModifyTrFirewallV2ConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.getFirewallId();
  }

  if (!!request.hasFirewallName()) {
    query["FirewallName"] = request.getFirewallName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Modifies the configuration of a TR firewall. Prerequisites: Cloud Enterprise Network (CEN) Enterprise Edition transit router -> Call CreateTrFirewallV2 to create a TR firewall -> Obtain the FirewallId and then call this API operation.
 *
 * @description Modifies the configuration of a virtual private cloud (VPC) firewall. Although the API operation is named ModifyTrFirewallV2Configuration, it supports all types of VPC firewalls and is not limited to CEN Enterprise Edition TR firewalls. The FirewallId format is not limited to the vfw-tr-* prefix. Before you call this API operation, you must create a VPC firewall instance. You can create a TR firewall by calling CreateTrFirewallV2 and query its FirewallId by calling DescribeTrFirewallsV2List.
 *
 * @param request ModifyTrFirewallV2ConfigurationRequest
 * @return ModifyTrFirewallV2ConfigurationResponse
 */
ModifyTrFirewallV2ConfigurationResponse Client::modifyTrFirewallV2Configuration(const ModifyTrFirewallV2ConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTrFirewallV2ConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modifies the scope of a routing policy for a VPC firewall for a transit router.
 *
 * @description Supports modifications for *point-to-multipoint* and *multipoint interconnection* scenarios. Does not support modifications for *point-to-point* scenarios.
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
    request.setDestCandidateListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDestCandidateList(), "DestCandidateList", "json"));
  }

  if (!!tmpReq.hasSrcCandidateList()) {
    request.setSrcCandidateListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSrcCandidateList(), "SrcCandidateList", "json"));
  }

  json query = {};
  if (!!request.hasDestCandidateListShrink()) {
    query["DestCandidateList"] = request.getDestCandidateListShrink();
  }

  if (!!request.hasFirewallId()) {
    query["FirewallId"] = request.getFirewallId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasShouldRecover()) {
    query["ShouldRecover"] = request.getShouldRecover();
  }

  if (!!request.hasSrcCandidateListShrink()) {
    query["SrcCandidateList"] = request.getSrcCandidateListShrink();
  }

  if (!!request.hasTrFirewallRoutePolicyId()) {
    query["TrFirewallRoutePolicyId"] = request.getTrFirewallRoutePolicyId();
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
 * @summary Modifies the scope of a routing policy for a VPC firewall for a transit router.
 *
 * @description Supports modifications for *point-to-multipoint* and *multipoint interconnection* scenarios. Does not support modifications for *point-to-point* scenarios.
 *
 * @param request ModifyTrFirewallV2RoutePolicyScopeRequest
 * @return ModifyTrFirewallV2RoutePolicyScopeResponse
 */
ModifyTrFirewallV2RoutePolicyScopeResponse Client::modifyTrFirewallV2RoutePolicyScope(const ModifyTrFirewallV2RoutePolicyScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTrFirewallV2RoutePolicyScopeWithOptions(request, runtime);
}

/**
 * @summary Modifies user alert configuration.
 *
 * @param tmpReq ModifyUserAlarmConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserAlarmConfigResponse
 */
ModifyUserAlarmConfigResponse Client::modifyUserAlarmConfigWithOptions(const ModifyUserAlarmConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyUserAlarmConfigShrinkRequest request = ModifyUserAlarmConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContactConfig()) {
    request.setContactConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContactConfig(), "ContactConfig", "json"));
  }

  json query = {};
  if (!!request.hasAlarmConfig()) {
    query["AlarmConfig"] = request.getAlarmConfig();
  }

  if (!!request.hasAlarmLang()) {
    query["AlarmLang"] = request.getAlarmLang();
  }

  if (!!request.hasContactConfigShrink()) {
    query["ContactConfig"] = request.getContactConfigShrink();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasUseDefaultContact()) {
    query["UseDefaultContact"] = request.getUseDefaultContact();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUserAlarmConfig"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserAlarmConfigResponse>();
}

/**
 * @summary Modifies user alert configuration.
 *
 * @param request ModifyUserAlarmConfigRequest
 * @return ModifyUserAlarmConfigResponse
 */
ModifyUserAlarmConfigResponse Client::modifyUserAlarmConfig(const ModifyUserAlarmConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserAlarmConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the intrusion prevention system (IPS) whitelist for the Internet Border.
 *
 * @description ## QPS limit
 * This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled. This can affect your business. We recommend that you call the API at a reasonable rate.
 *
 * @param request ModifyUserIPSWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserIPSWhitelistResponse
 */
ModifyUserIPSWhitelistResponse Client::modifyUserIPSWhitelistWithOptions(const ModifyUserIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasListType()) {
    query["ListType"] = request.getListType();
  }

  if (!!request.hasListValue()) {
    query["ListValue"] = request.getListValue();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasWhiteType()) {
    query["WhiteType"] = request.getWhiteType();
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
 * @summary Modifies the intrusion prevention system (IPS) whitelist for the Internet Border.
 *
 * @description ## QPS limit
 * This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled. This can affect your business. We recommend that you call the API at a reasonable rate.
 *
 * @param request ModifyUserIPSWhitelistRequest
 * @return ModifyUserIPSWhitelistResponse
 */
ModifyUserIPSWhitelistResponse Client::modifyUserIPSWhitelist(const ModifyUserIPSWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserIPSWhitelistWithOptions(request, runtime);
}

/**
 * @summary Modifies the retention period of user logs.
 *
 * @description ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 per user. Calls that exceed this limit are rate-limited, which may affect your business. Plan your calls accordingly.
 *
 * @param request ModifyUserSlsLogStorageTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserSlsLogStorageTimeResponse
 */
ModifyUserSlsLogStorageTimeResponse Client::modifyUserSlsLogStorageTimeWithOptions(const ModifyUserSlsLogStorageTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLogVersion()) {
    query["LogVersion"] = request.getLogVersion();
  }

  if (!!request.hasSlsRegionId()) {
    query["SlsRegionId"] = request.getSlsRegionId();
  }

  if (!!request.hasStorageTime()) {
    query["StorageTime"] = request.getStorageTime();
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
 * @summary Modifies the retention period of user logs.
 *
 * @description ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 per user. Calls that exceed this limit are rate-limited, which may affect your business. Plan your calls accordingly.
 *
 * @param request ModifyUserSlsLogStorageTimeRequest
 * @return ModifyUserSlsLogStorageTimeResponse
 */
ModifyUserSlsLogStorageTimeResponse Client::modifyUserSlsLogStorageTime(const ModifyUserSlsLogStorageTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserSlsLogStorageTimeWithOptions(request, runtime);
}

/**
 * @summary Modifies the ACL engine mode for a VPC firewall.
 *
 * @description ## QPS limit
 * This API is limited to 10 queries per second (QPS) per user. Calls that exceed this limit are throttled. This may affect your business. Plan your API calls accordingly.
 *
 * @param request ModifyVpcFirewallAclEngineModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallAclEngineModeResponse
 */
ModifyVpcFirewallAclEngineModeResponse Client::modifyVpcFirewallAclEngineModeWithOptions(const ModifyVpcFirewallAclEngineModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasStrictMode()) {
    query["StrictMode"] = request.getStrictMode();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
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
 * @summary Modifies the ACL engine mode for a VPC firewall.
 *
 * @description ## QPS limit
 * This API is limited to 10 queries per second (QPS) per user. Calls that exceed this limit are throttled. This may affect your business. Plan your API calls accordingly.
 *
 * @param request ModifyVpcFirewallAclEngineModeRequest
 * @return ModifyVpcFirewallAclEngineModeResponse
 */
ModifyVpcFirewallAclEngineModeResponse Client::modifyVpcFirewallAclEngineMode(const ModifyVpcFirewallAclEngineModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallAclEngineModeWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a VPC firewall that protects traffic between network instances in a Cloud Enterprise Network (CEN) and a specified VPC.
 *
 * @description This operation modifies the configuration of a VPC firewall. The VPC firewall protects traffic between network instances in a Cloud Enterprise Network (CEN) and a specified VPC. The network instances include VPCs, virtual border routers (VBRs), and Cloud Connect Network (CCN) instances. Before you call this operation, you must call the [CreateVpcFirewallCenConfigure](https://help.aliyun.com/document_detail/345772.html) operation to create a VPC firewall.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 for a single user. If the limit is exceeded, API calls are throttled. This may affect your business. Please plan your API calls accordingly.
 *
 * @param request ModifyVpcFirewallCenConfigureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallCenConfigureResponse
 */
ModifyVpcFirewallCenConfigureResponse Client::modifyVpcFirewallCenConfigureWithOptions(const ModifyVpcFirewallCenConfigureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
  }

  if (!!request.hasVpcFirewallName()) {
    query["VpcFirewallName"] = request.getVpcFirewallName();
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
 * @summary Modifies the configuration of a VPC firewall that protects traffic between network instances in a Cloud Enterprise Network (CEN) and a specified VPC.
 *
 * @description This operation modifies the configuration of a VPC firewall. The VPC firewall protects traffic between network instances in a Cloud Enterprise Network (CEN) and a specified VPC. The network instances include VPCs, virtual border routers (VBRs), and Cloud Connect Network (CCN) instances. Before you call this operation, you must call the [CreateVpcFirewallCenConfigure](https://help.aliyun.com/document_detail/345772.html) operation to create a VPC firewall.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 for a single user. If the limit is exceeded, API calls are throttled. This may affect your business. Please plan your API calls accordingly.
 *
 * @param request ModifyVpcFirewallCenConfigureRequest
 * @return ModifyVpcFirewallCenConfigureResponse
 */
ModifyVpcFirewallCenConfigureResponse Client::modifyVpcFirewallCenConfigure(const ModifyVpcFirewallCenConfigureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallCenConfigureWithOptions(request, runtime);
}

/**
 * @summary Modifies the status of a VPC firewall that protects traffic between network instances in a Cloud Enterprise Network (CEN) and a specified VPC.
 *
 * @description This operation modifies the status of a VPC firewall. The firewall protects traffic between network instances in a Cloud Enterprise Network (CEN) and a specified Virtual Private Cloud (VPC). The network instances include VPCs, Virtual Border Routers (VBRs), and Cloud Connect Network (CCN) instances. If the firewall is enabled, it protects traffic between the network instances in the CEN and the specified VPC. If the firewall is disabled, it no longer protects this traffic.
 * Before you call this operation, you must create a VPC firewall by calling the [CreateVpcFirewallCenConfigure](https://help.aliyun.com/document_detail/345772.html) operation.
 * ## Limits
 * This operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled. Throttling may affect your business. Plan your calls accordingly.
 *
 * @param request ModifyVpcFirewallCenSwitchStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallCenSwitchStatusResponse
 */
ModifyVpcFirewallCenSwitchStatusResponse Client::modifyVpcFirewallCenSwitchStatusWithOptions(const ModifyVpcFirewallCenSwitchStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallSwitch()) {
    query["FirewallSwitch"] = request.getFirewallSwitch();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
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
 * @summary Modifies the status of a VPC firewall that protects traffic between network instances in a Cloud Enterprise Network (CEN) and a specified VPC.
 *
 * @description This operation modifies the status of a VPC firewall. The firewall protects traffic between network instances in a Cloud Enterprise Network (CEN) and a specified Virtual Private Cloud (VPC). The network instances include VPCs, Virtual Border Routers (VBRs), and Cloud Connect Network (CCN) instances. If the firewall is enabled, it protects traffic between the network instances in the CEN and the specified VPC. If the firewall is disabled, it no longer protects this traffic.
 * Before you call this operation, you must create a VPC firewall by calling the [CreateVpcFirewallCenConfigure](https://help.aliyun.com/document_detail/345772.html) operation.
 * ## Limits
 * This operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled. Throttling may affect your business. Plan your calls accordingly.
 *
 * @param request ModifyVpcFirewallCenSwitchStatusRequest
 * @return ModifyVpcFirewallCenSwitchStatusResponse
 */
ModifyVpcFirewallCenSwitchStatusResponse Client::modifyVpcFirewallCenSwitchStatus(const ModifyVpcFirewallCenSwitchStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallCenSwitchStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a virtual private cloud (VPC) border firewall that protects traffic between two VPCs connected over Express Connect.
 *
 * @description This operation is generally used to modify the configuration of a VPC border firewall. The VPC border firewall protects traffic between two VPCs connected over Express Connect.
 * Before you call this operation, make sure that you have called the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation to create a VPC border firewall.
 * ## Rate limit
 * You can call this operation up to 10 times per second. Requests that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
 *
 * @param request ModifyVpcFirewallConfigureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallConfigureResponse
 */
ModifyVpcFirewallConfigureResponse Client::modifyVpcFirewallConfigureWithOptions(const ModifyVpcFirewallConfigureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLocalVpcCidrTableList()) {
    query["LocalVpcCidrTableList"] = request.getLocalVpcCidrTableList();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasPeerVpcCidrTableList()) {
    query["PeerVpcCidrTableList"] = request.getPeerVpcCidrTableList();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
  }

  if (!!request.hasVpcFirewallName()) {
    query["VpcFirewallName"] = request.getVpcFirewallName();
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
 * @summary Modifies the configuration of a virtual private cloud (VPC) border firewall that protects traffic between two VPCs connected over Express Connect.
 *
 * @description This operation is generally used to modify the configuration of a VPC border firewall. The VPC border firewall protects traffic between two VPCs connected over Express Connect.
 * Before you call this operation, make sure that you have called the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation to create a VPC border firewall.
 * ## Rate limit
 * You can call this operation up to 10 times per second. Requests that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
 *
 * @param request ModifyVpcFirewallConfigureRequest
 * @return ModifyVpcFirewallConfigureResponse
 */
ModifyVpcFirewallConfigureResponse Client::modifyVpcFirewallConfigure(const ModifyVpcFirewallConfigureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallConfigureWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of an access control policy for a specified VPC firewall policy group.
 *
 * @description This operation is typically used to modify the configuration of an access control policy for a specified VPC firewall policy group. VPC firewall instances that protect Cloud Enterprise Network (CEN) instances and VPC firewall instances that protect Express Connect circuits use different access control policies.
 * ## QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
 *
 * @param request ModifyVpcFirewallControlPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallControlPolicyResponse
 */
ModifyVpcFirewallControlPolicyResponse Client::modifyVpcFirewallControlPolicyWithOptions(const ModifyVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclAction()) {
    query["AclAction"] = request.getAclAction();
  }

  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasApplicationNameList()) {
    query["ApplicationNameList"] = request.getApplicationNameList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDestPort()) {
    query["DestPort"] = request.getDestPort();
  }

  if (!!request.hasDestPortGroup()) {
    query["DestPortGroup"] = request.getDestPortGroup();
  }

  if (!!request.hasDestPortType()) {
    query["DestPortType"] = request.getDestPortType();
  }

  if (!!request.hasDestination()) {
    query["Destination"] = request.getDestination();
  }

  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.getDestinationType();
  }

  if (!!request.hasDomainResolveType()) {
    query["DomainResolveType"] = request.getDomainResolveType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProto()) {
    query["Proto"] = request.getProto();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.getRelease();
  }

  if (!!request.hasRepeatDays()) {
    query["RepeatDays"] = request.getRepeatDays();
  }

  if (!!request.hasRepeatEndTime()) {
    query["RepeatEndTime"] = request.getRepeatEndTime();
  }

  if (!!request.hasRepeatStartTime()) {
    query["RepeatStartTime"] = request.getRepeatStartTime();
  }

  if (!!request.hasRepeatType()) {
    query["RepeatType"] = request.getRepeatType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
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
 * @summary Modifies the configuration of an access control policy for a specified VPC firewall policy group.
 *
 * @description This operation is typically used to modify the configuration of an access control policy for a specified VPC firewall policy group. VPC firewall instances that protect Cloud Enterprise Network (CEN) instances and VPC firewall instances that protect Express Connect circuits use different access control policies.
 * ## QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
 *
 * @param request ModifyVpcFirewallControlPolicyRequest
 * @return ModifyVpcFirewallControlPolicyResponse
 */
ModifyVpcFirewallControlPolicyResponse Client::modifyVpcFirewallControlPolicy(const ModifyVpcFirewallControlPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallControlPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the priority of an access control policy in a policy group for a VPC firewall.
 *
 * @description You can call this operation to modify the priority of an access control policy in a policy group for a VPC firewall.
 * ## QPS limit
 * The limit on the number of queries per second (QPS) for a single user is 10. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request ModifyVpcFirewallControlPolicyPositionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallControlPolicyPositionResponse
 */
ModifyVpcFirewallControlPolicyPositionResponse Client::modifyVpcFirewallControlPolicyPositionWithOptions(const ModifyVpcFirewallControlPolicyPositionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNewOrder()) {
    query["NewOrder"] = request.getNewOrder();
  }

  if (!!request.hasOldOrder()) {
    query["OldOrder"] = request.getOldOrder();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
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
 * @summary Modifies the priority of an access control policy in a policy group for a VPC firewall.
 *
 * @description You can call this operation to modify the priority of an access control policy in a policy group for a VPC firewall.
 * ## QPS limit
 * The limit on the number of queries per second (QPS) for a single user is 10. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request ModifyVpcFirewallControlPolicyPositionRequest
 * @return ModifyVpcFirewallControlPolicyPositionResponse
 */
ModifyVpcFirewallControlPolicyPositionResponse Client::modifyVpcFirewallControlPolicyPosition(const ModifyVpcFirewallControlPolicyPositionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallControlPolicyPositionWithOptions(request, runtime);
}

/**
 * @summary Modifies the intrusion prevention configuration of a VPC firewall.
 *
 * @description You can call this operation to modify the intrusion prevention configuration of a VPC firewall.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 per user. If the QPS limit is exceeded, API calls are throttled. This may affect your business. We recommend that you take this limit into consideration when you call this operation.
 *
 * @param request ModifyVpcFirewallDefaultIPSConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallDefaultIPSConfigResponse
 */
ModifyVpcFirewallDefaultIPSConfigResponse Client::modifyVpcFirewallDefaultIPSConfigWithOptions(const ModifyVpcFirewallDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBasicRules()) {
    query["BasicRules"] = request.getBasicRules();
  }

  if (!!request.hasEnableAllPatch()) {
    query["EnableAllPatch"] = request.getEnableAllPatch();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasRuleClass()) {
    query["RuleClass"] = request.getRuleClass();
  }

  if (!!request.hasRunMode()) {
    query["RunMode"] = request.getRunMode();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
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
 * @summary Modifies the intrusion prevention configuration of a VPC firewall.
 *
 * @description You can call this operation to modify the intrusion prevention configuration of a VPC firewall.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 per user. If the QPS limit is exceeded, API calls are throttled. This may affect your business. We recommend that you take this limit into consideration when you call this operation.
 *
 * @param request ModifyVpcFirewallDefaultIPSConfigRequest
 * @return ModifyVpcFirewallDefaultIPSConfigResponse
 */
ModifyVpcFirewallDefaultIPSConfigResponse Client::modifyVpcFirewallDefaultIPSConfig(const ModifyVpcFirewallDefaultIPSConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallDefaultIPSConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the IPS whitelist for a VPC firewall. Before calling this operation, ensure that Cloud Firewall is activated. You can check the activation status by using the UserStatus parameter returned by the DescribeUserBuyVersion operation. A value of false indicates that Cloud Firewall is not activated.
 *
 * @param request ModifyVpcFirewallIPSWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallIPSWhitelistResponse
 */
ModifyVpcFirewallIPSWhitelistResponse Client::modifyVpcFirewallIPSWhitelistWithOptions(const ModifyVpcFirewallIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasListType()) {
    query["ListType"] = request.getListType();
  }

  if (!!request.hasListValue()) {
    query["ListValue"] = request.getListValue();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
  }

  if (!!request.hasWhiteType()) {
    query["WhiteType"] = request.getWhiteType();
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
 * @summary Modifies the IPS whitelist for a VPC firewall. Before calling this operation, ensure that Cloud Firewall is activated. You can check the activation status by using the UserStatus parameter returned by the DescribeUserBuyVersion operation. A value of false indicates that Cloud Firewall is not activated.
 *
 * @param request ModifyVpcFirewallIPSWhitelistRequest
 * @return ModifyVpcFirewallIPSWhitelistResponse
 */
ModifyVpcFirewallIPSWhitelistResponse Client::modifyVpcFirewallIPSWhitelist(const ModifyVpcFirewallIPSWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallIPSWhitelistWithOptions(request, runtime);
}

/**
 * @summary Modifies the switch status of virtual private cloud (VPC) firewalls at the border that protect traffic between two VPCs connected over Express Connect.
 *
 * @description This operation modifies the switch status of virtual private cloud (VPC) firewalls at the border. The virtual private cloud (VPC) firewalls at the border protect traffic between two VPCs connected over Express Connect. After you enable the virtual private cloud (VPC) firewalls at the border, the mutual access traffic between the two VPCs connected over Express Connect is protected by the virtual private cloud (VPC) firewalls at the border. After the shutdown of the virtual private cloud (VPC) firewalls at the border, the virtual private cloud (VPC) firewalls at the border no longer protect the mutual access traffic between the two VPCs connected over Express Connect.
 * Before you invoke this operation, you must have invoked the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation to create virtual private cloud (VPC) firewalls at the border.
 * ## QPS limit
 * The QPS limit per user for this operation is 10. If the number of invocations per second exceeds the limit, throttling is triggered, which may affect your services. Make invocations at a reasonable rate.
 *
 * @param request ModifyVpcFirewallSwitchStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyVpcFirewallSwitchStatusResponse
 */
ModifyVpcFirewallSwitchStatusResponse Client::modifyVpcFirewallSwitchStatusWithOptions(const ModifyVpcFirewallSwitchStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirewallSwitch()) {
    query["FirewallSwitch"] = request.getFirewallSwitch();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasVpcFirewallId()) {
    query["VpcFirewallId"] = request.getVpcFirewallId();
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
 * @summary Modifies the switch status of virtual private cloud (VPC) firewalls at the border that protect traffic between two VPCs connected over Express Connect.
 *
 * @description This operation modifies the switch status of virtual private cloud (VPC) firewalls at the border. The virtual private cloud (VPC) firewalls at the border protect traffic between two VPCs connected over Express Connect. After you enable the virtual private cloud (VPC) firewalls at the border, the mutual access traffic between the two VPCs connected over Express Connect is protected by the virtual private cloud (VPC) firewalls at the border. After the shutdown of the virtual private cloud (VPC) firewalls at the border, the virtual private cloud (VPC) firewalls at the border no longer protect the mutual access traffic between the two VPCs connected over Express Connect.
 * Before you invoke this operation, you must have invoked the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation to create virtual private cloud (VPC) firewalls at the border.
 * ## QPS limit
 * The QPS limit per user for this operation is 10. If the number of invocations per second exceeds the limit, throttling is triggered, which may affect your services. Make invocations at a reasonable rate.
 *
 * @param request ModifyVpcFirewallSwitchStatusRequest
 * @return ModifyVpcFirewallSwitchStatusResponse
 */
ModifyVpcFirewallSwitchStatusResponse Client::modifyVpcFirewallSwitchStatus(const ModifyVpcFirewallSwitchStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyVpcFirewallSwitchStatusWithOptions(request, runtime);
}

/**
 * @summary Disables all firewall switches.
 *
 * @description This operation disables all firewall switches.
 * ## Rate limit
 * The rate limit for a single user is 10 queries per second (QPS). If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable frequency.
 *
 * @param request PutDisableAllFwSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutDisableAllFwSwitchResponse
 */
PutDisableAllFwSwitchResponse Client::putDisableAllFwSwitchWithOptions(const PutDisableAllFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Disables all firewall switches.
 *
 * @description This operation disables all firewall switches.
 * ## Rate limit
 * The rate limit for a single user is 10 queries per second (QPS). If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable frequency.
 *
 * @param request PutDisableAllFwSwitchRequest
 * @return PutDisableAllFwSwitchResponse
 */
PutDisableAllFwSwitchResponse Client::putDisableAllFwSwitch(const PutDisableAllFwSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putDisableAllFwSwitchWithOptions(request, runtime);
}

/**
 * @summary Disables the firewall switch.
 *
 * @description Disables the firewall switch. After the firewall switch is disabled, traffic does not pass through Cloud Firewall.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation as needed.
 *
 * @param request PutDisableFwSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutDisableFwSwitchResponse
 */
PutDisableFwSwitchResponse Client::putDisableFwSwitchWithOptions(const PutDisableFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasIpaddrList()) {
    query["IpaddrList"] = request.getIpaddrList();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasRegionList()) {
    query["RegionList"] = request.getRegionList();
  }

  if (!!request.hasResourceTypeList()) {
    query["ResourceTypeList"] = request.getResourceTypeList();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Disables the firewall switch.
 *
 * @description Disables the firewall switch. After the firewall switch is disabled, traffic does not pass through Cloud Firewall.
 * ## QPS limit
 * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation as needed.
 *
 * @param request PutDisableFwSwitchRequest
 * @return PutDisableFwSwitchResponse
 */
PutDisableFwSwitchResponse Client::putDisableFwSwitch(const PutDisableFwSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putDisableFwSwitchWithOptions(request, runtime);
}

/**
 * @summary Enables all firewall switches.
 *
 * @description This API operation protects all public IP addresses of your Alibaba Cloud account.
 * ## QPS limits
 * This API operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this API operation at a reasonable rate.
 *
 * @param request PutEnableAllFwSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutEnableAllFwSwitchResponse
 */
PutEnableAllFwSwitchResponse Client::putEnableAllFwSwitchWithOptions(const PutEnableAllFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Enables all firewall switches.
 *
 * @description This API operation protects all public IP addresses of your Alibaba Cloud account.
 * ## QPS limits
 * This API operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this API operation at a reasonable rate.
 *
 * @param request PutEnableAllFwSwitchRequest
 * @return PutEnableAllFwSwitchResponse
 */
PutEnableAllFwSwitchResponse Client::putEnableAllFwSwitch(const PutEnableAllFwSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putEnableAllFwSwitchWithOptions(request, runtime);
}

/**
 * @summary Enables the firewall switch.
 *
 * @description This operation enables the firewall switch. Traffic passes through Cloud Firewall only after the firewall switch is enabled.
 * ## QPS limit
 * The QPS limit for a single user is 5 requests per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this API at a reasonable frequency.
 *
 * @param request PutEnableFwSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutEnableFwSwitchResponse
 */
PutEnableFwSwitchResponse Client::putEnableFwSwitchWithOptions(const PutEnableFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasIpaddrList()) {
    query["IpaddrList"] = request.getIpaddrList();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasRegionList()) {
    query["RegionList"] = request.getRegionList();
  }

  if (!!request.hasResourceTypeList()) {
    query["ResourceTypeList"] = request.getResourceTypeList();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Enables the firewall switch.
 *
 * @description This operation enables the firewall switch. Traffic passes through Cloud Firewall only after the firewall switch is enabled.
 * ## QPS limit
 * The QPS limit for a single user is 5 requests per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this API at a reasonable frequency.
 *
 * @param request PutEnableFwSwitchRequest
 * @return PutEnableFwSwitchResponse
 */
PutEnableFwSwitchResponse Client::putEnableFwSwitch(const PutEnableFwSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putEnableFwSwitchWithOptions(request, runtime);
}

/**
 * @summary Releases an expired instance.
 *
 * @param request ReleaseExpiredInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseExpiredInstanceResponse
 */
ReleaseExpiredInstanceResponse Client::releaseExpiredInstanceWithOptions(const ReleaseExpiredInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Releases an expired instance.
 *
 * @param request ReleaseExpiredInstanceRequest
 * @return ReleaseExpiredInstanceResponse
 */
ReleaseExpiredInstanceResponse Client::releaseExpiredInstance(const ReleaseExpiredInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseExpiredInstanceWithOptions(request, runtime);
}

/**
 * @summary Releases a pay-as-you-go firewall.
 *
 * @param request ReleasePostInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleasePostInstanceResponse
 */
ReleasePostInstanceResponse Client::releasePostInstanceWithOptions(const ReleasePostInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Releases a pay-as-you-go firewall.
 *
 * @param request ReleasePostInstanceRequest
 * @return ReleasePostInstanceResponse
 */
ReleasePostInstanceResponse Client::releasePostInstance(const ReleasePostInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releasePostInstanceWithOptions(request, runtime);
}

/**
 * @summary Resets the hit count of a NAT firewall rule.
 *
 * @param request ResetNatFirewallRuleHitCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetNatFirewallRuleHitCountResponse
 */
ResetNatFirewallRuleHitCountResponse Client::resetNatFirewallRuleHitCountWithOptions(const ResetNatFirewallRuleHitCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
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
 * @summary Resets the hit count of a NAT firewall rule.
 *
 * @param request ResetNatFirewallRuleHitCountRequest
 * @return ResetNatFirewallRuleHitCountResponse
 */
ResetNatFirewallRuleHitCountResponse Client::resetNatFirewallRuleHitCount(const ResetNatFirewallRuleHitCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetNatFirewallRuleHitCountWithOptions(request, runtime);
}

/**
 * @summary Resets the hit count of a rule.
 *
 * @description This operation resets the hit count of an access control policy in a VPC firewall policy group.
 * ## QPS limit
 * This operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may impact your business. Plan your calls accordingly.
 *
 * @param request ResetRuleHitCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetRuleHitCountResponse
 */
ResetRuleHitCountResponse Client::resetRuleHitCountWithOptions(const ResetRuleHitCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
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
 * @summary Resets the hit count of a rule.
 *
 * @description This operation resets the hit count of an access control policy in a VPC firewall policy group.
 * ## QPS limit
 * This operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may impact your business. Plan your calls accordingly.
 *
 * @param request ResetRuleHitCountRequest
 * @return ResetRuleHitCountResponse
 */
ResetRuleHitCountResponse Client::resetRuleHitCount(const ResetRuleHitCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetRuleHitCountWithOptions(request, runtime);
}

/**
 * @summary Resets the hit count of an access control policy in a specified VPC firewall policy group to zero.
 *
 * @description This operation resets the hit count of a specific access control policy in a VPC firewall policy group to zero.
 * ## QPS limit
 * This operation has a queries per second (QPS) limit of 10 per user. Calls that exceed this limit are throttled, which may affect your business. Call this operation at a reasonable rate.
 *
 * @param request ResetVpcFirewallRuleHitCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetVpcFirewallRuleHitCountResponse
 */
ResetVpcFirewallRuleHitCountResponse Client::resetVpcFirewallRuleHitCountWithOptions(const ResetVpcFirewallRuleHitCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAclUuid()) {
    query["AclUuid"] = request.getAclUuid();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
 * @summary Resets the hit count of an access control policy in a specified VPC firewall policy group to zero.
 *
 * @description This operation resets the hit count of a specific access control policy in a VPC firewall policy group to zero.
 * ## QPS limit
 * This operation has a queries per second (QPS) limit of 10 per user. Calls that exceed this limit are throttled, which may affect your business. Call this operation at a reasonable rate.
 *
 * @param request ResetVpcFirewallRuleHitCountRequest
 * @return ResetVpcFirewallRuleHitCountResponse
 */
ResetVpcFirewallRuleHitCountResponse Client::resetVpcFirewallRuleHitCount(const ResetVpcFirewallRuleHitCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetVpcFirewallRuleHitCountWithOptions(request, runtime);
}

/**
 * @summary Enables automatic protection for new assets.
 *
 * @description Each Cloud Firewall instance supports up to 100 associations with TLS inspection policies.
 *
 * @param request SetAutoProtectNewAssetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAutoProtectNewAssetsResponse
 */
SetAutoProtectNewAssetsResponse Client::setAutoProtectNewAssetsWithOptions(const SetAutoProtectNewAssetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoProtect()) {
    query["AutoProtect"] = request.getAutoProtect();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAutoProtectNewAssets"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAutoProtectNewAssetsResponse>();
}

/**
 * @summary Enables automatic protection for new assets.
 *
 * @description Each Cloud Firewall instance supports up to 100 associations with TLS inspection policies.
 *
 * @param request SetAutoProtectNewAssetsRequest
 * @return SetAutoProtectNewAssetsResponse
 */
SetAutoProtectNewAssetsResponse Client::setAutoProtectNewAssets(const SetAutoProtectNewAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAutoProtectNewAssetsWithOptions(request, runtime);
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
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProxyId()) {
    query["ProxyId"] = request.getProxyId();
  }

  if (!!request.hasSwitch()) {
    query["Switch"] = request.getSwitch();
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
 * @summary Changes the enabling status of AI-powered traffic analysis.
 *
 * @description The analysis covers all data for your Cloud Firewall instance from the date of purchase.
 *
 * @param request UpdateAITrafficAnalysisStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAITrafficAnalysisStatusResponse
 */
UpdateAITrafficAnalysisStatusResponse Client::updateAITrafficAnalysisStatusWithOptions(const UpdateAITrafficAnalysisStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Changes the enabling status of AI-powered traffic analysis.
 *
 * @description The analysis covers all data for your Cloud Firewall instance from the date of purchase.
 *
 * @param request UpdateAITrafficAnalysisStatusRequest
 * @return UpdateAITrafficAnalysisStatusResponse
 */
UpdateAITrafficAnalysisStatusResponse Client::updateAITrafficAnalysisStatus(const UpdateAITrafficAnalysisStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAITrafficAnalysisStatusWithOptions(request, runtime);
}

/**
 * @summary Updates an ACK cluster connector.
 *
 * @param request UpdateAckClusterConnectorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAckClusterConnectorResponse
 */
UpdateAckClusterConnectorResponse Client::updateAckClusterConnectorWithOptions(const UpdateAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.getConnectorId();
  }

  if (!!request.hasConnectorName()) {
    query["ConnectorName"] = request.getConnectorName();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
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
 * @summary Updates an ACK cluster connector.
 *
 * @param request UpdateAckClusterConnectorRequest
 * @return UpdateAckClusterConnectorResponse
 */
UpdateAckClusterConnectorResponse Client::updateAckClusterConnector(const UpdateAckClusterConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAckClusterConnectorWithOptions(request, runtime);
}

/**
 * @summary Modifies the status of an ACL check detail.
 *
 * @description ## QPS limits
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request UpdateAclCheckDetailStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAclCheckDetailStatusResponse
 */
UpdateAclCheckDetailStatusResponse Client::updateAclCheckDetailStatusWithOptions(const UpdateAclCheckDetailStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
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
 * @summary Modifies the status of an ACL check detail.
 *
 * @description ## QPS limits
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request UpdateAclCheckDetailStatusRequest
 * @return UpdateAclCheckDetailStatusResponse
 */
UpdateAclCheckDetailStatusResponse Client::updateAclCheckDetailStatus(const UpdateAclCheckDetailStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAclCheckDetailStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies multiple custom application rules in batches. You can modify up to 20 rules at a time. The template to which a rule belongs is determined by the rule ID, so you do not need to specify the template ID.
 *
 * @param tmpReq UpdateApplicationCustomRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationCustomRulesResponse
 */
UpdateApplicationCustomRulesResponse Client::updateApplicationCustomRulesWithOptions(const UpdateApplicationCustomRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateApplicationCustomRulesShrinkRequest request = UpdateApplicationCustomRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRules(), "Rules", "json"));
  }

  json query = {};
  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.getRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationCustomRules"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationCustomRulesResponse>();
}

/**
 * @summary Modifies multiple custom application rules in batches. You can modify up to 20 rules at a time. The template to which a rule belongs is determined by the rule ID, so you do not need to specify the template ID.
 *
 * @param request UpdateApplicationCustomRulesRequest
 * @return UpdateApplicationCustomRulesResponse
 */
UpdateApplicationCustomRulesResponse Client::updateApplicationCustomRules(const UpdateApplicationCustomRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationCustomRulesWithOptions(request, runtime);
}

/**
 * @summary Modifies the name, switch status, action for unidentified applications, or custom actions for built-in applications of an application template. The template ID must belong to the current Alibaba Cloud account.
 *
 * @description ## QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this API operation at a reasonable frequency.
 *
 * @param tmpReq UpdateApplicationTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationTemplateResponse
 */
UpdateApplicationTemplateResponse Client::updateApplicationTemplateWithOptions(const UpdateApplicationTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateApplicationTemplateShrinkRequest request = UpdateApplicationTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddBuiltInApplicationCustomActions()) {
    request.setAddBuiltInApplicationCustomActionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddBuiltInApplicationCustomActions(), "AddBuiltInApplicationCustomActions", "json"));
  }

  if (!!tmpReq.hasRemoveBuiltInApplicationCustomActions()) {
    request.setRemoveBuiltInApplicationCustomActionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRemoveBuiltInApplicationCustomActions(), "RemoveBuiltInApplicationCustomActions", "json"));
  }

  json query = {};
  if (!!request.hasAddBuiltInApplicationCustomActionsShrink()) {
    query["AddBuiltInApplicationCustomActions"] = request.getAddBuiltInApplicationCustomActionsShrink();
  }

  if (!!request.hasApplicationTemplateId()) {
    query["ApplicationTemplateId"] = request.getApplicationTemplateId();
  }

  if (!!request.hasApplicationTemplateName()) {
    query["ApplicationTemplateName"] = request.getApplicationTemplateName();
  }

  if (!!request.hasBuiltInApplicationStatus()) {
    query["BuiltInApplicationStatus"] = request.getBuiltInApplicationStatus();
  }

  if (!!request.hasCustomRuleStatus()) {
    query["CustomRuleStatus"] = request.getCustomRuleStatus();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasRemoveBuiltInApplicationCustomActionsShrink()) {
    query["RemoveBuiltInApplicationCustomActions"] = request.getRemoveBuiltInApplicationCustomActionsShrink();
  }

  if (!!request.hasTemplateStatus()) {
    query["TemplateStatus"] = request.getTemplateStatus();
  }

  if (!!request.hasUnknownAction()) {
    query["UnknownAction"] = request.getUnknownAction();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationTemplate"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationTemplateResponse>();
}

/**
 * @summary Modifies the name, switch status, action for unidentified applications, or custom actions for built-in applications of an application template. The template ID must belong to the current Alibaba Cloud account.
 *
 * @description ## QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this API operation at a reasonable frequency.
 *
 * @param request UpdateApplicationTemplateRequest
 * @return UpdateApplicationTemplateResponse
 */
UpdateApplicationTemplateResponse Client::updateApplicationTemplate(const UpdateApplicationTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationTemplateWithOptions(request, runtime);
}

/**
 * @summary Enables the application control or web filtering feature for the current Alibaba Cloud account. This operation only supports enabling the feature. Disabling is not supported. This feature is not supported for Finance Cloud Free Edition or pay-as-you-go 1.0 instances.
 *
 * @param request UpdateFirewallFeatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFirewallFeatureResponse
 */
UpdateFirewallFeatureResponse Client::updateFirewallFeatureWithOptions(const UpdateFirewallFeatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeatureName()) {
    query["FeatureName"] = request.getFeatureName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFirewallFeature"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFirewallFeatureResponse>();
}

/**
 * @summary Enables the application control or web filtering feature for the current Alibaba Cloud account. This operation only supports enabling the feature. Disabling is not supported. This feature is not supported for Finance Cloud Free Edition or pay-as-you-go 1.0 instances.
 *
 * @param request UpdateFirewallFeatureRequest
 * @return UpdateFirewallFeatureResponse
 */
UpdateFirewallFeatureResponse Client::updateFirewallFeature(const UpdateFirewallFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFirewallFeatureWithOptions(request, runtime);
}

/**
 * @summary Updates the status of the Internet Border switch module for pay-as-you-go users.
 *
 * @param request UpdatePostpayUserInternetStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePostpayUserInternetStatusResponse
 */
UpdatePostpayUserInternetStatusResponse Client::updatePostpayUserInternetStatusWithOptions(const UpdatePostpayUserInternetStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOperate()) {
    query["Operate"] = request.getOperate();
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
 * @summary Updates the status of the Internet Border switch module for pay-as-you-go users.
 *
 * @param request UpdatePostpayUserInternetStatusRequest
 * @return UpdatePostpayUserInternetStatusResponse
 */
UpdatePostpayUserInternetStatusResponse Client::updatePostpayUserInternetStatus(const UpdatePostpayUserInternetStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePostpayUserInternetStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the status of a NAT border firewall for a pay-as-you-go instance.
 *
 * @param request UpdatePostpayUserNatStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePostpayUserNatStatusResponse
 */
UpdatePostpayUserNatStatusResponse Client::updatePostpayUserNatStatusWithOptions(const UpdatePostpayUserNatStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOperate()) {
    query["Operate"] = request.getOperate();
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
 * @summary Updates the status of a NAT border firewall for a pay-as-you-go instance.
 *
 * @param request UpdatePostpayUserNatStatusRequest
 * @return UpdatePostpayUserNatStatusResponse
 */
UpdatePostpayUserNatStatusResponse Client::updatePostpayUserNatStatus(const UpdatePostpayUserNatStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePostpayUserNatStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the status of the VPC firewall switch module for pay-as-you-go users.
 *
 * @param request UpdatePostpayUserVpcStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePostpayUserVpcStatusResponse
 */
UpdatePostpayUserVpcStatusResponse Client::updatePostpayUserVpcStatusWithOptions(const UpdatePostpayUserVpcStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOperate()) {
    query["Operate"] = request.getOperate();
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
 * @summary Updates the status of the VPC firewall switch module for pay-as-you-go users.
 *
 * @param request UpdatePostpayUserVpcStatusRequest
 * @return UpdatePostpayUserVpcStatusResponse
 */
UpdatePostpayUserVpcStatusResponse Client::updatePostpayUserVpcStatus(const UpdatePostpayUserVpcStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePostpayUserVpcStatusWithOptions(request, runtime);
}

/**
 * @summary Updates a NAT border firewall.
 *
 * @param request UpdateSecurityProxyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSecurityProxyResponse
 */
UpdateSecurityProxyResponse Client::updateSecurityProxyWithOptions(const UpdateSecurityProxyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasProxyId()) {
    query["ProxyId"] = request.getProxyId();
  }

  if (!!request.hasProxyName()) {
    query["ProxyName"] = request.getProxyName();
  }

  if (!!request.hasStrictMode()) {
    query["StrictMode"] = request.getStrictMode();
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
 * @summary Updates a NAT border firewall.
 *
 * @param request UpdateSecurityProxyRequest
 * @return UpdateSecurityProxyResponse
 */
UpdateSecurityProxyResponse Client::updateSecurityProxy(const UpdateSecurityProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSecurityProxyWithOptions(request, runtime);
}

/**
 * @summary Modifies the actions and match conditions of web filtering rules in batches. You can modify up to 20 rules at a time, and the rule IDs in the list must be unique.
 *
 * @param tmpReq UpdateWebFilterRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWebFilterRulesResponse
 */
UpdateWebFilterRulesResponse Client::updateWebFilterRulesWithOptions(const UpdateWebFilterRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWebFilterRulesShrinkRequest request = UpdateWebFilterRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRules(), "Rules", "json"));
  }

  json query = {};
  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.getRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWebFilterRules"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWebFilterRulesResponse>();
}

/**
 * @summary Modifies the actions and match conditions of web filtering rules in batches. You can modify up to 20 rules at a time, and the rule IDs in the list must be unique.
 *
 * @param request UpdateWebFilterRulesRequest
 * @return UpdateWebFilterRulesResponse
 */
UpdateWebFilterRulesResponse Client::updateWebFilterRules(const UpdateWebFilterRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWebFilterRulesWithOptions(request, runtime);
}

/**
 * @summary Modifies the name, status, or description of a web filtering template. The template ID must belong to the current Alibaba Cloud account.
 *
 * @param request UpdateWebFilterTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWebFilterTemplateResponse
 */
UpdateWebFilterTemplateResponse Client::updateWebFilterTemplateWithOptions(const UpdateWebFilterTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasWebFilterTemplateId()) {
    query["WebFilterTemplateId"] = request.getWebFilterTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWebFilterTemplate"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWebFilterTemplateResponse>();
}

/**
 * @summary Modifies the name, status, or description of a web filtering template. The template ID must belong to the current Alibaba Cloud account.
 *
 * @param request UpdateWebFilterTemplateRequest
 * @return UpdateWebFilterTemplateResponse
 */
UpdateWebFilterTemplateResponse Client::updateWebFilterTemplate(const UpdateWebFilterTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWebFilterTemplateWithOptions(request, runtime);
}

/**
 * @summary Restores an access control backup.
 *
 * @param request UseAclBackupDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UseAclBackupDataResponse
 */
UseAclBackupDataResponse Client::useAclBackupDataWithOptions(const UseAclBackupDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackUpTime()) {
    query["BackUpTime"] = request.getBackUpTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UseAclBackupData"},
    {"version" , "2017-12-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UseAclBackupDataResponse>();
}

/**
 * @summary Restores an access control backup.
 *
 * @param request UseAclBackupDataRequest
 * @return UseAclBackupDataResponse
 */
UseAclBackupDataResponse Client::useAclBackupData(const UseAclBackupDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return useAclBackupDataWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Cloudfw20171207