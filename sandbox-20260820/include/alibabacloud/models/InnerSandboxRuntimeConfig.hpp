// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INNERSANDBOXRUNTIMECONFIG_HPP_
#define ALIBABACLOUD_MODELS_INNERSANDBOXRUNTIMECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class InnerSandboxRuntimeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InnerSandboxRuntimeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(vpcConfig, vpcConfig_);
    };
    friend void from_json(const Darabonba::Json& j, InnerSandboxRuntimeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(vpcConfig, vpcConfig_);
    };
    InnerSandboxRuntimeConfig() = default ;
    InnerSandboxRuntimeConfig(const InnerSandboxRuntimeConfig &) = default ;
    InnerSandboxRuntimeConfig(InnerSandboxRuntimeConfig &&) = default ;
    InnerSandboxRuntimeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InnerSandboxRuntimeConfig() = default ;
    InnerSandboxRuntimeConfig& operator=(const InnerSandboxRuntimeConfig &) = default ;
    InnerSandboxRuntimeConfig& operator=(InnerSandboxRuntimeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpcConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpcConfig& obj) { 
        DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(vSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, VpcConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(vSwitchIds, vSwitchIds_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      };
      VpcConfig() = default ;
      VpcConfig(const VpcConfig &) = default ;
      VpcConfig(VpcConfig &&) = default ;
      VpcConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpcConfig() = default ;
      VpcConfig& operator=(const VpcConfig &) = default ;
      VpcConfig& operator=(VpcConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline VpcConfig& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline VpcConfig& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline VpcConfig& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline VpcConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The security group ID.
      shared_ptr<string> securityGroupId_ {};
      // The vSwitch IDs.
      shared_ptr<vector<string>> vSwitchIds_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->role_ == nullptr
        && this->vpcConfig_ == nullptr; };
    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline InnerSandboxRuntimeConfig& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // vpcConfig Field Functions 
    bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
    void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
    inline const InnerSandboxRuntimeConfig::VpcConfig & getVpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, InnerSandboxRuntimeConfig::VpcConfig) };
    inline InnerSandboxRuntimeConfig::VpcConfig getVpcConfig() { DARABONBA_PTR_GET(vpcConfig_, InnerSandboxRuntimeConfig::VpcConfig) };
    inline InnerSandboxRuntimeConfig& setVpcConfig(const InnerSandboxRuntimeConfig::VpcConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
    inline InnerSandboxRuntimeConfig& setVpcConfig(InnerSandboxRuntimeConfig::VpcConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


  protected:
    // The RAM role that grants the required permissions to the sandbox.
    shared_ptr<string> role_ {};
    // The VPC configuration.
    shared_ptr<InnerSandboxRuntimeConfig::VpcConfig> vpcConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
