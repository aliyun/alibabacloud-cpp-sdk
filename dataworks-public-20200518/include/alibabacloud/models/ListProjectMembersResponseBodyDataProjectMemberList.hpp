// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYDATAPROJECTMEMBERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYDATAPROJECTMEMBERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListProjectMembersResponseBodyDataProjectMemberList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectMembersResponseBodyDataProjectMemberList& obj) { 
      DARABONBA_PTR_TO_JSON(Nick, nick_);
      DARABONBA_PTR_TO_JSON(ProjectMemberId, projectMemberId_);
      DARABONBA_PTR_TO_JSON(ProjectMemberName, projectMemberName_);
      DARABONBA_PTR_TO_JSON(ProjectMemberType, projectMemberType_);
      DARABONBA_PTR_TO_JSON(ProjectRoleList, projectRoleList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectMembersResponseBodyDataProjectMemberList& obj) { 
      DARABONBA_PTR_FROM_JSON(Nick, nick_);
      DARABONBA_PTR_FROM_JSON(ProjectMemberId, projectMemberId_);
      DARABONBA_PTR_FROM_JSON(ProjectMemberName, projectMemberName_);
      DARABONBA_PTR_FROM_JSON(ProjectMemberType, projectMemberType_);
      DARABONBA_PTR_FROM_JSON(ProjectRoleList, projectRoleList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListProjectMembersResponseBodyDataProjectMemberList() = default ;
    ListProjectMembersResponseBodyDataProjectMemberList(const ListProjectMembersResponseBodyDataProjectMemberList &) = default ;
    ListProjectMembersResponseBodyDataProjectMemberList(ListProjectMembersResponseBodyDataProjectMemberList &&) = default ;
    ListProjectMembersResponseBodyDataProjectMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectMembersResponseBodyDataProjectMemberList() = default ;
    ListProjectMembersResponseBodyDataProjectMemberList& operator=(const ListProjectMembersResponseBodyDataProjectMemberList &) = default ;
    ListProjectMembersResponseBodyDataProjectMemberList& operator=(ListProjectMembersResponseBodyDataProjectMemberList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nick_ != nullptr
        && this->projectMemberId_ != nullptr && this->projectMemberName_ != nullptr && this->projectMemberType_ != nullptr && this->projectRoleList_ != nullptr && this->status_ != nullptr; };
    // nick Field Functions 
    bool hasNick() const { return this->nick_ != nullptr;};
    void deleteNick() { this->nick_ = nullptr;};
    inline string nick() const { DARABONBA_PTR_GET_DEFAULT(nick_, "") };
    inline ListProjectMembersResponseBodyDataProjectMemberList& setNick(string nick) { DARABONBA_PTR_SET_VALUE(nick_, nick) };


    // projectMemberId Field Functions 
    bool hasProjectMemberId() const { return this->projectMemberId_ != nullptr;};
    void deleteProjectMemberId() { this->projectMemberId_ = nullptr;};
    inline string projectMemberId() const { DARABONBA_PTR_GET_DEFAULT(projectMemberId_, "") };
    inline ListProjectMembersResponseBodyDataProjectMemberList& setProjectMemberId(string projectMemberId) { DARABONBA_PTR_SET_VALUE(projectMemberId_, projectMemberId) };


    // projectMemberName Field Functions 
    bool hasProjectMemberName() const { return this->projectMemberName_ != nullptr;};
    void deleteProjectMemberName() { this->projectMemberName_ = nullptr;};
    inline string projectMemberName() const { DARABONBA_PTR_GET_DEFAULT(projectMemberName_, "") };
    inline ListProjectMembersResponseBodyDataProjectMemberList& setProjectMemberName(string projectMemberName) { DARABONBA_PTR_SET_VALUE(projectMemberName_, projectMemberName) };


    // projectMemberType Field Functions 
    bool hasProjectMemberType() const { return this->projectMemberType_ != nullptr;};
    void deleteProjectMemberType() { this->projectMemberType_ = nullptr;};
    inline string projectMemberType() const { DARABONBA_PTR_GET_DEFAULT(projectMemberType_, "") };
    inline ListProjectMembersResponseBodyDataProjectMemberList& setProjectMemberType(string projectMemberType) { DARABONBA_PTR_SET_VALUE(projectMemberType_, projectMemberType) };


    // projectRoleList Field Functions 
    bool hasProjectRoleList() const { return this->projectRoleList_ != nullptr;};
    void deleteProjectRoleList() { this->projectRoleList_ = nullptr;};
    inline const vector<Models::ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList> & projectRoleList() const { DARABONBA_PTR_GET_CONST(projectRoleList_, vector<Models::ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList>) };
    inline vector<Models::ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList> projectRoleList() { DARABONBA_PTR_GET(projectRoleList_, vector<Models::ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList>) };
    inline ListProjectMembersResponseBodyDataProjectMemberList& setProjectRoleList(const vector<Models::ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList> & projectRoleList) { DARABONBA_PTR_SET_VALUE(projectRoleList_, projectRoleList) };
    inline ListProjectMembersResponseBodyDataProjectMemberList& setProjectRoleList(vector<Models::ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList> && projectRoleList) { DARABONBA_PTR_SET_RVALUE(projectRoleList_, projectRoleList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListProjectMembersResponseBodyDataProjectMemberList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The nickname of the member.
    std::shared_ptr<string> nick_ = nullptr;
    // The member ID.
    std::shared_ptr<string> projectMemberId_ = nullptr;
    // The name of the member.
    std::shared_ptr<string> projectMemberName_ = nullptr;
    // The type of the member. Valid values:
    // 
    // *   1: USER_ALIYUN, which indicates that the member is an Alibaba Cloud account.
    // *   5: USER_UBACCOUNT, which indicates that the member is a RAM user.
    // *   6: USER_STS_ROLE, which indicates that the member is a RAM role.
    std::shared_ptr<string> projectMemberType_ = nullptr;
    // The roles that are assigned to the member.
    std::shared_ptr<vector<Models::ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList>> projectRoleList_ = nullptr;
    // The status of the member. Valid values:
    // 
    // *   0: NORMAL, which indicates that the member is in a normal state.
    // *   1: FORBIDDEN, which indicates that the member is disabled.
    // *   2: DELETED, which indicates that the member is deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
