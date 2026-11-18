// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class ListProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProjectList, projectList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProjectList, projectList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListProjectsResponseBody() = default ;
    ListProjectsResponseBody(const ListProjectsResponseBody &) = default ;
    ListProjectsResponseBody(ListProjectsResponseBody &&) = default ;
    ListProjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBody() = default ;
    ListProjectsResponseBody& operator=(const ListProjectsResponseBody &) = default ;
    ListProjectsResponseBody& operator=(ListProjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProjectList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProjectList& obj) { 
        DARABONBA_PTR_TO_JSON(Auth, auth_);
        DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, ProjectList& obj) { 
        DARABONBA_PTR_FROM_JSON(Auth, auth_);
        DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      ProjectList() = default ;
      ProjectList(const ProjectList &) = default ;
      ProjectList(ProjectList &&) = default ;
      ProjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProjectList() = default ;
      ProjectList& operator=(const ProjectList &) = default ;
      ProjectList& operator=(ProjectList &&) = default ;
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
      inline ProjectList& setAuth(string auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };


      // coverUrl Field Functions 
      bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
      void deleteCoverUrl() { this->coverUrl_ = nullptr;};
      inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
      inline ProjectList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ProjectList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUserName Field Functions 
      bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
      void deleteCreateUserName() { this->createUserName_ = nullptr;};
      inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
      inline ProjectList& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProjectList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline ProjectList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ProjectList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline ProjectList& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The permissions of the current caller in the project. For example, Manage indicates management permissions.
      shared_ptr<string> auth_ {};
      // The URL of the cover image.
      shared_ptr<string> coverUrl_ {};
      // The creation time. The time is in UTC and follows the ISO 8601 standard, ending with Z.
      shared_ptr<string> createTime_ {};
      // The username of the user who created the project.
      shared_ptr<string> createUserName_ {};
      // The description of the project.
      shared_ptr<string> description_ {};
      // The ID of the project.
      shared_ptr<string> projectId_ {};
      // The name of the project.
      shared_ptr<string> title_ {};
      // The ID of the workspace.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->projectList_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProjectsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProjectsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectList Field Functions 
    bool hasProjectList() const { return this->projectList_ != nullptr;};
    void deleteProjectList() { this->projectList_ = nullptr;};
    inline const vector<ListProjectsResponseBody::ProjectList> & getProjectList() const { DARABONBA_PTR_GET_CONST(projectList_, vector<ListProjectsResponseBody::ProjectList>) };
    inline vector<ListProjectsResponseBody::ProjectList> getProjectList() { DARABONBA_PTR_GET(projectList_, vector<ListProjectsResponseBody::ProjectList>) };
    inline ListProjectsResponseBody& setProjectList(const vector<ListProjectsResponseBody::ProjectList> & projectList) { DARABONBA_PTR_SET_VALUE(projectList_, projectList) };
    inline ListProjectsResponseBody& setProjectList(vector<ListProjectsResponseBody::ProjectList> && projectList) { DARABONBA_PTR_SET_RVALUE(projectList_, projectList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A response field retained for backward compatibility. This field is not used for pagination. Do not rely on this field.
    shared_ptr<int32_t> maxResults_ {};
    // A response field retained for backward compatibility. This field is not used for pagination. Do not rely on this field.
    shared_ptr<string> nextToken_ {};
    // The list of projects on the current page.
    shared_ptr<vector<ListProjectsResponseBody::ProjectList>> projectList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
