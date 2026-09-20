// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ModifyAccountPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NewAccountPassword, newAccountPassword_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NewAccountPassword, newAccountPassword_);
    };
    ModifyAccountPasswordRequest() = default ;
    ModifyAccountPasswordRequest(const ModifyAccountPasswordRequest &) = default ;
    ModifyAccountPasswordRequest(ModifyAccountPasswordRequest &&) = default ;
    ModifyAccountPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountPasswordRequest() = default ;
    ModifyAccountPasswordRequest& operator=(const ModifyAccountPasswordRequest &) = default ;
    ModifyAccountPasswordRequest& operator=(ModifyAccountPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->clusterId_ == nullptr && this->newAccountPassword_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ModifyAccountPasswordRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyAccountPasswordRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // newAccountPassword Field Functions 
    bool hasNewAccountPassword() const { return this->newAccountPassword_ != nullptr;};
    void deleteNewAccountPassword() { this->newAccountPassword_ = nullptr;};
    inline string getNewAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(newAccountPassword_, "") };
    inline ModifyAccountPasswordRequest& setNewAccountPassword(string newAccountPassword) { DARABONBA_PTR_SET_VALUE(newAccountPassword_, newAccountPassword) };


  protected:
    // The name of the account.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // The ID of target instance. You can call the DescribeInstances operation to obtain target instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The new password of the account. The password must meet the following requirements:
    // * Contains at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // * Is 8 to 32 characters in length.
    // * Special characters include `!@#$%^&*()_+-=`.
    // 
    // This parameter is required.
    shared_ptr<string> newAccountPassword_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
