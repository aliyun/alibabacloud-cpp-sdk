// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERFROMDESKTOPOVERSOLDUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERFROMDESKTOPOVERSOLDUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class RemoveUserFromDesktopOversoldUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUserFromDesktopOversoldUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_TO_JSON(UserDesktopId, userDesktopId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUserFromDesktopOversoldUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_FROM_JSON(UserDesktopId, userDesktopId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    RemoveUserFromDesktopOversoldUserGroupRequest() = default ;
    RemoveUserFromDesktopOversoldUserGroupRequest(const RemoveUserFromDesktopOversoldUserGroupRequest &) = default ;
    RemoveUserFromDesktopOversoldUserGroupRequest(RemoveUserFromDesktopOversoldUserGroupRequest &&) = default ;
    RemoveUserFromDesktopOversoldUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUserFromDesktopOversoldUserGroupRequest() = default ;
    RemoveUserFromDesktopOversoldUserGroupRequest& operator=(const RemoveUserFromDesktopOversoldUserGroupRequest &) = default ;
    RemoveUserFromDesktopOversoldUserGroupRequest& operator=(RemoveUserFromDesktopOversoldUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endUserId_ == nullptr
        && this->oversoldGroupId_ == nullptr && this->userDesktopId_ == nullptr && this->userGroupId_ == nullptr; };
    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline RemoveUserFromDesktopOversoldUserGroupRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // oversoldGroupId Field Functions 
    bool hasOversoldGroupId() const { return this->oversoldGroupId_ != nullptr;};
    void deleteOversoldGroupId() { this->oversoldGroupId_ = nullptr;};
    inline string getOversoldGroupId() const { DARABONBA_PTR_GET_DEFAULT(oversoldGroupId_, "") };
    inline RemoveUserFromDesktopOversoldUserGroupRequest& setOversoldGroupId(string oversoldGroupId) { DARABONBA_PTR_SET_VALUE(oversoldGroupId_, oversoldGroupId) };


    // userDesktopId Field Functions 
    bool hasUserDesktopId() const { return this->userDesktopId_ != nullptr;};
    void deleteUserDesktopId() { this->userDesktopId_ = nullptr;};
    inline string getUserDesktopId() const { DARABONBA_PTR_GET_DEFAULT(userDesktopId_, "") };
    inline RemoveUserFromDesktopOversoldUserGroupRequest& setUserDesktopId(string userDesktopId) { DARABONBA_PTR_SET_VALUE(userDesktopId_, userDesktopId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline RemoveUserFromDesktopOversoldUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    shared_ptr<string> endUserId_ {};
    shared_ptr<string> oversoldGroupId_ {};
    shared_ptr<string> userDesktopId_ {};
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
