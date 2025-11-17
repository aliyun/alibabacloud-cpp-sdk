// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATALEVELPERMISSIONRULEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDATALEVELPERMISSIONRULEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class AddDataLevelPermissionRuleUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataLevelPermissionRuleUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddUserModel, addUserModel_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataLevelPermissionRuleUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddUserModel, addUserModel_);
    };
    AddDataLevelPermissionRuleUsersRequest() = default ;
    AddDataLevelPermissionRuleUsersRequest(const AddDataLevelPermissionRuleUsersRequest &) = default ;
    AddDataLevelPermissionRuleUsersRequest(AddDataLevelPermissionRuleUsersRequest &&) = default ;
    AddDataLevelPermissionRuleUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataLevelPermissionRuleUsersRequest() = default ;
    AddDataLevelPermissionRuleUsersRequest& operator=(const AddDataLevelPermissionRuleUsersRequest &) = default ;
    AddDataLevelPermissionRuleUsersRequest& operator=(AddDataLevelPermissionRuleUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addUserModel_ == nullptr; };
    // addUserModel Field Functions 
    bool hasAddUserModel() const { return this->addUserModel_ != nullptr;};
    void deleteAddUserModel() { this->addUserModel_ = nullptr;};
    inline string addUserModel() const { DARABONBA_PTR_GET_DEFAULT(addUserModel_, "") };
    inline AddDataLevelPermissionRuleUsersRequest& setAddUserModel(string addUserModel) { DARABONBA_PTR_SET_VALUE(addUserModel_, addUserModel) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> addUserModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
