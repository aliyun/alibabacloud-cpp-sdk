// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTCREDENTIALCONFIGCREDENTIALCONFIGITEMSROLES_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTCREDENTIALCONFIGCREDENTIALCONFIGITEMSROLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class DeploymentCredentialConfigCredentialConfigItemsRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentCredentialConfigCredentialConfigItemsRoles& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentCredentialConfigCredentialConfigItemsRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    DeploymentCredentialConfigCredentialConfigItemsRoles() = default ;
    DeploymentCredentialConfigCredentialConfigItemsRoles(const DeploymentCredentialConfigCredentialConfigItemsRoles &) = default ;
    DeploymentCredentialConfigCredentialConfigItemsRoles(DeploymentCredentialConfigCredentialConfigItemsRoles &&) = default ;
    DeploymentCredentialConfigCredentialConfigItemsRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentCredentialConfigCredentialConfigItemsRoles() = default ;
    DeploymentCredentialConfigCredentialConfigItemsRoles& operator=(const DeploymentCredentialConfigCredentialConfigItemsRoles &) = default ;
    DeploymentCredentialConfigCredentialConfigItemsRoles& operator=(DeploymentCredentialConfigCredentialConfigItemsRoles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assumeRoleFor_ == nullptr
        && return this->roleArn_ == nullptr && return this->roleType_ == nullptr; };
    // assumeRoleFor Field Functions 
    bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
    void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
    inline string assumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, "") };
    inline DeploymentCredentialConfigCredentialConfigItemsRoles& setAssumeRoleFor(string assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline DeploymentCredentialConfigCredentialConfigItemsRoles& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline DeploymentCredentialConfigCredentialConfigItemsRoles& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // AssumeRoleFor
    std::shared_ptr<string> assumeRoleFor_ = nullptr;
    // 角色名称
    std::shared_ptr<string> roleArn_ = nullptr;
    // 角色类型
    std::shared_ptr<string> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
