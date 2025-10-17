// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALROLE_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALROLE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AssumeUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class CredentialRole : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialRole& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
      DARABONBA_PTR_TO_JSON(AssumeUserInfo, assumeUserInfo_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialRole& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
      DARABONBA_PTR_FROM_JSON(AssumeUserInfo, assumeUserInfo_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    CredentialRole() = default ;
    CredentialRole(const CredentialRole &) = default ;
    CredentialRole(CredentialRole &&) = default ;
    CredentialRole(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialRole() = default ;
    CredentialRole& operator=(const CredentialRole &) = default ;
    CredentialRole& operator=(CredentialRole &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assumeRoleFor_ == nullptr
        && return this->assumeUserInfo_ == nullptr && return this->policy_ == nullptr && return this->roleArn_ == nullptr && return this->roleType_ == nullptr; };
    // assumeRoleFor Field Functions 
    bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
    void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
    inline string assumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, "") };
    inline CredentialRole& setAssumeRoleFor(string assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


    // assumeUserInfo Field Functions 
    bool hasAssumeUserInfo() const { return this->assumeUserInfo_ != nullptr;};
    void deleteAssumeUserInfo() { this->assumeUserInfo_ = nullptr;};
    inline const AssumeUserInfo & assumeUserInfo() const { DARABONBA_PTR_GET_CONST(assumeUserInfo_, AssumeUserInfo) };
    inline AssumeUserInfo assumeUserInfo() { DARABONBA_PTR_GET(assumeUserInfo_, AssumeUserInfo) };
    inline CredentialRole& setAssumeUserInfo(const AssumeUserInfo & assumeUserInfo) { DARABONBA_PTR_SET_VALUE(assumeUserInfo_, assumeUserInfo) };
    inline CredentialRole& setAssumeUserInfo(AssumeUserInfo && assumeUserInfo) { DARABONBA_PTR_SET_RVALUE(assumeUserInfo_, assumeUserInfo) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CredentialRole& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CredentialRole& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline CredentialRole& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    std::shared_ptr<string> assumeRoleFor_ = nullptr;
    std::shared_ptr<AssumeUserInfo> assumeUserInfo_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    std::shared_ptr<string> roleArn_ = nullptr;
    std::shared_ptr<string> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
