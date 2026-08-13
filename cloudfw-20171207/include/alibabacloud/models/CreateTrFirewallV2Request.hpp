// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRFIREWALLV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRFIREWALLV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(FirewallAttachmentZone, firewallAttachmentZone_);
      DARABONBA_PTR_TO_JSON(FirewallDescription, firewallDescription_);
      DARABONBA_PTR_TO_JSON(FirewallName, firewallName_);
      DARABONBA_PTR_TO_JSON(FirewallServiceMode, firewallServiceMode_);
      DARABONBA_PTR_TO_JSON(FirewallServiceZones, firewallServiceZones_);
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
      DARABONBA_PTR_TO_JSON(TrAttachmentZones, trAttachmentZones_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrFirewallV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(FirewallAttachmentZone, firewallAttachmentZone_);
      DARABONBA_PTR_FROM_JSON(FirewallDescription, firewallDescription_);
      DARABONBA_PTR_FROM_JSON(FirewallName, firewallName_);
      DARABONBA_PTR_FROM_JSON(FirewallServiceMode, firewallServiceMode_);
      DARABONBA_PTR_FROM_JSON(FirewallServiceZones, firewallServiceZones_);
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
      DARABONBA_PTR_FROM_JSON(TrAttachmentZones, trAttachmentZones_);
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
        && this->firewallAttachmentZone_ == nullptr && this->firewallDescription_ == nullptr && this->firewallName_ == nullptr && this->firewallServiceMode_ == nullptr && this->firewallServiceZones_ == nullptr
        && this->firewallSubnetCidr_ == nullptr && this->firewallVpcCidr_ == nullptr && this->firewallVpcId_ == nullptr && this->firewallVswitchId_ == nullptr && this->lang_ == nullptr
        && this->regionNo_ == nullptr && this->routeMode_ == nullptr && this->trAttachmentMasterCidr_ == nullptr && this->trAttachmentMasterZone_ == nullptr && this->trAttachmentSlaveCidr_ == nullptr
        && this->trAttachmentSlaveZone_ == nullptr && this->trAttachmentZones_ == nullptr && this->transitRouterId_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateTrFirewallV2Request& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // firewallAttachmentZone Field Functions 
    bool hasFirewallAttachmentZone() const { return this->firewallAttachmentZone_ != nullptr;};
    void deleteFirewallAttachmentZone() { this->firewallAttachmentZone_ = nullptr;};
    inline string getFirewallAttachmentZone() const { DARABONBA_PTR_GET_DEFAULT(firewallAttachmentZone_, "") };
    inline CreateTrFirewallV2Request& setFirewallAttachmentZone(string firewallAttachmentZone) { DARABONBA_PTR_SET_VALUE(firewallAttachmentZone_, firewallAttachmentZone) };


    // firewallDescription Field Functions 
    bool hasFirewallDescription() const { return this->firewallDescription_ != nullptr;};
    void deleteFirewallDescription() { this->firewallDescription_ = nullptr;};
    inline string getFirewallDescription() const { DARABONBA_PTR_GET_DEFAULT(firewallDescription_, "") };
    inline CreateTrFirewallV2Request& setFirewallDescription(string firewallDescription) { DARABONBA_PTR_SET_VALUE(firewallDescription_, firewallDescription) };


    // firewallName Field Functions 
    bool hasFirewallName() const { return this->firewallName_ != nullptr;};
    void deleteFirewallName() { this->firewallName_ = nullptr;};
    inline string getFirewallName() const { DARABONBA_PTR_GET_DEFAULT(firewallName_, "") };
    inline CreateTrFirewallV2Request& setFirewallName(string firewallName) { DARABONBA_PTR_SET_VALUE(firewallName_, firewallName) };


    // firewallServiceMode Field Functions 
    bool hasFirewallServiceMode() const { return this->firewallServiceMode_ != nullptr;};
    void deleteFirewallServiceMode() { this->firewallServiceMode_ = nullptr;};
    inline string getFirewallServiceMode() const { DARABONBA_PTR_GET_DEFAULT(firewallServiceMode_, "") };
    inline CreateTrFirewallV2Request& setFirewallServiceMode(string firewallServiceMode) { DARABONBA_PTR_SET_VALUE(firewallServiceMode_, firewallServiceMode) };


    // firewallServiceZones Field Functions 
    bool hasFirewallServiceZones() const { return this->firewallServiceZones_ != nullptr;};
    void deleteFirewallServiceZones() { this->firewallServiceZones_ = nullptr;};
    inline const vector<string> & getFirewallServiceZones() const { DARABONBA_PTR_GET_CONST(firewallServiceZones_, vector<string>) };
    inline vector<string> getFirewallServiceZones() { DARABONBA_PTR_GET(firewallServiceZones_, vector<string>) };
    inline CreateTrFirewallV2Request& setFirewallServiceZones(const vector<string> & firewallServiceZones) { DARABONBA_PTR_SET_VALUE(firewallServiceZones_, firewallServiceZones) };
    inline CreateTrFirewallV2Request& setFirewallServiceZones(vector<string> && firewallServiceZones) { DARABONBA_PTR_SET_RVALUE(firewallServiceZones_, firewallServiceZones) };


    // firewallSubnetCidr Field Functions 
    bool hasFirewallSubnetCidr() const { return this->firewallSubnetCidr_ != nullptr;};
    void deleteFirewallSubnetCidr() { this->firewallSubnetCidr_ = nullptr;};
    inline string getFirewallSubnetCidr() const { DARABONBA_PTR_GET_DEFAULT(firewallSubnetCidr_, "") };
    inline CreateTrFirewallV2Request& setFirewallSubnetCidr(string firewallSubnetCidr) { DARABONBA_PTR_SET_VALUE(firewallSubnetCidr_, firewallSubnetCidr) };


    // firewallVpcCidr Field Functions 
    bool hasFirewallVpcCidr() const { return this->firewallVpcCidr_ != nullptr;};
    void deleteFirewallVpcCidr() { this->firewallVpcCidr_ = nullptr;};
    inline string getFirewallVpcCidr() const { DARABONBA_PTR_GET_DEFAULT(firewallVpcCidr_, "") };
    inline CreateTrFirewallV2Request& setFirewallVpcCidr(string firewallVpcCidr) { DARABONBA_PTR_SET_VALUE(firewallVpcCidr_, firewallVpcCidr) };


    // firewallVpcId Field Functions 
    bool hasFirewallVpcId() const { return this->firewallVpcId_ != nullptr;};
    void deleteFirewallVpcId() { this->firewallVpcId_ = nullptr;};
    inline string getFirewallVpcId() const { DARABONBA_PTR_GET_DEFAULT(firewallVpcId_, "") };
    inline CreateTrFirewallV2Request& setFirewallVpcId(string firewallVpcId) { DARABONBA_PTR_SET_VALUE(firewallVpcId_, firewallVpcId) };


    // firewallVswitchId Field Functions 
    bool hasFirewallVswitchId() const { return this->firewallVswitchId_ != nullptr;};
    void deleteFirewallVswitchId() { this->firewallVswitchId_ = nullptr;};
    inline string getFirewallVswitchId() const { DARABONBA_PTR_GET_DEFAULT(firewallVswitchId_, "") };
    inline CreateTrFirewallV2Request& setFirewallVswitchId(string firewallVswitchId) { DARABONBA_PTR_SET_VALUE(firewallVswitchId_, firewallVswitchId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateTrFirewallV2Request& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline CreateTrFirewallV2Request& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // routeMode Field Functions 
    bool hasRouteMode() const { return this->routeMode_ != nullptr;};
    void deleteRouteMode() { this->routeMode_ = nullptr;};
    inline string getRouteMode() const { DARABONBA_PTR_GET_DEFAULT(routeMode_, "") };
    inline CreateTrFirewallV2Request& setRouteMode(string routeMode) { DARABONBA_PTR_SET_VALUE(routeMode_, routeMode) };


    // trAttachmentMasterCidr Field Functions 
    bool hasTrAttachmentMasterCidr() const { return this->trAttachmentMasterCidr_ != nullptr;};
    void deleteTrAttachmentMasterCidr() { this->trAttachmentMasterCidr_ = nullptr;};
    inline string getTrAttachmentMasterCidr() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentMasterCidr_, "") };
    inline CreateTrFirewallV2Request& setTrAttachmentMasterCidr(string trAttachmentMasterCidr) { DARABONBA_PTR_SET_VALUE(trAttachmentMasterCidr_, trAttachmentMasterCidr) };


    // trAttachmentMasterZone Field Functions 
    bool hasTrAttachmentMasterZone() const { return this->trAttachmentMasterZone_ != nullptr;};
    void deleteTrAttachmentMasterZone() { this->trAttachmentMasterZone_ = nullptr;};
    inline string getTrAttachmentMasterZone() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentMasterZone_, "") };
    inline CreateTrFirewallV2Request& setTrAttachmentMasterZone(string trAttachmentMasterZone) { DARABONBA_PTR_SET_VALUE(trAttachmentMasterZone_, trAttachmentMasterZone) };


    // trAttachmentSlaveCidr Field Functions 
    bool hasTrAttachmentSlaveCidr() const { return this->trAttachmentSlaveCidr_ != nullptr;};
    void deleteTrAttachmentSlaveCidr() { this->trAttachmentSlaveCidr_ = nullptr;};
    inline string getTrAttachmentSlaveCidr() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentSlaveCidr_, "") };
    inline CreateTrFirewallV2Request& setTrAttachmentSlaveCidr(string trAttachmentSlaveCidr) { DARABONBA_PTR_SET_VALUE(trAttachmentSlaveCidr_, trAttachmentSlaveCidr) };


    // trAttachmentSlaveZone Field Functions 
    bool hasTrAttachmentSlaveZone() const { return this->trAttachmentSlaveZone_ != nullptr;};
    void deleteTrAttachmentSlaveZone() { this->trAttachmentSlaveZone_ = nullptr;};
    inline string getTrAttachmentSlaveZone() const { DARABONBA_PTR_GET_DEFAULT(trAttachmentSlaveZone_, "") };
    inline CreateTrFirewallV2Request& setTrAttachmentSlaveZone(string trAttachmentSlaveZone) { DARABONBA_PTR_SET_VALUE(trAttachmentSlaveZone_, trAttachmentSlaveZone) };


    // trAttachmentZones Field Functions 
    bool hasTrAttachmentZones() const { return this->trAttachmentZones_ != nullptr;};
    void deleteTrAttachmentZones() { this->trAttachmentZones_ = nullptr;};
    inline const vector<string> & getTrAttachmentZones() const { DARABONBA_PTR_GET_CONST(trAttachmentZones_, vector<string>) };
    inline vector<string> getTrAttachmentZones() { DARABONBA_PTR_GET(trAttachmentZones_, vector<string>) };
    inline CreateTrFirewallV2Request& setTrAttachmentZones(const vector<string> & trAttachmentZones) { DARABONBA_PTR_SET_VALUE(trAttachmentZones_, trAttachmentZones) };
    inline CreateTrFirewallV2Request& setTrAttachmentZones(vector<string> && trAttachmentZones) { DARABONBA_PTR_SET_RVALUE(trAttachmentZones_, trAttachmentZones) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateTrFirewallV2Request& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The ID of the CEN instance. This parameter is required. Create a CEN instance in the CEN console before calling this operation, and ensure that an Enterprise Edition transit router has been created.
    shared_ptr<string> cenId_ {};
    // The zone ID used by the firewall connection.
    shared_ptr<string> firewallAttachmentZone_ {};
    // The description of the firewall.
    shared_ptr<string> firewallDescription_ {};
    // The name of the Cloud Firewall instance.
    shared_ptr<string> firewallName_ {};
    // The deployment mode of the firewall service. Valid values:
    // 
    // - **PrimaryStandby**: Primary/standby mode.
    // - **MultiPrimary**: Active-active mode.
    // 
    // > If this parameter is not specified, the system automatically selects a deployment mode based on the capabilities of the transit router. If an invalid value is specified, the error ErrorFwServiceMode (-360437) is returned. MultiPrimary mode does not support specifying zones.
    shared_ptr<string> firewallServiceMode_ {};
    // The list of zone IDs used by the firewall service.
    shared_ptr<vector<string>> firewallServiceZones_ {};
    // The subnet CIDR block used to store the firewall ENI in the firewall VPC in automatic mode.
    shared_ptr<string> firewallSubnetCidr_ {};
    // The CIDR block of the firewall VPC in automatic mode.
    shared_ptr<string> firewallVpcCidr_ {};
    // The ID of the VPC in which the firewall ENI is created in manual mode.
    shared_ptr<string> firewallVpcId_ {};
    // The ID of the vSwitch in which the firewall ENI is created in manual mode.
    shared_ptr<string> firewallVswitchId_ {};
    // The language of the response. Valid values:
    // 
    // - **zh** (default): Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The region ID of the Enterprise Edition transit router. This parameter is required.
    shared_ptr<string> regionNo_ {};
    // The routing mode. This parameter is required. Valid values: managed (automatic mode) and manual (manual mode). In managed mode, you must specify FirewallVpcCidr, FirewallSubnetCidr, TrAttachmentSlaveCidr, and TrAttachmentMasterCidr. In manual mode, you must specify FirewallVpcId, FirewallVswitchId, TrAttachmentSlaveZone, and TrAttachmentMasterZone.
    shared_ptr<string> routeMode_ {};
    // The primary subnet CIDR block used to connect to the TR in the firewall VPC in automatic mode.
    shared_ptr<string> trAttachmentMasterCidr_ {};
    // The primary zone of the vSwitch.
    shared_ptr<string> trAttachmentMasterZone_ {};
    // The secondary subnet CIDR block used to connect to the TR in the firewall VPC in automatic mode.
    shared_ptr<string> trAttachmentSlaveCidr_ {};
    // The secondary zone of the vSwitch.
    shared_ptr<string> trAttachmentSlaveZone_ {};
    // The list of zone IDs used by the TR connection.
    shared_ptr<vector<string>> trAttachmentZones_ {};
    // The ID of the Enterprise Edition transit router instance. This parameter is required. The transit router must belong to the CEN instance specified by CenId.
    shared_ptr<string> transitRouterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
