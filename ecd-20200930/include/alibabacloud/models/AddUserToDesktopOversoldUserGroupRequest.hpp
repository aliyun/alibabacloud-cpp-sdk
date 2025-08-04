// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERTODESKTOPOVERSOLDUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERTODESKTOPOVERSOLDUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class AddUserToDesktopOversoldUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserToDesktopOversoldUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddUserAmount, addUserAmount_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserToDesktopOversoldUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddUserAmount, addUserAmount_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(OversoldGroupId, oversoldGroupId_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    AddUserToDesktopOversoldUserGroupRequest() = default ;
    AddUserToDesktopOversoldUserGroupRequest(const AddUserToDesktopOversoldUserGroupRequest &) = default ;
    AddUserToDesktopOversoldUserGroupRequest(AddUserToDesktopOversoldUserGroupRequest &&) = default ;
    AddUserToDesktopOversoldUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserToDesktopOversoldUserGroupRequest() = default ;
    AddUserToDesktopOversoldUserGroupRequest& operator=(const AddUserToDesktopOversoldUserGroupRequest &) = default ;
    AddUserToDesktopOversoldUserGroupRequest& operator=(AddUserToDesktopOversoldUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addUserAmount_ != nullptr
        && this->endUserId_ != nullptr && this->oversoldGroupId_ != nullptr && this->userGroupId_ != nullptr; };
    // addUserAmount Field Functions 
    bool hasAddUserAmount() const { return this->addUserAmount_ != nullptr;};
    void deleteAddUserAmount() { this->addUserAmount_ = nullptr;};
    inline int32_t addUserAmount() const { DARABONBA_PTR_GET_DEFAULT(addUserAmount_, 0) };
    inline AddUserToDesktopOversoldUserGroupRequest& setAddUserAmount(int32_t addUserAmount) { DARABONBA_PTR_SET_VALUE(addUserAmount_, addUserAmount) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline AddUserToDesktopOversoldUserGroupRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // oversoldGroupId Field Functions 
    bool hasOversoldGroupId() const { return this->oversoldGroupId_ != nullptr;};
    void deleteOversoldGroupId() { this->oversoldGroupId_ = nullptr;};
    inline string oversoldGroupId() const { DARABONBA_PTR_GET_DEFAULT(oversoldGroupId_, "") };
    inline AddUserToDesktopOversoldUserGroupRequest& setOversoldGroupId(string oversoldGroupId) { DARABONBA_PTR_SET_VALUE(oversoldGroupId_, oversoldGroupId) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline AddUserToDesktopOversoldUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    std::shared_ptr<int32_t> addUserAmount_ = nullptr;
    std::shared_ptr<string> endUserId_ = nullptr;
    std::shared_ptr<string> oversoldGroupId_ = nullptr;
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
