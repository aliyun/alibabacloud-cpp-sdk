// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEMPLOYEESFROMCUSTOMROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEMPLOYEESFROMCUSTOMROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class DeleteEmployeesFromCustomRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEmployeesFromCustomRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(role_id, roleId_);
      DARABONBA_PTR_TO_JSON(user_id_list, userIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEmployeesFromCustomRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(role_id, roleId_);
      DARABONBA_PTR_FROM_JSON(user_id_list, userIdList_);
    };
    DeleteEmployeesFromCustomRoleRequest() = default ;
    DeleteEmployeesFromCustomRoleRequest(const DeleteEmployeesFromCustomRoleRequest &) = default ;
    DeleteEmployeesFromCustomRoleRequest(DeleteEmployeesFromCustomRoleRequest &&) = default ;
    DeleteEmployeesFromCustomRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEmployeesFromCustomRoleRequest() = default ;
    DeleteEmployeesFromCustomRoleRequest& operator=(const DeleteEmployeesFromCustomRoleRequest &) = default ;
    DeleteEmployeesFromCustomRoleRequest& operator=(DeleteEmployeesFromCustomRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roleId_ != nullptr
        && this->userIdList_ != nullptr; };
    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline DeleteEmployeesFromCustomRoleRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline const vector<string> & userIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
    inline vector<string> userIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
    inline DeleteEmployeesFromCustomRoleRequest& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
    inline DeleteEmployeesFromCustomRoleRequest& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> roleId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> userIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
