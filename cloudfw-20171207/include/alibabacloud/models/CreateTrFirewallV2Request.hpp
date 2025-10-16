// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRFIREWALLV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRFIREWALLV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateTrFirewallV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrFirewallV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(FirewallDescription, firewallDescription_);
      DARABONBA_PTR_TO_JSON(FirewallName, firewallName_);
      DARABONBA_PTR_TO_JSON(FirewallSubnetCidr, firewallSubnetCidr_);
      DARABONBA_PTR_TO_JSON(FirewallVpcCidr, firewallVpcCidr_);
      DARABONBA_PTR_TO_JSON(FirewallVpcId, firewallVpcId_);
      DARABONBA_PTR_TO_JSON(FirewallVswitchId, firewallVswitchId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RouteMode, routeMode_);
      DARABONBA_PTR_TO_JSON(TrAttachmentMasterCidr, trAttachmentMasterCidr_);
      DARABONBA_PTR_TO_JSON(TrAttachmentMasterZone, trAttachmentMasterZone_);
      DARABONBA_PTR_TO_JSON(TrAttachmentSlaveCidr, trAttachmentSlaveCidr_);
      DARABONBA_PTR_TO_JSON(TrAttachmentSlaveZone, trAttachmentSlaveZone_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrFirewallV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(FirewallDescription, firewallDescription_);
      DARABONBA_PTR_FROM_JSON(FirewallName, firewallName_);
      DARABONBA_PTR_FROM_JSON(FirewallSubnetCidr, firewallSubnetCidr_);
      DARABONBA_PTR_FROM_JSON(FirewallVpcCidr, firewallVpcCidr_);
      DARABONBA_PTR_FROM_JSON(FirewallVpcId, firewallVpcId_);
      DARABONBA_PTR_FROM_JSON(FirewallVswitchId, firewallVswitchId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RouteMode, routeMode_);
      DARABONBA_PTR_FROM_JSON(TrAttachmentMasterCidr, trAttachmentMasterCidr_);
      DARABONBA_PTR_FROM_JSON(TrAttachmentMasterZone, trAttachmentMasterZone_);
      DARABONBA_PTR_FROM_JSON(TrAttachmentSlaveCidr, trAttachmentSlaveCidr_);
      DARABONBA_PTR_FROM_JSON(TrAttachmentSlaveZone, trAttachmentSlaveZone_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    CreateTrFirewallV2Request() = default ;
    CreateTrFirewallV2Request(const CreateTrFirewallV2Request &) = default ;
    CreateTrFirewallV2Request(CreateTrFirewallV2Request &&) = default ;
    CreateTrFirewallV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrFirewallV2Request() = default ;
    CreateTrFirewallV2Request& operator=(const CreateTrFirewallV2Request &) = default ;
    CreateTrFirewallV2Request& operator=(CreateTrFirewallV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cenId_ == nullptr
        && return this->firewallDescription_ == nullptr && return this->firewallName_ == nullptr && return this->firewallSubnetCidr_ == nullptr && return this->firewallVpcCidr_ == nullptr && return this->firewallVpcId_ == nullptr
        && return this->firewallVswitchId_ == nullptr && return this->lang_ == nullptr && return this->regionNo_ == nullptr && return this->routeMode_ == nullptr && return this->trAttachmentMasterCidr_ == nullptr
        && return this->trAttachmentMasterZone_ == nullptr && return this->trAttachmentSlaveCidr_ == nullptr && return this->trAttachmentSlaveZone_ == nullptr && return this->transitRouterId_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateTrFirewallV2Request& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // firewallDescription Field Functions 
    bool hasFirewallDescription() const { return this->firewallDescription_ != nullptr;};
    void deleteFirewallDescription() { this->firewallDescription_ = nullptr;};
    inline string firewallDescription() const { DARABONBA_PTR_GET_DEFAULT(firewallDescription_, "") };
    inline CreateTrFirewallV2Request& setFirewallDescription(string firewallDescription) { DARABONBA_PTR_SET_VALUE(firewallDescription_, firewallDescription) };


    // firewallName Field Functions 
    bool hasFirewallName() const { return this->firewallName_ != nullptr;};
    void deleteFirewallName() { this->firewallName_ = nullptr;};
    inline string firewallName() const { DARABONBA_PTR_GET_DEFAULT(firewallName_, "") };
    inline CreateTrFirewallV2Request& setFirewallName(string firewallName) { DARABONBA_PTR_SET_VALUE(firewallName_, firewallName) };


    // firewallSubnetCidr Field Functions 
    bool hasFirewallSubnetCidr() const { return this->firewallSubnetCidr_ != nullptr;};
    void deleteFirewallSubnetCidr() { this->firewallSubnetCidr_ = nullptr;};
    inline string firewallSubnetCidr() const { DARABONBA_PTR_GET_DEFAULT(firewallSubnetCidr_, "") };
    inline CreateTrFirewallV2Request& setFirewallSubnetCidr(string firewallSubnetCidr) { DARABONBA_PTR_SET_VALUE(firewallSubnetCidr_, firewallSubnetCidr) };


    // firewallVpcCidr Field Functions 
    bool hasFirewallVpcCidr() const { return this->firewallVpcCidr_ != nullptr;};
    void deleteFirewallVpcCidr() { this->firewallVpcCidr_ = nullptr;};
    inline string firewallVpcCidr() const { DARABONBA_PTR_GET_DEFAULT(firewallVpcCidr_, "") };
    inline CreateTrFirewallV2Request& setFirewallVpcCidr(string firewallVpcCidr) { DARABONBA_PTR_SET_VALUE(firewallVpcCidr_, firewallVpcCidr) };


    // firewallVpcId Field Functions 
    bool hasFirewallVpcId() const { return this->firewallVpcId_ != nullptr;};
    void deleteFirewallVpcId() { this->firewallVpcId_ = nullptr;};
    inline string firewallVpcId() const { DARABONBA_PTR_GET_DEFAULT(firewallVpcId_, "") };
    inline CreateTrFirewallV2Request& setFirewallVpcId(string firewallVpcId) { DARABONBA_PTR_SET_VALUE(firewallVpcId_, firewallVpcId) };


    // firewallVswitchId Field Functions 
    bool hasFirewallVswitchId() const { return this->firewallVswitchId_ != nullptr;};
    void deleteFirewallVswitchId() { this->firewallVswitchId_ = nullptr;};
    inline string firewallVswitchId() const { DARABONBA_PTR_GET_DEFAULT(firewallVswitchId_, "") };
    inline CreateTrFirewallV2Request& setFirewallVswitchId(string firewallVswitchId) { DARABONBA_PTR_SET_VALUE(firewallVswitchId_, firewallVswitchId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateTrFirewallV2Request& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline CreateTrFirewallV2Request& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // routeMode Field Functions 
    bool hasRouteMode() const { return this->routeMode_ != nullptr;};
    void deleteRouteMode() { this->routeMode_ = nullptr;};
    inline string routeMode() const { DARABONBA_PTR_GET_DEFAULT(routeMode_, "") };
    inline CreateTrFirewallV2Request& setRouteMode(string routeMode) { DARABONBA_PTR_SET_VALUE(routeMode_, routeMode) };


    // trAttachmentMasterCidr Field Functions 
    bool hasTrAttachmentMasterCidr() const { return this->trAttachmentMasterCidr_ != nullptr;};
    void deleteTrAttachmentMasterCidr() { this->trAttachmentMasterCidr_ = nullptr;};
    inline string trAttachmentMasterCidr() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentMasterCidr_, "") };
    inline CreateTrFirewallV2Request& setTrAttachmentMasterCidr(string trAttachmentMasterCidr) { DARABONBA_PTR_SET_VALUE(trAttachmentMasterCidr_, trAttachmentMasterCidr) };


    // trAttachmentMasterZone Field Functions 
    bool hasTrAttachmentMasterZone() const { return this->trAttachmentMasterZone_ != nullptr;};
    void deleteTrAttachmentMasterZone() { this->trAttachmentMasterZone_ = nullptr;};
    inline string trAttachmentMasterZone() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentMasterZone_, "") };
    inline CreateTrFirewallV2Request& setTrAttachmentMasterZone(string trAttachmentMasterZone) { DARABONBA_PTR_SET_VALUE(trAttachmentMasterZone_, trAttachmentMasterZone) };


    // trAttachmentSlaveCidr Field Functions 
    bool hasTrAttachmentSlaveCidr() const { return this->trAttachmentSlaveCidr_ != nullptr;};
    void deleteTrAttachmentSlaveCidr() { this->trAttachmentSlaveCidr_ = nullptr;};
    inline string trAttachmentSlaveCidr() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentSlaveCidr_, "") };
    inline CreateTrFirewallV2Request& setTrAttachmentSlaveCidr(string trAttachmentSlaveCidr) { DARABONBA_PTR_SET_VALUE(trAttachmentSlaveCidr_, trAttachmentSlaveCidr) };


    // trAttachmentSlaveZone Field Functions 
    bool hasTrAttachmentSlaveZone() const { return this->trAttachmentSlaveZone_ != nullptr;};
    void deleteTrAttachmentSlaveZone() { this->trAttachmentSlaveZone_ = nullptr;};
    inline string trAttachmentSlaveZone() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentSlaveZone_, "") };
    inline CreateTrFirewallV2Request& setTrAttachmentSlaveZone(string trAttachmentSlaveZone) { DARABONBA_PTR_SET_VALUE(trAttachmentSlaveZone_, trAttachmentSlaveZone) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateTrFirewallV2Request& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The description of the firewall.
    std::shared_ptr<string> firewallDescription_ = nullptr;
    // The name of the firewall.
    std::shared_ptr<string> firewallName_ = nullptr;
    // The subnet CIDR block of the VPC in which the ENI of the firewall is stored in automatic mode.
    std::shared_ptr<string> firewallSubnetCidr_ = nullptr;
    // The CIDR block that is allocated to the VPC created for the VPC firewall in automatic mode.
    std::shared_ptr<string> firewallVpcCidr_ = nullptr;
    // The ID of the VPC in which the ENI associated with the VPC firewall is created in manual mode.
    std::shared_ptr<string> firewallVpcId_ = nullptr;
    // The ID of the vSwitch that is used to create the ENI in manual mode.
    std::shared_ptr<string> firewallVswitchId_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The region ID of the route router.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The routing mode of the VPC firewall. Valid values:
    // 
    // *   **managed**: automatic mode
    // *   **manual**: manual mode
    std::shared_ptr<string> routeMode_ = nullptr;
    // The primary subnet CIDR block that the VPC uses to connect to the transit router in automatic mode.
    std::shared_ptr<string> trAttachmentMasterCidr_ = nullptr;
    // The primary zone for the vSwitch.
    std::shared_ptr<string> trAttachmentMasterZone_ = nullptr;
    // The secondary subnet CIDR block that the VPC uses to connect to the transit router in automatic mode.
    std::shared_ptr<string> trAttachmentSlaveCidr_ = nullptr;
    // The secondary zone for the vSwitch.
    std::shared_ptr<string> trAttachmentSlaveZone_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
