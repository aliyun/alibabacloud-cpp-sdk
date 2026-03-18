#include <darabonba/Core.hpp>
#include <alibabacloud/Ddosbgp20180720.hpp>
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
using namespace AlibabaCloud::Ddosbgp20180720::Models;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{

AlibabaCloud::Ddosbgp20180720::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "ddosbgp.aliyuncs.com"},
    {"cn-beijing" , "ddosbgp.aliyuncs.com"},
    {"cn-zhangjiakou" , "ddosbgp.aliyuncs.com"},
    {"cn-huhehaote" , "ddosbgp.aliyuncs.com"},
    {"cn-hangzhou" , "ddosbgp.aliyuncs.com"},
    {"cn-shanghai" , "ddosbgp.aliyuncs.com"},
    {"cn-shenzhen" , "ddosbgp.aliyuncs.com"},
    {"ap-northeast-1" , "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3" , "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"cn-chengdu" , "ddosbgp.aliyuncs.com"},
    {"eu-central-1" , "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1" , "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"me-east-1" , "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"cn-hangzhou-finance" , "ddosbgp.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "ddosbgp.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "ddosbgp.aliyuncs.com"},
    {"cn-north-2-gov-1" , "ddosbgp.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("ddosbgp", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds IP addresses to an Anti-DDoS Origin instance.
 *
 * @param request AddIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddIpResponse
 */
AddIpResponse Client::addIpWithOptions(const AddIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIpList()) {
    query["IpList"] = request.getIpList();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddIp"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddIpResponse>();
}

/**
 * @summary Adds IP addresses to an Anti-DDoS Origin instance.
 *
 * @param request AddIpRequest
 * @return AddIpResponse
 */
AddIpResponse Client::addIp(const AddIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addIpWithOptions(request, runtime);
}

/**
 * @summary Adds members to a resource directory.
 *
 * @description Only a delegated administrator account or the management account of a resource directory can be used to add members to the resource directory.
 *
 * @param tmpReq AddRdMemberListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRdMemberListResponse
 */
AddRdMemberListResponse Client::addRdMemberListWithOptions(const AddRdMemberListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddRdMemberListShrinkRequest request = AddRdMemberListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMemberList()) {
    request.setMemberListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMemberList(), "MemberList", "json"));
  }

  json query = {};
  if (!!request.hasMemberListShrink()) {
    query["MemberList"] = request.getMemberListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddRdMemberList"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRdMemberListResponse>();
}

/**
 * @summary Adds members to a resource directory.
 *
 * @description Only a delegated administrator account or the management account of a resource directory can be used to add members to the resource directory.
 *
 * @param request AddRdMemberListRequest
 * @return AddRdMemberListResponse
 */
AddRdMemberListResponse Client::addRdMemberList(const AddRdMemberListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRdMemberListWithOptions(request, runtime);
}

/**
 * @summary Associates an asset with an Anti-DDoS Origin instance of a paid edition.
 *
 * @param tmpReq AttachAssetGroupToInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachAssetGroupToInstanceResponse
 */
AttachAssetGroupToInstanceResponse Client::attachAssetGroupToInstanceWithOptions(const AttachAssetGroupToInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AttachAssetGroupToInstanceShrinkRequest request = AttachAssetGroupToInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssetGroupList()) {
    request.setAssetGroupListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssetGroupList(), "AssetGroupList", "json"));
  }

  json query = {};
  if (!!request.hasAssetGroupListShrink()) {
    query["AssetGroupList"] = request.getAssetGroupListShrink();
  }

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
    {"action" , "AttachAssetGroupToInstance"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachAssetGroupToInstanceResponse>();
}

/**
 * @summary Associates an asset with an Anti-DDoS Origin instance of a paid edition.
 *
 * @param request AttachAssetGroupToInstanceRequest
 * @return AttachAssetGroupToInstanceResponse
 */
AttachAssetGroupToInstanceResponse Client::attachAssetGroupToInstance(const AttachAssetGroupToInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachAssetGroupToInstanceWithOptions(request, runtime);
}

