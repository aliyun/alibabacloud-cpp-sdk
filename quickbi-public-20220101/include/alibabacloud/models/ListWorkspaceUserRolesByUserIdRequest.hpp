// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACEUSERROLESBYUSERIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACEUSERROLESBYUSERIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListWorkspaceUserRolesByUserIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspaceUserRolesByUserIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspaceUserRolesByUserIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListWorkspaceUserRolesByUserIdRequest() = default ;
    ListWorkspaceUserRolesByUserIdRequest(const ListWorkspaceUserRolesByUserIdRequest &) = default ;
    ListWorkspaceUserRolesByUserIdRequest(ListWorkspaceUserRolesByUserIdRequest &&) = default ;
    ListWorkspaceUserRolesByUserIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspaceUserRolesByUserIdRequest() = default ;
    ListWorkspaceUserRolesByUserIdRequest& operator=(const ListWorkspaceUserRolesByUserIdRequest &) = default ;
    ListWorkspaceUserRolesByUserIdRequest& operator=(ListWorkspaceUserRolesByUserIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userId_ != nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListWorkspaceUserRolesByUserIdRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
