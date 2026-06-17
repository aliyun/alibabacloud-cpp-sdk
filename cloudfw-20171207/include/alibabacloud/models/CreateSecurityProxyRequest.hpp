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
      DARABONBA_PTR_TO_JSON(FirewallSwitch, firewallSwitch_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatRouteEntryList, natRouteEntryList_);
      DARABONBA_PTR_TO_JSON(ProxyName, proxyName_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(StrictMode, strictMode_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchAuto, vswitchAuto_);
      DARABONBA_PTR_TO_JSON(VswitchCidr, vswitchCidr_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallSwitch, firewallSwitch_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatRouteEntryList, natRouteEntryList_);
      DARABONBA_PTR_FROM_JSON(ProxyName, proxyName_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(StrictMode, strictMode_);
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
      // The next hop of the original NAT Gateway.
      // 
      // This parameter is required.
      shared_ptr<string> nextHopId_ {};
      // The network type of the next hop. Set the value to NatGateway.
      // 
      // This parameter is required.
      shared_ptr<string> nextHopType_ {};
      // The route table that contains the default route of the NAT Gateway.
      // 
      // This parameter is required.
      shared_ptr<string> routeTableId_ {};
    };

    virtual bool empty() const override { return this->firewallSwitch_ == nullptr
        && this->lang_ == nullptr && this->natGatewayId_ == nullptr && this->natRouteEntryList_ == nullptr && this->proxyName_ == nullptr && this->regionNo_ == nullptr
        && this->strictMode_ == nullptr && this->vpcId_ == nullptr && this->vswitchAuto_ == nullptr && this->vswitchCidr_ == nullptr && this->vswitchId_ == nullptr; };
    // firewallSwitch Field Functions 
    bool hasFirewallSwitch() const { return this->firewallSwitch_ != nullptr;};
    void deleteFirewallSwitch() { this->firewallSwitch_ = nullptr;};
    inline string getFirewallSwitch() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitch_, "") };
    inline CreateSecurityProxyRequest& setFirewallSwitch(string firewallSwitch) { DARABONBA_PTR_SET_VALUE(firewallSwitch_, firewallSwitch) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateSecurityProxyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline CreateSecurityProxyRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


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


    // strictMode Field Functions 
    bool hasStrictMode() const { return this->strictMode_ != nullptr;};
    void deleteStrictMode() { this->strictMode_ = nullptr;};
    inline int32_t getStrictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, 0) };
    inline CreateSecurityProxyRequest& setStrictMode(int32_t strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


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
    // The security protection switch. Valid values:
    // 
    // - **open**: on
    // 
    // - **close**: off
    shared_ptr<string> firewallSwitch_ {};
    // The language of the response. Valid values:
    // 
    // - **zh** (default): Chinese
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The ID of the NAT Gateway.
    // 
    // This parameter is required.
    shared_ptr<string> natGatewayId_ {};
    // The list of routes of the NAT Gateway that you want to switch.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateSecurityProxyRequest::NatRouteEntryList>> natRouteEntryList_ {};
    // The name of the NAT firewall. The name must be 4 to 50 characters in length. It can contain letters, digits, Chinese characters, and underscores (_). The name cannot start with an underscore (_).
    // 
    // This parameter is required.
    shared_ptr<string> proxyName_ {};
    // The region ID of the VPC.
    // 
    // > For more information about the regions where Cloud Firewall is available, see [Supported regions](https://help.aliyun.com/document_detail/195657.html).
    // 
    // This parameter is required.
    shared_ptr<string> regionNo_ {};
    // Specifies whether to enable strict mode.
    // 
    // - 1: enables strict mode
    // 
    // - 0: disables strict mode
    shared_ptr<int32_t> strictMode_ {};
    // The ID of the VPC instance.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // Specifies whether to use the automatic vSwitch selection feature. Valid values:
    // 
    // - **true**: automatic mode
    // 
    // - **false**: manual mode
    shared_ptr<string> vswitchAuto_ {};
    // The CIDR block of the vSwitch. This parameter is required if you use the automatic vSwitch selection feature.
    shared_ptr<string> vswitchCidr_ {};
    // The ID of the vSwitch. This parameter is required if you use the manual vSwitch selection feature.
    shared_ptr<string> vswitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
