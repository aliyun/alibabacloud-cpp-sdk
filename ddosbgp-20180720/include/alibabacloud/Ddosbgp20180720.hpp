// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DDOSBGP20180720_HPP_
#define ALIBABACLOUD_DDOSBGP20180720_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ddosbgp20180720Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ddosbgp20180720.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds IP addresses to an Anti-DDoS Origin instance.
       *
       * @param request AddIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddIpResponse
       */
      Models::AddIpResponse addIpWithOptions(const Models::AddIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds IP addresses to an Anti-DDoS Origin instance.
       *
       * @param request AddIpRequest
       * @return AddIpResponse
       */
      Models::AddIpResponse addIp(const Models::AddIpRequest &request);

      /**
       * @summary Adds members to a resource directory.
       *
       * @description Only a delegated administrator account or the management account of a resource directory can be used to add members to the resource directory.
       *
       * @param tmpReq AddRdMemberListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRdMemberListResponse
       */
      Models::AddRdMemberListResponse addRdMemberListWithOptions(const Models::AddRdMemberListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds members to a resource directory.
       *
       * @description Only a delegated administrator account or the management account of a resource directory can be used to add members to the resource directory.
       *
       * @param request AddRdMemberListRequest
       * @return AddRdMemberListResponse
       */
      Models::AddRdMemberListResponse addRdMemberList(const Models::AddRdMemberListRequest &request);

      /**
       * @summary Associates an asset with an Anti-DDoS Origin instance of a paid edition.
       *
       * @param tmpReq AttachAssetGroupToInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachAssetGroupToInstanceResponse
       */
      Models::AttachAssetGroupToInstanceResponse attachAssetGroupToInstanceWithOptions(const Models::AttachAssetGroupToInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an asset with an Anti-DDoS Origin instance of a paid edition.
       *
       * @param request AttachAssetGroupToInstanceRequest
       * @return AttachAssetGroupToInstanceResponse
       */
      Models::AttachAssetGroupToInstanceResponse attachAssetGroupToInstance(const Models::AttachAssetGroupToInstanceRequest &request);

      /**
       * @summary Associates a mitigation policy to a protected object.
       *
       * @param tmpReq AttachToPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachToPolicyResponse
       */
      Models::AttachToPolicyResponse attachToPolicyWithOptions(const Models::AttachToPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a mitigation policy to a protected object.
       *
       * @param request AttachToPolicyRequest
       * @return AttachToPolicyResponse
       */
      Models::AttachToPolicyResponse attachToPolicy(const Models::AttachToPolicyRequest &request);

      /**
       * @summary Queries whether Anti-DDoS Origin is authorized to access Simple Log Service.
       *
       * @param request CheckAccessLogAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckAccessLogAuthResponse
       */
      Models::CheckAccessLogAuthResponse checkAccessLogAuthWithOptions(const Models::CheckAccessLogAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether Anti-DDoS Origin is authorized to access Simple Log Service.
       *
       * @param request CheckAccessLogAuthRequest
       * @return CheckAccessLogAuthResponse
       */
      Models::CheckAccessLogAuthResponse checkAccessLogAuth(const Models::CheckAccessLogAuthRequest &request);

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
      Models::CheckGrantResponse checkGrantWithOptions(const Models::CheckGrantRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CheckGrantResponse checkGrant(const Models::CheckGrantRequest &request);

      /**
       * @summary Creates a mitigation policy.
       *
       * @param request CreatePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicyWithOptions(const Models::CreatePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a mitigation policy.
       *
       * @param request CreatePolicyRequest
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicy(const Models::CreatePolicyRequest &request);

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
      Models::DeleteBlackholeResponse deleteBlackholeWithOptions(const Models::DeleteBlackholeRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteBlackholeResponse deleteBlackhole(const Models::DeleteBlackholeRequest &request);

      /**
       * @summary Removes specific IP addresses from an Anti-DDoS Origin instance.
       *
       * @description The Anti-DDoS Origin Enterprise instance no longer protects the IP addresses that are removed.
       *
       * @param request DeleteIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpResponse
       */
      Models::DeleteIpResponse deleteIpWithOptions(const Models::DeleteIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes specific IP addresses from an Anti-DDoS Origin instance.
       *
       * @description The Anti-DDoS Origin Enterprise instance no longer protects the IP addresses that are removed.
       *
       * @param request DeleteIpRequest
       * @return DeleteIpResponse
       */
      Models::DeleteIpResponse deleteIp(const Models::DeleteIpRequest &request);

      /**
       * @summary Deletes a mitigation policy.
       *
       * @description You cannot delete a mitigation policy to which a protected object is added.
       *
       * @param request DeletePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicyWithOptions(const Models::DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a mitigation policy.
       *
       * @description You cannot delete a mitigation policy to which a protected object is added.
       *
       * @param request DeletePolicyRequest
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicy(const Models::DeletePolicyRequest &request);

      /**
       * @summary Deletes members.
       *
       * @description Only a delegated administrator account or the management account of a resource directory can be used to delete members.
       *
       * @param tmpReq DeleteRdMemberListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRdMemberListResponse
       */
      Models::DeleteRdMemberListResponse deleteRdMemberListWithOptions(const Models::DeleteRdMemberListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes members.
       *
       * @description Only a delegated administrator account or the management account of a resource directory can be used to delete members.
       *
       * @param request DeleteRdMemberListRequest
       * @return DeleteRdMemberListResponse
       */
      Models::DeleteRdMemberListResponse deleteRdMemberList(const Models::DeleteRdMemberListRequest &request);

      /**
       * @summary Queries the association between an asset and an Anti-DDoS Origin instance of a paid edition.
       *
       * @param request DescribeAssetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAssetGroupResponse
       */
      Models::DescribeAssetGroupResponse describeAssetGroupWithOptions(const Models::DescribeAssetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the association between an asset and an Anti-DDoS Origin instance of a paid edition.
       *
       * @param request DescribeAssetGroupRequest
       * @return DescribeAssetGroupResponse
       */
      Models::DescribeAssetGroupResponse describeAssetGroup(const Models::DescribeAssetGroupRequest &request);

      /**
       * @summary Queries the association between an asset and an Anti-DDoS Origin instance of a paid edition.
       *
       * @param request DescribeAssetGroupToInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAssetGroupToInstanceResponse
       */
      Models::DescribeAssetGroupToInstanceResponse describeAssetGroupToInstanceWithOptions(const Models::DescribeAssetGroupToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the association between an asset and an Anti-DDoS Origin instance of a paid edition.
       *
       * @param request DescribeAssetGroupToInstanceRequest
       * @return DescribeAssetGroupToInstanceResponse
       */
      Models::DescribeAssetGroupToInstanceResponse describeAssetGroupToInstance(const Models::DescribeAssetGroupToInstanceRequest &request);

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
      Models::DescribeDdosEventResponse describeDdosEventWithOptions(const Models::DescribeDdosEventRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeDdosEventResponse describeDdosEvent(const Models::DescribeDdosEventRequest &request);

      /**
       * @summary Queries the bill of an Anti-DDoS Origin (Pay-as-you-go) instance.
       *
       * @param request DescribeDdosOriginInstanceBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDdosOriginInstanceBillResponse
       */
      Models::DescribeDdosOriginInstanceBillResponse describeDdosOriginInstanceBillWithOptions(const Models::DescribeDdosOriginInstanceBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bill of an Anti-DDoS Origin (Pay-as-you-go) instance.
       *
       * @param request DescribeDdosOriginInstanceBillRequest
       * @return DescribeDdosOriginInstanceBillResponse
       */
      Models::DescribeDdosOriginInstanceBillResponse describeDdosOriginInstanceBill(const Models::DescribeDdosOriginInstanceBillRequest &request);

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
      Models::DescribeExcpetionCountResponse describeExcpetionCountWithOptions(const Models::DescribeExcpetionCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of assets that are in an abnormal state and the number of Anti-DDoS Origin instances that are about to expire. The assets can be elastic IP addresses (EIPs). The assets can also be Elastic Compute Service (ECS) instances or Server Load Balancer (SLB) instances that are assigned public IP addresses.
       *
       * @description ## Usage notes
       * You can call the DescribeExcpetionCount operation to query the number of assets that are in an abnormal state and the number of Anti-DDoS Origin instances that are about to expire in a specific region. For example, if blackhole filtering is triggered for an IP address, the IP address is in an abnormal state. An instance whose remaining validity period is less than seven days is considered as an instance that is about to expire.
       *
       * @param request DescribeExcpetionCountRequest
       * @return DescribeExcpetionCountResponse
       */
      Models::DescribeExcpetionCountResponse describeExcpetionCount(const Models::DescribeExcpetionCountRequest &request);

      /**
       * @summary Queries the details of all Anti-DDoS Origin instances.
       *
       * @description Queries the details of all Anti-DDoS Origin instances.
       *
       * @param request DescribeInstanceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceListResponse
       */
      Models::DescribeInstanceListResponse describeInstanceListWithOptions(const Models::DescribeInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of all Anti-DDoS Origin instances.
       *
       * @description Queries the details of all Anti-DDoS Origin instances.
       *
       * @param request DescribeInstanceListRequest
       * @return DescribeInstanceListResponse
       */
      Models::DescribeInstanceListResponse describeInstanceList(const Models::DescribeInstanceListRequest &request);

      /**
       * @summary Queries the specifications of a specific Anti-DDoS Origin instance.
       *
       * @param request DescribeInstanceSpecsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSpecsResponse
       */
      Models::DescribeInstanceSpecsResponse describeInstanceSpecsWithOptions(const Models::DescribeInstanceSpecsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications of a specific Anti-DDoS Origin instance.
       *
       * @param request DescribeInstanceSpecsRequest
       * @return DescribeInstanceSpecsResponse
       */
      Models::DescribeInstanceSpecsResponse describeInstanceSpecs(const Models::DescribeInstanceSpecsRequest &request);

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
      Models::DescribeOpEntitiesResponse describeOpEntitiesWithOptions(const Models::DescribeOpEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeOpEntitiesResponse describeOpEntities(const Models::DescribeOpEntitiesRequest &request);

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
      Models::DescribePackIpListResponse describePackIpListWithOptions(const Models::DescribePackIpListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribePackIpListResponse describePackIpList(const Models::DescribePackIpListRequest &request);

      /**
       * @summary Queries members in a resource directory.
       *
       * @param request DescribeRdMemberListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdMemberListResponse
       */
      Models::DescribeRdMemberListResponse describeRdMemberListWithOptions(const Models::DescribeRdMemberListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries members in a resource directory.
       *
       * @param request DescribeRdMemberListRequest
       * @return DescribeRdMemberListResponse
       */
      Models::DescribeRdMemberListResponse describeRdMemberList(const Models::DescribeRdMemberListRequest &request);

      /**
       * @summary Queries the status of the multi-account management feature.
       *
       * @param request DescribeRdStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRdStatusResponse
       */
      Models::DescribeRdStatusResponse describeRdStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the multi-account management feature.
       *
       * @return DescribeRdStatusResponse
       */
      Models::DescribeRdStatusResponse describeRdStatus();

      /**
       * @summary Queries the regions of assets that can be protected by Anti-DDoS Origin Enterprise in a specific region.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions of assets that can be protected by Anti-DDoS Origin Enterprise in a specific region.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

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
      Models::DescribeTrafficResponse describeTrafficWithOptions(const Models::DescribeTrafficRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeTrafficResponse describeTraffic(const Models::DescribeTrafficRequest &request);

      /**
       * @summary Removes protected objects from a mitigation policy.
       *
       * @param tmpReq DetachFromPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachFromPolicyResponse
       */
      Models::DetachFromPolicyResponse detachFromPolicyWithOptions(const Models::DetachFromPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes protected objects from a mitigation policy.
       *
       * @param request DetachFromPolicyRequest
       * @return DetachFromPolicyResponse
       */
      Models::DetachFromPolicyResponse detachFromPolicy(const Models::DetachFromPolicyRequest &request);

      /**
       * @summary Dissociates an asset from an Anti-DDoS Origin instance of a paid edition.
       *
       * @param tmpReq DettachAssetGroupToInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DettachAssetGroupToInstanceResponse
       */
      Models::DettachAssetGroupToInstanceResponse dettachAssetGroupToInstanceWithOptions(const Models::DettachAssetGroupToInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates an asset from an Anti-DDoS Origin instance of a paid edition.
       *
       * @param request DettachAssetGroupToInstanceRequest
       * @return DettachAssetGroupToInstanceResponse
       */
      Models::DettachAssetGroupToInstanceResponse dettachAssetGroupToInstance(const Models::DettachAssetGroupToInstanceRequest &request);

      /**
       * @summary Queries whether Simple Log Service is activated.
       *
       * @param request GetSlsOpenStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSlsOpenStatusResponse
       */
      Models::GetSlsOpenStatusResponse getSlsOpenStatusWithOptions(const Models::GetSlsOpenStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether Simple Log Service is activated.
       *
       * @param request GetSlsOpenStatusRequest
       * @return GetSlsOpenStatusResponse
       */
      Models::GetSlsOpenStatusResponse getSlsOpenStatus(const Models::GetSlsOpenStatusRequest &request);

      /**
       * @summary Queries the Anti-DDoS Origin instances for which log analysis is enabled.
       *
       * @param request ListOpenedAccessLogInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOpenedAccessLogInstancesResponse
       */
      Models::ListOpenedAccessLogInstancesResponse listOpenedAccessLogInstancesWithOptions(const Models::ListOpenedAccessLogInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Anti-DDoS Origin instances for which log analysis is enabled.
       *
       * @param request ListOpenedAccessLogInstancesRequest
       * @return ListOpenedAccessLogInstancesResponse
       */
      Models::ListOpenedAccessLogInstancesResponse listOpenedAccessLogInstances(const Models::ListOpenedAccessLogInstancesRequest &request);

      /**
       * @summary Queries mitigation policies.
       *
       * @param request ListPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicyResponse
       */
      Models::ListPolicyResponse listPolicyWithOptions(const Models::ListPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries mitigation policies.
       *
       * @param request ListPolicyRequest
       * @return ListPolicyResponse
       */
      Models::ListPolicyResponse listPolicy(const Models::ListPolicyRequest &request);

      /**
       * @summary Queries attachments to mitigation policies.
       *
       * @param tmpReq ListPolicyAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicyAttachmentResponse
       */
      Models::ListPolicyAttachmentResponse listPolicyAttachmentWithOptions(const Models::ListPolicyAttachmentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries attachments to mitigation policies.
       *
       * @param request ListPolicyAttachmentRequest
       * @return ListPolicyAttachmentResponse
       */
      Models::ListPolicyAttachmentResponse listPolicyAttachment(const Models::ListPolicyAttachmentRequest &request);

      /**
       * @summary Queries all tags.
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all tags.
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

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
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies a mitigation policy.
       *
       * @description Modifies a mitigation policy.
       *
       * @param tmpReq ModifyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPolicyResponse
       */
      Models::ModifyPolicyResponse modifyPolicyWithOptions(const Models::ModifyPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a mitigation policy.
       *
       * @description Modifies a mitigation policy.
       *
       * @param request ModifyPolicyRequest
       * @return ModifyPolicyResponse
       */
      Models::ModifyPolicyResponse modifyPolicy(const Models::ModifyPolicyRequest &request);

      /**
       * @summary Modifies the content of the mitigation policy.
       *
       * @description Make sure that all request parameters are configured when you call this operation. If any parameter is left empty, the configuration is deleted.
       *
       * @param tmpReq ModifyPolicyContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPolicyContentResponse
       */
      Models::ModifyPolicyContentResponse modifyPolicyContentWithOptions(const Models::ModifyPolicyContentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the content of the mitigation policy.
       *
       * @description Make sure that all request parameters are configured when you call this operation. If any parameter is left empty, the configuration is deleted.
       *
       * @param request ModifyPolicyContentRequest
       * @return ModifyPolicyContentResponse
       */
      Models::ModifyPolicyContentResponse modifyPolicyContent(const Models::ModifyPolicyContentRequest &request);

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
      Models::ModifyRemarkResponse modifyRemarkWithOptions(const Models::ModifyRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyRemarkResponse modifyRemark(const Models::ModifyRemarkRequest &request);

      /**
       * @summary Changes the resource group to which a cloud resource belongs.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which a cloud resource belongs.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Releases a pay-as-you-go Anti-DDoS Origin instance.
       *
       * @param request ReleaseDdosOriginInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseDdosOriginInstanceResponse
       */
      Models::ReleaseDdosOriginInstanceResponse releaseDdosOriginInstanceWithOptions(const Models::ReleaseDdosOriginInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go Anti-DDoS Origin instance.
       *
       * @param request ReleaseDdosOriginInstanceRequest
       * @return ReleaseDdosOriginInstanceResponse
       */
      Models::ReleaseDdosOriginInstanceResponse releaseDdosOriginInstance(const Models::ReleaseDdosOriginInstanceRequest &request);

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
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from Anti-DDoS Origin instances.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from Anti-DDoS Origin instances.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
