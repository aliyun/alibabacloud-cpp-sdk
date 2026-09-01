// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICTEMPLATEVPCCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PUBLICTEMPLATEVPCCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicTemplateVPCConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicTemplateVPCConfig& obj) { 
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(vSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, PublicTemplateVPCConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(vSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    PublicTemplateVPCConfig() = default ;
    PublicTemplateVPCConfig(const PublicTemplateVPCConfig &) = default ;
    PublicTemplateVPCConfig(PublicTemplateVPCConfig &&) = default ;
    PublicTemplateVPCConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicTemplateVPCConfig() = default ;
    PublicTemplateVPCConfig& operator=(const PublicTemplateVPCConfig &) = default ;
    PublicTemplateVPCConfig& operator=(PublicTemplateVPCConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->role_ == nullptr
        && this->securityGroupId_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline PublicTemplateVPCConfig& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline PublicTemplateVPCConfig& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline PublicTemplateVPCConfig& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline PublicTemplateVPCConfig& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline PublicTemplateVPCConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The VPC authorization role name.
    shared_ptr<string> role_ {};
    // The security group ID.
    shared_ptr<string> securityGroupId_ {};
    // The list of vSwitch IDs.
    shared_ptr<vector<string>> vSwitchIds_ {};
    // VPC ID
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
