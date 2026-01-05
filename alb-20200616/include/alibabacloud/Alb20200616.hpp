// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ALB20200616_HPP_
#define ALIBABACLOUD_ALB20200616_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Alb20200616Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Alb20200616.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds IP entries to an access control list (ACL).
       *
       * @description *   Each ACL can contain IP addresses or CIDR blocks. Take note of the following limits on ACLs:
       *     *   The maximum number of IP entries that can be added to an ACL with each Alibaba Cloud account at a time: 20
       *     *   The maximum number of IP entries that each ACL can contain: 1,000
       * *   **AddEntriesToAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAclEntries](https://help.aliyun.com/document_detail/213616.html) operation to query the status of the task.
       *     *   If the ACL is in the **Adding** state, the IP entries are being added.
       *     *   If the ACL is in the **Available** state, the IP entries are added.
       *
       * @param request AddEntriesToAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddEntriesToAclResponse
       */
      Models::AddEntriesToAclResponse addEntriesToAclWithOptions(const Models::AddEntriesToAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds IP entries to an access control list (ACL).
       *
       * @description *   Each ACL can contain IP addresses or CIDR blocks. Take note of the following limits on ACLs:
       *     *   The maximum number of IP entries that can be added to an ACL with each Alibaba Cloud account at a time: 20
       *     *   The maximum number of IP entries that each ACL can contain: 1,000
       * *   **AddEntriesToAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAclEntries](https://help.aliyun.com/document_detail/213616.html) operation to query the status of the task.
       *     *   If the ACL is in the **Adding** state, the IP entries are being added.
       *     *   If the ACL is in the **Available** state, the IP entries are added.
       *
       * @param request AddEntriesToAclRequest
       * @return AddEntriesToAclResponse
       */
      Models::AddEntriesToAclResponse addEntriesToAcl(const Models::AddEntriesToAclRequest &request);

      /**
       * @summary Adds backend servers to a server group.
       *
       * @description **AddServersToServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
       * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group.
       * *   If a server group is in the **Configuring** state, it indicates that the server group is being modified.
       * *   If a server group is in the **Available** state, it indicates that the server group is running.
       * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/213628.html) operation to query the status of a backend server.
       * *   If a backend server is in the **Adding** state, it indicates that the backend server is being added to a server group.
       * *   If a backend server is in the **Available** state, it indicates that the server is running.
       *
       * @param request AddServersToServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddServersToServerGroupResponse
       */
      Models::AddServersToServerGroupResponse addServersToServerGroupWithOptions(const Models::AddServersToServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds backend servers to a server group.
       *
       * @description **AddServersToServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
       * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group.
       * *   If a server group is in the **Configuring** state, it indicates that the server group is being modified.
       * *   If a server group is in the **Available** state, it indicates that the server group is running.
       * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/213628.html) operation to query the status of a backend server.
       * *   If a backend server is in the **Adding** state, it indicates that the backend server is being added to a server group.
       * *   If a backend server is in the **Available** state, it indicates that the server is running.
       *
       * @param request AddServersToServerGroupRequest
       * @return AddServersToServerGroupResponse
       */
      Models::AddServersToServerGroupResponse addServersToServerGroup(const Models::AddServersToServerGroupRequest &request);

      /**
       * @summary Applies a health check template to a server group.
       *
       * @param request ApplyHealthCheckTemplateToServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyHealthCheckTemplateToServerGroupResponse
       */
      Models::ApplyHealthCheckTemplateToServerGroupResponse applyHealthCheckTemplateToServerGroupWithOptions(const Models::ApplyHealthCheckTemplateToServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies a health check template to a server group.
       *
       * @param request ApplyHealthCheckTemplateToServerGroupRequest
       * @return ApplyHealthCheckTemplateToServerGroupResponse
       */
      Models::ApplyHealthCheckTemplateToServerGroupResponse applyHealthCheckTemplateToServerGroup(const Models::ApplyHealthCheckTemplateToServerGroupRequest &request);

      /**
       * @summary Associates access control lists (ACLs) with a listener.
       *
       * @description **DeleteDhcpOptionsSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAclRelations](https://help.aliyun.com/document_detail/213618.html) operation to query the status of the task.
       * *   If an ACL is in the **Associating** state, the ACL is being associated with a listener.
       * *   If an ACL is in the **Associated** state, the ACL is associated with a listener.
       *
       * @param request AssociateAclsWithListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateAclsWithListenerResponse
       */
      Models::AssociateAclsWithListenerResponse associateAclsWithListenerWithOptions(const Models::AssociateAclsWithListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates access control lists (ACLs) with a listener.
       *
       * @description **DeleteDhcpOptionsSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAclRelations](https://help.aliyun.com/document_detail/213618.html) operation to query the status of the task.
       * *   If an ACL is in the **Associating** state, the ACL is being associated with a listener.
       * *   If an ACL is in the **Associated** state, the ACL is associated with a listener.
       *
       * @param request AssociateAclsWithListenerRequest
       * @return AssociateAclsWithListenerResponse
       */
      Models::AssociateAclsWithListenerResponse associateAclsWithListener(const Models::AssociateAclsWithListenerRequest &request);

      /**
       * @summary Associates additional certificates with a listener.
       *
       * @description **AssociateAdditionalCertificatesWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) operation to query the status of the task:
       * *   If the HTTPS or QUIC listener is in the **Associating** state, the additional certificates are being associated.
       * *   If the HTTPS or QUIC listener is in the **Associated** state, the additional certificates are associated.
       *
       * @param request AssociateAdditionalCertificatesWithListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateAdditionalCertificatesWithListenerResponse
       */
      Models::AssociateAdditionalCertificatesWithListenerResponse associateAdditionalCertificatesWithListenerWithOptions(const Models::AssociateAdditionalCertificatesWithListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates additional certificates with a listener.
       *
       * @description **AssociateAdditionalCertificatesWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) operation to query the status of the task:
       * *   If the HTTPS or QUIC listener is in the **Associating** state, the additional certificates are being associated.
       * *   If the HTTPS or QUIC listener is in the **Associated** state, the additional certificates are associated.
       *
       * @param request AssociateAdditionalCertificatesWithListenerRequest
       * @return AssociateAdditionalCertificatesWithListenerResponse
       */
      Models::AssociateAdditionalCertificatesWithListenerResponse associateAdditionalCertificatesWithListener(const Models::AssociateAdditionalCertificatesWithListenerRequest &request);

      /**
       * @summary Associates an EIP bandwidth plan with an Application Load Balancer (ALB) instance.
       *
       * @description **AttachCommonBandwidthPackageToLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
       * *   If the ALB instance is in the **Configuring** state, the EIP bandwidth plan is being associated with the ALB instance.
       * *   If the ALB instance is in the **Active** state, the EIP bandwidth plan is associated with the ALB instance.
       *
       * @param request AttachCommonBandwidthPackageToLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachCommonBandwidthPackageToLoadBalancerResponse
       */
      Models::AttachCommonBandwidthPackageToLoadBalancerResponse attachCommonBandwidthPackageToLoadBalancerWithOptions(const Models::AttachCommonBandwidthPackageToLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an EIP bandwidth plan with an Application Load Balancer (ALB) instance.
       *
       * @description **AttachCommonBandwidthPackageToLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
       * *   If the ALB instance is in the **Configuring** state, the EIP bandwidth plan is being associated with the ALB instance.
       * *   If the ALB instance is in the **Active** state, the EIP bandwidth plan is associated with the ALB instance.
       *
       * @param request AttachCommonBandwidthPackageToLoadBalancerRequest
       * @return AttachCommonBandwidthPackageToLoadBalancerResponse
       */
      Models::AttachCommonBandwidthPackageToLoadBalancerResponse attachCommonBandwidthPackageToLoadBalancer(const Models::AttachCommonBandwidthPackageToLoadBalancerRequest &request);

      /**
       * @summary Adds the elastic IP address (EIP) and virtual IP address (VIP) of a zone to a DNS record.
       *
       * @description This operation is supported only by Application Load Balancer (ALB) instances that use static IP addresses. Before you call this operation, you must call the StartShiftLoadBalancerZones operation to remove the zone from the ALB instance.
       *
       * @param request CancelShiftLoadBalancerZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelShiftLoadBalancerZonesResponse
       */
      Models::CancelShiftLoadBalancerZonesResponse cancelShiftLoadBalancerZonesWithOptions(const Models::CancelShiftLoadBalancerZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds the elastic IP address (EIP) and virtual IP address (VIP) of a zone to a DNS record.
       *
       * @description This operation is supported only by Application Load Balancer (ALB) instances that use static IP addresses. Before you call this operation, you must call the StartShiftLoadBalancerZones operation to remove the zone from the ALB instance.
       *
       * @param request CancelShiftLoadBalancerZonesRequest
       * @return CancelShiftLoadBalancerZonesResponse
       */
      Models::CancelShiftLoadBalancerZonesResponse cancelShiftLoadBalancerZones(const Models::CancelShiftLoadBalancerZonesRequest &request);

      /**
       * @summary Creates AScript rules.
       *
       * @description ### [](#)Prerequisites
       * *   A standard or WAF-enabled Application Load Balancer (ALB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html).
       * ### [](#)Usage notes
       * **CreateAScripts** an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAScripts](https://help.aliyun.com/document_detail/472574.html) operation to query the status of a script.
       * *   If the script is in the **Creating** state, the script is being created.
       * *   If the script is in the **Available**, the script is created.
       *
       * @param request CreateAScriptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAScriptsResponse
       */
      Models::CreateAScriptsResponse createAScriptsWithOptions(const Models::CreateAScriptsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates AScript rules.
       *
       * @description ### [](#)Prerequisites
       * *   A standard or WAF-enabled Application Load Balancer (ALB) instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html).
       * ### [](#)Usage notes
       * **CreateAScripts** an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAScripts](https://help.aliyun.com/document_detail/472574.html) operation to query the status of a script.
       * *   If the script is in the **Creating** state, the script is being created.
       * *   If the script is in the **Available**, the script is created.
       *
       * @param request CreateAScriptsRequest
       * @return CreateAScriptsResponse
       */
      Models::CreateAScriptsResponse createAScripts(const Models::CreateAScriptsRequest &request);

      /**
       * @summary Creates an access control list (ACL) in a region.
       *
       * @description ## Usage notes
       * The **CreateAcl** operation is asynchronous. After you send a request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [ListAcls](https://help.aliyun.com/document_detail/213617.html) operation to query the status of an ACL:
       * *   If an ACL is in the **Creating** state, the ACL is being created.
       * *   If an ACL is in the **Available** state, the ACL is created.
       *
       * @param request CreateAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAclResponse
       */
      Models::CreateAclResponse createAclWithOptions(const Models::CreateAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access control list (ACL) in a region.
       *
       * @description ## Usage notes
       * The **CreateAcl** operation is asynchronous. After you send a request, the system returns a request ID. However, the operation is still being performed in the system background. You can call the [ListAcls](https://help.aliyun.com/document_detail/213617.html) operation to query the status of an ACL:
       * *   If an ACL is in the **Creating** state, the ACL is being created.
       * *   If an ACL is in the **Available** state, the ACL is created.
       *
       * @param request CreateAclRequest
       * @return CreateAclResponse
       */
      Models::CreateAclResponse createAcl(const Models::CreateAclRequest &request);

      /**
       * @summary Creates a health check template in a region.
       *
       * @param request CreateHealthCheckTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHealthCheckTemplateResponse
       */
      Models::CreateHealthCheckTemplateResponse createHealthCheckTemplateWithOptions(const Models::CreateHealthCheckTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a health check template in a region.
       *
       * @param request CreateHealthCheckTemplateRequest
       * @return CreateHealthCheckTemplateResponse
       */
      Models::CreateHealthCheckTemplateResponse createHealthCheckTemplate(const Models::CreateHealthCheckTemplateRequest &request);

      /**
       * @summary Creates a listener.
       *
       * @description ## Usage notes
       * **CreateListener** is an asynchronous operation. After you call this operation, the system returns a request ID. However, the operation is still being performed in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/214353.html) operation to query the status of the HTTP, HTTPS, or QUIC listener.
       * *   If the HTTP, HTTPS, or QUIC listener is in the **Provisioning** state, it indicates that the listener is being created.
       * *   If the HTTP, HTTPS, or QUIC listener is in the **Running** state, it indicates that the listener has been created successfully.
       *
       * @param request CreateListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateListenerResponse
       */
      Models::CreateListenerResponse createListenerWithOptions(const Models::CreateListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a listener.
       *
       * @description ## Usage notes
       * **CreateListener** is an asynchronous operation. After you call this operation, the system returns a request ID. However, the operation is still being performed in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/214353.html) operation to query the status of the HTTP, HTTPS, or QUIC listener.
       * *   If the HTTP, HTTPS, or QUIC listener is in the **Provisioning** state, it indicates that the listener is being created.
       * *   If the HTTP, HTTPS, or QUIC listener is in the **Running** state, it indicates that the listener has been created successfully.
       *
       * @param request CreateListenerRequest
       * @return CreateListenerResponse
       */
      Models::CreateListenerResponse createListener(const Models::CreateListenerRequest &request);

      /**
       * @summary Creates an Application Load Balancer (ALB) instance in a region.
       *
       * @description **CreateLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of an ALB instance.
       * *   If an ALB instance is in the **Provisioning** state, it indicates that the ALB instance is being created.
       * *   If an ALB instance is in the **Active** state, it indicates that the ALB instance is created.
       *
       * @param request CreateLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancerWithOptions(const Models::CreateLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Application Load Balancer (ALB) instance in a region.
       *
       * @description **CreateLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of an ALB instance.
       * *   If an ALB instance is in the **Provisioning** state, it indicates that the ALB instance is being created.
       * *   If an ALB instance is in the **Active** state, it indicates that the ALB instance is created.
       *
       * @param request CreateLoadBalancerRequest
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancer(const Models::CreateLoadBalancerRequest &request);

      /**
       * @summary Creates a forwarding rule for a listener.
       *
       * @description Take note of the following limits:
       * *   When you configure the **Redirect** action, you can use the default value only for the **HttpCode** parameter. Do not use the default values for the other parameters.
       * *   If you specify the **Rewrite** action together with other actions in a forwarding rule, make sure that the **ForwardGroup** action is specified.
       * *   **CreateRule** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of a forwarding rule.
       *     *   If a forwarding rule is in the **Provisioning** state, the forwarding rule is being created.
       *     *   If a forwarding rule is in the **Available** state, the forwarding rule is created.
       * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. The limits on conditions and actions are:
       *     *   Limits on conditions: 5 for a basic Application Load Balancer (ALB) instance, 10 for a standard ALB instance, and 10 for a WAF-enabled ALB instance.
       *     *   Limits on actions: 3 for a basic ALB instance, 5 for a standard ALB instance, and 5 for a WAF-enabled ALB instance.
       *
       * @param request CreateRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRuleResponse
       */
      Models::CreateRuleResponse createRuleWithOptions(const Models::CreateRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a forwarding rule for a listener.
       *
       * @description Take note of the following limits:
       * *   When you configure the **Redirect** action, you can use the default value only for the **HttpCode** parameter. Do not use the default values for the other parameters.
       * *   If you specify the **Rewrite** action together with other actions in a forwarding rule, make sure that the **ForwardGroup** action is specified.
       * *   **CreateRule** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of a forwarding rule.
       *     *   If a forwarding rule is in the **Provisioning** state, the forwarding rule is being created.
       *     *   If a forwarding rule is in the **Available** state, the forwarding rule is created.
       * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. The limits on conditions and actions are:
       *     *   Limits on conditions: 5 for a basic Application Load Balancer (ALB) instance, 10 for a standard ALB instance, and 10 for a WAF-enabled ALB instance.
       *     *   Limits on actions: 3 for a basic ALB instance, 5 for a standard ALB instance, and 5 for a WAF-enabled ALB instance.
       *
       * @param request CreateRuleRequest
       * @return CreateRuleResponse
       */
      Models::CreateRuleResponse createRule(const Models::CreateRuleRequest &request);

      /**
       * @summary Creates multiple forwarding rules at a time.
       *
       * @description When you call this operation, take note of the following limits:
       * *   When you configure the **Redirect** action, do not use the default values for parameters other than **HttpCode**.
       * *   If you specify multiple actions in a forward rule, you must specify the **ForwardGroup** parameter along with the **Rewrite** parameter.
       * *   **CreateRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of the forwarding rules.
       *     *   If the forwarding rules are in the **Provisioning** state, the forwarding rules are being created.
       *     *   If the forwarding rules are in the **Available** state, the forwarding rules are created.
       * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. Take note of the following limits on the number of conditions and the number of actions in each forwarding rule:
       *     *   Conditions: 5 for each basic ALB instance, 10 for each standard ALB instance, and 10 for each WAF-enabled ALB instance.
       *     *   Actions: 3 for each basic ALB instance, 5 for each standard ALB instance, and 5 for each WAF-enabled ALB instance.
       *
       * @param request CreateRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRulesResponse
       */
      Models::CreateRulesResponse createRulesWithOptions(const Models::CreateRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates multiple forwarding rules at a time.
       *
       * @description When you call this operation, take note of the following limits:
       * *   When you configure the **Redirect** action, do not use the default values for parameters other than **HttpCode**.
       * *   If you specify multiple actions in a forward rule, you must specify the **ForwardGroup** parameter along with the **Rewrite** parameter.
       * *   **CreateRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of the forwarding rules.
       *     *   If the forwarding rules are in the **Provisioning** state, the forwarding rules are being created.
       *     *   If the forwarding rules are in the **Available** state, the forwarding rules are created.
       * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. Take note of the following limits on the number of conditions and the number of actions in each forwarding rule:
       *     *   Conditions: 5 for each basic ALB instance, 10 for each standard ALB instance, and 10 for each WAF-enabled ALB instance.
       *     *   Actions: 3 for each basic ALB instance, 5 for each standard ALB instance, and 5 for each WAF-enabled ALB instance.
       *
       * @param request CreateRulesRequest
       * @return CreateRulesResponse
       */
      Models::CreateRulesResponse createRules(const Models::CreateRulesRequest &request);

      /**
       * @summary Creates a custom security policy in a region.
       *
       * @param request CreateSecurityPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityPolicyResponse
       */
      Models::CreateSecurityPolicyResponse createSecurityPolicyWithOptions(const Models::CreateSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom security policy in a region.
       *
       * @param request CreateSecurityPolicyRequest
       * @return CreateSecurityPolicyResponse
       */
      Models::CreateSecurityPolicyResponse createSecurityPolicy(const Models::CreateSecurityPolicyRequest &request);

      /**
       * @summary Creates a server group in a region.
       *
       * @description **CreateServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) to query the status of a server group.
       * *   If a server group is in the **Creating** state, it indicates that the server group is being created.
       * *   If a server group is in the **Available** state, it indicates that the server group is created.
       *
       * @param request CreateServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServerGroupResponse
       */
      Models::CreateServerGroupResponse createServerGroupWithOptions(const Models::CreateServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a server group in a region.
       *
       * @description **CreateServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) to query the status of a server group.
       * *   If a server group is in the **Creating** state, it indicates that the server group is being created.
       * *   If a server group is in the **Available** state, it indicates that the server group is created.
       *
       * @param request CreateServerGroupRequest
       * @return CreateServerGroupResponse
       */
      Models::CreateServerGroupResponse createServerGroup(const Models::CreateServerGroupRequest &request);

      /**
       * @summary Deletes AScript rules.
       *
       * @description **DeleteAScripts** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAScripts](https://help.aliyun.com/document_detail/472574.html) operation to query the status of the task:
       * *   If an AScript rule is in the **Deleting** state, the AScript rule is being deleted.
       * *   If an AScript rule cannot be found, the AScript rule is deleted.
       *
       * @param request DeleteAScriptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAScriptsResponse
       */
      Models::DeleteAScriptsResponse deleteAScriptsWithOptions(const Models::DeleteAScriptsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes AScript rules.
       *
       * @description **DeleteAScripts** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAScripts](https://help.aliyun.com/document_detail/472574.html) operation to query the status of the task:
       * *   If an AScript rule is in the **Deleting** state, the AScript rule is being deleted.
       * *   If an AScript rule cannot be found, the AScript rule is deleted.
       *
       * @param request DeleteAScriptsRequest
       * @return DeleteAScriptsResponse
       */
      Models::DeleteAScriptsResponse deleteAScripts(const Models::DeleteAScriptsRequest &request);

      /**
       * @summary Deletes an access control list (ACL).
       *
       * @description **DeleteAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAcls](https://help.aliyun.com/document_detail/213617.html) operation to query the status of the task.
       * *   If the ACL is in the **Deleting** state, the ACL is being deleted.
       * *   If the ACL cannot be found, the ACL is deleted.
       *
       * @param request DeleteAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAclResponse
       */
      Models::DeleteAclResponse deleteAclWithOptions(const Models::DeleteAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access control list (ACL).
       *
       * @description **DeleteAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAcls](https://help.aliyun.com/document_detail/213617.html) operation to query the status of the task.
       * *   If the ACL is in the **Deleting** state, the ACL is being deleted.
       * *   If the ACL cannot be found, the ACL is deleted.
       *
       * @param request DeleteAclRequest
       * @return DeleteAclResponse
       */
      Models::DeleteAclResponse deleteAcl(const Models::DeleteAclRequest &request);

      /**
       * @summary Deletes health check templates.
       *
       * @param request DeleteHealthCheckTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHealthCheckTemplatesResponse
       */
      Models::DeleteHealthCheckTemplatesResponse deleteHealthCheckTemplatesWithOptions(const Models::DeleteHealthCheckTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes health check templates.
       *
       * @param request DeleteHealthCheckTemplatesRequest
       * @return DeleteHealthCheckTemplatesResponse
       */
      Models::DeleteHealthCheckTemplatesResponse deleteHealthCheckTemplates(const Models::DeleteHealthCheckTemplatesRequest &request);

      /**
       * @summary Deletes a listener.
       *
       * @description **DeleteListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) to query the status of the task.
       * *   If the listener is in the **Deleting** state, the listener is being deleted.
       * *   If the listener cannot be found, the listener is deleted.
       *
       * @param request DeleteListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteListenerResponse
       */
      Models::DeleteListenerResponse deleteListenerWithOptions(const Models::DeleteListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a listener.
       *
       * @description **DeleteListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) to query the status of the task.
       * *   If the listener is in the **Deleting** state, the listener is being deleted.
       * *   If the listener cannot be found, the listener is deleted.
       *
       * @param request DeleteListenerRequest
       * @return DeleteListenerResponse
       */
      Models::DeleteListenerResponse deleteListener(const Models::DeleteListenerRequest &request);

      /**
       * @summary Deletes an Application Load Balancer (ALB) instance.
       *
       * @description **DeleteLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
       * *   If an ALB instance is in the **Deleting** state, the ALB instance is being deleted.
       * *   If an ALB instance cannot be found, the ALB instance is deleted.
       *
       * @param request DeleteLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLoadBalancerResponse
       */
      Models::DeleteLoadBalancerResponse deleteLoadBalancerWithOptions(const Models::DeleteLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Application Load Balancer (ALB) instance.
       *
       * @description **DeleteLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
       * *   If an ALB instance is in the **Deleting** state, the ALB instance is being deleted.
       * *   If an ALB instance cannot be found, the ALB instance is deleted.
       *
       * @param request DeleteLoadBalancerRequest
       * @return DeleteLoadBalancerResponse
       */
      Models::DeleteLoadBalancerResponse deleteLoadBalancer(const Models::DeleteLoadBalancerRequest &request);

      /**
       * @summary Deletes a forwarding rule.
       *
       * @description **DeleteRule** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of a forwarding rule:
       * *   If the forwarding rule is in the **Deleting** state, the forwarding rule is being deleted.
       * *   If the forwarding rule cannot be found, the forwarding rule is deleted.
       *
       * @param request DeleteRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRuleWithOptions(const Models::DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a forwarding rule.
       *
       * @description **DeleteRule** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of a forwarding rule:
       * *   If the forwarding rule is in the **Deleting** state, the forwarding rule is being deleted.
       * *   If the forwarding rule cannot be found, the forwarding rule is deleted.
       *
       * @param request DeleteRuleRequest
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRule(const Models::DeleteRuleRequest &request);

      /**
       * @summary Deletes one or more forwarding rules from a listener at a time.
       *
       * @description **DeleteRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of forwarding rules.
       * *   If the forwarding rules are in the **Deleting** state, the forwarding rules are being deleted.
       * *   If the forwarding rules cannot be found, the forwarding rules are deleted.
       *
       * @param request DeleteRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRulesResponse
       */
      Models::DeleteRulesResponse deleteRulesWithOptions(const Models::DeleteRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more forwarding rules from a listener at a time.
       *
       * @description **DeleteRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of forwarding rules.
       * *   If the forwarding rules are in the **Deleting** state, the forwarding rules are being deleted.
       * *   If the forwarding rules cannot be found, the forwarding rules are deleted.
       *
       * @param request DeleteRulesRequest
       * @return DeleteRulesResponse
       */
      Models::DeleteRulesResponse deleteRules(const Models::DeleteRulesRequest &request);

      /**
       * @summary Deletes a custom security policy.
       *
       * @param request DeleteSecurityPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityPolicyResponse
       */
      Models::DeleteSecurityPolicyResponse deleteSecurityPolicyWithOptions(const Models::DeleteSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom security policy.
       *
       * @param request DeleteSecurityPolicyRequest
       * @return DeleteSecurityPolicyResponse
       */
      Models::DeleteSecurityPolicyResponse deleteSecurityPolicy(const Models::DeleteSecurityPolicyRequest &request);

      /**
       * @summary Deletes a server group.
       *
       * @description **DeleteServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of the task.
       * *   If a server group is in the **Deleting** state, it indicates that the server group is being deleted.
       * *   If a specified server group cannot be found, it indicates that the server group has been deleted.
       *
       * @param request DeleteServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServerGroupResponse
       */
      Models::DeleteServerGroupResponse deleteServerGroupWithOptions(const Models::DeleteServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a server group.
       *
       * @description **DeleteServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of the task.
       * *   If a server group is in the **Deleting** state, it indicates that the server group is being deleted.
       * *   If a specified server group cannot be found, it indicates that the server group has been deleted.
       *
       * @param request DeleteServerGroupRequest
       * @return DeleteServerGroupResponse
       */
      Models::DeleteServerGroupResponse deleteServerGroup(const Models::DeleteServerGroupRequest &request);

      /**
       * @summary 查询资源预留
       *
       * @param request DescribeCapacityReservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCapacityReservationResponse
       */
      Models::DescribeCapacityReservationResponse describeCapacityReservationWithOptions(const Models::DescribeCapacityReservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资源预留
       *
       * @param request DescribeCapacityReservationRequest
       * @return DescribeCapacityReservationResponse
       */
      Models::DescribeCapacityReservationResponse describeCapacityReservation(const Models::DescribeCapacityReservationRequest &request);

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
       * @summary Queries zones in a region.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries zones in a region.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Disassociates an elastic IP address (EIP) bandwidth plan from an Application Load Balancer (ALB) instance.
       *
       * @description **DetachCommonBandwidthPackageFromLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214359.html) operation to query the status of the task.
       * *   If an ALB instance is in the **Configuring** state, the EIP bandwidth plan is being disassociated from the ALB instance.
       * *   If an ALB instance is in the **Active** state, the EIP bandwidth plan is disassociated from the ALB instance.
       *
       * @param request DetachCommonBandwidthPackageFromLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachCommonBandwidthPackageFromLoadBalancerResponse
       */
      Models::DetachCommonBandwidthPackageFromLoadBalancerResponse detachCommonBandwidthPackageFromLoadBalancerWithOptions(const Models::DetachCommonBandwidthPackageFromLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates an elastic IP address (EIP) bandwidth plan from an Application Load Balancer (ALB) instance.
       *
       * @description **DetachCommonBandwidthPackageFromLoadBalancer** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214359.html) operation to query the status of the task.
       * *   If an ALB instance is in the **Configuring** state, the EIP bandwidth plan is being disassociated from the ALB instance.
       * *   If an ALB instance is in the **Active** state, the EIP bandwidth plan is disassociated from the ALB instance.
       *
       * @param request DetachCommonBandwidthPackageFromLoadBalancerRequest
       * @return DetachCommonBandwidthPackageFromLoadBalancerResponse
       */
      Models::DetachCommonBandwidthPackageFromLoadBalancerResponse detachCommonBandwidthPackageFromLoadBalancer(const Models::DetachCommonBandwidthPackageFromLoadBalancerRequest &request);

      /**
       * @summary Disables deletion protection for an Application Load Balancer (ALB) instance.
       *
       * @param request DisableDeletionProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDeletionProtectionResponse
       */
      Models::DisableDeletionProtectionResponse disableDeletionProtectionWithOptions(const Models::DisableDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables deletion protection for an Application Load Balancer (ALB) instance.
       *
       * @param request DisableDeletionProtectionRequest
       * @return DisableDeletionProtectionResponse
       */
      Models::DisableDeletionProtectionResponse disableDeletionProtection(const Models::DisableDeletionProtectionRequest &request);

      /**
       * @summary Disables the access log feature for a Server Load Balancer (SLB) instance.
       *
       * @param request DisableLoadBalancerAccessLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableLoadBalancerAccessLogResponse
       */
      Models::DisableLoadBalancerAccessLogResponse disableLoadBalancerAccessLogWithOptions(const Models::DisableLoadBalancerAccessLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the access log feature for a Server Load Balancer (SLB) instance.
       *
       * @param request DisableLoadBalancerAccessLogRequest
       * @return DisableLoadBalancerAccessLogResponse
       */
      Models::DisableLoadBalancerAccessLogResponse disableLoadBalancerAccessLog(const Models::DisableLoadBalancerAccessLogRequest &request);

      /**
       * @summary Changes the type of the IPv6 address that is used by a dual-stack Application Load Balancer (ALB) instance from public to private.
       *
       * @description ### Prerequisites
       * An ALB instance is created and IPv4/IPv6 dual stack is enabled for the instance. You can call the [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html) operation and set **AddressIpVersion** to **DualStack** to create a dual-stack ALB instance.
       * > If you set **AddressIpVersion** to **DualStack**:
       * *   If you set **AddressType** to **Internet**, the ALB instance uses a public IPv4 IP address and a private IPv6 address.
       * *   If you set **AddressType** to **Intranet**, the ALB instance uses a private IPv4 IP address and a private IPv6 address.
       * ### Description
       * *   After the DisableLoadBalancerIpv6Internet operation is called, the value of **Ipv6AddressType** is changed to **Intranet** and the type of the IPv6 address of the ALB instance is changed from public to private. If you upgrade the instance or the instance scales elastic network interfaces (ENIs) along with workloads, private IPv6 addresses are automatically enabled for the instance and the new ENIs. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the value of **Ipv6AddressType**.
       * *   **DisableLoadBalancerIpv6Internet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of the task.
       *     *   If the ALB instance is in the **Configuring** state, the network type of the IPv6 address that is used by the ALB instance is being changed.
       *     *   If the ALB instance is in the **Active** state, the network type of the IPv6 address that is used by the ALB instance is changed.
       *
       * @param request DisableLoadBalancerIpv6InternetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableLoadBalancerIpv6InternetResponse
       */
      Models::DisableLoadBalancerIpv6InternetResponse disableLoadBalancerIpv6InternetWithOptions(const Models::DisableLoadBalancerIpv6InternetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the type of the IPv6 address that is used by a dual-stack Application Load Balancer (ALB) instance from public to private.
       *
       * @description ### Prerequisites
       * An ALB instance is created and IPv4/IPv6 dual stack is enabled for the instance. You can call the [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html) operation and set **AddressIpVersion** to **DualStack** to create a dual-stack ALB instance.
       * > If you set **AddressIpVersion** to **DualStack**:
       * *   If you set **AddressType** to **Internet**, the ALB instance uses a public IPv4 IP address and a private IPv6 address.
       * *   If you set **AddressType** to **Intranet**, the ALB instance uses a private IPv4 IP address and a private IPv6 address.
       * ### Description
       * *   After the DisableLoadBalancerIpv6Internet operation is called, the value of **Ipv6AddressType** is changed to **Intranet** and the type of the IPv6 address of the ALB instance is changed from public to private. If you upgrade the instance or the instance scales elastic network interfaces (ENIs) along with workloads, private IPv6 addresses are automatically enabled for the instance and the new ENIs. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the value of **Ipv6AddressType**.
       * *   **DisableLoadBalancerIpv6Internet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of the task.
       *     *   If the ALB instance is in the **Configuring** state, the network type of the IPv6 address that is used by the ALB instance is being changed.
       *     *   If the ALB instance is in the **Active** state, the network type of the IPv6 address that is used by the ALB instance is changed.
       *
       * @param request DisableLoadBalancerIpv6InternetRequest
       * @return DisableLoadBalancerIpv6InternetResponse
       */
      Models::DisableLoadBalancerIpv6InternetResponse disableLoadBalancerIpv6Internet(const Models::DisableLoadBalancerIpv6InternetRequest &request);

      /**
       * @summary Disassociates access control lists (ACLs) from a listener.
       *
       * @description **DissociateAclsFromListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListAclRelations](https://help.aliyun.com/document_detail/213618.html) to query the status of an ACL.
       * *   If an ACL is in the **Dissociating** state, the ACL is being disassociated from the listener.
       * *   If an ACL is in the **Dissociated** state, the ACL is disassociated from the listener.
       *
       * @param request DissociateAclsFromListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateAclsFromListenerResponse
       */
      Models::DissociateAclsFromListenerResponse dissociateAclsFromListenerWithOptions(const Models::DissociateAclsFromListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates access control lists (ACLs) from a listener.
       *
       * @description **DissociateAclsFromListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListAclRelations](https://help.aliyun.com/document_detail/213618.html) to query the status of an ACL.
       * *   If an ACL is in the **Dissociating** state, the ACL is being disassociated from the listener.
       * *   If an ACL is in the **Dissociated** state, the ACL is disassociated from the listener.
       *
       * @param request DissociateAclsFromListenerRequest
       * @return DissociateAclsFromListenerResponse
       */
      Models::DissociateAclsFromListenerResponse dissociateAclsFromListener(const Models::DissociateAclsFromListenerRequest &request);

      /**
       * @summary Disassociates additional certificates from a listener.
       *
       * @description **DissociateAdditionalCertificatesFromListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListListenerCertificates](https://help.aliyun.com/document_detail/214354.html) operation to query the status of the task. - If an additional certificate is in the **Dissociating** state, the additional certificate is being disassociated. - If an additional certificate is in the **Dissociated** state, the additional certificate is disassociated.
       *
       * @param request DissociateAdditionalCertificatesFromListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateAdditionalCertificatesFromListenerResponse
       */
      Models::DissociateAdditionalCertificatesFromListenerResponse dissociateAdditionalCertificatesFromListenerWithOptions(const Models::DissociateAdditionalCertificatesFromListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates additional certificates from a listener.
       *
       * @description **DissociateAdditionalCertificatesFromListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListListenerCertificates](https://help.aliyun.com/document_detail/214354.html) operation to query the status of the task. - If an additional certificate is in the **Dissociating** state, the additional certificate is being disassociated. - If an additional certificate is in the **Dissociated** state, the additional certificate is disassociated.
       *
       * @param request DissociateAdditionalCertificatesFromListenerRequest
       * @return DissociateAdditionalCertificatesFromListenerResponse
       */
      Models::DissociateAdditionalCertificatesFromListenerResponse dissociateAdditionalCertificatesFromListener(const Models::DissociateAdditionalCertificatesFromListenerRequest &request);

      /**
       * @summary Enables deletion protection for a resource.
       *
       * @param request EnableDeletionProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDeletionProtectionResponse
       */
      Models::EnableDeletionProtectionResponse enableDeletionProtectionWithOptions(const Models::EnableDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables deletion protection for a resource.
       *
       * @param request EnableDeletionProtectionRequest
       * @return EnableDeletionProtectionResponse
       */
      Models::EnableDeletionProtectionResponse enableDeletionProtection(const Models::EnableDeletionProtectionRequest &request);

      /**
       * @summary Enables the access log feature for an Application Load Balancer (ALB) instance.
       *
       * @param request EnableLoadBalancerAccessLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableLoadBalancerAccessLogResponse
       */
      Models::EnableLoadBalancerAccessLogResponse enableLoadBalancerAccessLogWithOptions(const Models::EnableLoadBalancerAccessLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the access log feature for an Application Load Balancer (ALB) instance.
       *
       * @param request EnableLoadBalancerAccessLogRequest
       * @return EnableLoadBalancerAccessLogResponse
       */
      Models::EnableLoadBalancerAccessLogResponse enableLoadBalancerAccessLog(const Models::EnableLoadBalancerAccessLogRequest &request);

      /**
       * @summary Changes the type of the IPv6 address that is used by a dual-stack Application Load Balancer (ALB) instance from private to public.
       *
       * @description ### Prerequisites
       * An ALB instance is created and IPv4/IPv6 dual stack is enabled for the instance. You can call the [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html) operation and set **AddressIpVersion** to **DualStack** to create a dual-stack ALB instance.
       * > If you set **AddressIpVersion** to **DualStack**:
       * *   If you set **AddressType** to **Internet**, the ALB instance uses a public IPv4 IP address and a private IPv6 address.
       * *   If you set **AddressType** to **Intranet**, the ALB instance uses a private IPv4 IP address and a private IPv6 address.
       * ### Description
       * *   After the EnableLoadBalancerIpv6Internet operation is called, the value of **Ipv6AddressType** is changed to **Internet** and the type of the IPv6 address of the ALB instance is changed from private to public. If you upgrade the instance or the instance scales elastic network interfaces (ENIs) along with workloads, public IPv6 addresses are automatically enabled for the instance and the new ENIs. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the value of **Ipv6AddressType**.
       * *   **EnableLoadBalancerIpv6Internet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of the task.
       *     *   If the ALB instance is in the **Configuring** state, the network type of the IPv6 address that is used by the ALB instance is being changed.
       *     *   If the ALB instance is in the **Active** state, the network type of the IPv6 address that is used by the ALB instance is changed.
       *
       * @param request EnableLoadBalancerIpv6InternetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableLoadBalancerIpv6InternetResponse
       */
      Models::EnableLoadBalancerIpv6InternetResponse enableLoadBalancerIpv6InternetWithOptions(const Models::EnableLoadBalancerIpv6InternetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the type of the IPv6 address that is used by a dual-stack Application Load Balancer (ALB) instance from private to public.
       *
       * @description ### Prerequisites
       * An ALB instance is created and IPv4/IPv6 dual stack is enabled for the instance. You can call the [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html) operation and set **AddressIpVersion** to **DualStack** to create a dual-stack ALB instance.
       * > If you set **AddressIpVersion** to **DualStack**:
       * *   If you set **AddressType** to **Internet**, the ALB instance uses a public IPv4 IP address and a private IPv6 address.
       * *   If you set **AddressType** to **Intranet**, the ALB instance uses a private IPv4 IP address and a private IPv6 address.
       * ### Description
       * *   After the EnableLoadBalancerIpv6Internet operation is called, the value of **Ipv6AddressType** is changed to **Internet** and the type of the IPv6 address of the ALB instance is changed from private to public. If you upgrade the instance or the instance scales elastic network interfaces (ENIs) along with workloads, public IPv6 addresses are automatically enabled for the instance and the new ENIs. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the value of **Ipv6AddressType**.
       * *   **EnableLoadBalancerIpv6Internet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of the task.
       *     *   If the ALB instance is in the **Configuring** state, the network type of the IPv6 address that is used by the ALB instance is being changed.
       *     *   If the ALB instance is in the **Active** state, the network type of the IPv6 address that is used by the ALB instance is changed.
       *
       * @param request EnableLoadBalancerIpv6InternetRequest
       * @return EnableLoadBalancerIpv6InternetResponse
       */
      Models::EnableLoadBalancerIpv6InternetResponse enableLoadBalancerIpv6Internet(const Models::EnableLoadBalancerIpv6InternetRequest &request);

      /**
       * @summary Queries the details about a health check template.
       *
       * @param request GetHealthCheckTemplateAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHealthCheckTemplateAttributeResponse
       */
      Models::GetHealthCheckTemplateAttributeResponse getHealthCheckTemplateAttributeWithOptions(const Models::GetHealthCheckTemplateAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a health check template.
       *
       * @param request GetHealthCheckTemplateAttributeRequest
       * @return GetHealthCheckTemplateAttributeResponse
       */
      Models::GetHealthCheckTemplateAttributeResponse getHealthCheckTemplateAttribute(const Models::GetHealthCheckTemplateAttributeRequest &request);

      /**
       * @summary Queries the details about a listener.
       *
       * @param request GetListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetListenerAttributeResponse
       */
      Models::GetListenerAttributeResponse getListenerAttributeWithOptions(const Models::GetListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a listener.
       *
       * @param request GetListenerAttributeRequest
       * @return GetListenerAttributeResponse
       */
      Models::GetListenerAttributeResponse getListenerAttribute(const Models::GetListenerAttributeRequest &request);

      /**
       * @summary Queries the health check status of a listener and its forwarding rules.
       *
       * @param request GetListenerHealthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetListenerHealthStatusResponse
       */
      Models::GetListenerHealthStatusResponse getListenerHealthStatusWithOptions(const Models::GetListenerHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health check status of a listener and its forwarding rules.
       *
       * @param request GetListenerHealthStatusRequest
       * @return GetListenerHealthStatusResponse
       */
      Models::GetListenerHealthStatusResponse getListenerHealthStatus(const Models::GetListenerHealthStatusRequest &request);

      /**
       * @summary Queries the details of an Application Load Balancer (ALB) instance.
       *
       * @param request GetLoadBalancerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoadBalancerAttributeResponse
       */
      Models::GetLoadBalancerAttributeResponse getLoadBalancerAttributeWithOptions(const Models::GetLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an Application Load Balancer (ALB) instance.
       *
       * @param request GetLoadBalancerAttributeRequest
       * @return GetLoadBalancerAttributeResponse
       */
      Models::GetLoadBalancerAttributeResponse getLoadBalancerAttribute(const Models::GetLoadBalancerAttributeRequest &request);

      /**
       * @summary Queries AScript rules.
       *
       * @param request ListAScriptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAScriptsResponse
       */
      Models::ListAScriptsResponse listAScriptsWithOptions(const Models::ListAScriptsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries AScript rules.
       *
       * @param request ListAScriptsRequest
       * @return ListAScriptsResponse
       */
      Models::ListAScriptsResponse listAScripts(const Models::ListAScriptsRequest &request);

      /**
       * @summary Queries the entries of an access control list (ACL).
       *
       * @param request ListAclEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAclEntriesResponse
       */
      Models::ListAclEntriesResponse listAclEntriesWithOptions(const Models::ListAclEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the entries of an access control list (ACL).
       *
       * @param request ListAclEntriesRequest
       * @return ListAclEntriesResponse
       */
      Models::ListAclEntriesResponse listAclEntries(const Models::ListAclEntriesRequest &request);

      /**
       * @summary Queries the listeners that are associated with access control lists (ACLs).
       *
       * @param request ListAclRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAclRelationsResponse
       */
      Models::ListAclRelationsResponse listAclRelationsWithOptions(const Models::ListAclRelationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the listeners that are associated with access control lists (ACLs).
       *
       * @param request ListAclRelationsRequest
       * @return ListAclRelationsResponse
       */
      Models::ListAclRelationsResponse listAclRelations(const Models::ListAclRelationsRequest &request);

      /**
       * @summary Queries the access control lists (ACLs) in a region.
       *
       * @param request ListAclsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAclsResponse
       */
      Models::ListAclsResponse listAclsWithOptions(const Models::ListAclsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access control lists (ACLs) in a region.
       *
       * @param request ListAclsRequest
       * @return ListAclsResponse
       */
      Models::ListAclsResponse listAcls(const Models::ListAclsRequest &request);

      /**
       * @summary Queries asynchronous tasks in a region.
       *
       * @param request ListAsynJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAsynJobsResponse
       */
      Models::ListAsynJobsResponse listAsynJobsWithOptions(const Models::ListAsynJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries asynchronous tasks in a region.
       *
       * @param request ListAsynJobsRequest
       * @return ListAsynJobsResponse
       */
      Models::ListAsynJobsResponse listAsynJobs(const Models::ListAsynJobsRequest &request);

      /**
       * @summary Queries health check templates in a region.
       *
       * @param request ListHealthCheckTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHealthCheckTemplatesResponse
       */
      Models::ListHealthCheckTemplatesResponse listHealthCheckTemplatesWithOptions(const Models::ListHealthCheckTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries health check templates in a region.
       *
       * @param request ListHealthCheckTemplatesRequest
       * @return ListHealthCheckTemplatesResponse
       */
      Models::ListHealthCheckTemplatesResponse listHealthCheckTemplates(const Models::ListHealthCheckTemplatesRequest &request);

      /**
       * @summary Queries the certificates that are associated with a listener, including additional certificates and the default certificate.
       *
       * @param request ListListenerCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListListenerCertificatesResponse
       */
      Models::ListListenerCertificatesResponse listListenerCertificatesWithOptions(const Models::ListListenerCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificates that are associated with a listener, including additional certificates and the default certificate.
       *
       * @param request ListListenerCertificatesRequest
       * @return ListListenerCertificatesResponse
       */
      Models::ListListenerCertificatesResponse listListenerCertificates(const Models::ListListenerCertificatesRequest &request);

      /**
       * @summary Queries the listeners in a region.
       *
       * @param request ListListenersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListListenersResponse
       */
      Models::ListListenersResponse listListenersWithOptions(const Models::ListListenersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the listeners in a region.
       *
       * @param request ListListenersRequest
       * @return ListListenersResponse
       */
      Models::ListListenersResponse listListeners(const Models::ListListenersRequest &request);

      /**
       * @summary Queries the configurations of instances.
       *
       * @param request ListLoadBalancersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLoadBalancersResponse
       */
      Models::ListLoadBalancersResponse listLoadBalancersWithOptions(const Models::ListLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of instances.
       *
       * @param request ListLoadBalancersRequest
       * @return ListLoadBalancersResponse
       */
      Models::ListLoadBalancersResponse listLoadBalancers(const Models::ListLoadBalancersRequest &request);

      /**
       * @summary Queries the forwarding rules in a region.
       *
       * @param request ListRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRulesResponse
       */
      Models::ListRulesResponse listRulesWithOptions(const Models::ListRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the forwarding rules in a region.
       *
       * @param request ListRulesRequest
       * @return ListRulesResponse
       */
      Models::ListRulesResponse listRules(const Models::ListRulesRequest &request);

      /**
       * @summary Queries custom security policies in a region.
       *
       * @param request ListSecurityPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecurityPoliciesResponse
       */
      Models::ListSecurityPoliciesResponse listSecurityPoliciesWithOptions(const Models::ListSecurityPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom security policies in a region.
       *
       * @param request ListSecurityPoliciesRequest
       * @return ListSecurityPoliciesResponse
       */
      Models::ListSecurityPoliciesResponse listSecurityPolicies(const Models::ListSecurityPoliciesRequest &request);

      /**
       * @summary Queries the listeners that are associated with security policies.
       *
       * @param request ListSecurityPolicyRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecurityPolicyRelationsResponse
       */
      Models::ListSecurityPolicyRelationsResponse listSecurityPolicyRelationsWithOptions(const Models::ListSecurityPolicyRelationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the listeners that are associated with security policies.
       *
       * @param request ListSecurityPolicyRelationsRequest
       * @return ListSecurityPolicyRelationsResponse
       */
      Models::ListSecurityPolicyRelationsResponse listSecurityPolicyRelations(const Models::ListSecurityPolicyRelationsRequest &request);

      /**
       * @summary Queries servers in a server group.
       *
       * @param request ListServerGroupServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServerGroupServersResponse
       */
      Models::ListServerGroupServersResponse listServerGroupServersWithOptions(const Models::ListServerGroupServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries servers in a server group.
       *
       * @param request ListServerGroupServersRequest
       * @return ListServerGroupServersResponse
       */
      Models::ListServerGroupServersResponse listServerGroupServers(const Models::ListServerGroupServersRequest &request);

      /**
       * @summary Queries server groups.
       *
       * @param request ListServerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServerGroupsResponse
       */
      Models::ListServerGroupsResponse listServerGroupsWithOptions(const Models::ListServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries server groups.
       *
       * @param request ListServerGroupsRequest
       * @return ListServerGroupsResponse
       */
      Models::ListServerGroupsResponse listServerGroups(const Models::ListServerGroupsRequest &request);

      /**
       * @summary Queries system security policies in a region.
       *
       * @param request ListSystemSecurityPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSystemSecurityPoliciesResponse
       */
      Models::ListSystemSecurityPoliciesResponse listSystemSecurityPoliciesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries system security policies in a region.
       *
       * @return ListSystemSecurityPoliciesResponse
       */
      Models::ListSystemSecurityPoliciesResponse listSystemSecurityPolicies();

      /**
       * @summary Queries tag keys.
       *
       * @param request ListTagKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeysWithOptions(const Models::ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tag keys.
       *
       * @param request ListTagKeysRequest
       * @return ListTagKeysResponse
       */
      Models::ListTagKeysResponse listTagKeys(const Models::ListTagKeysRequest &request);

      /**
       * @summary Queries the tags of resources.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries tag values.
       *
       * @param request ListTagValuesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValuesWithOptions(const Models::ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tag values.
       *
       * @param request ListTagValuesRequest
       * @return ListTagValuesResponse
       */
      Models::ListTagValuesResponse listTagValues(const Models::ListTagValuesRequest &request);

      /**
       * @summary Adds an Application Load Balancer (ALB) instance to a security group.
       *
       * @description *   By default, security groups are unavailable. To use security groups, contact your account manager.
       * *   Make sure that a security group is created. For more information about how to create security groups, see [CreateSecurityGroup](https://help.aliyun.com/document_detail/2679843.html).
       * *   Each ALB instance can be added to at most four security groups.
       * *   To query the security groups of an ALB instance, call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/2254835.html) operation.
       * *   GetLoadBalancerAttribute is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAsynJobs](https://help.aliyun.com/document_detail/2254893.html) operation to query the status of the task.
       *     *   If the task is in the Succeeded state, the ALB instance is added to the security group.
       *     *   If the task is in the Processing state, the ALB instance is being added to the security group. In this case, you can query the task but cannot perform other operations.
       *
       * @param request LoadBalancerJoinSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoadBalancerJoinSecurityGroupResponse
       */
      Models::LoadBalancerJoinSecurityGroupResponse loadBalancerJoinSecurityGroupWithOptions(const Models::LoadBalancerJoinSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an Application Load Balancer (ALB) instance to a security group.
       *
       * @description *   By default, security groups are unavailable. To use security groups, contact your account manager.
       * *   Make sure that a security group is created. For more information about how to create security groups, see [CreateSecurityGroup](https://help.aliyun.com/document_detail/2679843.html).
       * *   Each ALB instance can be added to at most four security groups.
       * *   To query the security groups of an ALB instance, call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/2254835.html) operation.
       * *   GetLoadBalancerAttribute is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAsynJobs](https://help.aliyun.com/document_detail/2254893.html) operation to query the status of the task.
       *     *   If the task is in the Succeeded state, the ALB instance is added to the security group.
       *     *   If the task is in the Processing state, the ALB instance is being added to the security group. In this case, you can query the task but cannot perform other operations.
       *
       * @param request LoadBalancerJoinSecurityGroupRequest
       * @return LoadBalancerJoinSecurityGroupResponse
       */
      Models::LoadBalancerJoinSecurityGroupResponse loadBalancerJoinSecurityGroup(const Models::LoadBalancerJoinSecurityGroupRequest &request);

      /**
       * @summary Removes an Application Load Balancer (ALB) instance from a security group.
       *
       * @description *   LoadBalancerLeaveSecurityGroup is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAsynJobs](https://help.aliyun.com/document_detail/2254893.html) operation to query the status of the task.
       *     *   If the task is in the Succeeded state, the ALB instance is removed from the security group.
       *     *   If the task is in the Processing state, the ALB instance is being removed from the security group. In this case, you can query the task but cannot perform other operations.
       *
       * @param request LoadBalancerLeaveSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoadBalancerLeaveSecurityGroupResponse
       */
      Models::LoadBalancerLeaveSecurityGroupResponse loadBalancerLeaveSecurityGroupWithOptions(const Models::LoadBalancerLeaveSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an Application Load Balancer (ALB) instance from a security group.
       *
       * @description *   LoadBalancerLeaveSecurityGroup is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAsynJobs](https://help.aliyun.com/document_detail/2254893.html) operation to query the status of the task.
       *     *   If the task is in the Succeeded state, the ALB instance is removed from the security group.
       *     *   If the task is in the Processing state, the ALB instance is being removed from the security group. In this case, you can query the task but cannot perform other operations.
       *
       * @param request LoadBalancerLeaveSecurityGroupRequest
       * @return LoadBalancerLeaveSecurityGroupResponse
       */
      Models::LoadBalancerLeaveSecurityGroupResponse loadBalancerLeaveSecurityGroup(const Models::LoadBalancerLeaveSecurityGroupRequest &request);

      /**
       * @summary 修改资源预留
       *
       * @param request ModifyCapacityReservationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCapacityReservationResponse
       */
      Models::ModifyCapacityReservationResponse modifyCapacityReservationWithOptions(const Models::ModifyCapacityReservationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改资源预留
       *
       * @param request ModifyCapacityReservationRequest
       * @return ModifyCapacityReservationResponse
       */
      Models::ModifyCapacityReservationResponse modifyCapacityReservation(const Models::ModifyCapacityReservationRequest &request);

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
       * @summary Removes entries from an access control list (ACL).
       *
       * @description **RemoveEntriesFromAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAclEntries](https://help.aliyun.com/document_detail/213616.html) operation to query the status of the task.
       * *   If an ACL is in the **Removing** state, the entries are being removed.
       * *   If an ACL cannot be found, the entries are removed.
       *
       * @param request RemoveEntriesFromAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveEntriesFromAclResponse
       */
      Models::RemoveEntriesFromAclResponse removeEntriesFromAclWithOptions(const Models::RemoveEntriesFromAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes entries from an access control list (ACL).
       *
       * @description **RemoveEntriesFromAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAclEntries](https://help.aliyun.com/document_detail/213616.html) operation to query the status of the task.
       * *   If an ACL is in the **Removing** state, the entries are being removed.
       * *   If an ACL cannot be found, the entries are removed.
       *
       * @param request RemoveEntriesFromAclRequest
       * @return RemoveEntriesFromAclResponse
       */
      Models::RemoveEntriesFromAclResponse removeEntriesFromAcl(const Models::RemoveEntriesFromAclRequest &request);

      /**
       * @summary Removes backend servers from a server group.
       *
       * @description **RemoveServersFromServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
       * 1.  You can call [ListServerGroups](https://help.aliyun.com/document_detail/2254862.html) to query the status of a server group.
       *     *   If the server group is in the **Configuring** state, the server group is being modified.
       *     *   If the server group is in the **Available** state, the server group is running.
       * 2.  You can call [ListServerGroupServers](https://help.aliyun.com/document_detail/2254863.html) to query the status of a backend server.
       *     *   If the backend server is in the **Removing** state, the backend server is being removed from the server group.
       *     *   If the backend server cannot be found, the backend server is no longer in the server group.
       *
       * @param request RemoveServersFromServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveServersFromServerGroupResponse
       */
      Models::RemoveServersFromServerGroupResponse removeServersFromServerGroupWithOptions(const Models::RemoveServersFromServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes backend servers from a server group.
       *
       * @description **RemoveServersFromServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
       * 1.  You can call [ListServerGroups](https://help.aliyun.com/document_detail/2254862.html) to query the status of a server group.
       *     *   If the server group is in the **Configuring** state, the server group is being modified.
       *     *   If the server group is in the **Available** state, the server group is running.
       * 2.  You can call [ListServerGroupServers](https://help.aliyun.com/document_detail/2254863.html) to query the status of a backend server.
       *     *   If the backend server is in the **Removing** state, the backend server is being removed from the server group.
       *     *   If the backend server cannot be found, the backend server is no longer in the server group.
       *
       * @param request RemoveServersFromServerGroupRequest
       * @return RemoveServersFromServerGroupResponse
       */
      Models::RemoveServersFromServerGroupResponse removeServersFromServerGroup(const Models::RemoveServersFromServerGroupRequest &request);

      /**
       * @summary Replaces backend servers in a server group.
       *
       * @description **ReplaceServersInServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
       * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group.
       *     *   If a server group is in the **Configuring** state, it indicates that the server group is being modified.
       *     *   If a server group is in the **Available** state, it indicates that the server group is running.
       * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/213628.html) operation to query the status of a backend server.
       *     *   If a backend server is in the **Replacing** state, it indicates that the server is being removed from the server group and a new server is added to the server group.
       *     *   If a backend server is in the \\*\\*Available\\*\\* state, it indicates that the server is running.
       *
       * @param request ReplaceServersInServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceServersInServerGroupResponse
       */
      Models::ReplaceServersInServerGroupResponse replaceServersInServerGroupWithOptions(const Models::ReplaceServersInServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces backend servers in a server group.
       *
       * @description **ReplaceServersInServerGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
       * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group.
       *     *   If a server group is in the **Configuring** state, it indicates that the server group is being modified.
       *     *   If a server group is in the **Available** state, it indicates that the server group is running.
       * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/213628.html) operation to query the status of a backend server.
       *     *   If a backend server is in the **Replacing** state, it indicates that the server is being removed from the server group and a new server is added to the server group.
       *     *   If a backend server is in the \\*\\*Available\\*\\* state, it indicates that the server is running.
       *
       * @param request ReplaceServersInServerGroupRequest
       * @return ReplaceServersInServerGroupResponse
       */
      Models::ReplaceServersInServerGroupResponse replaceServersInServerGroup(const Models::ReplaceServersInServerGroupRequest &request);

      /**
       * @summary Enables a listener.
       *
       * @description **StartListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) to query the status of the task.
       * *   If a listener is in the **Configuring** state, the listener is being enabled.
       * *   If a listener is in the **Running** state, the listener is enabled.
       *
       * @param request StartListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartListenerResponse
       */
      Models::StartListenerResponse startListenerWithOptions(const Models::StartListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a listener.
       *
       * @description **StartListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) to query the status of the task.
       * *   If a listener is in the **Configuring** state, the listener is being enabled.
       * *   If a listener is in the **Running** state, the listener is enabled.
       *
       * @param request StartListenerRequest
       * @return StartListenerResponse
       */
      Models::StartListenerResponse startListener(const Models::StartListenerRequest &request);

      /**
       * @summary Removes an elastic IP address (EIP) or a virtual IP address (VIP) of a zone from a DNS record.
       *
       * @description This operation is supported by Application Load Balancer (ALB) instances that use static IP addresses. The zone cannot be removed if the ALB instance has only one available zone.
       *
       * @param request StartShiftLoadBalancerZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartShiftLoadBalancerZonesResponse
       */
      Models::StartShiftLoadBalancerZonesResponse startShiftLoadBalancerZonesWithOptions(const Models::StartShiftLoadBalancerZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an elastic IP address (EIP) or a virtual IP address (VIP) of a zone from a DNS record.
       *
       * @description This operation is supported by Application Load Balancer (ALB) instances that use static IP addresses. The zone cannot be removed if the ALB instance has only one available zone.
       *
       * @param request StartShiftLoadBalancerZonesRequest
       * @return StartShiftLoadBalancerZonesResponse
       */
      Models::StartShiftLoadBalancerZonesResponse startShiftLoadBalancerZones(const Models::StartShiftLoadBalancerZonesRequest &request);

      /**
       * @summary Disables a listener.
       *
       * @description **StopListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) operation to query the status of the task:
       * *   If a listener is in the **Configuring** state, the listener is being disabled.
       * *   If a listener is in the **Stopped** state, the listener is disabled.
       *
       * @param request StopListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopListenerResponse
       */
      Models::StopListenerResponse stopListenerWithOptions(const Models::StopListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a listener.
       *
       * @description **StopListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) operation to query the status of the task:
       * *   If a listener is in the **Configuring** state, the listener is being disabled.
       * *   If a listener is in the **Stopped** state, the listener is disabled.
       *
       * @param request StopListenerRequest
       * @return StopListenerResponse
       */
      Models::StopListenerResponse stopListener(const Models::StopListenerRequest &request);

      /**
       * @summary Adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UnTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);

      /**
       * @summary Updates AScript rules.
       *
       * @description **UpdateAScripts** is an an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAScripts](https://help.aliyun.com/document_detail/472574.html) operation to query the status of an AScript rule.
       * *   If the rule is in the **Configuring** state, the rule is being updated.
       * *   If the rule is in the **Available** state, the rule is updated.
       *
       * @param request UpdateAScriptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAScriptsResponse
       */
      Models::UpdateAScriptsResponse updateAScriptsWithOptions(const Models::UpdateAScriptsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates AScript rules.
       *
       * @description **UpdateAScripts** is an an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListAScripts](https://help.aliyun.com/document_detail/472574.html) operation to query the status of an AScript rule.
       * *   If the rule is in the **Configuring** state, the rule is being updated.
       * *   If the rule is in the **Available** state, the rule is updated.
       *
       * @param request UpdateAScriptsRequest
       * @return UpdateAScriptsResponse
       */
      Models::UpdateAScriptsResponse updateAScripts(const Models::UpdateAScriptsRequest &request);

      /**
       * @summary Updates the attributes of an access control list (ACL), such as the name.
       *
       * @param request UpdateAclAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAclAttributeResponse
       */
      Models::UpdateAclAttributeResponse updateAclAttributeWithOptions(const Models::UpdateAclAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the attributes of an access control list (ACL), such as the name.
       *
       * @param request UpdateAclAttributeRequest
       * @return UpdateAclAttributeResponse
       */
      Models::UpdateAclAttributeResponse updateAclAttribute(const Models::UpdateAclAttributeRequest &request);

      /**
       * @summary Modifies the attributes, such as the name and protocol, of a health check template.
       *
       * @param request UpdateHealthCheckTemplateAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHealthCheckTemplateAttributeResponse
       */
      Models::UpdateHealthCheckTemplateAttributeResponse updateHealthCheckTemplateAttributeWithOptions(const Models::UpdateHealthCheckTemplateAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes, such as the name and protocol, of a health check template.
       *
       * @param request UpdateHealthCheckTemplateAttributeRequest
       * @return UpdateHealthCheckTemplateAttributeResponse
       */
      Models::UpdateHealthCheckTemplateAttributeResponse updateHealthCheckTemplateAttribute(const Models::UpdateHealthCheckTemplateAttributeRequest &request);

      /**
       * @summary Updates the attributes of a listener, such as the name and the default action.
       *
       * @description **UpdateListenerAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) operation to query the status of the task.
       * *   If a listener is in the **Configuring** state, the configuration of the listener is being modified.
       * *   If a listener is in the **Running** state, the configuration of the listener is modified.
       *
       * @param request UpdateListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateListenerAttributeResponse
       */
      Models::UpdateListenerAttributeResponse updateListenerAttributeWithOptions(const Models::UpdateListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the attributes of a listener, such as the name and the default action.
       *
       * @description **UpdateListenerAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) operation to query the status of the task.
       * *   If a listener is in the **Configuring** state, the configuration of the listener is being modified.
       * *   If a listener is in the **Running** state, the configuration of the listener is modified.
       *
       * @param request UpdateListenerAttributeRequest
       * @return UpdateListenerAttributeResponse
       */
      Models::UpdateListenerAttributeResponse updateListenerAttribute(const Models::UpdateListenerAttributeRequest &request);

      /**
       * @summary Updates the log configuration of a listener, such as the access log configuration.
       *
       * @description **UpdateListenerLogConfig** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) to query the status of the task:
       * *   If a listener is in the **Configuring** state, the log configuration of the listener is being modified.
       * *   If a listener is in the **Running** state, the log configuration of the listener is modified.
       * > You can update the log configuration of a listener only after you enable the access log feature.
       *
       * @param request UpdateListenerLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateListenerLogConfigResponse
       */
      Models::UpdateListenerLogConfigResponse updateListenerLogConfigWithOptions(const Models::UpdateListenerLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the log configuration of a listener, such as the access log configuration.
       *
       * @description **UpdateListenerLogConfig** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetListenerAttribute](https://help.aliyun.com/document_detail/2254865.html) to query the status of the task:
       * *   If a listener is in the **Configuring** state, the log configuration of the listener is being modified.
       * *   If a listener is in the **Running** state, the log configuration of the listener is modified.
       * > You can update the log configuration of a listener only after you enable the access log feature.
       *
       * @param request UpdateListenerLogConfigRequest
       * @return UpdateListenerLogConfigResponse
       */
      Models::UpdateListenerLogConfigResponse updateListenerLogConfig(const Models::UpdateListenerLogConfigRequest &request);

      /**
       * @summary Modifies the network type of an Application Load Balancer (ALB) instance.
       *
       * @description ## Prerequisites
       * *   An ALB instance is created. For more information about how to create an ALB instance, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html).
       * *   If you want to change the network type from internal-facing to Internet-facing, you must first create an elastic IP address (EIP). For more information, see [AllocateEipAddress](https://help.aliyun.com/document_detail/120192.html).
       * ## Usage notes
       * **UpdateLoadBalancerAddressTypeConfig** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of the task.
       * *   If an ALB instance is in the **Configuring** state, the network type is being changed.
       * *   If an ALB instance is in the **Active** state, the network type has been changed.
       *
       * @param request UpdateLoadBalancerAddressTypeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoadBalancerAddressTypeConfigResponse
       */
      Models::UpdateLoadBalancerAddressTypeConfigResponse updateLoadBalancerAddressTypeConfigWithOptions(const Models::UpdateLoadBalancerAddressTypeConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the network type of an Application Load Balancer (ALB) instance.
       *
       * @description ## Prerequisites
       * *   An ALB instance is created. For more information about how to create an ALB instance, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/214358.html).
       * *   If you want to change the network type from internal-facing to Internet-facing, you must first create an elastic IP address (EIP). For more information, see [AllocateEipAddress](https://help.aliyun.com/document_detail/120192.html).
       * ## Usage notes
       * **UpdateLoadBalancerAddressTypeConfig** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of the task.
       * *   If an ALB instance is in the **Configuring** state, the network type is being changed.
       * *   If an ALB instance is in the **Active** state, the network type has been changed.
       *
       * @param request UpdateLoadBalancerAddressTypeConfigRequest
       * @return UpdateLoadBalancerAddressTypeConfigResponse
       */
      Models::UpdateLoadBalancerAddressTypeConfigResponse updateLoadBalancerAddressTypeConfig(const Models::UpdateLoadBalancerAddressTypeConfigRequest &request);

      /**
       * @summary Modifies the attributes of an Application Load Balancer (ALB) instance, such as the name and the configuration read-only mode.
       *
       * @description **UpdateLoadBalancerAttribute** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
       * *   If the ALB instance is in the **Configuring** state, the ALB instance is being modified.
       * *   If the ALB instance is in the **Active** state, the ALB instance is modified.
       *
       * @param request UpdateLoadBalancerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoadBalancerAttributeResponse
       */
      Models::UpdateLoadBalancerAttributeResponse updateLoadBalancerAttributeWithOptions(const Models::UpdateLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an Application Load Balancer (ALB) instance, such as the name and the configuration read-only mode.
       *
       * @description **UpdateLoadBalancerAttribute** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
       * *   If the ALB instance is in the **Configuring** state, the ALB instance is being modified.
       * *   If the ALB instance is in the **Active** state, the ALB instance is modified.
       *
       * @param request UpdateLoadBalancerAttributeRequest
       * @return UpdateLoadBalancerAttributeResponse
       */
      Models::UpdateLoadBalancerAttributeResponse updateLoadBalancerAttribute(const Models::UpdateLoadBalancerAttributeRequest &request);

      /**
       * @summary Changes the edition of an Application Load Balancer (ALB) instance.
       *
       * @description *   You can only upgrade a basic ALB instance to a standard ALB instance or a WAF-enabled ALB instance. You cannot downgrade a standard ALB instance or a WAF-enabled ALB instance to a basic ALB instance. For more information, see [Upgrade an ALB instance](https://help.aliyun.com/document_detail/214654.html).
       * *   **UpdateLoadBalancerEdition** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of an ALB instance.
       *     *   If the ALB instance is in the **Configuring** state, the edition of the ALB instance is being modified.
       *     *   If the ALB instance is in the **Active** state, the edition of the ALB instance is modified.
       *
       * @param request UpdateLoadBalancerEditionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoadBalancerEditionResponse
       */
      Models::UpdateLoadBalancerEditionResponse updateLoadBalancerEditionWithOptions(const Models::UpdateLoadBalancerEditionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the edition of an Application Load Balancer (ALB) instance.
       *
       * @description *   You can only upgrade a basic ALB instance to a standard ALB instance or a WAF-enabled ALB instance. You cannot downgrade a standard ALB instance or a WAF-enabled ALB instance to a basic ALB instance. For more information, see [Upgrade an ALB instance](https://help.aliyun.com/document_detail/214654.html).
       * *   **UpdateLoadBalancerEdition** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation to query the status of an ALB instance.
       *     *   If the ALB instance is in the **Configuring** state, the edition of the ALB instance is being modified.
       *     *   If the ALB instance is in the **Active** state, the edition of the ALB instance is modified.
       *
       * @param request UpdateLoadBalancerEditionRequest
       * @return UpdateLoadBalancerEditionResponse
       */
      Models::UpdateLoadBalancerEditionResponse updateLoadBalancerEdition(const Models::UpdateLoadBalancerEditionRequest &request);

      /**
       * @summary Modifies the zones of an Application Load Balancer (ALB) instance.
       *
       * @description **UpdateLoadBalancerZones** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
       * *   If an ALB instance is in the **Configuring** state, the zones are being modified.
       * *   If an ALB instance is in the **Active** state, the zones are modified.
       * > You may be charged after you call UpdateLoadBalancerZones.
       *
       * @param request UpdateLoadBalancerZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoadBalancerZonesResponse
       */
      Models::UpdateLoadBalancerZonesResponse updateLoadBalancerZonesWithOptions(const Models::UpdateLoadBalancerZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the zones of an Application Load Balancer (ALB) instance.
       *
       * @description **UpdateLoadBalancerZones** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) to query the status of the task.
       * *   If an ALB instance is in the **Configuring** state, the zones are being modified.
       * *   If an ALB instance is in the **Active** state, the zones are modified.
       * > You may be charged after you call UpdateLoadBalancerZones.
       *
       * @param request UpdateLoadBalancerZonesRequest
       * @return UpdateLoadBalancerZonesResponse
       */
      Models::UpdateLoadBalancerZonesResponse updateLoadBalancerZones(const Models::UpdateLoadBalancerZonesRequest &request);

      /**
       * @summary Updates a forwarding rule, such as the match condition, action, and name.
       *
       * @description *   **UpdateRuleAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of a forwarding rule:
       *     *   If a forwarding rule is in the **Configuring** state, the forwarding rule is being updated.
       *     *   If a forwarding rule is in the **Available** state, the forwarding rule is updated.
       * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. Take note of the following limits on the number of conditions and the number of actions in each forwarding rule:
       *     *   Number of conditions: You can specify at most 5 for a basic Application Load Balancer (ALB) instance, at most 10 for a standard ALB instance, and at most 10 for a WAF-enabled ALB instance.
       *     *   Number of actions: You can specify at most 3 for a basic ALB instance, at most 5 for a standard ALB instance, and at most 5 for a WAF-enabled ALB instance.
       *
       * @param request UpdateRuleAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRuleAttributeResponse
       */
      Models::UpdateRuleAttributeResponse updateRuleAttributeWithOptions(const Models::UpdateRuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a forwarding rule, such as the match condition, action, and name.
       *
       * @description *   **UpdateRuleAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of a forwarding rule:
       *     *   If a forwarding rule is in the **Configuring** state, the forwarding rule is being updated.
       *     *   If a forwarding rule is in the **Available** state, the forwarding rule is updated.
       * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. Take note of the following limits on the number of conditions and the number of actions in each forwarding rule:
       *     *   Number of conditions: You can specify at most 5 for a basic Application Load Balancer (ALB) instance, at most 10 for a standard ALB instance, and at most 10 for a WAF-enabled ALB instance.
       *     *   Number of actions: You can specify at most 3 for a basic ALB instance, at most 5 for a standard ALB instance, and at most 5 for a WAF-enabled ALB instance.
       *
       * @param request UpdateRuleAttributeRequest
       * @return UpdateRuleAttributeResponse
       */
      Models::UpdateRuleAttributeResponse updateRuleAttribute(const Models::UpdateRuleAttributeRequest &request);

      /**
       * @summary Modifies the attributes of forwarding rules.
       *
       * @description **UpdateRulesAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of the task.
       * *   If a forwarding rule is in the **Configuring** state, the forwarding rule is being updated.
       * *   If a forwarding rule is in the **Available** state, the forwarding rule is updated.
       * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. Take note of the following limits on the maximum number of conditions and the maximum number of actions in each forwarding rule:
       *     *   Limits on conditions: 5 for a basic Application Load Balancer (ALB) instance, 10 for a standard ALB instance, and 10 for a WAF-enabled ALB instance.
       *     *   Limits on actions: 3 for a basic ALB instance, 5 for a standard ALB instance, and 5 for a WAF-enabled ALB instance.
       *
       * @param request UpdateRulesAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRulesAttributeResponse
       */
      Models::UpdateRulesAttributeResponse updateRulesAttributeWithOptions(const Models::UpdateRulesAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of forwarding rules.
       *
       * @description **UpdateRulesAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListRules](https://help.aliyun.com/document_detail/214379.html) operation to query the status of the task.
       * *   If a forwarding rule is in the **Configuring** state, the forwarding rule is being updated.
       * *   If a forwarding rule is in the **Available** state, the forwarding rule is updated.
       * *   You can set **RuleConditions** and **RuleActions** to add conditions and actions to a forwarding rule. Take note of the following limits on the maximum number of conditions and the maximum number of actions in each forwarding rule:
       *     *   Limits on conditions: 5 for a basic Application Load Balancer (ALB) instance, 10 for a standard ALB instance, and 10 for a WAF-enabled ALB instance.
       *     *   Limits on actions: 3 for a basic ALB instance, 5 for a standard ALB instance, and 5 for a WAF-enabled ALB instance.
       *
       * @param request UpdateRulesAttributeRequest
       * @return UpdateRulesAttributeResponse
       */
      Models::UpdateRulesAttributeResponse updateRulesAttribute(const Models::UpdateRulesAttributeRequest &request);

      /**
       * @summary Updates the attributes of a security policy, such as the TLS protocol version and the supported cipher suites.
       *
       * @description ##
       * **UpdateSecurityPolicyAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListSecurityPolicies](https://help.aliyun.com/document_detail/213609.html) to query the status of the task.
       * *   If a security policy is in the **Configuring** state, the security policy is being updated.
       * *   If a security policy is in the **Available** state, the security policy is updated.
       *
       * @param request UpdateSecurityPolicyAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecurityPolicyAttributeResponse
       */
      Models::UpdateSecurityPolicyAttributeResponse updateSecurityPolicyAttributeWithOptions(const Models::UpdateSecurityPolicyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the attributes of a security policy, such as the TLS protocol version and the supported cipher suites.
       *
       * @description ##
       * **UpdateSecurityPolicyAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call [ListSecurityPolicies](https://help.aliyun.com/document_detail/213609.html) to query the status of the task.
       * *   If a security policy is in the **Configuring** state, the security policy is being updated.
       * *   If a security policy is in the **Available** state, the security policy is updated.
       *
       * @param request UpdateSecurityPolicyAttributeRequest
       * @return UpdateSecurityPolicyAttributeResponse
       */
      Models::UpdateSecurityPolicyAttributeResponse updateSecurityPolicyAttribute(const Models::UpdateSecurityPolicyAttributeRequest &request);

      /**
       * @summary Modifies the configurations of a server group, such as health checks, session persistence, server group names, routing algorithms, and protocols.
       *
       * @description ## Description
       * **UpdateServerGroupAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group:
       * *   If a server group is in the **Configuring** state, the configuration of the server group is being modified.
       * *   If a server group is in the **Available** state, the configuration of the server group is modified.
       *
       * @param request UpdateServerGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServerGroupAttributeResponse
       */
      Models::UpdateServerGroupAttributeResponse updateServerGroupAttributeWithOptions(const Models::UpdateServerGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a server group, such as health checks, session persistence, server group names, routing algorithms, and protocols.
       *
       * @description ## Description
       * **UpdateServerGroupAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group:
       * *   If a server group is in the **Configuring** state, the configuration of the server group is being modified.
       * *   If a server group is in the **Available** state, the configuration of the server group is modified.
       *
       * @param request UpdateServerGroupAttributeRequest
       * @return UpdateServerGroupAttributeResponse
       */
      Models::UpdateServerGroupAttributeResponse updateServerGroupAttribute(const Models::UpdateServerGroupAttributeRequest &request);

      /**
       * @summary Modifies the configurations, such as the backend server weight and description, of a server group.
       *
       * @description **UpdateServerGroupServersAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
       * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group.
       *     *   If a server group is in the **Configuring** state, it indicates that the server group is being modified.
       *     *   If a server group is in the **Available** state, it indicates that the server group is running.
       * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/213628.html) operation to query the status of a backend server.
       *     *   If a backend server is in the **Configuring** state, it indicates that the backend server is being modified.
       *     *   If a backend server is in the **Available** state, it indicates that the backend server is running.
       *
       * @param request UpdateServerGroupServersAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServerGroupServersAttributeResponse
       */
      Models::UpdateServerGroupServersAttributeResponse updateServerGroupServersAttributeWithOptions(const Models::UpdateServerGroupServersAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations, such as the backend server weight and description, of a server group.
       *
       * @description **UpdateServerGroupServersAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
       * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the status of a server group.
       *     *   If a server group is in the **Configuring** state, it indicates that the server group is being modified.
       *     *   If a server group is in the **Available** state, it indicates that the server group is running.
       * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/213628.html) operation to query the status of a backend server.
       *     *   If a backend server is in the **Configuring** state, it indicates that the backend server is being modified.
       *     *   If a backend server is in the **Available** state, it indicates that the backend server is running.
       *
       * @param request UpdateServerGroupServersAttributeRequest
       * @return UpdateServerGroupServersAttributeResponse
       */
      Models::UpdateServerGroupServersAttributeResponse updateServerGroupServersAttribute(const Models::UpdateServerGroupServersAttributeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
