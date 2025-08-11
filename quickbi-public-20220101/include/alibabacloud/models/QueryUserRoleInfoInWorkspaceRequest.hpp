// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERROLEINFOINWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERROLEINFOINWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryUserRoleInfoInWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserRoleInfoInWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserRoleInfoInWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryUserRoleInfoInWorkspaceRequest() = default ;
    QueryUserRoleInfoInWorkspaceRequest(const QueryUserRoleInfoInWorkspaceRequest &) = default ;
    QueryUserRoleInfoInWorkspaceRequest(QueryUserRoleInfoInWorkspaceRequest &&) = default ;
    QueryUserRoleInfoInWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserRoleInfoInWorkspaceRequest() = default ;
    QueryUserRoleInfoInWorkspaceRequest& operator=(const QueryUserRoleInfoInWorkspaceRequest &) = default ;
    QueryUserRoleInfoInWorkspaceRequest& operator=(QueryUserRoleInfoInWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userId_ != nullptr
        && this->workspaceId_ != nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryUserRoleInfoInWorkspaceRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryUserRoleInfoInWorkspaceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Quick BI user ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // Workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
