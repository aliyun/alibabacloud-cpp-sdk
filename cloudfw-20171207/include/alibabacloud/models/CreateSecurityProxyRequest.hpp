// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYPROXYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSecurityProxyRequestNatRouteEntryList.hpp>
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
    virtual bool empty() const override { this->firewallSwitch_ != nullptr
        && this->lang_ != nullptr && this->natGatewayId_ != nullptr && this->natRouteEntryList_ != nullptr && this->proxyName_ != nullptr && this->regionNo_ != nullptr
        && this->strictMode_ != nullptr && this->vpcId_ != nullptr && this->vswitchAuto_ != nullptr && this->vswitchCidr_ != nullptr && this->vswitchId_ != nullptr; };
    // firewallSwitch Field Functions 
    bool hasFirewallSwitch() const { return this->firewallSwitch_ != nullptr;};
    void deleteFirewallSwitch() { this->firewallSwitch_ = nullptr;};
    inline string firewallSwitch() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitch_, "") };
    inline CreateSecurityProxyRequest& setFirewallSwitch(string firewallSwitch) { DARABONBA_PTR_SET_VALUE(firewallSwitch_, firewallSwitch) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateSecurityProxyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline CreateSecurityProxyRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natRouteEntryList Field Functions 
    bool hasNatRouteEntryList() const { return this->natRouteEntryList_ != nullptr;};
    void deleteNatRouteEntryList() { this->natRouteEntryList_ = nullptr;};
    inline const vector<CreateSecurityProxyRequestNatRouteEntryList> & natRouteEntryList() const { DARABONBA_PTR_GET_CONST(natRouteEntryList_, vector<CreateSecurityProxyRequestNatRouteEntryList>) };
    inline vector<CreateSecurityProxyRequestNatRouteEntryList> natRouteEntryList() { DARABONBA_PTR_GET(natRouteEntryList_, vector<CreateSecurityProxyRequestNatRouteEntryList>) };
    inline CreateSecurityProxyRequest& setNatRouteEntryList(const vector<CreateSecurityProxyRequestNatRouteEntryList> & natRouteEntryList) { DARABONBA_PTR_SET_VALUE(natRouteEntryList_, natRouteEntryList) };
    inline CreateSecurityProxyRequest& setNatRouteEntryList(vector<CreateSecurityProxyRequestNatRouteEntryList> && natRouteEntryList) { DARABONBA_PTR_SET_RVALUE(natRouteEntryList_, natRouteEntryList) };


    // proxyName Field Functions 
    bool hasProxyName() const { return this->proxyName_ != nullptr;};
    void deleteProxyName() { this->proxyName_ = nullptr;};
    inline string proxyName() const { DARABONBA_PTR_GET_DEFAULT(proxyName_, "") };
    inline CreateSecurityProxyRequest& setProxyName(string proxyName) { DARABONBA_PTR_SET_VALUE(proxyName_, proxyName) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline CreateSecurityProxyRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // strictMode Field Functions 
    bool hasStrictMode() const { return this->strictMode_ != nullptr;};
    void deleteStrictMode() { this->strictMode_ = nullptr;};
    inline int32_t strictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, 0) };
    inline CreateSecurityProxyRequest& setStrictMode(int32_t strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateSecurityProxyRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchAuto Field Functions 
    bool hasVswitchAuto() const { return this->vswitchAuto_ != nullptr;};
    void deleteVswitchAuto() { this->vswitchAuto_ = nullptr;};
    inline string vswitchAuto() const { DARABONBA_PTR_GET_DEFAULT(vswitchAuto_, "") };
    inline CreateSecurityProxyRequest& setVswitchAuto(string vswitchAuto) { DARABONBA_PTR_SET_VALUE(vswitchAuto_, vswitchAuto) };


    // vswitchCidr Field Functions 
    bool hasVswitchCidr() const { return this->vswitchCidr_ != nullptr;};
    void deleteVswitchCidr() { this->vswitchCidr_ = nullptr;};
    inline string vswitchCidr() const { DARABONBA_PTR_GET_DEFAULT(vswitchCidr_, "") };
    inline CreateSecurityProxyRequest& setVswitchCidr(string vswitchCidr) { DARABONBA_PTR_SET_VALUE(vswitchCidr_, vswitchCidr) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline CreateSecurityProxyRequest& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // The status of the NAT firewall. Valid values:
    // 
    // *   **open**: enabled
    // *   **close**: disabled
    std::shared_ptr<string> firewallSwitch_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the NAT gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The routes to be switched to the NAT gateway.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateSecurityProxyRequestNatRouteEntryList>> natRouteEntryList_ = nullptr;
    // The name of the NAT firewall. The name must be 4 to 50 characters in length, and can contain letters, digits, and underscores (_). However, it cannot start with an underscore.
    // 
    // This parameter is required.
    std::shared_ptr<string> proxyName_ = nullptr;
    // The region ID of the virtual private cloud (VPC).
    // 
    // >  For more information about Cloud Firewall supported regions, see [Supported regions](https://help.aliyun.com/document_detail/195657.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionNo_ = nullptr;
    // Specifies whether to enable the strict mode. Valid values:
    // 
    // *   1: yes
    // *   0: no
    std::shared_ptr<int32_t> strictMode_ = nullptr;
    // The ID of the VPC.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The mode of the vSwitch that you want to use. Valid values:
    // 
    // *   **true**: automatic
    // *   **false**: manual
    std::shared_ptr<string> vswitchAuto_ = nullptr;
    // The CIDR block of the vSwitch.
    std::shared_ptr<string> vswitchCidr_ = nullptr;
    // The ID of the vSwitch. This parameter is required if you set the VswitchAuto parameter to true.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
