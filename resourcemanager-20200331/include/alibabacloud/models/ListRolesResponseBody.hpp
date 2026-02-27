// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListRolesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRolesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRolesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRolesResponseBody() = default ;
    ListRolesResponseBody(const ListRolesResponseBody &) = default ;
    ListRolesResponseBody(ListRolesResponseBody &&) = default ;
    ListRolesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRolesResponseBody() = default ;
    ListRolesResponseBody& operator=(const ListRolesResponseBody &) = default ;
    ListRolesResponseBody& operator=(ListRolesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Roles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Roles& obj) { 
        DARABONBA_PTR_TO_JSON(Role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Roles& obj) { 
        DARABONBA_PTR_FROM_JSON(Role, role_);
      };
      Roles() = default ;
      Roles(const Roles &) = default ;
      Roles(Roles &&) = default ;
      Roles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Roles() = default ;
      Roles& operator=(const Roles &) = default ;
      Roles& operator=(Roles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Role : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Role& obj) { 
          DARABONBA_PTR_TO_JSON(Arn, arn_);
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
          shared_ptr<string> createDate_ {};
          shared_ptr<string> deletionTaskId_ {};
        };

        virtual bool empty() const override { return this->arn_ == nullptr
        && this->createDate_ == nullptr && this->description_ == nullptr && this->isServiceLinkedRole_ == nullptr && this->latestDeletionTask_ == nullptr && this->maxSessionDuration_ == nullptr
        && this->roleId_ == nullptr && this->roleName_ == nullptr && this->rolePrincipalName_ == nullptr && this->updateDate_ == nullptr; };
        // arn Field Functions 
        bool hasArn() const { return this->arn_ != nullptr;};
        void deleteArn() { this->arn_ = nullptr;};
        inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
        inline Role& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


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
        shared_ptr<string> arn_ {};
        shared_ptr<string> createDate_ {};
        shared_ptr<string> description_ {};
        shared_ptr<bool> isServiceLinkedRole_ {};
        shared_ptr<Role::LatestDeletionTask> latestDeletionTask_ {};
        shared_ptr<int64_t> maxSessionDuration_ {};
        shared_ptr<string> roleId_ {};
        shared_ptr<string> roleName_ {};
        shared_ptr<string> rolePrincipalName_ {};
        shared_ptr<string> updateDate_ {};
      };

      virtual bool empty() const override { return this->role_ == nullptr; };
      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline const vector<Roles::Role> & getRole() const { DARABONBA_PTR_GET_CONST(role_, vector<Roles::Role>) };
      inline vector<Roles::Role> getRole() { DARABONBA_PTR_GET(role_, vector<Roles::Role>) };
      inline Roles& setRole(const vector<Roles::Role> & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
      inline Roles& setRole(vector<Roles::Role> && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


    protected:
      shared_ptr<vector<Roles::Role>> role_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->roles_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRolesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRolesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRolesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const ListRolesResponseBody::Roles & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, ListRolesResponseBody::Roles) };
    inline ListRolesResponseBody::Roles getRoles() { DARABONBA_PTR_GET(roles_, ListRolesResponseBody::Roles) };
    inline ListRolesResponseBody& setRoles(const ListRolesResponseBody::Roles & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline ListRolesResponseBody& setRoles(ListRolesResponseBody::Roles && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRolesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<ListRolesResponseBody::Roles> roles_ {};
    // The total number of roles.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
