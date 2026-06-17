// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCFIREWALLCENCONFIGUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCFIREWALLCENCONFIGUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateVpcFirewallCenConfigureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcFirewallCenConfigureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(FirewallSwitch, firewallSwitch_);
      DARABONBA_PTR_TO_JSON(FirewallVSwitchCidrBlock, firewallVSwitchCidrBlock_);
      DARABONBA_PTR_TO_JSON(FirewallVpcCidrBlock, firewallVpcCidrBlock_);
      DARABONBA_PTR_TO_JSON(FirewallVpcStandbyZoneId, firewallVpcStandbyZoneId_);
      DARABONBA_PTR_TO_JSON(FirewallVpcZoneId, firewallVpcZoneId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallName, vpcFirewallName_);
      DARABONBA_PTR_TO_JSON(VpcRegion, vpcRegion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcFirewallCenConfigureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(FirewallSwitch, firewallSwitch_);
      DARABONBA_PTR_FROM_JSON(FirewallVSwitchCidrBlock, firewallVSwitchCidrBlock_);
      DARABONBA_PTR_FROM_JSON(FirewallVpcCidrBlock, firewallVpcCidrBlock_);
      DARABONBA_PTR_FROM_JSON(FirewallVpcStandbyZoneId, firewallVpcStandbyZoneId_);
      DARABONBA_PTR_FROM_JSON(FirewallVpcZoneId, firewallVpcZoneId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallName, vpcFirewallName_);
      DARABONBA_PTR_FROM_JSON(VpcRegion, vpcRegion_);
    };
    CreateVpcFirewallCenConfigureRequest() = default ;
    CreateVpcFirewallCenConfigureRequest(const CreateVpcFirewallCenConfigureRequest &) = default ;
    CreateVpcFirewallCenConfigureRequest(CreateVpcFirewallCenConfigureRequest &&) = default ;
    CreateVpcFirewallCenConfigureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcFirewallCenConfigureRequest() = default ;
    CreateVpcFirewallCenConfigureRequest& operator=(const CreateVpcFirewallCenConfigureRequest &) = default ;
    CreateVpcFirewallCenConfigureRequest& operator=(CreateVpcFirewallCenConfigureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cenId_ == nullptr
        && this->firewallSwitch_ == nullptr && this->firewallVSwitchCidrBlock_ == nullptr && this->firewallVpcCidrBlock_ == nullptr && this->firewallVpcStandbyZoneId_ == nullptr && this->firewallVpcZoneId_ == nullptr
        && this->lang_ == nullptr && this->memberUid_ == nullptr && this->networkInstanceId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcFirewallName_ == nullptr
        && this->vpcRegion_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // firewallSwitch Field Functions 
    bool hasFirewallSwitch() const { return this->firewallSwitch_ != nullptr;};
    void deleteFirewallSwitch() { this->firewallSwitch_ = nullptr;};
    inline string getFirewallSwitch() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitch_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setFirewallSwitch(string firewallSwitch) { DARABONBA_PTR_SET_VALUE(firewallSwitch_, firewallSwitch) };


    // firewallVSwitchCidrBlock Field Functions 
    bool hasFirewallVSwitchCidrBlock() const { return this->firewallVSwitchCidrBlock_ != nullptr;};
    void deleteFirewallVSwitchCidrBlock() { this->firewallVSwitchCidrBlock_ = nullptr;};
    inline string getFirewallVSwitchCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(firewallVSwitchCidrBlock_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setFirewallVSwitchCidrBlock(string firewallVSwitchCidrBlock) { DARABONBA_PTR_SET_VALUE(firewallVSwitchCidrBlock_, firewallVSwitchCidrBlock) };


    // firewallVpcCidrBlock Field Functions 
    bool hasFirewallVpcCidrBlock() const { return this->firewallVpcCidrBlock_ != nullptr;};
    void deleteFirewallVpcCidrBlock() { this->firewallVpcCidrBlock_ = nullptr;};
    inline string getFirewallVpcCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(firewallVpcCidrBlock_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setFirewallVpcCidrBlock(string firewallVpcCidrBlock) { DARABONBA_PTR_SET_VALUE(firewallVpcCidrBlock_, firewallVpcCidrBlock) };


    // firewallVpcStandbyZoneId Field Functions 
    bool hasFirewallVpcStandbyZoneId() const { return this->firewallVpcStandbyZoneId_ != nullptr;};
    void deleteFirewallVpcStandbyZoneId() { this->firewallVpcStandbyZoneId_ = nullptr;};
    inline string getFirewallVpcStandbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(firewallVpcStandbyZoneId_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setFirewallVpcStandbyZoneId(string firewallVpcStandbyZoneId) { DARABONBA_PTR_SET_VALUE(firewallVpcStandbyZoneId_, firewallVpcStandbyZoneId) };


    // firewallVpcZoneId Field Functions 
    bool hasFirewallVpcZoneId() const { return this->firewallVpcZoneId_ != nullptr;};
    void deleteFirewallVpcZoneId() { this->firewallVpcZoneId_ = nullptr;};
    inline string getFirewallVpcZoneId() const { DARABONBA_PTR_GET_DEFAULT(firewallVpcZoneId_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setFirewallVpcZoneId(string firewallVpcZoneId) { DARABONBA_PTR_SET_VALUE(firewallVpcZoneId_, firewallVpcZoneId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // networkInstanceId Field Functions 
    bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
    void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
    inline string getNetworkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcFirewallName Field Functions 
    bool hasVpcFirewallName() const { return this->vpcFirewallName_ != nullptr;};
    void deleteVpcFirewallName() { this->vpcFirewallName_ = nullptr;};
    inline string getVpcFirewallName() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallName_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setVpcFirewallName(string vpcFirewallName) { DARABONBA_PTR_SET_VALUE(vpcFirewallName_, vpcFirewallName) };


    // vpcRegion Field Functions 
    bool hasVpcRegion() const { return this->vpcRegion_ != nullptr;};
    void deleteVpcRegion() { this->vpcRegion_ = nullptr;};
    inline string getVpcRegion() const { DARABONBA_PTR_GET_DEFAULT(vpcRegion_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setVpcRegion(string vpcRegion) { DARABONBA_PTR_SET_VALUE(vpcRegion_, vpcRegion) };


  protected:
    // The ID of the CEN instance.
    // 
    // This parameter is required.
    shared_ptr<string> cenId_ {};
    // The status of the VPC firewall. Valid values:
    // 
    // - **open** (default): The VPC firewall is enabled after it is created.
    // 
    // - **close**: The VPC firewall is disabled after it is created. Call the [ModifyVpcFirewallCenSwitchStatus](https://help.aliyun.com/document_detail/345780.html) operation to enable the firewall.
    // 
    // This parameter is required.
    shared_ptr<string> firewallSwitch_ {};
    // The CIDR block of the vSwitch that is used by the firewall. Specify a CIDR block with a subnet mask of 29 bits or less that does not conflict with your network plan. This CIDR block is allocated to the vSwitch that is automatically created in the firewall VPC (Cloud_Firewall_VSWITCH) for traffic redirection. The vSwitch CIDR block must be a subnet of the firewall VPC CIDR block. If you do not specify this parameter, the system automatically allocates the 10.219.219.216/29 CIDR block.
    // 
    // If you leave this parameter empty, the CIDR block 10.219.219.216/29 is automatically allocated.
    // 
    // > This parameter is valid only when you create a VPC firewall for the first time in the current region of the CEN.
    shared_ptr<string> firewallVSwitchCidrBlock_ {};
    // The CIDR block of the VPC that is used by the firewall. Specify a CIDR block with a subnet mask of 28 bits or less. This CIDR block is allocated to the VPC that is automatically created for the firewall for traffic redirection. If you do not specify this parameter, the system automatically allocates the 10.0.0.0/8 CIDR block.
    // 
    // If you leave this property empty, the CIDR block 10.0.0.0/8 is automatically allocated.
    // 
    // > This parameter is valid only when you create a VPC firewall for the first time in the current region of the CEN.
    shared_ptr<string> firewallVpcCidrBlock_ {};
    // The ID of the secondary zone for the firewall. If the service in the primary zone becomes unavailable, the firewall automatically switches to the secondary zone. If you do not specify this parameter, the system automatically assigns a secondary zone for the firewall.
    // 
    // If you do not specify a value, a zone is automatically allocated to the VPC firewall.
    // 
    // > This parameter is valid only when you create a VPC firewall for the first time in the current region of the CEN.
    shared_ptr<string> firewallVpcStandbyZoneId_ {};
    // The ID of the primary zone for the firewall. If your business is sensitive to latency, specify the same zone for the firewall and the vSwitch of your business VPC to reduce latency. If you do not specify this parameter, the system automatically assigns a zone for the firewall.
    // 
    // If you do not specify a value, a zone is automatically allocated to the VPC firewall.
    // 
    // > This parameter is valid only when you create a VPC firewall for the first time in the current region of the CEN.
    shared_ptr<string> firewallVpcZoneId_ {};
    // The language of the request and response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // 
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The UID of the member account.
    shared_ptr<string> memberUid_ {};
    // The ID of the VPC for which you want to create the VPC firewall.
    // 
    // This parameter is required.
    shared_ptr<string> networkInstanceId_ {};
    // The ID of the vSwitch that is used by the Cloud Firewall interface.
    shared_ptr<string> vSwitchId_ {};
    // The name of the VPC firewall instance.
    // 
    // This parameter is required.
    shared_ptr<string> vpcFirewallName_ {};
    // The region ID of the VPC for which you want to create the VPC firewall.
    // 
    // > For more information about the regions that Cloud Firewall supports, see [Supported regions](https://help.aliyun.com/document_detail/195657.html).
    // 
    // This parameter is required.
    shared_ptr<string> vpcRegion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
