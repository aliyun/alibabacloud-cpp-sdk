// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLIPSWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLIPSWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyVpcFirewallIPSWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcFirewallIPSWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ListType, listType_);
      DARABONBA_PTR_TO_JSON(ListValue, listValue_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_TO_JSON(WhiteType, whiteType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcFirewallIPSWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
      DARABONBA_PTR_FROM_JSON(ListValue, listValue_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_FROM_JSON(WhiteType, whiteType_);
    };
    ModifyVpcFirewallIPSWhitelistRequest() = default ;
    ModifyVpcFirewallIPSWhitelistRequest(const ModifyVpcFirewallIPSWhitelistRequest &) = default ;
    ModifyVpcFirewallIPSWhitelistRequest(ModifyVpcFirewallIPSWhitelistRequest &&) = default ;
    ModifyVpcFirewallIPSWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcFirewallIPSWhitelistRequest() = default ;
    ModifyVpcFirewallIPSWhitelistRequest& operator=(const ModifyVpcFirewallIPSWhitelistRequest &) = default ;
    ModifyVpcFirewallIPSWhitelistRequest& operator=(ModifyVpcFirewallIPSWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->listType_ == nullptr && return this->listValue_ == nullptr && return this->memberUid_ == nullptr && return this->vpcFirewallId_ == nullptr && return this->whiteType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyVpcFirewallIPSWhitelistRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline int64_t listType() const { DARABONBA_PTR_GET_DEFAULT(listType_, 0L) };
    inline ModifyVpcFirewallIPSWhitelistRequest& setListType(int64_t listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


    // listValue Field Functions 
    bool hasListValue() const { return this->listValue_ != nullptr;};
    void deleteListValue() { this->listValue_ = nullptr;};
    inline string listValue() const { DARABONBA_PTR_GET_DEFAULT(listValue_, "") };
    inline ModifyVpcFirewallIPSWhitelistRequest& setListValue(string listValue) { DARABONBA_PTR_SET_VALUE(listValue_, listValue) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline ModifyVpcFirewallIPSWhitelistRequest& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string vpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline ModifyVpcFirewallIPSWhitelistRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


    // whiteType Field Functions 
    bool hasWhiteType() const { return this->whiteType_ != nullptr;};
    void deleteWhiteType() { this->whiteType_ = nullptr;};
    inline int64_t whiteType() const { DARABONBA_PTR_GET_DEFAULT(whiteType_, 0L) };
    inline ModifyVpcFirewallIPSWhitelistRequest& setWhiteType(int64_t whiteType) { DARABONBA_PTR_SET_VALUE(whiteType_, whiteType) };


  protected:
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The type of the list. Valid values:
    // 
    // *   **1**: user-defined
    // *   **2**: address book
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> listType_ = nullptr;
    // The entry in the list.
    std::shared_ptr<string> listValue_ = nullptr;
    // The UID of the member that is managed by your Alibaba Cloud account.
    std::shared_ptr<int64_t> memberUid_ = nullptr;
    // The instance ID of the VPC firewall.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcFirewallId_ = nullptr;
    // The type of the whitelist. Valid values:
    // 
    // *   **1**: destination
    // *   **2**: source
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> whiteType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