/**
 * @summary Associates a mitigation policy to a protected object.
 *
 * @param tmpReq AttachToPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachToPolicyResponse
 */
AttachToPolicyResponse Client::attachToPolicyWithOptions(const AttachToPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AttachToPolicyShrinkRequest request = AttachToPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIpPortProtocolList()) {
    request.setIpPortProtocolListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIpPortProtocolList(), "IpPortProtocolList", "json"));
  }

  json query = {};
  if (!!request.hasIpPortProtocolListShrink()) {
    query["IpPortProtocolList"] = request.getIpPortProtocolListShrink();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasPortVersion()) {
    query["PortVersion"] = request.getPortVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachToPolicy"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachToPolicyResponse>();
}

/**
 * @summary Associates a mitigation policy to a protected object.
 *
 * @param request AttachToPolicyRequest
 * @return AttachToPolicyResponse
 */
AttachToPolicyResponse Client::attachToPolicy(const AttachToPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachToPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries whether Anti-DDoS Origin is authorized to access Simple Log Service.
 *
 * @param request CheckAccessLogAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAccessLogAuthResponse
 */
CheckAccessLogAuthResponse Client::checkAccessLogAuthWithOptions(const CheckAccessLogAuthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckAccessLogAuth"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAccessLogAuthResponse>();
}

/**
 * @summary Queries whether Anti-DDoS Origin is authorized to access Simple Log Service.
 *
 * @param request CheckAccessLogAuthRequest
 * @return CheckAccessLogAuthResponse
 */
CheckAccessLogAuthResponse Client::checkAccessLogAuth(const CheckAccessLogAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkAccessLogAuthWithOptions(request, runtime);
}

/**
 * @summary Queries whether Anti-DDoS Origin is authorized to obtain information about the assets within the current Alibaba Cloud account.
 *
 * @description You can call the CheckGrant operation to query whether Anti-DDoS Origin is authorized to obtain information about the assets within the current Alibaba Cloud account.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CheckGrantRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckGrantResponse
 */
CheckGrantResponse Client::checkGrantWithOptions(const CheckGrantRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckGrant"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckGrantResponse>();
}

/**
 * @summary Queries whether Anti-DDoS Origin is authorized to obtain information about the assets within the current Alibaba Cloud account.
 *
 * @description You can call the CheckGrant operation to query whether Anti-DDoS Origin is authorized to obtain information about the assets within the current Alibaba Cloud account.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CheckGrantRequest
 * @return CheckGrantResponse
 */
CheckGrantResponse Client::checkGrant(const CheckGrantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkGrantWithOptions(request, runtime);
}

/**
 * @summary Creates a mitigation policy.
 *
 * @param request CreatePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicyWithOptions(const CreatePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPortVersion()) {
    query["PortVersion"] = request.getPortVersion();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePolicy"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolicyResponse>();
}

/**
 * @summary Creates a mitigation policy.
 *
 * @param request CreatePolicyRequest
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicy(const CreatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyWithOptions(request, runtime);
}

/**
 * @summary Deactivates blackhole filtering for a protected IP address.
 *
 * @description You can call the DeleteBlackhole operation to deactivate blackhole filtering for a protected IP address.
 * Before you call this operation, you can call the [DescribePackIpList](https://help.aliyun.com/document_detail/118701.html) operation to query the protection status of the IP addresses that are protected by your Anti-DDoS Origin instance. For example, you can query whether blackhole filtering is triggered for an IP address.
 * ### [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteBlackholeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBlackholeResponse
 */
DeleteBlackholeResponse Client::deleteBlackholeWithOptions(const DeleteBlackholeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBlackhole"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBlackholeResponse>();
}

/**
 * @summary Deactivates blackhole filtering for a protected IP address.
 *
 * @description You can call the DeleteBlackhole operation to deactivate blackhole filtering for a protected IP address.
 * Before you call this operation, you can call the [DescribePackIpList](https://help.aliyun.com/document_detail/118701.html) operation to query the protection status of the IP addresses that are protected by your Anti-DDoS Origin instance. For example, you can query whether blackhole filtering is triggered for an IP address.
 * ### [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteBlackholeRequest
 * @return DeleteBlackholeResponse
 */
DeleteBlackholeResponse Client::deleteBlackhole(const DeleteBlackholeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBlackholeWithOptions(request, runtime);
}

/**
 * @summary Removes specific IP addresses from an Anti-DDoS Origin instance.
 *
 * @description The Anti-DDoS Origin Enterprise instance no longer protects the IP addresses that are removed.
 *
 * @param request DeleteIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIpResponse
 */
DeleteIpResponse Client::deleteIpWithOptions(const DeleteIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIpList()) {
    query["IpList"] = request.getIpList();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIp"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIpResponse>();
}

/**
 * @summary Removes specific IP addresses from an Anti-DDoS Origin instance.
 *
 * @description The Anti-DDoS Origin Enterprise instance no longer protects the IP addresses that are removed.
 *
 * @param request DeleteIpRequest
 * @return DeleteIpResponse
 */
DeleteIpResponse Client::deleteIp(const DeleteIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIpWithOptions(request, runtime);
}

/**
 * @summary Deletes a mitigation policy.
 *
 * @description You cannot delete a mitigation policy to which a protected object is added.
 *
 * @param request DeletePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicyWithOptions(const DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePolicy"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyResponse>();
}

/**
 * @summary Deletes a mitigation policy.
 *
 * @description You cannot delete a mitigation policy to which a protected object is added.
 *
 * @param request DeletePolicyRequest
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicy(const DeletePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes members.
 *
 * @description Only a delegated administrator account or the management account of a resource directory can be used to delete members.
 *
 * @param tmpReq DeleteRdMemberListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRdMemberListResponse
 */
DeleteRdMemberListResponse Client::deleteRdMemberListWithOptions(const DeleteRdMemberListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteRdMemberListShrinkRequest request = DeleteRdMemberListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMemberList()) {
    request.setMemberListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMemberList(), "MemberList", "json"));
  }

  json query = {};
  if (!!request.hasMemberListShrink()) {
    query["MemberList"] = request.getMemberListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRdMemberList"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRdMemberListResponse>();
}

