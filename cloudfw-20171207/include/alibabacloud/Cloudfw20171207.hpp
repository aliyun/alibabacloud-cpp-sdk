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
       * @summary 备份ACL
       *
       * @param request AddAclBackupDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAclBackupDataResponse
       */
      Models::AddAclBackupDataResponse addAclBackupDataWithOptions(const Models::AddAclBackupDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 备份ACL
       *
       * @param request AddAclBackupDataRequest
       * @return AddAclBackupDataResponse
       */
      Models::AddAclBackupDataResponse addAclBackupData(const Models::AddAclBackupDataRequest &request);

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
      Models::AddAddressBookResponse addAddressBookWithOptions(const Models::AddAddressBookRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::AddAddressBookResponse addAddressBook(const Models::AddAddressBookRequest &request);

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
      Models::AddControlPolicyResponse addControlPolicyWithOptions(const Models::AddControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::AddControlPolicyResponse addControlPolicy(const Models::AddControlPolicyRequest &request);

      /**
       * @summary 添加DNS防火墙ACL
       *
       * @param request AddDnsFirewallPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDnsFirewallPolicyResponse
       */
      Models::AddDnsFirewallPolicyResponse addDnsFirewallPolicyWithOptions(const Models::AddDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加DNS防火墙ACL
       *
       * @param request AddDnsFirewallPolicyRequest
       * @return AddDnsFirewallPolicyResponse
       */
      Models::AddDnsFirewallPolicyResponse addDnsFirewallPolicy(const Models::AddDnsFirewallPolicyRequest &request);

      /**
       * @summary 新增域名解析实时任务
       *
       * @param request AddDomainResolveRealtimeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDomainResolveRealtimeTaskResponse
       */
      Models::AddDomainResolveRealtimeTaskResponse addDomainResolveRealtimeTaskWithOptions(const Models::AddDomainResolveRealtimeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增域名解析实时任务
       *
       * @param request AddDomainResolveRealtimeTaskRequest
       * @return AddDomainResolveRealtimeTaskResponse
       */
      Models::AddDomainResolveRealtimeTaskResponse addDomainResolveRealtimeTask(const Models::AddDomainResolveRealtimeTaskRequest &request);

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
      Models::AddInstanceMembersResponse addInstanceMembersWithOptions(const Models::AddInstanceMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::AddInstanceMembersResponse addInstanceMembers(const Models::AddInstanceMembersRequest &request);

      /**
       * @summary 添加私网DNS域名
       *
       * @param request AddPrivateDnsDomainNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPrivateDnsDomainNameResponse
       */
      Models::AddPrivateDnsDomainNameResponse addPrivateDnsDomainNameWithOptions(const Models::AddPrivateDnsDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加私网DNS域名
       *
       * @param request AddPrivateDnsDomainNameRequest
       * @return AddPrivateDnsDomainNameResponse
       */
      Models::AddPrivateDnsDomainNameResponse addPrivateDnsDomainName(const Models::AddPrivateDnsDomainNameRequest &request);

      /**
       * @deprecated OpenAPI BatchCopyVpcFirewallControlPolicy is deprecated
       *
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
      Models::BatchCopyVpcFirewallControlPolicyResponse batchCopyVpcFirewallControlPolicyWithOptions(const Models::BatchCopyVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI BatchCopyVpcFirewallControlPolicy is deprecated
       *
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
      Models::BatchCopyVpcFirewallControlPolicyResponse batchCopyVpcFirewallControlPolicy(const Models::BatchCopyVpcFirewallControlPolicyRequest &request);

      /**
       * @summary Deletes multiple access control policies for a virtual private cloud (VPC) firewall at a time.
       *
       * @param request BatchDeleteVpcFirewallControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteVpcFirewallControlPolicyResponse
       */
      Models::BatchDeleteVpcFirewallControlPolicyResponse batchDeleteVpcFirewallControlPolicyWithOptions(const Models::BatchDeleteVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple access control policies for a virtual private cloud (VPC) firewall at a time.
       *
       * @param request BatchDeleteVpcFirewallControlPolicyRequest
       * @return BatchDeleteVpcFirewallControlPolicyResponse
       */
      Models::BatchDeleteVpcFirewallControlPolicyResponse batchDeleteVpcFirewallControlPolicy(const Models::BatchDeleteVpcFirewallControlPolicyRequest &request);

      /**
       * @summary 清空防火墙日志
       *
       * @param request ClearLogStoreStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearLogStoreStorageResponse
       */
      Models::ClearLogStoreStorageResponse clearLogStoreStorageWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 清空防火墙日志
       *
       * @return ClearLogStoreStorageResponse
       */
      Models::ClearLogStoreStorageResponse clearLogStoreStorage();

      /**
       * @summary 创建ACK集群连接器
       *
       * @param request CreateAckClusterConnectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAckClusterConnectorResponse
       */
      Models::CreateAckClusterConnectorResponse createAckClusterConnectorWithOptions(const Models::CreateAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建ACK集群连接器
       *
       * @param request CreateAckClusterConnectorRequest
       * @return CreateAckClusterConnectorResponse
       */
      Models::CreateAckClusterConnectorResponse createAckClusterConnector(const Models::CreateAckClusterConnectorRequest &request);

      /**
       * @summary 创建ACL检查
       *
       * @param request CreateAclCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAclCheckResponse
       */
      Models::CreateAclCheckResponse createAclCheckWithOptions(const Models::CreateAclCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建ACL检查
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
       * @summary 创建实例资产同步任务
       *
       * @param request CreateInstanceSyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceSyncTaskResponse
       */
      Models::CreateInstanceSyncTaskResponse createInstanceSyncTaskWithOptions(const Models::CreateInstanceSyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例资产同步任务
       *
       * @param request CreateInstanceSyncTaskRequest
       * @return CreateInstanceSyncTaskResponse
       */
      Models::CreateInstanceSyncTaskResponse createInstanceSyncTask(const Models::CreateInstanceSyncTaskRequest &request);

      /**
       * @summary 创建IPS私网关联信息
       *
       * @param request CreateIpsPrivateAssocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpsPrivateAssocResponse
       */
      Models::CreateIpsPrivateAssocResponse createIpsPrivateAssocWithOptions(const Models::CreateIpsPrivateAssocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建IPS私网关联信息
       *
       * @param request CreateIpsPrivateAssocRequest
       * @return CreateIpsPrivateAssocResponse
       */
      Models::CreateIpsPrivateAssocResponse createIpsPrivateAssoc(const Models::CreateIpsPrivateAssocRequest &request);

      /**
       * @summary Creates an access control policy for a NAT firewall.
       *
       * @description You can call this operation to create a policy that allows, denies, or monitors the traffic that passes through the NAT firewall.
       *
       * @param request CreateNatFirewallControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatFirewallControlPolicyResponse
       */
      Models::CreateNatFirewallControlPolicyResponse createNatFirewallControlPolicyWithOptions(const Models::CreateNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access control policy for a NAT firewall.
       *
       * @description You can call this operation to create a policy that allows, denies, or monitors the traffic that passes through the NAT firewall.
       *
       * @param request CreateNatFirewallControlPolicyRequest
       * @return CreateNatFirewallControlPolicyResponse
       */
      Models::CreateNatFirewallControlPolicyResponse createNatFirewallControlPolicy(const Models::CreateNatFirewallControlPolicyRequest &request);

      /**
       * @summary 创建NAT防火墙预检查
       *
       * @param request CreateNatFirewallPreCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatFirewallPreCheckResponse
       */
      Models::CreateNatFirewallPreCheckResponse createNatFirewallPreCheckWithOptions(const Models::CreateNatFirewallPreCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建NAT防火墙预检查
       *
       * @param request CreateNatFirewallPreCheckRequest
       * @return CreateNatFirewallPreCheckResponse
       */
      Models::CreateNatFirewallPreCheckResponse createNatFirewallPreCheck(const Models::CreateNatFirewallPreCheckRequest &request);

      /**
       * @summary 创建NAT防火墙资产同步任务
       *
       * @param request CreateNatFirewallSyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatFirewallSyncTaskResponse
       */
      Models::CreateNatFirewallSyncTaskResponse createNatFirewallSyncTaskWithOptions(const Models::CreateNatFirewallSyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建NAT防火墙资产同步任务
       *
       * @param request CreateNatFirewallSyncTaskRequest
       * @return CreateNatFirewallSyncTaskResponse
       */
      Models::CreateNatFirewallSyncTaskResponse createNatFirewallSyncTask(const Models::CreateNatFirewallSyncTaskRequest &request);

      /**
       * @summary 创建私网DNS终端节点
       *
       * @param request CreatePrivateDnsEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrivateDnsEndpointResponse
       */
      Models::CreatePrivateDnsEndpointResponse createPrivateDnsEndpointWithOptions(const Models::CreatePrivateDnsEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建私网DNS终端节点
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
       * @summary Create Cloud Firewall SLS Log Delivery
       *
       * @param request CreateSlsLogDispatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSlsLogDispatchResponse
       */
      Models::CreateSlsLogDispatchResponse createSlsLogDispatchWithOptions(const Models::CreateSlsLogDispatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Cloud Firewall SLS Log Delivery
       *
       * @param request CreateSlsLogDispatchRequest
       * @return CreateSlsLogDispatchResponse
       */
      Models::CreateSlsLogDispatchResponse createSlsLogDispatch(const Models::CreateSlsLogDispatchRequest &request);

      /**
       * @summary Creates a virtual private cloud (VPC) firewall for a transit router.
       *
       * @param request CreateTrFirewallV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrFirewallV2Response
       */
      Models::CreateTrFirewallV2Response createTrFirewallV2WithOptions(const Models::CreateTrFirewallV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual private cloud (VPC) firewall for a transit router.
       *
       * @param request CreateTrFirewallV2Request
       * @return CreateTrFirewallV2Response
       */
      Models::CreateTrFirewallV2Response createTrFirewallV2(const Models::CreateTrFirewallV2Request &request);

      /**
       * @summary Creates a routing policy for a VPC firewall of a transit router.
       *
       * @param tmpReq CreateTrFirewallV2RoutePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrFirewallV2RoutePolicyResponse
       */
      Models::CreateTrFirewallV2RoutePolicyResponse createTrFirewallV2RoutePolicyWithOptions(const Models::CreateTrFirewallV2RoutePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a routing policy for a VPC firewall of a transit router.
       *
       * @param request CreateTrFirewallV2RoutePolicyRequest
       * @return CreateTrFirewallV2RoutePolicyResponse
       */
      Models::CreateTrFirewallV2RoutePolicyResponse createTrFirewallV2RoutePolicy(const Models::CreateTrFirewallV2RoutePolicyRequest &request);

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
      Models::CreateVpcFirewallCenConfigureResponse createVpcFirewallCenConfigureWithOptions(const Models::CreateVpcFirewallCenConfigureRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateVpcFirewallCenConfigureResponse createVpcFirewallCenConfigure(const Models::CreateVpcFirewallCenConfigureRequest &request);

      /**
       * @deprecated OpenAPI CreateVpcFirewallCenManualConfigure is deprecated
       *
       * @summary 创建VPC防火墙手动配置
       *
       * @param request CreateVpcFirewallCenManualConfigureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcFirewallCenManualConfigureResponse
       */
      Models::CreateVpcFirewallCenManualConfigureResponse createVpcFirewallCenManualConfigureWithOptions(const Models::CreateVpcFirewallCenManualConfigureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateVpcFirewallCenManualConfigure is deprecated
       *
       * @summary 创建VPC防火墙手动配置
       *
       * @param request CreateVpcFirewallCenManualConfigureRequest
       * @return CreateVpcFirewallCenManualConfigureResponse
       */
      Models::CreateVpcFirewallCenManualConfigureResponse createVpcFirewallCenManualConfigure(const Models::CreateVpcFirewallCenManualConfigureRequest &request);

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
      Models::CreateVpcFirewallConfigureResponse createVpcFirewallConfigureWithOptions(const Models::CreateVpcFirewallConfigureRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateVpcFirewallConfigureResponse createVpcFirewallConfigure(const Models::CreateVpcFirewallConfigureRequest &request);

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
      Models::CreateVpcFirewallControlPolicyResponse createVpcFirewallControlPolicyWithOptions(const Models::CreateVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateVpcFirewallControlPolicyResponse createVpcFirewallControlPolicy(const Models::CreateVpcFirewallControlPolicyRequest &request);

      /**
       * @summary 创建VPC防火墙开墙前置任务
       *
       * @param request CreateVpcFirewallPrecheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcFirewallPrecheckResponse
       */
      Models::CreateVpcFirewallPrecheckResponse createVpcFirewallPrecheckWithOptions(const Models::CreateVpcFirewallPrecheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建VPC防火墙开墙前置任务
       *
       * @param request CreateVpcFirewallPrecheckRequest
       * @return CreateVpcFirewallPrecheckResponse
       */
      Models::CreateVpcFirewallPrecheckResponse createVpcFirewallPrecheck(const Models::CreateVpcFirewallPrecheckRequest &request);

      /**
       * @summary 创建VPC防火墙资产同步任务
       *
       * @param request CreateVpcFirewallTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcFirewallTaskResponse
       */
      Models::CreateVpcFirewallTaskResponse createVpcFirewallTaskWithOptions(const Models::CreateVpcFirewallTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建VPC防火墙资产同步任务
       *
       * @param request CreateVpcFirewallTaskRequest
       * @return CreateVpcFirewallTaskResponse
       */
      Models::CreateVpcFirewallTaskResponse createVpcFirewallTask(const Models::CreateVpcFirewallTaskRequest &request);

      /**
       * @summary 删除ACK集群连接器
       *
       * @param request DeleteAckClusterConnectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAckClusterConnectorResponse
       */
      Models::DeleteAckClusterConnectorResponse deleteAckClusterConnectorWithOptions(const Models::DeleteAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除ACK集群连接器
       *
       * @param request DeleteAckClusterConnectorRequest
       * @return DeleteAckClusterConnectorResponse
       */
      Models::DeleteAckClusterConnectorResponse deleteAckClusterConnector(const Models::DeleteAckClusterConnectorRequest &request);

      /**
       * @summary 删除ACL备份
       *
       * @param request DeleteAclBackupDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAclBackupDataResponse
       */
      Models::DeleteAclBackupDataResponse deleteAclBackupDataWithOptions(const Models::DeleteAclBackupDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除ACL备份
       *
       * @param request DeleteAclBackupDataRequest
       * @return DeleteAclBackupDataResponse
       */
      Models::DeleteAclBackupDataResponse deleteAclBackupData(const Models::DeleteAclBackupDataRequest &request);

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
      Models::DeleteAddressBookResponse deleteAddressBookWithOptions(const Models::DeleteAddressBookRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteAddressBookResponse deleteAddressBook(const Models::DeleteAddressBookRequest &request);

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
      Models::DeleteControlPolicyResponse deleteControlPolicyWithOptions(const Models::DeleteControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
       * @summary 删除DNS防火墙规则
       *
       * @param request DeleteDnsFirewallPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDnsFirewallPolicyResponse
       */
      Models::DeleteDnsFirewallPolicyResponse deleteDnsFirewallPolicyWithOptions(const Models::DeleteDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除DNS防火墙规则
       *
       * @param request DeleteDnsFirewallPolicyRequest
       * @return DeleteDnsFirewallPolicyResponse
       */
      Models::DeleteDnsFirewallPolicyResponse deleteDnsFirewallPolicy(const Models::DeleteDnsFirewallPolicyRequest &request);

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
      Models::DeleteDownloadTaskResponse deleteDownloadTaskWithOptions(const Models::DeleteDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteDownloadTaskResponse deleteDownloadTask(const Models::DeleteDownloadTaskRequest &request);

      /**
       * @summary Deletes routing policies for a virtual private cloud (VPC) firewall of a transit router.
       *
       * @param request DeleteFirewallV2RoutePoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFirewallV2RoutePoliciesResponse
       */
      Models::DeleteFirewallV2RoutePoliciesResponse deleteFirewallV2RoutePoliciesWithOptions(const Models::DeleteFirewallV2RoutePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes routing policies for a virtual private cloud (VPC) firewall of a transit router.
       *
       * @param request DeleteFirewallV2RoutePoliciesRequest
       * @return DeleteFirewallV2RoutePoliciesResponse
       */
      Models::DeleteFirewallV2RoutePoliciesResponse deleteFirewallV2RoutePolicies(const Models::DeleteFirewallV2RoutePoliciesRequest &request);

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
      Models::DeleteInstanceMembersResponse deleteInstanceMembersWithOptions(const Models::DeleteInstanceMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteInstanceMembersResponse deleteInstanceMembers(const Models::DeleteInstanceMembersRequest &request);

      /**
       * @summary 创建IPS私网关联信息
       *
       * @param request DeleteIpsPrivateAssocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpsPrivateAssocResponse
       */
      Models::DeleteIpsPrivateAssocResponse deleteIpsPrivateAssocWithOptions(const Models::DeleteIpsPrivateAssocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建IPS私网关联信息
       *
       * @param request DeleteIpsPrivateAssocRequest
       * @return DeleteIpsPrivateAssocResponse
       */
      Models::DeleteIpsPrivateAssocResponse deleteIpsPrivateAssoc(const Models::DeleteIpsPrivateAssocRequest &request);

      /**
       * @summary Deletes an access control policy that is created for a NAT firewall.
       *
       * @description You can use this operation to delete an outbound access control policy that is created for a NAT firewall.
       *
       * @param request DeleteNatFirewallControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNatFirewallControlPolicyResponse
       */
      Models::DeleteNatFirewallControlPolicyResponse deleteNatFirewallControlPolicyWithOptions(const Models::DeleteNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access control policy that is created for a NAT firewall.
       *
       * @description You can use this operation to delete an outbound access control policy that is created for a NAT firewall.
       *
       * @param request DeleteNatFirewallControlPolicyRequest
       * @return DeleteNatFirewallControlPolicyResponse
       */
      Models::DeleteNatFirewallControlPolicyResponse deleteNatFirewallControlPolicy(const Models::DeleteNatFirewallControlPolicyRequest &request);

      /**
       * @summary Deletes access control policies that are created for a NAT firewall at a time.
       *
       * @param request DeleteNatFirewallControlPolicyBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNatFirewallControlPolicyBatchResponse
       */
      Models::DeleteNatFirewallControlPolicyBatchResponse deleteNatFirewallControlPolicyBatchWithOptions(const Models::DeleteNatFirewallControlPolicyBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes access control policies that are created for a NAT firewall at a time.
       *
       * @param request DeleteNatFirewallControlPolicyBatchRequest
       * @return DeleteNatFirewallControlPolicyBatchResponse
       */
      Models::DeleteNatFirewallControlPolicyBatchResponse deleteNatFirewallControlPolicyBatch(const Models::DeleteNatFirewallControlPolicyBatchRequest &request);

      /**
       * @summary 清空私网DNS域名
       *
       * @param request DeletePrivateDnsAllDomainNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivateDnsAllDomainNameResponse
       */
      Models::DeletePrivateDnsAllDomainNameResponse deletePrivateDnsAllDomainNameWithOptions(const Models::DeletePrivateDnsAllDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 清空私网DNS域名
       *
       * @param request DeletePrivateDnsAllDomainNameRequest
       * @return DeletePrivateDnsAllDomainNameResponse
       */
      Models::DeletePrivateDnsAllDomainNameResponse deletePrivateDnsAllDomainName(const Models::DeletePrivateDnsAllDomainNameRequest &request);

      /**
       * @summary 删除私网DNS域名
       *
       * @param request DeletePrivateDnsDomainNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivateDnsDomainNameResponse
       */
      Models::DeletePrivateDnsDomainNameResponse deletePrivateDnsDomainNameWithOptions(const Models::DeletePrivateDnsDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除私网DNS域名
       *
       * @param request DeletePrivateDnsDomainNameRequest
       * @return DeletePrivateDnsDomainNameResponse
       */
      Models::DeletePrivateDnsDomainNameResponse deletePrivateDnsDomainName(const Models::DeletePrivateDnsDomainNameRequest &request);

      /**
       * @summary 删除私网DNS终端节点
       *
       * @param request DeletePrivateDnsEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivateDnsEndpointResponse
       */
      Models::DeletePrivateDnsEndpointResponse deletePrivateDnsEndpointWithOptions(const Models::DeletePrivateDnsEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除私网DNS终端节点
       *
       * @param request DeletePrivateDnsEndpointRequest
       * @return DeletePrivateDnsEndpointResponse
       */
      Models::DeletePrivateDnsEndpointResponse deletePrivateDnsEndpoint(const Models::DeletePrivateDnsEndpointRequest &request);

      /**
       * @summary Deletes a NAT firewall.
       *
       * @param request DeleteSecurityProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityProxyResponse
       */
      Models::DeleteSecurityProxyResponse deleteSecurityProxyWithOptions(const Models::DeleteSecurityProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a NAT firewall.
       *
       * @param request DeleteSecurityProxyRequest
       * @return DeleteSecurityProxyResponse
       */
      Models::DeleteSecurityProxyResponse deleteSecurityProxy(const Models::DeleteSecurityProxyRequest &request);

      /**
       * @summary Deletes a virtual private cloud (VPC) firewall that is created for a transit router.
       *
       * @param request DeleteTrFirewallV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrFirewallV2Response
       */
      Models::DeleteTrFirewallV2Response deleteTrFirewallV2WithOptions(const Models::DeleteTrFirewallV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual private cloud (VPC) firewall that is created for a transit router.
       *
       * @param request DeleteTrFirewallV2Request
       * @return DeleteTrFirewallV2Response
       */
      Models::DeleteTrFirewallV2Response deleteTrFirewallV2(const Models::DeleteTrFirewallV2Request &request);

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
      Models::DeleteVpcFirewallCenConfigureResponse deleteVpcFirewallCenConfigureWithOptions(const Models::DeleteVpcFirewallCenConfigureRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteVpcFirewallCenConfigureResponse deleteVpcFirewallCenConfigure(const Models::DeleteVpcFirewallCenConfigureRequest &request);

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
      Models::DeleteVpcFirewallConfigureResponse deleteVpcFirewallConfigureWithOptions(const Models::DeleteVpcFirewallConfigureRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteVpcFirewallConfigureResponse deleteVpcFirewallConfigure(const Models::DeleteVpcFirewallConfigureRequest &request);

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
      Models::DeleteVpcFirewallControlPolicyResponse deleteVpcFirewallControlPolicyWithOptions(const Models::DeleteVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteVpcFirewallControlPolicyResponse deleteVpcFirewallControlPolicy(const Models::DeleteVpcFirewallControlPolicyRequest &request);

      /**
       * @summary Queries the statistics on the requests that are blocked by the access control list (ACL) feature.
       *
       * @param request DescribeACLProtectTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeACLProtectTrendResponse
       */
      Models::DescribeACLProtectTrendResponse describeACLProtectTrendWithOptions(const Models::DescribeACLProtectTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on the requests that are blocked by the access control list (ACL) feature.
       *
       * @param request DescribeACLProtectTrendRequest
       * @return DescribeACLProtectTrendResponse
       */
      Models::DescribeACLProtectTrendResponse describeACLProtectTrend(const Models::DescribeACLProtectTrendRequest &request);

      /**
       * @summary 查询AI流量分析开启状态
       *
       * @param request DescribeAITrafficAnalysisStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAITrafficAnalysisStatusResponse
       */
      Models::DescribeAITrafficAnalysisStatusResponse describeAITrafficAnalysisStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询AI流量分析开启状态
       *
       * @return DescribeAITrafficAnalysisStatusResponse
       */
      Models::DescribeAITrafficAnalysisStatusResponse describeAITrafficAnalysisStatus();

      /**
       * @summary 查询接入实例地域列表
       *
       * @param request DescribeAccessInstanceRegionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessInstanceRegionListResponse
       */
      Models::DescribeAccessInstanceRegionListResponse describeAccessInstanceRegionListWithOptions(const Models::DescribeAccessInstanceRegionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询接入实例地域列表
       *
       * @param request DescribeAccessInstanceRegionListRequest
       * @return DescribeAccessInstanceRegionListResponse
       */
      Models::DescribeAccessInstanceRegionListResponse describeAccessInstanceRegionList(const Models::DescribeAccessInstanceRegionListRequest &request);

      /**
       * @summary 查询接入实例任务
       *
       * @param request DescribeAccessInstanceTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessInstanceTaskResponse
       */
      Models::DescribeAccessInstanceTaskResponse describeAccessInstanceTaskWithOptions(const Models::DescribeAccessInstanceTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询接入实例任务
       *
       * @param request DescribeAccessInstanceTaskRequest
       * @return DescribeAccessInstanceTaskResponse
       */
      Models::DescribeAccessInstanceTaskResponse describeAccessInstanceTask(const Models::DescribeAccessInstanceTaskRequest &request);

      /**
       * @summary 查询接入实例的交换机列表
       *
       * @param request DescribeAccessInstanceVSwitchListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessInstanceVSwitchListResponse
       */
      Models::DescribeAccessInstanceVSwitchListResponse describeAccessInstanceVSwitchListWithOptions(const Models::DescribeAccessInstanceVSwitchListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询接入实例的交换机列表
       *
       * @param request DescribeAccessInstanceVSwitchListRequest
       * @return DescribeAccessInstanceVSwitchListResponse
       */
      Models::DescribeAccessInstanceVSwitchListResponse describeAccessInstanceVSwitchList(const Models::DescribeAccessInstanceVSwitchListRequest &request);

      /**
       * @summary 查询接入实例VPC列表
       *
       * @param request DescribeAccessInstanceVpcListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessInstanceVpcListResponse
       */
      Models::DescribeAccessInstanceVpcListResponse describeAccessInstanceVpcListWithOptions(const Models::DescribeAccessInstanceVpcListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询接入实例VPC列表
       *
       * @param request DescribeAccessInstanceVpcListRequest
       * @return DescribeAccessInstanceVpcListResponse
       */
      Models::DescribeAccessInstanceVpcListResponse describeAccessInstanceVpcList(const Models::DescribeAccessInstanceVpcListRequest &request);

      /**
       * @summary 查询接入实例支持的可用区列表
       *
       * @param request DescribeAccessInstanceZoneListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessInstanceZoneListResponse
       */
      Models::DescribeAccessInstanceZoneListResponse describeAccessInstanceZoneListWithOptions(const Models::DescribeAccessInstanceZoneListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询接入实例支持的可用区列表
       *
       * @param request DescribeAccessInstanceZoneListRequest
       * @return DescribeAccessInstanceZoneListResponse
       */
      Models::DescribeAccessInstanceZoneListResponse describeAccessInstanceZoneList(const Models::DescribeAccessInstanceZoneListRequest &request);

      /**
       * @summary 查询指定ACK集群连接器
       *
       * @param request DescribeAckClusterConnectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAckClusterConnectorResponse
       */
      Models::DescribeAckClusterConnectorResponse describeAckClusterConnectorWithOptions(const Models::DescribeAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定ACK集群连接器
       *
       * @param request DescribeAckClusterConnectorRequest
       * @return DescribeAckClusterConnectorResponse
       */
      Models::DescribeAckClusterConnectorResponse describeAckClusterConnector(const Models::DescribeAckClusterConnectorRequest &request);

      /**
       * @summary 批量查询ACK集群连接器列表
       *
       * @param request DescribeAckClusterConnectorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAckClusterConnectorsResponse
       */
      Models::DescribeAckClusterConnectorsResponse describeAckClusterConnectorsWithOptions(const Models::DescribeAckClusterConnectorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询ACK集群连接器列表
       *
       * @param request DescribeAckClusterConnectorsRequest
       * @return DescribeAckClusterConnectorsResponse
       */
      Models::DescribeAckClusterConnectorsResponse describeAckClusterConnectors(const Models::DescribeAckClusterConnectorsRequest &request);

      /**
       * @summary 查询阿里云K8S容器服务（ACK）集群命名空间
       *
       * @param request DescribeAckClusterNamespacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAckClusterNamespacesResponse
       */
      Models::DescribeAckClusterNamespacesResponse describeAckClusterNamespacesWithOptions(const Models::DescribeAckClusterNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询阿里云K8S容器服务（ACK）集群命名空间
       *
       * @param request DescribeAckClusterNamespacesRequest
       * @return DescribeAckClusterNamespacesResponse
       */
      Models::DescribeAckClusterNamespacesResponse describeAckClusterNamespaces(const Models::DescribeAckClusterNamespacesRequest &request);

      /**
       * @summary 查询阿里云K8S容器服务（ACK）集群标签
       *
       * @param request DescribeAckClusterPodLabelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAckClusterPodLabelsResponse
       */
      Models::DescribeAckClusterPodLabelsResponse describeAckClusterPodLabelsWithOptions(const Models::DescribeAckClusterPodLabelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询阿里云K8S容器服务（ACK）集群标签
       *
       * @param request DescribeAckClusterPodLabelsRequest
       * @return DescribeAckClusterPodLabelsResponse
       */
      Models::DescribeAckClusterPodLabelsResponse describeAckClusterPodLabels(const Models::DescribeAckClusterPodLabelsRequest &request);

      /**
       * @summary 查询阿里云K8S容器服务（ACK）集群，查询符合条件的ACK集群（例如指定集群类型、集群规格）列表信息
       *
       * @param request DescribeAckClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAckClustersResponse
       */
      Models::DescribeAckClustersResponse describeAckClustersWithOptions(const Models::DescribeAckClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询阿里云K8S容器服务（ACK）集群，查询符合条件的ACK集群（例如指定集群类型、集群规格）列表信息
       *
       * @param request DescribeAckClustersRequest
       * @return DescribeAckClustersResponse
       */
      Models::DescribeAckClustersResponse describeAckClusters(const Models::DescribeAckClustersRequest &request);

      /**
       * @summary 批量查询访问控制应用
       *
       * @param request DescribeAclAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclAppsResponse
       */
      Models::DescribeAclAppsResponse describeAclAppsWithOptions(const Models::DescribeAclAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询访问控制应用
       *
       * @param request DescribeAclAppsRequest
       * @return DescribeAclAppsResponse
       */
      Models::DescribeAclAppsResponse describeAclApps(const Models::DescribeAclAppsRequest &request);

      /**
       * @summary 获取ACL备份列表
       *
       * @param request DescribeAclBackupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclBackupListResponse
       */
      Models::DescribeAclBackupListResponse describeAclBackupListWithOptions(const Models::DescribeAclBackupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取ACL备份列表
       *
       * @param request DescribeAclBackupListRequest
       * @return DescribeAclBackupListResponse
       */
      Models::DescribeAclBackupListResponse describeAclBackupList(const Models::DescribeAclBackupListRequest &request);

      /**
       * @summary 查询ACL检查详情
       *
       * @param request DescribeAclCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclCheckResponse
       */
      Models::DescribeAclCheckResponse describeAclCheckWithOptions(const Models::DescribeAclCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询ACL检查详情
       *
       * @param request DescribeAclCheckRequest
       * @return DescribeAclCheckResponse
       */
      Models::DescribeAclCheckResponse describeAclCheck(const Models::DescribeAclCheckRequest &request);

      /**
       * @summary 查询NAT防火墙预检查结果
       *
       * @param request DescribeAclCheckQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclCheckQuotaResponse
       */
      Models::DescribeAclCheckQuotaResponse describeAclCheckQuotaWithOptions(const Models::DescribeAclCheckQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询NAT防火墙预检查结果
       *
       * @param request DescribeAclCheckQuotaRequest
       * @return DescribeAclCheckQuotaResponse
       */
      Models::DescribeAclCheckQuotaResponse describeAclCheckQuota(const Models::DescribeAclCheckQuotaRequest &request);

      /**
       * @summary 批量查询ACL检查条目
       *
       * @param request DescribeAclChecksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclChecksResponse
       */
      Models::DescribeAclChecksResponse describeAclChecksWithOptions(const Models::DescribeAclChecksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询ACL检查条目
       *
       * @param request DescribeAclChecksRequest
       * @return DescribeAclChecksResponse
       */
      Models::DescribeAclChecksResponse describeAclChecks(const Models::DescribeAclChecksRequest &request);

      /**
       * @summary 获取总ACL配置数
       *
       * @param request DescribeAclRuleCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclRuleCountResponse
       */
      Models::DescribeAclRuleCountResponse describeAclRuleCountWithOptions(const Models::DescribeAclRuleCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取总ACL配置数
       *
       * @param request DescribeAclRuleCountRequest
       * @return DescribeAclRuleCountResponse
       */
      Models::DescribeAclRuleCountResponse describeAclRuleCount(const Models::DescribeAclRuleCountRequest &request);

      /**
       * @summary 获取ACL白名单
       *
       * @param request DescribeAclWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAclWhitelistResponse
       */
      Models::DescribeAclWhitelistResponse describeAclWhitelistWithOptions(const Models::DescribeAclWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取ACL白名单
       *
       * @param request DescribeAclWhitelistRequest
       * @return DescribeAclWhitelistResponse
       */
      Models::DescribeAclWhitelistResponse describeAclWhitelist(const Models::DescribeAclWhitelistRequest &request);

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
      Models::DescribeAddressBookResponse describeAddressBookWithOptions(const Models::DescribeAddressBookRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeAddressBookResponse describeAddressBook(const Models::DescribeAddressBookRequest &request);

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
      Models::DescribeAssetListResponse describeAssetListWithOptions(const Models::DescribeAssetListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeAssetListResponse describeAssetList(const Models::DescribeAssetListRequest &request);

      /**
       * @summary Queries the risk levels of assets.
       *
       * @param request DescribeAssetRiskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAssetRiskListResponse
       */
      Models::DescribeAssetRiskListResponse describeAssetRiskListWithOptions(const Models::DescribeAssetRiskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the risk levels of assets.
       *
       * @param request DescribeAssetRiskListRequest
       * @return DescribeAssetRiskListResponse
       */
      Models::DescribeAssetRiskListResponse describeAssetRiskList(const Models::DescribeAssetRiskListRequest &request);

      /**
       * @summary Queries statistics on the assets that are protected by Cloud Firewall.
       *
       * @param request DescribeAssetStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAssetStatisticResponse
       */
      Models::DescribeAssetStatisticResponse describeAssetStatisticWithOptions(const Models::DescribeAssetStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics on the assets that are protected by Cloud Firewall.
       *
       * @param request DescribeAssetStatisticRequest
       * @return DescribeAssetStatisticResponse
       */
      Models::DescribeAssetStatisticResponse describeAssetStatistic(const Models::DescribeAssetStatisticRequest &request);

      /**
       * @summary 获取敏感数据类别开关
       *
       * @param request DescribeAttackAppCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAttackAppCategoryResponse
       */
      Models::DescribeAttackAppCategoryResponse describeAttackAppCategoryWithOptions(const Models::DescribeAttackAppCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取敏感数据类别开关
       *
       * @param request DescribeAttackAppCategoryRequest
       * @return DescribeAttackAppCategoryResponse
       */
      Models::DescribeAttackAppCategoryResponse describeAttackAppCategory(const Models::DescribeAttackAppCategoryRequest &request);

      /**
       * @summary 获取日志分发状态
       *
       * @param request DescribeBatchSlsDispatchStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBatchSlsDispatchStatusResponse
       */
      Models::DescribeBatchSlsDispatchStatusResponse describeBatchSlsDispatchStatusWithOptions(const Models::DescribeBatchSlsDispatchStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取日志分发状态
       *
       * @param request DescribeBatchSlsDispatchStatusRequest
       * @return DescribeBatchSlsDispatchStatusResponse
       */
      Models::DescribeBatchSlsDispatchStatusResponse describeBatchSlsDispatchStatus(const Models::DescribeBatchSlsDispatchStatusRequest &request);

      /**
       * @deprecated OpenAPI DescribeCfwRiskLevelSummary is deprecated
       *
       * @summary Queries the firewall risk level.
       *
       * @param request DescribeCfwRiskLevelSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCfwRiskLevelSummaryResponse
       */
      Models::DescribeCfwRiskLevelSummaryResponse describeCfwRiskLevelSummaryWithOptions(const Models::DescribeCfwRiskLevelSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeCfwRiskLevelSummary is deprecated
       *
       * @summary Queries the firewall risk level.
       *
       * @param request DescribeCfwRiskLevelSummaryRequest
       * @return DescribeCfwRiskLevelSummaryResponse
       */
      Models::DescribeCfwRiskLevelSummaryResponse describeCfwRiskLevelSummary(const Models::DescribeCfwRiskLevelSummaryRequest &request);

      /**
       * @summary 获取清空授权信息
       *
       * @param request DescribeClearAuthInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClearAuthInfoResponse
       */
      Models::DescribeClearAuthInfoResponse describeClearAuthInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取清空授权信息
       *
       * @return DescribeClearAuthInfoResponse
       */
      Models::DescribeClearAuthInfoResponse describeClearAuthInfo();

      /**
       * @summary 获取已配置的目的IP
       *
       * @param request DescribeConfiguredDestinationIPRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConfiguredDestinationIPResponse
       */
      Models::DescribeConfiguredDestinationIPResponse describeConfiguredDestinationIPWithOptions(const Models::DescribeConfiguredDestinationIPRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取已配置的目的IP
       *
       * @param request DescribeConfiguredDestinationIPRequest
       * @return DescribeConfiguredDestinationIPResponse
       */
      Models::DescribeConfiguredDestinationIPResponse describeConfiguredDestinationIP(const Models::DescribeConfiguredDestinationIPRequest &request);

      /**
       * @summary 获取已配置的域名
       *
       * @param request DescribeConfiguredDomainNamesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConfiguredDomainNamesResponse
       */
      Models::DescribeConfiguredDomainNamesResponse describeConfiguredDomainNamesWithOptions(const Models::DescribeConfiguredDomainNamesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取已配置的域名
       *
       * @param request DescribeConfiguredDomainNamesRequest
       * @return DescribeConfiguredDomainNamesResponse
       */
      Models::DescribeConfiguredDomainNamesResponse describeConfiguredDomainNames(const Models::DescribeConfiguredDomainNamesRequest &request);

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
      Models::DescribeControlPolicyResponse describeControlPolicyWithOptions(const Models::DescribeControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeControlPolicyResponse describeControlPolicy(const Models::DescribeControlPolicyRequest &request);

      /**
       * @summary 查询访问控制策略的域名解析结果
       *
       * @param request DescribeControlPolicyDomainResolveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeControlPolicyDomainResolveResponse
       */
      Models::DescribeControlPolicyDomainResolveResponse describeControlPolicyDomainResolveWithOptions(const Models::DescribeControlPolicyDomainResolveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询访问控制策略的域名解析结果
       *
       * @param request DescribeControlPolicyDomainResolveRequest
       * @return DescribeControlPolicyDomainResolveResponse
       */
      Models::DescribeControlPolicyDomainResolveResponse describeControlPolicyDomainResolve(const Models::DescribeControlPolicyDomainResolveRequest &request);

      /**
       * @summary 获取已经创建的 NAT 防火墙
       *
       * @param request DescribeCreatedNatFirewallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreatedNatFirewallResponse
       */
      Models::DescribeCreatedNatFirewallResponse describeCreatedNatFirewallWithOptions(const Models::DescribeCreatedNatFirewallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取已经创建的 NAT 防火墙
       *
       * @param request DescribeCreatedNatFirewallRequest
       * @return DescribeCreatedNatFirewallResponse
       */
      Models::DescribeCreatedNatFirewallResponse describeCreatedNatFirewall(const Models::DescribeCreatedNatFirewallRequest &request);

      /**
       * @summary 获取成员账号列表
       *
       * @param request DescribeCtrlInstanceMemberAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCtrlInstanceMemberAccountsResponse
       */
      Models::DescribeCtrlInstanceMemberAccountsResponse describeCtrlInstanceMemberAccountsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取成员账号列表
       *
       * @return DescribeCtrlInstanceMemberAccountsResponse
       */
      Models::DescribeCtrlInstanceMemberAccountsResponse describeCtrlInstanceMemberAccounts();

      /**
       * @summary Queries the default intrusion prevention system (IPS) configurations.
       *
       * @param request DescribeDefaultIPSConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDefaultIPSConfigResponse
       */
      Models::DescribeDefaultIPSConfigResponse describeDefaultIPSConfigWithOptions(const Models::DescribeDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default intrusion prevention system (IPS) configurations.
       *
       * @param request DescribeDefaultIPSConfigRequest
       * @return DescribeDefaultIPSConfigResponse
       */
      Models::DescribeDefaultIPSConfigResponse describeDefaultIPSConfig(const Models::DescribeDefaultIPSConfigRequest &request);

      /**
       * @summary 获取DNS防火墙ACL列表
       *
       * @param request DescribeDnsFirewallPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsFirewallPolicyResponse
       */
      Models::DescribeDnsFirewallPolicyResponse describeDnsFirewallPolicyWithOptions(const Models::DescribeDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取DNS防火墙ACL列表
       *
       * @param request DescribeDnsFirewallPolicyRequest
       * @return DescribeDnsFirewallPolicyResponse
       */
      Models::DescribeDnsFirewallPolicyResponse describeDnsFirewallPolicy(const Models::DescribeDnsFirewallPolicyRequest &request);

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
      Models::DescribeDomainResolveResponse describeDomainResolveWithOptions(const Models::DescribeDomainResolveRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeDomainResolveResponse describeDomainResolve(const Models::DescribeDomainResolveRequest &request);

      /**
       * @summary Queries file download tasks, including the task information and download URLs.
       *
       * @param request DescribeDownloadTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDownloadTaskResponse
       */
      Models::DescribeDownloadTaskResponse describeDownloadTaskWithOptions(const Models::DescribeDownloadTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries file download tasks, including the task information and download URLs.
       *
       * @param request DescribeDownloadTaskRequest
       * @return DescribeDownloadTaskResponse
       */
      Models::DescribeDownloadTaskResponse describeDownloadTask(const Models::DescribeDownloadTaskRequest &request);

      /**
       * @summary Queries the types of download tasks. The type corresponds to the TaskType fields in the download task-related operations.
       *
       * @param request DescribeDownloadTaskTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDownloadTaskTypeResponse
       */
      Models::DescribeDownloadTaskTypeResponse describeDownloadTaskTypeWithOptions(const Models::DescribeDownloadTaskTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types of download tasks. The type corresponds to the TaskType fields in the download task-related operations.
       *
       * @param request DescribeDownloadTaskTypeRequest
       * @return DescribeDownloadTaskTypeResponse
       */
      Models::DescribeDownloadTaskTypeResponse describeDownloadTaskType(const Models::DescribeDownloadTaskTypeRequest &request);

      /**
       * @deprecated OpenAPI DescribeFirewallDropStatistics is deprecated
       *
       * @summary 获取防火墙DROP数据统计
       *
       * @param request DescribeFirewallDropStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFirewallDropStatisticsResponse
       */
      Models::DescribeFirewallDropStatisticsResponse describeFirewallDropStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeFirewallDropStatistics is deprecated
       *
       * @summary 获取防火墙DROP数据统计
       *
       * @return DescribeFirewallDropStatisticsResponse
       */
      Models::DescribeFirewallDropStatisticsResponse describeFirewallDropStatistics();

      /**
       * @summary 获取防火墙任务
       *
       * @param request DescribeFirewallTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFirewallTaskResponse
       */
      Models::DescribeFirewallTaskResponse describeFirewallTaskWithOptions(const Models::DescribeFirewallTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取防火墙任务
       *
       * @param request DescribeFirewallTaskRequest
       * @return DescribeFirewallTaskResponse
       */
      Models::DescribeFirewallTaskResponse describeFirewallTask(const Models::DescribeFirewallTaskRequest &request);

      /**
       * @summary 获取防火墙创建的交换机
       *
       * @param request DescribeFirewallVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFirewallVSwitchResponse
       */
      Models::DescribeFirewallVSwitchResponse describeFirewallVSwitchWithOptions(const Models::DescribeFirewallVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取防火墙创建的交换机
       *
       * @param request DescribeFirewallVSwitchRequest
       * @return DescribeFirewallVSwitchResponse
       */
      Models::DescribeFirewallVSwitchResponse describeFirewallVSwitch(const Models::DescribeFirewallVSwitchRequest &request);

      /**
       * @summary 获取防火墙交换机资源
       *
       * @param request DescribeFirewallVswitchResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFirewallVswitchResourcesResponse
       */
      Models::DescribeFirewallVswitchResourcesResponse describeFirewallVswitchResourcesWithOptions(const Models::DescribeFirewallVswitchResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取防火墙交换机资源
       *
       * @param request DescribeFirewallVswitchResourcesRequest
       * @return DescribeFirewallVswitchResourcesResponse
       */
      Models::DescribeFirewallVswitchResourcesResponse describeFirewallVswitchResources(const Models::DescribeFirewallVswitchResourcesRequest &request);

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
      Models::DescribeInstanceMembersResponse describeInstanceMembersWithOptions(const Models::DescribeInstanceMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeInstanceMembersResponse describeInstanceMembers(const Models::DescribeInstanceMembersRequest &request);

      /**
       * @summary 获取实例RD账号
       *
       * @param request DescribeInstanceRdAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceRdAccountsResponse
       */
      Models::DescribeInstanceRdAccountsResponse describeInstanceRdAccountsWithOptions(const Models::DescribeInstanceRdAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例RD账号
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
       * @summary 获取互联网方向删除会话趋势图
       *
       * @param request DescribeInternetDropTrafficTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetDropTrafficTrendResponse
       */
      Models::DescribeInternetDropTrafficTrendResponse describeInternetDropTrafficTrendWithOptions(const Models::DescribeInternetDropTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取互联网方向删除会话趋势图
       *
       * @param request DescribeInternetDropTrafficTrendRequest
       * @return DescribeInternetDropTrafficTrendResponse
       */
      Models::DescribeInternetDropTrafficTrendResponse describeInternetDropTrafficTrend(const Models::DescribeInternetDropTrafficTrendRequest &request);

      /**
       * @summary 获取互联网开放详情
       *
       * @param request DescribeInternetOpenDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetOpenDetailResponse
       */
      Models::DescribeInternetOpenDetailResponse describeInternetOpenDetailWithOptions(const Models::DescribeInternetOpenDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取互联网开放详情
       *
       * @param request DescribeInternetOpenDetailRequest
       * @return DescribeInternetOpenDetailResponse
       */
      Models::DescribeInternetOpenDetailResponse describeInternetOpenDetail(const Models::DescribeInternetOpenDetailRequest &request);

      /**
       * @summary Queries the IP addresses that are open to the Internet.
       *
       * @param request DescribeInternetOpenIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetOpenIpResponse
       */
      Models::DescribeInternetOpenIpResponse describeInternetOpenIpWithOptions(const Models::DescribeInternetOpenIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP addresses that are open to the Internet.
       *
       * @param request DescribeInternetOpenIpRequest
       * @return DescribeInternetOpenIpResponse
       */
      Models::DescribeInternetOpenIpResponse describeInternetOpenIp(const Models::DescribeInternetOpenIpRequest &request);

      /**
       * @summary 获取互联网开放端口
       *
       * @param request DescribeInternetOpenPortRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetOpenPortResponse
       */
      Models::DescribeInternetOpenPortResponse describeInternetOpenPortWithOptions(const Models::DescribeInternetOpenPortRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取互联网开放端口
       *
       * @param request DescribeInternetOpenPortRequest
       * @return DescribeInternetOpenPortResponse
       */
      Models::DescribeInternetOpenPortResponse describeInternetOpenPort(const Models::DescribeInternetOpenPortRequest &request);

      /**
       * @summary 获取互联网开放服务
       *
       * @param request DescribeInternetOpenServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetOpenServiceResponse
       */
      Models::DescribeInternetOpenServiceResponse describeInternetOpenServiceWithOptions(const Models::DescribeInternetOpenServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取互联网开放服务
       *
       * @param request DescribeInternetOpenServiceRequest
       * @return DescribeInternetOpenServiceResponse
       */
      Models::DescribeInternetOpenServiceResponse describeInternetOpenService(const Models::DescribeInternetOpenServiceRequest &request);

      /**
       * @summary 获取互联网开放统计
       *
       * @param request DescribeInternetOpenStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetOpenStatisticResponse
       */
      Models::DescribeInternetOpenStatisticResponse describeInternetOpenStatisticWithOptions(const Models::DescribeInternetOpenStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取互联网开放统计
       *
       * @param request DescribeInternetOpenStatisticRequest
       * @return DescribeInternetOpenStatisticResponse
       */
      Models::DescribeInternetOpenStatisticResponse describeInternetOpenStatistic(const Models::DescribeInternetOpenStatisticRequest &request);

      /**
       * @summary 获取互联网服务名称列表
       *
       * @param request DescribeInternetServiceNameListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetServiceNameListResponse
       */
      Models::DescribeInternetServiceNameListResponse describeInternetServiceNameListWithOptions(const Models::DescribeInternetServiceNameListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取互联网服务名称列表
       *
       * @param request DescribeInternetServiceNameListRequest
       * @return DescribeInternetServiceNameListResponse
       */
      Models::DescribeInternetServiceNameListResponse describeInternetServiceNameList(const Models::DescribeInternetServiceNameListRequest &request);

      /**
       * @summary 获取互联网SLB
       *
       * @param request DescribeInternetSlbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetSlbResponse
       */
      Models::DescribeInternetSlbResponse describeInternetSlbWithOptions(const Models::DescribeInternetSlbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取互联网SLB
       *
       * @param request DescribeInternetSlbRequest
       * @return DescribeInternetSlbResponse
       */
      Models::DescribeInternetSlbResponse describeInternetSlb(const Models::DescribeInternetSlbRequest &request);

      /**
       * @summary 获取互联网流量时间TOP
       *
       * @param request DescribeInternetTimeTopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetTimeTopResponse
       */
      Models::DescribeInternetTimeTopResponse describeInternetTimeTopWithOptions(const Models::DescribeInternetTimeTopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取互联网流量时间TOP
       *
       * @param request DescribeInternetTimeTopRequest
       * @return DescribeInternetTimeTopResponse
       */
      Models::DescribeInternetTimeTopResponse describeInternetTimeTop(const Models::DescribeInternetTimeTopRequest &request);

      /**
       * @summary 获取互联网流量TOP趋势图
       *
       * @param request DescribeInternetTrafficTopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetTrafficTopResponse
       */
      Models::DescribeInternetTrafficTopResponse describeInternetTrafficTopWithOptions(const Models::DescribeInternetTrafficTopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取互联网流量TOP趋势图
       *
       * @param request DescribeInternetTrafficTopRequest
       * @return DescribeInternetTrafficTopResponse
       */
      Models::DescribeInternetTrafficTopResponse describeInternetTrafficTop(const Models::DescribeInternetTrafficTopRequest &request);

      /**
       * @summary Queries the trends of Internet traffic.
       *
       * @param request DescribeInternetTrafficTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetTrafficTrendResponse
       */
      Models::DescribeInternetTrafficTrendResponse describeInternetTrafficTrendWithOptions(const Models::DescribeInternetTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the trends of Internet traffic.
       *
       * @param request DescribeInternetTrafficTrendRequest
       * @return DescribeInternetTrafficTrendResponse
       */
      Models::DescribeInternetTrafficTrendResponse describeInternetTrafficTrend(const Models::DescribeInternetTrafficTrendRequest &request);

      /**
       * @summary 获取ECS漏洞趋势
       *
       * @param request DescribeInvadeEcsTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvadeEcsTrendResponse
       */
      Models::DescribeInvadeEcsTrendResponse describeInvadeEcsTrendWithOptions(const Models::DescribeInvadeEcsTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取ECS漏洞趋势
       *
       * @param request DescribeInvadeEcsTrendRequest
       * @return DescribeInvadeEcsTrendResponse
       */
      Models::DescribeInvadeEcsTrendResponse describeInvadeEcsTrend(const Models::DescribeInvadeEcsTrendRequest &request);

      /**
       * @summary 获取漏洞事件详情
       *
       * @param request DescribeInvadeEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvadeEventDetailResponse
       */
      Models::DescribeInvadeEventDetailResponse describeInvadeEventDetailWithOptions(const Models::DescribeInvadeEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取漏洞事件详情
       *
       * @param request DescribeInvadeEventDetailRequest
       * @return DescribeInvadeEventDetailResponse
       */
      Models::DescribeInvadeEventDetailResponse describeInvadeEventDetail(const Models::DescribeInvadeEventDetailRequest &request);

      /**
       * @summary Queries the information about the breach awareness events of a firewall.
       *
       * @param request DescribeInvadeEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvadeEventListResponse
       */
      Models::DescribeInvadeEventListResponse describeInvadeEventListWithOptions(const Models::DescribeInvadeEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the breach awareness events of a firewall.
       *
       * @param request DescribeInvadeEventListRequest
       * @return DescribeInvadeEventListResponse
       */
      Models::DescribeInvadeEventListResponse describeInvadeEventList(const Models::DescribeInvadeEventListRequest &request);

      /**
       * @summary 获取漏洞名称列表
       *
       * @param request DescribeInvadeEventNameListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvadeEventNameListResponse
       */
      Models::DescribeInvadeEventNameListResponse describeInvadeEventNameListWithOptions(const Models::DescribeInvadeEventNameListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取漏洞名称列表
       *
       * @param request DescribeInvadeEventNameListRequest
       * @return DescribeInvadeEventNameListResponse
       */
      Models::DescribeInvadeEventNameListResponse describeInvadeEventNameList(const Models::DescribeInvadeEventNameListRequest &request);

      /**
       * @summary 获取漏洞事件统计
       *
       * @param request DescribeInvadeEventStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInvadeEventStatisticResponse
       */
      Models::DescribeInvadeEventStatisticResponse describeInvadeEventStatisticWithOptions(const Models::DescribeInvadeEventStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取漏洞事件统计
       *
       * @param request DescribeInvadeEventStatisticRequest
       * @return DescribeInvadeEventStatisticResponse
       */
      Models::DescribeInvadeEventStatisticResponse describeInvadeEventStatistic(const Models::DescribeInvadeEventStatisticRequest &request);

      /**
       * @summary 查询IPS私网关联信息
       *
       * @param request DescribeIpsPrivateAssocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpsPrivateAssocResponse
       */
      Models::DescribeIpsPrivateAssocResponse describeIpsPrivateAssocWithOptions(const Models::DescribeIpsPrivateAssocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询IPS私网关联信息
       *
       * @param request DescribeIpsPrivateAssocRequest
       * @return DescribeIpsPrivateAssocResponse
       */
      Models::DescribeIpsPrivateAssocResponse describeIpsPrivateAssoc(const Models::DescribeIpsPrivateAssocRequest &request);

      /**
       * @summary 获取ISP信息
       *
       * @param request DescribeIspInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIspInfoResponse
       */
      Models::DescribeIspInfoResponse describeIspInfoWithOptions(const Models::DescribeIspInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取ISP信息
       *
       * @param request DescribeIspInfoRequest
       * @return DescribeIspInfoResponse
       */
      Models::DescribeIspInfoResponse describeIspInfo(const Models::DescribeIspInfoRequest &request);

      /**
       * @summary 获取位置信息
       *
       * @param request DescribeLocationInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLocationInfoResponse
       */
      Models::DescribeLocationInfoResponse describeLocationInfoWithOptions(const Models::DescribeLocationInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取位置信息
       *
       * @param request DescribeLocationInfoRequest
       * @return DescribeLocationInfoResponse
       */
      Models::DescribeLocationInfoResponse describeLocationInfo(const Models::DescribeLocationInfoRequest &request);

      /**
       * @summary Get Log Service Information
       *
       * @param request DescribeLogStoreInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogStoreInfoResponse
       */
      Models::DescribeLogStoreInfoResponse describeLogStoreInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Log Service Information
       *
       * @return DescribeLogStoreInfoResponse
       */
      Models::DescribeLogStoreInfoResponse describeLogStoreInfo();

      /**
       * @summary 免费版获取成员信息
       *
       * @param request DescribeMemberInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMemberInfoResponse
       */
      Models::DescribeMemberInfoResponse describeMemberInfoWithOptions(const Models::DescribeMemberInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 免费版获取成员信息
       *
       * @param request DescribeMemberInfoRequest
       * @return DescribeMemberInfoResponse
       */
      Models::DescribeMemberInfoResponse describeMemberInfo(const Models::DescribeMemberInfoRequest &request);

      /**
       * @summary Queries the pagination status of NAT firewalls.
       *
       * @param request DescribeNatAclPageStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatAclPageStatusResponse
       */
      Models::DescribeNatAclPageStatusResponse describeNatAclPageStatusWithOptions(const Models::DescribeNatAclPageStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pagination status of NAT firewalls.
       *
       * @param request DescribeNatAclPageStatusRequest
       * @return DescribeNatAclPageStatusResponse
       */
      Models::DescribeNatAclPageStatusResponse describeNatAclPageStatus(const Models::DescribeNatAclPageStatusRequest &request);

      /**
       * @summary 查询Nat防火墙分组列表
       *
       * @param request DescribeNatFirewallAclGroupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallAclGroupListResponse
       */
      Models::DescribeNatFirewallAclGroupListResponse describeNatFirewallAclGroupListWithOptions(const Models::DescribeNatFirewallAclGroupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Nat防火墙分组列表
       *
       * @param request DescribeNatFirewallAclGroupListRequest
       * @return DescribeNatFirewallAclGroupListResponse
       */
      Models::DescribeNatFirewallAclGroupListResponse describeNatFirewallAclGroupList(const Models::DescribeNatFirewallAclGroupListRequest &request);

      /**
       * @summary Queries the information about all access control policies that are created for NAT firewalls.
       *
       * @description You can use this operation to query the information about all access control policies that are created for NAT firewalls by page.
       *
       * @param request DescribeNatFirewallControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallControlPolicyResponse
       */
      Models::DescribeNatFirewallControlPolicyResponse describeNatFirewallControlPolicyWithOptions(const Models::DescribeNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all access control policies that are created for NAT firewalls.
       *
       * @description You can use this operation to query the information about all access control policies that are created for NAT firewalls by page.
       *
       * @param request DescribeNatFirewallControlPolicyRequest
       * @return DescribeNatFirewallControlPolicyResponse
       */
      Models::DescribeNatFirewallControlPolicyResponse describeNatFirewallControlPolicy(const Models::DescribeNatFirewallControlPolicyRequest &request);

      /**
       * @summary 概览页-nat防火墙拦截趋势
       *
       * @param request DescribeNatFirewallDropTrafficTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallDropTrafficTrendResponse
       */
      Models::DescribeNatFirewallDropTrafficTrendResponse describeNatFirewallDropTrafficTrendWithOptions(const Models::DescribeNatFirewallDropTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 概览页-nat防火墙拦截趋势
       *
       * @param request DescribeNatFirewallDropTrafficTrendRequest
       * @return DescribeNatFirewallDropTrafficTrendResponse
       */
      Models::DescribeNatFirewallDropTrafficTrendResponse describeNatFirewallDropTrafficTrend(const Models::DescribeNatFirewallDropTrafficTrendRequest &request);

      /**
       * @summary Queries details of NAT firewalls.
       *
       * @param request DescribeNatFirewallListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallListResponse
       */
      Models::DescribeNatFirewallListResponse describeNatFirewallListWithOptions(const Models::DescribeNatFirewallListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details of NAT firewalls.
       *
       * @param request DescribeNatFirewallListRequest
       * @return DescribeNatFirewallListResponse
       */
      Models::DescribeNatFirewallListResponse describeNatFirewallList(const Models::DescribeNatFirewallListRequest &request);

      /**
       * @summary Queries the priority range of access control policies that are created for a NAT firewall.
       *
       * @description You can use this operation to query the priority range of access control policies that are created for a NAT firewall.
       *
       * @param request DescribeNatFirewallPolicyPriorUsedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallPolicyPriorUsedResponse
       */
      Models::DescribeNatFirewallPolicyPriorUsedResponse describeNatFirewallPolicyPriorUsedWithOptions(const Models::DescribeNatFirewallPolicyPriorUsedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the priority range of access control policies that are created for a NAT firewall.
       *
       * @description You can use this operation to query the priority range of access control policies that are created for a NAT firewall.
       *
       * @param request DescribeNatFirewallPolicyPriorUsedRequest
       * @return DescribeNatFirewallPolicyPriorUsedResponse
       */
      Models::DescribeNatFirewallPolicyPriorUsedResponse describeNatFirewallPolicyPriorUsed(const Models::DescribeNatFirewallPolicyPriorUsedRequest &request);

      /**
       * @summary 查询NAT防火墙预检查结果
       *
       * @param request DescribeNatFirewallPrecheckDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallPrecheckDetailResponse
       */
      Models::DescribeNatFirewallPrecheckDetailResponse describeNatFirewallPrecheckDetailWithOptions(const Models::DescribeNatFirewallPrecheckDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询NAT防火墙预检查结果
       *
       * @param request DescribeNatFirewallPrecheckDetailRequest
       * @return DescribeNatFirewallPrecheckDetailResponse
       */
      Models::DescribeNatFirewallPrecheckDetailResponse describeNatFirewallPrecheckDetail(const Models::DescribeNatFirewallPrecheckDetailRequest &request);

      /**
       * @summary 获取NAT防火墙配额
       *
       * @param request DescribeNatFirewallQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallQuotaResponse
       */
      Models::DescribeNatFirewallQuotaResponse describeNatFirewallQuotaWithOptions(const Models::DescribeNatFirewallQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取NAT防火墙配额
       *
       * @param request DescribeNatFirewallQuotaRequest
       * @return DescribeNatFirewallQuotaResponse
       */
      Models::DescribeNatFirewallQuotaResponse describeNatFirewallQuota(const Models::DescribeNatFirewallQuotaRequest &request);

      /**
       * @summary 查询NAT防火墙时间点流量详情列表
       *
       * @param request DescribeNatFirewallTimeTopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallTimeTopResponse
       */
      Models::DescribeNatFirewallTimeTopResponse describeNatFirewallTimeTopWithOptions(const Models::DescribeNatFirewallTimeTopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询NAT防火墙时间点流量详情列表
       *
       * @param request DescribeNatFirewallTimeTopRequest
       * @return DescribeNatFirewallTimeTopResponse
       */
      Models::DescribeNatFirewallTimeTopResponse describeNatFirewallTimeTop(const Models::DescribeNatFirewallTimeTopRequest &request);

      /**
       * @summary 概览页-NAT流量趋势
       *
       * @param request DescribeNatFirewallTrafficTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatFirewallTrafficTrendResponse
       */
      Models::DescribeNatFirewallTrafficTrendResponse describeNatFirewallTrafficTrendWithOptions(const Models::DescribeNatFirewallTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 概览页-NAT流量趋势
       *
       * @param request DescribeNatFirewallTrafficTrendRequest
       * @return DescribeNatFirewallTrafficTrendResponse
       */
      Models::DescribeNatFirewallTrafficTrendResponse describeNatFirewallTrafficTrend(const Models::DescribeNatFirewallTrafficTrendRequest &request);

      /**
       * @summary 获取网络实例列表
       *
       * @param request DescribeNetworkInstanceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkInstanceListResponse
       */
      Models::DescribeNetworkInstanceListResponse describeNetworkInstanceListWithOptions(const Models::DescribeNetworkInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取网络实例列表
       *
       * @param request DescribeNetworkInstanceListRequest
       * @return DescribeNetworkInstanceListResponse
       */
      Models::DescribeNetworkInstanceListResponse describeNetworkInstanceList(const Models::DescribeNetworkInstanceListRequest &request);

      /**
       * @summary 获取网络实例关系列表
       *
       * @param request DescribeNetworkInstanceRelationListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkInstanceRelationListResponse
       */
      Models::DescribeNetworkInstanceRelationListResponse describeNetworkInstanceRelationListWithOptions(const Models::DescribeNetworkInstanceRelationListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取网络实例关系列表
       *
       * @param request DescribeNetworkInstanceRelationListRequest
       * @return DescribeNetworkInstanceRelationListResponse
       */
      Models::DescribeNetworkInstanceRelationListResponse describeNetworkInstanceRelationList(const Models::DescribeNetworkInstanceRelationListRequest &request);

      /**
       * @summary 获取网络流量TOP环比
       *
       * @param request DescribeNetworkTrafficTopRatioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkTrafficTopRatioResponse
       */
      Models::DescribeNetworkTrafficTopRatioResponse describeNetworkTrafficTopRatioWithOptions(const Models::DescribeNetworkTrafficTopRatioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取网络流量TOP环比
       *
       * @param request DescribeNetworkTrafficTopRatioRequest
       * @return DescribeNetworkTrafficTopRatioResponse
       */
      Models::DescribeNetworkTrafficTopRatioResponse describeNetworkTrafficTopRatio(const Models::DescribeNetworkTrafficTopRatioRequest &request);

      /**
       * @summary 获取公网IP通过的源状态
       *
       * @param request DescribeOpenIpAccessSrcStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOpenIpAccessSrcStatResponse
       */
      Models::DescribeOpenIpAccessSrcStatResponse describeOpenIpAccessSrcStatWithOptions(const Models::DescribeOpenIpAccessSrcStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取公网IP通过的源状态
       *
       * @param request DescribeOpenIpAccessSrcStatRequest
       * @return DescribeOpenIpAccessSrcStatResponse
       */
      Models::DescribeOpenIpAccessSrcStatResponse describeOpenIpAccessSrcStat(const Models::DescribeOpenIpAccessSrcStatRequest &request);

      /**
       * @summary 获取外联资产列表
       *
       * @param request DescribeOutgoingAssetListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingAssetListResponse
       */
      Models::DescribeOutgoingAssetListResponse describeOutgoingAssetListWithOptions(const Models::DescribeOutgoingAssetListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取外联资产列表
       *
       * @param request DescribeOutgoingAssetListRequest
       * @return DescribeOutgoingAssetListResponse
       */
      Models::DescribeOutgoingAssetListResponse describeOutgoingAssetList(const Models::DescribeOutgoingAssetListRequest &request);

      /**
       * @summary 获取外联目的
       *
       * @param request DescribeOutgoingDestinationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingDestinationResponse
       */
      Models::DescribeOutgoingDestinationResponse describeOutgoingDestinationWithOptions(const Models::DescribeOutgoingDestinationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取外联目的
       *
       * @param request DescribeOutgoingDestinationRequest
       * @return DescribeOutgoingDestinationResponse
       */
      Models::DescribeOutgoingDestinationResponse describeOutgoingDestination(const Models::DescribeOutgoingDestinationRequest &request);

      /**
       * @summary 获取外联目的分类
       *
       * @param request DescribeOutgoingDestinationCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingDestinationCategoryResponse
       */
      Models::DescribeOutgoingDestinationCategoryResponse describeOutgoingDestinationCategoryWithOptions(const Models::DescribeOutgoingDestinationCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取外联目的分类
       *
       * @param request DescribeOutgoingDestinationCategoryRequest
       * @return DescribeOutgoingDestinationCategoryResponse
       */
      Models::DescribeOutgoingDestinationCategoryResponse describeOutgoingDestinationCategory(const Models::DescribeOutgoingDestinationCategoryRequest &request);

      /**
       * @summary Get details of outgoing destination IPs
       *
       * @param request DescribeOutgoingDestinationIPRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingDestinationIPResponse
       */
      Models::DescribeOutgoingDestinationIPResponse describeOutgoingDestinationIPWithOptions(const Models::DescribeOutgoingDestinationIPRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get details of outgoing destination IPs
       *
       * @param request DescribeOutgoingDestinationIPRequest
       * @return DescribeOutgoingDestinationIPResponse
       */
      Models::DescribeOutgoingDestinationIPResponse describeOutgoingDestinationIP(const Models::DescribeOutgoingDestinationIPRequest &request);

      /**
       * @summary 获取外联目的IP详情
       *
       * @param request DescribeOutgoingDestinationIPDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingDestinationIPDetailResponse
       */
      Models::DescribeOutgoingDestinationIPDetailResponse describeOutgoingDestinationIPDetailWithOptions(const Models::DescribeOutgoingDestinationIPDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取外联目的IP详情
       *
       * @param request DescribeOutgoingDestinationIPDetailRequest
       * @return DescribeOutgoingDestinationIPDetailResponse
       */
      Models::DescribeOutgoingDestinationIPDetailResponse describeOutgoingDestinationIPDetail(const Models::DescribeOutgoingDestinationIPDetailRequest &request);

      /**
       * @summary Queries the information about the domain names in outbound connections.
       *
       * @param request DescribeOutgoingDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingDomainResponse
       */
      Models::DescribeOutgoingDomainResponse describeOutgoingDomainWithOptions(const Models::DescribeOutgoingDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the domain names in outbound connections.
       *
       * @param request DescribeOutgoingDomainRequest
       * @return DescribeOutgoingDomainResponse
       */
      Models::DescribeOutgoingDomainResponse describeOutgoingDomain(const Models::DescribeOutgoingDomainRequest &request);

      /**
       * @summary 获取外联域名详情
       *
       * @param request DescribeOutgoingDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingDomainDetailResponse
       */
      Models::DescribeOutgoingDomainDetailResponse describeOutgoingDomainDetailWithOptions(const Models::DescribeOutgoingDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取外联域名详情
       *
       * @param request DescribeOutgoingDomainDetailRequest
       * @return DescribeOutgoingDomainDetailResponse
       */
      Models::DescribeOutgoingDomainDetailResponse describeOutgoingDomainDetail(const Models::DescribeOutgoingDomainDetailRequest &request);

      /**
       * @summary 获取外联风险域名与IP数
       *
       * @param request DescribeOutgoingRiskDomainAndIpCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingRiskDomainAndIpCountResponse
       */
      Models::DescribeOutgoingRiskDomainAndIpCountResponse describeOutgoingRiskDomainAndIpCountWithOptions(const Models::DescribeOutgoingRiskDomainAndIpCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取外联风险域名与IP数
       *
       * @param request DescribeOutgoingRiskDomainAndIpCountRequest
       * @return DescribeOutgoingRiskDomainAndIpCountResponse
       */
      Models::DescribeOutgoingRiskDomainAndIpCountResponse describeOutgoingRiskDomainAndIpCount(const Models::DescribeOutgoingRiskDomainAndIpCountRequest &request);

      /**
       * @summary 获取外联风险趋势图
       *
       * @param request DescribeOutgoingRiskTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingRiskTrendResponse
       */
      Models::DescribeOutgoingRiskTrendResponse describeOutgoingRiskTrendWithOptions(const Models::DescribeOutgoingRiskTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取外联风险趋势图
       *
       * @param request DescribeOutgoingRiskTrendRequest
       * @return DescribeOutgoingRiskTrendResponse
       */
      Models::DescribeOutgoingRiskTrendResponse describeOutgoingRiskTrend(const Models::DescribeOutgoingRiskTrendRequest &request);

      /**
       * @summary 获取外联统计
       *
       * @param request DescribeOutgoingStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingStatisticResponse
       */
      Models::DescribeOutgoingStatisticResponse describeOutgoingStatisticWithOptions(const Models::DescribeOutgoingStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取外联统计
       *
       * @param request DescribeOutgoingStatisticRequest
       * @return DescribeOutgoingStatisticResponse
       */
      Models::DescribeOutgoingStatisticResponse describeOutgoingStatistic(const Models::DescribeOutgoingStatisticRequest &request);

      /**
       * @summary 获取外联标签
       *
       * @param request DescribeOutgoingTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOutgoingTagResponse
       */
      Models::DescribeOutgoingTagResponse describeOutgoingTagWithOptions(const Models::DescribeOutgoingTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取外联标签
       *
       * @param request DescribeOutgoingTagRequest
       * @return DescribeOutgoingTagResponse
       */
      Models::DescribeOutgoingTagResponse describeOutgoingTag(const Models::DescribeOutgoingTagRequest &request);

      /**
       * @deprecated OpenAPI DescribePageDocuments is deprecated
       *
       * @summary 获取文档
       *
       * @param request DescribePageDocumentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePageDocumentsResponse
       */
      Models::DescribePageDocumentsResponse describePageDocumentsWithOptions(const Models::DescribePageDocumentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribePageDocuments is deprecated
       *
       * @summary 获取文档
       *
       * @param request DescribePageDocumentsRequest
       * @return DescribePageDocumentsResponse
       */
      Models::DescribePageDocumentsResponse describePageDocuments(const Models::DescribePageDocumentsRequest &request);

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
      Models::DescribePolicyAdvancedConfigResponse describePolicyAdvancedConfigWithOptions(const Models::DescribePolicyAdvancedConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribePolicyAdvancedConfigResponse describePolicyAdvancedConfig(const Models::DescribePolicyAdvancedConfigRequest &request);

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
      Models::DescribePolicyPriorUsedResponse describePolicyPriorUsedWithOptions(const Models::DescribePolicyPriorUsedRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribePolicyPriorUsedResponse describePolicyPriorUsed(const Models::DescribePolicyPriorUsedRequest &request);

      /**
       * @summary 按量付费是否开启过防护
       *
       * @param request DescribePostpayEnabledProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostpayEnabledProtectionResponse
       */
      Models::DescribePostpayEnabledProtectionResponse describePostpayEnabledProtectionWithOptions(const Models::DescribePostpayEnabledProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 按量付费是否开启过防护
       *
       * @param request DescribePostpayEnabledProtectionRequest
       * @return DescribePostpayEnabledProtectionResponse
       */
      Models::DescribePostpayEnabledProtectionResponse describePostpayEnabledProtection(const Models::DescribePostpayEnabledProtectionRequest &request);

      /**
       * @summary Queries the details of traffic billed based on the pay-as-you-go billing method.
       *
       * @description If you use Cloud Firewall that uses the pay-as-you-go billing method, you can call this operation to query traffic details accurate to the granularity of specific resource instances. If you use Cloud Firewall that uses the subscription billing method, you can call this operation to query the overall traffic details.
       *
       * @param request DescribePostpayTrafficDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostpayTrafficDetailResponse
       */
      Models::DescribePostpayTrafficDetailResponse describePostpayTrafficDetailWithOptions(const Models::DescribePostpayTrafficDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of traffic billed based on the pay-as-you-go billing method.
       *
       * @description If you use Cloud Firewall that uses the pay-as-you-go billing method, you can call this operation to query traffic details accurate to the granularity of specific resource instances. If you use Cloud Firewall that uses the subscription billing method, you can call this operation to query the overall traffic details.
       *
       * @param request DescribePostpayTrafficDetailRequest
       * @return DescribePostpayTrafficDetailResponse
       */
      Models::DescribePostpayTrafficDetailResponse describePostpayTrafficDetail(const Models::DescribePostpayTrafficDetailRequest &request);

      /**
       * @summary Queries the total volume of traffic that is billed based on the pay-as-you-go billing method, including all firewalls within the current account.
       *
       * @description You can call this operation to query statistics of the current Cloud Firewall from the date of purchase.
       *
       * @param request DescribePostpayTrafficTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostpayTrafficTotalResponse
       */
      Models::DescribePostpayTrafficTotalResponse describePostpayTrafficTotalWithOptions(const Models::DescribePostpayTrafficTotalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total volume of traffic that is billed based on the pay-as-you-go billing method, including all firewalls within the current account.
       *
       * @description You can call this operation to query statistics of the current Cloud Firewall from the date of purchase.
       *
       * @param request DescribePostpayTrafficTotalRequest
       * @return DescribePostpayTrafficTotalResponse
       */
      Models::DescribePostpayTrafficTotalResponse describePostpayTrafficTotal(const Models::DescribePostpayTrafficTotalRequest &request);

      /**
       * @summary Queries the status of the Internet Firewall feature in Cloud Firewall that uses the pay-as-you-go billing method.
       *
       * @param request DescribePostpayUserInternetStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostpayUserInternetStatusResponse
       */
      Models::DescribePostpayUserInternetStatusResponse describePostpayUserInternetStatusWithOptions(const Models::DescribePostpayUserInternetStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the Internet Firewall feature in Cloud Firewall that uses the pay-as-you-go billing method.
       *
       * @param request DescribePostpayUserInternetStatusRequest
       * @return DescribePostpayUserInternetStatusResponse
       */
      Models::DescribePostpayUserInternetStatusResponse describePostpayUserInternetStatus(const Models::DescribePostpayUserInternetStatusRequest &request);

      /**
       * @summary Queries the status of the NAT Firewall feature in Cloud Firewall that use the pay-as-you-go billing method.
       *
       * @param request DescribePostpayUserNatStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostpayUserNatStatusResponse
       */
      Models::DescribePostpayUserNatStatusResponse describePostpayUserNatStatusWithOptions(const Models::DescribePostpayUserNatStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the NAT Firewall feature in Cloud Firewall that use the pay-as-you-go billing method.
       *
       * @param request DescribePostpayUserNatStatusRequest
       * @return DescribePostpayUserNatStatusResponse
       */
      Models::DescribePostpayUserNatStatusResponse describePostpayUserNatStatus(const Models::DescribePostpayUserNatStatusRequest &request);

      /**
       * @summary Queries the status of the virtual private cloud (VPC) Firewall feature in Cloud Firewall that uses the pay-as-you-go billing method.
       *
       * @param request DescribePostpayUserVpcStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePostpayUserVpcStatusResponse
       */
      Models::DescribePostpayUserVpcStatusResponse describePostpayUserVpcStatusWithOptions(const Models::DescribePostpayUserVpcStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the virtual private cloud (VPC) Firewall feature in Cloud Firewall that uses the pay-as-you-go billing method.
       *
       * @param request DescribePostpayUserVpcStatusRequest
       * @return DescribePostpayUserVpcStatusResponse
       */
      Models::DescribePostpayUserVpcStatusResponse describePostpayUserVpcStatus(const Models::DescribePostpayUserVpcStatusRequest &request);

      /**
       * @summary Queries prefix lists.
       *
       * @param request DescribePrefixListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrefixListsResponse
       */
      Models::DescribePrefixListsResponse describePrefixListsWithOptions(const Models::DescribePrefixListsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries prefix lists.
       *
       * @param request DescribePrefixListsRequest
       * @return DescribePrefixListsResponse
       */
      Models::DescribePrefixListsResponse describePrefixLists(const Models::DescribePrefixListsRequest &request);

      /**
       * @summary 查询私网DNS域名列表
       *
       * @param request DescribePrivateDnsDomainNameListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrivateDnsDomainNameListResponse
       */
      Models::DescribePrivateDnsDomainNameListResponse describePrivateDnsDomainNameListWithOptions(const Models::DescribePrivateDnsDomainNameListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询私网DNS域名列表
       *
       * @param request DescribePrivateDnsDomainNameListRequest
       * @return DescribePrivateDnsDomainNameListResponse
       */
      Models::DescribePrivateDnsDomainNameListResponse describePrivateDnsDomainNameList(const Models::DescribePrivateDnsDomainNameListRequest &request);

      /**
       * @summary 查询私网DNS终端节点详情
       *
       * @param request DescribePrivateDnsEndpointDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrivateDnsEndpointDetailResponse
       */
      Models::DescribePrivateDnsEndpointDetailResponse describePrivateDnsEndpointDetailWithOptions(const Models::DescribePrivateDnsEndpointDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询私网DNS终端节点详情
       *
       * @param request DescribePrivateDnsEndpointDetailRequest
       * @return DescribePrivateDnsEndpointDetailResponse
       */
      Models::DescribePrivateDnsEndpointDetailResponse describePrivateDnsEndpointDetail(const Models::DescribePrivateDnsEndpointDetailRequest &request);

      /**
       * @summary 查询私网DNS终端节点列表
       *
       * @param request DescribePrivateDnsEndpointListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrivateDnsEndpointListResponse
       */
      Models::DescribePrivateDnsEndpointListResponse describePrivateDnsEndpointListWithOptions(const Models::DescribePrivateDnsEndpointListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询私网DNS终端节点列表
       *
       * @param request DescribePrivateDnsEndpointListRequest
       * @return DescribePrivateDnsEndpointListResponse
       */
      Models::DescribePrivateDnsEndpointListResponse describePrivateDnsEndpointList(const Models::DescribePrivateDnsEndpointListRequest &request);

      /**
       * @summary 查询私有DNS的统计信息
       *
       * @param request DescribePrivateDnsStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrivateDnsStatisticsResponse
       */
      Models::DescribePrivateDnsStatisticsResponse describePrivateDnsStatisticsWithOptions(const Models::DescribePrivateDnsStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询私有DNS的统计信息
       *
       * @param request DescribePrivateDnsStatisticsRequest
       * @return DescribePrivateDnsStatisticsResponse
       */
      Models::DescribePrivateDnsStatisticsResponse describePrivateDnsStatistics(const Models::DescribePrivateDnsStatisticsRequest &request);

      /**
       * @summary 获取地域信息
       *
       * @param request DescribeRegionInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionInfoResponse
       */
      Models::DescribeRegionInfoResponse describeRegionInfoWithOptions(const Models::DescribeRegionInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取地域信息
       *
       * @param request DescribeRegionInfoRequest
       * @return DescribeRegionInfoResponse
       */
      Models::DescribeRegionInfoResponse describeRegionInfo(const Models::DescribeRegionInfoRequest &request);

      /**
       * @summary 查询资产类型默认引流
       *
       * @param request DescribeResourceTypeAutoEnableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceTypeAutoEnableResponse
       */
      Models::DescribeResourceTypeAutoEnableResponse describeResourceTypeAutoEnableWithOptions(const Models::DescribeResourceTypeAutoEnableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资产类型默认引流
       *
       * @param request DescribeResourceTypeAutoEnableRequest
       * @return DescribeResourceTypeAutoEnableResponse
       */
      Models::DescribeResourceTypeAutoEnableResponse describeResourceTypeAutoEnable(const Models::DescribeResourceTypeAutoEnableRequest &request);

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
      Models::DescribeRiskEventGroupResponse describeRiskEventGroupWithOptions(const Models::DescribeRiskEventGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

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
       * @summary 获取风险事件统计
       *
       * @param request DescribeRiskEventStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskEventStatisticResponse
       */
      Models::DescribeRiskEventStatisticResponse describeRiskEventStatisticWithOptions(const Models::DescribeRiskEventStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取风险事件统计
       *
       * @param request DescribeRiskEventStatisticRequest
       * @return DescribeRiskEventStatisticResponse
       */
      Models::DescribeRiskEventStatisticResponse describeRiskEventStatistic(const Models::DescribeRiskEventStatisticRequest &request);

      /**
       * @summary 获取Top风险事件攻击APP
       *
       * @param request DescribeRiskEventTopAttackAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskEventTopAttackAppResponse
       */
      Models::DescribeRiskEventTopAttackAppResponse describeRiskEventTopAttackAppWithOptions(const Models::DescribeRiskEventTopAttackAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Top风险事件攻击APP
       *
       * @param request DescribeRiskEventTopAttackAppRequest
       * @return DescribeRiskEventTopAttackAppResponse
       */
      Models::DescribeRiskEventTopAttackAppResponse describeRiskEventTopAttackApp(const Models::DescribeRiskEventTopAttackAppRequest &request);

      /**
       * @summary 获取Top风险事件资产
       *
       * @param request DescribeRiskEventTopAttackAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskEventTopAttackAssetResponse
       */
      Models::DescribeRiskEventTopAttackAssetResponse describeRiskEventTopAttackAssetWithOptions(const Models::DescribeRiskEventTopAttackAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Top风险事件资产
       *
       * @param request DescribeRiskEventTopAttackAssetRequest
       * @return DescribeRiskEventTopAttackAssetResponse
       */
      Models::DescribeRiskEventTopAttackAssetResponse describeRiskEventTopAttackAsset(const Models::DescribeRiskEventTopAttackAssetRequest &request);

      /**
       * @summary 获取Top风险事件类型
       *
       * @param request DescribeRiskEventTopAttackTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskEventTopAttackTypeResponse
       */
      Models::DescribeRiskEventTopAttackTypeResponse describeRiskEventTopAttackTypeWithOptions(const Models::DescribeRiskEventTopAttackTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Top风险事件类型
       *
       * @param request DescribeRiskEventTopAttackTypeRequest
       * @return DescribeRiskEventTopAttackTypeResponse
       */
      Models::DescribeRiskEventTopAttackTypeResponse describeRiskEventTopAttackType(const Models::DescribeRiskEventTopAttackTypeRequest &request);

      /**
       * @deprecated OpenAPI DescribeRiskSecurityGroupDetail is deprecated
       *
       * @summary 获取风险安全组详情
       *
       * @param request DescribeRiskSecurityGroupDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRiskSecurityGroupDetailResponse
       */
      Models::DescribeRiskSecurityGroupDetailResponse describeRiskSecurityGroupDetailWithOptions(const Models::DescribeRiskSecurityGroupDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeRiskSecurityGroupDetail is deprecated
       *
       * @summary 获取风险安全组详情
       *
       * @param request DescribeRiskSecurityGroupDetailRequest
       * @return DescribeRiskSecurityGroupDetailResponse
       */
      Models::DescribeRiskSecurityGroupDetailResponse describeRiskSecurityGroupDetail(const Models::DescribeRiskSecurityGroupDetailRequest &request);

      /**
       * @summary 获取数据泄露的敏感数据事件列表
       *
       * @param request DescribeSdlEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSdlEventDetailResponse
       */
      Models::DescribeSdlEventDetailResponse describeSdlEventDetailWithOptions(const Models::DescribeSdlEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据泄露的敏感数据事件列表
       *
       * @param request DescribeSdlEventDetailRequest
       * @return DescribeSdlEventDetailResponse
       */
      Models::DescribeSdlEventDetailResponse describeSdlEventDetail(const Models::DescribeSdlEventDetailRequest &request);

      /**
       * @summary 获取数据泄露事件列表
       *
       * @param request DescribeSdlEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSdlEventListResponse
       */
      Models::DescribeSdlEventListResponse describeSdlEventListWithOptions(const Models::DescribeSdlEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据泄露事件列表
       *
       * @param request DescribeSdlEventListRequest
       * @return DescribeSdlEventListResponse
       */
      Models::DescribeSdlEventListResponse describeSdlEventList(const Models::DescribeSdlEventListRequest &request);

      /**
       * @summary 获取数据泄露的敏感数据列表
       *
       * @param request DescribeSdlEventSdListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSdlEventSdListResponse
       */
      Models::DescribeSdlEventSdListResponse describeSdlEventSdListWithOptions(const Models::DescribeSdlEventSdListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据泄露的敏感数据列表
       *
       * @param request DescribeSdlEventSdListRequest
       * @return DescribeSdlEventSdListResponse
       */
      Models::DescribeSdlEventSdListResponse describeSdlEventSdList(const Models::DescribeSdlEventSdListRequest &request);

      /**
       * @summary 获取数据泄露事件统计数据
       *
       * @param request DescribeSdlEventStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSdlEventStatisticResponse
       */
      Models::DescribeSdlEventStatisticResponse describeSdlEventStatisticWithOptions(const Models::DescribeSdlEventStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据泄露事件统计数据
       *
       * @param request DescribeSdlEventStatisticRequest
       * @return DescribeSdlEventStatisticResponse
       */
      Models::DescribeSdlEventStatisticResponse describeSdlEventStatistic(const Models::DescribeSdlEventStatisticRequest &request);

      /**
       * @summary 获取数据泄露事件类型分布/资产TOP/目的TOP
       *
       * @param request DescribeSdlStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSdlStatisticResponse
       */
      Models::DescribeSdlStatisticResponse describeSdlStatisticWithOptions(const Models::DescribeSdlStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取数据泄露事件类型分布/资产TOP/目的TOP
       *
       * @param request DescribeSdlStatisticRequest
       * @return DescribeSdlStatisticResponse
       */
      Models::DescribeSdlStatisticResponse describeSdlStatistic(const Models::DescribeSdlStatisticRequest &request);

      /**
       * @summary 获取安全模式
       *
       * @param request DescribeSecurityModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityModeResponse
       */
      Models::DescribeSecurityModeResponse describeSecurityModeWithOptions(const Models::DescribeSecurityModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取安全模式
       *
       * @param request DescribeSecurityModeRequest
       * @return DescribeSecurityModeResponse
       */
      Models::DescribeSecurityModeResponse describeSecurityMode(const Models::DescribeSecurityModeRequest &request);

      /**
       * @deprecated OpenAPI DescribeSecurityProxy is deprecated, please use Cloudfw::2017-12-07::DescribeNatFirewallList instead.
       *
       * @summary 获取正向代理
       *
       * @param request DescribeSecurityProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityProxyResponse
       */
      Models::DescribeSecurityProxyResponse describeSecurityProxyWithOptions(const Models::DescribeSecurityProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeSecurityProxy is deprecated, please use Cloudfw::2017-12-07::DescribeNatFirewallList instead.
       *
       * @summary 获取正向代理
       *
       * @param request DescribeSecurityProxyRequest
       * @return DescribeSecurityProxyResponse
       */
      Models::DescribeSecurityProxyResponse describeSecurityProxy(const Models::DescribeSecurityProxyRequest &request);

      /**
       * @summary 获取正向代理资源
       *
       * @param request DescribeSecurityProxyResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityProxyResourcesResponse
       */
      Models::DescribeSecurityProxyResourcesResponse describeSecurityProxyResourcesWithOptions(const Models::DescribeSecurityProxyResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取正向代理资源
       *
       * @param request DescribeSecurityProxyResourcesRequest
       * @return DescribeSecurityProxyResourcesResponse
       */
      Models::DescribeSecurityProxyResourcesResponse describeSecurityProxyResources(const Models::DescribeSecurityProxyResourcesRequest &request);

      /**
       * @summary 获取敏感数据类别开关
       *
       * @param request DescribeSensitiveSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSensitiveSwitchResponse
       */
      Models::DescribeSensitiveSwitchResponse describeSensitiveSwitchWithOptions(const Models::DescribeSensitiveSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取敏感数据类别开关
       *
       * @param request DescribeSensitiveSwitchRequest
       * @return DescribeSensitiveSwitchResponse
       */
      Models::DescribeSensitiveSwitchResponse describeSensitiveSwitch(const Models::DescribeSensitiveSwitchRequest &request);

      /**
       * @summary Queries the information about signature library versions.
       *
       * @param request DescribeSignatureLibVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSignatureLibVersionResponse
       */
      Models::DescribeSignatureLibVersionResponse describeSignatureLibVersionWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about signature library versions.
       *
       * @return DescribeSignatureLibVersionResponse
       */
      Models::DescribeSignatureLibVersionResponse describeSignatureLibVersion();

      /**
       * @summary 获取用户SLR授权信息
       *
       * @param request DescribeSlrGrantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlrGrantResponse
       */
      Models::DescribeSlrGrantResponse describeSlrGrantWithOptions(const Models::DescribeSlrGrantRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户SLR授权信息
       *
       * @param request DescribeSlrGrantRequest
       * @return DescribeSlrGrantResponse
       */
      Models::DescribeSlrGrantResponse describeSlrGrant(const Models::DescribeSlrGrantRequest &request);

      /**
       * @summary 获取SLS开启状态
       *
       * @param request DescribeSlsAnalyzeOpenStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlsAnalyzeOpenStatusResponse
       */
      Models::DescribeSlsAnalyzeOpenStatusResponse describeSlsAnalyzeOpenStatusWithOptions(const Models::DescribeSlsAnalyzeOpenStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取SLS开启状态
       *
       * @param request DescribeSlsAnalyzeOpenStatusRequest
       * @return DescribeSlsAnalyzeOpenStatusResponse
       */
      Models::DescribeSlsAnalyzeOpenStatusResponse describeSlsAnalyzeOpenStatus(const Models::DescribeSlsAnalyzeOpenStatusRequest &request);

      /**
       * @summary 查询威胁情报配置的信息
       *
       * @param request DescribeThreatIntelligenceSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeThreatIntelligenceSwitchResponse
       */
      Models::DescribeThreatIntelligenceSwitchResponse describeThreatIntelligenceSwitchWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询威胁情报配置的信息
       *
       * @return DescribeThreatIntelligenceSwitchResponse
       */
      Models::DescribeThreatIntelligenceSwitchResponse describeThreatIntelligenceSwitch();

      /**
       * @summary Queries information about the transit routers that are associated with a virtual private cloud (VPC) firewall created for a transit router.
       *
       * @param tmpReq DescribeTrFirewallPolicyBackUpAssociationListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrFirewallPolicyBackUpAssociationListResponse
       */
      Models::DescribeTrFirewallPolicyBackUpAssociationListResponse describeTrFirewallPolicyBackUpAssociationListWithOptions(const Models::DescribeTrFirewallPolicyBackUpAssociationListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the transit routers that are associated with a virtual private cloud (VPC) firewall created for a transit router.
       *
       * @param request DescribeTrFirewallPolicyBackUpAssociationListRequest
       * @return DescribeTrFirewallPolicyBackUpAssociationListResponse
       */
      Models::DescribeTrFirewallPolicyBackUpAssociationListResponse describeTrFirewallPolicyBackUpAssociationList(const Models::DescribeTrFirewallPolicyBackUpAssociationListRequest &request);

      /**
       * @summary Queries the routing policies of a virtual private cloud (VPC) firewall that is created for a transit router.
       *
       * @param request DescribeTrFirewallV2RoutePolicyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrFirewallV2RoutePolicyListResponse
       */
      Models::DescribeTrFirewallV2RoutePolicyListResponse describeTrFirewallV2RoutePolicyListWithOptions(const Models::DescribeTrFirewallV2RoutePolicyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the routing policies of a virtual private cloud (VPC) firewall that is created for a transit router.
       *
       * @param request DescribeTrFirewallV2RoutePolicyListRequest
       * @return DescribeTrFirewallV2RoutePolicyListResponse
       */
      Models::DescribeTrFirewallV2RoutePolicyListResponse describeTrFirewallV2RoutePolicyList(const Models::DescribeTrFirewallV2RoutePolicyListRequest &request);

      /**
       * @summary Queries the details of the virtual private cloud (VPC) firewalls that are created for transit routers.
       *
       * @param request DescribeTrFirewallsV2DetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrFirewallsV2DetailResponse
       */
      Models::DescribeTrFirewallsV2DetailResponse describeTrFirewallsV2DetailWithOptions(const Models::DescribeTrFirewallsV2DetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the virtual private cloud (VPC) firewalls that are created for transit routers.
       *
       * @param request DescribeTrFirewallsV2DetailRequest
       * @return DescribeTrFirewallsV2DetailResponse
       */
      Models::DescribeTrFirewallsV2DetailResponse describeTrFirewallsV2Detail(const Models::DescribeTrFirewallsV2DetailRequest &request);

      /**
       * @summary Queries the virtual private cloud (VPC) firewalls that are created for transit routers.
       *
       * @param request DescribeTrFirewallsV2ListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrFirewallsV2ListResponse
       */
      Models::DescribeTrFirewallsV2ListResponse describeTrFirewallsV2ListWithOptions(const Models::DescribeTrFirewallsV2ListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the virtual private cloud (VPC) firewalls that are created for transit routers.
       *
       * @param request DescribeTrFirewallsV2ListRequest
       * @return DescribeTrFirewallsV2ListResponse
       */
      Models::DescribeTrFirewallsV2ListResponse describeTrFirewallsV2List(const Models::DescribeTrFirewallsV2ListRequest &request);

      /**
       * @summary Queries the route tables of the VPC firewalls that are created for transit routers.
       *
       * @param request DescribeTrFirewallsV2RouteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrFirewallsV2RouteListResponse
       */
      Models::DescribeTrFirewallsV2RouteListResponse describeTrFirewallsV2RouteListWithOptions(const Models::DescribeTrFirewallsV2RouteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the route tables of the VPC firewalls that are created for transit routers.
       *
       * @param request DescribeTrFirewallsV2RouteListRequest
       * @return DescribeTrFirewallsV2RouteListResponse
       */
      Models::DescribeTrFirewallsV2RouteListResponse describeTrFirewallsV2RouteList(const Models::DescribeTrFirewallsV2RouteListRequest &request);

      /**
       * @summary 查询日志
       *
       * @param request DescribeTrafficLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrafficLogResponse
       */
      Models::DescribeTrafficLogResponse describeTrafficLogWithOptions(const Models::DescribeTrafficLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询日志
       *
       * @param request DescribeTrafficLogRequest
       * @return DescribeTrafficLogResponse
       */
      Models::DescribeTrafficLogResponse describeTrafficLog(const Models::DescribeTrafficLogRequest &request);

      /**
       * @summary 获取TR交换机资源列表
       *
       * @param request DescribeTransitRouterResourcesListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTransitRouterResourcesListResponse
       */
      Models::DescribeTransitRouterResourcesListResponse describeTransitRouterResourcesListWithOptions(const Models::DescribeTransitRouterResourcesListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取TR交换机资源列表
       *
       * @param request DescribeTransitRouterResourcesListRequest
       * @return DescribeTransitRouterResourcesListResponse
       */
      Models::DescribeTransitRouterResourcesListResponse describeTransitRouterResourcesList(const Models::DescribeTransitRouterResourcesListRequest &request);

      /**
       * @summary 获取未保护的端口趋势
       *
       * @param request DescribeUnprotectedPortTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUnprotectedPortTrendResponse
       */
      Models::DescribeUnprotectedPortTrendResponse describeUnprotectedPortTrendWithOptions(const Models::DescribeUnprotectedPortTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取未保护的端口趋势
       *
       * @param request DescribeUnprotectedPortTrendRequest
       * @return DescribeUnprotectedPortTrendResponse
       */
      Models::DescribeUnprotectedPortTrendResponse describeUnprotectedPortTrend(const Models::DescribeUnprotectedPortTrendRequest &request);

      /**
       * @summary 获取未保护漏洞趋势
       *
       * @param request DescribeUnprotectedVulnTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUnprotectedVulnTrendResponse
       */
      Models::DescribeUnprotectedVulnTrendResponse describeUnprotectedVulnTrendWithOptions(const Models::DescribeUnprotectedVulnTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取未保护漏洞趋势
       *
       * @param request DescribeUnprotectedVulnTrendRequest
       * @return DescribeUnprotectedVulnTrendResponse
       */
      Models::DescribeUnprotectedVulnTrendResponse describeUnprotectedVulnTrend(const Models::DescribeUnprotectedVulnTrendRequest &request);

      /**
       * @summary 获取用户告警配置
       *
       * @param request DescribeUserAlarmConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserAlarmConfigResponse
       */
      Models::DescribeUserAlarmConfigResponse describeUserAlarmConfigWithOptions(const Models::DescribeUserAlarmConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户告警配置
       *
       * @param request DescribeUserAlarmConfigRequest
       * @return DescribeUserAlarmConfigResponse
       */
      Models::DescribeUserAlarmConfigResponse describeUserAlarmConfig(const Models::DescribeUserAlarmConfigRequest &request);

      /**
       * @deprecated OpenAPI DescribeUserAssetIPTrafficInfo is deprecated
       *
       * @summary Queries the information about the traffic of a specified asset that belongs to your Alibaba Cloud account.
       *
       * @param request DescribeUserAssetIPTrafficInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserAssetIPTrafficInfoResponse
       */
      Models::DescribeUserAssetIPTrafficInfoResponse describeUserAssetIPTrafficInfoWithOptions(const Models::DescribeUserAssetIPTrafficInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeUserAssetIPTrafficInfo is deprecated
       *
       * @summary Queries the information about the traffic of a specified asset that belongs to your Alibaba Cloud account.
       *
       * @param request DescribeUserAssetIPTrafficInfoRequest
       * @return DescribeUserAssetIPTrafficInfoResponse
       */
      Models::DescribeUserAssetIPTrafficInfoResponse describeUserAssetIPTrafficInfo(const Models::DescribeUserAssetIPTrafficInfoRequest &request);

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
      Models::DescribeUserBuyVersionResponse describeUserBuyVersionWithOptions(const Models::DescribeUserBuyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeUserBuyVersionResponse describeUserBuyVersion(const Models::DescribeUserBuyVersionRequest &request);

      /**
       * @summary 获取用户IPS白名单
       *
       * @param request DescribeUserIPSWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserIPSWhitelistResponse
       */
      Models::DescribeUserIPSWhitelistResponse describeUserIPSWhitelistWithOptions(const Models::DescribeUserIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户IPS白名单
       *
       * @param request DescribeUserIPSWhitelistRequest
       * @return DescribeUserIPSWhitelistResponse
       */
      Models::DescribeUserIPSWhitelistResponse describeUserIPSWhitelist(const Models::DescribeUserIPSWhitelistRequest &request);

      /**
       * @summary VPC防火墙IP配置列表
       *
       * @param request DescribeVfwIPSConfigListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVfwIPSConfigListResponse
       */
      Models::DescribeVfwIPSConfigListResponse describeVfwIPSConfigListWithOptions(const Models::DescribeVfwIPSConfigListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary VPC防火墙IP配置列表
       *
       * @param request DescribeVfwIPSConfigListRequest
       * @return DescribeVfwIPSConfigListResponse
       */
      Models::DescribeVfwIPSConfigListResponse describeVfwIPSConfigList(const Models::DescribeVfwIPSConfigListRequest &request);

      /**
       * @summary 获取VPC防火墙通过详情
       *
       * @param request DescribeVpcFirewallAccessDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallAccessDetailResponse
       */
      Models::DescribeVpcFirewallAccessDetailResponse describeVpcFirewallAccessDetailWithOptions(const Models::DescribeVpcFirewallAccessDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取VPC防火墙通过详情
       *
       * @param request DescribeVpcFirewallAccessDetailRequest
       * @return DescribeVpcFirewallAccessDetailResponse
       */
      Models::DescribeVpcFirewallAccessDetailResponse describeVpcFirewallAccessDetail(const Models::DescribeVpcFirewallAccessDetailRequest &request);

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
      Models::DescribeVpcFirewallAclGroupListResponse describeVpcFirewallAclGroupListWithOptions(const Models::DescribeVpcFirewallAclGroupListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeVpcFirewallAclGroupListResponse describeVpcFirewallAclGroupList(const Models::DescribeVpcFirewallAclGroupListRequest &request);

      /**
       * @summary 获取VPC防火墙资产列表
       *
       * @param request DescribeVpcFirewallAssetListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallAssetListResponse
       */
      Models::DescribeVpcFirewallAssetListResponse describeVpcFirewallAssetListWithOptions(const Models::DescribeVpcFirewallAssetListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取VPC防火墙资产列表
       *
       * @param request DescribeVpcFirewallAssetListRequest
       * @return DescribeVpcFirewallAssetListResponse
       */
      Models::DescribeVpcFirewallAssetListResponse describeVpcFirewallAssetList(const Models::DescribeVpcFirewallAssetListRequest &request);

      /**
       * @summary 查询VPC防火墙资产地域
       *
       * @param request DescribeVpcFirewallAssetRegionListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallAssetRegionListResponse
       */
      Models::DescribeVpcFirewallAssetRegionListResponse describeVpcFirewallAssetRegionListWithOptions(const Models::DescribeVpcFirewallAssetRegionListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询VPC防火墙资产地域
       *
       * @param request DescribeVpcFirewallAssetRegionListRequest
       * @return DescribeVpcFirewallAssetRegionListResponse
       */
      Models::DescribeVpcFirewallAssetRegionListResponse describeVpcFirewallAssetRegionList(const Models::DescribeVpcFirewallAssetRegionListRequest &request);

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
      Models::DescribeVpcFirewallCenDetailResponse describeVpcFirewallCenDetailWithOptions(const Models::DescribeVpcFirewallCenDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeVpcFirewallCenDetailResponse describeVpcFirewallCenDetail(const Models::DescribeVpcFirewallCenDetailRequest &request);

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
      Models::DescribeVpcFirewallCenListResponse describeVpcFirewallCenListWithOptions(const Models::DescribeVpcFirewallCenListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeVpcFirewallCenListResponse describeVpcFirewallCenList(const Models::DescribeVpcFirewallCenListRequest &request);

      /**
       * @summary 获取VPC的CEN列表
       *
       * @param request DescribeVpcFirewallCenSummaryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallCenSummaryListResponse
       */
      Models::DescribeVpcFirewallCenSummaryListResponse describeVpcFirewallCenSummaryListWithOptions(const Models::DescribeVpcFirewallCenSummaryListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取VPC的CEN列表
       *
       * @param request DescribeVpcFirewallCenSummaryListRequest
       * @return DescribeVpcFirewallCenSummaryListResponse
       */
      Models::DescribeVpcFirewallCenSummaryListResponse describeVpcFirewallCenSummaryList(const Models::DescribeVpcFirewallCenSummaryListRequest &request);

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
      Models::DescribeVpcFirewallControlPolicyResponse describeVpcFirewallControlPolicyWithOptions(const Models::DescribeVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeVpcFirewallControlPolicyResponse describeVpcFirewallControlPolicy(const Models::DescribeVpcFirewallControlPolicyRequest &request);

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
      Models::DescribeVpcFirewallDefaultIPSConfigResponse describeVpcFirewallDefaultIPSConfigWithOptions(const Models::DescribeVpcFirewallDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeVpcFirewallDefaultIPSConfigResponse describeVpcFirewallDefaultIPSConfig(const Models::DescribeVpcFirewallDefaultIPSConfigRequest &request);

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
      Models::DescribeVpcFirewallDetailResponse describeVpcFirewallDetailWithOptions(const Models::DescribeVpcFirewallDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeVpcFirewallDetailResponse describeVpcFirewallDetail(const Models::DescribeVpcFirewallDetailRequest &request);

      /**
       * @summary 查询VPC互访的域名信息
       *
       * @param request DescribeVpcFirewallDomainListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallDomainListResponse
       */
      Models::DescribeVpcFirewallDomainListResponse describeVpcFirewallDomainListWithOptions(const Models::DescribeVpcFirewallDomainListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询VPC互访的域名信息
       *
       * @param request DescribeVpcFirewallDomainListRequest
       * @return DescribeVpcFirewallDomainListResponse
       */
      Models::DescribeVpcFirewallDomainListResponse describeVpcFirewallDomainList(const Models::DescribeVpcFirewallDomainListRequest &request);

      /**
       * @summary 查询VPC互访的域名信息
       *
       * @param request DescribeVpcFirewallDomainRelationListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallDomainRelationListResponse
       */
      Models::DescribeVpcFirewallDomainRelationListResponse describeVpcFirewallDomainRelationListWithOptions(const Models::DescribeVpcFirewallDomainRelationListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询VPC互访的域名信息
       *
       * @param request DescribeVpcFirewallDomainRelationListRequest
       * @return DescribeVpcFirewallDomainRelationListResponse
       */
      Models::DescribeVpcFirewallDomainRelationListResponse describeVpcFirewallDomainRelationList(const Models::DescribeVpcFirewallDomainRelationListRequest &request);

      /**
       * @summary 概览页-vpc防火墙拦截趋势
       *
       * @param request DescribeVpcFirewallDropTrafficTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallDropTrafficTrendResponse
       */
      Models::DescribeVpcFirewallDropTrafficTrendResponse describeVpcFirewallDropTrafficTrendWithOptions(const Models::DescribeVpcFirewallDropTrafficTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 概览页-vpc防火墙拦截趋势
       *
       * @param request DescribeVpcFirewallDropTrafficTrendRequest
       * @return DescribeVpcFirewallDropTrafficTrendResponse
       */
      Models::DescribeVpcFirewallDropTrafficTrendResponse describeVpcFirewallDropTrafficTrend(const Models::DescribeVpcFirewallDropTrafficTrendRequest &request);

      /**
       * @summary Queries the IPS whitelist of a virtual private cloud (VPC) firewall.
       *
       * @param request DescribeVpcFirewallIPSWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallIPSWhitelistResponse
       */
      Models::DescribeVpcFirewallIPSWhitelistResponse describeVpcFirewallIPSWhitelistWithOptions(const Models::DescribeVpcFirewallIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IPS whitelist of a virtual private cloud (VPC) firewall.
       *
       * @param request DescribeVpcFirewallIPSWhitelistRequest
       * @return DescribeVpcFirewallIPSWhitelistResponse
       */
      Models::DescribeVpcFirewallIPSWhitelistResponse describeVpcFirewallIPSWhitelist(const Models::DescribeVpcFirewallIPSWhitelistRequest &request);

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
      Models::DescribeVpcFirewallListResponse describeVpcFirewallListWithOptions(const Models::DescribeVpcFirewallListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeVpcFirewallListResponse describeVpcFirewallList(const Models::DescribeVpcFirewallListRequest &request);

      /**
       * @summary 获取防火墙手动交换机列表
       *
       * @param request DescribeVpcFirewallManualVSwitchListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallManualVSwitchListResponse
       */
      Models::DescribeVpcFirewallManualVSwitchListResponse describeVpcFirewallManualVSwitchListWithOptions(const Models::DescribeVpcFirewallManualVSwitchListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取防火墙手动交换机列表
       *
       * @param request DescribeVpcFirewallManualVSwitchListRequest
       * @return DescribeVpcFirewallManualVSwitchListResponse
       */
      Models::DescribeVpcFirewallManualVSwitchListResponse describeVpcFirewallManualVSwitchList(const Models::DescribeVpcFirewallManualVSwitchListRequest &request);

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
      Models::DescribeVpcFirewallPolicyPriorUsedResponse describeVpcFirewallPolicyPriorUsedWithOptions(const Models::DescribeVpcFirewallPolicyPriorUsedRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeVpcFirewallPolicyPriorUsedResponse describeVpcFirewallPolicyPriorUsed(const Models::DescribeVpcFirewallPolicyPriorUsedRequest &request);

      /**
       * @summary 获取VPC防火墙预检查详情
       *
       * @param request DescribeVpcFirewallPrecheckDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallPrecheckDetailResponse
       */
      Models::DescribeVpcFirewallPrecheckDetailResponse describeVpcFirewallPrecheckDetailWithOptions(const Models::DescribeVpcFirewallPrecheckDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取VPC防火墙预检查详情
       *
       * @param request DescribeVpcFirewallPrecheckDetailRequest
       * @return DescribeVpcFirewallPrecheckDetailResponse
       */
      Models::DescribeVpcFirewallPrecheckDetailResponse describeVpcFirewallPrecheckDetail(const Models::DescribeVpcFirewallPrecheckDetailRequest &request);

      /**
       * @summary 获取VPC防火墙总结信息
       *
       * @param request DescribeVpcFirewallSummaryInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallSummaryInfoResponse
       */
      Models::DescribeVpcFirewallSummaryInfoResponse describeVpcFirewallSummaryInfoWithOptions(const Models::DescribeVpcFirewallSummaryInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取VPC防火墙总结信息
       *
       * @param request DescribeVpcFirewallSummaryInfoRequest
       * @return DescribeVpcFirewallSummaryInfoResponse
       */
      Models::DescribeVpcFirewallSummaryInfoResponse describeVpcFirewallSummaryInfo(const Models::DescribeVpcFirewallSummaryInfoRequest &request);

      /**
       * @summary 查询VPC互访的资产信息
       *
       * @param request DescribeVpcFirewallTrafficAssetListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallTrafficAssetListResponse
       */
      Models::DescribeVpcFirewallTrafficAssetListResponse describeVpcFirewallTrafficAssetListWithOptions(const Models::DescribeVpcFirewallTrafficAssetListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询VPC互访的资产信息
       *
       * @param request DescribeVpcFirewallTrafficAssetListRequest
       * @return DescribeVpcFirewallTrafficAssetListResponse
       */
      Models::DescribeVpcFirewallTrafficAssetListResponse describeVpcFirewallTrafficAssetList(const Models::DescribeVpcFirewallTrafficAssetListRequest &request);

      /**
       * @summary 查询VPC防火墙资源可用区
       *
       * @param request DescribeVpcFirewallZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcFirewallZoneResponse
       */
      Models::DescribeVpcFirewallZoneResponse describeVpcFirewallZoneWithOptions(const Models::DescribeVpcFirewallZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询VPC防火墙资源可用区
       *
       * @param request DescribeVpcFirewallZoneRequest
       * @return DescribeVpcFirewallZoneResponse
       */
      Models::DescribeVpcFirewallZoneResponse describeVpcFirewallZone(const Models::DescribeVpcFirewallZoneRequest &request);

      /**
       * @summary Queries virtual private clouds (VPCs).
       *
       * @param request DescribeVpcListLiteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcListLiteResponse
       */
      Models::DescribeVpcListLiteResponse describeVpcListLiteWithOptions(const Models::DescribeVpcListLiteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries virtual private clouds (VPCs).
       *
       * @param request DescribeVpcListLiteRequest
       * @return DescribeVpcListLiteResponse
       */
      Models::DescribeVpcListLiteResponse describeVpcListLite(const Models::DescribeVpcListLiteRequest &request);

      /**
       * @summary Queries virtual private cloud (VPC) zones.
       *
       * @param request DescribeVpcZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcZoneResponse
       */
      Models::DescribeVpcZoneResponse describeVpcZoneWithOptions(const Models::DescribeVpcZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries virtual private cloud (VPC) zones.
       *
       * @param request DescribeVpcZoneRequest
       * @return DescribeVpcZoneResponse
       */
      Models::DescribeVpcZoneResponse describeVpcZone(const Models::DescribeVpcZoneRequest &request);

      /**
       * @summary Queries the vulnerabilities that are supported by Cloud Firewall.
       *
       * @param request DescribeVulnerabilityProtectedListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVulnerabilityProtectedListResponse
       */
      Models::DescribeVulnerabilityProtectedListResponse describeVulnerabilityProtectedListWithOptions(const Models::DescribeVulnerabilityProtectedListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the vulnerabilities that are supported by Cloud Firewall.
       *
       * @param request DescribeVulnerabilityProtectedListRequest
       * @return DescribeVulnerabilityProtectedListResponse
       */
      Models::DescribeVulnerabilityProtectedListResponse describeVulnerabilityProtectedList(const Models::DescribeVulnerabilityProtectedListRequest &request);

      /**
       * @summary 关闭资产数据泄漏保护
       *
       * @param request DisableSdlProtectedAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSdlProtectedAssetResponse
       */
      Models::DisableSdlProtectedAssetResponse disableSdlProtectedAssetWithOptions(const Models::DisableSdlProtectedAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭资产数据泄漏保护
       *
       * @param request DisableSdlProtectedAssetRequest
       * @return DisableSdlProtectedAssetResponse
       */
      Models::DisableSdlProtectedAssetResponse disableSdlProtectedAsset(const Models::DisableSdlProtectedAssetRequest &request);

      /**
       * @summary 开启资产数据泄露保护
       *
       * @param request EnableSdlProtectedAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSdlProtectedAssetResponse
       */
      Models::EnableSdlProtectedAssetResponse enableSdlProtectedAssetWithOptions(const Models::EnableSdlProtectedAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启资产数据泄露保护
       *
       * @param request EnableSdlProtectedAssetRequest
       * @return EnableSdlProtectedAssetResponse
       */
      Models::EnableSdlProtectedAssetResponse enableSdlProtectedAsset(const Models::EnableSdlProtectedAssetRequest &request);

      /**
       * @summary 下载TLS证书
       *
       * @param request GetTlsInspectCertificateDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTlsInspectCertificateDownloadUrlResponse
       */
      Models::GetTlsInspectCertificateDownloadUrlResponse getTlsInspectCertificateDownloadUrlWithOptions(const Models::GetTlsInspectCertificateDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下载TLS证书
       *
       * @param request GetTlsInspectCertificateDownloadUrlRequest
       * @return GetTlsInspectCertificateDownloadUrlResponse
       */
      Models::GetTlsInspectCertificateDownloadUrlResponse getTlsInspectCertificateDownloadUrl(const Models::GetTlsInspectCertificateDownloadUrlRequest &request);

      /**
       * @summary 查询TLS检查证书
       *
       * @param request ListTlsInspectCACertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTlsInspectCACertificatesResponse
       */
      Models::ListTlsInspectCACertificatesResponse listTlsInspectCACertificatesWithOptions(const Models::ListTlsInspectCACertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询TLS检查证书
       *
       * @param request ListTlsInspectCACertificatesRequest
       * @return ListTlsInspectCACertificatesResponse
       */
      Models::ListTlsInspectCACertificatesResponse listTlsInspectCACertificates(const Models::ListTlsInspectCACertificatesRequest &request);

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
      Models::ModifyAddressBookResponse modifyAddressBookWithOptions(const Models::ModifyAddressBookRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyAddressBookResponse modifyAddressBook(const Models::ModifyAddressBookRequest &request);

      /**
       * @summary 更新用户版本信息
       *
       * @param request ModifyCfwInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCfwInstanceResponse
       */
      Models::ModifyCfwInstanceResponse modifyCfwInstanceWithOptions(const Models::ModifyCfwInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新用户版本信息
       *
       * @param request ModifyCfwInstanceRequest
       * @return ModifyCfwInstanceResponse
       */
      Models::ModifyCfwInstanceResponse modifyCfwInstance(const Models::ModifyCfwInstanceRequest &request);

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
      Models::ModifyControlPolicyResponse modifyControlPolicyWithOptions(const Models::ModifyControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyControlPolicyResponse modifyControlPolicy(const Models::ModifyControlPolicyRequest &request);

      /**
       * @deprecated OpenAPI ModifyControlPolicyPosition is deprecated, please use Cloudfw::2017-12-07::ModifyControlPolicyPriority instead.
       *
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
      Models::ModifyControlPolicyPositionResponse modifyControlPolicyPositionWithOptions(const Models::ModifyControlPolicyPositionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyControlPolicyPosition is deprecated, please use Cloudfw::2017-12-07::ModifyControlPolicyPriority instead.
       *
       * @summary Modifies the priority of an IPv4 access control policy for the Internet firewall. An IPv4 access control policy refers to a policy whose source IP address and destination IP address are IPv4 addresses.
       *
       * @description You can use this operation to modify the priority of an IPv4 access control policy for the Internet firewall. No API operations are provided for you to modify the priority of an IPv6 access control policy for the Internet firewall.
       * ## [](#qps)Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifyControlPolicyPositionRequest
       * @return ModifyControlPolicyPositionResponse
       */
      Models::ModifyControlPolicyPositionResponse modifyControlPolicyPosition(const Models::ModifyControlPolicyPositionRequest &request);

      /**
       * @summary Modifies the priority of an access control policy.
       *
       * @param request ModifyControlPolicyPriorityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyControlPolicyPriorityResponse
       */
      Models::ModifyControlPolicyPriorityResponse modifyControlPolicyPriorityWithOptions(const Models::ModifyControlPolicyPriorityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the priority of an access control policy.
       *
       * @param request ModifyControlPolicyPriorityRequest
       * @return ModifyControlPolicyPriorityResponse
       */
      Models::ModifyControlPolicyPriorityResponse modifyControlPolicyPriority(const Models::ModifyControlPolicyPriorityRequest &request);

      /**
       * @summary Modifies the default configuration of the intrusion prevention system (IPS).
       *
       * @param request ModifyDefaultIPSConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDefaultIPSConfigResponse
       */
      Models::ModifyDefaultIPSConfigResponse modifyDefaultIPSConfigWithOptions(const Models::ModifyDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the default configuration of the intrusion prevention system (IPS).
       *
       * @param request ModifyDefaultIPSConfigRequest
       * @return ModifyDefaultIPSConfigResponse
       */
      Models::ModifyDefaultIPSConfigResponse modifyDefaultIPSConfig(const Models::ModifyDefaultIPSConfigRequest &request);

      /**
       * @summary 修改DNS防火墙规则
       *
       * @param request ModifyDnsFirewallPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDnsFirewallPolicyResponse
       */
      Models::ModifyDnsFirewallPolicyResponse modifyDnsFirewallPolicyWithOptions(const Models::ModifyDnsFirewallPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改DNS防火墙规则
       *
       * @param request ModifyDnsFirewallPolicyRequest
       * @return ModifyDnsFirewallPolicyResponse
       */
      Models::ModifyDnsFirewallPolicyResponse modifyDnsFirewallPolicy(const Models::ModifyDnsFirewallPolicyRequest &request);

      /**
       * @summary Modifies the status of a routing policy.
       *
       * @param request ModifyFirewallV2RoutePolicySwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFirewallV2RoutePolicySwitchResponse
       */
      Models::ModifyFirewallV2RoutePolicySwitchResponse modifyFirewallV2RoutePolicySwitchWithOptions(const Models::ModifyFirewallV2RoutePolicySwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of a routing policy.
       *
       * @param request ModifyFirewallV2RoutePolicySwitchRequest
       * @return ModifyFirewallV2RoutePolicySwitchResponse
       */
      Models::ModifyFirewallV2RoutePolicySwitchResponse modifyFirewallV2RoutePolicySwitch(const Models::ModifyFirewallV2RoutePolicySwitchRequest &request);

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
      Models::ModifyInstanceMemberAttributesResponse modifyInstanceMemberAttributesWithOptions(const Models::ModifyInstanceMemberAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyInstanceMemberAttributesResponse modifyInstanceMemberAttributes(const Models::ModifyInstanceMemberAttributesRequest &request);

      /**
       * @summary 修改IPS规则
       *
       * @param request ModifyIpsRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIpsRulesResponse
       */
      Models::ModifyIpsRulesResponse modifyIpsRulesWithOptions(const Models::ModifyIpsRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改IPS规则
       *
       * @param request ModifyIpsRulesRequest
       * @return ModifyIpsRulesResponse
       */
      Models::ModifyIpsRulesResponse modifyIpsRules(const Models::ModifyIpsRulesRequest &request);

      /**
       * @summary 修改IPS规则为默认
       *
       * @param request ModifyIpsRulesToDefaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIpsRulesToDefaultResponse
       */
      Models::ModifyIpsRulesToDefaultResponse modifyIpsRulesToDefaultWithOptions(const Models::ModifyIpsRulesToDefaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改IPS规则为默认
       *
       * @param request ModifyIpsRulesToDefaultRequest
       * @return ModifyIpsRulesToDefaultResponse
       */
      Models::ModifyIpsRulesToDefaultResponse modifyIpsRulesToDefault(const Models::ModifyIpsRulesToDefaultRequest &request);

      /**
       * @summary Modifies the configurations of an access control policy that is created for a NAT firewall.
       *
       * @description You can use this operation to modify the configurations of an access control policy. The policy is used to allow, deny, or monitor traffic that reaches a NAT firewall.
       *
       * @param request ModifyNatFirewallControlPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNatFirewallControlPolicyResponse
       */
      Models::ModifyNatFirewallControlPolicyResponse modifyNatFirewallControlPolicyWithOptions(const Models::ModifyNatFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an access control policy that is created for a NAT firewall.
       *
       * @description You can use this operation to modify the configurations of an access control policy. The policy is used to allow, deny, or monitor traffic that reaches a NAT firewall.
       *
       * @param request ModifyNatFirewallControlPolicyRequest
       * @return ModifyNatFirewallControlPolicyResponse
       */
      Models::ModifyNatFirewallControlPolicyResponse modifyNatFirewallControlPolicy(const Models::ModifyNatFirewallControlPolicyRequest &request);

      /**
       * @summary Modifies the priority of an access control policy that is created for a NAT firewall.
       *
       * @param request ModifyNatFirewallControlPolicyPositionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNatFirewallControlPolicyPositionResponse
       */
      Models::ModifyNatFirewallControlPolicyPositionResponse modifyNatFirewallControlPolicyPositionWithOptions(const Models::ModifyNatFirewallControlPolicyPositionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the priority of an access control policy that is created for a NAT firewall.
       *
       * @param request ModifyNatFirewallControlPolicyPositionRequest
       * @return ModifyNatFirewallControlPolicyPositionResponse
       */
      Models::ModifyNatFirewallControlPolicyPositionResponse modifyNatFirewallControlPolicyPosition(const Models::ModifyNatFirewallControlPolicyPositionRequest &request);

      /**
       * @summary Modifies information about an operation on an object group.
       *
       * @param request ModifyObjectGroupOperationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyObjectGroupOperationResponse
       */
      Models::ModifyObjectGroupOperationResponse modifyObjectGroupOperationWithOptions(const Models::ModifyObjectGroupOperationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies information about an operation on an object group.
       *
       * @param request ModifyObjectGroupOperationRequest
       * @return ModifyObjectGroupOperationResponse
       */
      Models::ModifyObjectGroupOperationResponse modifyObjectGroupOperation(const Models::ModifyObjectGroupOperationRequest &request);

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
      Models::ModifyPolicyAdvancedConfigResponse modifyPolicyAdvancedConfigWithOptions(const Models::ModifyPolicyAdvancedConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyPolicyAdvancedConfigResponse modifyPolicyAdvancedConfig(const Models::ModifyPolicyAdvancedConfigRequest &request);

      /**
       * @summary 修改私网DNS终端节点
       *
       * @param request ModifyPrivateDnsEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrivateDnsEndpointResponse
       */
      Models::ModifyPrivateDnsEndpointResponse modifyPrivateDnsEndpointWithOptions(const Models::ModifyPrivateDnsEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改私网DNS终端节点
       *
       * @param request ModifyPrivateDnsEndpointRequest
       * @return ModifyPrivateDnsEndpointResponse
       */
      Models::ModifyPrivateDnsEndpointResponse modifyPrivateDnsEndpoint(const Models::ModifyPrivateDnsEndpointRequest &request);

      /**
       * @summary 开启资产类型默认引流
       *
       * @param request ModifyResourceTypeAutoEnableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyResourceTypeAutoEnableResponse
       */
      Models::ModifyResourceTypeAutoEnableResponse modifyResourceTypeAutoEnableWithOptions(const Models::ModifyResourceTypeAutoEnableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启资产类型默认引流
       *
       * @param request ModifyResourceTypeAutoEnableRequest
       * @return ModifyResourceTypeAutoEnableResponse
       */
      Models::ModifyResourceTypeAutoEnableResponse modifyResourceTypeAutoEnable(const Models::ModifyResourceTypeAutoEnableRequest &request);

      /**
       * @summary 修改敏感数据开关
       *
       * @param request ModifySensitiveSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySensitiveSwitchResponse
       */
      Models::ModifySensitiveSwitchResponse modifySensitiveSwitchWithOptions(const Models::ModifySensitiveSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改敏感数据开关
       *
       * @param request ModifySensitiveSwitchRequest
       * @return ModifySensitiveSwitchResponse
       */
      Models::ModifySensitiveSwitchResponse modifySensitiveSwitch(const Models::ModifySensitiveSwitchRequest &request);

      /**
       * @summary 修改SLS投递
       *
       * @param request ModifySlsDispatchStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySlsDispatchStatusResponse
       */
      Models::ModifySlsDispatchStatusResponse modifySlsDispatchStatusWithOptions(const Models::ModifySlsDispatchStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改SLS投递
       *
       * @param request ModifySlsDispatchStatusRequest
       * @return ModifySlsDispatchStatusResponse
       */
      Models::ModifySlsDispatchStatusResponse modifySlsDispatchStatus(const Models::ModifySlsDispatchStatusRequest &request);

      /**
       * @summary 修改威胁情报配置的信息
       *
       * @param request ModifyThreatIntelligenceSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyThreatIntelligenceSwitchResponse
       */
      Models::ModifyThreatIntelligenceSwitchResponse modifyThreatIntelligenceSwitchWithOptions(const Models::ModifyThreatIntelligenceSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改威胁情报配置的信息
       *
       * @param request ModifyThreatIntelligenceSwitchRequest
       * @return ModifyThreatIntelligenceSwitchResponse
       */
      Models::ModifyThreatIntelligenceSwitchResponse modifyThreatIntelligenceSwitch(const Models::ModifyThreatIntelligenceSwitchRequest &request);

      /**
       * @summary Modifies the configuration of a virtual private cloud (VPC) firewall that is created for a transit router.
       *
       * @param request ModifyTrFirewallV2ConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTrFirewallV2ConfigurationResponse
       */
      Models::ModifyTrFirewallV2ConfigurationResponse modifyTrFirewallV2ConfigurationWithOptions(const Models::ModifyTrFirewallV2ConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a virtual private cloud (VPC) firewall that is created for a transit router.
       *
       * @param request ModifyTrFirewallV2ConfigurationRequest
       * @return ModifyTrFirewallV2ConfigurationResponse
       */
      Models::ModifyTrFirewallV2ConfigurationResponse modifyTrFirewallV2Configuration(const Models::ModifyTrFirewallV2ConfigurationRequest &request);

      /**
       * @summary Modifies the effective scope of the routing policy created for the VPC firewall for a transit router.
       *
       * @param tmpReq ModifyTrFirewallV2RoutePolicyScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTrFirewallV2RoutePolicyScopeResponse
       */
      Models::ModifyTrFirewallV2RoutePolicyScopeResponse modifyTrFirewallV2RoutePolicyScopeWithOptions(const Models::ModifyTrFirewallV2RoutePolicyScopeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the effective scope of the routing policy created for the VPC firewall for a transit router.
       *
       * @param request ModifyTrFirewallV2RoutePolicyScopeRequest
       * @return ModifyTrFirewallV2RoutePolicyScopeResponse
       */
      Models::ModifyTrFirewallV2RoutePolicyScopeResponse modifyTrFirewallV2RoutePolicyScope(const Models::ModifyTrFirewallV2RoutePolicyScopeRequest &request);

      /**
       * @summary 修改用户告警配置
       *
       * @param request ModifyUserAlarmConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserAlarmConfigResponse
       */
      Models::ModifyUserAlarmConfigResponse modifyUserAlarmConfigWithOptions(const Models::ModifyUserAlarmConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改用户告警配置
       *
       * @param request ModifyUserAlarmConfigRequest
       * @return ModifyUserAlarmConfigResponse
       */
      Models::ModifyUserAlarmConfigResponse modifyUserAlarmConfig(const Models::ModifyUserAlarmConfigRequest &request);

      /**
       * @summary 修改用户IPS白名单
       *
       * @param request ModifyUserIPSWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserIPSWhitelistResponse
       */
      Models::ModifyUserIPSWhitelistResponse modifyUserIPSWhitelistWithOptions(const Models::ModifyUserIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改用户IPS白名单
       *
       * @param request ModifyUserIPSWhitelistRequest
       * @return ModifyUserIPSWhitelistResponse
       */
      Models::ModifyUserIPSWhitelistResponse modifyUserIPSWhitelist(const Models::ModifyUserIPSWhitelistRequest &request);

      /**
       * @summary 修改用户日志存储时间
       *
       * @param request ModifyUserSlsLogStorageTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserSlsLogStorageTimeResponse
       */
      Models::ModifyUserSlsLogStorageTimeResponse modifyUserSlsLogStorageTimeWithOptions(const Models::ModifyUserSlsLogStorageTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改用户日志存储时间
       *
       * @param request ModifyUserSlsLogStorageTimeRequest
       * @return ModifyUserSlsLogStorageTimeResponse
       */
      Models::ModifyUserSlsLogStorageTimeResponse modifyUserSlsLogStorageTime(const Models::ModifyUserSlsLogStorageTimeRequest &request);

      /**
       * @summary 修改VPC防火墙ACL引擎模式
       *
       * @param request ModifyVpcFirewallAclEngineModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcFirewallAclEngineModeResponse
       */
      Models::ModifyVpcFirewallAclEngineModeResponse modifyVpcFirewallAclEngineModeWithOptions(const Models::ModifyVpcFirewallAclEngineModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改VPC防火墙ACL引擎模式
       *
       * @param request ModifyVpcFirewallAclEngineModeRequest
       * @return ModifyVpcFirewallAclEngineModeResponse
       */
      Models::ModifyVpcFirewallAclEngineModeResponse modifyVpcFirewallAclEngineMode(const Models::ModifyVpcFirewallAclEngineModeRequest &request);

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
      Models::ModifyVpcFirewallCenConfigureResponse modifyVpcFirewallCenConfigureWithOptions(const Models::ModifyVpcFirewallCenConfigureRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyVpcFirewallCenConfigureResponse modifyVpcFirewallCenConfigure(const Models::ModifyVpcFirewallCenConfigureRequest &request);

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
      Models::ModifyVpcFirewallCenSwitchStatusResponse modifyVpcFirewallCenSwitchStatusWithOptions(const Models::ModifyVpcFirewallCenSwitchStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyVpcFirewallCenSwitchStatusResponse modifyVpcFirewallCenSwitchStatus(const Models::ModifyVpcFirewallCenSwitchStatusRequest &request);

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
      Models::ModifyVpcFirewallConfigureResponse modifyVpcFirewallConfigureWithOptions(const Models::ModifyVpcFirewallConfigureRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyVpcFirewallConfigureResponse modifyVpcFirewallConfigure(const Models::ModifyVpcFirewallConfigureRequest &request);

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
      Models::ModifyVpcFirewallControlPolicyResponse modifyVpcFirewallControlPolicyWithOptions(const Models::ModifyVpcFirewallControlPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyVpcFirewallControlPolicyResponse modifyVpcFirewallControlPolicy(const Models::ModifyVpcFirewallControlPolicyRequest &request);

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
      Models::ModifyVpcFirewallControlPolicyPositionResponse modifyVpcFirewallControlPolicyPositionWithOptions(const Models::ModifyVpcFirewallControlPolicyPositionRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyVpcFirewallControlPolicyPositionResponse modifyVpcFirewallControlPolicyPosition(const Models::ModifyVpcFirewallControlPolicyPositionRequest &request);

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
      Models::ModifyVpcFirewallDefaultIPSConfigResponse modifyVpcFirewallDefaultIPSConfigWithOptions(const Models::ModifyVpcFirewallDefaultIPSConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyVpcFirewallDefaultIPSConfigResponse modifyVpcFirewallDefaultIPSConfig(const Models::ModifyVpcFirewallDefaultIPSConfigRequest &request);

      /**
       * @summary Modifies the IPS whitelist of a virtual private cloud (VPC) firewall.
       *
       * @param request ModifyVpcFirewallIPSWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcFirewallIPSWhitelistResponse
       */
      Models::ModifyVpcFirewallIPSWhitelistResponse modifyVpcFirewallIPSWhitelistWithOptions(const Models::ModifyVpcFirewallIPSWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IPS whitelist of a virtual private cloud (VPC) firewall.
       *
       * @param request ModifyVpcFirewallIPSWhitelistRequest
       * @return ModifyVpcFirewallIPSWhitelistResponse
       */
      Models::ModifyVpcFirewallIPSWhitelistResponse modifyVpcFirewallIPSWhitelist(const Models::ModifyVpcFirewallIPSWhitelistRequest &request);

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
      Models::ModifyVpcFirewallSwitchStatusResponse modifyVpcFirewallSwitchStatusWithOptions(const Models::ModifyVpcFirewallSwitchStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyVpcFirewallSwitchStatusResponse modifyVpcFirewallSwitchStatus(const Models::ModifyVpcFirewallSwitchStatusRequest &request);

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
      Models::PutDisableAllFwSwitchResponse putDisableAllFwSwitchWithOptions(const Models::PutDisableAllFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::PutDisableAllFwSwitchResponse putDisableAllFwSwitch(const Models::PutDisableAllFwSwitchRequest &request);

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
      Models::PutDisableFwSwitchResponse putDisableFwSwitchWithOptions(const Models::PutDisableFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::PutDisableFwSwitchResponse putDisableFwSwitch(const Models::PutDisableFwSwitchRequest &request);

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
      Models::PutEnableAllFwSwitchResponse putEnableAllFwSwitchWithOptions(const Models::PutEnableAllFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::PutEnableAllFwSwitchResponse putEnableAllFwSwitch(const Models::PutEnableAllFwSwitchRequest &request);

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
      Models::PutEnableFwSwitchResponse putEnableFwSwitchWithOptions(const Models::PutEnableFwSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::PutEnableFwSwitchResponse putEnableFwSwitch(const Models::PutEnableFwSwitchRequest &request);

      /**
       * @summary 释放已过期的实例
       *
       * @param request ReleaseExpiredInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseExpiredInstanceResponse
       */
      Models::ReleaseExpiredInstanceResponse releaseExpiredInstanceWithOptions(const Models::ReleaseExpiredInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 释放已过期的实例
       *
       * @param request ReleaseExpiredInstanceRequest
       * @return ReleaseExpiredInstanceResponse
       */
      Models::ReleaseExpiredInstanceResponse releaseExpiredInstance(const Models::ReleaseExpiredInstanceRequest &request);

      /**
       * @summary Releases Cloud Firewall that uses the pay-as-you-go billing method.
       *
       * @param request ReleasePostInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleasePostInstanceResponse
       */
      Models::ReleasePostInstanceResponse releasePostInstanceWithOptions(const Models::ReleasePostInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases Cloud Firewall that uses the pay-as-you-go billing method.
       *
       * @param request ReleasePostInstanceRequest
       * @return ReleasePostInstanceResponse
       */
      Models::ReleasePostInstanceResponse releasePostInstance(const Models::ReleasePostInstanceRequest &request);

      /**
       * @summary Resets the number of NAT firewall hits.
       *
       * @param request ResetNatFirewallRuleHitCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetNatFirewallRuleHitCountResponse
       */
      Models::ResetNatFirewallRuleHitCountResponse resetNatFirewallRuleHitCountWithOptions(const Models::ResetNatFirewallRuleHitCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the number of NAT firewall hits.
       *
       * @param request ResetNatFirewallRuleHitCountRequest
       * @return ResetNatFirewallRuleHitCountResponse
       */
      Models::ResetNatFirewallRuleHitCountResponse resetNatFirewallRuleHitCount(const Models::ResetNatFirewallRuleHitCountRequest &request);

      /**
       * @summary 重置规则命中数
       *
       * @param request ResetRuleHitCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetRuleHitCountResponse
       */
      Models::ResetRuleHitCountResponse resetRuleHitCountWithOptions(const Models::ResetRuleHitCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置规则命中数
       *
       * @param request ResetRuleHitCountRequest
       * @return ResetRuleHitCountResponse
       */
      Models::ResetRuleHitCountResponse resetRuleHitCount(const Models::ResetRuleHitCountRequest &request);

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
      Models::ResetVpcFirewallRuleHitCountResponse resetVpcFirewallRuleHitCountWithOptions(const Models::ResetVpcFirewallRuleHitCountRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ResetVpcFirewallRuleHitCountResponse resetVpcFirewallRuleHitCount(const Models::ResetVpcFirewallRuleHitCountRequest &request);

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
       * @summary 修改AI流量分析开启状态
       *
       * @param request UpdateAITrafficAnalysisStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAITrafficAnalysisStatusResponse
       */
      Models::UpdateAITrafficAnalysisStatusResponse updateAITrafficAnalysisStatusWithOptions(const Models::UpdateAITrafficAnalysisStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改AI流量分析开启状态
       *
       * @param request UpdateAITrafficAnalysisStatusRequest
       * @return UpdateAITrafficAnalysisStatusResponse
       */
      Models::UpdateAITrafficAnalysisStatusResponse updateAITrafficAnalysisStatus(const Models::UpdateAITrafficAnalysisStatusRequest &request);

      /**
       * @summary 修改ACK集群连接器
       *
       * @param request UpdateAckClusterConnectorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAckClusterConnectorResponse
       */
      Models::UpdateAckClusterConnectorResponse updateAckClusterConnectorWithOptions(const Models::UpdateAckClusterConnectorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改ACK集群连接器
       *
       * @param request UpdateAckClusterConnectorRequest
       * @return UpdateAckClusterConnectorResponse
       */
      Models::UpdateAckClusterConnectorResponse updateAckClusterConnector(const Models::UpdateAckClusterConnectorRequest &request);

      /**
       * @summary 修改ACL检查状态
       *
       * @param request UpdateAclCheckDetailStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAclCheckDetailStatusResponse
       */
      Models::UpdateAclCheckDetailStatusResponse updateAclCheckDetailStatusWithOptions(const Models::UpdateAclCheckDetailStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改ACL检查状态
       *
       * @param request UpdateAclCheckDetailStatusRequest
       * @return UpdateAclCheckDetailStatusResponse
       */
      Models::UpdateAclCheckDetailStatusResponse updateAclCheckDetailStatus(const Models::UpdateAclCheckDetailStatusRequest &request);

      /**
       * @summary Updates the status of the NAT firewall feature for Cloud Firewall that uses the pay-as-you-go billing method.
       *
       * @param request UpdatePostpayUserInternetStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePostpayUserInternetStatusResponse
       */
      Models::UpdatePostpayUserInternetStatusResponse updatePostpayUserInternetStatusWithOptions(const Models::UpdatePostpayUserInternetStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of the NAT firewall feature for Cloud Firewall that uses the pay-as-you-go billing method.
       *
       * @param request UpdatePostpayUserInternetStatusRequest
       * @return UpdatePostpayUserInternetStatusResponse
       */
      Models::UpdatePostpayUserInternetStatusResponse updatePostpayUserInternetStatus(const Models::UpdatePostpayUserInternetStatusRequest &request);

      /**
       * @summary Updates the status of the NAT Firewall feature for Cloud Firewall that uses the pay-as-you-go billing method.
       *
       * @param request UpdatePostpayUserNatStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePostpayUserNatStatusResponse
       */
      Models::UpdatePostpayUserNatStatusResponse updatePostpayUserNatStatusWithOptions(const Models::UpdatePostpayUserNatStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of the NAT Firewall feature for Cloud Firewall that uses the pay-as-you-go billing method.
       *
       * @param request UpdatePostpayUserNatStatusRequest
       * @return UpdatePostpayUserNatStatusResponse
       */
      Models::UpdatePostpayUserNatStatusResponse updatePostpayUserNatStatus(const Models::UpdatePostpayUserNatStatusRequest &request);

      /**
       * @summary Updates the status of the virtual private cloud (VPC) Firewall feature for Cloud Firewall that uses the pay-as-you-go billing method.
       *
       * @param request UpdatePostpayUserVpcStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePostpayUserVpcStatusResponse
       */
      Models::UpdatePostpayUserVpcStatusResponse updatePostpayUserVpcStatusWithOptions(const Models::UpdatePostpayUserVpcStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of the virtual private cloud (VPC) Firewall feature for Cloud Firewall that uses the pay-as-you-go billing method.
       *
       * @param request UpdatePostpayUserVpcStatusRequest
       * @return UpdatePostpayUserVpcStatusResponse
       */
      Models::UpdatePostpayUserVpcStatusResponse updatePostpayUserVpcStatus(const Models::UpdatePostpayUserVpcStatusRequest &request);

      /**
       * @summary 更新安全正向代理
       *
       * @param request UpdateSecurityProxyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecurityProxyResponse
       */
      Models::UpdateSecurityProxyResponse updateSecurityProxyWithOptions(const Models::UpdateSecurityProxyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新安全正向代理
       *
       * @param request UpdateSecurityProxyRequest
       * @return UpdateSecurityProxyResponse
       */
      Models::UpdateSecurityProxyResponse updateSecurityProxy(const Models::UpdateSecurityProxyRequest &request);

      /**
       * @summary 使用ACL备份
       *
       * @param request UseAclBackupDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UseAclBackupDataResponse
       */
      Models::UseAclBackupDataResponse useAclBackupDataWithOptions(const Models::UseAclBackupDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 使用ACL备份
       *
       * @param request UseAclBackupDataRequest
       * @return UseAclBackupDataResponse
       */
      Models::UseAclBackupDataResponse useAclBackupData(const Models::UseAclBackupDataRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
