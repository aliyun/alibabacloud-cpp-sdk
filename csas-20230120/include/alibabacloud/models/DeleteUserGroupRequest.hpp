// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DeleteUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    DeleteUserGroupRequest() = default ;
    DeleteUserGroupRequest(const DeleteUserGroupRequest &) = default ;
    DeleteUserGroupRequest(DeleteUserGroupRequest &&) = default ;
    DeleteUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserGroupRequest() = default ;
    DeleteUserGroupRequest& operator=(const DeleteUserGroupRequest &) = default ;
    DeleteUserGroupRequest& operator=(DeleteUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userGroupId_ == nullptr; };
    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline DeleteUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
