// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODY_HPP_
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
  class ListWorkspacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WorkspaceList, workspaceList_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WorkspaceList, workspaceList_);
    };
    ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody(ListWorkspacesResponseBody &&) = default ;
    ListWorkspacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesResponseBody() = default ;
    ListWorkspacesResponseBody& operator=(const ListWorkspacesResponseBody &) = default ;
    ListWorkspacesResponseBody& operator=(ListWorkspacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkspaceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkspaceList& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DefaultProjectId, defaultProjectId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(UserCount, userCount_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, WorkspaceList& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DefaultProjectId, defaultProjectId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      WorkspaceList() = default ;
      WorkspaceList(const WorkspaceList &) = default ;
      WorkspaceList(WorkspaceList &&) = default ;
      WorkspaceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkspaceList() = default ;
      WorkspaceList& operator=(const WorkspaceList &) = default ;
      WorkspaceList& operator=(WorkspaceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->createTime_ == nullptr && this->defaultProjectId_ == nullptr && this->status_ == nullptr && this->title_ == nullptr && this->userCount_ == nullptr
        && this->workspaceId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline WorkspaceList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline WorkspaceList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // defaultProjectId Field Functions 
      bool hasDefaultProjectId() const { return this->defaultProjectId_ != nullptr;};
      void deleteDefaultProjectId() { this->defaultProjectId_ = nullptr;};
      inline string getDefaultProjectId() const { DARABONBA_PTR_GET_DEFAULT(defaultProjectId_, "") };
      inline WorkspaceList& setDefaultProjectId(string defaultProjectId) { DARABONBA_PTR_SET_VALUE(defaultProjectId_, defaultProjectId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline WorkspaceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline WorkspaceList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // userCount Field Functions 
      bool hasUserCount() const { return this->userCount_ != nullptr;};
      void deleteUserCount() { this->userCount_ = nullptr;};
      inline string getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, "") };
      inline WorkspaceList& setUserCount(string userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline WorkspaceList& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The workspace code.
      shared_ptr<string> code_ {};
      // The creation time. The time is in UTC and follows the ISO 8601 standard, ending with Z.
      shared_ptr<string> createTime_ {};
      // The ID of the default project for the workspace.
      shared_ptr<string> defaultProjectId_ {};
      // The workspace status. Valid values: Online (enabled) and Offline (disabled).
      shared_ptr<string> status_ {};
      // The workspace name.
      shared_ptr<string> title_ {};
      // The current number of users in the workspace, returned as a string.
      shared_ptr<string> userCount_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->workspaceList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkspacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListWorkspacesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workspaceList Field Functions 
    bool hasWorkspaceList() const { return this->workspaceList_ != nullptr;};
    void deleteWorkspaceList() { this->workspaceList_ = nullptr;};
    inline const vector<ListWorkspacesResponseBody::WorkspaceList> & getWorkspaceList() const { DARABONBA_PTR_GET_CONST(workspaceList_, vector<ListWorkspacesResponseBody::WorkspaceList>) };
    inline vector<ListWorkspacesResponseBody::WorkspaceList> getWorkspaceList() { DARABONBA_PTR_GET(workspaceList_, vector<ListWorkspacesResponseBody::WorkspaceList>) };
    inline ListWorkspacesResponseBody& setWorkspaceList(const vector<ListWorkspacesResponseBody::WorkspaceList> & workspaceList) { DARABONBA_PTR_SET_VALUE(workspaceList_, workspaceList) };
    inline ListWorkspacesResponseBody& setWorkspaceList(vector<ListWorkspacesResponseBody::WorkspaceList> && workspaceList) { DARABONBA_PTR_SET_RVALUE(workspaceList_, workspaceList) };


  protected:
    // The request ID, which is used to locate and troubleshoot requests.
    shared_ptr<string> requestId_ {};
    // The total number of workspaces that meet the query conditions.
    shared_ptr<int32_t> totalCount_ {};
    // The list of workspaces on the current page.
    shared_ptr<vector<ListWorkspacesResponseBody::WorkspaceList>> workspaceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
