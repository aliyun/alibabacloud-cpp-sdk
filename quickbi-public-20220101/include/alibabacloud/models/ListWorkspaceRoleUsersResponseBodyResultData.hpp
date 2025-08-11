// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACEROLEUSERSRESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACEROLEUSERSRESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListWorkspaceRoleUsersResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspaceRoleUsersResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspaceRoleUsersResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    ListWorkspaceRoleUsersResponseBodyResultData() = default ;
    ListWorkspaceRoleUsersResponseBodyResultData(const ListWorkspaceRoleUsersResponseBodyResultData &) = default ;
    ListWorkspaceRoleUsersResponseBodyResultData(ListWorkspaceRoleUsersResponseBodyResultData &&) = default ;
    ListWorkspaceRoleUsersResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspaceRoleUsersResponseBodyResultData() = default ;
    ListWorkspaceRoleUsersResponseBodyResultData& operator=(const ListWorkspaceRoleUsersResponseBodyResultData &) = default ;
    ListWorkspaceRoleUsersResponseBodyResultData& operator=(ListWorkspaceRoleUsersResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nickName_ != nullptr
        && this->userId_ != nullptr && this->workspaceId_ != nullptr && this->workspaceName_ != nullptr; };
    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline ListWorkspaceRoleUsersResponseBodyResultData& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListWorkspaceRoleUsersResponseBodyResultData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListWorkspaceRoleUsersResponseBodyResultData& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListWorkspaceRoleUsersResponseBodyResultData& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // Nickname of the organization member.
    std::shared_ptr<string> nickName_ = nullptr;
    // UserID of the organization member in Quick BI.
    std::shared_ptr<string> userId_ = nullptr;
    // Workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // Workspace name.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
