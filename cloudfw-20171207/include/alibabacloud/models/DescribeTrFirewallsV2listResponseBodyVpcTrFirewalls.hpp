// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2LISTRESPONSEBODYVPCTRFIREWALLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2LISTRESPONSEBODYVPCTRFIREWALLS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig.hpp>
#include <alibabacloud/models/DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsIpsConfig.hpp>
#include <alibabacloud/models/DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsProtectedResource.hpp>
#include <alibabacloud/models/DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& obj) { 
      DARABONBA_PTR_TO_JSON(AclConfig, aclConfig_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenName, cenName_);
      DARABONBA_PTR_TO_JSON(CloudFirewallVpcOrderType, cloudFirewallVpcOrderType_);
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_TO_JSON(IpsConfig, ipsConfig_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_TO_JSON(ProtectedResource, protectedResource_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RegionStatus, regionStatus_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(RouteMode, routeMode_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(UnprotectedResource, unprotectedResource_);
      DARABONBA_PTR_TO_JSON(VpcFirewallName, vpcFirewallName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& obj) { 
      DARABONBA_PTR_FROM_JSON(AclConfig, aclConfig_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenName, cenName_);
      DARABONBA_PTR_FROM_JSON(CloudFirewallVpcOrderType, cloudFirewallVpcOrderType_);
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_FROM_JSON(IpsConfig, ipsConfig_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrecheckStatus, precheckStatus_);
      DARABONBA_PTR_FROM_JSON(ProtectedResource, protectedResource_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RegionStatus, regionStatus_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(RouteMode, routeMode_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(UnprotectedResource, unprotectedResource_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallName, vpcFirewallName_);
    };
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls() = default ;
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls(const DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls &) = default ;
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls(DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls &&) = default ;
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls() = default ;
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& operator=(const DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls &) = default ;
    DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& operator=(DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclConfig_ != nullptr
        && this->cenId_ != nullptr && this->cenName_ != nullptr && this->cloudFirewallVpcOrderType_ != nullptr && this->firewallId_ != nullptr && this->firewallSwitchStatus_ != nullptr
        && this->ipsConfig_ != nullptr && this->ownerId_ != nullptr && this->precheckStatus_ != nullptr && this->protectedResource_ != nullptr && this->regionNo_ != nullptr
        && this->regionStatus_ != nullptr && this->resultCode_ != nullptr && this->routeMode_ != nullptr && this->transitRouterId_ != nullptr && this->unprotectedResource_ != nullptr
        && this->vpcFirewallName_ != nullptr; };
    // aclConfig Field Functions 
    bool hasAclConfig() const { return this->aclConfig_ != nullptr;};
    void deleteAclConfig() { this->aclConfig_ = nullptr;};
    inline const Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig & aclConfig() const { DARABONBA_PTR_GET_CONST(aclConfig_, Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig) };
    inline Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig aclConfig() { DARABONBA_PTR_GET(aclConfig_, Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setAclConfig(const Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig & aclConfig) { DARABONBA_PTR_SET_VALUE(aclConfig_, aclConfig) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setAclConfig(Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig && aclConfig) { DARABONBA_PTR_SET_RVALUE(aclConfig_, aclConfig) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenName Field Functions 
    bool hasCenName() const { return this->cenName_ != nullptr;};
    void deleteCenName() { this->cenName_ = nullptr;};
    inline string cenName() const { DARABONBA_PTR_GET_DEFAULT(cenName_, "") };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setCenName(string cenName) { DARABONBA_PTR_SET_VALUE(cenName_, cenName) };


    // cloudFirewallVpcOrderType Field Functions 
    bool hasCloudFirewallVpcOrderType() const { return this->cloudFirewallVpcOrderType_ != nullptr;};
    void deleteCloudFirewallVpcOrderType() { this->cloudFirewallVpcOrderType_ = nullptr;};
    inline string cloudFirewallVpcOrderType() const { DARABONBA_PTR_GET_DEFAULT(cloudFirewallVpcOrderType_, "") };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setCloudFirewallVpcOrderType(string cloudFirewallVpcOrderType) { DARABONBA_PTR_SET_VALUE(cloudFirewallVpcOrderType_, cloudFirewallVpcOrderType) };


    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string firewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // firewallSwitchStatus Field Functions 
    bool hasFirewallSwitchStatus() const { return this->firewallSwitchStatus_ != nullptr;};
    void deleteFirewallSwitchStatus() { this->firewallSwitchStatus_ = nullptr;};
    inline string firewallSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitchStatus_, "") };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setFirewallSwitchStatus(string firewallSwitchStatus) { DARABONBA_PTR_SET_VALUE(firewallSwitchStatus_, firewallSwitchStatus) };


    // ipsConfig Field Functions 
    bool hasIpsConfig() const { return this->ipsConfig_ != nullptr;};
    void deleteIpsConfig() { this->ipsConfig_ = nullptr;};
    inline const Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsIpsConfig & ipsConfig() const { DARABONBA_PTR_GET_CONST(ipsConfig_, Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsIpsConfig) };
    inline Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsIpsConfig ipsConfig() { DARABONBA_PTR_GET(ipsConfig_, Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsIpsConfig) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setIpsConfig(const Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsIpsConfig & ipsConfig) { DARABONBA_PTR_SET_VALUE(ipsConfig_, ipsConfig) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setIpsConfig(Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsIpsConfig && ipsConfig) { DARABONBA_PTR_SET_RVALUE(ipsConfig_, ipsConfig) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // precheckStatus Field Functions 
    bool hasPrecheckStatus() const { return this->precheckStatus_ != nullptr;};
    void deletePrecheckStatus() { this->precheckStatus_ = nullptr;};
    inline string precheckStatus() const { DARABONBA_PTR_GET_DEFAULT(precheckStatus_, "") };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setPrecheckStatus(string precheckStatus) { DARABONBA_PTR_SET_VALUE(precheckStatus_, precheckStatus) };


    // protectedResource Field Functions 
    bool hasProtectedResource() const { return this->protectedResource_ != nullptr;};
    void deleteProtectedResource() { this->protectedResource_ = nullptr;};
    inline const Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsProtectedResource & protectedResource() const { DARABONBA_PTR_GET_CONST(protectedResource_, Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsProtectedResource) };
    inline Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsProtectedResource protectedResource() { DARABONBA_PTR_GET(protectedResource_, Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsProtectedResource) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setProtectedResource(const Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsProtectedResource & protectedResource) { DARABONBA_PTR_SET_VALUE(protectedResource_, protectedResource) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setProtectedResource(Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsProtectedResource && protectedResource) { DARABONBA_PTR_SET_RVALUE(protectedResource_, protectedResource) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // regionStatus Field Functions 
    bool hasRegionStatus() const { return this->regionStatus_ != nullptr;};
    void deleteRegionStatus() { this->regionStatus_ = nullptr;};
    inline string regionStatus() const { DARABONBA_PTR_GET_DEFAULT(regionStatus_, "") };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setRegionStatus(string regionStatus) { DARABONBA_PTR_SET_VALUE(regionStatus_, regionStatus) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // routeMode Field Functions 
    bool hasRouteMode() const { return this->routeMode_ != nullptr;};
    void deleteRouteMode() { this->routeMode_ = nullptr;};
    inline string routeMode() const { DARABONBA_PTR_GET_DEFAULT(routeMode_, "") };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setRouteMode(string routeMode) { DARABONBA_PTR_SET_VALUE(routeMode_, routeMode) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // unprotectedResource Field Functions 
    bool hasUnprotectedResource() const { return this->unprotectedResource_ != nullptr;};
    void deleteUnprotectedResource() { this->unprotectedResource_ = nullptr;};
    inline const Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource & unprotectedResource() const { DARABONBA_PTR_GET_CONST(unprotectedResource_, Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource) };
    inline Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource unprotectedResource() { DARABONBA_PTR_GET(unprotectedResource_, Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setUnprotectedResource(const Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource & unprotectedResource) { DARABONBA_PTR_SET_VALUE(unprotectedResource_, unprotectedResource) };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setUnprotectedResource(Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource && unprotectedResource) { DARABONBA_PTR_SET_RVALUE(unprotectedResource_, unprotectedResource) };


    // vpcFirewallName Field Functions 
    bool hasVpcFirewallName() const { return this->vpcFirewallName_ != nullptr;};
    void deleteVpcFirewallName() { this->vpcFirewallName_ = nullptr;};
    inline string vpcFirewallName() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallName_, "") };
    inline DescribeTrFirewallsV2ListResponseBodyVpcTrFirewalls& setVpcFirewallName(string vpcFirewallName) { DARABONBA_PTR_SET_VALUE(vpcFirewallName_, vpcFirewallName) };


  protected:
    // ACL engine mode.
    std::shared_ptr<Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsAclConfig> aclConfig_ = nullptr;
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The name of the CEN instance.
    std::shared_ptr<string> cenName_ = nullptr;
    // The party responsible for the TR fees generated by the VPC firewall. Values:
    // 
    // - **PayByCloudFirewall**: Fees are borne by the Cloud Firewall.
    // - **PayByCenOwner**: Fees are borne by the account to which the CEN instance belongs.
    std::shared_ptr<string> cloudFirewallVpcOrderType_ = nullptr;
    // The instance ID of the VPC firewall.
    std::shared_ptr<string> firewallId_ = nullptr;
    // The status of the VPC firewall. Valid values:
    // 
    // *   **opened**: The VPC firewall is enabled.
    // *   **closed**: The VPC firewall is disabled.
    // *   **notconfigured**: The VPC firewall is not created.
    // *   **configured**: The VPC firewall is created but is not enabled.
    // *   **creating**: The VPC firewall is being created.
    // *   **opening**: The VPC firewall is being enabled.
    // *   **deleting**: The VPC firewall is being deleted.
    // 
    // >  If you do not specify this parameter, VPC firewalls in all states are queried.
    std::shared_ptr<string> firewallSwitchStatus_ = nullptr;
    // The intrusion prevention system (IPS) configurations.
    std::shared_ptr<Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsIpsConfig> ipsConfig_ = nullptr;
    // The ID of the Alibaba Cloud account to which the VPC belongs.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Indicates whether the VPC firewall can be automatically enabled. Valid values:
    // 
    // *   **passed**: yes
    // *   **failed**: no
    // *   **unknown**
    std::shared_ptr<string> precheckStatus_ = nullptr;
    // The protected resources.
    std::shared_ptr<Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsProtectedResource> protectedResource_ = nullptr;
    // The region ID of the transit router.
    std::shared_ptr<string> regionNo_ = nullptr;
    // Indicates whether you can create a VPC firewall in a specified region. Valid values:
    // 
    // *   **enable**: yes
    // *   **disable**: no
    std::shared_ptr<string> regionStatus_ = nullptr;
    // The result code of the operation that creates the VPC firewall. Valid values:
    // 
    // *   **RegionDisable**: VPC Firewall is not supported in the region of the network instance. You cannot create a VPC firewall for the network instance.
    // *   **Empty string**: You can create a VPC firewall for the network instance.
    std::shared_ptr<string> resultCode_ = nullptr;
    // The routing mode of the VPC firewall. Valid values:
    // 
    // *   **managed**: automatic mode
    // *   **manual**: manual mode
    std::shared_ptr<string> routeMode_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The unprotected resources.
    std::shared_ptr<Models::DescribeTrFirewallsV2ListResponseBodyVpcTrFirewallsUnprotectedResource> unprotectedResource_ = nullptr;
    // The instance name of the VPC firewall.
    std::shared_ptr<string> vpcFirewallName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