/**
 * @summary Deletes members.
 *
 * @description Only a delegated administrator account or the management account of a resource directory can be used to delete members.
 *
 * @param request DeleteRdMemberListRequest
 * @return DeleteRdMemberListResponse
 */
DeleteRdMemberListResponse Client::deleteRdMemberList(const DeleteRdMemberListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRdMemberListWithOptions(request, runtime);
}

/**
 * @summary Queries the association between an asset and an Anti-DDoS Origin instance of a paid edition.
 *
 * @param request DescribeAssetGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAssetGroupResponse
 */
DescribeAssetGroupResponse Client::describeAssetGroupWithOptions(const DescribeAssetGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAssetGroup"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAssetGroupResponse>();
}

/**
 * @summary Queries the association between an asset and an Anti-DDoS Origin instance of a paid edition.
 *
 * @param request DescribeAssetGroupRequest
 * @return DescribeAssetGroupResponse
 */
DescribeAssetGroupResponse Client::describeAssetGroup(const DescribeAssetGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAssetGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the association between an asset and an Anti-DDoS Origin instance of a paid edition.
 *
 * @param request DescribeAssetGroupToInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAssetGroupToInstanceResponse
 */
DescribeAssetGroupToInstanceResponse Client::describeAssetGroupToInstanceWithOptions(const DescribeAssetGroupToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMemberUid()) {
    query["MemberUid"] = request.getMemberUid();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAssetGroupToInstance"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAssetGroupToInstanceResponse>();
}

/**
 * @summary Queries the association between an asset and an Anti-DDoS Origin instance of a paid edition.
 *
 * @param request DescribeAssetGroupToInstanceRequest
 * @return DescribeAssetGroupToInstanceResponse
 */
DescribeAssetGroupToInstanceResponse Client::describeAssetGroupToInstance(const DescribeAssetGroupToInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAssetGroupToInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the details about the DDoS attack events that occurred on an Anti-DDoS Origin instance.
 *
 * @description You can call the DescribeDdosEvent operation to query the details about the DDoS attack events that occurred on an Anti-DDoS Origin instance by page. The details include the start time, end time, attacked IP address, and status of each event.
 * ### [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDdosEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDdosEventResponse
 */
DescribeDdosEventResponse Client::describeDdosEventWithOptions(const DescribeDdosEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDdosEvent"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDdosEventResponse>();
}

/**
 * @summary Queries the details about the DDoS attack events that occurred on an Anti-DDoS Origin instance.
 *
 * @description You can call the DescribeDdosEvent operation to query the details about the DDoS attack events that occurred on an Anti-DDoS Origin instance by page. The details include the start time, end time, attacked IP address, and status of each event.
 * ### [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeDdosEventRequest
 * @return DescribeDdosEventResponse
 */
DescribeDdosEventResponse Client::describeDdosEvent(const DescribeDdosEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDdosEventWithOptions(request, runtime);
}

/**
 * @summary Queries the bill of an Anti-DDoS Origin (Pay-as-you-go) instance.
 *
 * @param request DescribeDdosOriginInstanceBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDdosOriginInstanceBillResponse
 */
DescribeDdosOriginInstanceBillResponse Client::describeDdosOriginInstanceBillWithOptions(const DescribeDdosOriginInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIsShowList()) {
    query["IsShowList"] = request.getIsShowList();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDdosOriginInstanceBill"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDdosOriginInstanceBillResponse>();
}

/**
 * @summary Queries the bill of an Anti-DDoS Origin (Pay-as-you-go) instance.
 *
 * @param request DescribeDdosOriginInstanceBillRequest
 * @return DescribeDdosOriginInstanceBillResponse
 */
DescribeDdosOriginInstanceBillResponse Client::describeDdosOriginInstanceBill(const DescribeDdosOriginInstanceBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDdosOriginInstanceBillWithOptions(request, runtime);
}

/**
 * @summary Queries the number of assets that are in an abnormal state and the number of Anti-DDoS Origin instances that are about to expire. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses.
 *
 * @description ## Usage notes
 * You can call the DescribeExcpetionCount operation to query the number of assets that are in an abnormal state and the number of Anti-DDoS Origin instances that are about to expire in a specific region. For example, if blackhole filtering is triggered for an IP address, the IP address is in an abnormal state. An instance whose remaining validity period is less than seven days is considered as an instance that is about to expire.
 *
 * @param request DescribeExcpetionCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExcpetionCountResponse
 */
DescribeExcpetionCountResponse Client::describeExcpetionCountWithOptions(const DescribeExcpetionCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExcpetionCount"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExcpetionCountResponse>();
}

/**
 * @summary Queries the number of assets that are in an abnormal state and the number of Anti-DDoS Origin instances that are about to expire. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses.
 *
 * @description ## Usage notes
 * You can call the DescribeExcpetionCount operation to query the number of assets that are in an abnormal state and the number of Anti-DDoS Origin instances that are about to expire in a specific region. For example, if blackhole filtering is triggered for an IP address, the IP address is in an abnormal state. An instance whose remaining validity period is less than seven days is considered as an instance that is about to expire.
 *
 * @param request DescribeExcpetionCountRequest
 * @return DescribeExcpetionCountResponse
 */
DescribeExcpetionCountResponse Client::describeExcpetionCount(const DescribeExcpetionCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExcpetionCountWithOptions(request, runtime);
}

/**
 * @summary Queries the details of all Anti-DDoS Origin instances.
 *
 * @description Queries the details of all Anti-DDoS Origin instances.
 *
 * @param request DescribeInstanceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceListResponse
 */
DescribeInstanceListResponse Client::describeInstanceListWithOptions(const DescribeInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIdList()) {
    query["InstanceIdList"] = request.getInstanceIdList();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasInstanceTypeList()) {
    query["InstanceTypeList"] = request.getInstanceTypeList();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasOrderby()) {
    query["Orderby"] = request.getOrderby();
  }

  if (!!request.hasOrderdire()) {
    query["Orderdire"] = request.getOrderdire();
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

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
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
    {"action" , "DescribeInstanceList"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceListResponse>();
}

/**
 * @summary Queries the details of all Anti-DDoS Origin instances.
 *
 * @description Queries the details of all Anti-DDoS Origin instances.
 *
 * @param request DescribeInstanceListRequest
 * @return DescribeInstanceListResponse
 */
DescribeInstanceListResponse Client::describeInstanceList(const DescribeInstanceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceListWithOptions(request, runtime);
}

/**
 * @summary Queries the specifications of a specific Anti-DDoS Origin instance.
 *
 * @param request DescribeInstanceSpecsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceSpecsResponse
 */
DescribeInstanceSpecsResponse Client::describeInstanceSpecsWithOptions(const DescribeInstanceSpecsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIdList()) {
    query["InstanceIdList"] = request.getInstanceIdList();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceSpecs"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceSpecsResponse>();
}

/**
 * @summary Queries the specifications of a specific Anti-DDoS Origin instance.
 *
 * @param request DescribeInstanceSpecsRequest
 * @return DescribeInstanceSpecsResponse
 */
DescribeInstanceSpecsResponse Client::describeInstanceSpecs(const DescribeInstanceSpecsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceSpecsWithOptions(request, runtime);
}

/**
 * @summary Queries the operation logs of an Anti-DDoS Origin instance.
 *
 * @description You can call the DescribeOpEntities operation to query the operation logs of an instance by page.
 * ### Limit
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeOpEntitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOpEntitiesResponse
 */
DescribeOpEntitiesResponse Client::describeOpEntitiesWithOptions(const DescribeOpEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOpAction()) {
    query["OpAction"] = request.getOpAction();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDir()) {
    query["OrderDir"] = request.getOrderDir();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOpEntities"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOpEntitiesResponse>();
}

/**
 * @summary Queries the operation logs of an Anti-DDoS Origin instance.
 *
 * @description You can call the DescribeOpEntities operation to query the operation logs of an instance by page.
 * ### Limit
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeOpEntitiesRequest
 * @return DescribeOpEntitiesResponse
 */
DescribeOpEntitiesResponse Client::describeOpEntities(const DescribeOpEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOpEntitiesWithOptions(request, runtime);
}

/**
 * @summary Queries the IP addresses that are protected by a specific Anti-DDoS Origin instance.
 *
 * @description You can call the DescribePackIpList operation to query the details about each IP address that is protected by a specific Anti-DDoS Origin instance by page. The details include the IP address and the type of the cloud asset to which the IP address belongs. The details also include the status of the IP address, such as whether blackhole filtering is triggered for the IP address.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribePackIpListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePackIpListResponse
 */
DescribePackIpListResponse Client::describePackIpListWithOptions(const DescribePackIpListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
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

  if (!!request.hasProductName()) {
    query["ProductName"] = request.getProductName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePackIpList"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePackIpListResponse>();
}

/**
 * @summary Queries the IP addresses that are protected by a specific Anti-DDoS Origin instance.
 *
 * @description You can call the DescribePackIpList operation to query the details about each IP address that is protected by a specific Anti-DDoS Origin instance by page. The details include the IP address and the type of the cloud asset to which the IP address belongs. The details also include the status of the IP address, such as whether blackhole filtering is triggered for the IP address.  
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribePackIpListRequest
 * @return DescribePackIpListResponse
 */
DescribePackIpListResponse Client::describePackIpList(const DescribePackIpListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePackIpListWithOptions(request, runtime);
}

/**
 * @summary Queries members in a resource directory.
 *
 * @param request DescribeRdMemberListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRdMemberListResponse
 */
DescribeRdMemberListResponse Client::describeRdMemberListWithOptions(const DescribeRdMemberListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceDirectoryId()) {
    query["ResourceDirectoryId"] = request.getResourceDirectoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRdMemberList"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRdMemberListResponse>();
}

/**
 * @summary Queries members in a resource directory.
 *
 * @param request DescribeRdMemberListRequest
 * @return DescribeRdMemberListResponse
 */
DescribeRdMemberListResponse Client::describeRdMemberList(const DescribeRdMemberListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdMemberListWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the multi-account management feature.
 *
 * @param request DescribeRdStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRdStatusResponse
 */
DescribeRdStatusResponse Client::describeRdStatusWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeRdStatus"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRdStatusResponse>();
}

/**
 * @summary Queries the status of the multi-account management feature.
 *
 * @return DescribeRdStatusResponse
 */
DescribeRdStatusResponse Client::describeRdStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRdStatusWithOptions(runtime);
}

/**
 * @summary Queries the regions of assets that can be protected by Anti-DDoS Origin Enterprise in a specific region.
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2018-07-20"},
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
 * @summary Queries the regions of assets that can be protected by Anti-DDoS Origin Enterprise in a specific region.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries traffic statistics of an Anti-DDoS Origin instance within a specific time period.
 *
 * @description You can call the DescribeTraffic operation to query traffic statistics of an Anti-DDoS Origin instance within a specific time period.  
 * >  When you call this operation, you must configure the **InstanceId** parameter to specify the Anti-DDoS Origin instance whose traffic statistics you want to query.  
 * ## Limits
 * You can call this operation once per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeTrafficRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTrafficResponse
 */
DescribeTrafficResponse Client::describeTrafficWithOptions(const DescribeTrafficRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFlowType()) {
    query["FlowType"] = request.getFlowType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasIpnet()) {
    query["Ipnet"] = request.getIpnet();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTraffic"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTrafficResponse>();
}

/**
 * @summary Queries traffic statistics of an Anti-DDoS Origin instance within a specific time period.
 *
 * @description You can call the DescribeTraffic operation to query traffic statistics of an Anti-DDoS Origin instance within a specific time period.  
 * >  When you call this operation, you must configure the **InstanceId** parameter to specify the Anti-DDoS Origin instance whose traffic statistics you want to query.  
 * ## Limits
 * You can call this operation once per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeTrafficRequest
 * @return DescribeTrafficResponse
 */
DescribeTrafficResponse Client::describeTraffic(const DescribeTrafficRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTrafficWithOptions(request, runtime);
}

/**
 * @summary Removes protected objects from a mitigation policy.
 *
 * @param tmpReq DetachFromPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachFromPolicyResponse
 */
DetachFromPolicyResponse Client::detachFromPolicyWithOptions(const DetachFromPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetachFromPolicyShrinkRequest request = DetachFromPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIpPortProtocolList()) {
    request.setIpPortProtocolListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIpPortProtocolList(), "IpPortProtocolList", "json"));
  }

  json query = {};
  if (!!request.hasIpPortProtocolListShrink()) {
    query["IpPortProtocolList"] = request.getIpPortProtocolListShrink();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasPortVersion()) {
    query["PortVersion"] = request.getPortVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachFromPolicy"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachFromPolicyResponse>();
}

/**
 * @summary Removes protected objects from a mitigation policy.
 *
 * @param request DetachFromPolicyRequest
 * @return DetachFromPolicyResponse
 */
DetachFromPolicyResponse Client::detachFromPolicy(const DetachFromPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachFromPolicyWithOptions(request, runtime);
}

/**
 * @summary Dissociates an asset from an Anti-DDoS Origin instance of a paid edition.
 *
 * @param tmpReq DettachAssetGroupToInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DettachAssetGroupToInstanceResponse
 */
DettachAssetGroupToInstanceResponse Client::dettachAssetGroupToInstanceWithOptions(const DettachAssetGroupToInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DettachAssetGroupToInstanceShrinkRequest request = DettachAssetGroupToInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssetGroupList()) {
    request.setAssetGroupListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssetGroupList(), "AssetGroupList", "json"));
  }

  json query = {};
  if (!!request.hasAssetGroupListShrink()) {
    query["AssetGroupList"] = request.getAssetGroupListShrink();
  }

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
    {"action" , "DettachAssetGroupToInstance"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DettachAssetGroupToInstanceResponse>();
}

