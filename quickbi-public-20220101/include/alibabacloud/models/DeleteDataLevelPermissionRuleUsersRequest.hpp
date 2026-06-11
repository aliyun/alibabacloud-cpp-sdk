// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATALEVELPERMISSIONRULEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATALEVELPERMISSIONRULEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class DeleteDataLevelPermissionRuleUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataLevelPermissionRuleUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteUserModel, deleteUserModel_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataLevelPermissionRuleUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteUserModel, deleteUserModel_);
    };
    DeleteDataLevelPermissionRuleUsersRequest() = default ;
    DeleteDataLevelPermissionRuleUsersRequest(const DeleteDataLevelPermissionRuleUsersRequest &) = default ;
    DeleteDataLevelPermissionRuleUsersRequest(DeleteDataLevelPermissionRuleUsersRequest &&) = default ;
    DeleteDataLevelPermissionRuleUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataLevelPermissionRuleUsersRequest() = default ;
    DeleteDataLevelPermissionRuleUsersRequest& operator=(const DeleteDataLevelPermissionRuleUsersRequest &) = default ;
    DeleteDataLevelPermissionRuleUsersRequest& operator=(DeleteDataLevelPermissionRuleUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteUserModel_ == nullptr; };
    // deleteUserModel Field Functions 
    bool hasDeleteUserModel() const { return this->deleteUserModel_ != nullptr;};
    void deleteDeleteUserModel() { this->deleteUserModel_ = nullptr;};
    inline string getDeleteUserModel() const { DARABONBA_PTR_GET_DEFAULT(deleteUserModel_, "") };
    inline DeleteDataLevelPermissionRuleUsersRequest& setDeleteUserModel(string deleteUserModel) { DARABONBA_PTR_SET_VALUE(deleteUserModel_, deleteUserModel) };


  protected:
    // {
    // "ruleId": "a5bb24da-***-a891683e14da", // The ID of the row-level permission rule.
    // "cubeId": "7c7223ae-***-3c744528014b", // The ID of the dataset.
    // "delModel": {
    // "userGroups": [
    // "0d5fb19b-***-1248fc27ca51", // The ID of the user group to remove.
    // "3d2c23d4-***-f6390f325c2d"
    // ],
    // "users": [
    // "433&#x34;***358", // The ID of the user to remove.
    // "Huang***&#x33;fa822"
    // ]
    // }
    // }
    // 
    // This parameter is required.
    shared_ptr<string> deleteUserModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
