// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICELINKEDROLE_HPP_
#define ALIBABACLOUD_MODELS_SERVICELINKEDROLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ServiceLinkedRole : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceLinkedRole& obj) { 
      DARABONBA_PTR_TO_JSON(arn, arn_);
      DARABONBA_PTR_TO_JSON(assumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_TO_JSON(createDate, createDate_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(isServiceLinkedRole, isServiceLinkedRole_);
      DARABONBA_PTR_TO_JSON(roleId, roleId_);
      DARABONBA_PTR_TO_JSON(roleName, roleName_);
      DARABONBA_PTR_TO_JSON(rolePrincipalName, rolePrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceLinkedRole& obj) { 
      DARABONBA_PTR_FROM_JSON(arn, arn_);
      DARABONBA_PTR_FROM_JSON(assumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_FROM_JSON(createDate, createDate_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(isServiceLinkedRole, isServiceLinkedRole_);
      DARABONBA_PTR_FROM_JSON(roleId, roleId_);
      DARABONBA_PTR_FROM_JSON(roleName, roleName_);
      DARABONBA_PTR_FROM_JSON(rolePrincipalName, rolePrincipalName_);
    };
    ServiceLinkedRole() = default ;
    ServiceLinkedRole(const ServiceLinkedRole &) = default ;
    ServiceLinkedRole(ServiceLinkedRole &&) = default ;
    ServiceLinkedRole(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceLinkedRole() = default ;
    ServiceLinkedRole& operator=(const ServiceLinkedRole &) = default ;
    ServiceLinkedRole& operator=(ServiceLinkedRole &&) = default ;
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
    inline ServiceLinkedRole& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // assumeRolePolicyDocument Field Functions 
    bool hasAssumeRolePolicyDocument() const { return this->assumeRolePolicyDocument_ != nullptr;};
    void deleteAssumeRolePolicyDocument() { this->assumeRolePolicyDocument_ = nullptr;};
    inline string assumeRolePolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(assumeRolePolicyDocument_, "") };
    inline ServiceLinkedRole& setAssumeRolePolicyDocument(string assumeRolePolicyDocument) { DARABONBA_PTR_SET_VALUE(assumeRolePolicyDocument_, assumeRolePolicyDocument) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ServiceLinkedRole& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ServiceLinkedRole& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isServiceLinkedRole Field Functions 
    bool hasIsServiceLinkedRole() const { return this->isServiceLinkedRole_ != nullptr;};
    void deleteIsServiceLinkedRole() { this->isServiceLinkedRole_ = nullptr;};
    inline bool isServiceLinkedRole() const { DARABONBA_PTR_GET_DEFAULT(isServiceLinkedRole_, false) };
    inline ServiceLinkedRole& setIsServiceLinkedRole(bool isServiceLinkedRole) { DARABONBA_PTR_SET_VALUE(isServiceLinkedRole_, isServiceLinkedRole) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline ServiceLinkedRole& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline ServiceLinkedRole& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // rolePrincipalName Field Functions 
    bool hasRolePrincipalName() const { return this->rolePrincipalName_ != nullptr;};
    void deleteRolePrincipalName() { this->rolePrincipalName_ = nullptr;};
    inline string rolePrincipalName() const { DARABONBA_PTR_GET_DEFAULT(rolePrincipalName_, "") };
    inline ServiceLinkedRole& setRolePrincipalName(string rolePrincipalName) { DARABONBA_PTR_SET_VALUE(rolePrincipalName_, rolePrincipalName) };


  protected:
    std::shared_ptr<string> arn_ = nullptr;
    std::shared_ptr<string> assumeRolePolicyDocument_ = nullptr;
    std::shared_ptr<string> createDate_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> isServiceLinkedRole_ = nullptr;
    std::shared_ptr<string> roleId_ = nullptr;
    std::shared_ptr<string> roleName_ = nullptr;
    std::shared_ptr<string> rolePrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