/**
 * @summary Dissociates an asset from an Anti-DDoS Origin instance of a paid edition.
 *
 * @param request DettachAssetGroupToInstanceRequest
 * @return DettachAssetGroupToInstanceResponse
 */
DettachAssetGroupToInstanceResponse Client::dettachAssetGroupToInstance(const DettachAssetGroupToInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dettachAssetGroupToInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries whether Simple Log Service is activated.
 *
 * @param request GetSlsOpenStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSlsOpenStatusResponse
 */
GetSlsOpenStatusResponse Client::getSlsOpenStatusWithOptions(const GetSlsOpenStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSlsOpenStatus"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSlsOpenStatusResponse>();
}

/**
 * @summary Queries whether Simple Log Service is activated.
 *
 * @param request GetSlsOpenStatusRequest
 * @return GetSlsOpenStatusResponse
 */
GetSlsOpenStatusResponse Client::getSlsOpenStatus(const GetSlsOpenStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSlsOpenStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the Anti-DDoS Origin instances for which log analysis is enabled.
 *
 * @param request ListOpenedAccessLogInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOpenedAccessLogInstancesResponse
 */
ListOpenedAccessLogInstancesResponse Client::listOpenedAccessLogInstancesWithOptions(const ListOpenedAccessLogInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOpenedAccessLogInstances"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOpenedAccessLogInstancesResponse>();
}

/**
 * @summary Queries the Anti-DDoS Origin instances for which log analysis is enabled.
 *
 * @param request ListOpenedAccessLogInstancesRequest
 * @return ListOpenedAccessLogInstancesResponse
 */
ListOpenedAccessLogInstancesResponse Client::listOpenedAccessLogInstances(const ListOpenedAccessLogInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOpenedAccessLogInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries mitigation policies.
 *
 * @param request ListPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolicyResponse
 */
ListPolicyResponse Client::listPolicyWithOptions(const ListPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicy"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPolicyResponse>();
}

/**
 * @summary Queries mitigation policies.
 *
 * @param request ListPolicyRequest
 * @return ListPolicyResponse
 */
ListPolicyResponse Client::listPolicy(const ListPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries attachments to mitigation policies.
 *
 * @param tmpReq ListPolicyAttachmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolicyAttachmentResponse
 */
ListPolicyAttachmentResponse Client::listPolicyAttachmentWithOptions(const ListPolicyAttachmentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPolicyAttachmentShrinkRequest request = ListPolicyAttachmentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIpPortProtocolList()) {
    request.setIpPortProtocolListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIpPortProtocolList(), "IpPortProtocolList", "json"));
  }

  json query = {};
  if (!!request.hasIpPortProtocolListShrink()) {
    query["IpPortProtocolList"] = request.getIpPortProtocolListShrink();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasPolicyType()) {
    query["PolicyType"] = request.getPolicyType();
  }

  if (!!request.hasPortVersion()) {
    query["PortVersion"] = request.getPortVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPolicyAttachment"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPolicyAttachmentResponse>();
}

/**
 * @summary Queries attachments to mitigation policies.
 *
 * @param request ListPolicyAttachmentRequest
 * @return ListPolicyAttachmentResponse
 */
ListPolicyAttachmentResponse Client::listPolicyAttachment(const ListPolicyAttachmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicyAttachmentWithOptions(request, runtime);
}

/**
 * @summary Queries all tags.
 *
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
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

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagKeys"},
    {"version" , "2018-07-20"},
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
 * @summary Queries all tags.
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the relationship between Anti-DDoS Origin instances and tags.
 *
 * @description You can call the ListTagResources operation to query the tags that are added to Anti-DDoS Origin instances at a time.
 * ### [](#qps-)Limits
 * You can call this API operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
    {"version" , "2018-07-20"},
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
 * @summary Queries the relationship between Anti-DDoS Origin instances and tags.
 *
 * @description You can call the ListTagResources operation to query the tags that are added to Anti-DDoS Origin instances at a time.
 * ### [](#qps-)Limits
 * You can call this API operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies a mitigation policy.
 *
 * @description Modifies a mitigation policy.
 *
 * @param tmpReq ModifyPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPolicyResponse
 */
ModifyPolicyResponse Client::modifyPolicyWithOptions(const ModifyPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyPolicyShrinkRequest request = ModifyPolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContent()) {
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContent(), "Content", "json"));
  }

  json query = {};
  if (!!request.hasActionType()) {
    query["ActionType"] = request.getActionType();
  }

  if (!!request.hasContentShrink()) {
    query["Content"] = request.getContentShrink();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPortVersion()) {
    query["PortVersion"] = request.getPortVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPolicy"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPolicyResponse>();
}

