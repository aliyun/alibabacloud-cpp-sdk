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
       * @summary 创建VPC防火墙手动配置
       *
       * @param request CreateVpcFirewallCenManualConfigureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpcFirewallCenManualConfigureResponse
       */
      Models::CreateVpcFirewallCenManualConfigureResponse createVpcFirewallCenManualConfigureWithOptions(const Models::CreateVpcFirewallCenManualConfigureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @summary Queries the firewall risk level.
       *
       * @param request DescribeCfwRiskLevelSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCfwRiskLevelSummaryResponse
       */
      Models::DescribeCfwRiskLevelSummaryResponse describeCfwRiskLevelSummaryWithOptions(const Models::DescribeCfwRiskLevelSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the firewall risk level.
       *
       * @param request DescribeCfwRiskLevelSummaryRequest
       * @return DescribeCfwRiskLevelSummaryResponse
       */
      Models::DescribeCfwRiskLevelSummaryResponse describeCfwRiskLevelSummary(const Models::DescribeCfwRiskLevelSummaryRequest &request);

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
       * @summary Queries the information about the traffic of a specified asset that belongs to your Alibaba Cloud account.
       *
       * @param request DescribeUserAssetIPTrafficInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserAssetIPTrafficInfoResponse
       */
      Models::DescribeUserAssetIPTrafficInfoResponse describeUserAssetIPTrafficInfoWithOptions(const Models::DescribeUserAssetIPTrafficInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
  };
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
