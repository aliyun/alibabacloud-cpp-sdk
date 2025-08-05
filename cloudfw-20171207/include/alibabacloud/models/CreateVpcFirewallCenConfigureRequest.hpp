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
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->firewallSwitch_ != nullptr && this->firewallVSwitchCidrBlock_ != nullptr && this->firewallVpcCidrBlock_ != nullptr && this->firewallVpcStandbyZoneId_ != nullptr && this->firewallVpcZoneId_ != nullptr
        && this->lang_ != nullptr && this->memberUid_ != nullptr && this->networkInstanceId_ != nullptr && this->vSwitchId_ != nullptr && this->vpcFirewallName_ != nullptr
        && this->vpcRegion_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // firewallSwitch Field Functions 
    bool hasFirewallSwitch() const { return this->firewallSwitch_ != nullptr;};
    void deleteFirewallSwitch() { this->firewallSwitch_ = nullptr;};
    inline string firewallSwitch() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitch_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setFirewallSwitch(string firewallSwitch) { DARABONBA_PTR_SET_VALUE(firewallSwitch_, firewallSwitch) };


    // firewallVSwitchCidrBlock Field Functions 
    bool hasFirewallVSwitchCidrBlock() const { return this->firewallVSwitchCidrBlock_ != nullptr;};
    void deleteFirewallVSwitchCidrBlock() { this->firewallVSwitchCidrBlock_ = nullptr;};
    inline string firewallVSwitchCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(firewallVSwitchCidrBlock_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setFirewallVSwitchCidrBlock(string firewallVSwitchCidrBlock) { DARABONBA_PTR_SET_VALUE(firewallVSwitchCidrBlock_, firewallVSwitchCidrBlock) };


    // firewallVpcCidrBlock Field Functions 
    bool hasFirewallVpcCidrBlock() const { return this->firewallVpcCidrBlock_ != nullptr;};
    void deleteFirewallVpcCidrBlock() { this->firewallVpcCidrBlock_ = nullptr;};
    inline string firewallVpcCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(firewallVpcCidrBlock_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setFirewallVpcCidrBlock(string firewallVpcCidrBlock) { DARABONBA_PTR_SET_VALUE(firewallVpcCidrBlock_, firewallVpcCidrBlock) };


    // firewallVpcStandbyZoneId Field Functions 
    bool hasFirewallVpcStandbyZoneId() const { return this->firewallVpcStandbyZoneId_ != nullptr;};
    void deleteFirewallVpcStandbyZoneId() { this->firewallVpcStandbyZoneId_ = nullptr;};
    inline string firewallVpcStandbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(firewallVpcStandbyZoneId_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setFirewallVpcStandbyZoneId(string firewallVpcStandbyZoneId) { DARABONBA_PTR_SET_VALUE(firewallVpcStandbyZoneId_, firewallVpcStandbyZoneId) };


    // firewallVpcZoneId Field Functions 
    bool hasFirewallVpcZoneId() const { return this->firewallVpcZoneId_ != nullptr;};
    void deleteFirewallVpcZoneId() { this->firewallVpcZoneId_ = nullptr;};
    inline string firewallVpcZoneId() const { DARABONBA_PTR_GET_DEFAULT(firewallVpcZoneId_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setFirewallVpcZoneId(string firewallVpcZoneId) { DARABONBA_PTR_SET_VALUE(firewallVpcZoneId_, firewallVpcZoneId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // networkInstanceId Field Functions 
    bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
    void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
    inline string networkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcFirewallName Field Functions 
    bool hasVpcFirewallName() const { return this->vpcFirewallName_ != nullptr;};
    void deleteVpcFirewallName() { this->vpcFirewallName_ = nullptr;};
    inline string vpcFirewallName() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallName_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setVpcFirewallName(string vpcFirewallName) { DARABONBA_PTR_SET_VALUE(vpcFirewallName_, vpcFirewallName) };


    // vpcRegion Field Functions 
    bool hasVpcRegion() const { return this->vpcRegion_ != nullptr;};
    void deleteVpcRegion() { this->vpcRegion_ = nullptr;};
    inline string vpcRegion() const { DARABONBA_PTR_GET_DEFAULT(vpcRegion_, "") };
    inline CreateVpcFirewallCenConfigureRequest& setVpcRegion(string vpcRegion) { DARABONBA_PTR_SET_VALUE(vpcRegion_, vpcRegion) };


  protected:
    // The ID of the CEN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // Specifies whether to enable the VPC firewall. Valid values:
    // 
    // *   **open**: After you create the VPC firewall, the VPC firewall is automatically enabled. This is the default value.
    // *   **close**: After you create the VPC firewall, the VPC firewall is disabled. You can call the [ModifyVpcFirewallCenSwitchStatus](https://help.aliyun.com/document_detail/345780.html) operation to manually enable the VPC firewall.
    // 
    // This parameter is required.
    std::shared_ptr<string> firewallSwitch_ = nullptr;
    // The CIDR block of the vSwitch that is automatically created for the VPC firewall. You must specify a CIDR block for the Cloud_Firewall_VSWITCH VPC that is automatically created for the VPC firewall for traffic redirection. The CIDR block does not conflict with your network plan. The subnet mask of the CIDR block must be less than or equal to 29 bits in length. The CIDR block of the vSwitch must be within the network segment of the VPC.
    // 
    // If you do not specify a value, the CIDR block 10.219.219.216/29 is automatically allocated.
    // 
    // >  This parameter takes effect only when you create a VPC firewall for the first time in the current CEN instance and region.
    std::shared_ptr<string> firewallVSwitchCidrBlock_ = nullptr;
    // The CIDR block of the VPC that is automatically created for the VPC firewall. You must specify a CIDR block for the Cloud_Firewall_VPC VPC that is automatically created for the VPC firewall for traffic redirection. The subnet mask of the CIDR block must be less than or equal to 28 bits in length.
    // 
    // If you do not specify a value, the CIDR block 10.0.0.0/8 is automatically allocated.
    // 
    // >  This parameter takes effect only when you create a VPC firewall for the first time in the current CEN instance and region.
    std::shared_ptr<string> firewallVpcCidrBlock_ = nullptr;
    // The ID of the backup availability zone to which the firewall belongs. The firewall will automatically switch to the backup availability zone to continue running only if the primary availability zone service is unavailable.
    // If this parameter is not filled, the backup availability zone for the firewall will be automatically assigned.
    // > This parameter is only effective when creating a VPC firewall for the first time in this CEN region.
    std::shared_ptr<string> firewallVpcStandbyZoneId_ = nullptr;
    // The ID of the zone to which the vSwitch belongs. If your service is latency-sensitive, you can specify the same zone for the vSwitch of the firewall and the vSwitch of your business VPC to minimize latency.
    // 
    // If you do not specify a value, a zone is automatically assigned for the vSwitch.
    // 
    // >  This parameter takes effect only when you create a VPC firewall for the first time in the current CEN instance and region. For more information about zones that are supported by each region, see [Query zones](https://help.aliyun.com/document_detail/36064.html).
    std::shared_ptr<string> firewallVpcZoneId_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The UID of the member that is managed by your Alibaba Cloud account.
    std::shared_ptr<string> memberUid_ = nullptr;
    // The ID of the VPC for which you want to create the VPC firewall.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkInstanceId_ = nullptr;
    // The ID of the vSwitch that is used to associate with the elastic network interface (ENI) required by the VPC firewall.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The instance name of the VPC firewall.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcFirewallName_ = nullptr;
    // The ID of the region to which the VPC belongs.
    // 
    // > For more information about the regions, see [Supported regions](https://help.aliyun.com/document_detail/195657.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
