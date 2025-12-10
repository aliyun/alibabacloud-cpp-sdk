// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICELINKEDROLERESPONSEBODYROLE_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICELINKEDROLERESPONSEBODYROLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateServiceLinkedRoleResponseBodyRole : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceLinkedRoleResponseBodyRole& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IsServiceLinkedRole, isServiceLinkedRole_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(RolePrincipalName, rolePrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceLinkedRoleResponseBodyRole& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IsServiceLinkedRole, isServiceLinkedRole_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(RolePrincipalName, rolePrincipalName_);
    };
    CreateServiceLinkedRoleResponseBodyRole() = default ;
    CreateServiceLinkedRoleResponseBodyRole(const CreateServiceLinkedRoleResponseBodyRole &) = default ;
    CreateServiceLinkedRoleResponseBodyRole(CreateServiceLinkedRoleResponseBodyRole &&) = default ;
    CreateServiceLinkedRoleResponseBodyRole(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceLinkedRoleResponseBodyRole() = default ;
    CreateServiceLinkedRoleResponseBodyRole& operator=(const CreateServiceLinkedRoleResponseBodyRole &) = default ;
    CreateServiceLinkedRoleResponseBodyRole& operator=(CreateServiceLinkedRoleResponseBodyRole &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->assumeRolePolicyDocument_ == nullptr && return this->createDate_ == nullptr && return this->description_ == nullptr && return this->isServiceLinkedRole_ == nullptr && return this->roleId_ == nullptr
        && return this->roleName_ == nullptr && return this->rolePrincipalName_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline CreateServiceLinkedRoleResponseBodyRole& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // assumeRolePolicyDocument Field Functions 
    bool hasAssumeRolePolicyDocument() const { return this->assumeRolePolicyDocument_ != nullptr;};
    void deleteAssumeRolePolicyDocument() { this->assumeRolePolicyDocument_ = nullptr;};
    inline string assumeRolePolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(assumeRolePolicyDocument_, "") };
    inline CreateServiceLinkedRoleResponseBodyRole& setAssumeRolePolicyDocument(string assumeRolePolicyDocument) { DARABONBA_PTR_SET_VALUE(assumeRolePolicyDocument_, assumeRolePolicyDocument) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline CreateServiceLinkedRoleResponseBodyRole& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateServiceLinkedRoleResponseBodyRole& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isServiceLinkedRole Field Functions 
    bool hasIsServiceLinkedRole() const { return this->isServiceLinkedRole_ != nullptr;};
    void deleteIsServiceLinkedRole() { this->isServiceLinkedRole_ = nullptr;};
    inline bool isServiceLinkedRole() const { DARABONBA_PTR_GET_DEFAULT(isServiceLinkedRole_, false) };
    inline CreateServiceLinkedRoleResponseBodyRole& setIsServiceLinkedRole(bool isServiceLinkedRole) { DARABONBA_PTR_SET_VALUE(isServiceLinkedRole_, isServiceLinkedRole) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline CreateServiceLinkedRoleResponseBodyRole& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline CreateServiceLinkedRoleResponseBodyRole& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // rolePrincipalName Field Functions 
    bool hasRolePrincipalName() const { return this->rolePrincipalName_ != nullptr;};
    void deleteRolePrincipalName() { this->rolePrincipalName_ = nullptr;};
    inline string rolePrincipalName() const { DARABONBA_PTR_GET_DEFAULT(rolePrincipalName_, "") };
    inline CreateServiceLinkedRoleResponseBodyRole& setRolePrincipalName(string rolePrincipalName) { DARABONBA_PTR_SET_VALUE(rolePrincipalName_, rolePrincipalName) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the role.
    std::shared_ptr<string> arn_ = nullptr;
    // The document of the trust policy for the role.
    std::shared_ptr<string> assumeRolePolicyDocument_ = nullptr;
    // The time when the role was created. The time is displayed in UTC.
    std::shared_ptr<string> createDate_ = nullptr;
    // The description of the role.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the role is a service-linked role. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isServiceLinkedRole_ = nullptr;
    // The ID of the role.
    std::shared_ptr<string> roleId_ = nullptr;
    // The name of the role.
    std::shared_ptr<string> roleName_ = nullptr;
    // The role name that uses a domain name as the suffix.
    std::shared_ptr<string> rolePrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
