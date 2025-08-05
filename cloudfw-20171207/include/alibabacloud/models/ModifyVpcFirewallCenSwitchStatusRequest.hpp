// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLCENSWITCHSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLCENSWITCHSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyVpcFirewallCenSwitchStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcFirewallCenSwitchStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallSwitch, firewallSwitch_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcFirewallCenSwitchStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallSwitch, firewallSwitch_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    ModifyVpcFirewallCenSwitchStatusRequest() = default ;
    ModifyVpcFirewallCenSwitchStatusRequest(const ModifyVpcFirewallCenSwitchStatusRequest &) = default ;
    ModifyVpcFirewallCenSwitchStatusRequest(ModifyVpcFirewallCenSwitchStatusRequest &&) = default ;
    ModifyVpcFirewallCenSwitchStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcFirewallCenSwitchStatusRequest() = default ;
    ModifyVpcFirewallCenSwitchStatusRequest& operator=(const ModifyVpcFirewallCenSwitchStatusRequest &) = default ;
    ModifyVpcFirewallCenSwitchStatusRequest& operator=(ModifyVpcFirewallCenSwitchStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->firewallSwitch_ != nullptr
        && this->lang_ != nullptr && this->memberUid_ != nullptr && this->vpcFirewallId_ != nullptr; };
    // firewallSwitch Field Functions 
    bool hasFirewallSwitch() const { return this->firewallSwitch_ != nullptr;};
    void deleteFirewallSwitch() { this->firewallSwitch_ = nullptr;};
    inline string firewallSwitch() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitch_, "") };
    inline ModifyVpcFirewallCenSwitchStatusRequest& setFirewallSwitch(string firewallSwitch) { DARABONBA_PTR_SET_VALUE(firewallSwitch_, firewallSwitch) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyVpcFirewallCenSwitchStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline ModifyVpcFirewallCenSwitchStatusRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string vpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline ModifyVpcFirewallCenSwitchStatusRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    // Specifies whether to enable the VPC firewall. Valid values:
    // 
    // *   **open**: yes
    // *   **close**: no
    // 
    // This parameter is required.
    std::shared_ptr<string> firewallSwitch_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The UID of the member that is managed by your Alibaba Cloud account.
    std::shared_ptr<string> memberUid_ = nullptr;
    // The instance ID of the VPC firewall.
    // 
    // > You can call the [DescribeVpcFirewallCenList](https://help.aliyun.com/document_detail/345777.html) operation to query the instance IDs of VPC firewalls.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcFirewallId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
