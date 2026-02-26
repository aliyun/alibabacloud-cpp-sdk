// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CredentialConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Chain, chain_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(ServiceRole, serviceRole_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Chain, chain_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(ServiceRole, serviceRole_);
    };
    CredentialConfig() = default ;
    CredentialConfig(const CredentialConfig &) = default ;
    CredentialConfig(CredentialConfig &&) = default ;
    CredentialConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialConfig() = default ;
    CredentialConfig& operator=(const CredentialConfig &) = default ;
    CredentialConfig& operator=(CredentialConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Chain : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Chain& obj) { 
        DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      };
      friend void from_json(const Darabonba::Json& j, Chain& obj) { 
        DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      };
      Chain() = default ;
      Chain(const Chain &) = default ;
      Chain(Chain &&) = default ;
      Chain(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Chain() = default ;
      Chain& operator=(const Chain &) = default ;
      Chain& operator=(Chain &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assumeRoleFor_ == nullptr
        && this->role_ == nullptr && this->roleType_ == nullptr; };
      // assumeRoleFor Field Functions 
      bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
      void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
      inline string getAssumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, "") };
      inline Chain& setAssumeRoleFor(string assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Chain& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // roleType Field Functions 
      bool hasRoleType() const { return this->roleType_ != nullptr;};
      void deleteRoleType() { this->roleType_ = nullptr;};
      inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
      inline Chain& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    protected:
      // The ID of the account that you use to grant permissions.
      shared_ptr<string> assumeRoleFor_ {};
      // The RAM role that can be assumed.
      shared_ptr<string> role_ {};
      // The role type. Valid values:
      // 
      // *   user: Alibaba Cloud account.
      // *   service: Alibaba Cloud service.
      shared_ptr<string> roleType_ {};
    };

    virtual bool empty() const override { return this->chain_ == nullptr
        && this->policy_ == nullptr && this->serviceRole_ == nullptr; };
    // chain Field Functions 
    bool hasChain() const { return this->chain_ != nullptr;};
    void deleteChain() { this->chain_ = nullptr;};
    inline const vector<CredentialConfig::Chain> & getChain() const { DARABONBA_PTR_GET_CONST(chain_, vector<CredentialConfig::Chain>) };
    inline vector<CredentialConfig::Chain> getChain() { DARABONBA_PTR_GET(chain_, vector<CredentialConfig::Chain>) };
    inline CredentialConfig& setChain(const vector<CredentialConfig::Chain> & chain) { DARABONBA_PTR_SET_VALUE(chain_, chain) };
    inline CredentialConfig& setChain(vector<CredentialConfig::Chain> && chain) { DARABONBA_PTR_SET_RVALUE(chain_, chain) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CredentialConfig& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // serviceRole Field Functions 
    bool hasServiceRole() const { return this->serviceRole_ != nullptr;};
    void deleteServiceRole() { this->serviceRole_ = nullptr;};
    inline string getServiceRole() const { DARABONBA_PTR_GET_DEFAULT(serviceRole_, "") };
    inline CredentialConfig& setServiceRole(string serviceRole) { DARABONBA_PTR_SET_VALUE(serviceRole_, serviceRole) };


  protected:
    // The authorization chains. All roles in the array must have the `sts:AssumeRole` permission. You need to only grant other permissions, such as read and write permissions on OSS, to the last role in the array. You can grant permissions in the RAM console.
    shared_ptr<vector<CredentialConfig::Chain>> chain_ {};
    // The policy that is attached to the role specified by the ServiceRole parameter. For example, the policy allows access to OSS. This parameter is optional.
    shared_ptr<string> policy_ {};
    // The service role in the account that is used to call an IMM API operation. The role must have the `sts:AssumeRole` permission. You can configure permissions for the role in the Resource Access Management (RAM) console.
    shared_ptr<string> serviceRole_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
