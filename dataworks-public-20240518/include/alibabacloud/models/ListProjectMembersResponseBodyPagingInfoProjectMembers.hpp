// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYPAGINGINFOPROJECTMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYPAGINGINFOPROJECTMEMBERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProjectMembersResponseBodyPagingInfoProjectMembersRoles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListProjectMembersResponseBodyPagingInfoProjectMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectMembersResponseBodyPagingInfoProjectMembers& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectMembersResponseBodyPagingInfoProjectMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ListProjectMembersResponseBodyPagingInfoProjectMembers() = default ;
    ListProjectMembersResponseBodyPagingInfoProjectMembers(const ListProjectMembersResponseBodyPagingInfoProjectMembers &) = default ;
    ListProjectMembersResponseBodyPagingInfoProjectMembers(ListProjectMembersResponseBodyPagingInfoProjectMembers &&) = default ;
    ListProjectMembersResponseBodyPagingInfoProjectMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectMembersResponseBodyPagingInfoProjectMembers() = default ;
    ListProjectMembersResponseBodyPagingInfoProjectMembers& operator=(const ListProjectMembersResponseBodyPagingInfoProjectMembers &) = default ;
    ListProjectMembersResponseBodyPagingInfoProjectMembers& operator=(ListProjectMembersResponseBodyPagingInfoProjectMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr
        && return this->roles_ == nullptr && return this->status_ == nullptr && return this->userId_ == nullptr && return this->userName_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListProjectMembersResponseBodyPagingInfoProjectMembers& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<Models::ListProjectMembersResponseBodyPagingInfoProjectMembersRoles> & roles() const { DARABONBA_PTR_GET_CONST(roles_, vector<Models::ListProjectMembersResponseBodyPagingInfoProjectMembersRoles>) };
    inline vector<Models::ListProjectMembersResponseBodyPagingInfoProjectMembersRoles> roles() { DARABONBA_PTR_GET(roles_, vector<Models::ListProjectMembersResponseBodyPagingInfoProjectMembersRoles>) };
    inline ListProjectMembersResponseBodyPagingInfoProjectMembers& setRoles(const vector<Models::ListProjectMembersResponseBodyPagingInfoProjectMembersRoles> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline ListProjectMembersResponseBodyPagingInfoProjectMembers& setRoles(vector<Models::ListProjectMembersResponseBodyPagingInfoProjectMembersRoles> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListProjectMembersResponseBodyPagingInfoProjectMembers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListProjectMembersResponseBodyPagingInfoProjectMembers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListProjectMembersResponseBodyPagingInfoProjectMembers& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The ID of the DataWorks workspace.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The roles that are assigned to the member.
    std::shared_ptr<vector<Models::ListProjectMembersResponseBodyPagingInfoProjectMembersRoles>> roles_ = nullptr;
    // The status of the member. Valid values:
    // 
    // *   Normal
    // *   Forbidden
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the account used by the member.
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
