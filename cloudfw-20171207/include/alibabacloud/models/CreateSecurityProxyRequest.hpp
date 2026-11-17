// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYPROXYREQUEST_HPP_
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
  class CreateSecurityProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecurityProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BasicDefenseEnabled, basicDefenseEnabled_);
      DARABONBA_PTR_TO_JSON(FirewallServiceMode, firewallServiceMode_);
      DARABONBA_PTR_TO_JSON(FirewallServiceZones, firewallServiceZones_);
      DARABONBA_PTR_TO_JSON(FirewallSwitch, firewallSwitch_);
      DARABONBA_PTR_TO_JSON(FwVswitchZoneId, fwVswitchZoneId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MasterVSwitchCidr, masterVSwitchCidr_);
      DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatMode, natMode_);
      DARABONBA_PTR_TO_JSON(NatRouteEntryList, natRouteEntryList_);
      DARABONBA_PTR_TO_JSON(ProxyName, proxyName_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(StandbyVSwitchCidr, standbyVSwitchCidr_);
      DARABONBA_PTR_TO_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_TO_JSON(StrictMode, strictMode_);
      DARABONBA_PTR_TO_JSON(ThreatIntelEnabled, threatIntelEnabled_);
      DARABONBA_PTR_TO_JSON(VirtualPatchEnabled, virtualPatchEnabled_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchAuto, vswitchAuto_);
      DARABONBA_PTR_TO_JSON(VswitchCidr, vswitchCidr_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BasicDefenseEnabled, basicDefenseEnabled_);
      DARABONBA_PTR_FROM_JSON(FirewallServiceMode, firewallServiceMode_);
      DARABONBA_PTR_FROM_JSON(FirewallServiceZones, firewallServiceZones_);
      DARABONBA_PTR_FROM_JSON(FirewallSwitch, firewallSwitch_);
      DARABONBA_PTR_FROM_JSON(FwVswitchZoneId, fwVswitchZoneId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MasterVSwitchCidr, masterVSwitchCidr_);
      DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatMode, natMode_);
      DARABONBA_PTR_FROM_JSON(NatRouteEntryList, natRouteEntryList_);
      DARABONBA_PTR_FROM_JSON(ProxyName, proxyName_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(StandbyVSwitchCidr, standbyVSwitchCidr_);
      DARABONBA_PTR_FROM_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_FROM_JSON(StrictMode, strictMode_);
      DARABONBA_PTR_FROM_JSON(ThreatIntelEnabled, threatIntelEnabled_);
      DARABONBA_PTR_FROM_JSON(VirtualPatchEnabled, virtualPatchEnabled_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchAuto, vswitchAuto_);
      DARABONBA_PTR_FROM_JSON(VswitchCidr, vswitchCidr_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    CreateSecurityProxyRequest() = default ;
    CreateSecurityProxyRequest(const CreateSecurityProxyRequest &) = default ;
    CreateSecurityProxyRequest(CreateSecurityProxyRequest &&) = default ;
    CreateSecurityProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecurityProxyRequest() = default ;
    CreateSecurityProxyRequest& operator=(const CreateSecurityProxyRequest &) = default ;
    CreateSecurityProxyRequest& operator=(CreateSecurityProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NatRouteEntryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NatRouteEntryList& obj) { 
        DARABONBA_PTR_TO_JSON(DestinationCidr, destinationCidr_);
        DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
        DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      };
      friend void from_json(const Darabonba::Json& j, NatRouteEntryList& obj) { 
        DARABONBA_PTR_FROM_JSON(DestinationCidr, destinationCidr_);
        DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
        DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      };
      NatRouteEntryList() = default ;
      NatRouteEntryList(const NatRouteEntryList &) = default ;
      NatRouteEntryList(NatRouteEntryList &&) = default ;
      NatRouteEntryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NatRouteEntryList() = default ;
      NatRouteEntryList& operator=(const NatRouteEntryList &) = default ;
      NatRouteEntryList& operator=(NatRouteEntryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->destinationCidr_ == nullptr
        && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr && this->routeTableId_ == nullptr; };
      // destinationCidr Field Functions 
      bool hasDestinationCidr() const { return this->destinationCidr_ != nullptr;};
      void deleteDestinationCidr() { this->destinationCidr_ = nullptr;};
      inline string getDestinationCidr() const { DARABONBA_PTR_GET_DEFAULT(destinationCidr_, "") };
      inline NatRouteEntryList& setDestinationCidr(string destinationCidr) { DARABONBA_PTR_SET_VALUE(destinationCidr_, destinationCidr) };


      // nextHopId Field Functions 
      bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
      void deleteNextHopId() { this->nextHopId_ = nullptr;};
      inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
      inline NatRouteEntryList& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


      // nextHopType Field Functions 
      bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
      void deleteNextHopType() { this->nextHopType_ = nullptr;};
      inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
      inline NatRouteEntryList& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


      // routeTableId Field Functions 
      bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
      void deleteRouteTableId() { this->routeTableId_ = nullptr;};
      inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
      inline NatRouteEntryList& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    protected:
      // The destination CIDR block of the default route.
      // 
      // This parameter is required.
      shared_ptr<string> destinationCidr_ {};
      // The next hop ID of the original NAT gateway.
      // 
      // This parameter is required.
      shared_ptr<string> nextHopId_ {};
      // The network type of the next hop. Valid values: NatGateway.
      // 
      // This parameter is required.
      shared_ptr<string> nextHopType_ {};
      // The ID of the route table to which the default route of the NAT gateway belongs.
      // 
      // This parameter is required.
      shared_ptr<string> routeTableId_ {};
    };

    virtual bool empty() const override { return this->basicDefenseEnabled_ == nullptr
        && this->firewallServiceMode_ == nullptr && this->firewallServiceZones_ == nullptr && this->firewallSwitch_ == nullptr && this->fwVswitchZoneId_ == nullptr && this->lang_ == nullptr
        && this->masterVSwitchCidr_ == nullptr && this->masterZoneId_ == nullptr && this->natGatewayId_ == nullptr && this->natMode_ == nullptr && this->natRouteEntryList_ == nullptr
        && this->proxyName_ == nullptr && this->regionNo_ == nullptr && this->ruleClass_ == nullptr && this->runMode_ == nullptr && this->standbyVSwitchCidr_ == nullptr
        && this->standbyZoneId_ == nullptr && this->strictMode_ == nullptr && this->threatIntelEnabled_ == nullptr && this->virtualPatchEnabled_ == nullptr && this->vpcId_ == nullptr
        && this->vswitchAuto_ == nullptr && this->vswitchCidr_ == nullptr && this->vswitchId_ == nullptr; };
    // basicDefenseEnabled Field Functions 
    bool hasBasicDefenseEnabled() const { return this->basicDefenseEnabled_ != nullptr;};
    void deleteBasicDefenseEnabled() { this->basicDefenseEnabled_ = nullptr;};
    inline string getBasicDefenseEnabled() const { DARABONBA_PTR_GET_DEFAULT(basicDefenseEnabled_, "") };
    inline CreateSecurityProxyRequest& setBasicDefenseEnabled(string basicDefenseEnabled) { DARABONBA_PTR_SET_VALUE(basicDefenseEnabled_, basicDefenseEnabled) };


    // firewallServiceMode Field Functions 
    bool hasFirewallServiceMode() const { return this->firewallServiceMode_ != nullptr;};
    void deleteFirewallServiceMode() { this->firewallServiceMode_ = nullptr;};
    inline string getFirewallServiceMode() const { DARABONBA_PTR_GET_DEFAULT(firewallServiceMode_, "") };
    inline CreateSecurityProxyRequest& setFirewallServiceMode(string firewallServiceMode) { DARABONBA_PTR_SET_VALUE(firewallServiceMode_, firewallServiceMode) };


    // firewallServiceZones Field Functions 
    bool hasFirewallServiceZones() const { return this->firewallServiceZones_ != nullptr;};
    void deleteFirewallServiceZones() { this->firewallServiceZones_ = nullptr;};
    inline const vector<string> & getFirewallServiceZones() const { DARABONBA_PTR_GET_CONST(firewallServiceZones_, vector<string>) };
    inline vector<string> getFirewallServiceZones() { DARABONBA_PTR_GET(firewallServiceZones_, vector<string>) };
    inline CreateSecurityProxyRequest& setFirewallServiceZones(const vector<string> & firewallServiceZones) { DARABONBA_PTR_SET_VALUE(firewallServiceZones_, firewallServiceZones) };
    inline CreateSecurityProxyRequest& setFirewallServiceZones(vector<string> && firewallServiceZones) { DARABONBA_PTR_SET_RVALUE(firewallServiceZones_, firewallServiceZones) };


    // firewallSwitch Field Functions 
    bool hasFirewallSwitch() const { return this->firewallSwitch_ != nullptr;};
    void deleteFirewallSwitch() { this->firewallSwitch_ = nullptr;};
    inline string getFirewallSwitch() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitch_, "") };
    inline CreateSecurityProxyRequest& setFirewallSwitch(string firewallSwitch) { DARABONBA_PTR_SET_VALUE(firewallSwitch_, firewallSwitch) };


    // fwVswitchZoneId Field Functions 
    bool hasFwVswitchZoneId() const { return this->fwVswitchZoneId_ != nullptr;};
    void deleteFwVswitchZoneId() { this->fwVswitchZoneId_ = nullptr;};
    inline string getFwVswitchZoneId() const { DARABONBA_PTR_GET_DEFAULT(fwVswitchZoneId_, "") };
    inline CreateSecurityProxyRequest& setFwVswitchZoneId(string fwVswitchZoneId) { DARABONBA_PTR_SET_VALUE(fwVswitchZoneId_, fwVswitchZoneId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateSecurityProxyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // masterVSwitchCidr Field Functions 
    bool hasMasterVSwitchCidr() const { return this->masterVSwitchCidr_ != nullptr;};
    void deleteMasterVSwitchCidr() { this->masterVSwitchCidr_ = nullptr;};
    inline string getMasterVSwitchCidr() const { DARABONBA_PTR_GET_DEFAULT(masterVSwitchCidr_, "") };
    inline CreateSecurityProxyRequest& setMasterVSwitchCidr(string masterVSwitchCidr) { DARABONBA_PTR_SET_VALUE(masterVSwitchCidr_, masterVSwitchCidr) };


    // masterZoneId Field Functions 
    bool hasMasterZoneId() const { return this->masterZoneId_ != nullptr;};
    void deleteMasterZoneId() { this->masterZoneId_ = nullptr;};
    inline string getMasterZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterZoneId_, "") };
    inline CreateSecurityProxyRequest& setMasterZoneId(string masterZoneId) { DARABONBA_PTR_SET_VALUE(masterZoneId_, masterZoneId) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline CreateSecurityProxyRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natMode Field Functions 
    bool hasNatMode() const { return this->natMode_ != nullptr;};
    void deleteNatMode() { this->natMode_ = nullptr;};
    inline string getNatMode() const { DARABONBA_PTR_GET_DEFAULT(natMode_, "") };
    inline CreateSecurityProxyRequest& setNatMode(string natMode) { DARABONBA_PTR_SET_VALUE(natMode_, natMode) };


    // natRouteEntryList Field Functions 
    bool hasNatRouteEntryList() const { return this->natRouteEntryList_ != nullptr;};
    void deleteNatRouteEntryList() { this->natRouteEntryList_ = nullptr;};
    inline const vector<CreateSecurityProxyRequest::NatRouteEntryList> & getNatRouteEntryList() const { DARABONBA_PTR_GET_CONST(natRouteEntryList_, vector<CreateSecurityProxyRequest::NatRouteEntryList>) };
    inline vector<CreateSecurityProxyRequest::NatRouteEntryList> getNatRouteEntryList() { DARABONBA_PTR_GET(natRouteEntryList_, vector<CreateSecurityProxyRequest::NatRouteEntryList>) };
    inline CreateSecurityProxyRequest& setNatRouteEntryList(const vector<CreateSecurityProxyRequest::NatRouteEntryList> & natRouteEntryList) { DARABONBA_PTR_SET_VALUE(natRouteEntryList_, natRouteEntryList) };
    inline CreateSecurityProxyRequest& setNatRouteEntryList(vector<CreateSecurityProxyRequest::NatRouteEntryList> && natRouteEntryList) { DARABONBA_PTR_SET_RVALUE(natRouteEntryList_, natRouteEntryList) };


    // proxyName Field Functions 
    bool hasProxyName() const { return this->proxyName_ != nullptr;};
    void deleteProxyName() { this->proxyName_ = nullptr;};
    inline string getProxyName() const { DARABONBA_PTR_GET_DEFAULT(proxyName_, "") };
    inline CreateSecurityProxyRequest& setProxyName(string proxyName) { DARABONBA_PTR_SET_VALUE(proxyName_, proxyName) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline CreateSecurityProxyRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // ruleClass Field Functions 
    bool hasRuleClass() const { return this->ruleClass_ != nullptr;};
    void deleteRuleClass() { this->ruleClass_ = nullptr;};
    inline string getRuleClass() const { DARABONBA_PTR_GET_DEFAULT(ruleClass_, "") };
    inline CreateSecurityProxyRequest& setRuleClass(string ruleClass) { DARABONBA_PTR_SET_VALUE(ruleClass_, ruleClass) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline CreateSecurityProxyRequest& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // standbyVSwitchCidr Field Functions 
    bool hasStandbyVSwitchCidr() const { return this->standbyVSwitchCidr_ != nullptr;};
    void deleteStandbyVSwitchCidr() { this->standbyVSwitchCidr_ = nullptr;};
    inline string getStandbyVSwitchCidr() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchCidr_, "") };
    inline CreateSecurityProxyRequest& setStandbyVSwitchCidr(string standbyVSwitchCidr) { DARABONBA_PTR_SET_VALUE(standbyVSwitchCidr_, standbyVSwitchCidr) };


    // standbyZoneId Field Functions 
    bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
    void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
    inline string getStandbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
    inline CreateSecurityProxyRequest& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


    // strictMode Field Functions 
    bool hasStrictMode() const { return this->strictMode_ != nullptr;};
    void deleteStrictMode() { this->strictMode_ = nullptr;};
    inline int32_t getStrictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, 0) };
    inline CreateSecurityProxyRequest& setStrictMode(int32_t strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


    // threatIntelEnabled Field Functions 
    bool hasThreatIntelEnabled() const { return this->threatIntelEnabled_ != nullptr;};
    void deleteThreatIntelEnabled() { this->threatIntelEnabled_ = nullptr;};
    inline string getThreatIntelEnabled() const { DARABONBA_PTR_GET_DEFAULT(threatIntelEnabled_, "") };
    inline CreateSecurityProxyRequest& setThreatIntelEnabled(string threatIntelEnabled) { DARABONBA_PTR_SET_VALUE(threatIntelEnabled_, threatIntelEnabled) };


    // virtualPatchEnabled Field Functions 
    bool hasVirtualPatchEnabled() const { return this->virtualPatchEnabled_ != nullptr;};
    void deleteVirtualPatchEnabled() { this->virtualPatchEnabled_ = nullptr;};
    inline string getVirtualPatchEnabled() const { DARABONBA_PTR_GET_DEFAULT(virtualPatchEnabled_, "") };
    inline CreateSecurityProxyRequest& setVirtualPatchEnabled(string virtualPatchEnabled) { DARABONBA_PTR_SET_VALUE(virtualPatchEnabled_, virtualPatchEnabled) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateSecurityProxyRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchAuto Field Functions 
    bool hasVswitchAuto() const { return this->vswitchAuto_ != nullptr;};
    void deleteVswitchAuto() { this->vswitchAuto_ = nullptr;};
    inline string getVswitchAuto() const { DARABONBA_PTR_GET_DEFAULT(vswitchAuto_, "") };
    inline CreateSecurityProxyRequest& setVswitchAuto(string vswitchAuto) { DARABONBA_PTR_SET_VALUE(vswitchAuto_, vswitchAuto) };


    // vswitchCidr Field Functions 
    bool hasVswitchCidr() const { return this->vswitchCidr_ != nullptr;};
    void deleteVswitchCidr() { this->vswitchCidr_ = nullptr;};
    inline string getVswitchCidr() const { DARABONBA_PTR_GET_DEFAULT(vswitchCidr_, "") };
    inline CreateSecurityProxyRequest& setVswitchCidr(string vswitchCidr) { DARABONBA_PTR_SET_VALUE(vswitchCidr_, vswitchCidr) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline CreateSecurityProxyRequest& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // Specifies whether to enable the basic protection policies of the IPS. If this parameter is not specified, the system default (enabled) is used. Valid values:
    // 
    // - **0**: disabled.
    // - **1**: enabled.
    shared_ptr<string> basicDefenseEnabled_ {};
    // The deployment mode of the firewall service. Valid values:
    // 
    // - **PrimaryStandby**: primary/secondary mode.
    // - **MultiPrimary**: active-active mode.
    shared_ptr<string> firewallServiceMode_ {};
    // The list of zone IDs used by the firewall service.
    shared_ptr<vector<string>> firewallServiceZones_ {};
    // The security protection switch. Valid values:
    // 
    // - **open**: enabled.
    // - **close**: disabled.
    shared_ptr<string> firewallSwitch_ {};
    // The zone of the firewall vSwitch.
    shared_ptr<string> fwVswitchZoneId_ {};
    // The language of the response message. Valid values:
    // 
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The vSwitch CIDR block of the GWLB endpoint (GWLBe) in the active zone. This parameter applies only to NAT firewalls that use the GWLB architecture. For the GWLB architecture, this parameter is required along with MasterZoneId, StandbyZoneId, and StandbyVSwitchCidr. If any of these parameters is missing, ErrorParameters is returned. The vSwitch is created by the firewall creation node based on this vSwitch CIDR block. This parameter is not read for the ENI architecture.
    shared_ptr<string> masterVSwitchCidr_ {};
    // The ID of the primary zone. This parameter applies only to NAT firewalls that use the GWLB architecture. For the GWLB architecture, this parameter is required along with MasterVSwitchCidr, StandbyZoneId, and StandbyVSwitchCidr. If any of these parameters is missing, ErrorParameters is returned. The value must be the same as the zone where the NAT gateway resides. This parameter is not read for the ENI architecture.
    shared_ptr<string> masterZoneId_ {};
    // The ID of the NAT gateway.
    // 
    // This parameter is required.
    shared_ptr<string> natGatewayId_ {};
    // The architecture type of the NAT firewall. Valid values: **eni** (traditional ENI architecture) and **gwlb** (new GWLB architecture). If this parameter is omitted or left empty, the firewall is created by using the ENI architecture, and no implicit selection is performed on the server side. You can obtain the recommended architecture from the response of the DescribeNatFirewallArchitecture operation and pass it back when you create the firewall.
    shared_ptr<string> natMode_ {};
    // The list of routes to be switched for the NAT gateway.
    shared_ptr<vector<CreateSecurityProxyRequest::NatRouteEntryList>> natRouteEntryList_ {};
    // The name of the NAT firewall. The name must be 4 to 50 characters in length and can contain uppercase and lowercase letters, Chinese characters, digits, and underscores (_). It cannot start with an underscore.
    // 
    // This parameter is required.
    shared_ptr<string> proxyName_ {};
    // The region ID of the VPC.
    // 
    // > For more information about the regions supported by Cloud Firewall, see [Supported regions](https://help.aliyun.com/document_detail/195657.html).
    // 
    // This parameter is required.
    shared_ptr<string> regionNo_ {};
    // The level of the IPS rule group. This parameter is valid only in block mode. If this parameter is not specified, the system default (medium) is used. Valid values:
    // 
    // - **0**: none. The value is forced to 0 in monitor mode.
    // - **1**: loose.
    // - **2**: medium.
    // - **3**: strict.
    shared_ptr<string> ruleClass_ {};
    // The IPS defense mode. This parameter is supported only by NAT firewalls that use the GWLB architecture. If this parameter is not specified, the system default (Block Mode) is used. Valid values:
    // 
    // - **0**: monitor mode. Only alerting is triggered, and traffic is not blocked.
    // - **1**: Block Mode.
    shared_ptr<string> runMode_ {};
    // The vSwitch CIDR block of the GWLBe in the standby zone. This parameter applies only to NAT firewalls that use the GWLB architecture. For the GWLB architecture, this parameter is required along with MasterZoneId, MasterVSwitchCidr, and StandbyZoneId. If any of these parameters is missing, ErrorParameters is returned. The vSwitch is created by the firewall creation node based on this vSwitch CIDR block. This parameter is not read for the ENI architecture.
    shared_ptr<string> standbyVSwitchCidr_ {};
    // The ID of the secondary zone. This parameter applies only to NAT firewalls that use the GWLB architecture. For the GWLB architecture, this parameter is required along with MasterZoneId, MasterVSwitchCidr, and StandbyVSwitchCidr. If any of these parameters is missing, ErrorParameters is returned. The value cannot be the same as MasterZoneId. If they are the same, ErrorZoneIdInvalid is returned. This parameter is not read for the ENI architecture.
    shared_ptr<string> standbyZoneId_ {};
    // Specifies whether to enable strict mode. Valid values:
    // 
    // - **1**: enables strict mode.
    // - **0**: disables strict mode.
    shared_ptr<int32_t> strictMode_ {};
    // Specifies whether to enable the threat intelligence rules of the IPS. If this parameter is not specified, the system default (enabled) is used. Valid values:
    // 
    // - **0**: disabled.
    // - **1**: enabled.
    shared_ptr<string> threatIntelEnabled_ {};
    // Specifies whether to enable the Virtual Patches of the IPS. If this parameter is not specified, the system default (enabled) is used. Valid values:
    // 
    // - **0**: disabled.
    // - **1**: enabled.
    shared_ptr<string> virtualPatchEnabled_ {};
    // The instance ID of the VPC.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // Specifies whether to use the automatic mode for the vSwitch. Valid values:
    // 
    // - **true**: automatic mode.
    // - **false**: manual mode.
    // 
    // > Default value: **true**. If VswitchAuto is set to true, VswitchCidr is required and must be a valid CIDR block. If VswitchAuto is set to false, VswitchId is required.
    shared_ptr<string> vswitchAuto_ {};
    // The CIDR block of the vSwitch. This parameter is required when the automatic mode is used for the vSwitch.
    shared_ptr<string> vswitchCidr_ {};
    // The ID of the vSwitch. This parameter is required when the manual mode is used for the vSwitch.
    shared_ptr<string> vswitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
