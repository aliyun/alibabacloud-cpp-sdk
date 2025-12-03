// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SLB20140515_HPP_
#define ALIBABACLOUD_SLB20140515_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Slb20140515Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Slb20140515.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

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
      Models::AddAccessControlListEntryResponse addAccessControlListEntryWithOptions(const Models::AddAccessControlListEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::AddAccessControlListEntryResponse addAccessControlListEntry(const Models::AddAccessControlListEntryRequest &request);

      /**
       * @summary Adds backend servers.
       *
       * @description >  If multiple identical Elastic Compute Service (ECS) instances are specified in a request, only the first ECS instance is added. The other ECS instances are ignored. If the backend server that you add is the same as one of the existing backend servers that are already associated with the listener, an error message is returned.
       *
       * @param request AddBackendServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBackendServersResponse
       */
      Models::AddBackendServersResponse addBackendServersWithOptions(const Models::AddBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds backend servers.
       *
       * @description >  If multiple identical Elastic Compute Service (ECS) instances are specified in a request, only the first ECS instance is added. The other ECS instances are ignored. If the backend server that you add is the same as one of the existing backend servers that are already associated with the listener, an error message is returned.
       *
       * @param request AddBackendServersRequest
       * @return AddBackendServersResponse
       */
      Models::AddBackendServersResponse addBackendServers(const Models::AddBackendServersRequest &request);

      /**
       * @summary Adds IP addresses to the whitelist of a listener.
       *
       * @param request AddListenerWhiteListItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddListenerWhiteListItemResponse
       */
      Models::AddListenerWhiteListItemResponse addListenerWhiteListItemWithOptions(const Models::AddListenerWhiteListItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds IP addresses to the whitelist of a listener.
       *
       * @param request AddListenerWhiteListItemRequest
       * @return AddListenerWhiteListItemResponse
       */
      Models::AddListenerWhiteListItemResponse addListenerWhiteListItem(const Models::AddListenerWhiteListItemRequest &request);

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
      Models::AddTagsResponse addTagsWithOptions(const Models::AddTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::AddTagsResponse addTags(const Models::AddTagsRequest &request);

      /**
       * @summary Adds backend servers to a vServer group.
       *
       * @param request AddVServerGroupBackendServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddVServerGroupBackendServersResponse
       */
      Models::AddVServerGroupBackendServersResponse addVServerGroupBackendServersWithOptions(const Models::AddVServerGroupBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds backend servers to a vServer group.
       *
       * @param request AddVServerGroupBackendServersRequest
       * @return AddVServerGroupBackendServersResponse
       */
      Models::AddVServerGroupBackendServersResponse addVServerGroupBackendServers(const Models::AddVServerGroupBackendServersRequest &request);

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
      Models::CreateAccessControlListResponse createAccessControlListWithOptions(const Models::CreateAccessControlListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateAccessControlListResponse createAccessControlList(const Models::CreateAccessControlListRequest &request);

      /**
       * @summary Adds an additional domain name.
       *
       * @param request CreateDomainExtensionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDomainExtensionResponse
       */
      Models::CreateDomainExtensionResponse createDomainExtensionWithOptions(const Models::CreateDomainExtensionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an additional domain name.
       *
       * @param request CreateDomainExtensionRequest
       * @return CreateDomainExtensionResponse
       */
      Models::CreateDomainExtensionResponse createDomainExtension(const Models::CreateDomainExtensionRequest &request);

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
      Models::CreateLoadBalancerResponse createLoadBalancerWithOptions(const Models::CreateLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateLoadBalancerResponse createLoadBalancer(const Models::CreateLoadBalancerRequest &request);

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
      Models::CreateLoadBalancerHTTPListenerResponse createLoadBalancerHTTPListenerWithOptions(const Models::CreateLoadBalancerHTTPListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateLoadBalancerHTTPListenerResponse createLoadBalancerHTTPListener(const Models::CreateLoadBalancerHTTPListenerRequest &request);

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
      Models::CreateLoadBalancerHTTPSListenerResponse createLoadBalancerHTTPSListenerWithOptions(const Models::CreateLoadBalancerHTTPSListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateLoadBalancerHTTPSListenerResponse createLoadBalancerHTTPSListener(const Models::CreateLoadBalancerHTTPSListenerRequest &request);

      /**
       * @summary Creates a TCP listener.
       *
       * @description >  Newly created listeners are in the **stopped** state. After a listener is created, call the [StartLoadBalancerListener](https://help.aliyun.com/document_detail/2401757.html) operation to enable the listener to forward network traffic.
       *
       * @param request CreateLoadBalancerTCPListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerTCPListenerResponse
       */
      Models::CreateLoadBalancerTCPListenerResponse createLoadBalancerTCPListenerWithOptions(const Models::CreateLoadBalancerTCPListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a TCP listener.
       *
       * @description >  Newly created listeners are in the **stopped** state. After a listener is created, call the [StartLoadBalancerListener](https://help.aliyun.com/document_detail/2401757.html) operation to enable the listener to forward network traffic.
       *
       * @param request CreateLoadBalancerTCPListenerRequest
       * @return CreateLoadBalancerTCPListenerResponse
       */
      Models::CreateLoadBalancerTCPListenerResponse createLoadBalancerTCPListener(const Models::CreateLoadBalancerTCPListenerRequest &request);

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
      Models::CreateLoadBalancerUDPListenerResponse createLoadBalancerUDPListenerWithOptions(const Models::CreateLoadBalancerUDPListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a UDP listener.
       *
       * @description UDP listeners of Classic Load Balancer (CLB) instances in a classic network cannot pass client IP addresses to backend servers.
       * >  A newly created listener is in the **stopped** state. After a listener is created, you can call the [StartLoadBalancerListener](https://help.aliyun.com/document_detail/27597.html) operation to enable the listener to forward traffic to backend servers.
       *
       * @param request CreateLoadBalancerUDPListenerRequest
       * @return CreateLoadBalancerUDPListenerResponse
       */
      Models::CreateLoadBalancerUDPListenerResponse createLoadBalancerUDPListener(const Models::CreateLoadBalancerUDPListenerRequest &request);

      /**
       * @summary Creates a primary/secondary server group. Each primary/secondary server group consists of two backend servers. One backend server functions as the primary server, and the other backend server functions as the secondary backend server.
       *
       * @param request CreateMasterSlaveServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMasterSlaveServerGroupResponse
       */
      Models::CreateMasterSlaveServerGroupResponse createMasterSlaveServerGroupWithOptions(const Models::CreateMasterSlaveServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a primary/secondary server group. Each primary/secondary server group consists of two backend servers. One backend server functions as the primary server, and the other backend server functions as the secondary backend server.
       *
       * @param request CreateMasterSlaveServerGroupRequest
       * @return CreateMasterSlaveServerGroupResponse
       */
      Models::CreateMasterSlaveServerGroupResponse createMasterSlaveServerGroup(const Models::CreateMasterSlaveServerGroupRequest &request);

      /**
       * @summary Creates forwarding rules for an HTTP or HTTPS listener.
       *
       * @param request CreateRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRulesResponse
       */
      Models::CreateRulesResponse createRulesWithOptions(const Models::CreateRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates forwarding rules for an HTTP or HTTPS listener.
       *
       * @param request CreateRulesRequest
       * @return CreateRulesResponse
       */
      Models::CreateRulesResponse createRules(const Models::CreateRulesRequest &request);

      /**
       * @summary Creates a Transport Layer Security (TLS) policy.
       *
       * @param request CreateTLSCipherPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTLSCipherPolicyResponse
       */
      Models::CreateTLSCipherPolicyResponse createTLSCipherPolicyWithOptions(const Models::CreateTLSCipherPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Transport Layer Security (TLS) policy.
       *
       * @param request CreateTLSCipherPolicyRequest
       * @return CreateTLSCipherPolicyResponse
       */
      Models::CreateTLSCipherPolicyResponse createTLSCipherPolicy(const Models::CreateTLSCipherPolicyRequest &request);

      /**
       * @summary Creates a vServer group and adds backend servers to the vServer group.
       *
       * @param request CreateVServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVServerGroupResponse
       */
      Models::CreateVServerGroupResponse createVServerGroupWithOptions(const Models::CreateVServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a vServer group and adds backend servers to the vServer group.
       *
       * @param request CreateVServerGroupRequest
       * @return CreateVServerGroupResponse
       */
      Models::CreateVServerGroupResponse createVServerGroup(const Models::CreateVServerGroupRequest &request);

      /**
       * @summary Deletes an access control list (ACL).
       *
       * @description You can delete an ACL only if it is not associated with a listener.
       *
       * @param request DeleteAccessControlListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessControlListResponse
       */
      Models::DeleteAccessControlListResponse deleteAccessControlListWithOptions(const Models::DeleteAccessControlListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access control list (ACL).
       *
       * @description You can delete an ACL only if it is not associated with a listener.
       *
       * @param request DeleteAccessControlListRequest
       * @return DeleteAccessControlListResponse
       */
      Models::DeleteAccessControlListResponse deleteAccessControlList(const Models::DeleteAccessControlListRequest &request);

      /**
       * @summary Deletes the access log of a Classic Load Balancer (CLB) instance.
       *
       * @param request DeleteAccessLogsDownloadAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessLogsDownloadAttributeResponse
       */
      Models::DeleteAccessLogsDownloadAttributeResponse deleteAccessLogsDownloadAttributeWithOptions(const Models::DeleteAccessLogsDownloadAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the access log of a Classic Load Balancer (CLB) instance.
       *
       * @param request DeleteAccessLogsDownloadAttributeRequest
       * @return DeleteAccessLogsDownloadAttributeResponse
       */
      Models::DeleteAccessLogsDownloadAttributeResponse deleteAccessLogsDownloadAttribute(const Models::DeleteAccessLogsDownloadAttributeRequest &request);

      /**
       * @summary Deletes a certificate authority (CA) certificate.
       *
       * @description You cannot delete a CA certificate that is in use.
       *
       * @param request DeleteCACertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCACertificateResponse
       */
      Models::DeleteCACertificateResponse deleteCACertificateWithOptions(const Models::DeleteCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a certificate authority (CA) certificate.
       *
       * @description You cannot delete a CA certificate that is in use.
       *
       * @param request DeleteCACertificateRequest
       * @return DeleteCACertificateResponse
       */
      Models::DeleteCACertificateResponse deleteCACertificate(const Models::DeleteCACertificateRequest &request);

      /**
       * @summary Deletes an additional domain name.
       *
       * @param request DeleteDomainExtensionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainExtensionResponse
       */
      Models::DeleteDomainExtensionResponse deleteDomainExtensionWithOptions(const Models::DeleteDomainExtensionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an additional domain name.
       *
       * @param request DeleteDomainExtensionRequest
       * @return DeleteDomainExtensionResponse
       */
      Models::DeleteDomainExtensionResponse deleteDomainExtension(const Models::DeleteDomainExtensionRequest &request);

      /**
       * @summary Deletes a pay-as-you-go Server Load Balancer (SLB) instance.
       *
       * @description > The listeners and tags of the SLB instance are deleted along with the SLB instance.
       *
       * @param request DeleteLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLoadBalancerResponse
       */
      Models::DeleteLoadBalancerResponse deleteLoadBalancerWithOptions(const Models::DeleteLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a pay-as-you-go Server Load Balancer (SLB) instance.
       *
       * @description > The listeners and tags of the SLB instance are deleted along with the SLB instance.
       *
       * @param request DeleteLoadBalancerRequest
       * @return DeleteLoadBalancerResponse
       */
      Models::DeleteLoadBalancerResponse deleteLoadBalancer(const Models::DeleteLoadBalancerRequest &request);

      /**
       * @summary Deletes a listener.
       *
       * @description >  You can delete only listeners that are in the **stopped** or **running** state.
       *
       * @param request DeleteLoadBalancerListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLoadBalancerListenerResponse
       */
      Models::DeleteLoadBalancerListenerResponse deleteLoadBalancerListenerWithOptions(const Models::DeleteLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a listener.
       *
       * @description >  You can delete only listeners that are in the **stopped** or **running** state.
       *
       * @param request DeleteLoadBalancerListenerRequest
       * @return DeleteLoadBalancerListenerResponse
       */
      Models::DeleteLoadBalancerListenerResponse deleteLoadBalancerListener(const Models::DeleteLoadBalancerListenerRequest &request);

      /**
       * @summary Deletes a primary/secondary server group.
       *
       * @param request DeleteMasterSlaveServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMasterSlaveServerGroupResponse
       */
      Models::DeleteMasterSlaveServerGroupResponse deleteMasterSlaveServerGroupWithOptions(const Models::DeleteMasterSlaveServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a primary/secondary server group.
       *
       * @param request DeleteMasterSlaveServerGroupRequest
       * @return DeleteMasterSlaveServerGroupResponse
       */
      Models::DeleteMasterSlaveServerGroupResponse deleteMasterSlaveServerGroup(const Models::DeleteMasterSlaveServerGroupRequest &request);

      /**
       * @summary Deletes forwarding rules.
       *
       * @description You must specify at least one forwarding rule that you want to delete. You can specify at most 10 forwarding rules in each call.
       *
       * @param request DeleteRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRulesResponse
       */
      Models::DeleteRulesResponse deleteRulesWithOptions(const Models::DeleteRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes forwarding rules.
       *
       * @description You must specify at least one forwarding rule that you want to delete. You can specify at most 10 forwarding rules in each call.
       *
       * @param request DeleteRulesRequest
       * @return DeleteRulesResponse
       */
      Models::DeleteRulesResponse deleteRules(const Models::DeleteRulesRequest &request);

      /**
       * @summary Deletes a server certificate.
       *
       * @description >  You cannot delete server certificates that are in use.
       *
       * @param request DeleteServerCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServerCertificateResponse
       */
      Models::DeleteServerCertificateResponse deleteServerCertificateWithOptions(const Models::DeleteServerCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a server certificate.
       *
       * @description >  You cannot delete server certificates that are in use.
       *
       * @param request DeleteServerCertificateRequest
       * @return DeleteServerCertificateResponse
       */
      Models::DeleteServerCertificateResponse deleteServerCertificate(const Models::DeleteServerCertificateRequest &request);

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
      Models::DeleteTLSCipherPolicyResponse deleteTLSCipherPolicyWithOptions(const Models::DeleteTLSCipherPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a TLS policy.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Slb\\&api=DeleteTLSCipherPolicy\\&type=RPC\\&version=2014-05-15)
       *
       * @param request DeleteTLSCipherPolicyRequest
       * @return DeleteTLSCipherPolicyResponse
       */
      Models::DeleteTLSCipherPolicyResponse deleteTLSCipherPolicy(const Models::DeleteTLSCipherPolicyRequest &request);

      /**
       * @summary Deletes a VServer group.
       *
       * @param request DeleteVServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVServerGroupResponse
       */
      Models::DeleteVServerGroupResponse deleteVServerGroupWithOptions(const Models::DeleteVServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VServer group.
       *
       * @param request DeleteVServerGroupRequest
       * @return DeleteVServerGroupResponse
       */
      Models::DeleteVServerGroupResponse deleteVServerGroup(const Models::DeleteVServerGroupRequest &request);

      /**
       * @summary Queries the configuration of an access control list (ACL).
       *
       * @param request DescribeAccessControlListAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessControlListAttributeResponse
       */
      Models::DescribeAccessControlListAttributeResponse describeAccessControlListAttributeWithOptions(const Models::DescribeAccessControlListAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of an access control list (ACL).
       *
       * @param request DescribeAccessControlListAttributeRequest
       * @return DescribeAccessControlListAttributeResponse
       */
      Models::DescribeAccessControlListAttributeResponse describeAccessControlListAttribute(const Models::DescribeAccessControlListAttributeRequest &request);

      /**
       * @summary Queries access control lists (ACLs).
       *
       * @param request DescribeAccessControlListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessControlListsResponse
       */
      Models::DescribeAccessControlListsResponse describeAccessControlListsWithOptions(const Models::DescribeAccessControlListsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries access control lists (ACLs).
       *
       * @param request DescribeAccessControlListsRequest
       * @return DescribeAccessControlListsResponse
       */
      Models::DescribeAccessControlListsResponse describeAccessControlLists(const Models::DescribeAccessControlListsRequest &request);

      /**
       * @summary Queries the access log of a Classic Load Balancer (CLB) instance.
       *
       * @param request DescribeAccessLogsDownloadAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessLogsDownloadAttributeResponse
       */
      Models::DescribeAccessLogsDownloadAttributeResponse describeAccessLogsDownloadAttributeWithOptions(const Models::DescribeAccessLogsDownloadAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access log of a Classic Load Balancer (CLB) instance.
       *
       * @param request DescribeAccessLogsDownloadAttributeRequest
       * @return DescribeAccessLogsDownloadAttributeResponse
       */
      Models::DescribeAccessLogsDownloadAttributeResponse describeAccessLogsDownloadAttribute(const Models::DescribeAccessLogsDownloadAttributeRequest &request);

      /**
       * @summary Queries the available resources and resources that are available for purchase in the zones of a region.
       *
       * @description > Only the available resources and zones are returned.
       *
       * @param request DescribeAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResourceWithOptions(const Models::DescribeAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available resources and resources that are available for purchase in the zones of a region.
       *
       * @description > Only the available resources and zones are returned.
       *
       * @param request DescribeAvailableResourceRequest
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResource(const Models::DescribeAvailableResourceRequest &request);

      /**
       * @summary Queries certificate authority (CA) certificates.
       *
       * @description > To ensure data confidentiality, only the certificate fingerprint and name are returned. The certificate content is not returned.
       *
       * @param request DescribeCACertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCACertificatesResponse
       */
      Models::DescribeCACertificatesResponse describeCACertificatesWithOptions(const Models::DescribeCACertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries certificate authority (CA) certificates.
       *
       * @description > To ensure data confidentiality, only the certificate fingerprint and name are returned. The certificate content is not returned.
       *
       * @param request DescribeCACertificatesRequest
       * @return DescribeCACertificatesResponse
       */
      Models::DescribeCACertificatesResponse describeCACertificates(const Models::DescribeCACertificatesRequest &request);

      /**
       * @summary Queries the attributes of an additional domain name.
       *
       * @param request DescribeDomainExtensionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainExtensionAttributeResponse
       */
      Models::DescribeDomainExtensionAttributeResponse describeDomainExtensionAttributeWithOptions(const Models::DescribeDomainExtensionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attributes of an additional domain name.
       *
       * @param request DescribeDomainExtensionAttributeRequest
       * @return DescribeDomainExtensionAttributeResponse
       */
      Models::DescribeDomainExtensionAttributeResponse describeDomainExtensionAttribute(const Models::DescribeDomainExtensionAttributeRequest &request);

      /**
       * @summary Queries additional domain names.
       *
       * @param request DescribeDomainExtensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainExtensionsResponse
       */
      Models::DescribeDomainExtensionsResponse describeDomainExtensionsWithOptions(const Models::DescribeDomainExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries additional domain names.
       *
       * @param request DescribeDomainExtensionsRequest
       * @return DescribeDomainExtensionsResponse
       */
      Models::DescribeDomainExtensionsResponse describeDomainExtensions(const Models::DescribeDomainExtensionsRequest &request);

      /**
       * @summary Queries the health status of backend servers.
       *
       * @param request DescribeHealthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHealthStatusResponse
       */
      Models::DescribeHealthStatusResponse describeHealthStatusWithOptions(const Models::DescribeHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health status of backend servers.
       *
       * @param request DescribeHealthStatusRequest
       * @return DescribeHealthStatusResponse
       */
      Models::DescribeHealthStatusResponse describeHealthStatus(const Models::DescribeHealthStatusRequest &request);

      /**
       * @summary Queries the configurations of fine-grained monitoring in a region.
       *
       * @param request DescribeHighDefinationMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHighDefinationMonitorResponse
       */
      Models::DescribeHighDefinationMonitorResponse describeHighDefinationMonitorWithOptions(const Models::DescribeHighDefinationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of fine-grained monitoring in a region.
       *
       * @param request DescribeHighDefinationMonitorRequest
       * @return DescribeHighDefinationMonitorResponse
       */
      Models::DescribeHighDefinationMonitorResponse describeHighDefinationMonitor(const Models::DescribeHighDefinationMonitorRequest &request);

      /**
       * @summary Queries the whitelist configurations of a listener.
       *
       * @param request DescribeListenerAccessControlAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeListenerAccessControlAttributeResponse
       */
      Models::DescribeListenerAccessControlAttributeResponse describeListenerAccessControlAttributeWithOptions(const Models::DescribeListenerAccessControlAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the whitelist configurations of a listener.
       *
       * @param request DescribeListenerAccessControlAttributeRequest
       * @return DescribeListenerAccessControlAttributeResponse
       */
      Models::DescribeListenerAccessControlAttributeResponse describeListenerAccessControlAttribute(const Models::DescribeListenerAccessControlAttributeRequest &request);

      /**
       * @summary Queries the detail of a Classic Load Balancer (CLB) instance.
       *
       * @description >  If backend servers are deployed in a vServer group, you can call the [DescribeVServerGroupAttribute](https://help.aliyun.com/document_detail/35224.html) operation to query the backend servers.
       *
       * @param request DescribeLoadBalancerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerAttributeResponse
       */
      Models::DescribeLoadBalancerAttributeResponse describeLoadBalancerAttributeWithOptions(const Models::DescribeLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detail of a Classic Load Balancer (CLB) instance.
       *
       * @description >  If backend servers are deployed in a vServer group, you can call the [DescribeVServerGroupAttribute](https://help.aliyun.com/document_detail/35224.html) operation to query the backend servers.
       *
       * @param request DescribeLoadBalancerAttributeRequest
       * @return DescribeLoadBalancerAttributeResponse
       */
      Models::DescribeLoadBalancerAttributeResponse describeLoadBalancerAttribute(const Models::DescribeLoadBalancerAttributeRequest &request);

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
      Models::DescribeLoadBalancerHTTPListenerAttributeResponse describeLoadBalancerHTTPListenerAttributeWithOptions(const Models::DescribeLoadBalancerHTTPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of an HTTP listener.
       *
       * @description *   A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/27577.html).
       * *   An HTTP listener is created. For more information about how to create an HTTP listener, see [CreateLoadBalancerHTTPListener](https://help.aliyun.com/document_detail/27592.html).
       *
       * @param request DescribeLoadBalancerHTTPListenerAttributeRequest
       * @return DescribeLoadBalancerHTTPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerHTTPListenerAttributeResponse describeLoadBalancerHTTPListenerAttribute(const Models::DescribeLoadBalancerHTTPListenerAttributeRequest &request);

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
      Models::DescribeLoadBalancerHTTPSListenerAttributeResponse describeLoadBalancerHTTPSListenerAttributeWithOptions(const Models::DescribeLoadBalancerHTTPSListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of an HTTPS listener.
       *
       * @description *   A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/27577.html).
       * *   An HTTPS listener is created. For more information about how to create an HTTPS listener, see [CreateLoadBalancerHTTPSListener](https://help.aliyun.com/document_detail/27593.html).
       *
       * @param request DescribeLoadBalancerHTTPSListenerAttributeRequest
       * @return DescribeLoadBalancerHTTPSListenerAttributeResponse
       */
      Models::DescribeLoadBalancerHTTPSListenerAttributeResponse describeLoadBalancerHTTPSListenerAttribute(const Models::DescribeLoadBalancerHTTPSListenerAttributeRequest &request);

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
      Models::DescribeLoadBalancerListenersResponse describeLoadBalancerListenersWithOptions(const Models::DescribeLoadBalancerListenersRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeLoadBalancerListenersResponse describeLoadBalancerListeners(const Models::DescribeLoadBalancerListenersRequest &request);

      /**
       * @summary Queries the configurations of a TCP listener of Classic Load Balancer (CLB).
       *
       * @param request DescribeLoadBalancerTCPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerTCPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerTCPListenerAttributeResponse describeLoadBalancerTCPListenerAttributeWithOptions(const Models::DescribeLoadBalancerTCPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a TCP listener of Classic Load Balancer (CLB).
       *
       * @param request DescribeLoadBalancerTCPListenerAttributeRequest
       * @return DescribeLoadBalancerTCPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerTCPListenerAttributeResponse describeLoadBalancerTCPListenerAttribute(const Models::DescribeLoadBalancerTCPListenerAttributeRequest &request);

      /**
       * @summary Queries the configurations of a UDP listener.
       *
       * @param request DescribeLoadBalancerUDPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerUDPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerUDPListenerAttributeResponse describeLoadBalancerUDPListenerAttributeWithOptions(const Models::DescribeLoadBalancerUDPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a UDP listener.
       *
       * @param request DescribeLoadBalancerUDPListenerAttributeRequest
       * @return DescribeLoadBalancerUDPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerUDPListenerAttributeResponse describeLoadBalancerUDPListenerAttribute(const Models::DescribeLoadBalancerUDPListenerAttributeRequest &request);

      /**
       * @summary Queries Classic Load Balancer (CLB) instances.
       *
       * @param request DescribeLoadBalancersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancersResponse
       */
      Models::DescribeLoadBalancersResponse describeLoadBalancersWithOptions(const Models::DescribeLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Classic Load Balancer (CLB) instances.
       *
       * @param request DescribeLoadBalancersRequest
       * @return DescribeLoadBalancersResponse
       */
      Models::DescribeLoadBalancersResponse describeLoadBalancers(const Models::DescribeLoadBalancersRequest &request);

      /**
       * @summary Queries the detailed information about a primary/secondary server group.
       *
       * @param request DescribeMasterSlaveServerGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMasterSlaveServerGroupAttributeResponse
       */
      Models::DescribeMasterSlaveServerGroupAttributeResponse describeMasterSlaveServerGroupAttributeWithOptions(const Models::DescribeMasterSlaveServerGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about a primary/secondary server group.
       *
       * @param request DescribeMasterSlaveServerGroupAttributeRequest
       * @return DescribeMasterSlaveServerGroupAttributeResponse
       */
      Models::DescribeMasterSlaveServerGroupAttributeResponse describeMasterSlaveServerGroupAttribute(const Models::DescribeMasterSlaveServerGroupAttributeRequest &request);

      /**
       * @summary Queries primary/secondary server groups.
       *
       * @param request DescribeMasterSlaveServerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMasterSlaveServerGroupsResponse
       */
      Models::DescribeMasterSlaveServerGroupsResponse describeMasterSlaveServerGroupsWithOptions(const Models::DescribeMasterSlaveServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries primary/secondary server groups.
       *
       * @param request DescribeMasterSlaveServerGroupsRequest
       * @return DescribeMasterSlaveServerGroupsResponse
       */
      Models::DescribeMasterSlaveServerGroupsResponse describeMasterSlaveServerGroups(const Models::DescribeMasterSlaveServerGroupsRequest &request);

      /**
       * @summary Queries available regions.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the configurations of a specified forwarding rule.
       *
       * @param request DescribeRuleAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRuleAttributeResponse
       */
      Models::DescribeRuleAttributeResponse describeRuleAttributeWithOptions(const Models::DescribeRuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a specified forwarding rule.
       *
       * @param request DescribeRuleAttributeRequest
       * @return DescribeRuleAttributeResponse
       */
      Models::DescribeRuleAttributeResponse describeRuleAttribute(const Models::DescribeRuleAttributeRequest &request);

      /**
       * @summary Queries the forwarding rules that are configured for a specified listener.
       *
       * @param request DescribeRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRulesResponse
       */
      Models::DescribeRulesResponse describeRulesWithOptions(const Models::DescribeRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the forwarding rules that are configured for a specified listener.
       *
       * @param request DescribeRulesRequest
       * @return DescribeRulesResponse
       */
      Models::DescribeRulesResponse describeRules(const Models::DescribeRulesRequest &request);

      /**
       * @summary Queries the server certificates in a region.
       *
       * @description >  For security reasons, only the fingerprints and names of server certificates are returned. The content of server certificates and private keys is not returned.
       *
       * @param request DescribeServerCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServerCertificatesResponse
       */
      Models::DescribeServerCertificatesResponse describeServerCertificatesWithOptions(const Models::DescribeServerCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the server certificates in a region.
       *
       * @description >  For security reasons, only the fingerprints and names of server certificates are returned. The content of server certificates and private keys is not returned.
       *
       * @param request DescribeServerCertificatesRequest
       * @return DescribeServerCertificatesResponse
       */
      Models::DescribeServerCertificatesResponse describeServerCertificates(const Models::DescribeServerCertificatesRequest &request);

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
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary Queries the detailed information about a vServer group.
       *
       * @param request DescribeVServerGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVServerGroupAttributeResponse
       */
      Models::DescribeVServerGroupAttributeResponse describeVServerGroupAttributeWithOptions(const Models::DescribeVServerGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about a vServer group.
       *
       * @param request DescribeVServerGroupAttributeRequest
       * @return DescribeVServerGroupAttributeResponse
       */
      Models::DescribeVServerGroupAttributeResponse describeVServerGroupAttribute(const Models::DescribeVServerGroupAttributeRequest &request);

      /**
       * @summary Queries vServer groups.
       *
       * @param request DescribeVServerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVServerGroupsResponse
       */
      Models::DescribeVServerGroupsResponse describeVServerGroupsWithOptions(const Models::DescribeVServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries vServer groups.
       *
       * @param request DescribeVServerGroupsRequest
       * @return DescribeVServerGroupsResponse
       */
      Models::DescribeVServerGroupsResponse describeVServerGroups(const Models::DescribeVServerGroupsRequest &request);

      /**
       * @summary Queries the zones in a region.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones in a region.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Enables fine-grained monitoring for the current region.
       *
       * @param request EnableHighDefinationMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableHighDefinationMonitorResponse
       */
      Models::EnableHighDefinationMonitorResponse enableHighDefinationMonitorWithOptions(const Models::EnableHighDefinationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables fine-grained monitoring for the current region.
       *
       * @param request EnableHighDefinationMonitorRequest
       * @return EnableHighDefinationMonitorResponse
       */
      Models::EnableHighDefinationMonitorResponse enableHighDefinationMonitor(const Models::EnableHighDefinationMonitorRequest &request);

      /**
       * @summary Queries Transport Layer Security (TLS) policies.
       *
       * @param request ListTLSCipherPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTLSCipherPoliciesResponse
       */
      Models::ListTLSCipherPoliciesResponse listTLSCipherPoliciesWithOptions(const Models::ListTLSCipherPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Transport Layer Security (TLS) policies.
       *
       * @param request ListTLSCipherPoliciesRequest
       * @return ListTLSCipherPoliciesResponse
       */
      Models::ListTLSCipherPoliciesResponse listTLSCipherPolicies(const Models::ListTLSCipherPoliciesRequest &request);

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
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies the configuration of fine-grained monitoring in a specified region.
       *
       * @param request ModifyHighDefinationMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHighDefinationMonitorResponse
       */
      Models::ModifyHighDefinationMonitorResponse modifyHighDefinationMonitorWithOptions(const Models::ModifyHighDefinationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of fine-grained monitoring in a specified region.
       *
       * @param request ModifyHighDefinationMonitorRequest
       * @return ModifyHighDefinationMonitorResponse
       */
      Models::ModifyHighDefinationMonitorResponse modifyHighDefinationMonitor(const Models::ModifyHighDefinationMonitorRequest &request);

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
      Models::ModifyLoadBalancerInstanceChargeTypeResponse modifyLoadBalancerInstanceChargeTypeWithOptions(const Models::ModifyLoadBalancerInstanceChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the metering method of a pay-as-you-go Classic Load Balancer (CLB) instance.
       *
       * @description > *   For pay-as-you-go CLB instances, you can only change the metering method from pay-by-specification to pay-by-LCU. You cannot change the metering method from pay-by-LCU to pay-by-specification.
       * >*   This operation can change the metering method of only one instance at a time.
       *
       * @param request ModifyLoadBalancerInstanceChargeTypeRequest
       * @return ModifyLoadBalancerInstanceChargeTypeResponse
       */
      Models::ModifyLoadBalancerInstanceChargeTypeResponse modifyLoadBalancerInstanceChargeType(const Models::ModifyLoadBalancerInstanceChargeTypeRequest &request);

      /**
       * @summary Modifies the specification of a Classic Load Balancer (CLB) instance.
       *
       * @param request ModifyLoadBalancerInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLoadBalancerInstanceSpecResponse
       */
      Models::ModifyLoadBalancerInstanceSpecResponse modifyLoadBalancerInstanceSpecWithOptions(const Models::ModifyLoadBalancerInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specification of a Classic Load Balancer (CLB) instance.
       *
       * @param request ModifyLoadBalancerInstanceSpecRequest
       * @return ModifyLoadBalancerInstanceSpecResponse
       */
      Models::ModifyLoadBalancerInstanceSpecResponse modifyLoadBalancerInstanceSpec(const Models::ModifyLoadBalancerInstanceSpecRequest &request);

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
      Models::ModifyLoadBalancerInternetSpecResponse modifyLoadBalancerInternetSpecWithOptions(const Models::ModifyLoadBalancerInternetSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyLoadBalancerInternetSpecResponse modifyLoadBalancerInternetSpec(const Models::ModifyLoadBalancerInternetSpecRequest &request);

      /**
       * @deprecated OpenAPI ModifyLoadBalancerPayType is deprecated
       *
       * @summary Changes the billing method of a Classic Load Balancer (CLB) instance from pay-as-you-go to subscription.
       *
       * @param request ModifyLoadBalancerPayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLoadBalancerPayTypeResponse
       */
      Models::ModifyLoadBalancerPayTypeResponse modifyLoadBalancerPayTypeWithOptions(const Models::ModifyLoadBalancerPayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifyLoadBalancerPayType is deprecated
       *
       * @summary Changes the billing method of a Classic Load Balancer (CLB) instance from pay-as-you-go to subscription.
       *
       * @param request ModifyLoadBalancerPayTypeRequest
       * @return ModifyLoadBalancerPayTypeResponse
       */
      Models::ModifyLoadBalancerPayTypeResponse modifyLoadBalancerPayType(const Models::ModifyLoadBalancerPayTypeRequest &request);

      /**
       * @summary Replaces backend servers in a vServer group.
       *
       * @description This operation can be used only to replace backend servers in a vServer group. To modify the attributes of backend servers, such as weights, call the [SetVServerGroupAttribute](https://help.aliyun.com/document_detail/35217.html) operation.
       *
       * @param request ModifyVServerGroupBackendServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVServerGroupBackendServersResponse
       */
      Models::ModifyVServerGroupBackendServersResponse modifyVServerGroupBackendServersWithOptions(const Models::ModifyVServerGroupBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces backend servers in a vServer group.
       *
       * @description This operation can be used only to replace backend servers in a vServer group. To modify the attributes of backend servers, such as weights, call the [SetVServerGroupAttribute](https://help.aliyun.com/document_detail/35217.html) operation.
       *
       * @param request ModifyVServerGroupBackendServersRequest
       * @return ModifyVServerGroupBackendServersResponse
       */
      Models::ModifyVServerGroupBackendServersResponse modifyVServerGroupBackendServers(const Models::ModifyVServerGroupBackendServersRequest &request);

      /**
       * @summary Moves a resource to another resource group.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a resource to another resource group.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Removes IP entries from the network access control list (ACL) of a Classic Load Balancer (CLB) instance.
       *
       * @param request RemoveAccessControlListEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveAccessControlListEntryResponse
       */
      Models::RemoveAccessControlListEntryResponse removeAccessControlListEntryWithOptions(const Models::RemoveAccessControlListEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes IP entries from the network access control list (ACL) of a Classic Load Balancer (CLB) instance.
       *
       * @param request RemoveAccessControlListEntryRequest
       * @return RemoveAccessControlListEntryResponse
       */
      Models::RemoveAccessControlListEntryResponse removeAccessControlListEntry(const Models::RemoveAccessControlListEntryRequest &request);

      /**
       * @summary Removes backend servers.
       *
       * @description >  If the backend servers that you want to remove are not in the server list of the Classic Load Balancer (CLB) instance, the request fails. However, the system does not report an error.
       *
       * @param request RemoveBackendServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveBackendServersResponse
       */
      Models::RemoveBackendServersResponse removeBackendServersWithOptions(const Models::RemoveBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes backend servers.
       *
       * @description >  If the backend servers that you want to remove are not in the server list of the Classic Load Balancer (CLB) instance, the request fails. However, the system does not report an error.
       *
       * @param request RemoveBackendServersRequest
       * @return RemoveBackendServersResponse
       */
      Models::RemoveBackendServersResponse removeBackendServers(const Models::RemoveBackendServersRequest &request);

      /**
       * @summary Removes IP addresses or CIDR blocks from the whitelist of a listener.
       *
       * @param request RemoveListenerWhiteListItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveListenerWhiteListItemResponse
       */
      Models::RemoveListenerWhiteListItemResponse removeListenerWhiteListItemWithOptions(const Models::RemoveListenerWhiteListItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes IP addresses or CIDR blocks from the whitelist of a listener.
       *
       * @param request RemoveListenerWhiteListItemRequest
       * @return RemoveListenerWhiteListItemResponse
       */
      Models::RemoveListenerWhiteListItemResponse removeListenerWhiteListItem(const Models::RemoveListenerWhiteListItemRequest &request);

      /**
       * @summary Removes tags from a Server Load Balancer (SLB) instance.
       *
       * @param request RemoveTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTagsResponse
       */
      Models::RemoveTagsResponse removeTagsWithOptions(const Models::RemoveTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from a Server Load Balancer (SLB) instance.
       *
       * @param request RemoveTagsRequest
       * @return RemoveTagsResponse
       */
      Models::RemoveTagsResponse removeTags(const Models::RemoveTagsRequest &request);

      /**
       * @summary Removes backend servers from a vServer group.
       *
       * @description >  If the backend servers specified by the **BackendServers** parameter do not exist in the vServer group, the backend servers are ignored. No error message is returned.
       *
       * @param request RemoveVServerGroupBackendServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveVServerGroupBackendServersResponse
       */
      Models::RemoveVServerGroupBackendServersResponse removeVServerGroupBackendServersWithOptions(const Models::RemoveVServerGroupBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes backend servers from a vServer group.
       *
       * @description >  If the backend servers specified by the **BackendServers** parameter do not exist in the vServer group, the backend servers are ignored. No error message is returned.
       *
       * @param request RemoveVServerGroupBackendServersRequest
       * @return RemoveVServerGroupBackendServersResponse
       */
      Models::RemoveVServerGroupBackendServersResponse removeVServerGroupBackendServers(const Models::RemoveVServerGroupBackendServersRequest &request);

      /**
       * @summary Renames an access control list (ACL).
       *
       * @param request SetAccessControlListAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAccessControlListAttributeResponse
       */
      Models::SetAccessControlListAttributeResponse setAccessControlListAttributeWithOptions(const Models::SetAccessControlListAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renames an access control list (ACL).
       *
       * @param request SetAccessControlListAttributeRequest
       * @return SetAccessControlListAttributeResponse
       */
      Models::SetAccessControlListAttributeResponse setAccessControlListAttribute(const Models::SetAccessControlListAttributeRequest &request);

      /**
       * @summary Adds an access log forwarding rule to a Classic Load Balancer (CLB) instance.
       *
       * @param request SetAccessLogsDownloadAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAccessLogsDownloadAttributeResponse
       */
      Models::SetAccessLogsDownloadAttributeResponse setAccessLogsDownloadAttributeWithOptions(const Models::SetAccessLogsDownloadAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an access log forwarding rule to a Classic Load Balancer (CLB) instance.
       *
       * @param request SetAccessLogsDownloadAttributeRequest
       * @return SetAccessLogsDownloadAttributeResponse
       */
      Models::SetAccessLogsDownloadAttributeResponse setAccessLogsDownloadAttribute(const Models::SetAccessLogsDownloadAttributeRequest &request);

      /**
       * @summary Specifies weights for backend servers.
       *
       * @param request SetBackendServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetBackendServersResponse
       */
      Models::SetBackendServersResponse setBackendServersWithOptions(const Models::SetBackendServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies weights for backend servers.
       *
       * @param request SetBackendServersRequest
       * @return SetBackendServersResponse
       */
      Models::SetBackendServersResponse setBackendServers(const Models::SetBackendServersRequest &request);

      /**
       * @summary Specifies a name for a CA certificate.
       *
       * @param request SetCACertificateNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCACertificateNameResponse
       */
      Models::SetCACertificateNameResponse setCACertificateNameWithOptions(const Models::SetCACertificateNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies a name for a CA certificate.
       *
       * @param request SetCACertificateNameRequest
       * @return SetCACertificateNameResponse
       */
      Models::SetCACertificateNameResponse setCACertificateName(const Models::SetCACertificateNameRequest &request);

      /**
       * @summary Replaces the certificate of an additional domain name.
       *
       * @description >  You cannot replace an additional certificate for a listener that is added to a shared-resource Server Load Balancer (SLB) instance.
       *
       * @param request SetDomainExtensionAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDomainExtensionAttributeResponse
       */
      Models::SetDomainExtensionAttributeResponse setDomainExtensionAttributeWithOptions(const Models::SetDomainExtensionAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces the certificate of an additional domain name.
       *
       * @description >  You cannot replace an additional certificate for a listener that is added to a shared-resource Server Load Balancer (SLB) instance.
       *
       * @param request SetDomainExtensionAttributeRequest
       * @return SetDomainExtensionAttributeResponse
       */
      Models::SetDomainExtensionAttributeResponse setDomainExtensionAttribute(const Models::SetDomainExtensionAttributeRequest &request);

      /**
       * @summary Enables or disables the whitelist of a specified listener.
       *
       * @param request SetListenerAccessControlStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetListenerAccessControlStatusResponse
       */
      Models::SetListenerAccessControlStatusResponse setListenerAccessControlStatusWithOptions(const Models::SetListenerAccessControlStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the whitelist of a specified listener.
       *
       * @param request SetListenerAccessControlStatusRequest
       * @return SetListenerAccessControlStatusResponse
       */
      Models::SetListenerAccessControlStatusResponse setListenerAccessControlStatus(const Models::SetListenerAccessControlStatusRequest &request);

      /**
       * @summary Enables or disables deletion protection for an SLB instance.
       *
       * @param request SetLoadBalancerDeleteProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerDeleteProtectionResponse
       */
      Models::SetLoadBalancerDeleteProtectionResponse setLoadBalancerDeleteProtectionWithOptions(const Models::SetLoadBalancerDeleteProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables deletion protection for an SLB instance.
       *
       * @param request SetLoadBalancerDeleteProtectionRequest
       * @return SetLoadBalancerDeleteProtectionResponse
       */
      Models::SetLoadBalancerDeleteProtectionResponse setLoadBalancerDeleteProtection(const Models::SetLoadBalancerDeleteProtectionRequest &request);

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
      Models::SetLoadBalancerHTTPListenerAttributeResponse setLoadBalancerHTTPListenerAttributeWithOptions(const Models::SetLoadBalancerHTTPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::SetLoadBalancerHTTPListenerAttributeResponse setLoadBalancerHTTPListenerAttribute(const Models::SetLoadBalancerHTTPListenerAttributeRequest &request);

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
      Models::SetLoadBalancerHTTPSListenerAttributeResponse setLoadBalancerHTTPSListenerAttributeWithOptions(const Models::SetLoadBalancerHTTPSListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an HTTPS listener.
       *
       * @description *   A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/27577.html).
       * *   An HTTPS listener is created. For more information about how to create an HTTPS listener, see [CreateLoadBalancerHTTPSListener](https://help.aliyun.com/document_detail/27593.html).
       *
       * @param request SetLoadBalancerHTTPSListenerAttributeRequest
       * @return SetLoadBalancerHTTPSListenerAttributeResponse
       */
      Models::SetLoadBalancerHTTPSListenerAttributeResponse setLoadBalancerHTTPSListenerAttribute(const Models::SetLoadBalancerHTTPSListenerAttributeRequest &request);

      /**
       * @summary Modifies the configuration of the configuration read-only mode for a Classic Load Balancer (CLB) instance.
       *
       * @param request SetLoadBalancerModificationProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerModificationProtectionResponse
       */
      Models::SetLoadBalancerModificationProtectionResponse setLoadBalancerModificationProtectionWithOptions(const Models::SetLoadBalancerModificationProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of the configuration read-only mode for a Classic Load Balancer (CLB) instance.
       *
       * @param request SetLoadBalancerModificationProtectionRequest
       * @return SetLoadBalancerModificationProtectionResponse
       */
      Models::SetLoadBalancerModificationProtectionResponse setLoadBalancerModificationProtection(const Models::SetLoadBalancerModificationProtectionRequest &request);

      /**
       * @summary Changes the name of a Classic Load Balancer (CLB) instance.
       *
       * @param request SetLoadBalancerNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerNameResponse
       */
      Models::SetLoadBalancerNameResponse setLoadBalancerNameWithOptions(const Models::SetLoadBalancerNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of a Classic Load Balancer (CLB) instance.
       *
       * @param request SetLoadBalancerNameRequest
       * @return SetLoadBalancerNameResponse
       */
      Models::SetLoadBalancerNameResponse setLoadBalancerName(const Models::SetLoadBalancerNameRequest &request);

      /**
       * @summary Modifies the state of a Classic Load Balancer (CLB) instance.
       *
       * @param request SetLoadBalancerStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerStatusResponse
       */
      Models::SetLoadBalancerStatusResponse setLoadBalancerStatusWithOptions(const Models::SetLoadBalancerStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the state of a Classic Load Balancer (CLB) instance.
       *
       * @param request SetLoadBalancerStatusRequest
       * @return SetLoadBalancerStatusResponse
       */
      Models::SetLoadBalancerStatusResponse setLoadBalancerStatus(const Models::SetLoadBalancerStatusRequest &request);

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
      Models::SetLoadBalancerTCPListenerAttributeResponse setLoadBalancerTCPListenerAttributeWithOptions(const Models::SetLoadBalancerTCPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a TCP listener of Classic Load Balancer (CLB).
       *
       * @description *   A CLB instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/2401685.html).
       * *   A TCP listener is created. For more information, see [CreateLoadBalancerTCPListener](~~CreateLoadBalancerTCPListener~~).
       *
       * @param request SetLoadBalancerTCPListenerAttributeRequest
       * @return SetLoadBalancerTCPListenerAttributeResponse
       */
      Models::SetLoadBalancerTCPListenerAttributeResponse setLoadBalancerTCPListenerAttribute(const Models::SetLoadBalancerTCPListenerAttributeRequest &request);

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
      Models::SetLoadBalancerUDPListenerAttributeResponse setLoadBalancerUDPListenerAttributeWithOptions(const Models::SetLoadBalancerUDPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a UDP listener.
       *
       * @description *   A Classic Load Balancer (CLB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/27577.html).
       * *   A UDP listener is created. For more information, see [CreateLoadBalancerUDPListener](https://help.aliyun.com/document_detail/27595.html).
       *
       * @param request SetLoadBalancerUDPListenerAttributeRequest
       * @return SetLoadBalancerUDPListenerAttributeResponse
       */
      Models::SetLoadBalancerUDPListenerAttributeResponse setLoadBalancerUDPListenerAttribute(const Models::SetLoadBalancerUDPListenerAttributeRequest &request);

      /**
       * @summary Modifies a forwarding rule that is associated with a vServer group.
       *
       * @param request SetRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetRuleResponse
       */
      Models::SetRuleResponse setRuleWithOptions(const Models::SetRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a forwarding rule that is associated with a vServer group.
       *
       * @param request SetRuleRequest
       * @return SetRuleResponse
       */
      Models::SetRuleResponse setRule(const Models::SetRuleRequest &request);

      /**
       * @summary Sets a name for a server certificate.
       *
       * @param request SetServerCertificateNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetServerCertificateNameResponse
       */
      Models::SetServerCertificateNameResponse setServerCertificateNameWithOptions(const Models::SetServerCertificateNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a name for a server certificate.
       *
       * @param request SetServerCertificateNameRequest
       * @return SetServerCertificateNameResponse
       */
      Models::SetServerCertificateNameResponse setServerCertificateName(const Models::SetServerCertificateNameRequest &request);

      /**
       * @summary Configures a Transport Layer Security (TLS) policy.
       *
       * @param request SetTLSCipherPolicyAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetTLSCipherPolicyAttributeResponse
       */
      Models::SetTLSCipherPolicyAttributeResponse setTLSCipherPolicyAttributeWithOptions(const Models::SetTLSCipherPolicyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a Transport Layer Security (TLS) policy.
       *
       * @param request SetTLSCipherPolicyAttributeRequest
       * @return SetTLSCipherPolicyAttributeResponse
       */
      Models::SetTLSCipherPolicyAttributeResponse setTLSCipherPolicyAttribute(const Models::SetTLSCipherPolicyAttributeRequest &request);

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
      Models::SetVServerGroupAttributeResponse setVServerGroupAttributeWithOptions(const Models::SetVServerGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::SetVServerGroupAttributeResponse setVServerGroupAttribute(const Models::SetVServerGroupAttributeRequest &request);

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
      Models::StartLoadBalancerListenerResponse startLoadBalancerListenerWithOptions(const Models::StartLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::StartLoadBalancerListenerResponse startLoadBalancerListener(const Models::StartLoadBalancerListenerRequest &request);

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
      Models::StopLoadBalancerListenerResponse stopLoadBalancerListenerWithOptions(const Models::StopLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::StopLoadBalancerListenerResponse stopLoadBalancerListener(const Models::StopLoadBalancerListenerRequest &request);

      /**
       * @summary Creates tags and adds the tags to resources.
       *
       * @description >  You can add at most 20 tags to each instance. Before you add tags to a resource, Alibaba Cloud checks the number of existing tags of the resource. If the maximum number is reached, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates tags and adds the tags to resources.
       *
       * @description >  You can add at most 20 tags to each instance. Before you add tags to a resource, Alibaba Cloud checks the number of existing tags of the resource. If the maximum number is reached, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from a resource.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from a resource.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Uploads a CA certificate.
       *
       * @description You can upload only one CA certificate at a time. After a CA certificate is uploaded, the certificate ID, name, and fingerprint are returned.
       *
       * @param request UploadCACertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadCACertificateResponse
       */
      Models::UploadCACertificateResponse uploadCACertificateWithOptions(const Models::UploadCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a CA certificate.
       *
       * @description You can upload only one CA certificate at a time. After a CA certificate is uploaded, the certificate ID, name, and fingerprint are returned.
       *
       * @param request UploadCACertificateRequest
       * @return UploadCACertificateResponse
       */
      Models::UploadCACertificateResponse uploadCACertificate(const Models::UploadCACertificateRequest &request);

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
      Models::UploadServerCertificateResponse uploadServerCertificateWithOptions(const Models::UploadServerCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a server certificate.
       *
       * @description *   You can upload only one server certificate and its private key in each call.
       * *   After a server certificate and its private key are uploaded, the fingerprints of all server certificates that belong to your Alibaba Cloud account are returned.
       *
       * @param request UploadServerCertificateRequest
       * @return UploadServerCertificateResponse
       */
      Models::UploadServerCertificateResponse uploadServerCertificate(const Models::UploadServerCertificateRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
