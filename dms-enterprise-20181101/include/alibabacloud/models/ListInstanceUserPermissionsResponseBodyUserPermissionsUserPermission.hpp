// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEUSERPERMISSIONSRESPONSEBODYUSERPERMISSIONSUSERPERMISSION_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEUSERPERMISSIONSRESPONSEBODYUSERPERMISSIONSUSERPERMISSION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PermDetails, permDetails_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserNickName, userNickName_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PermDetails, permDetails_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserNickName, userNickName_);
    };
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission() = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission(const ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission &) = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission(ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission &&) = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission() = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission& operator=(const ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission &) = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission& operator=(ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->permDetails_ == nullptr && return this->userId_ == nullptr && return this->userNickName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // permDetails Field Functions 
    bool hasPermDetails() const { return this->permDetails_ != nullptr;};
    void deletePermDetails() { this->permDetails_ = nullptr;};
    inline const Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails & permDetails() const { DARABONBA_PTR_GET_CONST(permDetails_, Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails) };
    inline Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails permDetails() { DARABONBA_PTR_GET(permDetails_, Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails) };
    inline ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission& setPermDetails(const Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails & permDetails) { DARABONBA_PTR_SET_VALUE(permDetails_, permDetails) };
    inline ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission& setPermDetails(Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails && permDetails) { DARABONBA_PTR_SET_RVALUE(permDetails_, permDetails) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNickName Field Functions 
    bool hasUserNickName() const { return this->userNickName_ != nullptr;};
    void deleteUserNickName() { this->userNickName_ = nullptr;};
    inline string userNickName() const { DARABONBA_PTR_GET_DEFAULT(userNickName_, "") };
    inline ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission& setUserNickName(string userNickName) { DARABONBA_PTR_SET_VALUE(userNickName_, userNickName) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The details of permissions.
    std::shared_ptr<Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails> permDetails_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
    // The nickname of the user.
    std::shared_ptr<string> userNickName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
