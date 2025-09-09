// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALCONFIGCONFIGSROLES_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALCONFIGCONFIGSROLES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CredentialConfigConfigsRolesUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CredentialConfigConfigsRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialConfigConfigsRoles& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialConfigConfigsRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    CredentialConfigConfigsRoles() = default ;
    CredentialConfigConfigsRoles(const CredentialConfigConfigsRoles &) = default ;
    CredentialConfigConfigsRoles(CredentialConfigConfigsRoles &&) = default ;
    CredentialConfigConfigsRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialConfigConfigsRoles() = default ;
    CredentialConfigConfigsRoles& operator=(const CredentialConfigConfigsRoles &) = default ;
    CredentialConfigConfigsRoles& operator=(CredentialConfigConfigsRoles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assumeRoleFor_ != nullptr
        && this->policy_ != nullptr && this->roleArn_ != nullptr && this->roleType_ != nullptr && this->userInfo_ != nullptr; };
    // assumeRoleFor Field Functions 
    bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
    void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
    inline string assumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, "") };
    inline CredentialConfigConfigsRoles& setAssumeRoleFor(string assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CredentialConfigConfigsRoles& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CredentialConfigConfigsRoles& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline CredentialConfigConfigsRoles& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const Models::CredentialConfigConfigsRolesUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, Models::CredentialConfigConfigsRolesUserInfo) };
    inline Models::CredentialConfigConfigsRolesUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, Models::CredentialConfigConfigsRolesUserInfo) };
    inline CredentialConfigConfigsRoles& setUserInfo(const Models::CredentialConfigConfigsRolesUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CredentialConfigConfigsRoles& setUserInfo(Models::CredentialConfigConfigsRolesUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<string> assumeRoleFor_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> roleArn_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> roleType_ = nullptr;
    std::shared_ptr<Models::CredentialConfigConfigsRolesUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
