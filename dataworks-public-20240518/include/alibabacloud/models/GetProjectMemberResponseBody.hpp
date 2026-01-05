// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTMEMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTMEMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetProjectMemberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectMemberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectMember, projectMember_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectMemberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectMember, projectMember_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProjectMemberResponseBody() = default ;
    GetProjectMemberResponseBody(const GetProjectMemberResponseBody &) = default ;
    GetProjectMemberResponseBody(GetProjectMemberResponseBody &&) = default ;
    GetProjectMemberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectMemberResponseBody() = default ;
    GetProjectMemberResponseBody& operator=(const GetProjectMemberResponseBody &) = default ;
    GetProjectMemberResponseBody& operator=(GetProjectMemberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProjectMember : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProjectMember& obj) { 
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Roles, roles_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, ProjectMember& obj) { 
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Roles, roles_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      ProjectMember() = default ;
      ProjectMember(const ProjectMember &) = default ;
      ProjectMember(ProjectMember &&) = default ;
      ProjectMember(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProjectMember() = default ;
      ProjectMember& operator=(const ProjectMember &) = default ;
      ProjectMember& operator=(ProjectMember &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Roles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Roles& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Roles& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Roles& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Roles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Roles& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The code of the role. Valid values:
        // 
        // *   role_project_admin: Workspace Administrator
        // *   role_project_dev: Develop
        // *   role_project_dg_admin: Data Governance Administrator
        // *   role_project_guest: Visitor
        // *   role_project_security: Security Administrator
        // *   role_project_deploy: Deploy
        // *   role_project_owner: Workspace Owner
        // *   role_project_data_analyst: Data Analyst
        // *   role_project_pe: O\\&M
        // *   role_project_erd: Model Designer
        shared_ptr<string> code_ {};
        // The name of the role.
        shared_ptr<string> name_ {};
        // The type of the role. Valid values:
        // 
        // *   UserCustom: custom role
        // *   System: built-in role
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->projectId_ == nullptr
        && this->roles_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline ProjectMember& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // roles Field Functions 
      bool hasRoles() const { return this->roles_ != nullptr;};
      void deleteRoles() { this->roles_ = nullptr;};
      inline const vector<ProjectMember::Roles> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<ProjectMember::Roles>) };
      inline vector<ProjectMember::Roles> getRoles() { DARABONBA_PTR_GET(roles_, vector<ProjectMember::Roles>) };
      inline ProjectMember& setRoles(const vector<ProjectMember::Roles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
      inline ProjectMember& setRoles(vector<ProjectMember::Roles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ProjectMember& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline ProjectMember& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline ProjectMember& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The DataWorks workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // The roles that are assigned to the member in the workspace.
      shared_ptr<vector<ProjectMember::Roles>> roles_ {};
      // The status of the member.
      // 
      // *   Normal
      // *   Forbidden
      shared_ptr<string> status_ {};
      // The ID of the account used by the member in the workspace.
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->projectMember_ == nullptr
        && this->requestId_ == nullptr; };
    // projectMember Field Functions 
    bool hasProjectMember() const { return this->projectMember_ != nullptr;};
    void deleteProjectMember() { this->projectMember_ = nullptr;};
    inline const GetProjectMemberResponseBody::ProjectMember & getProjectMember() const { DARABONBA_PTR_GET_CONST(projectMember_, GetProjectMemberResponseBody::ProjectMember) };
    inline GetProjectMemberResponseBody::ProjectMember getProjectMember() { DARABONBA_PTR_GET(projectMember_, GetProjectMemberResponseBody::ProjectMember) };
    inline GetProjectMemberResponseBody& setProjectMember(const GetProjectMemberResponseBody::ProjectMember & projectMember) { DARABONBA_PTR_SET_VALUE(projectMember_, projectMember) };
    inline GetProjectMemberResponseBody& setProjectMember(GetProjectMemberResponseBody::ProjectMember && projectMember) { DARABONBA_PTR_SET_RVALUE(projectMember_, projectMember) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectMemberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the member in the workspace.
    shared_ptr<GetProjectMemberResponseBody::ProjectMember> projectMember_ {};
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
