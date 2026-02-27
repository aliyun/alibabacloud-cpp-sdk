// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    GetRoleResponseBody() = default ;
    GetRoleResponseBody(const GetRoleResponseBody &) = default ;
    GetRoleResponseBody(GetRoleResponseBody &&) = default ;
    GetRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoleResponseBody() = default ;
    GetRoleResponseBody& operator=(const GetRoleResponseBody &) = default ;
    GetRoleResponseBody& operator=(GetRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Role : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Role& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Role& obj) { 
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
      Role() = default ;
      Role(const Role &) = default ;
      Role(Role &&) = default ;
      Role(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Role() = default ;
      Role& operator=(const Role &) = default ;
      Role& operator=(Role &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LatestDeletionTask : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LatestDeletionTask& obj) { 
          DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
          DARABONBA_PTR_TO_JSON(DeletionTaskId, deletionTaskId_);
        };
        friend void from_json(const Darabonba::Json& j, LatestDeletionTask& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
          DARABONBA_PTR_FROM_JSON(DeletionTaskId, deletionTaskId_);
        };
        LatestDeletionTask() = default ;
        LatestDeletionTask(const LatestDeletionTask &) = default ;
        LatestDeletionTask(LatestDeletionTask &&) = default ;
        LatestDeletionTask(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LatestDeletionTask() = default ;
        LatestDeletionTask& operator=(const LatestDeletionTask &) = default ;
        LatestDeletionTask& operator=(LatestDeletionTask &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createDate_ == nullptr
        && this->deletionTaskId_ == nullptr; };
        // createDate Field Functions 
        bool hasCreateDate() const { return this->createDate_ != nullptr;};
        void deleteCreateDate() { this->createDate_ = nullptr;};
        inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
        inline LatestDeletionTask& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


        // deletionTaskId Field Functions 
        bool hasDeletionTaskId() const { return this->deletionTaskId_ != nullptr;};
        void deleteDeletionTaskId() { this->deletionTaskId_ = nullptr;};
        inline string getDeletionTaskId() const { DARABONBA_PTR_GET_DEFAULT(deletionTaskId_, "") };
        inline LatestDeletionTask& setDeletionTaskId(string deletionTaskId) { DARABONBA_PTR_SET_VALUE(deletionTaskId_, deletionTaskId) };


      protected:
        // The time when the deletion task was created.
        shared_ptr<string> createDate_ {};
        // The ID of the deletion task.
        shared_ptr<string> deletionTaskId_ {};
      };

      virtual bool empty() const override { return this->arn_ == nullptr
        && this->assumeRolePolicyDocument_ == nullptr && this->createDate_ == nullptr && this->description_ == nullptr && this->isServiceLinkedRole_ == nullptr && this->latestDeletionTask_ == nullptr
        && this->maxSessionDuration_ == nullptr && this->roleId_ == nullptr && this->roleName_ == nullptr && this->rolePrincipalName_ == nullptr && this->updateDate_ == nullptr; };
      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
      inline Role& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


      // assumeRolePolicyDocument Field Functions 
      bool hasAssumeRolePolicyDocument() const { return this->assumeRolePolicyDocument_ != nullptr;};
      void deleteAssumeRolePolicyDocument() { this->assumeRolePolicyDocument_ = nullptr;};
      inline string getAssumeRolePolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(assumeRolePolicyDocument_, "") };
      inline Role& setAssumeRolePolicyDocument(string assumeRolePolicyDocument) { DARABONBA_PTR_SET_VALUE(assumeRolePolicyDocument_, assumeRolePolicyDocument) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline Role& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Role& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // isServiceLinkedRole Field Functions 
      bool hasIsServiceLinkedRole() const { return this->isServiceLinkedRole_ != nullptr;};
      void deleteIsServiceLinkedRole() { this->isServiceLinkedRole_ = nullptr;};
      inline bool getIsServiceLinkedRole() const { DARABONBA_PTR_GET_DEFAULT(isServiceLinkedRole_, false) };
      inline Role& setIsServiceLinkedRole(bool isServiceLinkedRole) { DARABONBA_PTR_SET_VALUE(isServiceLinkedRole_, isServiceLinkedRole) };


      // latestDeletionTask Field Functions 
      bool hasLatestDeletionTask() const { return this->latestDeletionTask_ != nullptr;};
      void deleteLatestDeletionTask() { this->latestDeletionTask_ = nullptr;};
      inline const Role::LatestDeletionTask & getLatestDeletionTask() const { DARABONBA_PTR_GET_CONST(latestDeletionTask_, Role::LatestDeletionTask) };
      inline Role::LatestDeletionTask getLatestDeletionTask() { DARABONBA_PTR_GET(latestDeletionTask_, Role::LatestDeletionTask) };
      inline Role& setLatestDeletionTask(const Role::LatestDeletionTask & latestDeletionTask) { DARABONBA_PTR_SET_VALUE(latestDeletionTask_, latestDeletionTask) };
      inline Role& setLatestDeletionTask(Role::LatestDeletionTask && latestDeletionTask) { DARABONBA_PTR_SET_RVALUE(latestDeletionTask_, latestDeletionTask) };


      // maxSessionDuration Field Functions 
      bool hasMaxSessionDuration() const { return this->maxSessionDuration_ != nullptr;};
      void deleteMaxSessionDuration() { this->maxSessionDuration_ = nullptr;};
      inline int64_t getMaxSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(maxSessionDuration_, 0L) };
      inline Role& setMaxSessionDuration(int64_t maxSessionDuration) { DARABONBA_PTR_SET_VALUE(maxSessionDuration_, maxSessionDuration) };


      // roleId Field Functions 
      bool hasRoleId() const { return this->roleId_ != nullptr;};
      void deleteRoleId() { this->roleId_ = nullptr;};
      inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
      inline Role& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline Role& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // rolePrincipalName Field Functions 
      bool hasRolePrincipalName() const { return this->rolePrincipalName_ != nullptr;};
      void deleteRolePrincipalName() { this->rolePrincipalName_ = nullptr;};
      inline string getRolePrincipalName() const { DARABONBA_PTR_GET_DEFAULT(rolePrincipalName_, "") };
      inline Role& setRolePrincipalName(string rolePrincipalName) { DARABONBA_PTR_SET_VALUE(rolePrincipalName_, rolePrincipalName) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline Role& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    protected:
      // The Alibaba Cloud Resource Name (ARN) of the role.
      shared_ptr<string> arn_ {};
      // The document of the policy in which the identity that can assume the role is specified.
      shared_ptr<string> assumeRolePolicyDocument_ {};
      // The time when the role was created.
      shared_ptr<string> createDate_ {};
      // The description of the role.
      shared_ptr<string> description_ {};
      // Indicates whether the role is a service-linked role.
      shared_ptr<bool> isServiceLinkedRole_ {};
      // The information of the most recent deletion task.
      shared_ptr<Role::LatestDeletionTask> latestDeletionTask_ {};
      // The maximum session duration of the role.
      shared_ptr<int64_t> maxSessionDuration_ {};
      // The ID of the role.
      shared_ptr<string> roleId_ {};
      // The name of the role.
      shared_ptr<string> roleName_ {};
      // The name of the role after authorization.
      shared_ptr<string> rolePrincipalName_ {};
      // The time when the role was updated.
      shared_ptr<string> updateDate_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->role_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline const GetRoleResponseBody::Role & getRole() const { DARABONBA_PTR_GET_CONST(role_, GetRoleResponseBody::Role) };
    inline GetRoleResponseBody::Role getRole() { DARABONBA_PTR_GET(role_, GetRoleResponseBody::Role) };
    inline GetRoleResponseBody& setRole(const GetRoleResponseBody::Role & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
    inline GetRoleResponseBody& setRole(GetRoleResponseBody::Role && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the role.
    shared_ptr<GetRoleResponseBody::Role> role_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
