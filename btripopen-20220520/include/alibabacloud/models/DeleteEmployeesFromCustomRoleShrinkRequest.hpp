// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEMPLOYEESFROMCUSTOMROLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEMPLOYEESFROMCUSTOMROLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class DeleteEmployeesFromCustomRoleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEmployeesFromCustomRoleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(role_id, roleId_);
      DARABONBA_PTR_TO_JSON(user_id_list, userIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEmployeesFromCustomRoleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(role_id, roleId_);
      DARABONBA_PTR_FROM_JSON(user_id_list, userIdListShrink_);
    };
    DeleteEmployeesFromCustomRoleShrinkRequest() = default ;
    DeleteEmployeesFromCustomRoleShrinkRequest(const DeleteEmployeesFromCustomRoleShrinkRequest &) = default ;
    DeleteEmployeesFromCustomRoleShrinkRequest(DeleteEmployeesFromCustomRoleShrinkRequest &&) = default ;
    DeleteEmployeesFromCustomRoleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEmployeesFromCustomRoleShrinkRequest() = default ;
    DeleteEmployeesFromCustomRoleShrinkRequest& operator=(const DeleteEmployeesFromCustomRoleShrinkRequest &) = default ;
    DeleteEmployeesFromCustomRoleShrinkRequest& operator=(DeleteEmployeesFromCustomRoleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roleId_ != nullptr
        && this->userIdListShrink_ != nullptr; };
    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline DeleteEmployeesFromCustomRoleShrinkRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // userIdListShrink Field Functions 
    bool hasUserIdListShrink() const { return this->userIdListShrink_ != nullptr;};
    void deleteUserIdListShrink() { this->userIdListShrink_ = nullptr;};
    inline string userIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(userIdListShrink_, "") };
    inline DeleteEmployeesFromCustomRoleShrinkRequest& setUserIdListShrink(string userIdListShrink) { DARABONBA_PTR_SET_VALUE(userIdListShrink_, userIdListShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> roleId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userIdListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
