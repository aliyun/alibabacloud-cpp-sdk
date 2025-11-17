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
    inline string deleteUserModel() const { DARABONBA_PTR_GET_DEFAULT(deleteUserModel_, "") };
    inline DeleteDataLevelPermissionRuleUsersRequest& setDeleteUserModel(string deleteUserModel) { DARABONBA_PTR_SET_VALUE(deleteUserModel_, deleteUserModel) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deleteUserModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