/**
 * @summary Modifies a mitigation policy.
 *
 * @description Modifies a mitigation policy.
 *
 * @param request ModifyPolicyRequest
 * @return ModifyPolicyResponse
 */
ModifyPolicyResponse Client::modifyPolicy(const ModifyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the content of the mitigation policy.
 *
 * @description Make sure that all request parameters are configured when you call this operation. If any parameter is left empty, the configuration is deleted.
 *
 * @param tmpReq ModifyPolicyContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPolicyContentResponse
 */
ModifyPolicyContentResponse Client::modifyPolicyContentWithOptions(const ModifyPolicyContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyPolicyContentShrinkRequest request = ModifyPolicyContentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContent()) {
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContent(), "Content", "json"));
  }

  json query = {};
  if (!!request.hasContentShrink()) {
    query["Content"] = request.getContentShrink();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPortVersion()) {
    query["PortVersion"] = request.getPortVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPolicyContent"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPolicyContentResponse>();
}

/**
 * @summary Modifies the content of the mitigation policy.
 *
 * @description Make sure that all request parameters are configured when you call this operation. If any parameter is left empty, the configuration is deleted.
 *
 * @param request ModifyPolicyContentRequest
 * @return ModifyPolicyContentResponse
 */
ModifyPolicyContentResponse Client::modifyPolicyContent(const ModifyPolicyContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPolicyContentWithOptions(request, runtime);
}

