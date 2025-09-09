// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSERVICESHAREDACCOUNTSREQUESTSHAREDACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_ADDSERVICESHAREDACCOUNTSREQUESTSHAREDACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class AddServiceSharedAccountsRequestSharedAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddServiceSharedAccountsRequestSharedAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(UserAliUid, userAliUid_);
    };
    friend void from_json(const Darabonba::Json& j, AddServiceSharedAccountsRequestSharedAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(UserAliUid, userAliUid_);
    };
    AddServiceSharedAccountsRequestSharedAccounts() = default ;
    AddServiceSharedAccountsRequestSharedAccounts(const AddServiceSharedAccountsRequestSharedAccounts &) = default ;
    AddServiceSharedAccountsRequestSharedAccounts(AddServiceSharedAccountsRequestSharedAccounts &&) = default ;
    AddServiceSharedAccountsRequestSharedAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddServiceSharedAccountsRequestSharedAccounts() = default ;
    AddServiceSharedAccountsRequestSharedAccounts& operator=(const AddServiceSharedAccountsRequestSharedAccounts &) = default ;
    AddServiceSharedAccountsRequestSharedAccounts& operator=(AddServiceSharedAccountsRequestSharedAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->permission_ != nullptr
        && this->userAliUid_ != nullptr; };
    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string permission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline AddServiceSharedAccountsRequestSharedAccounts& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // userAliUid Field Functions 
    bool hasUserAliUid() const { return this->userAliUid_ != nullptr;};
    void deleteUserAliUid() { this->userAliUid_ = nullptr;};
    inline string userAliUid() const { DARABONBA_PTR_GET_DEFAULT(userAliUid_, "") };
    inline AddServiceSharedAccountsRequestSharedAccounts& setUserAliUid(string userAliUid) { DARABONBA_PTR_SET_VALUE(userAliUid_, userAliUid) };


  protected:
    // The permissions on the service. Valid values:
    // 
    // *   Deployable: Permissions to deploy the service.
    // *   Accessible: Permissions to access the service.
    // 
    // This parameter is required.
    std::shared_ptr<string> permission_ = nullptr;
    // The Alibaba Cloud account ID of the user.
    // 
    // This parameter is required.
    std::shared_ptr<string> userAliUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
