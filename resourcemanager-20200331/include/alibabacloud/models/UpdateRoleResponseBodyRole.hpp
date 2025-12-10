// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROLERESPONSEBODYROLE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROLERESPONSEBODYROLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class UpdateRoleResponseBodyRole : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRoleResponseBodyRole& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MaxSessionDuration, maxSessionDuration_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(RolePrincipalName, rolePrincipalName_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRoleResponseBodyRole& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MaxSessionDuration, maxSessionDuration_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(RolePrincipalName, rolePrincipalName_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    UpdateRoleResponseBodyRole() = default ;
    UpdateRoleResponseBodyRole(const UpdateRoleResponseBodyRole &) = default ;
    UpdateRoleResponseBodyRole(UpdateRoleResponseBodyRole &&) = default ;
    UpdateRoleResponseBodyRole(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRoleResponseBodyRole() = default ;
    UpdateRoleResponseBodyRole& operator=(const UpdateRoleResponseBodyRole &) = default ;
    UpdateRoleResponseBodyRole& operator=(UpdateRoleResponseBodyRole &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->assumeRolePolicyDocument_ == nullptr && return this->createDate_ == nullptr && return this->description_ == nullptr && return this->maxSessionDuration_ == nullptr && return this->roleId_ == nullptr
        && return this->roleName_ == nullptr && return this->rolePrincipalName_ == nullptr && return this->updateDate_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline UpdateRoleResponseBodyRole& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // assumeRolePolicyDocument Field Functions 
    bool hasAssumeRolePolicyDocument() const { return this->assumeRolePolicyDocument_ != nullptr;};
    void deleteAssumeRolePolicyDocument() { this->assumeRolePolicyDocument_ = nullptr;};
    inline string assumeRolePolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(assumeRolePolicyDocument_, "") };
    inline UpdateRoleResponseBodyRole& setAssumeRolePolicyDocument(string assumeRolePolicyDocument) { DARABONBA_PTR_SET_VALUE(assumeRolePolicyDocument_, assumeRolePolicyDocument) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline UpdateRoleResponseBodyRole& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateRoleResponseBodyRole& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // maxSessionDuration Field Functions 
    bool hasMaxSessionDuration() const { return this->maxSessionDuration_ != nullptr;};
    void deleteMaxSessionDuration() { this->maxSessionDuration_ = nullptr;};
    inline int64_t maxSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(maxSessionDuration_, 0L) };
    inline UpdateRoleResponseBodyRole& setMaxSessionDuration(int64_t maxSessionDuration) { DARABONBA_PTR_SET_VALUE(maxSessionDuration_, maxSessionDuration) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline UpdateRoleResponseBodyRole& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline UpdateRoleResponseBodyRole& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // rolePrincipalName Field Functions 
    bool hasRolePrincipalName() const { return this->rolePrincipalName_ != nullptr;};
    void deleteRolePrincipalName() { this->rolePrincipalName_ = nullptr;};
    inline string rolePrincipalName() const { DARABONBA_PTR_GET_DEFAULT(rolePrincipalName_, "") };
    inline UpdateRoleResponseBodyRole& setRolePrincipalName(string rolePrincipalName) { DARABONBA_PTR_SET_VALUE(rolePrincipalName_, rolePrincipalName) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline UpdateRoleResponseBodyRole& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the RAM role.
    std::shared_ptr<string> arn_ = nullptr;
    // The trust policy of the RAM role.
    std::shared_ptr<string> assumeRolePolicyDocument_ = nullptr;
    // The time when the RAM role was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The description of the RAM role.
    std::shared_ptr<string> description_ = nullptr;
    // The maximum session time of the RAM role.
    std::shared_ptr<int64_t> maxSessionDuration_ = nullptr;
    // The ID of the RAM role.
    std::shared_ptr<string> roleId_ = nullptr;
    // The name of the RAM role.
    std::shared_ptr<string> roleName_ = nullptr;
    // The name of the RAM role after authorization.
    std::shared_ptr<string> rolePrincipalName_ = nullptr;
    // The time when the RAM role was updated.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
