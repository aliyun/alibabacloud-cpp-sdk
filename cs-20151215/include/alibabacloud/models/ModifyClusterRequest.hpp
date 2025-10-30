// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyClusterRequestApiServerCustomCertSans.hpp>
#include <alibabacloud/models/ModifyClusterRequestControlPlaneConfig.hpp>
#include <alibabacloud/models/MaintenanceWindow.hpp>
#include <alibabacloud/models/ModifyClusterRequestOperationPolicy.hpp>
#include <alibabacloud/models/ModifyClusterRequestSystemEventsLogging.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(access_control_list, accessControlList_);
      DARABONBA_PTR_TO_JSON(api_server_custom_cert_sans, apiServerCustomCertSans_);
      DARABONBA_PTR_TO_JSON(api_server_eip, apiServerEip_);
      DARABONBA_PTR_TO_JSON(api_server_eip_id, apiServerEipId_);
      DARABONBA_PTR_TO_JSON(cluster_name, clusterName_);
      DARABONBA_PTR_TO_JSON(control_plane_config, controlPlaneConfig_);
      DARABONBA_PTR_TO_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(enable_rrsa, enableRrsa_);
      DARABONBA_PTR_TO_JSON(ingress_domain_rebinding, ingressDomainRebinding_);
      DARABONBA_PTR_TO_JSON(ingress_loadbalancer_id, ingressLoadbalancerId_);
      DARABONBA_PTR_TO_JSON(instance_deletion_protection, instanceDeletionProtection_);
      DARABONBA_PTR_TO_JSON(maintenance_window, maintenanceWindow_);
      DARABONBA_PTR_TO_JSON(operation_policy, operationPolicy_);
      DARABONBA_PTR_TO_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_TO_JSON(system_events_logging, systemEventsLogging_);
      DARABONBA_PTR_TO_JSON(timezone, timezone_);
      DARABONBA_PTR_TO_JSON(vswitch_ids, vswitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(access_control_list, accessControlList_);
      DARABONBA_PTR_FROM_JSON(api_server_custom_cert_sans, apiServerCustomCertSans_);
      DARABONBA_PTR_FROM_JSON(api_server_eip, apiServerEip_);
      DARABONBA_PTR_FROM_JSON(api_server_eip_id, apiServerEipId_);
      DARABONBA_PTR_FROM_JSON(cluster_name, clusterName_);
      DARABONBA_PTR_FROM_JSON(control_plane_config, controlPlaneConfig_);
      DARABONBA_PTR_FROM_JSON(deletion_protection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(enable_rrsa, enableRrsa_);
      DARABONBA_PTR_FROM_JSON(ingress_domain_rebinding, ingressDomainRebinding_);
      DARABONBA_PTR_FROM_JSON(ingress_loadbalancer_id, ingressLoadbalancerId_);
      DARABONBA_PTR_FROM_JSON(instance_deletion_protection, instanceDeletionProtection_);
      DARABONBA_PTR_FROM_JSON(maintenance_window, maintenanceWindow_);
      DARABONBA_PTR_FROM_JSON(operation_policy, operationPolicy_);
      DARABONBA_PTR_FROM_JSON(resource_group_id, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(security_group_id, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(system_events_logging, systemEventsLogging_);
      DARABONBA_PTR_FROM_JSON(timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(vswitch_ids, vswitchIds_);
    };
    ModifyClusterRequest() = default ;
    ModifyClusterRequest(const ModifyClusterRequest &) = default ;
    ModifyClusterRequest(ModifyClusterRequest &&) = default ;
    ModifyClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterRequest() = default ;
    ModifyClusterRequest& operator=(const ModifyClusterRequest &) = default ;
    ModifyClusterRequest& operator=(ModifyClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessControlList_ == nullptr
        && return this->apiServerCustomCertSans_ == nullptr && return this->apiServerEip_ == nullptr && return this->apiServerEipId_ == nullptr && return this->clusterName_ == nullptr && return this->controlPlaneConfig_ == nullptr
        && return this->deletionProtection_ == nullptr && return this->enableRrsa_ == nullptr && return this->ingressDomainRebinding_ == nullptr && return this->ingressLoadbalancerId_ == nullptr && return this->instanceDeletionProtection_ == nullptr
        && return this->maintenanceWindow_ == nullptr && return this->operationPolicy_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityGroupId_ == nullptr && return this->systemEventsLogging_ == nullptr
        && return this->timezone_ == nullptr && return this->vswitchIds_ == nullptr; };
    // accessControlList Field Functions 
    bool hasAccessControlList() const { return this->accessControlList_ != nullptr;};
    void deleteAccessControlList() { this->accessControlList_ = nullptr;};
    inline const vector<string> & accessControlList() const { DARABONBA_PTR_GET_CONST(accessControlList_, vector<string>) };
    inline vector<string> accessControlList() { DARABONBA_PTR_GET(accessControlList_, vector<string>) };
    inline ModifyClusterRequest& setAccessControlList(const vector<string> & accessControlList) { DARABONBA_PTR_SET_VALUE(accessControlList_, accessControlList) };
    inline ModifyClusterRequest& setAccessControlList(vector<string> && accessControlList) { DARABONBA_PTR_SET_RVALUE(accessControlList_, accessControlList) };


    // apiServerCustomCertSans Field Functions 
    bool hasApiServerCustomCertSans() const { return this->apiServerCustomCertSans_ != nullptr;};
    void deleteApiServerCustomCertSans() { this->apiServerCustomCertSans_ = nullptr;};
    inline const ModifyClusterRequestApiServerCustomCertSans & apiServerCustomCertSans() const { DARABONBA_PTR_GET_CONST(apiServerCustomCertSans_, ModifyClusterRequestApiServerCustomCertSans) };
    inline ModifyClusterRequestApiServerCustomCertSans apiServerCustomCertSans() { DARABONBA_PTR_GET(apiServerCustomCertSans_, ModifyClusterRequestApiServerCustomCertSans) };
    inline ModifyClusterRequest& setApiServerCustomCertSans(const ModifyClusterRequestApiServerCustomCertSans & apiServerCustomCertSans) { DARABONBA_PTR_SET_VALUE(apiServerCustomCertSans_, apiServerCustomCertSans) };
    inline ModifyClusterRequest& setApiServerCustomCertSans(ModifyClusterRequestApiServerCustomCertSans && apiServerCustomCertSans) { DARABONBA_PTR_SET_RVALUE(apiServerCustomCertSans_, apiServerCustomCertSans) };


    // apiServerEip Field Functions 
    bool hasApiServerEip() const { return this->apiServerEip_ != nullptr;};
    void deleteApiServerEip() { this->apiServerEip_ = nullptr;};
    inline bool apiServerEip() const { DARABONBA_PTR_GET_DEFAULT(apiServerEip_, false) };
    inline ModifyClusterRequest& setApiServerEip(bool apiServerEip) { DARABONBA_PTR_SET_VALUE(apiServerEip_, apiServerEip) };


    // apiServerEipId Field Functions 
    bool hasApiServerEipId() const { return this->apiServerEipId_ != nullptr;};
    void deleteApiServerEipId() { this->apiServerEipId_ = nullptr;};
    inline string apiServerEipId() const { DARABONBA_PTR_GET_DEFAULT(apiServerEipId_, "") };
    inline ModifyClusterRequest& setApiServerEipId(string apiServerEipId) { DARABONBA_PTR_SET_VALUE(apiServerEipId_, apiServerEipId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ModifyClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // controlPlaneConfig Field Functions 
    bool hasControlPlaneConfig() const { return this->controlPlaneConfig_ != nullptr;};
    void deleteControlPlaneConfig() { this->controlPlaneConfig_ = nullptr;};
    inline const ModifyClusterRequestControlPlaneConfig & controlPlaneConfig() const { DARABONBA_PTR_GET_CONST(controlPlaneConfig_, ModifyClusterRequestControlPlaneConfig) };
    inline ModifyClusterRequestControlPlaneConfig controlPlaneConfig() { DARABONBA_PTR_GET(controlPlaneConfig_, ModifyClusterRequestControlPlaneConfig) };
    inline ModifyClusterRequest& setControlPlaneConfig(const ModifyClusterRequestControlPlaneConfig & controlPlaneConfig) { DARABONBA_PTR_SET_VALUE(controlPlaneConfig_, controlPlaneConfig) };
    inline ModifyClusterRequest& setControlPlaneConfig(ModifyClusterRequestControlPlaneConfig && controlPlaneConfig) { DARABONBA_PTR_SET_RVALUE(controlPlaneConfig_, controlPlaneConfig) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline ModifyClusterRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // enableRrsa Field Functions 
    bool hasEnableRrsa() const { return this->enableRrsa_ != nullptr;};
    void deleteEnableRrsa() { this->enableRrsa_ = nullptr;};
    inline bool enableRrsa() const { DARABONBA_PTR_GET_DEFAULT(enableRrsa_, false) };
    inline ModifyClusterRequest& setEnableRrsa(bool enableRrsa) { DARABONBA_PTR_SET_VALUE(enableRrsa_, enableRrsa) };


    // ingressDomainRebinding Field Functions 
    bool hasIngressDomainRebinding() const { return this->ingressDomainRebinding_ != nullptr;};
    void deleteIngressDomainRebinding() { this->ingressDomainRebinding_ = nullptr;};
    inline bool ingressDomainRebinding() const { DARABONBA_PTR_GET_DEFAULT(ingressDomainRebinding_, false) };
    inline ModifyClusterRequest& setIngressDomainRebinding(bool ingressDomainRebinding) { DARABONBA_PTR_SET_VALUE(ingressDomainRebinding_, ingressDomainRebinding) };


    // ingressLoadbalancerId Field Functions 
    bool hasIngressLoadbalancerId() const { return this->ingressLoadbalancerId_ != nullptr;};
    void deleteIngressLoadbalancerId() { this->ingressLoadbalancerId_ = nullptr;};
    inline string ingressLoadbalancerId() const { DARABONBA_PTR_GET_DEFAULT(ingressLoadbalancerId_, "") };
    inline ModifyClusterRequest& setIngressLoadbalancerId(string ingressLoadbalancerId) { DARABONBA_PTR_SET_VALUE(ingressLoadbalancerId_, ingressLoadbalancerId) };


    // instanceDeletionProtection Field Functions 
    bool hasInstanceDeletionProtection() const { return this->instanceDeletionProtection_ != nullptr;};
    void deleteInstanceDeletionProtection() { this->instanceDeletionProtection_ = nullptr;};
    inline bool instanceDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(instanceDeletionProtection_, false) };
    inline ModifyClusterRequest& setInstanceDeletionProtection(bool instanceDeletionProtection) { DARABONBA_PTR_SET_VALUE(instanceDeletionProtection_, instanceDeletionProtection) };


    // maintenanceWindow Field Functions 
    bool hasMaintenanceWindow() const { return this->maintenanceWindow_ != nullptr;};
    void deleteMaintenanceWindow() { this->maintenanceWindow_ = nullptr;};
    inline const MaintenanceWindow & maintenanceWindow() const { DARABONBA_PTR_GET_CONST(maintenanceWindow_, MaintenanceWindow) };
    inline MaintenanceWindow maintenanceWindow() { DARABONBA_PTR_GET(maintenanceWindow_, MaintenanceWindow) };
    inline ModifyClusterRequest& setMaintenanceWindow(const MaintenanceWindow & maintenanceWindow) { DARABONBA_PTR_SET_VALUE(maintenanceWindow_, maintenanceWindow) };
    inline ModifyClusterRequest& setMaintenanceWindow(MaintenanceWindow && maintenanceWindow) { DARABONBA_PTR_SET_RVALUE(maintenanceWindow_, maintenanceWindow) };


    // operationPolicy Field Functions 
    bool hasOperationPolicy() const { return this->operationPolicy_ != nullptr;};
    void deleteOperationPolicy() { this->operationPolicy_ = nullptr;};
    inline const ModifyClusterRequestOperationPolicy & operationPolicy() const { DARABONBA_PTR_GET_CONST(operationPolicy_, ModifyClusterRequestOperationPolicy) };
    inline ModifyClusterRequestOperationPolicy operationPolicy() { DARABONBA_PTR_GET(operationPolicy_, ModifyClusterRequestOperationPolicy) };
    inline ModifyClusterRequest& setOperationPolicy(const ModifyClusterRequestOperationPolicy & operationPolicy) { DARABONBA_PTR_SET_VALUE(operationPolicy_, operationPolicy) };
    inline ModifyClusterRequest& setOperationPolicy(ModifyClusterRequestOperationPolicy && operationPolicy) { DARABONBA_PTR_SET_RVALUE(operationPolicy_, operationPolicy) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ModifyClusterRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // systemEventsLogging Field Functions 
    bool hasSystemEventsLogging() const { return this->systemEventsLogging_ != nullptr;};
    void deleteSystemEventsLogging() { this->systemEventsLogging_ = nullptr;};
    inline const ModifyClusterRequestSystemEventsLogging & systemEventsLogging() const { DARABONBA_PTR_GET_CONST(systemEventsLogging_, ModifyClusterRequestSystemEventsLogging) };
    inline ModifyClusterRequestSystemEventsLogging systemEventsLogging() { DARABONBA_PTR_GET(systemEventsLogging_, ModifyClusterRequestSystemEventsLogging) };
    inline ModifyClusterRequest& setSystemEventsLogging(const ModifyClusterRequestSystemEventsLogging & systemEventsLogging) { DARABONBA_PTR_SET_VALUE(systemEventsLogging_, systemEventsLogging) };
    inline ModifyClusterRequest& setSystemEventsLogging(ModifyClusterRequestSystemEventsLogging && systemEventsLogging) { DARABONBA_PTR_SET_RVALUE(systemEventsLogging_, systemEventsLogging) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline ModifyClusterRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // vswitchIds Field Functions 
    bool hasVswitchIds() const { return this->vswitchIds_ != nullptr;};
    void deleteVswitchIds() { this->vswitchIds_ = nullptr;};
    inline const vector<string> & vswitchIds() const { DARABONBA_PTR_GET_CONST(vswitchIds_, vector<string>) };
    inline vector<string> vswitchIds() { DARABONBA_PTR_GET(vswitchIds_, vector<string>) };
    inline ModifyClusterRequest& setVswitchIds(const vector<string> & vswitchIds) { DARABONBA_PTR_SET_VALUE(vswitchIds_, vswitchIds) };
    inline ModifyClusterRequest& setVswitchIds(vector<string> && vswitchIds) { DARABONBA_PTR_SET_RVALUE(vswitchIds_, vswitchIds) };


  protected:
    // The network access control list (ACL) of the SLB instance associated with the API server if the cluster is a registered cluster.
    std::shared_ptr<vector<string>> accessControlList_ = nullptr;
    // The custom subject alternative names (SANs) for the API server certificate to accept requests from specified IP addresses or domain names. This parameter is available only for ACK managed clusters.
    std::shared_ptr<ModifyClusterRequestApiServerCustomCertSans> apiServerCustomCertSans_ = nullptr;
    // Specifies whether to associate an elastic IP address (EIP) with the cluster. This EIP is used to enable access to the API server over the Internet. Valid values:
    // 
    // *   `true`: associates an EIP with the cluster.
    // *   `false`: does not associate an EIP with the cluster.
    std::shared_ptr<bool> apiServerEip_ = nullptr;
    // The ID of the EIP that you want to associate with the API server of the cluster. This parameter takes effect when `api_server_eip` is set to `true`.
    std::shared_ptr<string> apiServerEipId_ = nullptr;
    // The cluster name.
    // 
    // The cluster name must be 1 to 63 characters in length, and can contain digits, letters, and hyphens (-). The cluster name cannot start with a hyphen (-).
    std::shared_ptr<string> clusterName_ = nullptr;
    // The control plane configurations of an ACK dedicated cluster.
    std::shared_ptr<ModifyClusterRequestControlPlaneConfig> controlPlaneConfig_ = nullptr;
    // Specifies whether to enable cluster deletion protection. If you enable this option, the cluster cannot be deleted in the console or by calling API operations. Valid values:
    // 
    // *   `true`: enables cluster deletion protection.
    // *   `false`: disables cluster deletion protection.
    // 
    // Default value: `false`
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // Specifies whether to enable the RAM Roles for Service Accounts (RRSA) feature. This parameter is available only for ACK managed clusters. Valid values:
    // 
    // *   `true`: enables the RRSA feature.
    // *   `false`: disables the RRSA feature.
    std::shared_ptr<bool> enableRrsa_ = nullptr;
    // Specifies whether to remap the test domain name of the cluster. Valid values:
    // 
    // *   `true`: remaps the test domain name of the cluster.
    // *   `false`: does not remap the test domain name of the cluster.
    // 
    // Default value: `false`
    std::shared_ptr<bool> ingressDomainRebinding_ = nullptr;
    // The ID of the Server Load Balancer (SLB) instance of the cluster to be modified.
    std::shared_ptr<string> ingressLoadbalancerId_ = nullptr;
    // Specifies whether to enable instance deletion protection. If you enable this option, the instance cannot be deleted in the console or by calling API operations. Valid values:
    // 
    // *   `true`: enables instance deletion protection.
    // *   `false`: disables instance deletion protection.
    // 
    // Default value: `false`
    std::shared_ptr<bool> instanceDeletionProtection_ = nullptr;
    // The cluster maintenance window. This feature takes effect only for ACK Pro clusters.
    std::shared_ptr<MaintenanceWindow> maintenanceWindow_ = nullptr;
    // The automatic O\\&M policy of the cluster.
    std::shared_ptr<ModifyClusterRequestOperationPolicy> operationPolicy_ = nullptr;
    // The resource group ID of the cluster.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the security group for the control plane. 
    // 
    // - If block rules are configured in the security group, ensure the security group rules allow traffic for protocols and ports required by the cluster. For recommended security group rules, see [Configure and manage security groups for an ACK cluster](https://www.alibabacloud.com/help/en/ack/ack-managed-and-ack-dedicated/user-guide/configure-security-group-rules-to-enforce-access-control-on-ack-clusters?spm=a2c63.p38356.help-menu-85222.d_2_0_4_3.43e35d09s8oSlR).
    // 
    // - For non-ACK dedicated clusters: 
    //   - During security group updates, the cluster control plane and managed components (e.g., terway-controlplane) will restart briefly. Perform this operation during off-peak hours.
    //   - After updating the control plane security group, the Elastic Network Interfaces (ENIs) used by the control plane and managed components will automatically join the new security group.
    // 
    // - For ACK dedicated clusters:
    //    - After updating the control plane security group, newly scaled-out master nodes will automatically apply the new security group. Existing control plane nodes remain unaffected.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The storage configurations of system events.
    std::shared_ptr<ModifyClusterRequestSystemEventsLogging> systemEventsLogging_ = nullptr;
    // The time zone configuration for the cluster.
    // 
    // - After modifying the time zone, cluster inspection configurations will adopt the new time zone.
    // 
    // - For ACK managed clusters:
    //    - During time zone updates, the cluster control plane and managed components (e.g., terway-controlplane) will restart briefly. Perform this operation during off-peak hours.
    //    - After updating the time zone:
    //       - Newly scaled-out nodes will automatically apply the new time zone.
    //       - Existing nodes remain unaffected. Reset the node to apply changes to existing nodes.
    // 
    // - For ACK dedicated clusters:
    //    - After updating the time zone:
    //       - Newly scaled-out nodes (including control plane nodes) automatically apply the new time zone.
    //       - Existing nodes (including control plane nodes) remain unaffected. Reset the node to apply changes to existing nodes.
    //       - For control plane nodes, perform a scale-out followed by a scale-in to apply the new time zone to all control plane nodes.
    std::shared_ptr<string> timezone_ = nullptr;
    // The vSwitches of the control plane. This parameter can be used to change the vSwitches of the control plane in an ACK managed cluster. Take note of the following items:
    // 
    // *   This parameter overwrites the existing configuration. You must specify all vSwitches of the control plane.
    // *   The control plane components restarts during the change process. Exercise caution when you perform this operation.
    // *   Ensure that all security groups of the cluster, including the security groups of the control plane, all node pools, and container network, are allowed to access the CIDR blocks of the new vSwitches. This ensures that the nodes and containers can connect to the API server.
    // *   If the new vSwitches of the control plane are configured with an ACL, ensure that the ACL allows communication between the new vSwitches and CIDR blocks such as those of the cluster nodes and the container network.
    std::shared_ptr<vector<string>> vswitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
