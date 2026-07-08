// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLOUDFW20171207_HPP_
#define ALIBABACLOUD_CLOUDFW20171207_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Cloudfw20171207Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Cloudfw20171207.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates an access control backup.
       *
       * @param request AddAclBackupDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAclBackupDataResponse
       */
      Models::AddAclBackupDataResponse addAclBackupDataWithOptions(const Models::AddAclBackupDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access control backup.
       *
       * @param request AddAclBackupDataRequest
       * @return AddAclBackupDataResponse
       */
      Models::AddAclBackupDataResponse addAclBackupData(const Models::AddAclBackupDataRequest &request);

      /**
       * @summary Creates an address book, including IPv4 address books, ECS tag-based address books, IPv6 address books, domain name address books, and ACK address books.
       *
       * @description This operation creates an address book, including IPv4 address books, ECS tag-based address books, IPv6 address books, domain name address books, and ACK address books.
       * ## Rate limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param tmpReq AddAddressBookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAddressBookResponse
       */
      Models::AddAddressBookResponse addAddressBookWithOptions(const Models::AddAddressBookRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an address book, including IPv4 address books, ECS tag-based address books, IPv6 address books, domain name address books, and ACK address books.
       *
       * @description This operation creates an address book, including IPv4 address books, ECS tag-based address books, IPv6 address books, domain name address books, and ACK address books.
       * ## Rate limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request AddAddressBookRequest
       * @return AddAddressBookResponse
       */
      Models::AddAddressBookResponse addAddressBook(const Models::AddAddressBookRequest &request);

      /**
       * @summary Adds an access control policy.
       *
       * @description You can call this operation to create a policy that allows, denies, or monitors traffic that passes through Cloud Firewall.
       * ## Rate limit
       * The single-user queries per second (QPS) limit for this operation is 10. If the number of calls per second exceeds the limit, throttling is triggered. Throttling may affect your business. Call this operation as needed.
       *
       * @param request AddControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddControlPolicyResponse
       */
      Models::AddControlPolicyResponse addControlPolicyWithOptions(const Models::AddControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an access control policy.
       *
       * @description You can call this operation to create a policy that allows, denies, or monitors traffic that passes through Cloud Firewall.
       * ## Rate limit
       * The single-user queries per second (QPS) limit for this operation is 10. If the number of calls per second exceeds the limit, throttling is triggered. Throttling may affect your business. Call this operation as needed.
       *
       * @param request AddControlPolicyRequest
       * @return AddControlPolicyResponse
       */
      Models::AddControlPolicyResponse addControlPolicy(const Models::AddControlPolicyRequest &request);

      /**
       * @summary Add a DNS firewall ACL
       *
       * @description Use this API to create a policy that allows, denies, or observes traffic passing through a NAT firewall.
       *
       * @param request AddDnsFirewallPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDnsFirewallPolicyResponse
       */
      Models::AddDnsFirewallPolicyResponse addDnsFirewallPolicyWithOptions(const Models::AddDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a DNS firewall ACL
       *
       * @description Use this API to create a policy that allows, denies, or observes traffic passing through a NAT firewall.
       *
       * @param request AddDnsFirewallPolicyRequest
       * @return AddDnsFirewallPolicyResponse
       */
      Models::AddDnsFirewallPolicyResponse addDnsFirewallPolicy(const Models::AddDnsFirewallPolicyRequest &request);

      /**
       * @summary Creates a real-time domain name resolution task.
       *
       * @param request AddDomainResolveRealtimeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDomainResolveRealtimeTaskResponse
       */
      Models::AddDomainResolveRealtimeTaskResponse addDomainResolveRealtimeTaskWithOptions(const Models::AddDomainResolveRealtimeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a real-time domain name resolution task.
       *
       * @param request AddDomainResolveRealtimeTaskRequest
       * @return AddDomainResolveRealtimeTaskResponse
       */
      Models::AddDomainResolveRealtimeTaskResponse addDomainResolveRealtimeTask(const Models::AddDomainResolveRealtimeTaskRequest &request);

      /**
       * @summary Adds member accounts to Cloud Firewall.
       *
       * @description This operation is used to add member accounts to Cloud Firewall.
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AddInstanceMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddInstanceMembersResponse
       */
      Models::AddInstanceMembersResponse addInstanceMembersWithOptions(const Models::AddInstanceMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds member accounts to Cloud Firewall.
       *
       * @description This operation is used to add member accounts to Cloud Firewall.
       * ## QPS limit
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AddInstanceMembersRequest
       * @return AddInstanceMembersResponse
       */
      Models::AddInstanceMembersResponse addInstanceMembers(const Models::AddInstanceMembersRequest &request);

      /**
       * @summary Adds a private DNS domain name.
       *
       * @description This operation is used to obtain DNS resolution results for a domain name. Currently, only resolution results from Alibaba Cloud DNS are supported. The domain name that you want to query must use Alibaba Cloud DNS before you can obtain its resolution results.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request AddPrivateDnsDomainNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPrivateDnsDomainNameResponse
       */
      Models::AddPrivateDnsDomainNameResponse addPrivateDnsDomainNameWithOptions(const Models::AddPrivateDnsDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a private DNS domain name.
       *
       * @description This operation is used to obtain DNS resolution results for a domain name. Currently, only resolution results from Alibaba Cloud DNS are supported. The domain name that you want to query must use Alibaba Cloud DNS before you can obtain its resolution results.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request AddPrivateDnsDomainNameRequest
       * @return AddPrivateDnsDomainNameResponse
       */
      Models::AddPrivateDnsDomainNameResponse addPrivateDnsDomainName(const Models::AddPrivateDnsDomainNameRequest &request);

      /**
       * @deprecated OpenAPI BatchCopyVpcFirewallControlPolicy is deprecated
       *
       * @summary Copies all policies from a source virtual private cloud (VPC) firewall policy group to a destination VPC firewall policy group.
       *
       * @description This operation is used to copy all policies from a source virtual private cloud (VPC) firewall policy group to a destination VPC firewall policy group.
       * Before performing this operation, back up your policies. For more information, see [policy backup](https://help.aliyun.com/document_detail/170363.html).
       * After this operation is complete, the policies in the destination VPC firewall policy group are completely replaced with the policies from the source VPC firewall policy group.
       * The source VPC firewall policy group and the destination VPC firewall policy group must belong to the same Alibaba Cloud account.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation as appropriate.
       *
       * @param request BatchCopyVpcFirewallControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCopyVpcFirewallControlPolicyResponse
       */
      Models::BatchCopyVpcFirewallControlPolicyResponse batchCopyVpcFirewallControlPolicyWithOptions(const Models::BatchCopyVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI BatchCopyVpcFirewallControlPolicy is deprecated
       *
       * @summary Copies all policies from a source virtual private cloud (VPC) firewall policy group to a destination VPC firewall policy group.
       *
       * @description This operation is used to copy all policies from a source virtual private cloud (VPC) firewall policy group to a destination VPC firewall policy group.
       * Before performing this operation, back up your policies. For more information, see [policy backup](https://help.aliyun.com/document_detail/170363.html).
       * After this operation is complete, the policies in the destination VPC firewall policy group are completely replaced with the policies from the source VPC firewall policy group.
       * The source VPC firewall policy group and the destination VPC firewall policy group must belong to the same Alibaba Cloud account.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Invoke this operation as appropriate.
       *
       * @param request BatchCopyVpcFirewallControlPolicyRequest
       * @return BatchCopyVpcFirewallControlPolicyResponse
       */
      Models::BatchCopyVpcFirewallControlPolicyResponse batchCopyVpcFirewallControlPolicy(const Models::BatchCopyVpcFirewallControlPolicyRequest &request);

      /**
       * @summary Batch deletes access control policies of a virtual private cloud (VPC) firewall.
       *
       * @param request BatchDeleteVpcFirewallControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteVpcFirewallControlPolicyResponse
       */
      Models::BatchDeleteVpcFirewallControlPolicyResponse batchDeleteVpcFirewallControlPolicyWithOptions(const Models::BatchDeleteVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch deletes access control policies of a virtual private cloud (VPC) firewall.
       *
       * @param request BatchDeleteVpcFirewallControlPolicyRequest
       * @return BatchDeleteVpcFirewallControlPolicyResponse
       */
      Models::BatchDeleteVpcFirewallControlPolicyResponse batchDeleteVpcFirewallControlPolicy(const Models::BatchDeleteVpcFirewallControlPolicyRequest &request);

      /**
       * @summary Clears firewall audit logs.
       *
       * @param request ClearLogStoreStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearLogStoreStorageResponse
       */
      Models::ClearLogStoreStorageResponse clearLogStoreStorageWithOptions(const Models::ClearLogStoreStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears firewall audit logs.
       *
       * @param request ClearLogStoreStorageRequest
       * @return ClearLogStoreStorageResponse
       */
      Models::ClearLogStoreStorageResponse clearLogStoreStorage(const Models::ClearLogStoreStorageRequest &request);

      /**
       * @summary Creates an ACK cluster connector.
       *
       * @description ## Rate limit
       * The single-user QPS limit for this operation is 10 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Manage your calls properly.
       *
       * @param request CreateAckClusterConnectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAckClusterConnectorResponse
       */
      Models::CreateAckClusterConnectorResponse createAckClusterConnectorWithOptions(const Models::CreateAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ACK cluster connector.
       *
       * @description ## Rate limit
       * The single-user QPS limit for this operation is 10 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Manage your calls properly.
       *
       * @param request CreateAckClusterConnectorRequest
       * @return CreateAckClusterConnectorResponse
       */
      Models::CreateAckClusterConnectorResponse createAckClusterConnector(const Models::CreateAckClusterConnectorRequest &request);

      /**
       * @summary Creates an ACL check.
       *
       * @param request CreateAclCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAclCheckResponse
       */
      Models::CreateAclCheckResponse createAclCheckWithOptions(const Models::CreateAclCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ACL check.
       *
       * @param request CreateAclCheckRequest
       * @return CreateAclCheckResponse
       */
      Models::CreateAclCheckResponse createAclCheck(const Models::CreateAclCheckRequest &request);

      /**
       * @summary Creates a file download task.
       *
       * @param request CreateDownloadTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDownloadTaskResponse
       */
      Models::CreateDownloadTaskResponse createDownloadTaskWithOptions(const Models::CreateDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a file download task.
       *
       * @param request CreateDownloadTaskRequest
       * @return CreateDownloadTaskResponse
       */
      Models::CreateDownloadTaskResponse createDownloadTask(const Models::CreateDownloadTaskRequest &request);

      /**
       * @summary Creates a synchronization task for Internet assets.
       *
       * @param request CreateInstanceSyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceSyncTaskResponse
       */
      Models::CreateInstanceSyncTaskResponse createInstanceSyncTaskWithOptions(const Models::CreateInstanceSyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a synchronization task for Internet assets.
       *
       * @param request CreateInstanceSyncTaskRequest
       * @return CreateInstanceSyncTaskResponse
       */
      Models::CreateInstanceSyncTaskResponse createInstanceSyncTask(const Models::CreateInstanceSyncTaskRequest &request);

      /**
       * @summary Creates an association for private IP traffic tracing with the Intrusion Prevention System (IPS).
       *
       * @param request CreateIpsPrivateAssocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpsPrivateAssocResponse
       */
      Models::CreateIpsPrivateAssocResponse createIpsPrivateAssocWithOptions(const Models::CreateIpsPrivateAssocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an association for private IP traffic tracing with the Intrusion Prevention System (IPS).
       *
       * @param request CreateIpsPrivateAssocRequest
       * @return CreateIpsPrivateAssocResponse
       */
      Models::CreateIpsPrivateAssocResponse createIpsPrivateAssoc(const Models::CreateIpsPrivateAssocRequest &request);

      /**
       * @summary Add an access control policy to a NAT firewall.
       *
       * @description This API creates a policy to allow, deny, or observe traffic through the NAT Firewall.
       *
       * @param request CreateNatFirewallControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatFirewallControlPolicyResponse
       */
      Models::CreateNatFirewallControlPolicyResponse createNatFirewallControlPolicyWithOptions(const Models::CreateNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add an access control policy to a NAT firewall.
       *
       * @description This API creates a policy to allow, deny, or observe traffic through the NAT Firewall.
       *
       * @param request CreateNatFirewallControlPolicyRequest
       * @return CreateNatFirewallControlPolicyResponse
       */
      Models::CreateNatFirewallControlPolicyResponse createNatFirewallControlPolicy(const Models::CreateNatFirewallControlPolicyRequest &request);

      /**
       * @summary Creates a dry run for a NAT firewall.
       *
       * @description Creates a policy that allows, denies, or monitors traffic that passes through a NAT firewall.
       *
       * @param request CreateNatFirewallPreCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatFirewallPreCheckResponse
       */
      Models::CreateNatFirewallPreCheckResponse createNatFirewallPreCheckWithOptions(const Models::CreateNatFirewallPreCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dry run for a NAT firewall.
       *
       * @description Creates a policy that allows, denies, or monitors traffic that passes through a NAT firewall.
       *
       * @param request CreateNatFirewallPreCheckRequest
       * @return CreateNatFirewallPreCheckResponse
       */
      Models::CreateNatFirewallPreCheckResponse createNatFirewallPreCheck(const Models::CreateNatFirewallPreCheckRequest &request);

      /**
       * @summary Creates an asset synchronization task for a NAT firewall.
       *
       * @param request CreateNatFirewallSyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatFirewallSyncTaskResponse
       */
      Models::CreateNatFirewallSyncTaskResponse createNatFirewallSyncTaskWithOptions(const Models::CreateNatFirewallSyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an asset synchronization task for a NAT firewall.
       *
       * @param request CreateNatFirewallSyncTaskRequest
       * @return CreateNatFirewallSyncTaskResponse
       */
      Models::CreateNatFirewallSyncTaskResponse createNatFirewallSyncTask(const Models::CreateNatFirewallSyncTaskRequest &request);

      /**
       * @summary Create a private DNS endpoint
       *
       * @description Creates a private DNS endpoint for traffic that passes through the NAT Firewall to allow, deny, or monitor the traffic.
       *
       * @param request CreatePrivateDnsEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrivateDnsEndpointResponse
       */
      Models::CreatePrivateDnsEndpointResponse createPrivateDnsEndpointWithOptions(const Models::CreatePrivateDnsEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a private DNS endpoint
       *
       * @description Creates a private DNS endpoint for traffic that passes through the NAT Firewall to allow, deny, or monitor the traffic.
       *
       * @param request CreatePrivateDnsEndpointRequest
       * @return CreatePrivateDnsEndpointResponse
       */
      Models::CreatePrivateDnsEndpointResponse createPrivateDnsEndpoint(const Models::CreatePrivateDnsEndpointRequest &request);

      /**
       * @summary Creates a NAT firewall.
       *
       * @param request CreateSecurityProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityProxyResponse
       */
      Models::CreateSecurityProxyResponse createSecurityProxyWithOptions(const Models::CreateSecurityProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a NAT firewall.
       *
       * @param request CreateSecurityProxyRequest
       * @return CreateSecurityProxyResponse
       */
      Models::CreateSecurityProxyResponse createSecurityProxy(const Models::CreateSecurityProxyRequest &request);

      /**
       * @summary Creates a log delivery configuration for Cloud Firewall to Simple Log Service (SLS).
       *
       * @param request CreateSlsLogDispatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSlsLogDispatchResponse
       */
      Models::CreateSlsLogDispatchResponse createSlsLogDispatchWithOptions(const Models::CreateSlsLogDispatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a log delivery configuration for Cloud Firewall to Simple Log Service (SLS).
       *
       * @param request CreateSlsLogDispatchRequest
       * @return CreateSlsLogDispatchResponse
       */
      Models::CreateSlsLogDispatchResponse createSlsLogDispatch(const Models::CreateSlsLogDispatchRequest &request);

      /**
       * @summary Creates a VPC firewall for a transit router.
       *
       * @param request CreateTrFirewallV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrFirewallV2Response
       */
      Models::CreateTrFirewallV2Response createTrFirewallV2WithOptions(const Models::CreateTrFirewallV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a VPC firewall for a transit router.
       *
       * @param request CreateTrFirewallV2Request
       * @return CreateTrFirewallV2Response
       */
      Models::CreateTrFirewallV2Response createTrFirewallV2(const Models::CreateTrFirewallV2Request &request);

      /**
       * @summary Create a TR firewall routing rule.
       *
       * @param tmpReq CreateTrFirewallV2RoutePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrFirewallV2RoutePolicyResponse
       */
      Models::CreateTrFirewallV2RoutePolicyResponse createTrFirewallV2RoutePolicyWithOptions(const Models::CreateTrFirewallV2RoutePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a TR firewall routing rule.
       *
       * @param request CreateTrFirewallV2RoutePolicyRequest
       * @return CreateTrFirewallV2RoutePolicyResponse
       */
      Models::CreateTrFirewallV2RoutePolicyResponse createTrFirewallV2RoutePolicy(const Models::CreateTrFirewallV2RoutePolicyRequest &request);

      /**
       * @summary Creates a virtual private cloud (VPC) firewall to protect traffic between network instances in a Cloud Enterprise Network (CEN) instance and a specified VPC.
       *
       * @description This operation is used to create a VPC firewall for VPC-connected instances in a CEN instance. The virtual private cloud (VPC) firewall protects traffic between network instances (including VPCs, virtual border routers (VBRs), and Cloud Connect Networks (CCNs)) in the CEN instance and a specified VPC. The VPC firewall does not protect traffic between VBRs, between CCNs, or between VBRs and CCNs. For more information, see [VPC firewall limits](https://help.aliyun.com/document_detail/172295.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the number of calls per second exceeds the limit, throttling is triggered. Throttling may affect your business. Invoke this operation within the limit.
       *
       * @param request CreateVpcFirewallCenConfigureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcFirewallCenConfigureResponse
       */
      Models::CreateVpcFirewallCenConfigureResponse createVpcFirewallCenConfigureWithOptions(const Models::CreateVpcFirewallCenConfigureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual private cloud (VPC) firewall to protect traffic between network instances in a Cloud Enterprise Network (CEN) instance and a specified VPC.
       *
       * @description This operation is used to create a VPC firewall for VPC-connected instances in a CEN instance. The virtual private cloud (VPC) firewall protects traffic between network instances (including VPCs, virtual border routers (VBRs), and Cloud Connect Networks (CCNs)) in the CEN instance and a specified VPC. The VPC firewall does not protect traffic between VBRs, between CCNs, or between VBRs and CCNs. For more information, see [VPC firewall limits](https://help.aliyun.com/document_detail/172295.html).
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the number of calls per second exceeds the limit, throttling is triggered. Throttling may affect your business. Invoke this operation within the limit.
       *
       * @param request CreateVpcFirewallCenConfigureRequest
       * @return CreateVpcFirewallCenConfigureResponse
       */
      Models::CreateVpcFirewallCenConfigureResponse createVpcFirewallCenConfigure(const Models::CreateVpcFirewallCenConfigureRequest &request);

      /**
       * @deprecated OpenAPI CreateVpcFirewallCenManualConfigure is deprecated
       *
       * @summary Manually creates a VPC border firewall.
       *
       * @description This operation creates a VPC border firewall for a VPC within a Cloud Enterprise Network (CEN) instance. The VPC border firewall protects traffic between the specified VPC and other network instances that are connected to the CEN instance. These network instances include virtual private clouds (VPCs), virtual border routers (VBRs), and Cloud Connect Network (CCN) instances. The VPC border firewall does not protect traffic between VBRs, between CCN instances, or between VBRs and CCN instances. For more information, see [VPC border firewall limits](https://help.aliyun.com/document_detail/172295.html).
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10. If you exceed this limit, API calls are throttled. This can affect your business operations. We recommend that you adhere to this limit.
       *
       * @param request CreateVpcFirewallCenManualConfigureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcFirewallCenManualConfigureResponse
       */
      Models::CreateVpcFirewallCenManualConfigureResponse createVpcFirewallCenManualConfigureWithOptions(const Models::CreateVpcFirewallCenManualConfigureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateVpcFirewallCenManualConfigure is deprecated
       *
       * @summary Manually creates a VPC border firewall.
       *
       * @description This operation creates a VPC border firewall for a VPC within a Cloud Enterprise Network (CEN) instance. The VPC border firewall protects traffic between the specified VPC and other network instances that are connected to the CEN instance. These network instances include virtual private clouds (VPCs), virtual border routers (VBRs), and Cloud Connect Network (CCN) instances. The VPC border firewall does not protect traffic between VBRs, between CCN instances, or between VBRs and CCN instances. For more information, see [VPC border firewall limits](https://help.aliyun.com/document_detail/172295.html).
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10. If you exceed this limit, API calls are throttled. This can affect your business operations. We recommend that you adhere to this limit.
       *
       * @param request CreateVpcFirewallCenManualConfigureRequest
       * @return CreateVpcFirewallCenManualConfigureResponse
       */
      Models::CreateVpcFirewallCenManualConfigureResponse createVpcFirewallCenManualConfigure(const Models::CreateVpcFirewallCenManualConfigureRequest &request);

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
      Models::CreateVpcFirewallConfigureResponse createVpcFirewallConfigureWithOptions(const Models::CreateVpcFirewallConfigureRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateVpcFirewallConfigureResponse createVpcFirewallConfigure(const Models::CreateVpcFirewallConfigureRequest &request);

      /**
       * @summary Adds an access control policy to a specified VPC firewall policy group.
       *
       * @description This operation is used to add an access control policy to a specified virtual private cloud (VPC) firewall policy group. Different access control policies are used when a VPC firewall protects traffic between two VPCs connected through Cloud Enterprise Network (CEN) or traffic between two VPCs connected through Express Connect.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Invoke this operation properly.
       *
       * @param request CreateVpcFirewallControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcFirewallControlPolicyResponse
       */
      Models::CreateVpcFirewallControlPolicyResponse createVpcFirewallControlPolicyWithOptions(const Models::CreateVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an access control policy to a specified VPC firewall policy group.
       *
       * @description This operation is used to add an access control policy to a specified virtual private cloud (VPC) firewall policy group. Different access control policies are used when a VPC firewall protects traffic between two VPCs connected through Cloud Enterprise Network (CEN) or traffic between two VPCs connected through Express Connect.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the number of calls exceeds the limit, throttling is triggered, which may affect your business. Invoke this operation properly.
       *
       * @param request CreateVpcFirewallControlPolicyRequest
       * @return CreateVpcFirewallControlPolicyResponse
       */
      Models::CreateVpcFirewallControlPolicyResponse createVpcFirewallControlPolicy(const Models::CreateVpcFirewallControlPolicyRequest &request);

      /**
       * @summary Creates a precheck task before you create a VPC firewall.
       *
       * @description This operation creates a policy to accept, deny, or monitor traffic that passes through a NAT firewall.
       *
       * @param request CreateVpcFirewallPrecheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcFirewallPrecheckResponse
       */
      Models::CreateVpcFirewallPrecheckResponse createVpcFirewallPrecheckWithOptions(const Models::CreateVpcFirewallPrecheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a precheck task before you create a VPC firewall.
       *
       * @description This operation creates a policy to accept, deny, or monitor traffic that passes through a NAT firewall.
       *
       * @param request CreateVpcFirewallPrecheckRequest
       * @return CreateVpcFirewallPrecheckResponse
       */
      Models::CreateVpcFirewallPrecheckResponse createVpcFirewallPrecheck(const Models::CreateVpcFirewallPrecheckRequest &request);

      /**
       * @summary Creates a sync task for VPC firewall assets.
       *
       * @description This operation creates a VPC firewall that protects traffic between two VPCs connected by an Express Connect circuit. The VPC firewall does not protect cross-region traffic, cross-account traffic, or traffic between a VPC and a Virtual Border Router (VBR). For more information, see [Limits on VPC firewalls](https://help.aliyun.com/document_detail/172295.html).
       * ### QPS limits
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, your API calls will be throttled. Plan your calls accordingly.
       *
       * @param request CreateVpcFirewallTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcFirewallTaskResponse
       */
      Models::CreateVpcFirewallTaskResponse createVpcFirewallTaskWithOptions(const Models::CreateVpcFirewallTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a sync task for VPC firewall assets.
       *
       * @description This operation creates a VPC firewall that protects traffic between two VPCs connected by an Express Connect circuit. The VPC firewall does not protect cross-region traffic, cross-account traffic, or traffic between a VPC and a Virtual Border Router (VBR). For more information, see [Limits on VPC firewalls](https://help.aliyun.com/document_detail/172295.html).
       * ### QPS limits
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, your API calls will be throttled. Plan your calls accordingly.
       *
       * @param request CreateVpcFirewallTaskRequest
       * @return CreateVpcFirewallTaskResponse
       */
      Models::CreateVpcFirewallTaskResponse createVpcFirewallTask(const Models::CreateVpcFirewallTaskRequest &request);

      /**
       * @summary Deletes an ACK cluster connector.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DeleteAckClusterConnectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAckClusterConnectorResponse
       */
      Models::DeleteAckClusterConnectorResponse deleteAckClusterConnectorWithOptions(const Models::DeleteAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an ACK cluster connector.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DeleteAckClusterConnectorRequest
       * @return DeleteAckClusterConnectorResponse
       */
      Models::DeleteAckClusterConnectorResponse deleteAckClusterConnector(const Models::DeleteAckClusterConnectorRequest &request);

      /**
       * @summary Deletes an ACL backup.
       *
       * @description This operation deletes a backup of an access control address book.
       * ## QPS limit
       * This operation is limited to 10 queries per second (QPS) per user. Calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request DeleteAclBackupDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAclBackupDataResponse
       */
      Models::DeleteAclBackupDataResponse deleteAclBackupDataWithOptions(const Models::DeleteAclBackupDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an ACL backup.
       *
       * @description This operation deletes a backup of an access control address book.
       * ## QPS limit
       * This operation is limited to 10 queries per second (QPS) per user. Calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request DeleteAclBackupDataRequest
       * @return DeleteAclBackupDataResponse
       */
      Models::DeleteAclBackupDataResponse deleteAclBackupData(const Models::DeleteAclBackupDataRequest &request);

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
      Models::DeleteAddressBookResponse deleteAddressBookWithOptions(const Models::DeleteAddressBookRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteAddressBookResponse deleteAddressBook(const Models::DeleteAddressBookRequest &request);

      /**
       * @summary Deletes an access control policy.
       *
       * @description This operation is used to delete an access control policy whose traffic direction is inbound or outbound.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, throttling is triggered, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteControlPolicyResponse
       */
      Models::DeleteControlPolicyResponse deleteControlPolicyWithOptions(const Models::DeleteControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access control policy.
       *
       * @description This operation is used to delete an access control policy whose traffic direction is inbound or outbound.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, throttling is triggered, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteControlPolicyRequest
       * @return DeleteControlPolicyResponse
       */
      Models::DeleteControlPolicyResponse deleteControlPolicy(const Models::DeleteControlPolicyRequest &request);

      /**
       * @summary Deletes an access control policy template.
       *
       * @param request DeleteControlPolicyTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteControlPolicyTemplateResponse
       */
      Models::DeleteControlPolicyTemplateResponse deleteControlPolicyTemplateWithOptions(const Models::DeleteControlPolicyTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access control policy template.
       *
       * @param request DeleteControlPolicyTemplateRequest
       * @return DeleteControlPolicyTemplateResponse
       */
      Models::DeleteControlPolicyTemplateResponse deleteControlPolicyTemplate(const Models::DeleteControlPolicyTemplateRequest &request);

      /**
       * @summary Deletes a DNS firewall policy.
       *
       * @description You can call this operation to delete a DNS firewall policy.
       *
       * @param request DeleteDnsFirewallPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDnsFirewallPolicyResponse
       */
      Models::DeleteDnsFirewallPolicyResponse deleteDnsFirewallPolicyWithOptions(const Models::DeleteDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a DNS firewall policy.
       *
       * @description You can call this operation to delete a DNS firewall policy.
       *
       * @param request DeleteDnsFirewallPolicyRequest
       * @return DeleteDnsFirewallPolicyResponse
       */
      Models::DeleteDnsFirewallPolicyResponse deleteDnsFirewallPolicy(const Models::DeleteDnsFirewallPolicyRequest &request);

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
      Models::DeleteDownloadTaskResponse deleteDownloadTaskWithOptions(const Models::DeleteDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a file download task.
       *
       * @description Calling this operation immediately deletes the file download task and the downloaded file.
       * >Danger: The delete operation deletes the corresponding task and file. **The file can no longer be downloaded by using the existing download link. This operation is irreversible. Proceed with caution.**.
       *
       * @param request DeleteDownloadTaskRequest
       * @return DeleteDownloadTaskResponse
       */
      Models::DeleteDownloadTaskResponse deleteDownloadTask(const Models::DeleteDownloadTaskRequest &request);

      /**
       * @summary Deletes a routing policy for a VPC firewall for a transit router.
       *
       * @param request DeleteFirewallV2RoutePoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFirewallV2RoutePoliciesResponse
       */
      Models::DeleteFirewallV2RoutePoliciesResponse deleteFirewallV2RoutePoliciesWithOptions(const Models::DeleteFirewallV2RoutePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a routing policy for a VPC firewall for a transit router.
       *
       * @param request DeleteFirewallV2RoutePoliciesRequest
       * @return DeleteFirewallV2RoutePoliciesResponse
       */
      Models::DeleteFirewallV2RoutePoliciesResponse deleteFirewallV2RoutePolicies(const Models::DeleteFirewallV2RoutePoliciesRequest &request);

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
      Models::DeleteInstanceMembersResponse deleteInstanceMembersWithOptions(const Models::DeleteInstanceMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteInstanceMembersResponse deleteInstanceMembers(const Models::DeleteInstanceMembersRequest &request);

      /**
       * @summary Creates a private network association for an IPS.
       *
       * @param request DeleteIpsPrivateAssocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpsPrivateAssocResponse
       */
      Models::DeleteIpsPrivateAssocResponse deleteIpsPrivateAssocWithOptions(const Models::DeleteIpsPrivateAssocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a private network association for an IPS.
       *
       * @param request DeleteIpsPrivateAssocRequest
       * @return DeleteIpsPrivateAssocResponse
       */
      Models::DeleteIpsPrivateAssocResponse deleteIpsPrivateAssoc(const Models::DeleteIpsPrivateAssocRequest &request);

      /**
       * @summary Deletes a NAT firewall access control policy.
       *
       * @description This operation is used to delete an access control policy for outbound traffic of a NAT firewall.
       *
       * @param request DeleteNatFirewallControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNatFirewallControlPolicyResponse
       */
      Models::DeleteNatFirewallControlPolicyResponse deleteNatFirewallControlPolicyWithOptions(const Models::DeleteNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a NAT firewall access control policy.
       *
       * @description This operation is used to delete an access control policy for outbound traffic of a NAT firewall.
       *
       * @param request DeleteNatFirewallControlPolicyRequest
       * @return DeleteNatFirewallControlPolicyResponse
       */
      Models::DeleteNatFirewallControlPolicyResponse deleteNatFirewallControlPolicy(const Models::DeleteNatFirewallControlPolicyRequest &request);

      /**
       * @summary Deletes a batch of NAT firewall policies.
       *
       * @param request DeleteNatFirewallControlPolicyBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNatFirewallControlPolicyBatchResponse
       */
      Models::DeleteNatFirewallControlPolicyBatchResponse deleteNatFirewallControlPolicyBatchWithOptions(const Models::DeleteNatFirewallControlPolicyBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a batch of NAT firewall policies.
       *
       * @param request DeleteNatFirewallControlPolicyBatchRequest
       * @return DeleteNatFirewallControlPolicyBatchResponse
       */
      Models::DeleteNatFirewallControlPolicyBatchResponse deleteNatFirewallControlPolicyBatch(const Models::DeleteNatFirewallControlPolicyBatchRequest &request);

      /**
       * @summary Deletes all private DNS domain names.
       *
       * @description This API call is used to delete all private domain names.
       * ## QPS limit
       * Each user is limited to 10 queries per second (QPS) for this API call. If you exceed this limit, API calls are throttled, which may impact your business. We recommend that you plan your API calls accordingly.
       *
       * @param request DeletePrivateDnsAllDomainNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivateDnsAllDomainNameResponse
       */
      Models::DeletePrivateDnsAllDomainNameResponse deletePrivateDnsAllDomainNameWithOptions(const Models::DeletePrivateDnsAllDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes all private DNS domain names.
       *
       * @description This API call is used to delete all private domain names.
       * ## QPS limit
       * Each user is limited to 10 queries per second (QPS) for this API call. If you exceed this limit, API calls are throttled, which may impact your business. We recommend that you plan your API calls accordingly.
       *
       * @param request DeletePrivateDnsAllDomainNameRequest
       * @return DeletePrivateDnsAllDomainNameResponse
       */
      Models::DeletePrivateDnsAllDomainNameResponse deletePrivateDnsAllDomainName(const Models::DeletePrivateDnsAllDomainNameRequest &request);

      /**
       * @summary Delete private DNS domain names
       *
       * @description Deletes domain names that require private DNS resolution.
       *
       * @param request DeletePrivateDnsDomainNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivateDnsDomainNameResponse
       */
      Models::DeletePrivateDnsDomainNameResponse deletePrivateDnsDomainNameWithOptions(const Models::DeletePrivateDnsDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete private DNS domain names
       *
       * @description Deletes domain names that require private DNS resolution.
       *
       * @param request DeletePrivateDnsDomainNameRequest
       * @return DeletePrivateDnsDomainNameResponse
       */
      Models::DeletePrivateDnsDomainNameResponse deletePrivateDnsDomainName(const Models::DeletePrivateDnsDomainNameRequest &request);

      /**
       * @summary Deletes a private DNS endpoint.
       *
       * @description You can use this operation to create a policy that allows, denies, or monitors traffic that passes through a NAT firewall.
       *
       * @param request DeletePrivateDnsEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivateDnsEndpointResponse
       */
      Models::DeletePrivateDnsEndpointResponse deletePrivateDnsEndpointWithOptions(const Models::DeletePrivateDnsEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a private DNS endpoint.
       *
       * @description You can use this operation to create a policy that allows, denies, or monitors traffic that passes through a NAT firewall.
       *
       * @param request DeletePrivateDnsEndpointRequest
       * @return DeletePrivateDnsEndpointResponse
       */
      Models::DeletePrivateDnsEndpointResponse deletePrivateDnsEndpoint(const Models::DeletePrivateDnsEndpointRequest &request);

      /**
       * @summary Deletes the specified NAT firewall.
       *
       * @param request DeleteSecurityProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityProxyResponse
       */
      Models::DeleteSecurityProxyResponse deleteSecurityProxyWithOptions(const Models::DeleteSecurityProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified NAT firewall.
       *
       * @param request DeleteSecurityProxyRequest
       * @return DeleteSecurityProxyResponse
       */
      Models::DeleteSecurityProxyResponse deleteSecurityProxy(const Models::DeleteSecurityProxyRequest &request);

      /**
       * @summary Deletes a VPC firewall for a transit router.
       *
       * @param request DeleteTrFirewallV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrFirewallV2Response
       */
      Models::DeleteTrFirewallV2Response deleteTrFirewallV2WithOptions(const Models::DeleteTrFirewallV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VPC firewall for a transit router.
       *
       * @param request DeleteTrFirewallV2Request
       * @return DeleteTrFirewallV2Response
       */
      Models::DeleteTrFirewallV2Response deleteTrFirewallV2(const Models::DeleteTrFirewallV2Request &request);

      /**
       * @summary Deletes a VPC firewall that protects traffic between network instances in a Cloud Enterprise Network (CEN) and a specified VPC.
       *
       * @description This operation deletes a VPC firewall. The VPC firewall protects traffic between network instances (including VPCs, virtual border routers (VBRs), and Cloud Connect Networks (CCNs)) in a Cloud Enterprise Network (CEN) and a specified VPC.
       * Before calling this operation, call [CreateVpcFirewallCenConfigure](https://help.aliyun.com/document_detail/345772.html) to create a VPC firewall.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteVpcFirewallCenConfigureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcFirewallCenConfigureResponse
       */
      Models::DeleteVpcFirewallCenConfigureResponse deleteVpcFirewallCenConfigureWithOptions(const Models::DeleteVpcFirewallCenConfigureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VPC firewall that protects traffic between network instances in a Cloud Enterprise Network (CEN) and a specified VPC.
       *
       * @description This operation deletes a VPC firewall. The VPC firewall protects traffic between network instances (including VPCs, virtual border routers (VBRs), and Cloud Connect Networks (CCNs)) in a Cloud Enterprise Network (CEN) and a specified VPC.
       * Before calling this operation, call [CreateVpcFirewallCenConfigure](https://help.aliyun.com/document_detail/345772.html) to create a VPC firewall.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DeleteVpcFirewallCenConfigureRequest
       * @return DeleteVpcFirewallCenConfigureResponse
       */
      Models::DeleteVpcFirewallCenConfigureResponse deleteVpcFirewallCenConfigure(const Models::DeleteVpcFirewallCenConfigureRequest &request);

      /**
       * @summary Deletes a virtual private cloud (VPC) firewall that protects traffic between two VPCs connected through Express Connect.
       *
       * @description This operation is used to delete a virtual private cloud (VPC) firewall that protects traffic between two VPCs connected through Express Connect.
       * Before you invoke this operation, you must have already created a VPC firewall by invoking the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation.
       * ## Rate limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request DeleteVpcFirewallConfigureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpcFirewallConfigureResponse
       */
      Models::DeleteVpcFirewallConfigureResponse deleteVpcFirewallConfigureWithOptions(const Models::DeleteVpcFirewallConfigureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual private cloud (VPC) firewall that protects traffic between two VPCs connected through Express Connect.
       *
       * @description This operation is used to delete a virtual private cloud (VPC) firewall that protects traffic between two VPCs connected through Express Connect.
       * Before you invoke this operation, you must have already created a VPC firewall by invoking the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation.
       * ## Rate limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request DeleteVpcFirewallConfigureRequest
       * @return DeleteVpcFirewallConfigureResponse
       */
      Models::DeleteVpcFirewallConfigureResponse deleteVpcFirewallConfigure(const Models::DeleteVpcFirewallConfigureRequest &request);

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
      Models::DeleteVpcFirewallControlPolicyResponse deleteVpcFirewallControlPolicyWithOptions(const Models::DeleteVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteVpcFirewallControlPolicyResponse deleteVpcFirewallControlPolicy(const Models::DeleteVpcFirewallControlPolicyRequest &request);

      /**
       * @summary Queries the trend chart of Internet access control interceptions.
       *
       * @param request DescribeACLProtectTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeACLProtectTrendResponse
       */
      Models::DescribeACLProtectTrendResponse describeACLProtectTrendWithOptions(const Models::DescribeACLProtectTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trend chart of Internet access control interceptions.
       *
       * @param request DescribeACLProtectTrendRequest
       * @return DescribeACLProtectTrendResponse
       */
      Models::DescribeACLProtectTrendResponse describeACLProtectTrend(const Models::DescribeACLProtectTrendRequest &request);

      /**
       * @summary Queries the enabling status of AI-powered traffic analysis.
       *
       * @description The statistics apply to the current Cloud Firewall instance and include all data from the date of purchase.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAITrafficAnalysisStatusResponse
       */
      Models::DescribeAITrafficAnalysisStatusResponse describeAITrafficAnalysisStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the enabling status of AI-powered traffic analysis.
       *
       * @description The statistics apply to the current Cloud Firewall instance and include all data from the date of purchase.
       *
       * @return DescribeAITrafficAnalysisStatusResponse
       */
      Models::DescribeAITrafficAnalysisStatusResponse describeAITrafficAnalysisStatus();

      /**
       * @summary Queries the list of regions for synchronization nodes.
       *
       * @param request DescribeAccessInstanceRegionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessInstanceRegionListResponse
       */
      Models::DescribeAccessInstanceRegionListResponse describeAccessInstanceRegionListWithOptions(const Models::DescribeAccessInstanceRegionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of regions for synchronization nodes.
       *
       * @param request DescribeAccessInstanceRegionListRequest
       * @return DescribeAccessInstanceRegionListResponse
       */
      Models::DescribeAccessInstanceRegionListResponse describeAccessInstanceRegionList(const Models::DescribeAccessInstanceRegionListRequest &request);

      /**
       * @summary Queries the progress of a synchronization task on a node.
       *
       * @param request DescribeAccessInstanceTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessInstanceTaskResponse
       */
      Models::DescribeAccessInstanceTaskResponse describeAccessInstanceTaskWithOptions(const Models::DescribeAccessInstanceTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of a synchronization task on a node.
       *
       * @param request DescribeAccessInstanceTaskRequest
       * @return DescribeAccessInstanceTaskResponse
       */
      Models::DescribeAccessInstanceTaskResponse describeAccessInstanceTask(const Models::DescribeAccessInstanceTaskRequest &request);

      /**
       * @summary Queries the vSwitches for synchronization nodes.
       *
       * @param request DescribeAccessInstanceVSwitchListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessInstanceVSwitchListResponse
       */
      Models::DescribeAccessInstanceVSwitchListResponse describeAccessInstanceVSwitchListWithOptions(const Models::DescribeAccessInstanceVSwitchListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the vSwitches for synchronization nodes.
       *
       * @param request DescribeAccessInstanceVSwitchListRequest
       * @return DescribeAccessInstanceVSwitchListResponse
       */
      Models::DescribeAccessInstanceVSwitchListResponse describeAccessInstanceVSwitchList(const Models::DescribeAccessInstanceVSwitchListRequest &request);

      /**
       * @summary Queries the VPCs associated with synchronization nodes.
       *
       * @param request DescribeAccessInstanceVpcListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessInstanceVpcListResponse
       */
      Models::DescribeAccessInstanceVpcListResponse describeAccessInstanceVpcListWithOptions(const Models::DescribeAccessInstanceVpcListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the VPCs associated with synchronization nodes.
       *
       * @param request DescribeAccessInstanceVpcListRequest
       * @return DescribeAccessInstanceVpcListResponse
       */
      Models::DescribeAccessInstanceVpcListResponse describeAccessInstanceVpcList(const Models::DescribeAccessInstanceVpcListRequest &request);

      /**
       * @summary Returns a list of available zones for access instances.
       *
       * @param request DescribeAccessInstanceZoneListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessInstanceZoneListResponse
       */
      Models::DescribeAccessInstanceZoneListResponse describeAccessInstanceZoneListWithOptions(const Models::DescribeAccessInstanceZoneListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a list of available zones for access instances.
       *
       * @param request DescribeAccessInstanceZoneListRequest
       * @return DescribeAccessInstanceZoneListResponse
       */
      Models::DescribeAccessInstanceZoneListResponse describeAccessInstanceZoneList(const Models::DescribeAccessInstanceZoneListRequest &request);

      /**
       * @summary Queries the details of a specified ACK cluster connector.
       *
       * @param request DescribeAckClusterConnectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAckClusterConnectorResponse
       */
      Models::DescribeAckClusterConnectorResponse describeAckClusterConnectorWithOptions(const Models::DescribeAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified ACK cluster connector.
       *
       * @param request DescribeAckClusterConnectorRequest
       * @return DescribeAckClusterConnectorResponse
       */
      Models::DescribeAckClusterConnectorResponse describeAckClusterConnector(const Models::DescribeAckClusterConnectorRequest &request);

      /**
       * @summary Queries a list of ACK cluster connectors in batches.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Manage your calls properly.
       *
       * @param request DescribeAckClusterConnectorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAckClusterConnectorsResponse
       */
      Models::DescribeAckClusterConnectorsResponse describeAckClusterConnectorsWithOptions(const Models::DescribeAckClusterConnectorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of ACK cluster connectors in batches.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Manage your calls properly.
       *
       * @param request DescribeAckClusterConnectorsRequest
       * @return DescribeAckClusterConnectorsResponse
       */
      Models::DescribeAckClusterConnectorsResponse describeAckClusterConnectors(const Models::DescribeAckClusterConnectorsRequest &request);

      /**
       * @summary Queries the namespaces in an Alibaba Cloud Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DescribeAckClusterNamespacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAckClusterNamespacesResponse
       */
      Models::DescribeAckClusterNamespacesResponse describeAckClusterNamespacesWithOptions(const Models::DescribeAckClusterNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the namespaces in an Alibaba Cloud Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DescribeAckClusterNamespacesRequest
       * @return DescribeAckClusterNamespacesResponse
       */
      Models::DescribeAckClusterNamespacesResponse describeAckClusterNamespaces(const Models::DescribeAckClusterNamespacesRequest &request);

      /**
       * @summary Queries the labels within an Alibaba Cloud Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DescribeAckClusterPodLabelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAckClusterPodLabelsResponse
       */
      Models::DescribeAckClusterPodLabelsResponse describeAckClusterPodLabelsWithOptions(const Models::DescribeAckClusterPodLabelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the labels within an Alibaba Cloud Container Service for Kubernetes (ACK) cluster.
       *
       * @param request DescribeAckClusterPodLabelsRequest
       * @return DescribeAckClusterPodLabelsResponse
       */
      Models::DescribeAckClusterPodLabelsResponse describeAckClusterPodLabels(const Models::DescribeAckClusterPodLabelsRequest &request);

      /**
       * @summary Queries for Container Service for Kubernetes (ACK) clusters based on specified conditions, such as cluster type and specifications.
       *
       * @param request DescribeAckClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAckClustersResponse
       */
      Models::DescribeAckClustersResponse describeAckClustersWithOptions(const Models::DescribeAckClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries for Container Service for Kubernetes (ACK) clusters based on specified conditions, such as cluster type and specifications.
       *
       * @param request DescribeAckClustersRequest
       * @return DescribeAckClustersResponse
       */
      Models::DescribeAckClustersResponse describeAckClusters(const Models::DescribeAckClustersRequest &request);

      /**
       * @summary Queries multiple ACL applications.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 requests per second. Calls that exceed this limit are throttled, which may impact your business.
       *
       * @param request DescribeAclAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclAppsResponse
       */
      Models::DescribeAclAppsResponse describeAclAppsWithOptions(const Models::DescribeAclAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries multiple ACL applications.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 requests per second. Calls that exceed this limit are throttled, which may impact your business.
       *
       * @param request DescribeAclAppsRequest
       * @return DescribeAclAppsResponse
       */
      Models::DescribeAclAppsResponse describeAclApps(const Models::DescribeAclAppsRequest &request);

      /**
       * @summary Queries a list of ACL backups.
       *
       * @param request DescribeAclBackupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclBackupListResponse
       */
      Models::DescribeAclBackupListResponse describeAclBackupListWithOptions(const Models::DescribeAclBackupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of ACL backups.
       *
       * @param request DescribeAclBackupListRequest
       * @return DescribeAclBackupListResponse
       */
      Models::DescribeAclBackupListResponse describeAclBackupList(const Models::DescribeAclBackupListRequest &request);

      /**
       * @summary Queries the details of an Access Control List (ACL) check.
       *
       * @description ## QPS limit
       * This API is limited to 10 queries per second (QPS) per user. Calls exceeding this limit are throttled.
       *
       * @param request DescribeAclCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclCheckResponse
       */
      Models::DescribeAclCheckResponse describeAclCheckWithOptions(const Models::DescribeAclCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an Access Control List (ACL) check.
       *
       * @description ## QPS limit
       * This API is limited to 10 queries per second (QPS) per user. Calls exceeding this limit are throttled.
       *
       * @param request DescribeAclCheckRequest
       * @return DescribeAclCheckResponse
       */
      Models::DescribeAclCheckResponse describeAclCheck(const Models::DescribeAclCheckRequest &request);

      /**
       * @summary Queries the quota for access control list (ACL) checks.
       *
       * @description ## QPS limits
       * Each user can make up to 10 queries per second (QPS). If you exceed this limit, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
       *
       * @param request DescribeAclCheckQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclCheckQuotaResponse
       */
      Models::DescribeAclCheckQuotaResponse describeAclCheckQuotaWithOptions(const Models::DescribeAclCheckQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota for access control list (ACL) checks.
       *
       * @description ## QPS limits
       * Each user can make up to 10 queries per second (QPS). If you exceed this limit, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
       *
       * @param request DescribeAclCheckQuotaRequest
       * @return DescribeAclCheckQuotaResponse
       */
      Models::DescribeAclCheckQuotaResponse describeAclCheckQuota(const Models::DescribeAclCheckQuotaRequest &request);

      /**
       * @summary Queries Access Control List (ACL) checks in batches.
       *
       * @description ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If this limit is exceeded, your API calls are throttled. This may affect your business. We recommend that you plan your calls accordingly.
       *
       * @param request DescribeAclChecksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclChecksResponse
       */
      Models::DescribeAclChecksResponse describeAclChecksWithOptions(const Models::DescribeAclChecksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Access Control List (ACL) checks in batches.
       *
       * @description ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If this limit is exceeded, your API calls are throttled. This may affect your business. We recommend that you plan your calls accordingly.
       *
       * @param request DescribeAclChecksRequest
       * @return DescribeAclChecksResponse
       */
      Models::DescribeAclChecksResponse describeAclChecks(const Models::DescribeAclChecksRequest &request);

      /**
       * @summary Retrieves the total number of access control policy configurations.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeAclRuleCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclRuleCountResponse
       */
      Models::DescribeAclRuleCountResponse describeAclRuleCountWithOptions(const Models::DescribeAclRuleCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the total number of access control policy configurations.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request DescribeAclRuleCountRequest
       * @return DescribeAclRuleCountResponse
       */
      Models::DescribeAclRuleCountResponse describeAclRuleCount(const Models::DescribeAclRuleCountRequest &request);

      /**
       * @summary Retrieves the ACL whitelist.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeAclWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclWhitelistResponse
       */
      Models::DescribeAclWhitelistResponse describeAclWhitelistWithOptions(const Models::DescribeAclWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the ACL whitelist.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request DescribeAclWhitelistRequest
       * @return DescribeAclWhitelistResponse
       */
      Models::DescribeAclWhitelistResponse describeAclWhitelist(const Models::DescribeAclWhitelistRequest &request);

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
      Models::DescribeAddressBookResponse describeAddressBookWithOptions(const Models::DescribeAddressBookRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeAddressBookResponse describeAddressBook(const Models::DescribeAddressBookRequest &request);

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
      Models::DescribeAssetListResponse describeAssetListWithOptions(const Models::DescribeAssetListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeAssetListResponse describeAssetList(const Models::DescribeAssetListRequest &request);

      /**
       * @summary Retrieves a list of asset risk levels.
       *
       * @param request DescribeAssetRiskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAssetRiskListResponse
       */
      Models::DescribeAssetRiskListResponse describeAssetRiskListWithOptions(const Models::DescribeAssetRiskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of asset risk levels.
       *
       * @param request DescribeAssetRiskListRequest
       * @return DescribeAssetRiskListResponse
       */
      Models::DescribeAssetRiskListResponse describeAssetRiskList(const Models::DescribeAssetRiskListRequest &request);

      /**
       * @summary Queries the statistics information of assets protected by Cloud Firewall.
       *
       * @param request DescribeAssetStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAssetStatisticResponse
       */
      Models::DescribeAssetStatisticResponse describeAssetStatisticWithOptions(const Models::DescribeAssetStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics information of assets protected by Cloud Firewall.
       *
       * @param request DescribeAssetStatisticRequest
       * @return DescribeAssetStatisticResponse
       */
      Models::DescribeAssetStatisticResponse describeAssetStatistic(const Models::DescribeAssetStatisticRequest &request);

      /**
       * @summary Queries the list of attack categories.
       *
       * @description This operation is generally used for paging query of information about assets protected by Cloud Firewall.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation at an appropriate frequency.
       *
       * @param request DescribeAttackAppCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAttackAppCategoryResponse
       */
      Models::DescribeAttackAppCategoryResponse describeAttackAppCategoryWithOptions(const Models::DescribeAttackAppCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of attack categories.
       *
       * @description This operation is generally used for paging query of information about assets protected by Cloud Firewall.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Invoke this operation at an appropriate frequency.
       *
       * @param request DescribeAttackAppCategoryRequest
       * @return DescribeAttackAppCategoryResponse
       */
      Models::DescribeAttackAppCategoryResponse describeAttackAppCategory(const Models::DescribeAttackAppCategoryRequest &request);

      /**
       * @summary Queries the status of log delivery.
       *
       * @param request DescribeBatchSlsDispatchStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBatchSlsDispatchStatusResponse
       */
      Models::DescribeBatchSlsDispatchStatusResponse describeBatchSlsDispatchStatusWithOptions(const Models::DescribeBatchSlsDispatchStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of log delivery.
       *
       * @param request DescribeBatchSlsDispatchStatusRequest
       * @return DescribeBatchSlsDispatchStatusResponse
       */
      Models::DescribeBatchSlsDispatchStatusResponse describeBatchSlsDispatchStatus(const Models::DescribeBatchSlsDispatchStatusRequest &request);

      /**
       * @deprecated OpenAPI DescribeCfwRiskLevelSummary is deprecated
       *
       * @summary Queries a summary of threat levels for Cloud Firewall.
       *
       * @param request DescribeCfwRiskLevelSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCfwRiskLevelSummaryResponse
       */
      Models::DescribeCfwRiskLevelSummaryResponse describeCfwRiskLevelSummaryWithOptions(const Models::DescribeCfwRiskLevelSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeCfwRiskLevelSummary is deprecated
       *
       * @summary Queries a summary of threat levels for Cloud Firewall.
       *
       * @param request DescribeCfwRiskLevelSummaryRequest
       * @return DescribeCfwRiskLevelSummaryResponse
       */
      Models::DescribeCfwRiskLevelSummaryResponse describeCfwRiskLevelSummary(const Models::DescribeCfwRiskLevelSummaryRequest &request);

      /**
       * @summary Retrieves information about cleared authorizations.
       *
       * @description ### QPS limits
       * The queries per second (QPS) limit for this API is 10 per user. Exceeding this limit triggers throttling, which may impact your business. Call this API at a reasonable rate.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClearAuthInfoResponse
       */
      Models::DescribeClearAuthInfoResponse describeClearAuthInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about cleared authorizations.
       *
       * @description ### QPS limits
       * The queries per second (QPS) limit for this API is 10 per user. Exceeding this limit triggers throttling, which may impact your business. Call this API at a reasonable rate.
       *
       * @return DescribeClearAuthInfoResponse
       */
      Models::DescribeClearAuthInfoResponse describeClearAuthInfo();

      /**
       * @summary Queries outbound IPs.
       *
       * @param request DescribeConfiguredDestinationIPRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConfiguredDestinationIPResponse
       */
      Models::DescribeConfiguredDestinationIPResponse describeConfiguredDestinationIPWithOptions(const Models::DescribeConfiguredDestinationIPRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries outbound IPs.
       *
       * @param request DescribeConfiguredDestinationIPRequest
       * @return DescribeConfiguredDestinationIPResponse
       */
      Models::DescribeConfiguredDestinationIPResponse describeConfiguredDestinationIP(const Models::DescribeConfiguredDestinationIPRequest &request);

      /**
       * @summary Lists the active outbound domain names.
       *
       * @param request DescribeConfiguredDomainNamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConfiguredDomainNamesResponse
       */
      Models::DescribeConfiguredDomainNamesResponse describeConfiguredDomainNamesWithOptions(const Models::DescribeConfiguredDomainNamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the active outbound domain names.
       *
       * @param request DescribeConfiguredDomainNamesRequest
       * @return DescribeConfiguredDomainNamesResponse
       */
      Models::DescribeConfiguredDomainNamesResponse describeConfiguredDomainNames(const Models::DescribeConfiguredDomainNamesRequest &request);

      /**
       * @summary Retrieves information about all access control policies.
       *
       * @description This operation performs a paged query for information about access control policies.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 for a single user. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeControlPolicyResponse
       */
      Models::DescribeControlPolicyResponse describeControlPolicyWithOptions(const Models::DescribeControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about all access control policies.
       *
       * @description This operation performs a paged query for information about access control policies.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 for a single user. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeControlPolicyRequest
       * @return DescribeControlPolicyResponse
       */
      Models::DescribeControlPolicyResponse describeControlPolicy(const Models::DescribeControlPolicyRequest &request);

      /**
       * @summary Queries the domain name resolution results of an access control policy.
       *
       * @param request DescribeControlPolicyDomainResolveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeControlPolicyDomainResolveResponse
       */
      Models::DescribeControlPolicyDomainResolveResponse describeControlPolicyDomainResolveWithOptions(const Models::DescribeControlPolicyDomainResolveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain name resolution results of an access control policy.
       *
       * @param request DescribeControlPolicyDomainResolveRequest
       * @return DescribeControlPolicyDomainResolveResponse
       */
      Models::DescribeControlPolicyDomainResolveResponse describeControlPolicyDomainResolve(const Models::DescribeControlPolicyDomainResolveRequest &request);

      /**
       * @summary Retrieves a list of created NAT firewalls.
       *
       * @param request DescribeCreatedNatFirewallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreatedNatFirewallResponse
       */
      Models::DescribeCreatedNatFirewallResponse describeCreatedNatFirewallWithOptions(const Models::DescribeCreatedNatFirewallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of created NAT firewalls.
       *
       * @param request DescribeCreatedNatFirewallRequest
       * @return DescribeCreatedNatFirewallResponse
       */
      Models::DescribeCreatedNatFirewallResponse describeCreatedNatFirewall(const Models::DescribeCreatedNatFirewallRequest &request);

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
      Models::DescribeCtrlInstanceMemberAccountsResponse describeCtrlInstanceMemberAccountsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of member accounts.
       *
       * @description This operation queries information about the member accounts of Cloud Firewall.
       * ## QPS limits
       * This operation is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled. Throttling may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @return DescribeCtrlInstanceMemberAccountsResponse
       */
      Models::DescribeCtrlInstanceMemberAccountsResponse describeCtrlInstanceMemberAccounts();

      /**
       * @summary Provides Intrusion Prevention System (IPS) protection for internet traffic.
       *
       * @param request DescribeDefaultIPSConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefaultIPSConfigResponse
       */
      Models::DescribeDefaultIPSConfigResponse describeDefaultIPSConfigWithOptions(const Models::DescribeDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides Intrusion Prevention System (IPS) protection for internet traffic.
       *
       * @param request DescribeDefaultIPSConfigRequest
       * @return DescribeDefaultIPSConfigResponse
       */
      Models::DescribeDefaultIPSConfigResponse describeDefaultIPSConfig(const Models::DescribeDefaultIPSConfigRequest &request);

      /**
       * @summary Queries the list of access control lists (ACLs) for the DNS firewall.
       *
       * @param request DescribeDnsFirewallPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsFirewallPolicyResponse
       */
      Models::DescribeDnsFirewallPolicyResponse describeDnsFirewallPolicyWithOptions(const Models::DescribeDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of access control lists (ACLs) for the DNS firewall.
       *
       * @param request DescribeDnsFirewallPolicyRequest
       * @return DescribeDnsFirewallPolicyResponse
       */
      Models::DescribeDnsFirewallPolicyResponse describeDnsFirewallPolicy(const Models::DescribeDnsFirewallPolicyRequest &request);

      /**
       * @deprecated OpenAPI DescribeDomainResolve is deprecated
       *
       * @summary Retrieves the Domain Name System (DNS) resolution results for a domain name.
       *
       * @description This operation retrieves the DNS resolution result for a domain name. You can retrieve resolution results only for domain names that use Alibaba Cloud DNS.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. If you exceed this limit, your API calls are throttled, which may impact your business. Call this operation at a reasonable rate to avoid throttling.
       *
       * @param request DescribeDomainResolveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainResolveResponse
       */
      Models::DescribeDomainResolveResponse describeDomainResolveWithOptions(const Models::DescribeDomainResolveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeDomainResolve is deprecated
       *
       * @summary Retrieves the Domain Name System (DNS) resolution results for a domain name.
       *
       * @description This operation retrieves the DNS resolution result for a domain name. You can retrieve resolution results only for domain names that use Alibaba Cloud DNS.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. If you exceed this limit, your API calls are throttled, which may impact your business. Call this operation at a reasonable rate to avoid throttling.
       *
       * @param request DescribeDomainResolveRequest
       * @return DescribeDomainResolveResponse
       */
      Models::DescribeDomainResolveResponse describeDomainResolve(const Models::DescribeDomainResolveRequest &request);

      /**
       * @summary Queries the information and download URLs of file download tasks.
       *
       * @param request DescribeDownloadTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDownloadTaskResponse
       */
      Models::DescribeDownloadTaskResponse describeDownloadTaskWithOptions(const Models::DescribeDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information and download URLs of file download tasks.
       *
       * @param request DescribeDownloadTaskRequest
       * @return DescribeDownloadTaskResponse
       */
      Models::DescribeDownloadTaskResponse describeDownloadTask(const Models::DescribeDownloadTaskRequest &request);

      /**
       * @summary Queries the types of download tasks. The returned types correspond to the TaskType field in other download-related API operations.
       *
       * @param request DescribeDownloadTaskTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDownloadTaskTypeResponse
       */
      Models::DescribeDownloadTaskTypeResponse describeDownloadTaskTypeWithOptions(const Models::DescribeDownloadTaskTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types of download tasks. The returned types correspond to the TaskType field in other download-related API operations.
       *
       * @param request DescribeDownloadTaskTypeRequest
       * @return DescribeDownloadTaskTypeResponse
       */
      Models::DescribeDownloadTaskTypeResponse describeDownloadTaskType(const Models::DescribeDownloadTaskTypeRequest &request);

      /**
       * @deprecated OpenAPI DescribeFirewallDropStatistics is deprecated
       *
       * @summary Retrieves statistics on packets dropped by the firewall.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for this API is 10 per user. If you exceed this limit, your API calls are throttled. This may affect your business operations. We recommend that you make API calls at a reasonable rate.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFirewallDropStatisticsResponse
       */
      Models::DescribeFirewallDropStatisticsResponse describeFirewallDropStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeFirewallDropStatistics is deprecated
       *
       * @summary Retrieves statistics on packets dropped by the firewall.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for this API is 10 per user. If you exceed this limit, your API calls are throttled. This may affect your business operations. We recommend that you make API calls at a reasonable rate.
       *
       * @return DescribeFirewallDropStatisticsResponse
       */
      Models::DescribeFirewallDropStatisticsResponse describeFirewallDropStatistics();

      /**
       * @summary Retrieves the overall firewall interception trend, including Internet, VPC, and NAT traffic.
       *
       * @param request DescribeFirewallDropTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFirewallDropTrendResponse
       */
      Models::DescribeFirewallDropTrendResponse describeFirewallDropTrendWithOptions(const Models::DescribeFirewallDropTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the overall firewall interception trend, including Internet, VPC, and NAT traffic.
       *
       * @param request DescribeFirewallDropTrendRequest
       * @return DescribeFirewallDropTrendResponse
       */
      Models::DescribeFirewallDropTrendResponse describeFirewallDropTrend(const Models::DescribeFirewallDropTrendRequest &request);

      /**
       * @summary Retrieves the details of a firewall task.
       *
       * @description ### QPS limit
       * You can make up to 10 queries per second (QPS). If you exceed this limit, API calls are throttled, which may impact your business. We recommend that you plan your calls accordingly.
       *
       * @param request DescribeFirewallTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFirewallTaskResponse
       */
      Models::DescribeFirewallTaskResponse describeFirewallTaskWithOptions(const Models::DescribeFirewallTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a firewall task.
       *
       * @description ### QPS limit
       * You can make up to 10 queries per second (QPS). If you exceed this limit, API calls are throttled, which may impact your business. We recommend that you plan your calls accordingly.
       *
       * @param request DescribeFirewallTaskRequest
       * @return DescribeFirewallTaskResponse
       */
      Models::DescribeFirewallTaskResponse describeFirewallTask(const Models::DescribeFirewallTaskRequest &request);

      /**
       * @summary Queries the traffic trend of a firewall.
       *
       * @param request DescribeFirewallTrafficTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFirewallTrafficTrendResponse
       */
      Models::DescribeFirewallTrafficTrendResponse describeFirewallTrafficTrendWithOptions(const Models::DescribeFirewallTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic trend of a firewall.
       *
       * @param request DescribeFirewallTrafficTrendRequest
       * @return DescribeFirewallTrafficTrendResponse
       */
      Models::DescribeFirewallTrafficTrendResponse describeFirewallTrafficTrend(const Models::DescribeFirewallTrafficTrendRequest &request);

      /**
       * @summary Queries the vSwitches that are created by Cloud Firewall.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for this operation is 10 per user. If you exceed the limit, API calls are throttled, which may affect your business. Therefore, call this operation at a reasonable rate.
       *
       * @param request DescribeFirewallVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFirewallVSwitchResponse
       */
      Models::DescribeFirewallVSwitchResponse describeFirewallVSwitchWithOptions(const Models::DescribeFirewallVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the vSwitches that are created by Cloud Firewall.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for this operation is 10 per user. If you exceed the limit, API calls are throttled, which may affect your business. Therefore, call this operation at a reasonable rate.
       *
       * @param request DescribeFirewallVSwitchRequest
       * @return DescribeFirewallVSwitchResponse
       */
      Models::DescribeFirewallVSwitchResponse describeFirewallVSwitch(const Models::DescribeFirewallVSwitchRequest &request);

      /**
       * @summary Queries the vSwitch resources for Cloud Firewall.
       *
       * @param request DescribeFirewallVswitchResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFirewallVswitchResourcesResponse
       */
      Models::DescribeFirewallVswitchResourcesResponse describeFirewallVswitchResourcesWithOptions(const Models::DescribeFirewallVswitchResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the vSwitch resources for Cloud Firewall.
       *
       * @param request DescribeFirewallVswitchResourcesRequest
       * @return DescribeFirewallVswitchResourcesResponse
       */
      Models::DescribeFirewallVswitchResourcesResponse describeFirewallVswitchResources(const Models::DescribeFirewallVswitchResourcesRequest &request);

      /**
       * @summary Query IPS rules
       *
       * @param request DescribeIPSRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIPSRulesResponse
       */
      Models::DescribeIPSRulesResponse describeIPSRulesWithOptions(const Models::DescribeIPSRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query IPS rules
       *
       * @param request DescribeIPSRulesRequest
       * @return DescribeIPSRulesResponse
       */
      Models::DescribeIPSRulesResponse describeIPSRules(const Models::DescribeIPSRulesRequest &request);

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
      Models::DescribeInstanceMembersResponse describeInstanceMembersWithOptions(const Models::DescribeInstanceMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeInstanceMembersResponse describeInstanceMembers(const Models::DescribeInstanceMembersRequest &request);

      /**
       * @summary Retrieves the account in a resource directory for an instance.
       *
       * @param request DescribeInstanceRdAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceRdAccountsResponse
       */
      Models::DescribeInstanceRdAccountsResponse describeInstanceRdAccountsWithOptions(const Models::DescribeInstanceRdAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the account in a resource directory for an instance.
       *
       * @param request DescribeInstanceRdAccountsRequest
       * @return DescribeInstanceRdAccountsResponse
       */
      Models::DescribeInstanceRdAccountsResponse describeInstanceRdAccounts(const Models::DescribeInstanceRdAccountsRequest &request);

      /**
       * @summary Queries the risk levels of instances.
       *
       * @param request DescribeInstanceRiskLevelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceRiskLevelsResponse
       */
      Models::DescribeInstanceRiskLevelsResponse describeInstanceRiskLevelsWithOptions(const Models::DescribeInstanceRiskLevelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the risk levels of instances.
       *
       * @param request DescribeInstanceRiskLevelsRequest
       * @return DescribeInstanceRiskLevelsResponse
       */
      Models::DescribeInstanceRiskLevelsResponse describeInstanceRiskLevels(const Models::DescribeInstanceRiskLevelsRequest &request);

      /**
       * @summary Internet security trends
       *
       * @description ## QPS limit
       * This API is limited to 10 requests per second per user. Exceeding this limit triggers throttling, which can disrupt your service. Plan your API calls accordingly.
       *
       * @param request DescribeInternetDropTrafficTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetDropTrafficTrendResponse
       */
      Models::DescribeInternetDropTrafficTrendResponse describeInternetDropTrafficTrendWithOptions(const Models::DescribeInternetDropTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Internet security trends
       *
       * @description ## QPS limit
       * This API is limited to 10 requests per second per user. Exceeding this limit triggers throttling, which can disrupt your service. Plan your API calls accordingly.
       *
       * @param request DescribeInternetDropTrafficTrendRequest
       * @return DescribeInternetDropTrafficTrendResponse
       */
      Models::DescribeInternetDropTrafficTrendResponse describeInternetDropTrafficTrend(const Models::DescribeInternetDropTrafficTrendRequest &request);

      /**
       * @summary You can obtain details about Internet access.
       *
       * @param request DescribeInternetOpenDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetOpenDetailResponse
       */
      Models::DescribeInternetOpenDetailResponse describeInternetOpenDetailWithOptions(const Models::DescribeInternetOpenDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can obtain details about Internet access.
       *
       * @param request DescribeInternetOpenDetailRequest
       * @return DescribeInternetOpenDetailResponse
       */
      Models::DescribeInternetOpenDetailResponse describeInternetOpenDetail(const Models::DescribeInternetOpenDetailRequest &request);

      /**
       * @summary Queries the details of an access control policy group in Cloud Firewall.
       *
       * @param request DescribeInternetOpenIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetOpenIpResponse
       */
      Models::DescribeInternetOpenIpResponse describeInternetOpenIpWithOptions(const Models::DescribeInternetOpenIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an access control policy group in Cloud Firewall.
       *
       * @param request DescribeInternetOpenIpRequest
       * @return DescribeInternetOpenIpResponse
       */
      Models::DescribeInternetOpenIpResponse describeInternetOpenIp(const Models::DescribeInternetOpenIpRequest &request);

      /**
       * @summary Queries the ports that are open to the Internet.
       *
       * @description ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeInternetOpenPortRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetOpenPortResponse
       */
      Models::DescribeInternetOpenPortResponse describeInternetOpenPortWithOptions(const Models::DescribeInternetOpenPortRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ports that are open to the Internet.
       *
       * @description ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeInternetOpenPortRequest
       * @return DescribeInternetOpenPortResponse
       */
      Models::DescribeInternetOpenPortResponse describeInternetOpenPort(const Models::DescribeInternetOpenPortRequest &request);

      /**
       * @summary Queries services exposed to the Internet.
       *
       * @description ## QPS limits
       * You can make up to 10 queries per second (QPS). If you exceed this limit, API calls are throttled. This may affect your business. We recommend that you make API calls at a reasonable rate.
       *
       * @param request DescribeInternetOpenServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetOpenServiceResponse
       */
      Models::DescribeInternetOpenServiceResponse describeInternetOpenServiceWithOptions(const Models::DescribeInternetOpenServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries services exposed to the Internet.
       *
       * @description ## QPS limits
       * You can make up to 10 queries per second (QPS). If you exceed this limit, API calls are throttled. This may affect your business. We recommend that you make API calls at a reasonable rate.
       *
       * @param request DescribeInternetOpenServiceRequest
       * @return DescribeInternetOpenServiceResponse
       */
      Models::DescribeInternetOpenServiceResponse describeInternetOpenService(const Models::DescribeInternetOpenServiceRequest &request);

      /**
       * @summary Retrieves statistics about assets exposed to the Internet.
       *
       * @param request DescribeInternetOpenStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetOpenStatisticResponse
       */
      Models::DescribeInternetOpenStatisticResponse describeInternetOpenStatisticWithOptions(const Models::DescribeInternetOpenStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves statistics about assets exposed to the Internet.
       *
       * @param request DescribeInternetOpenStatisticRequest
       * @return DescribeInternetOpenStatisticResponse
       */
      Models::DescribeInternetOpenStatisticResponse describeInternetOpenStatistic(const Models::DescribeInternetOpenStatisticRequest &request);

      /**
       * @summary Retrieves a list of Internet service names.
       *
       * @param request DescribeInternetServiceNameListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetServiceNameListResponse
       */
      Models::DescribeInternetServiceNameListResponse describeInternetServiceNameListWithOptions(const Models::DescribeInternetServiceNameListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of Internet service names.
       *
       * @param request DescribeInternetServiceNameListRequest
       * @return DescribeInternetServiceNameListResponse
       */
      Models::DescribeInternetServiceNameListResponse describeInternetServiceNameList(const Models::DescribeInternetServiceNameListRequest &request);

      /**
       * @summary Retrieves the details of Internet-facing SLB instances.
       *
       * @param request DescribeInternetSlbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetSlbResponse
       */
      Models::DescribeInternetSlbResponse describeInternetSlbWithOptions(const Models::DescribeInternetSlbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of Internet-facing SLB instances.
       *
       * @param request DescribeInternetSlbRequest
       * @return DescribeInternetSlbResponse
       */
      Models::DescribeInternetSlbResponse describeInternetSlb(const Models::DescribeInternetSlbRequest &request);

      /**
       * @summary This operation queries the Top-N internet traffic over time.
       *
       * @param request DescribeInternetTimeTopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetTimeTopResponse
       */
      Models::DescribeInternetTimeTopResponse describeInternetTimeTopWithOptions(const Models::DescribeInternetTimeTopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation queries the Top-N internet traffic over time.
       *
       * @param request DescribeInternetTimeTopRequest
       * @return DescribeInternetTimeTopResponse
       */
      Models::DescribeInternetTimeTopResponse describeInternetTimeTop(const Models::DescribeInternetTimeTopRequest &request);

      /**
       * @summary Queries the top Internet traffic trends.
       *
       * @param request DescribeInternetTrafficTopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetTrafficTopResponse
       */
      Models::DescribeInternetTrafficTopResponse describeInternetTrafficTopWithOptions(const Models::DescribeInternetTrafficTopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top Internet traffic trends.
       *
       * @param request DescribeInternetTrafficTopRequest
       * @return DescribeInternetTrafficTopResponse
       */
      Models::DescribeInternetTrafficTopResponse describeInternetTrafficTop(const Models::DescribeInternetTrafficTopRequest &request);

      /**
       * @summary Queries Internet traffic trends.
       *
       * @param request DescribeInternetTrafficTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetTrafficTrendResponse
       */
      Models::DescribeInternetTrafficTrendResponse describeInternetTrafficTrendWithOptions(const Models::DescribeInternetTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Internet traffic trends.
       *
       * @param request DescribeInternetTrafficTrendRequest
       * @return DescribeInternetTrafficTrendResponse
       */
      Models::DescribeInternetTrafficTrendResponse describeInternetTrafficTrend(const Models::DescribeInternetTrafficTrendRequest &request);

      /**
       * @summary Queries the trend of vulnerabilities on ECS instances.
       *
       * @param request DescribeInvadeEcsTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvadeEcsTrendResponse
       */
      Models::DescribeInvadeEcsTrendResponse describeInvadeEcsTrendWithOptions(const Models::DescribeInvadeEcsTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trend of vulnerabilities on ECS instances.
       *
       * @param request DescribeInvadeEcsTrendRequest
       * @return DescribeInvadeEcsTrendResponse
       */
      Models::DescribeInvadeEcsTrendResponse describeInvadeEcsTrend(const Models::DescribeInvadeEcsTrendRequest &request);

      /**
       * @summary Retrieves the details of a threat detection event.
       *
       * @param request DescribeInvadeEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvadeEventDetailResponse
       */
      Models::DescribeInvadeEventDetailResponse describeInvadeEventDetailWithOptions(const Models::DescribeInvadeEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a threat detection event.
       *
       * @param request DescribeInvadeEventDetailRequest
       * @return DescribeInvadeEventDetailResponse
       */
      Models::DescribeInvadeEventDetailResponse describeInvadeEventDetail(const Models::DescribeInvadeEventDetailRequest &request);

      /**
       * @summary Queries Cloud Firewall threat detection events.
       *
       * @param request DescribeInvadeEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvadeEventListResponse
       */
      Models::DescribeInvadeEventListResponse describeInvadeEventListWithOptions(const Models::DescribeInvadeEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Cloud Firewall threat detection events.
       *
       * @param request DescribeInvadeEventListRequest
       * @return DescribeInvadeEventListResponse
       */
      Models::DescribeInvadeEventListResponse describeInvadeEventList(const Models::DescribeInvadeEventListRequest &request);

      /**
       * @summary Retrieves a list of vulnerability names.
       *
       * @param request DescribeInvadeEventNameListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvadeEventNameListResponse
       */
      Models::DescribeInvadeEventNameListResponse describeInvadeEventNameListWithOptions(const Models::DescribeInvadeEventNameListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of vulnerability names.
       *
       * @param request DescribeInvadeEventNameListRequest
       * @return DescribeInvadeEventNameListResponse
       */
      Models::DescribeInvadeEventNameListResponse describeInvadeEventNameList(const Models::DescribeInvadeEventNameListRequest &request);

      /**
       * @summary Queries statistics about intrusion events.
       *
       * @param request DescribeInvadeEventStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvadeEventStatisticResponse
       */
      Models::DescribeInvadeEventStatisticResponse describeInvadeEventStatisticWithOptions(const Models::DescribeInvadeEventStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics about intrusion events.
       *
       * @param request DescribeInvadeEventStatisticRequest
       * @return DescribeInvadeEventStatisticResponse
       */
      Models::DescribeInvadeEventStatisticResponse describeInvadeEventStatistic(const Models::DescribeInvadeEventStatisticRequest &request);

      /**
       * @summary Queries the list of IPS Private IP Tracing associations.
       *
       * @description This operation queries information about assets that are protected by Cloud Firewall. The results are paginated.
       * ## Limits
       * This operation is limited to 10 queries per second (QPS) per user. If you exceed the limit, API calls are throttled. This may affect your business. Call this operation at a reasonable rate.
       *
       * @param request DescribeIpsPrivateAssocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpsPrivateAssocResponse
       */
      Models::DescribeIpsPrivateAssocResponse describeIpsPrivateAssocWithOptions(const Models::DescribeIpsPrivateAssocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of IPS Private IP Tracing associations.
       *
       * @description This operation queries information about assets that are protected by Cloud Firewall. The results are paginated.
       * ## Limits
       * This operation is limited to 10 queries per second (QPS) per user. If you exceed the limit, API calls are throttled. This may affect your business. Call this operation at a reasonable rate.
       *
       * @param request DescribeIpsPrivateAssocRequest
       * @return DescribeIpsPrivateAssocResponse
       */
      Models::DescribeIpsPrivateAssocResponse describeIpsPrivateAssoc(const Models::DescribeIpsPrivateAssocRequest &request);

      /**
       * @summary Retrieves information about ISPs.
       *
       * @param request DescribeIspInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIspInfoResponse
       */
      Models::DescribeIspInfoResponse describeIspInfoWithOptions(const Models::DescribeIspInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about ISPs.
       *
       * @param request DescribeIspInfoRequest
       * @return DescribeIspInfoResponse
       */
      Models::DescribeIspInfoResponse describeIspInfo(const Models::DescribeIspInfoRequest &request);

      /**
       * @summary Retrieves information about geographic locations.
       *
       * @param request DescribeLocationInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLocationInfoResponse
       */
      Models::DescribeLocationInfoResponse describeLocationInfoWithOptions(const Models::DescribeLocationInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about geographic locations.
       *
       * @param request DescribeLocationInfoRequest
       * @return DescribeLocationInfoResponse
       */
      Models::DescribeLocationInfoResponse describeLocationInfo(const Models::DescribeLocationInfoRequest &request);

      /**
       * @summary Retrieves the details of the Logstore in Simple Log Service.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogStoreInfoResponse
       */
      Models::DescribeLogStoreInfoResponse describeLogStoreInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of the Logstore in Simple Log Service.
       *
       * @return DescribeLogStoreInfoResponse
       */
      Models::DescribeLogStoreInfoResponse describeLogStoreInfo();

      /**
       * @summary Describes member information.
       *
       * @param request DescribeMemberInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMemberInfoResponse
       */
      Models::DescribeMemberInfoResponse describeMemberInfoWithOptions(const Models::DescribeMemberInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes member information.
       *
       * @param request DescribeMemberInfoRequest
       * @return DescribeMemberInfoResponse
       */
      Models::DescribeMemberInfoResponse describeMemberInfo(const Models::DescribeMemberInfoRequest &request);

      /**
       * @summary Queries the paging status of the NAT firewall.
       *
       * @param request DescribeNatAclPageStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatAclPageStatusResponse
       */
      Models::DescribeNatAclPageStatusResponse describeNatAclPageStatusWithOptions(const Models::DescribeNatAclPageStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the paging status of the NAT firewall.
       *
       * @param request DescribeNatAclPageStatusRequest
       * @return DescribeNatAclPageStatusResponse
       */
      Models::DescribeNatAclPageStatusResponse describeNatAclPageStatus(const Models::DescribeNatAclPageStatusRequest &request);

      /**
       * @summary Queries the access control policy groups for NAT firewalls.
       *
       * @param request DescribeNatFirewallAclGroupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallAclGroupListResponse
       */
      Models::DescribeNatFirewallAclGroupListResponse describeNatFirewallAclGroupListWithOptions(const Models::DescribeNatFirewallAclGroupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access control policy groups for NAT firewalls.
       *
       * @param request DescribeNatFirewallAclGroupListRequest
       * @return DescribeNatFirewallAclGroupListResponse
       */
      Models::DescribeNatFirewallAclGroupListResponse describeNatFirewallAclGroupList(const Models::DescribeNatFirewallAclGroupListRequest &request);

      /**
       * @summary Queries the access control policies for NAT firewalls.
       *
       * @description This operation queries access control policies for NAT firewalls and returns the results in a paginated list.
       *
       * @param request DescribeNatFirewallControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallControlPolicyResponse
       */
      Models::DescribeNatFirewallControlPolicyResponse describeNatFirewallControlPolicyWithOptions(const Models::DescribeNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access control policies for NAT firewalls.
       *
       * @description This operation queries access control policies for NAT firewalls and returns the results in a paginated list.
       *
       * @param request DescribeNatFirewallControlPolicyRequest
       * @return DescribeNatFirewallControlPolicyResponse
       */
      Models::DescribeNatFirewallControlPolicyResponse describeNatFirewallControlPolicy(const Models::DescribeNatFirewallControlPolicyRequest &request);

      /**
       * @summary Overview - NAT firewall blocking trends
       *
       * @param request DescribeNatFirewallDropTrafficTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallDropTrafficTrendResponse
       */
      Models::DescribeNatFirewallDropTrafficTrendResponse describeNatFirewallDropTrafficTrendWithOptions(const Models::DescribeNatFirewallDropTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Overview - NAT firewall blocking trends
       *
       * @param request DescribeNatFirewallDropTrafficTrendRequest
       * @return DescribeNatFirewallDropTrafficTrendResponse
       */
      Models::DescribeNatFirewallDropTrafficTrendResponse describeNatFirewallDropTrafficTrend(const Models::DescribeNatFirewallDropTrafficTrendRequest &request);

      /**
       * @summary Queries NAT firewall details.
       *
       * @param request DescribeNatFirewallListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallListResponse
       */
      Models::DescribeNatFirewallListResponse describeNatFirewallListWithOptions(const Models::DescribeNatFirewallListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries NAT firewall details.
       *
       * @param request DescribeNatFirewallListRequest
       * @return DescribeNatFirewallListResponse
       */
      Models::DescribeNatFirewallListResponse describeNatFirewallList(const Models::DescribeNatFirewallListRequest &request);

      /**
       * @summary Queries the priority range of an access control policy for a NAT firewall.
       *
       * @description You can call this operation to query the priority range of an access control policy for outbound traffic on a NAT firewall.
       *
       * @param request DescribeNatFirewallPolicyPriorUsedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallPolicyPriorUsedResponse
       */
      Models::DescribeNatFirewallPolicyPriorUsedResponse describeNatFirewallPolicyPriorUsedWithOptions(const Models::DescribeNatFirewallPolicyPriorUsedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the priority range of an access control policy for a NAT firewall.
       *
       * @description You can call this operation to query the priority range of an access control policy for outbound traffic on a NAT firewall.
       *
       * @param request DescribeNatFirewallPolicyPriorUsedRequest
       * @return DescribeNatFirewallPolicyPriorUsedResponse
       */
      Models::DescribeNatFirewallPolicyPriorUsedResponse describeNatFirewallPolicyPriorUsed(const Models::DescribeNatFirewallPolicyPriorUsedRequest &request);

      /**
       * @summary Queries the precheck details for a NAT firewall.
       *
       * @param request DescribeNatFirewallPrecheckDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallPrecheckDetailResponse
       */
      Models::DescribeNatFirewallPrecheckDetailResponse describeNatFirewallPrecheckDetailWithOptions(const Models::DescribeNatFirewallPrecheckDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the precheck details for a NAT firewall.
       *
       * @param request DescribeNatFirewallPrecheckDetailRequest
       * @return DescribeNatFirewallPrecheckDetailResponse
       */
      Models::DescribeNatFirewallPrecheckDetailResponse describeNatFirewallPrecheckDetail(const Models::DescribeNatFirewallPrecheckDetailRequest &request);

      /**
       * @summary Retrieves the quotas for a NAT firewall.
       *
       * @param request DescribeNatFirewallQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallQuotaResponse
       */
      Models::DescribeNatFirewallQuotaResponse describeNatFirewallQuotaWithOptions(const Models::DescribeNatFirewallQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the quotas for a NAT firewall.
       *
       * @param request DescribeNatFirewallQuotaRequest
       * @return DescribeNatFirewallQuotaResponse
       */
      Models::DescribeNatFirewallQuotaResponse describeNatFirewallQuota(const Models::DescribeNatFirewallQuotaRequest &request);

      /**
       * @summary Queries the top traffic data of a NAT firewall at a specific point in time.
       *
       * @param request DescribeNatFirewallTimeTopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallTimeTopResponse
       */
      Models::DescribeNatFirewallTimeTopResponse describeNatFirewallTimeTopWithOptions(const Models::DescribeNatFirewallTimeTopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top traffic data of a NAT firewall at a specific point in time.
       *
       * @param request DescribeNatFirewallTimeTopRequest
       * @return DescribeNatFirewallTimeTopResponse
       */
      Models::DescribeNatFirewallTimeTopResponse describeNatFirewallTimeTop(const Models::DescribeNatFirewallTimeTopRequest &request);

      /**
       * @summary Overview: NAT Traffic Trend
       *
       * @param request DescribeNatFirewallTrafficTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallTrafficTrendResponse
       */
      Models::DescribeNatFirewallTrafficTrendResponse describeNatFirewallTrafficTrendWithOptions(const Models::DescribeNatFirewallTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Overview: NAT Traffic Trend
       *
       * @param request DescribeNatFirewallTrafficTrendRequest
       * @return DescribeNatFirewallTrafficTrendResponse
       */
      Models::DescribeNatFirewallTrafficTrendResponse describeNatFirewallTrafficTrend(const Models::DescribeNatFirewallTrafficTrendRequest &request);

      /**
       * @summary Queries a list of network instances.
       *
       * @param request DescribeNetworkInstanceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkInstanceListResponse
       */
      Models::DescribeNetworkInstanceListResponse describeNetworkInstanceListWithOptions(const Models::DescribeNetworkInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of network instances.
       *
       * @param request DescribeNetworkInstanceListRequest
       * @return DescribeNetworkInstanceListResponse
       */
      Models::DescribeNetworkInstanceListResponse describeNetworkInstanceList(const Models::DescribeNetworkInstanceListRequest &request);

      /**
       * @summary Queries the relationships between network instances.
       *
       * @param request DescribeNetworkInstanceRelationListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkInstanceRelationListResponse
       */
      Models::DescribeNetworkInstanceRelationListResponse describeNetworkInstanceRelationListWithOptions(const Models::DescribeNetworkInstanceRelationListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the relationships between network instances.
       *
       * @param request DescribeNetworkInstanceRelationListRequest
       * @return DescribeNetworkInstanceRelationListResponse
       */
      Models::DescribeNetworkInstanceRelationListResponse describeNetworkInstanceRelationList(const Models::DescribeNetworkInstanceRelationListRequest &request);

      /**
       * @summary Queries the ratio of the top network traffic.
       *
       * @param request DescribeNetworkTrafficTopRatioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkTrafficTopRatioResponse
       */
      Models::DescribeNetworkTrafficTopRatioResponse describeNetworkTrafficTopRatioWithOptions(const Models::DescribeNetworkTrafficTopRatioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ratio of the top network traffic.
       *
       * @param request DescribeNetworkTrafficTopRatioRequest
       * @return DescribeNetworkTrafficTopRatioResponse
       */
      Models::DescribeNetworkTrafficTopRatioResponse describeNetworkTrafficTopRatio(const Models::DescribeNetworkTrafficTopRatioRequest &request);

      /**
       * @summary Retrieves statistics about access sources for public IP addresses.
       *
       * @param request DescribeOpenIpAccessSrcStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOpenIpAccessSrcStatResponse
       */
      Models::DescribeOpenIpAccessSrcStatResponse describeOpenIpAccessSrcStatWithOptions(const Models::DescribeOpenIpAccessSrcStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves statistics about access sources for public IP addresses.
       *
       * @param request DescribeOpenIpAccessSrcStatRequest
       * @return DescribeOpenIpAccessSrcStatResponse
       */
      Models::DescribeOpenIpAccessSrcStatResponse describeOpenIpAccessSrcStat(const Models::DescribeOpenIpAccessSrcStatRequest &request);

      /**
       * @summary Retrieves a list of assets with outbound connections.
       *
       * @param request DescribeOutgoingAssetListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingAssetListResponse
       */
      Models::DescribeOutgoingAssetListResponse describeOutgoingAssetListWithOptions(const Models::DescribeOutgoingAssetListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of assets with outbound connections.
       *
       * @param request DescribeOutgoingAssetListRequest
       * @return DescribeOutgoingAssetListResponse
       */
      Models::DescribeOutgoingAssetListResponse describeOutgoingAssetList(const Models::DescribeOutgoingAssetListRequest &request);

      /**
       * @summary This operation queries outbound destinations.
       *
       * @param request DescribeOutgoingDestinationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingDestinationResponse
       */
      Models::DescribeOutgoingDestinationResponse describeOutgoingDestinationWithOptions(const Models::DescribeOutgoingDestinationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation queries outbound destinations.
       *
       * @param request DescribeOutgoingDestinationRequest
       * @return DescribeOutgoingDestinationResponse
       */
      Models::DescribeOutgoingDestinationResponse describeOutgoingDestination(const Models::DescribeOutgoingDestinationRequest &request);

      /**
       * @summary Queries the categories of outbound connection destinations.
       *
       * @param request DescribeOutgoingDestinationCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingDestinationCategoryResponse
       */
      Models::DescribeOutgoingDestinationCategoryResponse describeOutgoingDestinationCategoryWithOptions(const Models::DescribeOutgoingDestinationCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the categories of outbound connection destinations.
       *
       * @param request DescribeOutgoingDestinationCategoryRequest
       * @return DescribeOutgoingDestinationCategoryResponse
       */
      Models::DescribeOutgoingDestinationCategoryResponse describeOutgoingDestinationCategory(const Models::DescribeOutgoingDestinationCategoryRequest &request);

      /**
       * @summary Displays the destination IP of an active outbound connection.
       *
       * @param request DescribeOutgoingDestinationIPRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingDestinationIPResponse
       */
      Models::DescribeOutgoingDestinationIPResponse describeOutgoingDestinationIPWithOptions(const Models::DescribeOutgoingDestinationIPRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Displays the destination IP of an active outbound connection.
       *
       * @param request DescribeOutgoingDestinationIPRequest
       * @return DescribeOutgoingDestinationIPResponse
       */
      Models::DescribeOutgoingDestinationIPResponse describeOutgoingDestinationIP(const Models::DescribeOutgoingDestinationIPRequest &request);

      /**
       * @summary Retrieves the details of an outbound destination IP address.
       *
       * @param request DescribeOutgoingDestinationIPDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingDestinationIPDetailResponse
       */
      Models::DescribeOutgoingDestinationIPDetailResponse describeOutgoingDestinationIPDetailWithOptions(const Models::DescribeOutgoingDestinationIPDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an outbound destination IP address.
       *
       * @param request DescribeOutgoingDestinationIPDetailRequest
       * @return DescribeOutgoingDestinationIPDetailResponse
       */
      Models::DescribeOutgoingDestinationIPDetailResponse describeOutgoingDestinationIPDetail(const Models::DescribeOutgoingDestinationIPDetailRequest &request);

      /**
       * @summary Retrieves information about outbound domain names.
       *
       * @param request DescribeOutgoingDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingDomainResponse
       */
      Models::DescribeOutgoingDomainResponse describeOutgoingDomainWithOptions(const Models::DescribeOutgoingDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about outbound domain names.
       *
       * @param request DescribeOutgoingDomainRequest
       * @return DescribeOutgoingDomainResponse
       */
      Models::DescribeOutgoingDomainResponse describeOutgoingDomain(const Models::DescribeOutgoingDomainRequest &request);

      /**
       * @summary Retrieves the details of an outbound domain.
       *
       * @param request DescribeOutgoingDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingDomainDetailResponse
       */
      Models::DescribeOutgoingDomainDetailResponse describeOutgoingDomainDetailWithOptions(const Models::DescribeOutgoingDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an outbound domain.
       *
       * @param request DescribeOutgoingDomainDetailRequest
       * @return DescribeOutgoingDomainDetailResponse
       */
      Models::DescribeOutgoingDomainDetailResponse describeOutgoingDomainDetail(const Models::DescribeOutgoingDomainDetailRequest &request);

      /**
       * @summary Queries the number of intrusion prevention threats.
       *
       * @param request DescribeOutgoingRiskDomainAndIpCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingRiskDomainAndIpCountResponse
       */
      Models::DescribeOutgoingRiskDomainAndIpCountResponse describeOutgoingRiskDomainAndIpCountWithOptions(const Models::DescribeOutgoingRiskDomainAndIpCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of intrusion prevention threats.
       *
       * @param request DescribeOutgoingRiskDomainAndIpCountRequest
       * @return DescribeOutgoingRiskDomainAndIpCountResponse
       */
      Models::DescribeOutgoingRiskDomainAndIpCountResponse describeOutgoingRiskDomainAndIpCount(const Models::DescribeOutgoingRiskDomainAndIpCountRequest &request);

      /**
       * @summary Queries the trend of outgoing connection threats.
       *
       * @param request DescribeOutgoingRiskTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingRiskTrendResponse
       */
      Models::DescribeOutgoingRiskTrendResponse describeOutgoingRiskTrendWithOptions(const Models::DescribeOutgoingRiskTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trend of outgoing connection threats.
       *
       * @param request DescribeOutgoingRiskTrendRequest
       * @return DescribeOutgoingRiskTrendResponse
       */
      Models::DescribeOutgoingRiskTrendResponse describeOutgoingRiskTrend(const Models::DescribeOutgoingRiskTrendRequest &request);

      /**
       * @summary Retrieves outbound connection statistics.
       *
       * @param request DescribeOutgoingStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingStatisticResponse
       */
      Models::DescribeOutgoingStatisticResponse describeOutgoingStatisticWithOptions(const Models::DescribeOutgoingStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves outbound connection statistics.
       *
       * @param request DescribeOutgoingStatisticRequest
       * @return DescribeOutgoingStatisticResponse
       */
      Models::DescribeOutgoingStatisticResponse describeOutgoingStatistic(const Models::DescribeOutgoingStatisticRequest &request);

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
      Models::DescribeOutgoingTagResponse describeOutgoingTagWithOptions(const Models::DescribeOutgoingTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries outbound connection tags.
       *
       * @description ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 per user. If you exceed the limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeOutgoingTagRequest
       * @return DescribeOutgoingTagResponse
       */
      Models::DescribeOutgoingTagResponse describeOutgoingTag(const Models::DescribeOutgoingTagRequest &request);

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
      Models::DescribePageDocumentsResponse describePageDocumentsWithOptions(const Models::DescribePageDocumentsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribePageDocumentsResponse describePageDocuments(const Models::DescribePageDocumentsRequest &request);

      /**
       * @summary Queries the status of strict mode for access control policies.
       *
       * @description You can call this operation to query the status of strict mode for access control policies.
       * ## QPS limits
       * This operation is limited to 10 queries per second (QPS) for each user. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request DescribePolicyAdvancedConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePolicyAdvancedConfigResponse
       */
      Models::DescribePolicyAdvancedConfigResponse describePolicyAdvancedConfigWithOptions(const Models::DescribePolicyAdvancedConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of strict mode for access control policies.
       *
       * @description You can call this operation to query the status of strict mode for access control policies.
       * ## QPS limits
       * This operation is limited to 10 queries per second (QPS) for each user. API calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request DescribePolicyAdvancedConfigRequest
       * @return DescribePolicyAdvancedConfigResponse
       */
      Models::DescribePolicyAdvancedConfigResponse describePolicyAdvancedConfig(const Models::DescribePolicyAdvancedConfigRequest &request);

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
      Models::DescribePolicyPriorUsedResponse describePolicyPriorUsedWithOptions(const Models::DescribePolicyPriorUsedRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribePolicyPriorUsedResponse describePolicyPriorUsed(const Models::DescribePolicyPriorUsedRequest &request);

      /**
       * @summary Queries pay-as-you-go 2.0 bills.
       *
       * @description For pay-as-you-go users, the bill details are accurate to the specific resource instance level. For subscription users, only overall queries are supported.
       *
       * @param request DescribePostpayBillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostpayBillResponse
       */
      Models::DescribePostpayBillResponse describePostpayBillWithOptions(const Models::DescribePostpayBillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries pay-as-you-go 2.0 bills.
       *
       * @description For pay-as-you-go users, the bill details are accurate to the specific resource instance level. For subscription users, only overall queries are supported.
       *
       * @param request DescribePostpayBillRequest
       * @return DescribePostpayBillResponse
       */
      Models::DescribePostpayBillResponse describePostpayBill(const Models::DescribePostpayBillRequest &request);

      /**
       * @summary Queries the status of pay-as-you-go protection.
       *
       * @param request DescribePostpayEnabledProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostpayEnabledProtectionResponse
       */
      Models::DescribePostpayEnabledProtectionResponse describePostpayEnabledProtectionWithOptions(const Models::DescribePostpayEnabledProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of pay-as-you-go protection.
       *
       * @param request DescribePostpayEnabledProtectionRequest
       * @return DescribePostpayEnabledProtectionResponse
       */
      Models::DescribePostpayEnabledProtectionResponse describePostpayEnabledProtection(const Models::DescribePostpayEnabledProtectionRequest &request);

      /**
       * @summary Queries the details of pay-as-you-go billing traffic.
       *
       * @description For pay-as-you-go users, the details are accurate to the specific resource instance level. For subscription users, only overall queries are supported.
       *
       * @param request DescribePostpayTrafficDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostpayTrafficDetailResponse
       */
      Models::DescribePostpayTrafficDetailResponse describePostpayTrafficDetailWithOptions(const Models::DescribePostpayTrafficDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of pay-as-you-go billing traffic.
       *
       * @description For pay-as-you-go users, the details are accurate to the specific resource instance level. For subscription users, only overall queries are supported.
       *
       * @param request DescribePostpayTrafficDetailRequest
       * @return DescribePostpayTrafficDetailResponse
       */
      Models::DescribePostpayTrafficDetailResponse describePostpayTrafficDetail(const Models::DescribePostpayTrafficDetailRequest &request);

      /**
       * @summary Queries the total pay-as-you-go traffic for all border firewalls.
       *
       * @description The statistics are for the current Cloud Firewall instance and include all data from the date of purchase.
       *
       * @param request DescribePostpayTrafficTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostpayTrafficTotalResponse
       */
      Models::DescribePostpayTrafficTotalResponse describePostpayTrafficTotalWithOptions(const Models::DescribePostpayTrafficTotalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total pay-as-you-go traffic for all border firewalls.
       *
       * @description The statistics are for the current Cloud Firewall instance and include all data from the date of purchase.
       *
       * @param request DescribePostpayTrafficTotalRequest
       * @return DescribePostpayTrafficTotalResponse
       */
      Models::DescribePostpayTrafficTotalResponse describePostpayTrafficTotal(const Models::DescribePostpayTrafficTotalRequest &request);

      /**
       * @summary Queries the status of the Internet Border firewall for a pay-as-you-go instance.
       *
       * @param request DescribePostpayUserInternetStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostpayUserInternetStatusResponse
       */
      Models::DescribePostpayUserInternetStatusResponse describePostpayUserInternetStatusWithOptions(const Models::DescribePostpayUserInternetStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the Internet Border firewall for a pay-as-you-go instance.
       *
       * @param request DescribePostpayUserInternetStatusRequest
       * @return DescribePostpayUserInternetStatusResponse
       */
      Models::DescribePostpayUserInternetStatusResponse describePostpayUserInternetStatus(const Models::DescribePostpayUserInternetStatusRequest &request);

      /**
       * @summary Queries the NAT border firewall status for a pay-as-you-go Cloud Firewall.
       *
       * @param request DescribePostpayUserNatStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostpayUserNatStatusResponse
       */
      Models::DescribePostpayUserNatStatusResponse describePostpayUserNatStatusWithOptions(const Models::DescribePostpayUserNatStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the NAT border firewall status for a pay-as-you-go Cloud Firewall.
       *
       * @param request DescribePostpayUserNatStatusRequest
       * @return DescribePostpayUserNatStatusResponse
       */
      Models::DescribePostpayUserNatStatusResponse describePostpayUserNatStatus(const Models::DescribePostpayUserNatStatusRequest &request);

      /**
       * @summary Queries the status of the virtual private cloud (VPC) firewall switch module for a pay-as-you-go user.
       *
       * @param request DescribePostpayUserVpcStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostpayUserVpcStatusResponse
       */
      Models::DescribePostpayUserVpcStatusResponse describePostpayUserVpcStatusWithOptions(const Models::DescribePostpayUserVpcStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the virtual private cloud (VPC) firewall switch module for a pay-as-you-go user.
       *
       * @param request DescribePostpayUserVpcStatusRequest
       * @return DescribePostpayUserVpcStatusResponse
       */
      Models::DescribePostpayUserVpcStatusResponse describePostpayUserVpcStatus(const Models::DescribePostpayUserVpcStatusRequest &request);

      /**
       * @summary Describes one or more prefix lists.
       *
       * @param request DescribePrefixListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrefixListsResponse
       */
      Models::DescribePrefixListsResponse describePrefixListsWithOptions(const Models::DescribePrefixListsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes one or more prefix lists.
       *
       * @param request DescribePrefixListsRequest
       * @return DescribePrefixListsResponse
       */
      Models::DescribePrefixListsResponse describePrefixLists(const Models::DescribePrefixListsRequest &request);

      /**
       * @summary Queries the billing overview of a subscription 2.0 instance.
       *
       * @description The statistics cover the current Cloud Firewall instance of the user, including all data since the purchase date.
       *
       * @param request DescribePrepayBillTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrepayBillTotalResponse
       */
      Models::DescribePrepayBillTotalResponse describePrepayBillTotalWithOptions(const Models::DescribePrepayBillTotalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the billing overview of a subscription 2.0 instance.
       *
       * @description The statistics cover the current Cloud Firewall instance of the user, including all data since the purchase date.
       *
       * @param request DescribePrepayBillTotalRequest
       * @return DescribePrepayBillTotalResponse
       */
      Models::DescribePrepayBillTotalResponse describePrepayBillTotal(const Models::DescribePrepayBillTotalRequest &request);

      /**
       * @summary Queries the list of private DNS domain names.
       *
       * @description Queries the list of domain names that require private DNS endpoints for domain name resolution.
       *
       * @param request DescribePrivateDnsDomainNameListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrivateDnsDomainNameListResponse
       */
      Models::DescribePrivateDnsDomainNameListResponse describePrivateDnsDomainNameListWithOptions(const Models::DescribePrivateDnsDomainNameListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of private DNS domain names.
       *
       * @description Queries the list of domain names that require private DNS endpoints for domain name resolution.
       *
       * @param request DescribePrivateDnsDomainNameListRequest
       * @return DescribePrivateDnsDomainNameListResponse
       */
      Models::DescribePrivateDnsDomainNameListResponse describePrivateDnsDomainNameList(const Models::DescribePrivateDnsDomainNameListRequest &request);

      /**
       * @summary Retrieves the details of a private DNS endpoint.
       *
       * @description This operation queries the details of a private DNS endpoint.
       *
       * @param request DescribePrivateDnsEndpointDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrivateDnsEndpointDetailResponse
       */
      Models::DescribePrivateDnsEndpointDetailResponse describePrivateDnsEndpointDetailWithOptions(const Models::DescribePrivateDnsEndpointDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a private DNS endpoint.
       *
       * @description This operation queries the details of a private DNS endpoint.
       *
       * @param request DescribePrivateDnsEndpointDetailRequest
       * @return DescribePrivateDnsEndpointDetailResponse
       */
      Models::DescribePrivateDnsEndpointDetailResponse describePrivateDnsEndpointDetail(const Models::DescribePrivateDnsEndpointDetailRequest &request);

      /**
       * @summary Queries a list of private DNS endpoints.
       *
       * @param request DescribePrivateDnsEndpointListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrivateDnsEndpointListResponse
       */
      Models::DescribePrivateDnsEndpointListResponse describePrivateDnsEndpointListWithOptions(const Models::DescribePrivateDnsEndpointListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of private DNS endpoints.
       *
       * @param request DescribePrivateDnsEndpointListRequest
       * @return DescribePrivateDnsEndpointListResponse
       */
      Models::DescribePrivateDnsEndpointListResponse describePrivateDnsEndpointList(const Models::DescribePrivateDnsEndpointListRequest &request);

      /**
       * @summary Returns statistics about private DNS.
       *
       * @param request DescribePrivateDnsStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrivateDnsStatisticsResponse
       */
      Models::DescribePrivateDnsStatisticsResponse describePrivateDnsStatisticsWithOptions(const Models::DescribePrivateDnsStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns statistics about private DNS.
       *
       * @param request DescribePrivateDnsStatisticsRequest
       * @return DescribePrivateDnsStatisticsResponse
       */
      Models::DescribePrivateDnsStatisticsResponse describePrivateDnsStatistics(const Models::DescribePrivateDnsStatisticsRequest &request);

      /**
       * @summary Retrieves region information.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeRegionInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionInfoResponse
       */
      Models::DescribeRegionInfoResponse describeRegionInfoWithOptions(const Models::DescribeRegionInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves region information.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeRegionInfoRequest
       * @return DescribeRegionInfoResponse
       */
      Models::DescribeRegionInfoResponse describeRegionInfo(const Models::DescribeRegionInfoRequest &request);

      /**
       * @summary Queries the traffic redirection settings by region and asset type.
       *
       * @description This operation is used to retrieve DNS resolution results for a domain name. Currently, only resolution results from Alibaba Cloud DNS are supported. The domain name that you want to query must use Alibaba Cloud DNS. Otherwise, the resolution results cannot be retrieved.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request DescribeRegionResourceTypeAutoEnableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionResourceTypeAutoEnableResponse
       */
      Models::DescribeRegionResourceTypeAutoEnableResponse describeRegionResourceTypeAutoEnableWithOptions(const Models::DescribeRegionResourceTypeAutoEnableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic redirection settings by region and asset type.
       *
       * @description This operation is used to retrieve DNS resolution results for a domain name. Currently, only resolution results from Alibaba Cloud DNS are supported. The domain name that you want to query must use Alibaba Cloud DNS. Otherwise, the resolution results cannot be retrieved.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at an appropriate frequency.
       *
       * @param request DescribeRegionResourceTypeAutoEnableRequest
       * @return DescribeRegionResourceTypeAutoEnableResponse
       */
      Models::DescribeRegionResourceTypeAutoEnableResponse describeRegionResourceTypeAutoEnable(const Models::DescribeRegionResourceTypeAutoEnableRequest &request);

      /**
       * @summary Queries the default traffic redirection for an asset type.
       *
       * @description This operation is used to retrieve DNS resolution results for a domain name. Currently, only resolution results from Alibaba Cloud DNS are supported. The domain name that you want to query must use Alibaba Cloud DNS. Otherwise, the resolution results cannot be retrieved.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeResourceTypeAutoEnableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceTypeAutoEnableResponse
       */
      Models::DescribeResourceTypeAutoEnableResponse describeResourceTypeAutoEnableWithOptions(const Models::DescribeResourceTypeAutoEnableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default traffic redirection for an asset type.
       *
       * @description This operation is used to retrieve DNS resolution results for a domain name. Currently, only resolution results from Alibaba Cloud DNS are supported. The domain name that you want to query must use Alibaba Cloud DNS. Otherwise, the resolution results cannot be retrieved.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeResourceTypeAutoEnableRequest
       * @return DescribeResourceTypeAutoEnableResponse
       */
      Models::DescribeResourceTypeAutoEnableResponse describeResourceTypeAutoEnable(const Models::DescribeResourceTypeAutoEnableRequest &request);

      /**
       * @summary Retrieves the details of intrusion prevention events.
       *
       * @description You can use this operation to query and download the details of intrusion prevention events. We recommend querying 5 to 10 entries at a time. To prevent query timeouts, set the NoLocation parameter to true if you do not need IP geolocation information.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10. If you exceed the limit, your API calls are throttled. This may affect your business. Make calls to this operation at a reasonable rate.
       *
       * @param request DescribeRiskEventGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskEventGroupResponse
       */
      Models::DescribeRiskEventGroupResponse describeRiskEventGroupWithOptions(const Models::DescribeRiskEventGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of intrusion prevention events.
       *
       * @description You can use this operation to query and download the details of intrusion prevention events. We recommend querying 5 to 10 entries at a time. To prevent query timeouts, set the NoLocation parameter to true if you do not need IP geolocation information.
       * ## QPS limit
       * The queries per second (QPS) limit for a single user is 10. If you exceed the limit, your API calls are throttled. This may affect your business. Make calls to this operation at a reasonable rate.
       *
       * @param request DescribeRiskEventGroupRequest
       * @return DescribeRiskEventGroupResponse
       */
      Models::DescribeRiskEventGroupResponse describeRiskEventGroup(const Models::DescribeRiskEventGroupRequest &request);

      /**
       * @summary Queries the attack payloads of intrusion events.
       *
       * @param request DescribeRiskEventPayloadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskEventPayloadResponse
       */
      Models::DescribeRiskEventPayloadResponse describeRiskEventPayloadWithOptions(const Models::DescribeRiskEventPayloadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attack payloads of intrusion events.
       *
       * @param request DescribeRiskEventPayloadRequest
       * @return DescribeRiskEventPayloadResponse
       */
      Models::DescribeRiskEventPayloadResponse describeRiskEventPayload(const Models::DescribeRiskEventPayloadRequest &request);

      /**
       * @summary Provides statistics for intrusion prevention events.
       *
       * @param request DescribeRiskEventStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskEventStatisticResponse
       */
      Models::DescribeRiskEventStatisticResponse describeRiskEventStatisticWithOptions(const Models::DescribeRiskEventStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides statistics for intrusion prevention events.
       *
       * @param request DescribeRiskEventStatisticRequest
       * @return DescribeRiskEventStatisticResponse
       */
      Models::DescribeRiskEventStatisticResponse describeRiskEventStatistic(const Models::DescribeRiskEventStatisticRequest &request);

      /**
       * @summary Retrieves the ranking of applications that are targeted by intrusion prevention attacks.
       *
       * @param request DescribeRiskEventTopAttackAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskEventTopAttackAppResponse
       */
      Models::DescribeRiskEventTopAttackAppResponse describeRiskEventTopAttackAppWithOptions(const Models::DescribeRiskEventTopAttackAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the ranking of applications that are targeted by intrusion prevention attacks.
       *
       * @param request DescribeRiskEventTopAttackAppRequest
       * @return DescribeRiskEventTopAttackAppResponse
       */
      Models::DescribeRiskEventTopAttackAppResponse describeRiskEventTopAttackApp(const Models::DescribeRiskEventTopAttackAppRequest &request);

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
      Models::DescribeRiskEventTopAttackAssetResponse describeRiskEventTopAttackAssetWithOptions(const Models::DescribeRiskEventTopAttackAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top assets targeted by attacks.
       *
       * @description ## QPS limits
       * You can make up to 10 queries per second (QPS) to this API. If you exceed this limit, your API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeRiskEventTopAttackAssetRequest
       * @return DescribeRiskEventTopAttackAssetResponse
       */
      Models::DescribeRiskEventTopAttackAssetResponse describeRiskEventTopAttackAsset(const Models::DescribeRiskEventTopAttackAssetRequest &request);

      /**
       * @summary Retrieves a ranked list of attack types from intrusion prevention events.
       *
       * @param request DescribeRiskEventTopAttackTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskEventTopAttackTypeResponse
       */
      Models::DescribeRiskEventTopAttackTypeResponse describeRiskEventTopAttackTypeWithOptions(const Models::DescribeRiskEventTopAttackTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a ranked list of attack types from intrusion prevention events.
       *
       * @param request DescribeRiskEventTopAttackTypeRequest
       * @return DescribeRiskEventTopAttackTypeResponse
       */
      Models::DescribeRiskEventTopAttackTypeResponse describeRiskEventTopAttackType(const Models::DescribeRiskEventTopAttackTypeRequest &request);

      /**
       * @deprecated OpenAPI DescribeRiskSecurityGroupDetail is deprecated
       *
       * @summary Retrieves the details of a risk security group.
       *
       * @param request DescribeRiskSecurityGroupDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskSecurityGroupDetailResponse
       */
      Models::DescribeRiskSecurityGroupDetailResponse describeRiskSecurityGroupDetailWithOptions(const Models::DescribeRiskSecurityGroupDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeRiskSecurityGroupDetail is deprecated
       *
       * @summary Retrieves the details of a risk security group.
       *
       * @param request DescribeRiskSecurityGroupDetailRequest
       * @return DescribeRiskSecurityGroupDetailResponse
       */
      Models::DescribeRiskSecurityGroupDetailResponse describeRiskSecurityGroupDetail(const Models::DescribeRiskSecurityGroupDetailRequest &request);

      /**
       * @summary Retrieves the details of a data leak event.
       *
       * @param request DescribeSdlEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSdlEventDetailResponse
       */
      Models::DescribeSdlEventDetailResponse describeSdlEventDetailWithOptions(const Models::DescribeSdlEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a data leak event.
       *
       * @param request DescribeSdlEventDetailRequest
       * @return DescribeSdlEventDetailResponse
       */
      Models::DescribeSdlEventDetailResponse describeSdlEventDetail(const Models::DescribeSdlEventDetailRequest &request);

      /**
       * @summary Query data breach events.
       *
       * @param request DescribeSdlEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSdlEventListResponse
       */
      Models::DescribeSdlEventListResponse describeSdlEventListWithOptions(const Models::DescribeSdlEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query data breach events.
       *
       * @param request DescribeSdlEventListRequest
       * @return DescribeSdlEventListResponse
       */
      Models::DescribeSdlEventListResponse describeSdlEventList(const Models::DescribeSdlEventListRequest &request);

      /**
       * @summary Retrieves the list of sensitive data involved in data leaks.
       *
       * @param request DescribeSdlEventSdListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSdlEventSdListResponse
       */
      Models::DescribeSdlEventSdListResponse describeSdlEventSdListWithOptions(const Models::DescribeSdlEventSdListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of sensitive data involved in data leaks.
       *
       * @param request DescribeSdlEventSdListRequest
       * @return DescribeSdlEventSdListResponse
       */
      Models::DescribeSdlEventSdListResponse describeSdlEventSdList(const Models::DescribeSdlEventSdListRequest &request);

      /**
       * @summary Queries statistics about data leaks.
       *
       * @param request DescribeSdlEventStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSdlEventStatisticResponse
       */
      Models::DescribeSdlEventStatisticResponse describeSdlEventStatisticWithOptions(const Models::DescribeSdlEventStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics about data leaks.
       *
       * @param request DescribeSdlEventStatisticRequest
       * @return DescribeSdlEventStatisticResponse
       */
      Models::DescribeSdlEventStatisticResponse describeSdlEventStatistic(const Models::DescribeSdlEventStatisticRequest &request);

      /**
       * @summary Retrieves the packet payload of a sensitive data leak event.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeSdlLastPayloadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSdlLastPayloadResponse
       */
      Models::DescribeSdlLastPayloadResponse describeSdlLastPayloadWithOptions(const Models::DescribeSdlLastPayloadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the packet payload of a sensitive data leak event.
       *
       * @description ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request DescribeSdlLastPayloadRequest
       * @return DescribeSdlLastPayloadResponse
       */
      Models::DescribeSdlLastPayloadResponse describeSdlLastPayload(const Models::DescribeSdlLastPayloadRequest &request);

      /**
       * @summary Retrieves the details of sensitive data.
       *
       * @param request DescribeSdlStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSdlStatisticResponse
       */
      Models::DescribeSdlStatisticResponse describeSdlStatisticWithOptions(const Models::DescribeSdlStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of sensitive data.
       *
       * @param request DescribeSdlStatisticRequest
       * @return DescribeSdlStatisticResponse
       */
      Models::DescribeSdlStatisticResponse describeSdlStatistic(const Models::DescribeSdlStatisticRequest &request);

      /**
       * @summary Queries the settings of the safe mode.
       *
       * @description You can use this operation to query the safe mode of Cloud Firewall.
       * ## QPS limits
       * This operation is limited to 10 queries per second (QPS) for each user. If you exceed this limit, your API calls are throttled. Throttling can affect your business operations. We recommend that you plan your API calls accordingly.
       *
       * @param request DescribeSecurityModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityModeResponse
       */
      Models::DescribeSecurityModeResponse describeSecurityModeWithOptions(const Models::DescribeSecurityModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the settings of the safe mode.
       *
       * @description You can use this operation to query the safe mode of Cloud Firewall.
       * ## QPS limits
       * This operation is limited to 10 queries per second (QPS) for each user. If you exceed this limit, your API calls are throttled. Throttling can affect your business operations. We recommend that you plan your API calls accordingly.
       *
       * @param request DescribeSecurityModeRequest
       * @return DescribeSecurityModeResponse
       */
      Models::DescribeSecurityModeResponse describeSecurityMode(const Models::DescribeSecurityModeRequest &request);

      /**
       * @deprecated OpenAPI DescribeSecurityProxy is deprecated, please use Cloudfw::2017-12-07::DescribeNatFirewallList instead.
       *
       * @summary Retrieves NAT firewall information.
       *
       * @param request DescribeSecurityProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityProxyResponse
       */
      Models::DescribeSecurityProxyResponse describeSecurityProxyWithOptions(const Models::DescribeSecurityProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeSecurityProxy is deprecated, please use Cloudfw::2017-12-07::DescribeNatFirewallList instead.
       *
       * @summary Retrieves NAT firewall information.
       *
       * @param request DescribeSecurityProxyRequest
       * @return DescribeSecurityProxyResponse
       */
      Models::DescribeSecurityProxyResponse describeSecurityProxy(const Models::DescribeSecurityProxyRequest &request);

      /**
       * @summary Describes NAT firewall resources.
       *
       * @param request DescribeSecurityProxyResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityProxyResourcesResponse
       */
      Models::DescribeSecurityProxyResourcesResponse describeSecurityProxyResourcesWithOptions(const Models::DescribeSecurityProxyResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes NAT firewall resources.
       *
       * @param request DescribeSecurityProxyResourcesRequest
       * @return DescribeSecurityProxyResourcesResponse
       */
      Models::DescribeSecurityProxyResourcesResponse describeSecurityProxyResources(const Models::DescribeSecurityProxyResourcesRequest &request);

      /**
       * @summary Queries the status of the sensitive data detection switch.
       *
       * @param request DescribeSensitiveSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveSwitchResponse
       */
      Models::DescribeSensitiveSwitchResponse describeSensitiveSwitchWithOptions(const Models::DescribeSensitiveSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the sensitive data detection switch.
       *
       * @param request DescribeSensitiveSwitchRequest
       * @return DescribeSensitiveSwitchResponse
       */
      Models::DescribeSensitiveSwitchResponse describeSensitiveSwitch(const Models::DescribeSensitiveSwitchRequest &request);

      /**
       * @summary Queries the version information of the signature library.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSignatureLibVersionResponse
       */
      Models::DescribeSignatureLibVersionResponse describeSignatureLibVersionWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the version information of the signature library.
       *
       * @return DescribeSignatureLibVersionResponse
       */
      Models::DescribeSignatureLibVersionResponse describeSignatureLibVersion();

      /**
       * @summary Queries the authorization information of a service-linked role (SLR) for a user.
       *
       * @param request DescribeSlrGrantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlrGrantResponse
       */
      Models::DescribeSlrGrantResponse describeSlrGrantWithOptions(const Models::DescribeSlrGrantRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorization information of a service-linked role (SLR) for a user.
       *
       * @param request DescribeSlrGrantRequest
       * @return DescribeSlrGrantResponse
       */
      Models::DescribeSlrGrantResponse describeSlrGrant(const Models::DescribeSlrGrantRequest &request);

      /**
       * @summary Queries the enabled status of Log Service (SLS).
       *
       * @param request DescribeSlsAnalyzeOpenStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsAnalyzeOpenStatusResponse
       */
      Models::DescribeSlsAnalyzeOpenStatusResponse describeSlsAnalyzeOpenStatusWithOptions(const Models::DescribeSlsAnalyzeOpenStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the enabled status of Log Service (SLS).
       *
       * @param request DescribeSlsAnalyzeOpenStatusRequest
       * @return DescribeSlsAnalyzeOpenStatusResponse
       */
      Models::DescribeSlsAnalyzeOpenStatusResponse describeSlsAnalyzeOpenStatus(const Models::DescribeSlsAnalyzeOpenStatusRequest &request);

      /**
       * @summary Queries the threat intelligence configuration information.
       *
       * @description This operation is generally used to perform a paged query on the information about access control policies of NAT firewalls.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeThreatIntelligenceSwitchResponse
       */
      Models::DescribeThreatIntelligenceSwitchResponse describeThreatIntelligenceSwitchWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the threat intelligence configuration information.
       *
       * @description This operation is generally used to perform a paged query on the information about access control policies of NAT firewalls.
       *
       * @return DescribeThreatIntelligenceSwitchResponse
       */
      Models::DescribeThreatIntelligenceSwitchResponse describeThreatIntelligenceSwitch();

      /**
       * @summary You can obtain an ACL backup for a VPC firewall for a transit router.
       *
       * @param tmpReq DescribeTrFirewallPolicyBackUpAssociationListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrFirewallPolicyBackUpAssociationListResponse
       */
      Models::DescribeTrFirewallPolicyBackUpAssociationListResponse describeTrFirewallPolicyBackUpAssociationListWithOptions(const Models::DescribeTrFirewallPolicyBackUpAssociationListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can obtain an ACL backup for a VPC firewall for a transit router.
       *
       * @param request DescribeTrFirewallPolicyBackUpAssociationListRequest
       * @return DescribeTrFirewallPolicyBackUpAssociationListResponse
       */
      Models::DescribeTrFirewallPolicyBackUpAssociationListResponse describeTrFirewallPolicyBackUpAssociationList(const Models::DescribeTrFirewallPolicyBackUpAssociationListRequest &request);

      /**
       * @summary Queries the list of routing policies for a VPC firewall for a transit router.
       *
       * @param request DescribeTrFirewallV2RoutePolicyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrFirewallV2RoutePolicyListResponse
       */
      Models::DescribeTrFirewallV2RoutePolicyListResponse describeTrFirewallV2RoutePolicyListWithOptions(const Models::DescribeTrFirewallV2RoutePolicyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of routing policies for a VPC firewall for a transit router.
       *
       * @param request DescribeTrFirewallV2RoutePolicyListRequest
       * @return DescribeTrFirewallV2RoutePolicyListResponse
       */
      Models::DescribeTrFirewallV2RoutePolicyListResponse describeTrFirewallV2RoutePolicyList(const Models::DescribeTrFirewallV2RoutePolicyListRequest &request);

      /**
       * @summary Retrieves the details of a VPC firewall for a transit router.
       *
       * @param request DescribeTrFirewallsV2DetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrFirewallsV2DetailResponse
       */
      Models::DescribeTrFirewallsV2DetailResponse describeTrFirewallsV2DetailWithOptions(const Models::DescribeTrFirewallsV2DetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a VPC firewall for a transit router.
       *
       * @param request DescribeTrFirewallsV2DetailRequest
       * @return DescribeTrFirewallsV2DetailResponse
       */
      Models::DescribeTrFirewallsV2DetailResponse describeTrFirewallsV2Detail(const Models::DescribeTrFirewallsV2DetailRequest &request);

      /**
       * @summary Queries the list of VPC firewalls for a transit router.
       *
       * @param request DescribeTrFirewallsV2ListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrFirewallsV2ListResponse
       */
      Models::DescribeTrFirewallsV2ListResponse describeTrFirewallsV2ListWithOptions(const Models::DescribeTrFirewallsV2ListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of VPC firewalls for a transit router.
       *
       * @param request DescribeTrFirewallsV2ListRequest
       * @return DescribeTrFirewallsV2ListResponse
       */
      Models::DescribeTrFirewallsV2ListResponse describeTrFirewallsV2List(const Models::DescribeTrFirewallsV2ListRequest &request);

      /**
       * @summary Queries the route tables for a VPC firewall for a transit router.
       *
       * @param request DescribeTrFirewallsV2RouteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrFirewallsV2RouteListResponse
       */
      Models::DescribeTrFirewallsV2RouteListResponse describeTrFirewallsV2RouteListWithOptions(const Models::DescribeTrFirewallsV2RouteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the route tables for a VPC firewall for a transit router.
       *
       * @param request DescribeTrFirewallsV2RouteListRequest
       * @return DescribeTrFirewallsV2RouteListResponse
       */
      Models::DescribeTrFirewallsV2RouteListResponse describeTrFirewallsV2RouteList(const Models::DescribeTrFirewallsV2RouteListRequest &request);

      /**
       * @summary Queries log traffic information.
       *
       * @param request DescribeTrafficLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrafficLogResponse
       */
      Models::DescribeTrafficLogResponse describeTrafficLogWithOptions(const Models::DescribeTrafficLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries log traffic information.
       *
       * @param request DescribeTrafficLogRequest
       * @return DescribeTrafficLogResponse
       */
      Models::DescribeTrafficLogResponse describeTrafficLog(const Models::DescribeTrafficLogRequest &request);

      /**
       * @summary Queries a list of Transit Router resources.
       *
       * @param request DescribeTransitRouterResourcesListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTransitRouterResourcesListResponse
       */
      Models::DescribeTransitRouterResourcesListResponse describeTransitRouterResourcesListWithOptions(const Models::DescribeTransitRouterResourcesListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Transit Router resources.
       *
       * @param request DescribeTransitRouterResourcesListRequest
       * @return DescribeTransitRouterResourcesListResponse
       */
      Models::DescribeTransitRouterResourcesListResponse describeTransitRouterResourcesList(const Models::DescribeTransitRouterResourcesListRequest &request);

      /**
       * @summary Queries the trend of unprotected ports.
       *
       * @param request DescribeUnprotectedPortTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUnprotectedPortTrendResponse
       */
      Models::DescribeUnprotectedPortTrendResponse describeUnprotectedPortTrendWithOptions(const Models::DescribeUnprotectedPortTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trend of unprotected ports.
       *
       * @param request DescribeUnprotectedPortTrendRequest
       * @return DescribeUnprotectedPortTrendResponse
       */
      Models::DescribeUnprotectedPortTrendResponse describeUnprotectedPortTrend(const Models::DescribeUnprotectedPortTrendRequest &request);

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
      Models::DescribeUnprotectedVulnTrendResponse describeUnprotectedVulnTrendWithOptions(const Models::DescribeUnprotectedVulnTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trend of unprotected vulnerabilities.
       *
       * @description ## QPS limit
       * The queries per second (QPS) limit for a single user is 10. If you exceed this limit, API calls are throttled, which may impact your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeUnprotectedVulnTrendRequest
       * @return DescribeUnprotectedVulnTrendResponse
       */
      Models::DescribeUnprotectedVulnTrendResponse describeUnprotectedVulnTrend(const Models::DescribeUnprotectedVulnTrendRequest &request);

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
      Models::DescribeUserAlarmConfigResponse describeUserAlarmConfigWithOptions(const Models::DescribeUserAlarmConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the user\\"s alert configuration.
       *
       * @description ## QPS limit
       * The QPS limit for this interface is 10 calls per second per user. Exceeding this limit throttles API calls and may affect your service. Plan your calls accordingly.
       *
       * @param request DescribeUserAlarmConfigRequest
       * @return DescribeUserAlarmConfigResponse
       */
      Models::DescribeUserAlarmConfigResponse describeUserAlarmConfig(const Models::DescribeUserAlarmConfigRequest &request);

      /**
       * @deprecated OpenAPI DescribeUserAssetIPTrafficInfo is deprecated
       *
       * @summary Queries the traffic information for a specified asset.
       *
       * @param request DescribeUserAssetIPTrafficInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserAssetIPTrafficInfoResponse
       */
      Models::DescribeUserAssetIPTrafficInfoResponse describeUserAssetIPTrafficInfoWithOptions(const Models::DescribeUserAssetIPTrafficInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeUserAssetIPTrafficInfo is deprecated
       *
       * @summary Queries the traffic information for a specified asset.
       *
       * @param request DescribeUserAssetIPTrafficInfoRequest
       * @return DescribeUserAssetIPTrafficInfoResponse
       */
      Models::DescribeUserAssetIPTrafficInfoResponse describeUserAssetIPTrafficInfo(const Models::DescribeUserAssetIPTrafficInfoRequest &request);

      /**
       * @summary Retrieves version information for a user.
       *
       * @description This operation queries information about your Cloud Firewall instance.
       * ## QPS limit
       * This operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable frequency.
       *
       * @param request DescribeUserBuyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserBuyVersionResponse
       */
      Models::DescribeUserBuyVersionResponse describeUserBuyVersionWithOptions(const Models::DescribeUserBuyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves version information for a user.
       *
       * @description This operation queries information about your Cloud Firewall instance.
       * ## QPS limit
       * This operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable frequency.
       *
       * @param request DescribeUserBuyVersionRequest
       * @return DescribeUserBuyVersionResponse
       */
      Models::DescribeUserBuyVersionResponse describeUserBuyVersion(const Models::DescribeUserBuyVersionRequest &request);

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
      Models::DescribeUserIPSWhitelistResponse describeUserIPSWhitelistWithOptions(const Models::DescribeUserIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the intrusion prevention system (IPS) whitelist for the Internet Border.
       *
       * @description ## QPS limits
       * The queries per second (QPS) limit for this API is 10 calls per second for each user. If you exceed this limit, API calls are throttled, which can impact your business. We recommend that you call this API at a reasonable rate.
       *
       * @param request DescribeUserIPSWhitelistRequest
       * @return DescribeUserIPSWhitelistResponse
       */
      Models::DescribeUserIPSWhitelistResponse describeUserIPSWhitelist(const Models::DescribeUserIPSWhitelistRequest &request);

      /**
       * @summary Queries the IPS configuration list of a virtual private cloud (VPC) firewall.
       *
       * @param request DescribeVfwIPSConfigListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVfwIPSConfigListResponse
       */
      Models::DescribeVfwIPSConfigListResponse describeVfwIPSConfigListWithOptions(const Models::DescribeVfwIPSConfigListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IPS configuration list of a virtual private cloud (VPC) firewall.
       *
       * @param request DescribeVfwIPSConfigListRequest
       * @return DescribeVfwIPSConfigListResponse
       */
      Models::DescribeVfwIPSConfigListResponse describeVfwIPSConfigList(const Models::DescribeVfwIPSConfigListRequest &request);

      /**
       * @summary Queries the access details of a VPC firewall.
       *
       * @description ## QPS limits
       * The queries per second (QPS) limit for this API is 10 for each user. If you exceed this limit, API calls are throttled, which can affect your business. We recommend that you call this API at a reasonable rate.
       *
       * @param request DescribeVpcFirewallAccessDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallAccessDetailResponse
       */
      Models::DescribeVpcFirewallAccessDetailResponse describeVpcFirewallAccessDetailWithOptions(const Models::DescribeVpcFirewallAccessDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access details of a VPC firewall.
       *
       * @description ## QPS limits
       * The queries per second (QPS) limit for this API is 10 for each user. If you exceed this limit, API calls are throttled, which can affect your business. We recommend that you call this API at a reasonable rate.
       *
       * @param request DescribeVpcFirewallAccessDetailRequest
       * @return DescribeVpcFirewallAccessDetailResponse
       */
      Models::DescribeVpcFirewallAccessDetailResponse describeVpcFirewallAccessDetail(const Models::DescribeVpcFirewallAccessDetailRequest &request);

      /**
       * @summary Queries information about all access control policy groups for VPC firewalls.
       *
       * @description This operation queries information about all access control policy groups for VPC firewalls.
       * ## QPS limit
       * The QPS limit for this operation is 10 requests per second per user. API calls that exceed this limit are throttled, potentially affecting your business. Plan your calls accordingly.
       *
       * @param request DescribeVpcFirewallAclGroupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallAclGroupListResponse
       */
      Models::DescribeVpcFirewallAclGroupListResponse describeVpcFirewallAclGroupListWithOptions(const Models::DescribeVpcFirewallAclGroupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about all access control policy groups for VPC firewalls.
       *
       * @description This operation queries information about all access control policy groups for VPC firewalls.
       * ## QPS limit
       * The QPS limit for this operation is 10 requests per second per user. API calls that exceed this limit are throttled, potentially affecting your business. Plan your calls accordingly.
       *
       * @param request DescribeVpcFirewallAclGroupListRequest
       * @return DescribeVpcFirewallAclGroupListResponse
       */
      Models::DescribeVpcFirewallAclGroupListResponse describeVpcFirewallAclGroupList(const Models::DescribeVpcFirewallAclGroupListRequest &request);

      /**
       * @summary Queries the asset list of a VPC firewall.
       *
       * @param request DescribeVpcFirewallAssetListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallAssetListResponse
       */
      Models::DescribeVpcFirewallAssetListResponse describeVpcFirewallAssetListWithOptions(const Models::DescribeVpcFirewallAssetListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the asset list of a VPC firewall.
       *
       * @param request DescribeVpcFirewallAssetListRequest
       * @return DescribeVpcFirewallAssetListResponse
       */
      Models::DescribeVpcFirewallAssetListResponse describeVpcFirewallAssetList(const Models::DescribeVpcFirewallAssetListRequest &request);

      /**
       * @summary Queries the regions where the VPC firewall is enabled for asset protection.
       *
       * @param request DescribeVpcFirewallAssetRegionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallAssetRegionListResponse
       */
      Models::DescribeVpcFirewallAssetRegionListResponse describeVpcFirewallAssetRegionListWithOptions(const Models::DescribeVpcFirewallAssetRegionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions where the VPC firewall is enabled for asset protection.
       *
       * @param request DescribeVpcFirewallAssetRegionListRequest
       * @return DescribeVpcFirewallAssetRegionListResponse
       */
      Models::DescribeVpcFirewallAssetRegionListResponse describeVpcFirewallAssetRegionList(const Models::DescribeVpcFirewallAssetRegionListRequest &request);

      /**
       * @summary Retrieves the details of a VPC firewall that protects traffic between a network instance in a Cloud Enterprise Network (CEN) and a specified VPC.
       *
       * @description You can call this operation to query the details of a VPC firewall. The VPC firewall protects traffic between a specified VPC and a network instance in a Cloud Enterprise Network (CEN). The network instance can be a VPC, a Virtual Border Router (VBR), or a Cloud Connect Network (CCN) instance.
       * ## QPS limit
       * This operation has a queries per second (QPS) limit of 10 for each user. If you exceed the limit, your API calls are throttled. This may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeVpcFirewallCenDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallCenDetailResponse
       */
      Models::DescribeVpcFirewallCenDetailResponse describeVpcFirewallCenDetailWithOptions(const Models::DescribeVpcFirewallCenDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a VPC firewall that protects traffic between a network instance in a Cloud Enterprise Network (CEN) and a specified VPC.
       *
       * @description You can call this operation to query the details of a VPC firewall. The VPC firewall protects traffic between a specified VPC and a network instance in a Cloud Enterprise Network (CEN). The network instance can be a VPC, a Virtual Border Router (VBR), or a Cloud Connect Network (CCN) instance.
       * ## QPS limit
       * This operation has a queries per second (QPS) limit of 10 for each user. If you exceed the limit, your API calls are throttled. This may affect your business. We recommend that you call this operation at a reasonable rate.
       *
       * @param request DescribeVpcFirewallCenDetailRequest
       * @return DescribeVpcFirewallCenDetailResponse
       */
      Models::DescribeVpcFirewallCenDetailResponse describeVpcFirewallCenDetail(const Models::DescribeVpcFirewallCenDetailRequest &request);

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
      Models::DescribeVpcFirewallCenListResponse describeVpcFirewallCenListWithOptions(const Models::DescribeVpcFirewallCenListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeVpcFirewallCenListResponse describeVpcFirewallCenList(const Models::DescribeVpcFirewallCenListRequest &request);

      /**
       * @summary Queries a list of Cloud Enterprise Network (CEN) instances for a VPC.
       *
       * @description ## QPS limit
       * The queries per second (QPS) limit for a single user is 10. If you exceed this limit, API calls are throttled, which can affect your business. Plan your calls accordingly.
       *
       * @param request DescribeVpcFirewallCenSummaryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallCenSummaryListResponse
       */
      Models::DescribeVpcFirewallCenSummaryListResponse describeVpcFirewallCenSummaryListWithOptions(const Models::DescribeVpcFirewallCenSummaryListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Cloud Enterprise Network (CEN) instances for a VPC.
       *
       * @description ## QPS limit
       * The queries per second (QPS) limit for a single user is 10. If you exceed this limit, API calls are throttled, which can affect your business. Plan your calls accordingly.
       *
       * @param request DescribeVpcFirewallCenSummaryListRequest
       * @return DescribeVpcFirewallCenSummaryListResponse
       */
      Models::DescribeVpcFirewallCenSummaryListResponse describeVpcFirewallCenSummaryList(const Models::DescribeVpcFirewallCenSummaryListRequest &request);

      /**
       * @summary Retrieves all access control policies for a specific VPC boundary firewall.
       *
       * @description This operation queries the access control policies for a VPC firewall. A VPC firewall uses different access control policies to protect traffic between two VPCs that are connected via Cloud Enterprise Network (CEN) or Express Connect.
       * ## QPS limit
       * The QPS limit for this operation is 10 requests per second per account. If you exceed this limit, your API calls are throttled.
       *
       * @param request DescribeVpcFirewallControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallControlPolicyResponse
       */
      Models::DescribeVpcFirewallControlPolicyResponse describeVpcFirewallControlPolicyWithOptions(const Models::DescribeVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all access control policies for a specific VPC boundary firewall.
       *
       * @description This operation queries the access control policies for a VPC firewall. A VPC firewall uses different access control policies to protect traffic between two VPCs that are connected via Cloud Enterprise Network (CEN) or Express Connect.
       * ## QPS limit
       * The QPS limit for this operation is 10 requests per second per account. If you exceed this limit, your API calls are throttled.
       *
       * @param request DescribeVpcFirewallControlPolicyRequest
       * @return DescribeVpcFirewallControlPolicyResponse
       */
      Models::DescribeVpcFirewallControlPolicyResponse describeVpcFirewallControlPolicy(const Models::DescribeVpcFirewallControlPolicyRequest &request);

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
      Models::DescribeVpcFirewallDefaultIPSConfigResponse describeVpcFirewallDefaultIPSConfigWithOptions(const Models::DescribeVpcFirewallDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeVpcFirewallDefaultIPSConfigResponse describeVpcFirewallDefaultIPSConfig(const Models::DescribeVpcFirewallDefaultIPSConfigRequest &request);

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
      Models::DescribeVpcFirewallDetailResponse describeVpcFirewallDetailWithOptions(const Models::DescribeVpcFirewallDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeVpcFirewallDetailResponse describeVpcFirewallDetail(const Models::DescribeVpcFirewallDetailRequest &request);

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
      Models::DescribeVpcFirewallDomainListResponse describeVpcFirewallDomainListWithOptions(const Models::DescribeVpcFirewallDomainListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of domain names accessed through a VPC firewall.
       *
       * @description ###
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, API calls are throttled. Throttling can affect your business. Call this operation at a reasonable rate.
       *
       * @param request DescribeVpcFirewallDomainListRequest
       * @return DescribeVpcFirewallDomainListResponse
       */
      Models::DescribeVpcFirewallDomainListResponse describeVpcFirewallDomainList(const Models::DescribeVpcFirewallDomainListRequest &request);

      /**
       * @summary Queries connections to a specified domain name through VPC Firewall.
       *
       * @param request DescribeVpcFirewallDomainRelationListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallDomainRelationListResponse
       */
      Models::DescribeVpcFirewallDomainRelationListResponse describeVpcFirewallDomainRelationListWithOptions(const Models::DescribeVpcFirewallDomainRelationListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries connections to a specified domain name through VPC Firewall.
       *
       * @param request DescribeVpcFirewallDomainRelationListRequest
       * @return DescribeVpcFirewallDomainRelationListResponse
       */
      Models::DescribeVpcFirewallDomainRelationListResponse describeVpcFirewallDomainRelationList(const Models::DescribeVpcFirewallDomainRelationListRequest &request);

      /**
       * @summary Queries the blocked traffic trend for the VPC firewall.
       *
       * @param request DescribeVpcFirewallDropTrafficTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallDropTrafficTrendResponse
       */
      Models::DescribeVpcFirewallDropTrafficTrendResponse describeVpcFirewallDropTrafficTrendWithOptions(const Models::DescribeVpcFirewallDropTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the blocked traffic trend for the VPC firewall.
       *
       * @param request DescribeVpcFirewallDropTrafficTrendRequest
       * @return DescribeVpcFirewallDropTrafficTrendResponse
       */
      Models::DescribeVpcFirewallDropTrafficTrendResponse describeVpcFirewallDropTrafficTrend(const Models::DescribeVpcFirewallDropTrafficTrendRequest &request);

      /**
       * @summary Retrieves the IPS whitelist of a VPC firewall.
       *
       * @param request DescribeVpcFirewallIPSWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallIPSWhitelistResponse
       */
      Models::DescribeVpcFirewallIPSWhitelistResponse describeVpcFirewallIPSWhitelistWithOptions(const Models::DescribeVpcFirewallIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the IPS whitelist of a VPC firewall.
       *
       * @param request DescribeVpcFirewallIPSWhitelistRequest
       * @return DescribeVpcFirewallIPSWhitelistResponse
       */
      Models::DescribeVpcFirewallIPSWhitelistResponse describeVpcFirewallIPSWhitelist(const Models::DescribeVpcFirewallIPSWhitelistRequest &request);

      /**
       * @summary Retrieves information about a VPC firewall that protects traffic between two VPCs connected by an Express Connect circuit.
       *
       * @description This operation queries a paginated list of VPC firewalls. These firewalls protect traffic between two VPCs that are connected using Express Connect.
       * ### QPS limit
       * Each Alibaba Cloud account can send up to 10 queries per second (QPS). If this limit is exceeded, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeVpcFirewallListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallListResponse
       */
      Models::DescribeVpcFirewallListResponse describeVpcFirewallListWithOptions(const Models::DescribeVpcFirewallListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a VPC firewall that protects traffic between two VPCs connected by an Express Connect circuit.
       *
       * @description This operation queries a paginated list of VPC firewalls. These firewalls protect traffic between two VPCs that are connected using Express Connect.
       * ### QPS limit
       * Each Alibaba Cloud account can send up to 10 queries per second (QPS). If this limit is exceeded, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request DescribeVpcFirewallListRequest
       * @return DescribeVpcFirewallListResponse
       */
      Models::DescribeVpcFirewallListResponse describeVpcFirewallList(const Models::DescribeVpcFirewallListRequest &request);

      /**
       * @summary Queries the list of vSwitches for a VPC firewall created in manual mode.
       *
       * @param request DescribeVpcFirewallManualVSwitchListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallManualVSwitchListResponse
       */
      Models::DescribeVpcFirewallManualVSwitchListResponse describeVpcFirewallManualVSwitchListWithOptions(const Models::DescribeVpcFirewallManualVSwitchListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of vSwitches for a VPC firewall created in manual mode.
       *
       * @param request DescribeVpcFirewallManualVSwitchListRequest
       * @return DescribeVpcFirewallManualVSwitchListResponse
       */
      Models::DescribeVpcFirewallManualVSwitchListResponse describeVpcFirewallManualVSwitchList(const Models::DescribeVpcFirewallManualVSwitchListRequest &request);

      /**
       * @summary Queries the effective priority range for access control policies in a specified VPC firewall policy group.
       *
       * @description This operation queries the effective priority range for access control policies in a specified VPC firewall policy group.
       * ## Limits
       * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, API calls are throttled. This may impact your business. Call this operation an appropriate number of times to prevent interruptions.
       *
       * @param request DescribeVpcFirewallPolicyPriorUsedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallPolicyPriorUsedResponse
       */
      Models::DescribeVpcFirewallPolicyPriorUsedResponse describeVpcFirewallPolicyPriorUsedWithOptions(const Models::DescribeVpcFirewallPolicyPriorUsedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the effective priority range for access control policies in a specified VPC firewall policy group.
       *
       * @description This operation queries the effective priority range for access control policies in a specified VPC firewall policy group.
       * ## Limits
       * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, API calls are throttled. This may impact your business. Call this operation an appropriate number of times to prevent interruptions.
       *
       * @param request DescribeVpcFirewallPolicyPriorUsedRequest
       * @return DescribeVpcFirewallPolicyPriorUsedResponse
       */
      Models::DescribeVpcFirewallPolicyPriorUsedResponse describeVpcFirewallPolicyPriorUsed(const Models::DescribeVpcFirewallPolicyPriorUsedRequest &request);

      /**
       * @summary Retrieves the details of a VPC firewall precheck.
       *
       * @description ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled. This may impact your business. Plan your calls accordingly.
       *
       * @param request DescribeVpcFirewallPrecheckDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallPrecheckDetailResponse
       */
      Models::DescribeVpcFirewallPrecheckDetailResponse describeVpcFirewallPrecheckDetailWithOptions(const Models::DescribeVpcFirewallPrecheckDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a VPC firewall precheck.
       *
       * @description ## QPS limit
       * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled. This may impact your business. Plan your calls accordingly.
       *
       * @param request DescribeVpcFirewallPrecheckDetailRequest
       * @return DescribeVpcFirewallPrecheckDetailResponse
       */
      Models::DescribeVpcFirewallPrecheckDetailResponse describeVpcFirewallPrecheckDetail(const Models::DescribeVpcFirewallPrecheckDetailRequest &request);

      /**
       * @summary Retrieves a summary of VPC firewalls.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for this API operation is 10 for each user. If you exceed this limit, API calls are throttled. This can affect your business. Plan your API calls accordingly.
       *
       * @param request DescribeVpcFirewallSummaryInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallSummaryInfoResponse
       */
      Models::DescribeVpcFirewallSummaryInfoResponse describeVpcFirewallSummaryInfoWithOptions(const Models::DescribeVpcFirewallSummaryInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a summary of VPC firewalls.
       *
       * @description ### QPS limit
       * The queries per second (QPS) limit for this API operation is 10 for each user. If you exceed this limit, API calls are throttled. This can affect your business. Plan your API calls accordingly.
       *
       * @param request DescribeVpcFirewallSummaryInfoRequest
       * @return DescribeVpcFirewallSummaryInfoResponse
       */
      Models::DescribeVpcFirewallSummaryInfoResponse describeVpcFirewallSummaryInfo(const Models::DescribeVpcFirewallSummaryInfoRequest &request);

      /**
       * @summary Retrieves a list of assets that access domain names through a VPC firewall.
       *
       * @param request DescribeVpcFirewallTrafficAssetListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallTrafficAssetListResponse
       */
      Models::DescribeVpcFirewallTrafficAssetListResponse describeVpcFirewallTrafficAssetListWithOptions(const Models::DescribeVpcFirewallTrafficAssetListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of assets that access domain names through a VPC firewall.
       *
       * @param request DescribeVpcFirewallTrafficAssetListRequest
       * @return DescribeVpcFirewallTrafficAssetListResponse
       */
      Models::DescribeVpcFirewallTrafficAssetListResponse describeVpcFirewallTrafficAssetList(const Models::DescribeVpcFirewallTrafficAssetListRequest &request);

      /**
       * @summary Retrieves the traffic trend of a virtual private cloud (VPC) firewall.
       *
       * @param request DescribeVpcFirewallTrafficTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallTrafficTrendResponse
       */
      Models::DescribeVpcFirewallTrafficTrendResponse describeVpcFirewallTrafficTrendWithOptions(const Models::DescribeVpcFirewallTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the traffic trend of a virtual private cloud (VPC) firewall.
       *
       * @param request DescribeVpcFirewallTrafficTrendRequest
       * @return DescribeVpcFirewallTrafficTrendResponse
       */
      Models::DescribeVpcFirewallTrafficTrendResponse describeVpcFirewallTrafficTrend(const Models::DescribeVpcFirewallTrafficTrendRequest &request);

      /**
       * @summary Describes the available zones for a VPC firewall.
       *
       * @param request DescribeVpcFirewallZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallZoneResponse
       */
      Models::DescribeVpcFirewallZoneResponse describeVpcFirewallZoneWithOptions(const Models::DescribeVpcFirewallZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the available zones for a VPC firewall.
       *
       * @param request DescribeVpcFirewallZoneRequest
       * @return DescribeVpcFirewallZoneResponse
       */
      Models::DescribeVpcFirewallZoneResponse describeVpcFirewallZone(const Models::DescribeVpcFirewallZoneRequest &request);

      /**
       * @summary Queries a list of Virtual Private Clouds (VPCs).
       *
       * @param request DescribeVpcListLiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcListLiteResponse
       */
      Models::DescribeVpcListLiteResponse describeVpcListLiteWithOptions(const Models::DescribeVpcListLiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Virtual Private Clouds (VPCs).
       *
       * @param request DescribeVpcListLiteRequest
       * @return DescribeVpcListLiteResponse
       */
      Models::DescribeVpcListLiteResponse describeVpcListLite(const Models::DescribeVpcListLiteRequest &request);

      /**
       * @summary Queries the zones that are available for VPCs.
       *
       * @param request DescribeVpcZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcZoneResponse
       */
      Models::DescribeVpcZoneResponse describeVpcZoneWithOptions(const Models::DescribeVpcZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones that are available for VPCs.
       *
       * @param request DescribeVpcZoneRequest
       * @return DescribeVpcZoneResponse
       */
      Models::DescribeVpcZoneResponse describeVpcZone(const Models::DescribeVpcZoneRequest &request);

      /**
       * @summary Queries a list of vulnerabilities that Cloud Firewall can protect against.
       *
       * @param request DescribeVulnerabilityProtectedListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVulnerabilityProtectedListResponse
       */
      Models::DescribeVulnerabilityProtectedListResponse describeVulnerabilityProtectedListWithOptions(const Models::DescribeVulnerabilityProtectedListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of vulnerabilities that Cloud Firewall can protect against.
       *
       * @param request DescribeVulnerabilityProtectedListRequest
       * @return DescribeVulnerabilityProtectedListResponse
       */
      Models::DescribeVulnerabilityProtectedListResponse describeVulnerabilityProtectedList(const Models::DescribeVulnerabilityProtectedListRequest &request);

      /**
       * @summary Disables sensitive data discovery for a protected asset.
       *
       * @param request DisableSdlProtectedAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSdlProtectedAssetResponse
       */
      Models::DisableSdlProtectedAssetResponse disableSdlProtectedAssetWithOptions(const Models::DisableSdlProtectedAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables sensitive data discovery for a protected asset.
       *
       * @param request DisableSdlProtectedAssetRequest
       * @return DisableSdlProtectedAssetResponse
       */
      Models::DisableSdlProtectedAssetResponse disableSdlProtectedAsset(const Models::DisableSdlProtectedAssetRequest &request);

      /**
       * @summary Enables data breach protection for assets.
       *
       * @param request EnableSdlProtectedAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSdlProtectedAssetResponse
       */
      Models::EnableSdlProtectedAssetResponse enableSdlProtectedAssetWithOptions(const Models::EnableSdlProtectedAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables data breach protection for assets.
       *
       * @param request EnableSdlProtectedAssetRequest
       * @return EnableSdlProtectedAssetResponse
       */
      Models::EnableSdlProtectedAssetResponse enableSdlProtectedAsset(const Models::EnableSdlProtectedAssetRequest &request);

      /**
       * @summary Retrieves the download path for the certificate of a Transport Layer Security (TLS) inspection policy.
       *
       * @description This operation returns a temporary download link for the Certificate Authority (CA) certificate. The link is valid for one minute. After the link expires, call this operation again to obtain a new download link.
       *
       * @param request GetTlsInspectCertificateDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTlsInspectCertificateDownloadUrlResponse
       */
      Models::GetTlsInspectCertificateDownloadUrlResponse getTlsInspectCertificateDownloadUrlWithOptions(const Models::GetTlsInspectCertificateDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the download path for the certificate of a Transport Layer Security (TLS) inspection policy.
       *
       * @description This operation returns a temporary download link for the Certificate Authority (CA) certificate. The link is valid for one minute. After the link expires, call this operation again to obtain a new download link.
       *
       * @param request GetTlsInspectCertificateDownloadUrlRequest
       * @return GetTlsInspectCertificateDownloadUrlResponse
       */
      Models::GetTlsInspectCertificateDownloadUrlResponse getTlsInspectCertificateDownloadUrl(const Models::GetTlsInspectCertificateDownloadUrlRequest &request);

      /**
       * @summary This operation lists the Transport Layer Security (TLS) inspection certificate authority (CA) certificates.
       *
       * @param request ListTlsInspectCACertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTlsInspectCACertificatesResponse
       */
      Models::ListTlsInspectCACertificatesResponse listTlsInspectCACertificatesWithOptions(const Models::ListTlsInspectCACertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation lists the Transport Layer Security (TLS) inspection certificate authority (CA) certificates.
       *
       * @param request ListTlsInspectCACertificatesRequest
       * @return ListTlsInspectCACertificatesResponse
       */
      Models::ListTlsInspectCACertificatesResponse listTlsInspectCACertificates(const Models::ListTlsInspectCACertificatesRequest &request);

      /**
       * @summary Modifies an address book.
       *
       * @description This operation is used to modify an address book.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param tmpReq ModifyAddressBookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAddressBookResponse
       */
      Models::ModifyAddressBookResponse modifyAddressBookWithOptions(const Models::ModifyAddressBookRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an address book.
       *
       * @description This operation is used to modify an address book.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ModifyAddressBookRequest
       * @return ModifyAddressBookResponse
       */
      Models::ModifyAddressBookResponse modifyAddressBook(const Models::ModifyAddressBookRequest &request);

      /**
       * @summary Updates instance information for pay-as-you-go 2.0 users.
       *
       * @description Before calling this operation, ensure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/cloud-firewall/cloudfirewall/product-overview/pay-as-you-go) for the pay-as-you-go edition of Cloud Firewall.
       *
       * @param request ModifyCfwInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCfwInstanceResponse
       */
      Models::ModifyCfwInstanceResponse modifyCfwInstanceWithOptions(const Models::ModifyCfwInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates instance information for pay-as-you-go 2.0 users.
       *
       * @description Before calling this operation, ensure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/cloud-firewall/cloudfirewall/product-overview/pay-as-you-go) for the pay-as-you-go edition of Cloud Firewall.
       *
       * @param request ModifyCfwInstanceRequest
       * @return ModifyCfwInstanceResponse
       */
      Models::ModifyCfwInstanceResponse modifyCfwInstance(const Models::ModifyCfwInstanceRequest &request);

      /**
       * @summary Modifies the configurations of an access control policy.
       *
       * @description This operation modifies the configurations of an access control policy that allows, denies, or monitors traffic passing through Cloud Firewall.
       * ## QPS limit
       * Each user can call this operation up to 10 times per second. If the limit is exceeded, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyControlPolicyResponse
       */
      Models::ModifyControlPolicyResponse modifyControlPolicyWithOptions(const Models::ModifyControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an access control policy.
       *
       * @description This operation modifies the configurations of an access control policy that allows, denies, or monitors traffic passing through Cloud Firewall.
       * ## QPS limit
       * Each user can call this operation up to 10 times per second. If the limit is exceeded, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyControlPolicyRequest
       * @return ModifyControlPolicyResponse
       */
      Models::ModifyControlPolicyResponse modifyControlPolicy(const Models::ModifyControlPolicyRequest &request);

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
      Models::ModifyControlPolicyPositionResponse modifyControlPolicyPositionWithOptions(const Models::ModifyControlPolicyPositionRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyControlPolicyPositionResponse modifyControlPolicyPosition(const Models::ModifyControlPolicyPositionRequest &request);

      /**
       * @summary Modifies the priority of an access control policy.
       *
       * @description You can call this operation to modify the priority of an access control policy. An access control policy determines whether to allow, deny, or monitor traffic that passes through Cloud Firewall.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. Exceeding this limit triggers throttling, which may affect your business. We recommend that you plan your calls accordingly.
       *
       * @param request ModifyControlPolicyPriorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyControlPolicyPriorityResponse
       */
      Models::ModifyControlPolicyPriorityResponse modifyControlPolicyPriorityWithOptions(const Models::ModifyControlPolicyPriorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the priority of an access control policy.
       *
       * @description You can call this operation to modify the priority of an access control policy. An access control policy determines whether to allow, deny, or monitor traffic that passes through Cloud Firewall.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second per user. Exceeding this limit triggers throttling, which may affect your business. We recommend that you plan your calls accordingly.
       *
       * @param request ModifyControlPolicyPriorityRequest
       * @return ModifyControlPolicyPriorityResponse
       */
      Models::ModifyControlPolicyPriorityResponse modifyControlPolicyPriority(const Models::ModifyControlPolicyPriorityRequest &request);

      /**
       * @summary Modifies the default intrusion prevention system (IPS) configuration.
       *
       * @param request ModifyDefaultIPSConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefaultIPSConfigResponse
       */
      Models::ModifyDefaultIPSConfigResponse modifyDefaultIPSConfigWithOptions(const Models::ModifyDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the default intrusion prevention system (IPS) configuration.
       *
       * @param request ModifyDefaultIPSConfigRequest
       * @return ModifyDefaultIPSConfigResponse
       */
      Models::ModifyDefaultIPSConfigResponse modifyDefaultIPSConfig(const Models::ModifyDefaultIPSConfigRequest &request);

      /**
       * @summary Modifies a DNS firewall rule.
       *
       * @description You can use this operation to modify a DNS firewall policy to accept, deny, or monitor traffic.
       *
       * @param request ModifyDnsFirewallPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDnsFirewallPolicyResponse
       */
      Models::ModifyDnsFirewallPolicyResponse modifyDnsFirewallPolicyWithOptions(const Models::ModifyDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a DNS firewall rule.
       *
       * @description You can use this operation to modify a DNS firewall policy to accept, deny, or monitor traffic.
       *
       * @param request ModifyDnsFirewallPolicyRequest
       * @return ModifyDnsFirewallPolicyResponse
       */
      Models::ModifyDnsFirewallPolicyResponse modifyDnsFirewallPolicy(const Models::ModifyDnsFirewallPolicyRequest &request);

      /**
       * @summary Enables or disables a routing policy.
       *
       * @param request ModifyFirewallV2RoutePolicySwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFirewallV2RoutePolicySwitchResponse
       */
      Models::ModifyFirewallV2RoutePolicySwitchResponse modifyFirewallV2RoutePolicySwitchWithOptions(const Models::ModifyFirewallV2RoutePolicySwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables a routing policy.
       *
       * @param request ModifyFirewallV2RoutePolicySwitchRequest
       * @return ModifyFirewallV2RoutePolicySwitchResponse
       */
      Models::ModifyFirewallV2RoutePolicySwitchResponse modifyFirewallV2RoutePolicySwitch(const Models::ModifyFirewallV2RoutePolicySwitchRequest &request);

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
      Models::ModifyInstanceMemberAttributesResponse modifyInstanceMemberAttributesWithOptions(const Models::ModifyInstanceMemberAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyInstanceMemberAttributesResponse modifyInstanceMemberAttributes(const Models::ModifyInstanceMemberAttributesRequest &request);

      /**
       * @summary Modifies Intrusion Prevention System (IPS) rules.
       *
       * @param request ModifyIpsRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIpsRulesResponse
       */
      Models::ModifyIpsRulesResponse modifyIpsRulesWithOptions(const Models::ModifyIpsRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies Intrusion Prevention System (IPS) rules.
       *
       * @param request ModifyIpsRulesRequest
       * @return ModifyIpsRulesResponse
       */
      Models::ModifyIpsRulesResponse modifyIpsRules(const Models::ModifyIpsRulesRequest &request);

      /**
       * @summary Resets Intrusion Prevention System (IPS) rules to the default settings.
       *
       * @param request ModifyIpsRulesToDefaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIpsRulesToDefaultResponse
       */
      Models::ModifyIpsRulesToDefaultResponse modifyIpsRulesToDefaultWithOptions(const Models::ModifyIpsRulesToDefaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets Intrusion Prevention System (IPS) rules to the default settings.
       *
       * @param request ModifyIpsRulesToDefaultRequest
       * @return ModifyIpsRulesToDefaultResponse
       */
      Models::ModifyIpsRulesToDefaultResponse modifyIpsRulesToDefault(const Models::ModifyIpsRulesToDefaultRequest &request);

      /**
       * @summary Modify a NAT Firewall security access control policy.
       *
       * @description This API modifies the configuration of an access control policy that allows, denies, or observes traffic passing through a NAT Firewall.
       *
       * @param request ModifyNatFirewallControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNatFirewallControlPolicyResponse
       */
      Models::ModifyNatFirewallControlPolicyResponse modifyNatFirewallControlPolicyWithOptions(const Models::ModifyNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify a NAT Firewall security access control policy.
       *
       * @description This API modifies the configuration of an access control policy that allows, denies, or observes traffic passing through a NAT Firewall.
       *
       * @param request ModifyNatFirewallControlPolicyRequest
       * @return ModifyNatFirewallControlPolicyResponse
       */
      Models::ModifyNatFirewallControlPolicyResponse modifyNatFirewallControlPolicy(const Models::ModifyNatFirewallControlPolicyRequest &request);

      /**
       * @summary Modifies the priority of an access control policy for a NAT firewall.
       *
       * @param request ModifyNatFirewallControlPolicyPositionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNatFirewallControlPolicyPositionResponse
       */
      Models::ModifyNatFirewallControlPolicyPositionResponse modifyNatFirewallControlPolicyPositionWithOptions(const Models::ModifyNatFirewallControlPolicyPositionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the priority of an access control policy for a NAT firewall.
       *
       * @param request ModifyNatFirewallControlPolicyPositionRequest
       * @return ModifyNatFirewallControlPolicyPositionResponse
       */
      Models::ModifyNatFirewallControlPolicyPositionResponse modifyNatFirewallControlPolicyPosition(const Models::ModifyNatFirewallControlPolicyPositionRequest &request);

      /**
       * @summary Modifies the operation for an object group.
       *
       * @param request ModifyObjectGroupOperationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyObjectGroupOperationResponse
       */
      Models::ModifyObjectGroupOperationResponse modifyObjectGroupOperationWithOptions(const Models::ModifyObjectGroupOperationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the operation for an object group.
       *
       * @param request ModifyObjectGroupOperationRequest
       * @return ModifyObjectGroupOperationResponse
       */
      Models::ModifyObjectGroupOperationResponse modifyObjectGroupOperation(const Models::ModifyObjectGroupOperationRequest &request);

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
      Models::ModifyPolicyAdvancedConfigResponse modifyPolicyAdvancedConfigWithOptions(const Models::ModifyPolicyAdvancedConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyPolicyAdvancedConfigResponse modifyPolicyAdvancedConfig(const Models::ModifyPolicyAdvancedConfigRequest &request);

      /**
       * @summary Modifies a private DNS endpoint.
       *
       * @param request ModifyPrivateDnsEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrivateDnsEndpointResponse
       */
      Models::ModifyPrivateDnsEndpointResponse modifyPrivateDnsEndpointWithOptions(const Models::ModifyPrivateDnsEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a private DNS endpoint.
       *
       * @param request ModifyPrivateDnsEndpointRequest
       * @return ModifyPrivateDnsEndpointResponse
       */
      Models::ModifyPrivateDnsEndpointResponse modifyPrivateDnsEndpoint(const Models::ModifyPrivateDnsEndpointRequest &request);

      /**
       * @summary Modifies the automatic protection settings for new assets.
       *
       * @param request ModifyResourceTypeAutoEnableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourceTypeAutoEnableResponse
       */
      Models::ModifyResourceTypeAutoEnableResponse modifyResourceTypeAutoEnableWithOptions(const Models::ModifyResourceTypeAutoEnableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the automatic protection settings for new assets.
       *
       * @param request ModifyResourceTypeAutoEnableRequest
       * @return ModifyResourceTypeAutoEnableResponse
       */
      Models::ModifyResourceTypeAutoEnableResponse modifyResourceTypeAutoEnable(const Models::ModifyResourceTypeAutoEnableRequest &request);

      /**
       * @summary Modifies the sensitive data switch.
       *
       * @param request ModifySensitiveSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySensitiveSwitchResponse
       */
      Models::ModifySensitiveSwitchResponse modifySensitiveSwitchWithOptions(const Models::ModifySensitiveSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the sensitive data switch.
       *
       * @param request ModifySensitiveSwitchRequest
       * @return ModifySensitiveSwitchResponse
       */
      Models::ModifySensitiveSwitchResponse modifySensitiveSwitch(const Models::ModifySensitiveSwitchRequest &request);

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
      Models::ModifySlsDispatchStatusResponse modifySlsDispatchStatusWithOptions(const Models::ModifySlsDispatchStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the log delivery settings for Simple Log Service (SLS).
       *
       * @description ## QPS limit
       * You can call this API up to 10 times per second per user. If you exceed this limit, API calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request ModifySlsDispatchStatusRequest
       * @return ModifySlsDispatchStatusResponse
       */
      Models::ModifySlsDispatchStatusResponse modifySlsDispatchStatus(const Models::ModifySlsDispatchStatusRequest &request);

      /**
       * @summary Modifies the threat intelligence configuration.
       *
       * @param request ModifyThreatIntelligenceSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyThreatIntelligenceSwitchResponse
       */
      Models::ModifyThreatIntelligenceSwitchResponse modifyThreatIntelligenceSwitchWithOptions(const Models::ModifyThreatIntelligenceSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the threat intelligence configuration.
       *
       * @param request ModifyThreatIntelligenceSwitchRequest
       * @return ModifyThreatIntelligenceSwitchResponse
       */
      Models::ModifyThreatIntelligenceSwitchResponse modifyThreatIntelligenceSwitch(const Models::ModifyThreatIntelligenceSwitchRequest &request);

      /**
       * @summary Modifies the configuration of a VPC firewall for a transit router.
       *
       * @param request ModifyTrFirewallV2ConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTrFirewallV2ConfigurationResponse
       */
      Models::ModifyTrFirewallV2ConfigurationResponse modifyTrFirewallV2ConfigurationWithOptions(const Models::ModifyTrFirewallV2ConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a VPC firewall for a transit router.
       *
       * @param request ModifyTrFirewallV2ConfigurationRequest
       * @return ModifyTrFirewallV2ConfigurationResponse
       */
      Models::ModifyTrFirewallV2ConfigurationResponse modifyTrFirewallV2Configuration(const Models::ModifyTrFirewallV2ConfigurationRequest &request);

      /**
       * @summary Modifies the scope of a routing policy for a VPC firewall that is created for a Transit Router (TR).
       *
       * @description You can modify the policy scope for *point-to-multipoint* and *multipoint-to-multipoint* scenarios, but not for *point-to-point* scenarios.
       *
       * @param tmpReq ModifyTrFirewallV2RoutePolicyScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTrFirewallV2RoutePolicyScopeResponse
       */
      Models::ModifyTrFirewallV2RoutePolicyScopeResponse modifyTrFirewallV2RoutePolicyScopeWithOptions(const Models::ModifyTrFirewallV2RoutePolicyScopeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the scope of a routing policy for a VPC firewall that is created for a Transit Router (TR).
       *
       * @description You can modify the policy scope for *point-to-multipoint* and *multipoint-to-multipoint* scenarios, but not for *point-to-point* scenarios.
       *
       * @param request ModifyTrFirewallV2RoutePolicyScopeRequest
       * @return ModifyTrFirewallV2RoutePolicyScopeResponse
       */
      Models::ModifyTrFirewallV2RoutePolicyScopeResponse modifyTrFirewallV2RoutePolicyScope(const Models::ModifyTrFirewallV2RoutePolicyScopeRequest &request);

      /**
       * @summary Modifies user alert configuration.
       *
       * @param tmpReq ModifyUserAlarmConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserAlarmConfigResponse
       */
      Models::ModifyUserAlarmConfigResponse modifyUserAlarmConfigWithOptions(const Models::ModifyUserAlarmConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies user alert configuration.
       *
       * @param request ModifyUserAlarmConfigRequest
       * @return ModifyUserAlarmConfigResponse
       */
      Models::ModifyUserAlarmConfigResponse modifyUserAlarmConfig(const Models::ModifyUserAlarmConfigRequest &request);

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
      Models::ModifyUserIPSWhitelistResponse modifyUserIPSWhitelistWithOptions(const Models::ModifyUserIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the intrusion prevention system (IPS) whitelist for the Internet Border.
       *
       * @description ## QPS limit
       * This API is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled. This can affect your business. We recommend that you call the API at a reasonable rate.
       *
       * @param request ModifyUserIPSWhitelistRequest
       * @return ModifyUserIPSWhitelistResponse
       */
      Models::ModifyUserIPSWhitelistResponse modifyUserIPSWhitelist(const Models::ModifyUserIPSWhitelistRequest &request);

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
      Models::ModifyUserSlsLogStorageTimeResponse modifyUserSlsLogStorageTimeWithOptions(const Models::ModifyUserSlsLogStorageTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the retention period of user logs.
       *
       * @description ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 per user. Calls that exceed this limit are rate-limited, which may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyUserSlsLogStorageTimeRequest
       * @return ModifyUserSlsLogStorageTimeResponse
       */
      Models::ModifyUserSlsLogStorageTimeResponse modifyUserSlsLogStorageTime(const Models::ModifyUserSlsLogStorageTimeRequest &request);

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
      Models::ModifyVpcFirewallAclEngineModeResponse modifyVpcFirewallAclEngineModeWithOptions(const Models::ModifyVpcFirewallAclEngineModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the ACL engine mode for a VPC firewall.
       *
       * @description ## QPS limit
       * This API is limited to 10 queries per second (QPS) per user. Calls that exceed this limit are throttled. This may affect your business. Plan your API calls accordingly.
       *
       * @param request ModifyVpcFirewallAclEngineModeRequest
       * @return ModifyVpcFirewallAclEngineModeResponse
       */
      Models::ModifyVpcFirewallAclEngineModeResponse modifyVpcFirewallAclEngineMode(const Models::ModifyVpcFirewallAclEngineModeRequest &request);

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
      Models::ModifyVpcFirewallCenConfigureResponse modifyVpcFirewallCenConfigureWithOptions(const Models::ModifyVpcFirewallCenConfigureRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyVpcFirewallCenConfigureResponse modifyVpcFirewallCenConfigure(const Models::ModifyVpcFirewallCenConfigureRequest &request);

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
      Models::ModifyVpcFirewallCenSwitchStatusResponse modifyVpcFirewallCenSwitchStatusWithOptions(const Models::ModifyVpcFirewallCenSwitchStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyVpcFirewallCenSwitchStatusResponse modifyVpcFirewallCenSwitchStatus(const Models::ModifyVpcFirewallCenSwitchStatusRequest &request);

      /**
       * @summary Modifies the configuration of a VPC firewall that protects traffic between two VPCs connected by an Express Connect circuit.
       *
       * @description This operation modifies the configuration of a VPC firewall that protects traffic between two VPCs connected by an Express Connect circuit. Before you call this operation, you must create a VPC firewall by calling the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If the number of calls per second exceeds the limit, throttling is triggered. Throttling may affect your business. You should plan your calls accordingly.
       *
       * @param request ModifyVpcFirewallConfigureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcFirewallConfigureResponse
       */
      Models::ModifyVpcFirewallConfigureResponse modifyVpcFirewallConfigureWithOptions(const Models::ModifyVpcFirewallConfigureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a VPC firewall that protects traffic between two VPCs connected by an Express Connect circuit.
       *
       * @description This operation modifies the configuration of a VPC firewall that protects traffic between two VPCs connected by an Express Connect circuit. Before you call this operation, you must create a VPC firewall by calling the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) operation.
       * ## QPS limit
       * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If the number of calls per second exceeds the limit, throttling is triggered. Throttling may affect your business. You should plan your calls accordingly.
       *
       * @param request ModifyVpcFirewallConfigureRequest
       * @return ModifyVpcFirewallConfigureResponse
       */
      Models::ModifyVpcFirewallConfigureResponse modifyVpcFirewallConfigure(const Models::ModifyVpcFirewallConfigureRequest &request);

      /**
       * @summary Modifies the configuration of an access control policy for a specified VPC firewall policy group.
       *
       * @description This operation modifies the configuration of an access control policy for a specified VPC firewall policy group. VPC firewall instances use different access control policies to protect Cloud Enterprise Network (CEN) instances and Express Connect circuits.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 for a single user. If the number of calls to this operation per second exceeds the limit, rate limiting is triggered. This may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyVpcFirewallControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcFirewallControlPolicyResponse
       */
      Models::ModifyVpcFirewallControlPolicyResponse modifyVpcFirewallControlPolicyWithOptions(const Models::ModifyVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an access control policy for a specified VPC firewall policy group.
       *
       * @description This operation modifies the configuration of an access control policy for a specified VPC firewall policy group. VPC firewall instances use different access control policies to protect Cloud Enterprise Network (CEN) instances and Express Connect circuits.
       * ## QPS limits
       * The queries per second (QPS) limit for this operation is 10 for a single user. If the number of calls to this operation per second exceeds the limit, rate limiting is triggered. This may affect your business. Plan your calls accordingly.
       *
       * @param request ModifyVpcFirewallControlPolicyRequest
       * @return ModifyVpcFirewallControlPolicyResponse
       */
      Models::ModifyVpcFirewallControlPolicyResponse modifyVpcFirewallControlPolicy(const Models::ModifyVpcFirewallControlPolicyRequest &request);

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
      Models::ModifyVpcFirewallControlPolicyPositionResponse modifyVpcFirewallControlPolicyPositionWithOptions(const Models::ModifyVpcFirewallControlPolicyPositionRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyVpcFirewallControlPolicyPositionResponse modifyVpcFirewallControlPolicyPosition(const Models::ModifyVpcFirewallControlPolicyPositionRequest &request);

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
      Models::ModifyVpcFirewallDefaultIPSConfigResponse modifyVpcFirewallDefaultIPSConfigWithOptions(const Models::ModifyVpcFirewallDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyVpcFirewallDefaultIPSConfigResponse modifyVpcFirewallDefaultIPSConfig(const Models::ModifyVpcFirewallDefaultIPSConfigRequest &request);

      /**
       * @summary Modifies the intrusion prevention system (IPS) whitelist for a VPC firewall.
       *
       * @param request ModifyVpcFirewallIPSWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcFirewallIPSWhitelistResponse
       */
      Models::ModifyVpcFirewallIPSWhitelistResponse modifyVpcFirewallIPSWhitelistWithOptions(const Models::ModifyVpcFirewallIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the intrusion prevention system (IPS) whitelist for a VPC firewall.
       *
       * @param request ModifyVpcFirewallIPSWhitelistRequest
       * @return ModifyVpcFirewallIPSWhitelistResponse
       */
      Models::ModifyVpcFirewallIPSWhitelistResponse modifyVpcFirewallIPSWhitelist(const Models::ModifyVpcFirewallIPSWhitelistRequest &request);

      /**
       * @summary Enables or disables a VPC firewall. A VPC firewall protects traffic between two VPCs that are connected by an Express Connect circuit.
       *
       * @description This API call modifies the status of a VPC firewall. A VPC firewall protects traffic between two virtual private clouds (VPCs) that are connected by an Express Connect circuit. When the VPC firewall is enabled, it protects traffic between the two VPCs. When the VPC firewall is disabled, it no longer protects traffic between the two VPCs.
       * Before you make this API call, you must create a VPC firewall using the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) API call.
       * ## QPS limit
       * The queries per second (QPS) limit for this API call is 10 for each Alibaba Cloud account. If you exceed the limit, your API calls are throttled, which may affect your business. Plan your API calls accordingly.
       *
       * @param request ModifyVpcFirewallSwitchStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcFirewallSwitchStatusResponse
       */
      Models::ModifyVpcFirewallSwitchStatusResponse modifyVpcFirewallSwitchStatusWithOptions(const Models::ModifyVpcFirewallSwitchStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables a VPC firewall. A VPC firewall protects traffic between two VPCs that are connected by an Express Connect circuit.
       *
       * @description This API call modifies the status of a VPC firewall. A VPC firewall protects traffic between two virtual private clouds (VPCs) that are connected by an Express Connect circuit. When the VPC firewall is enabled, it protects traffic between the two VPCs. When the VPC firewall is disabled, it no longer protects traffic between the two VPCs.
       * Before you make this API call, you must create a VPC firewall using the [CreateVpcFirewallConfigure](https://help.aliyun.com/document_detail/342893.html) API call.
       * ## QPS limit
       * The queries per second (QPS) limit for this API call is 10 for each Alibaba Cloud account. If you exceed the limit, your API calls are throttled, which may affect your business. Plan your API calls accordingly.
       *
       * @param request ModifyVpcFirewallSwitchStatusRequest
       * @return ModifyVpcFirewallSwitchStatusResponse
       */
      Models::ModifyVpcFirewallSwitchStatusResponse modifyVpcFirewallSwitchStatus(const Models::ModifyVpcFirewallSwitchStatusRequest &request);

      /**
       * @summary Disables all firewall switches.
       *
       * @description This operation disables all firewall switches.
       * ## QPS limit
       * Each user can send up to 10 queries per second (QPS). If you exceed this limit, API calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request PutDisableAllFwSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutDisableAllFwSwitchResponse
       */
      Models::PutDisableAllFwSwitchResponse putDisableAllFwSwitchWithOptions(const Models::PutDisableAllFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables all firewall switches.
       *
       * @description This operation disables all firewall switches.
       * ## QPS limit
       * Each user can send up to 10 queries per second (QPS). If you exceed this limit, API calls are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request PutDisableAllFwSwitchRequest
       * @return PutDisableAllFwSwitchResponse
       */
      Models::PutDisableAllFwSwitchResponse putDisableAllFwSwitch(const Models::PutDisableAllFwSwitchRequest &request);

      /**
       * @summary Disables a firewall switch.
       *
       * @description This operation disables a firewall switch. After a firewall switch is disabled, traffic is no longer routed through Cloud Firewall.
       * ## QPS limit
       * The QPS limit for this operation is 10 requests per second per user. Calls that exceed this limit are throttled, which may affect your business.
       *
       * @param request PutDisableFwSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutDisableFwSwitchResponse
       */
      Models::PutDisableFwSwitchResponse putDisableFwSwitchWithOptions(const Models::PutDisableFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a firewall switch.
       *
       * @description This operation disables a firewall switch. After a firewall switch is disabled, traffic is no longer routed through Cloud Firewall.
       * ## QPS limit
       * The QPS limit for this operation is 10 requests per second per user. Calls that exceed this limit are throttled, which may affect your business.
       *
       * @param request PutDisableFwSwitchRequest
       * @return PutDisableFwSwitchResponse
       */
      Models::PutDisableFwSwitchResponse putDisableFwSwitch(const Models::PutDisableFwSwitchRequest &request);

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
      Models::PutEnableAllFwSwitchResponse putEnableAllFwSwitchWithOptions(const Models::PutEnableAllFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::PutEnableAllFwSwitchResponse putEnableAllFwSwitch(const Models::PutEnableAllFwSwitchRequest &request);

      /**
       * @summary Enable the firewall.
       *
       * @description This API enables the firewall switch. Once enabled, traffic is routed through Cloud Firewall.
       * ## QPS limit
       * The QPS limit for this API is 5 requests per second for a single user. If you exceed this limit, the system throttles API calls, which may affect your business.
       *
       * @param request PutEnableFwSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutEnableFwSwitchResponse
       */
      Models::PutEnableFwSwitchResponse putEnableFwSwitchWithOptions(const Models::PutEnableFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable the firewall.
       *
       * @description This API enables the firewall switch. Once enabled, traffic is routed through Cloud Firewall.
       * ## QPS limit
       * The QPS limit for this API is 5 requests per second for a single user. If you exceed this limit, the system throttles API calls, which may affect your business.
       *
       * @param request PutEnableFwSwitchRequest
       * @return PutEnableFwSwitchResponse
       */
      Models::PutEnableFwSwitchResponse putEnableFwSwitch(const Models::PutEnableFwSwitchRequest &request);

      /**
       * @summary Releases an expired instance.
       *
       * @param request ReleaseExpiredInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseExpiredInstanceResponse
       */
      Models::ReleaseExpiredInstanceResponse releaseExpiredInstanceWithOptions(const Models::ReleaseExpiredInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an expired instance.
       *
       * @param request ReleaseExpiredInstanceRequest
       * @return ReleaseExpiredInstanceResponse
       */
      Models::ReleaseExpiredInstanceResponse releaseExpiredInstance(const Models::ReleaseExpiredInstanceRequest &request);

      /**
       * @summary Releases a pay-as-you-go firewall.
       *
       * @param request ReleasePostInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleasePostInstanceResponse
       */
      Models::ReleasePostInstanceResponse releasePostInstanceWithOptions(const Models::ReleasePostInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go firewall.
       *
       * @param request ReleasePostInstanceRequest
       * @return ReleasePostInstanceResponse
       */
      Models::ReleasePostInstanceResponse releasePostInstance(const Models::ReleasePostInstanceRequest &request);

      /**
       * @summary Resets the hit count of a NAT firewall rule.
       *
       * @param request ResetNatFirewallRuleHitCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetNatFirewallRuleHitCountResponse
       */
      Models::ResetNatFirewallRuleHitCountResponse resetNatFirewallRuleHitCountWithOptions(const Models::ResetNatFirewallRuleHitCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the hit count of a NAT firewall rule.
       *
       * @param request ResetNatFirewallRuleHitCountRequest
       * @return ResetNatFirewallRuleHitCountResponse
       */
      Models::ResetNatFirewallRuleHitCountResponse resetNatFirewallRuleHitCount(const Models::ResetNatFirewallRuleHitCountRequest &request);

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
      Models::ResetRuleHitCountResponse resetRuleHitCountWithOptions(const Models::ResetRuleHitCountRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ResetRuleHitCountResponse resetRuleHitCount(const Models::ResetRuleHitCountRequest &request);

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
      Models::ResetVpcFirewallRuleHitCountResponse resetVpcFirewallRuleHitCountWithOptions(const Models::ResetVpcFirewallRuleHitCountRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ResetVpcFirewallRuleHitCountResponse resetVpcFirewallRuleHitCount(const Models::ResetVpcFirewallRuleHitCountRequest &request);

      /**
       * @summary Enables automatic protection for new assets.
       *
       * @description Each Cloud Firewall instance supports up to 100 associations with TLS inspection policies.
       *
       * @param request SetAutoProtectNewAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAutoProtectNewAssetsResponse
       */
      Models::SetAutoProtectNewAssetsResponse setAutoProtectNewAssetsWithOptions(const Models::SetAutoProtectNewAssetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables automatic protection for new assets.
       *
       * @description Each Cloud Firewall instance supports up to 100 associations with TLS inspection policies.
       *
       * @param request SetAutoProtectNewAssetsRequest
       * @return SetAutoProtectNewAssetsResponse
       */
      Models::SetAutoProtectNewAssetsResponse setAutoProtectNewAssets(const Models::SetAutoProtectNewAssetsRequest &request);

      /**
       * @summary Enables or disables a NAT firewall.
       *
       * @param request SwitchSecurityProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchSecurityProxyResponse
       */
      Models::SwitchSecurityProxyResponse switchSecurityProxyWithOptions(const Models::SwitchSecurityProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables a NAT firewall.
       *
       * @param request SwitchSecurityProxyRequest
       * @return SwitchSecurityProxyResponse
       */
      Models::SwitchSecurityProxyResponse switchSecurityProxy(const Models::SwitchSecurityProxyRequest &request);

      /**
       * @summary Changes the enabling status of AI-powered traffic analysis.
       *
       * @description The analysis covers all data for your Cloud Firewall instance from the date of purchase.
       *
       * @param request UpdateAITrafficAnalysisStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAITrafficAnalysisStatusResponse
       */
      Models::UpdateAITrafficAnalysisStatusResponse updateAITrafficAnalysisStatusWithOptions(const Models::UpdateAITrafficAnalysisStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the enabling status of AI-powered traffic analysis.
       *
       * @description The analysis covers all data for your Cloud Firewall instance from the date of purchase.
       *
       * @param request UpdateAITrafficAnalysisStatusRequest
       * @return UpdateAITrafficAnalysisStatusResponse
       */
      Models::UpdateAITrafficAnalysisStatusResponse updateAITrafficAnalysisStatus(const Models::UpdateAITrafficAnalysisStatusRequest &request);

      /**
       * @summary Updates an ACK cluster connector.
       *
       * @param request UpdateAckClusterConnectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAckClusterConnectorResponse
       */
      Models::UpdateAckClusterConnectorResponse updateAckClusterConnectorWithOptions(const Models::UpdateAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an ACK cluster connector.
       *
       * @param request UpdateAckClusterConnectorRequest
       * @return UpdateAckClusterConnectorResponse
       */
      Models::UpdateAckClusterConnectorResponse updateAckClusterConnector(const Models::UpdateAckClusterConnectorRequest &request);

      /**
       * @summary Modify the status of ACL check details.
       *
       * @description ## QPS Limit
       * The single-user QPS limit for this API is 10 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call this API appropriately.
       *
       * @param request UpdateAclCheckDetailStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAclCheckDetailStatusResponse
       */
      Models::UpdateAclCheckDetailStatusResponse updateAclCheckDetailStatusWithOptions(const Models::UpdateAclCheckDetailStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the status of ACL check details.
       *
       * @description ## QPS Limit
       * The single-user QPS limit for this API is 10 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call this API appropriately.
       *
       * @param request UpdateAclCheckDetailStatusRequest
       * @return UpdateAclCheckDetailStatusResponse
       */
      Models::UpdateAclCheckDetailStatusResponse updateAclCheckDetailStatus(const Models::UpdateAclCheckDetailStatusRequest &request);

      /**
       * @summary Updates the status of the Internet Border firewall switch module for a pay-as-you-go user.
       *
       * @param request UpdatePostpayUserInternetStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePostpayUserInternetStatusResponse
       */
      Models::UpdatePostpayUserInternetStatusResponse updatePostpayUserInternetStatusWithOptions(const Models::UpdatePostpayUserInternetStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of the Internet Border firewall switch module for a pay-as-you-go user.
       *
       * @param request UpdatePostpayUserInternetStatusRequest
       * @return UpdatePostpayUserInternetStatusResponse
       */
      Models::UpdatePostpayUserInternetStatusResponse updatePostpayUserInternetStatus(const Models::UpdatePostpayUserInternetStatusRequest &request);

      /**
       * @summary Updates the status of a NAT border firewall for a pay-as-you-go instance.
       *
       * @param request UpdatePostpayUserNatStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePostpayUserNatStatusResponse
       */
      Models::UpdatePostpayUserNatStatusResponse updatePostpayUserNatStatusWithOptions(const Models::UpdatePostpayUserNatStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of a NAT border firewall for a pay-as-you-go instance.
       *
       * @param request UpdatePostpayUserNatStatusRequest
       * @return UpdatePostpayUserNatStatusResponse
       */
      Models::UpdatePostpayUserNatStatusResponse updatePostpayUserNatStatus(const Models::UpdatePostpayUserNatStatusRequest &request);

      /**
       * @summary Updates the status of the VPC border firewall for a pay-as-you-go user.
       *
       * @param request UpdatePostpayUserVpcStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePostpayUserVpcStatusResponse
       */
      Models::UpdatePostpayUserVpcStatusResponse updatePostpayUserVpcStatusWithOptions(const Models::UpdatePostpayUserVpcStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of the VPC border firewall for a pay-as-you-go user.
       *
       * @param request UpdatePostpayUserVpcStatusRequest
       * @return UpdatePostpayUserVpcStatusResponse
       */
      Models::UpdatePostpayUserVpcStatusResponse updatePostpayUserVpcStatus(const Models::UpdatePostpayUserVpcStatusRequest &request);

      /**
       * @summary Updates a NAT firewall.
       *
       * @param request UpdateSecurityProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecurityProxyResponse
       */
      Models::UpdateSecurityProxyResponse updateSecurityProxyWithOptions(const Models::UpdateSecurityProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a NAT firewall.
       *
       * @param request UpdateSecurityProxyRequest
       * @return UpdateSecurityProxyResponse
       */
      Models::UpdateSecurityProxyResponse updateSecurityProxy(const Models::UpdateSecurityProxyRequest &request);

      /**
       * @summary Restores an access control backup.
       *
       * @param request UseAclBackupDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UseAclBackupDataResponse
       */
      Models::UseAclBackupDataResponse useAclBackupDataWithOptions(const Models::UseAclBackupDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores an access control backup.
       *
       * @param request UseAclBackupDataRequest
       * @return UseAclBackupDataResponse
       */
      Models::UseAclBackupDataResponse useAclBackupData(const Models::UseAclBackupDataRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
