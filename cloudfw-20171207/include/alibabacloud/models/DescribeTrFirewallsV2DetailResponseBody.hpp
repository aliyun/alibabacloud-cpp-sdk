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
      DARABONBA_PTR_TO_JSON(TrAttachmentId, trAttachmentId_);
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
      DARABONBA_PTR_FROM_JSON(TrAttachmentId, trAttachmentId_);
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
    virtual bool empty() const override { return this->cenId_ == nullptr
        && this->firewallDescription_ == nullptr && this->firewallEniId_ == nullptr && this->firewallEniVpcId_ == nullptr && this->firewallEniVswitchId_ == nullptr && this->firewallId_ == nullptr
        && this->firewallName_ == nullptr && this->firewallStatus_ == nullptr && this->firewallSubnetCidr_ == nullptr && this->firewallSwitchStatus_ == nullptr && this->firewallVpcCidr_ == nullptr
        && this->regionNo_ == nullptr && this->requestId_ == nullptr && this->routeMode_ == nullptr && this->trAttachmentId_ == nullptr && this->trAttachmentMasterCidr_ == nullptr
        && this->trAttachmentMasterZone_ == nullptr && this->trAttachmentSlaveCidr_ == nullptr && this->trAttachmentSlaveZone_ == nullptr && this->transitRouterId_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // firewallDescription Field Functions 
    bool hasFirewallDescription() const { return this->firewallDescription_ != nullptr;};
    void deleteFirewallDescription() { this->firewallDescription_ = nullptr;};
    inline string getFirewallDescription() const { DARABONBA_PTR_GET_DEFAULT(firewallDescription_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallDescription(string firewallDescription) { DARABONBA_PTR_SET_VALUE(firewallDescription_, firewallDescription) };


    // firewallEniId Field Functions 
    bool hasFirewallEniId() const { return this->firewallEniId_ != nullptr;};
    void deleteFirewallEniId() { this->firewallEniId_ = nullptr;};
    inline string getFirewallEniId() const { DARABONBA_PTR_GET_DEFAULT(firewallEniId_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallEniId(string firewallEniId) { DARABONBA_PTR_SET_VALUE(firewallEniId_, firewallEniId) };


    // firewallEniVpcId Field Functions 
    bool hasFirewallEniVpcId() const { return this->firewallEniVpcId_ != nullptr;};
    void deleteFirewallEniVpcId() { this->firewallEniVpcId_ = nullptr;};
    inline string getFirewallEniVpcId() const { DARABONBA_PTR_GET_DEFAULT(firewallEniVpcId_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallEniVpcId(string firewallEniVpcId) { DARABONBA_PTR_SET_VALUE(firewallEniVpcId_, firewallEniVpcId) };


    // firewallEniVswitchId Field Functions 
    bool hasFirewallEniVswitchId() const { return this->firewallEniVswitchId_ != nullptr;};
    void deleteFirewallEniVswitchId() { this->firewallEniVswitchId_ = nullptr;};
    inline string getFirewallEniVswitchId() const { DARABONBA_PTR_GET_DEFAULT(firewallEniVswitchId_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallEniVswitchId(string firewallEniVswitchId) { DARABONBA_PTR_SET_VALUE(firewallEniVswitchId_, firewallEniVswitchId) };


    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string getFirewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // firewallName Field Functions 
    bool hasFirewallName() const { return this->firewallName_ != nullptr;};
    void deleteFirewallName() { this->firewallName_ = nullptr;};
    inline string getFirewallName() const { DARABONBA_PTR_GET_DEFAULT(firewallName_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallName(string firewallName) { DARABONBA_PTR_SET_VALUE(firewallName_, firewallName) };


    // firewallStatus Field Functions 
    bool hasFirewallStatus() const { return this->firewallStatus_ != nullptr;};
    void deleteFirewallStatus() { this->firewallStatus_ = nullptr;};
    inline string getFirewallStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallStatus_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallStatus(string firewallStatus) { DARABONBA_PTR_SET_VALUE(firewallStatus_, firewallStatus) };


    // firewallSubnetCidr Field Functions 
    bool hasFirewallSubnetCidr() const { return this->firewallSubnetCidr_ != nullptr;};
    void deleteFirewallSubnetCidr() { this->firewallSubnetCidr_ = nullptr;};
    inline string getFirewallSubnetCidr() const { DARABONBA_PTR_GET_DEFAULT(firewallSubnetCidr_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallSubnetCidr(string firewallSubnetCidr) { DARABONBA_PTR_SET_VALUE(firewallSubnetCidr_, firewallSubnetCidr) };


    // firewallSwitchStatus Field Functions 
    bool hasFirewallSwitchStatus() const { return this->firewallSwitchStatus_ != nullptr;};
    void deleteFirewallSwitchStatus() { this->firewallSwitchStatus_ = nullptr;};
    inline string getFirewallSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitchStatus_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallSwitchStatus(string firewallSwitchStatus) { DARABONBA_PTR_SET_VALUE(firewallSwitchStatus_, firewallSwitchStatus) };


    // firewallVpcCidr Field Functions 
    bool hasFirewallVpcCidr() const { return this->firewallVpcCidr_ != nullptr;};
    void deleteFirewallVpcCidr() { this->firewallVpcCidr_ = nullptr;};
    inline string getFirewallVpcCidr() const { DARABONBA_PTR_GET_DEFAULT(firewallVpcCidr_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setFirewallVpcCidr(string firewallVpcCidr) { DARABONBA_PTR_SET_VALUE(firewallVpcCidr_, firewallVpcCidr) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeMode Field Functions 
    bool hasRouteMode() const { return this->routeMode_ != nullptr;};
    void deleteRouteMode() { this->routeMode_ = nullptr;};
    inline string getRouteMode() const { DARABONBA_PTR_GET_DEFAULT(routeMode_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setRouteMode(string routeMode) { DARABONBA_PTR_SET_VALUE(routeMode_, routeMode) };


    // trAttachmentId Field Functions 
    bool hasTrAttachmentId() const { return this->trAttachmentId_ != nullptr;};
    void deleteTrAttachmentId() { this->trAttachmentId_ = nullptr;};
    inline string getTrAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentId_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setTrAttachmentId(string trAttachmentId) { DARABONBA_PTR_SET_VALUE(trAttachmentId_, trAttachmentId) };


    // trAttachmentMasterCidr Field Functions 
    bool hasTrAttachmentMasterCidr() const { return this->trAttachmentMasterCidr_ != nullptr;};
    void deleteTrAttachmentMasterCidr() { this->trAttachmentMasterCidr_ = nullptr;};
    inline string getTrAttachmentMasterCidr() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentMasterCidr_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setTrAttachmentMasterCidr(string trAttachmentMasterCidr) { DARABONBA_PTR_SET_VALUE(trAttachmentMasterCidr_, trAttachmentMasterCidr) };


    // trAttachmentMasterZone Field Functions 
    bool hasTrAttachmentMasterZone() const { return this->trAttachmentMasterZone_ != nullptr;};
    void deleteTrAttachmentMasterZone() { this->trAttachmentMasterZone_ = nullptr;};
    inline string getTrAttachmentMasterZone() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentMasterZone_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setTrAttachmentMasterZone(string trAttachmentMasterZone) { DARABONBA_PTR_SET_VALUE(trAttachmentMasterZone_, trAttachmentMasterZone) };


    // trAttachmentSlaveCidr Field Functions 
    bool hasTrAttachmentSlaveCidr() const { return this->trAttachmentSlaveCidr_ != nullptr;};
    void deleteTrAttachmentSlaveCidr() { this->trAttachmentSlaveCidr_ = nullptr;};
    inline string getTrAttachmentSlaveCidr() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentSlaveCidr_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setTrAttachmentSlaveCidr(string trAttachmentSlaveCidr) { DARABONBA_PTR_SET_VALUE(trAttachmentSlaveCidr_, trAttachmentSlaveCidr) };


    // trAttachmentSlaveZone Field Functions 
    bool hasTrAttachmentSlaveZone() const { return this->trAttachmentSlaveZone_ != nullptr;};
    void deleteTrAttachmentSlaveZone() { this->trAttachmentSlaveZone_ = nullptr;};
    inline string getTrAttachmentSlaveZone() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentSlaveZone_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setTrAttachmentSlaveZone(string trAttachmentSlaveZone) { DARABONBA_PTR_SET_VALUE(trAttachmentSlaveZone_, trAttachmentSlaveZone) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline DescribeTrFirewallsV2DetailResponseBody& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The instance ID of the Cloud Enterprise Network (CEN).
    shared_ptr<string> cenId_ {};
    // The description of the firewall.
    shared_ptr<string> firewallDescription_ {};
    // The ID of the firewall ENI.
    shared_ptr<string> firewallEniId_ {};
    // The ID of the VPC in which the firewall ENI resides.
    shared_ptr<string> firewallEniVpcId_ {};
    // The ID of the vSwitch in which the firewall ENI resides.
    shared_ptr<string> firewallEniVswitchId_ {};
    // The instance ID of the virtual private cloud (VPC) firewall.
    shared_ptr<string> firewallId_ {};
    // The instance name of the virtual private cloud (VPC) firewall.
    shared_ptr<string> firewallName_ {};
    // The status of the firewall. Valid values:
    // 
    // - Creating: The firewall is being created.
    // 
    // - Deleting: The firewall is being deleted.
    // 
    // - Ready: The firewall is ready.
    shared_ptr<string> firewallStatus_ {};
    // The subnet CIDR block that is used to store the firewall ENI in the firewall VPC in automatic mode.
    shared_ptr<string> firewallSubnetCidr_ {};
    // The status of the virtual private cloud (VPC) firewall. Valid values:
    // 
    // - **opened**: The firewall is enabled.
    // 
    // - **closed**: The firewall is disabled.
    // 
    // - **notconfigured**: The virtual private cloud (VPC) firewall is not configured.
    // 
    // - **configured**: The virtual private cloud (VPC) firewall is configured.
    // 
    // - **creating**: The virtual private cloud (VPC) firewall is being created.
    // 
    // - **opening**: The virtual private cloud (VPC) firewall is being enabled.
    // 
    // - **deleting**: The virtual private cloud (VPC) firewall is being deleted.
    // 
    // 
    // > If this parameter is not set, virtual private cloud (VPC) firewalls in all states are queried.
    shared_ptr<string> firewallSwitchStatus_ {};
    // The CIDR block of the firewall VPC in automatic mode.
    shared_ptr<string> firewallVpcCidr_ {};
    // The region ID of the transit router instance.
    shared_ptr<string> regionNo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The routing mode. Valid values:
    // 
    // - **managed**: automatic mode
    // - **manual**: manual mode
    shared_ptr<string> routeMode_ {};
    // The attachment ID that is used to connect to the transit router in the firewall VPC in automatic mode.
    shared_ptr<string> trAttachmentId_ {};
    // The primary subnet CIDR block that is used to connect to the transit router in the firewall VPC in automatic mode.
    shared_ptr<string> trAttachmentMasterCidr_ {};
    // The primary zone of the subnet that is used to connect to the transit router in the firewall VPC in automatic mode.
    shared_ptr<string> trAttachmentMasterZone_ {};
    // The secondary subnet CIDR block that is used to connect to the transit router in the firewall VPC in automatic mode.
    shared_ptr<string> trAttachmentSlaveCidr_ {};
    // The secondary zone of the subnet that is used to connect to the transit router in the firewall VPC in automatic mode.
    shared_ptr<string> trAttachmentSlaveZone_ {};
    // The instance ID of the forward routing router.
    shared_ptr<string> transitRouterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
