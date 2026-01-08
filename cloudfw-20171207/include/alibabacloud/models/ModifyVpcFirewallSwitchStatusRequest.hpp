// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLSWITCHSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLSWITCHSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyVpcFirewallSwitchStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcFirewallSwitchStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallSwitch, firewallSwitch_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcFirewallSwitchStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallSwitch, firewallSwitch_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    ModifyVpcFirewallSwitchStatusRequest() = default ;
    ModifyVpcFirewallSwitchStatusRequest(const ModifyVpcFirewallSwitchStatusRequest &) = default ;
    ModifyVpcFirewallSwitchStatusRequest(ModifyVpcFirewallSwitchStatusRequest &&) = default ;
    ModifyVpcFirewallSwitchStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcFirewallSwitchStatusRequest() = default ;
    ModifyVpcFirewallSwitchStatusRequest& operator=(const ModifyVpcFirewallSwitchStatusRequest &) = default ;
    ModifyVpcFirewallSwitchStatusRequest& operator=(ModifyVpcFirewallSwitchStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firewallSwitch_ == nullptr
        && this->lang_ == nullptr && this->memberUid_ == nullptr && this->vpcFirewallId_ == nullptr; };
    // firewallSwitch Field Functions 
    bool hasFirewallSwitch() const { return this->firewallSwitch_ != nullptr;};
    void deleteFirewallSwitch() { this->firewallSwitch_ = nullptr;};
    inline string getFirewallSwitch() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitch_, "") };
    inline ModifyVpcFirewallSwitchStatusRequest& setFirewallSwitch(string firewallSwitch) { DARABONBA_PTR_SET_VALUE(firewallSwitch_, firewallSwitch) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyVpcFirewallSwitchStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline ModifyVpcFirewallSwitchStatusRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline ModifyVpcFirewallSwitchStatusRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    // Specifies whether to enable the VPC firewall. Valid values:
    // 
    // *   **open**: yes
    // *   **close**: no
    // 
    // This parameter is required.
    shared_ptr<string> firewallSwitch_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The UID of the member that is managed by your Alibaba Cloud account.
    shared_ptr<string> memberUid_ {};
    // The instance ID of the VPC firewall.
    // 
    // > You can call the [DescribeVpcFirewallList](https://help.aliyun.com/document_detail/342932.html) operation to query the instance IDs of VPC firewalls.
    // 
    // This parameter is required.
    shared_ptr<string> vpcFirewallId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