/**
 * @summary Adds remarks for a single Anti-DDoS Origin instance.
 *
 * @description You can call the ModifyRemark operation to add remarks for a single Anti-DDoS Origin instance.
 * ### [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRemarkResponse
 */
ModifyRemarkResponse Client::modifyRemarkWithOptions(const ModifyRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRemark"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRemarkResponse>();
}

/**
 * @summary Adds remarks for a single Anti-DDoS Origin instance.
 *
 * @description You can call the ModifyRemark operation to add remarks for a single Anti-DDoS Origin instance.
 * ### [](#qps-)Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ModifyRemarkRequest
 * @return ModifyRemarkResponse
 */
ModifyRemarkResponse Client::modifyRemark(const ModifyRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRemarkWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group to which a cloud resource belongs.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2018-07-20"},
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
 * @summary Changes the resource group to which a cloud resource belongs.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Releases a pay-as-you-go Anti-DDoS Origin instance.
 *
 * @param request ReleaseDdosOriginInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseDdosOriginInstanceResponse
 */
ReleaseDdosOriginInstanceResponse Client::releaseDdosOriginInstanceWithOptions(const ReleaseDdosOriginInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseDdosOriginInstance"},
    {"version" , "2018-07-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseDdosOriginInstanceResponse>();
}

/**
 * @summary Releases a pay-as-you-go Anti-DDoS Origin instance.
 *
 * @param request ReleaseDdosOriginInstanceRequest
 * @return ReleaseDdosOriginInstanceResponse
 */
ReleaseDdosOriginInstanceResponse Client::releaseDdosOriginInstance(const ReleaseDdosOriginInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseDdosOriginInstanceWithOptions(request, runtime);
}

/**
 * @summary Add tags to Anti-DDoS Origin instances.
 *
 * @description You can call the TagResources operation to add tags to instances.
 * ### Limit
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
    {"version" , "2018-07-20"},
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
 * @summary Add tags to Anti-DDoS Origin instances.
 *
 * @description You can call the TagResources operation to add tags to instances.
 * ### Limit
 * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from Anti-DDoS Origin instances.
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
    {"version" , "2018-07-20"},
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
 * @summary Removes tags from Anti-DDoS Origin instances.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720