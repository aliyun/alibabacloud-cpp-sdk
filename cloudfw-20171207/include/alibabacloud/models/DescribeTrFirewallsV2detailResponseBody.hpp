// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2DETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2DETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrFirewallsV2DetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallsV2DetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(FirewallDescription, firewallDescription_);
      DARABONBA_PTR_TO_JSON(FirewallEniId, firewallEniId_);
      DARABONBA_PTR_TO_JSON(FirewallEniVpcId, firewallEniVpcId_);
      DARABONBA_PTR_TO_JSON(FirewallEniVswitchId, firewallEniVswitchId_);
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(FirewallName, firewallName_);
      DARABONBA_PTR_TO_JSON(FirewallStatus, firewallStatus_);
      DARABONBA_PTR_TO_JSON(FirewallSubnetCidr, firewallSubnetCidr_);
      DARABONBA_PTR_TO_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_TO_JSON(FirewallVpcCidr, firewallVpcCidr_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteMode, routeMode_);
      DARABONBA_PTR_TO_JSON(TrAttachmentMasterCidr, trAttachmentMasterCidr_);
      DARABONBA_PTR_TO_JSON(TrAttachmentMasterZone, trAttachmentMasterZone_);
      DARABONBA_PTR_TO_JSON(TrAttachmentSlaveCidr, trAttachmentSlaveCidr_);
      DARABONBA_PTR_TO_JSON(TrAttachmentSlaveZone, trAttachmentSlaveZone_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallsV2DetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(FirewallDescription, firewallDescription_);
      DARABONBA_PTR_FROM_JSON(FirewallEniId, firewallEniId_);
      DARABONBA_PTR_FROM_JSON(FirewallEniVpcId, firewallEniVpcId_);
      DARABONBA_PTR_FROM_JSON(FirewallEniVswitchId, firewallEniVswitchId_);
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(FirewallName, firewallName_);
      DARABONBA_PTR_FROM_JSON(FirewallStatus, firewallStatus_);
      DARABONBA_PTR_FROM_JSON(FirewallSubnetCidr, firewallSubnetCidr_);
      DARABONBA_PTR_FROM_JSON(FirewallSwitchStatus, firewallSwitchStatus_);
      DARABONBA_PTR_FROM_JSON(FirewallVpcCidr, firewallVpcCidr_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteMode, routeMode_);
      DARABONBA_PTR_FROM_JSON(TrAttachmentMasterCidr, trAttachmentMasterCidr_);
      DARABONBA_PTR_FROM_JSON(TrAttachmentMasterZone, trAttachmentMasterZone_);
      DARABONBA_PTR_FROM_JSON(TrAttachmentSlaveCidr, trAttachmentSlaveCidr_);
      DARABONBA_PTR_FROM_JSON(TrAttachmentSlaveZone, trAttachmentSlaveZone_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    DescribeTrFirewallsV2DetailResponseBody() = default ;
    DescribeTrFirewallsV2DetailResponseBody(const DescribeTrFirewallsV2DetailResponseBody &) = default ;
    DescribeTrFirewallsV2DetailResponseBody(DescribeTrFirewallsV2DetailResponseBody &&) = default ;
    DescribeTrFirewallsV2DetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallsV2DetailResponseBody() = default ;
    DescribeTrFirewallsV2DetailResponseBody& operator=(const DescribeTrFirewallsV2DetailResponseBody &) = default ;
    DescribeTrFirewallsV2DetailResponseBody& operator=(DescribeTrFirewallsV2DetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->firewallDescription_ != nullptr && this->firewallEniId_ != nullptr && this->firewallEniVpcId_ != nullptr && this->firewallEniVswitchId_ != nullptr && this->firewallId_ != nullptr
        && this->firewallName_ != nullptr && this->firewallStatus_ != nullptr && this->firewallSubnetCidr_ != nullptr && this->firewallSwitchStatus_ != nullptr && this->firewallVpcCidr_ != nullptr
        && this->regionNo_ != nullptr && this->requestId_ != nullptr && this->routeMode_ != nullptr && this->trAttachmentMasterCidr_ != nullptr && this->trAttachmentMasterZone_ != nullptr
        && this->trAttachmentSlaveCidr_ != nullptr && this->trAttachmentSlaveZone_ != nullptr && this->transitRouterId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // firewallDescription Field Functions 
    bool hasFirewallDescription() const { return this->firewallDescription_ != nullptr;};
    void deleteFirewallDescription() { this->firewallDescription_ = nullptr;};
    inline string firewallDescription() const { DARABONBA_PTR_GET_DEFAULT(firewallDescription_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallDescription(string firewallDescription) { DARABONBA_PTR_SET_VALUE(firewallDescription_, firewallDescription) };


    // firewallEniId Field Functions 
    bool hasFirewallEniId() const { return this->firewallEniId_ != nullptr;};
    void deleteFirewallEniId() { this->firewallEniId_ = nullptr;};
    inline string firewallEniId() const { DARABONBA_PTR_GET_DEFAULT(firewallEniId_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallEniId(string firewallEniId) { DARABONBA_PTR_SET_VALUE(firewallEniId_, firewallEniId) };


    // firewallEniVpcId Field Functions 
    bool hasFirewallEniVpcId() const { return this->firewallEniVpcId_ != nullptr;};
    void deleteFirewallEniVpcId() { this->firewallEniVpcId_ = nullptr;};
    inline string firewallEniVpcId() const { DARABONBA_PTR_GET_DEFAULT(firewallEniVpcId_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallEniVpcId(string firewallEniVpcId) { DARABONBA_PTR_SET_VALUE(firewallEniVpcId_, firewallEniVpcId) };


    // firewallEniVswitchId Field Functions 
    bool hasFirewallEniVswitchId() const { return this->firewallEniVswitchId_ != nullptr;};
    void deleteFirewallEniVswitchId() { this->firewallEniVswitchId_ = nullptr;};
    inline string firewallEniVswitchId() const { DARABONBA_PTR_GET_DEFAULT(firewallEniVswitchId_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallEniVswitchId(string firewallEniVswitchId) { DARABONBA_PTR_SET_VALUE(firewallEniVswitchId_, firewallEniVswitchId) };


    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string firewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // firewallName Field Functions 
    bool hasFirewallName() const { return this->firewallName_ != nullptr;};
    void deleteFirewallName() { this->firewallName_ = nullptr;};
    inline string firewallName() const { DARABONBA_PTR_GET_DEFAULT(firewallName_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallName(string firewallName) { DARABONBA_PTR_SET_VALUE(firewallName_, firewallName) };


    // firewallStatus Field Functions 
    bool hasFirewallStatus() const { return this->firewallStatus_ != nullptr;};
    void deleteFirewallStatus() { this->firewallStatus_ = nullptr;};
    inline string firewallStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallStatus_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallStatus(string firewallStatus) { DARABONBA_PTR_SET_VALUE(firewallStatus_, firewallStatus) };


    // firewallSubnetCidr Field Functions 
    bool hasFirewallSubnetCidr() const { return this->firewallSubnetCidr_ != nullptr;};
    void deleteFirewallSubnetCidr() { this->firewallSubnetCidr_ = nullptr;};
    inline string firewallSubnetCidr() const { DARABONBA_PTR_GET_DEFAULT(firewallSubnetCidr_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallSubnetCidr(string firewallSubnetCidr) { DARABONBA_PTR_SET_VALUE(firewallSubnetCidr_, firewallSubnetCidr) };


    // firewallSwitchStatus Field Functions 
    bool hasFirewallSwitchStatus() const { return this->firewallSwitchStatus_ != nullptr;};
    void deleteFirewallSwitchStatus() { this->firewallSwitchStatus_ = nullptr;};
    inline string firewallSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitchStatus_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallSwitchStatus(string firewallSwitchStatus) { DARABONBA_PTR_SET_VALUE(firewallSwitchStatus_, firewallSwitchStatus) };


    // firewallVpcCidr Field Functions 
    bool hasFirewallVpcCidr() const { return this->firewallVpcCidr_ != nullptr;};
    void deleteFirewallVpcCidr() { this->firewallVpcCidr_ = nullptr;};
    inline string firewallVpcCidr() const { DARABONBA_PTR_GET_DEFAULT(firewallVpcCidr_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallVpcCidr(string firewallVpcCidr) { DARABONBA_PTR_SET_VALUE(firewallVpcCidr_, firewallVpcCidr) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeMode Field Functions 
    bool hasRouteMode() const { return this->routeMode_ != nullptr;};
    void deleteRouteMode() { this->routeMode_ = nullptr;};
    inline string routeMode() const { DARABONBA_PTR_GET_DEFAULT(routeMode_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setRouteMode(string routeMode) { DARABONBA_PTR_SET_VALUE(routeMode_, routeMode) };


    // trAttachmentMasterCidr Field Functions 
    bool hasTrAttachmentMasterCidr() const { return this->trAttachmentMasterCidr_ != nullptr;};
    void deleteTrAttachmentMasterCidr() { this->trAttachmentMasterCidr_ = nullptr;};
    inline string trAttachmentMasterCidr() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentMasterCidr_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setTrAttachmentMasterCidr(string trAttachmentMasterCidr) { DARABONBA_PTR_SET_VALUE(trAttachmentMasterCidr_, trAttachmentMasterCidr) };


    // trAttachmentMasterZone Field Functions 
    bool hasTrAttachmentMasterZone() const { return this->trAttachmentMasterZone_ != nullptr;};
    void deleteTrAttachmentMasterZone() { this->trAttachmentMasterZone_ = nullptr;};
    inline string trAttachmentMasterZone() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentMasterZone_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setTrAttachmentMasterZone(string trAttachmentMasterZone) { DARABONBA_PTR_SET_VALUE(trAttachmentMasterZone_, trAttachmentMasterZone) };


    // trAttachmentSlaveCidr Field Functions 
    bool hasTrAttachmentSlaveCidr() const { return this->trAttachmentSlaveCidr_ != nullptr;};
    void deleteTrAttachmentSlaveCidr() { this->trAttachmentSlaveCidr_ = nullptr;};
    inline string trAttachmentSlaveCidr() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentSlaveCidr_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setTrAttachmentSlaveCidr(string trAttachmentSlaveCidr) { DARABONBA_PTR_SET_VALUE(trAttachmentSlaveCidr_, trAttachmentSlaveCidr) };


    // trAttachmentSlaveZone Field Functions 
    bool hasTrAttachmentSlaveZone() const { return this->trAttachmentSlaveZone_ != nullptr;};
    void deleteTrAttachmentSlaveZone() { this->trAttachmentSlaveZone_ = nullptr;};
    inline string trAttachmentSlaveZone() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentSlaveZone_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setTrAttachmentSlaveZone(string trAttachmentSlaveZone) { DARABONBA_PTR_SET_VALUE(trAttachmentSlaveZone_, trAttachmentSlaveZone) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The description of the VPC firewall.
    std::shared_ptr<string> firewallDescription_ = nullptr;
    // The ID of the Elastic Network Interface (ENI) with which the VPC firewall is associated.
    std::shared_ptr<string> firewallEniId_ = nullptr;
    // The ID of the VPC to which the ENI is attached.
    std::shared_ptr<string> firewallEniVpcId_ = nullptr;
    // The ID of the vSwitch with which the ENI is associated.
    std::shared_ptr<string> firewallEniVswitchId_ = nullptr;
    // The instance ID of the VPC firewall.
    std::shared_ptr<string> firewallId_ = nullptr;
    // The name of the VPC firewall.
    std::shared_ptr<string> firewallName_ = nullptr;
    // The status of the VPC firewall. Valid values:
    // 
    // *   Creating
    // *   Deleting
    // *   Ready
    std::shared_ptr<string> firewallStatus_ = nullptr;
    // The subnet CIDR block of the VPC in which the ENI of the firewall is stored in automatic mode.
    std::shared_ptr<string> firewallSubnetCidr_ = nullptr;
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
    // > If you do not specify this parameter, VPC firewalls in all states are queried.
    std::shared_ptr<string> firewallSwitchStatus_ = nullptr;
    // The CIDR block that is allocated to the VPC created for the VPC firewall in automatic mode.
    std::shared_ptr<string> firewallVpcCidr_ = nullptr;
    // The region ID of the transit router.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The routing mode of the VPC firewall. Valid values:
    // 
    // *   **managed**: automatic mode
    // *   **manual**: manual mode
    std::shared_ptr<string> routeMode_ = nullptr;
    // The primary subnet CIDR block that the VPC uses to connect to the transit router in automatic mode.
    std::shared_ptr<string> trAttachmentMasterCidr_ = nullptr;
    // In automatic mode, the primary availability zone of the subnet in the firewall VPC used for connecting to TR.
    std::shared_ptr<string> trAttachmentMasterZone_ = nullptr;
    // The secondary subnet CIDR block that the VPC uses to connect to the transit router in automatic mode.
    std::shared_ptr<string> trAttachmentSlaveCidr_ = nullptr;
    // In automatic mode, the backup availability zone for the subnet used to connect TR in the firewall VPC.
    std::shared_ptr<string> trAttachmentSlaveZone_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
