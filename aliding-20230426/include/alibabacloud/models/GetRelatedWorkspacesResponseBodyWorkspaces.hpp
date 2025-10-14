// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRELATEDWORKSPACESRESPONSEBODYWORKSPACES_HPP_
#define ALIBABACLOUD_MODELS_GETRELATEDWORKSPACESRESPONSEBODYWORKSPACES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRelatedWorkspacesResponseBodyWorkspacesRecentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetRelatedWorkspacesResponseBodyWorkspaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRelatedWorkspacesResponseBodyWorkspaces& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Deleted, deleted_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RecentList, recentList_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRelatedWorkspacesResponseBodyWorkspaces& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RecentList, recentList_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetRelatedWorkspacesResponseBodyWorkspaces() = default ;
    GetRelatedWorkspacesResponseBodyWorkspaces(const GetRelatedWorkspacesResponseBodyWorkspaces &) = default ;
    GetRelatedWorkspacesResponseBodyWorkspaces(GetRelatedWorkspacesResponseBodyWorkspaces &&) = default ;
    GetRelatedWorkspacesResponseBodyWorkspaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRelatedWorkspacesResponseBodyWorkspaces() = default ;
    GetRelatedWorkspacesResponseBodyWorkspaces& operator=(const GetRelatedWorkspacesResponseBodyWorkspaces &) = default ;
    GetRelatedWorkspacesResponseBodyWorkspaces& operator=(GetRelatedWorkspacesResponseBodyWorkspaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->deleted_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr && return this->recentList_ == nullptr && return this->role_ == nullptr
        && return this->url_ == nullptr && return this->workspaceId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetRelatedWorkspacesResponseBodyWorkspaces& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline bool deleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
    inline GetRelatedWorkspacesResponseBodyWorkspaces& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRelatedWorkspacesResponseBodyWorkspaces& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetRelatedWorkspacesResponseBodyWorkspaces& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // recentList Field Functions 
    bool hasRecentList() const { return this->recentList_ != nullptr;};
    void deleteRecentList() { this->recentList_ = nullptr;};
    inline const vector<Models::GetRelatedWorkspacesResponseBodyWorkspacesRecentList> & recentList() const { DARABONBA_PTR_GET_CONST(recentList_, vector<Models::GetRelatedWorkspacesResponseBodyWorkspacesRecentList>) };
    inline vector<Models::GetRelatedWorkspacesResponseBodyWorkspacesRecentList> recentList() { DARABONBA_PTR_GET(recentList_, vector<Models::GetRelatedWorkspacesResponseBodyWorkspacesRecentList>) };
    inline GetRelatedWorkspacesResponseBodyWorkspaces& setRecentList(const vector<Models::GetRelatedWorkspacesResponseBodyWorkspacesRecentList> & recentList) { DARABONBA_PTR_SET_VALUE(recentList_, recentList) };
    inline GetRelatedWorkspacesResponseBodyWorkspaces& setRecentList(vector<Models::GetRelatedWorkspacesResponseBodyWorkspacesRecentList> && recentList) { DARABONBA_PTR_SET_RVALUE(recentList_, recentList) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetRelatedWorkspacesResponseBodyWorkspaces& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetRelatedWorkspacesResponseBodyWorkspaces& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetRelatedWorkspacesResponseBodyWorkspaces& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<bool> deleted_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<vector<Models::GetRelatedWorkspacesResponseBodyWorkspacesRecentList>> recentList_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
