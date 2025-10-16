// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLACLENGINEMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLACLENGINEMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyVpcFirewallAclEngineModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcFirewallAclEngineModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(StrictMode, strictMode_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcFirewallAclEngineModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(StrictMode, strictMode_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    ModifyVpcFirewallAclEngineModeRequest() = default ;
    ModifyVpcFirewallAclEngineModeRequest(const ModifyVpcFirewallAclEngineModeRequest &) = default ;
    ModifyVpcFirewallAclEngineModeRequest(ModifyVpcFirewallAclEngineModeRequest &&) = default ;
    ModifyVpcFirewallAclEngineModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcFirewallAclEngineModeRequest() = default ;
    ModifyVpcFirewallAclEngineModeRequest& operator=(const ModifyVpcFirewallAclEngineModeRequest &) = default ;
    ModifyVpcFirewallAclEngineModeRequest& operator=(ModifyVpcFirewallAclEngineModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberUid_ == nullptr
        && return this->strictMode_ == nullptr && return this->vpcFirewallId_ == nullptr; };
    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline ModifyVpcFirewallAclEngineModeRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // strictMode Field Functions 
    bool hasStrictMode() const { return this->strictMode_ != nullptr;};
    void deleteStrictMode() { this->strictMode_ = nullptr;};
    inline string strictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, "") };
    inline ModifyVpcFirewallAclEngineModeRequest& setStrictMode(string strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string vpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline ModifyVpcFirewallAclEngineModeRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    std::shared_ptr<string> memberUid_ = nullptr;
    std::shared_ptr<string> strictMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vpcFirewallId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
