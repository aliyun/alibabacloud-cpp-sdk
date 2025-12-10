// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROLERESPONSEBODYROLE_HPP_
#define ALIBABACLOUD_MODELS_GETROLERESPONSEBODYROLE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRoleResponseBodyRoleLatestDeletionTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetRoleResponseBodyRole : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoleResponseBodyRole& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IsServiceLinkedRole, isServiceLinkedRole_);
      DARABONBA_PTR_TO_JSON(LatestDeletionTask, latestDeletionTask_);
      DARABONBA_PTR_TO_JSON(MaxSessionDuration, maxSessionDuration_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(RolePrincipalName, rolePrincipalName_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoleResponseBodyRole& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IsServiceLinkedRole, isServiceLinkedRole_);
      DARABONBA_PTR_FROM_JSON(LatestDeletionTask, latestDeletionTask_);
      DARABONBA_PTR_FROM_JSON(MaxSessionDuration, maxSessionDuration_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(RolePrincipalName, rolePrincipalName_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    GetRoleResponseBodyRole() = default ;
    GetRoleResponseBodyRole(const GetRoleResponseBodyRole &) = default ;
    GetRoleResponseBodyRole(GetRoleResponseBodyRole &&) = default ;
    GetRoleResponseBodyRole(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoleResponseBodyRole() = default ;
    GetRoleResponseBodyRole& operator=(const GetRoleResponseBodyRole &) = default ;
    GetRoleResponseBodyRole& operator=(GetRoleResponseBodyRole &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->assumeRolePolicyDocument_ == nullptr && return this->createDate_ == nullptr && return this->description_ == nullptr && return this->isServiceLinkedRole_ == nullptr && return this->latestDeletionTask_ == nullptr
        && return this->maxSessionDuration_ == nullptr && return this->roleId_ == nullptr && return this->roleName_ == nullptr && return this->rolePrincipalName_ == nullptr && return this->updateDate_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline GetRoleResponseBodyRole& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // assumeRolePolicyDocument Field Functions 
    bool hasAssumeRolePolicyDocument() const { return this->assumeRolePolicyDocument_ != nullptr;};
    void deleteAssumeRolePolicyDocument() { this->assumeRolePolicyDocument_ = nullptr;};
    inline string assumeRolePolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(assumeRolePolicyDocument_, "") };
    inline GetRoleResponseBodyRole& setAssumeRolePolicyDocument(string assumeRolePolicyDocument) { DARABONBA_PTR_SET_VALUE(assumeRolePolicyDocument_, assumeRolePolicyDocument) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline GetRoleResponseBodyRole& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRoleResponseBodyRole& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isServiceLinkedRole Field Functions 
    bool hasIsServiceLinkedRole() const { return this->isServiceLinkedRole_ != nullptr;};
    void deleteIsServiceLinkedRole() { this->isServiceLinkedRole_ = nullptr;};
    inline bool isServiceLinkedRole() const { DARABONBA_PTR_GET_DEFAULT(isServiceLinkedRole_, false) };
    inline GetRoleResponseBodyRole& setIsServiceLinkedRole(bool isServiceLinkedRole) { DARABONBA_PTR_SET_VALUE(isServiceLinkedRole_, isServiceLinkedRole) };


    // latestDeletionTask Field Functions 
    bool hasLatestDeletionTask() const { return this->latestDeletionTask_ != nullptr;};
    void deleteLatestDeletionTask() { this->latestDeletionTask_ = nullptr;};
    inline const Models::GetRoleResponseBodyRoleLatestDeletionTask & latestDeletionTask() const { DARABONBA_PTR_GET_CONST(latestDeletionTask_, Models::GetRoleResponseBodyRoleLatestDeletionTask) };
    inline Models::GetRoleResponseBodyRoleLatestDeletionTask latestDeletionTask() { DARABONBA_PTR_GET(latestDeletionTask_, Models::GetRoleResponseBodyRoleLatestDeletionTask) };
    inline GetRoleResponseBodyRole& setLatestDeletionTask(const Models::GetRoleResponseBodyRoleLatestDeletionTask & latestDeletionTask) { DARABONBA_PTR_SET_VALUE(latestDeletionTask_, latestDeletionTask) };
    inline GetRoleResponseBodyRole& setLatestDeletionTask(Models::GetRoleResponseBodyRoleLatestDeletionTask && latestDeletionTask) { DARABONBA_PTR_SET_RVALUE(latestDeletionTask_, latestDeletionTask) };


    // maxSessionDuration Field Functions 
    bool hasMaxSessionDuration() const { return this->maxSessionDuration_ != nullptr;};
    void deleteMaxSessionDuration() { this->maxSessionDuration_ = nullptr;};
    inline int64_t maxSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(maxSessionDuration_, 0L) };
    inline GetRoleResponseBodyRole& setMaxSessionDuration(int64_t maxSessionDuration) { DARABONBA_PTR_SET_VALUE(maxSessionDuration_, maxSessionDuration) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline GetRoleResponseBodyRole& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline GetRoleResponseBodyRole& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // rolePrincipalName Field Functions 
    bool hasRolePrincipalName() const { return this->rolePrincipalName_ != nullptr;};
    void deleteRolePrincipalName() { this->rolePrincipalName_ = nullptr;};
    inline string rolePrincipalName() const { DARABONBA_PTR_GET_DEFAULT(rolePrincipalName_, "") };
    inline GetRoleResponseBodyRole& setRolePrincipalName(string rolePrincipalName) { DARABONBA_PTR_SET_VALUE(rolePrincipalName_, rolePrincipalName) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline GetRoleResponseBodyRole& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the role.
    std::shared_ptr<string> arn_ = nullptr;
    // The document of the policy in which the identity that can assume the role is specified.
    std::shared_ptr<string> assumeRolePolicyDocument_ = nullptr;
    // The time when the role was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The description of the role.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the role is a service-linked role.
    std::shared_ptr<bool> isServiceLinkedRole_ = nullptr;
    // The information of the most recent deletion task.
    std::shared_ptr<Models::GetRoleResponseBodyRoleLatestDeletionTask> latestDeletionTask_ = nullptr;
    // The maximum session duration of the role.
    std::shared_ptr<int64_t> maxSessionDuration_ = nullptr;
    // The ID of the role.
    std::shared_ptr<string> roleId_ = nullptr;
    // The name of the role.
    std::shared_ptr<string> roleName_ = nullptr;
    // The name of the role after authorization.
    std::shared_ptr<string> rolePrincipalName_ = nullptr;
    // The time when the role was updated.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
