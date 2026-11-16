// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProjectResponseBody() = default ;
    GetProjectResponseBody(const GetProjectResponseBody &) = default ;
    GetProjectResponseBody(GetProjectResponseBody &&) = default ;
    GetProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBody() = default ;
    GetProjectResponseBody& operator=(const GetProjectResponseBody &) = default ;
    GetProjectResponseBody& operator=(GetProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Project : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Project& obj) { 
        DARABONBA_PTR_TO_JSON(Auth, auth_);
        DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Project& obj) { 
        DARABONBA_PTR_FROM_JSON(Auth, auth_);
        DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      Project() = default ;
      Project(const Project &) = default ;
      Project(Project &&) = default ;
      Project(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Project() = default ;
      Project& operator=(const Project &) = default ;
      Project& operator=(Project &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auth_ == nullptr
        && this->coverUrl_ == nullptr && this->createTime_ == nullptr && this->createUserName_ == nullptr && this->description_ == nullptr && this->projectId_ == nullptr
        && this->title_ == nullptr && this->workspaceId_ == nullptr; };
      // auth Field Functions 
      bool hasAuth() const { return this->auth_ != nullptr;};
      void deleteAuth() { this->auth_ = nullptr;};
      inline string getAuth() const { DARABONBA_PTR_GET_DEFAULT(auth_, "") };
      inline Project& setAuth(string auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };


      // coverUrl Field Functions 
      bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
      void deleteCoverUrl() { this->coverUrl_ = nullptr;};
      inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
      inline Project& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Project& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUserName Field Functions 
      bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
      void deleteCreateUserName() { this->createUserName_ = nullptr;};
      inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
      inline Project& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Project& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline Project& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Project& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Project& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The permissions of the current caller in the project. For example, Manage indicates management permissions.
      shared_ptr<string> auth_ {};
      // The URL of the cover image.
      shared_ptr<string> coverUrl_ {};
      // The creation time, in ISO 8601 UTC format ending with Z.
      shared_ptr<string> createTime_ {};
      // The username of the user who created the project.
      shared_ptr<string> createUserName_ {};
      // The project description.
      shared_ptr<string> description_ {};
      // The project ID.
      shared_ptr<string> projectId_ {};
      // The project name.
      shared_ptr<string> title_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->project_ == nullptr
        && this->requestId_ == nullptr; };
    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const GetProjectResponseBody::Project & getProject() const { DARABONBA_PTR_GET_CONST(project_, GetProjectResponseBody::Project) };
    inline GetProjectResponseBody::Project getProject() { DARABONBA_PTR_GET(project_, GetProjectResponseBody::Project) };
    inline GetProjectResponseBody& setProject(const GetProjectResponseBody::Project & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline GetProjectResponseBody& setProject(GetProjectResponseBody::Project && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The project details.
    shared_ptr<GetProjectResponseBody::Project> project_ {};
    // The request ID, used to trace and troubleshoot the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
