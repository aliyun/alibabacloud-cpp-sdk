// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASERVICEPROJECTMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASERVICEPROJECTMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddDataServiceProjectMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataServiceProjectMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataServiceProjectMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    AddDataServiceProjectMemberRequest() = default ;
    AddDataServiceProjectMemberRequest(const AddDataServiceProjectMemberRequest &) = default ;
    AddDataServiceProjectMemberRequest(AddDataServiceProjectMemberRequest &&) = default ;
    AddDataServiceProjectMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataServiceProjectMemberRequest() = default ;
    AddDataServiceProjectMemberRequest& operator=(const AddDataServiceProjectMemberRequest &) = default ;
    AddDataServiceProjectMemberRequest& operator=(AddDataServiceProjectMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AddCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ProjectMemberList, projectMemberList_);
      };
      friend void from_json(const Darabonba::Json& j, AddCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ProjectMemberList, projectMemberList_);
      };
      AddCommand() = default ;
      AddCommand(const AddCommand &) = default ;
      AddCommand(AddCommand &&) = default ;
      AddCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddCommand() = default ;
      AddCommand& operator=(const AddCommand &) = default ;
      AddCommand& operator=(AddCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProjectMemberList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProjectMemberList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, ProjectMemberList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        ProjectMemberList() = default ;
        ProjectMemberList(const ProjectMemberList &) = default ;
        ProjectMemberList(ProjectMemberList &&) = default ;
        ProjectMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProjectMemberList() = default ;
        ProjectMemberList& operator=(const ProjectMemberList &) = default ;
        ProjectMemberList& operator=(ProjectMemberList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->displayName_ == nullptr && this->role_ == nullptr && this->userId_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline ProjectMemberList& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline ProjectMemberList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline int32_t getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, 0) };
        inline ProjectMemberList& setRole(int32_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline ProjectMemberList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // This parameter is required.
        shared_ptr<string> accountName_ {};
        // This parameter is required.
        shared_ptr<string> displayName_ {};
        // This parameter is required.
        shared_ptr<int32_t> role_ {};
        // This parameter is required.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->projectMemberList_ == nullptr; };
      // projectMemberList Field Functions 
      bool hasProjectMemberList() const { return this->projectMemberList_ != nullptr;};
      void deleteProjectMemberList() { this->projectMemberList_ = nullptr;};
      inline const vector<AddCommand::ProjectMemberList> & getProjectMemberList() const { DARABONBA_PTR_GET_CONST(projectMemberList_, vector<AddCommand::ProjectMemberList>) };
      inline vector<AddCommand::ProjectMemberList> getProjectMemberList() { DARABONBA_PTR_GET(projectMemberList_, vector<AddCommand::ProjectMemberList>) };
      inline AddCommand& setProjectMemberList(const vector<AddCommand::ProjectMemberList> & projectMemberList) { DARABONBA_PTR_SET_VALUE(projectMemberList_, projectMemberList) };
      inline AddCommand& setProjectMemberList(vector<AddCommand::ProjectMemberList> && projectMemberList) { DARABONBA_PTR_SET_RVALUE(projectMemberList_, projectMemberList) };


    protected:
      // This parameter is required.
      shared_ptr<vector<AddCommand::ProjectMemberList>> projectMemberList_ {};
    };

    virtual bool empty() const override { return this->addCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->projectId_ == nullptr; };
    // addCommand Field Functions 
    bool hasAddCommand() const { return this->addCommand_ != nullptr;};
    void deleteAddCommand() { this->addCommand_ = nullptr;};
    inline const AddDataServiceProjectMemberRequest::AddCommand & getAddCommand() const { DARABONBA_PTR_GET_CONST(addCommand_, AddDataServiceProjectMemberRequest::AddCommand) };
    inline AddDataServiceProjectMemberRequest::AddCommand getAddCommand() { DARABONBA_PTR_GET(addCommand_, AddDataServiceProjectMemberRequest::AddCommand) };
    inline AddDataServiceProjectMemberRequest& setAddCommand(const AddDataServiceProjectMemberRequest::AddCommand & addCommand) { DARABONBA_PTR_SET_VALUE(addCommand_, addCommand) };
    inline AddDataServiceProjectMemberRequest& setAddCommand(AddDataServiceProjectMemberRequest::AddCommand && addCommand) { DARABONBA_PTR_SET_RVALUE(addCommand_, addCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AddDataServiceProjectMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline AddDataServiceProjectMemberRequest& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    shared_ptr<AddDataServiceProjectMemberRequest::AddCommand> addCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<int32_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
