// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUIACCOUNTPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUIACCOUNTPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ModifyUIAccountPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUIAccountPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUIAccountPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    ModifyUIAccountPasswordRequest() = default ;
    ModifyUIAccountPasswordRequest(const ModifyUIAccountPasswordRequest &) = default ;
    ModifyUIAccountPasswordRequest(ModifyUIAccountPasswordRequest &&) = default ;
    ModifyUIAccountPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUIAccountPasswordRequest() = default ;
    ModifyUIAccountPasswordRequest& operator=(const ModifyUIAccountPasswordRequest &) = default ;
    ModifyUIAccountPasswordRequest& operator=(ModifyUIAccountPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountPassword_ == nullptr && this->clusterId_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ModifyUIAccountPasswordRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string getAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline ModifyUIAccountPasswordRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyUIAccountPasswordRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // The username of the cluster management system to be reset. If no user has been created for the HBase instance, the default username is **root**.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // The new password for the target username of the cluster management system. The password must be 2 to 30 characters in length and must contain one or more of the following character types: uppercase letters, lowercase letters, special characters, and digits. Supported special characters are underscores (_) and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> accountPassword_ {};
    // The ID of the target instance. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/144595.html) operation to obtain the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
